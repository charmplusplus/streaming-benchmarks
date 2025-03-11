#include "streamtest.decl.h"
#include "./includes/utils.hpp"
#include <iostream>
#include <time.h>
#include <sstream>
#include <json.hpp>
#include <random>

#define INPUT_FILE_BASE "/scratch/mzu/yanniz3/CkStream"

#define INVALID_STREAM_NO 9999999

#ifndef GENERATE_RECORDS
#define GENERATE_RECORDS 1
#endif

#ifndef WRITE_RECORDS
#define WRITE_RECORDS 0
#endif

#ifndef TOTAL_NUM_RECORDS
#define TOTAL_NUM_RECORDS 1000
#endif

#ifndef RUN_ID
#define RUN_ID 0
#endif

// random_device rd;
// mt19937 gen(rd());


using json = nlohmann::json;

class Main : public CBase_Main {
	// CProxy_Generators generators;
	CProxy_Readers readers;
	CProxy_Filters filters;
	CProxy_Transformers transformers;
	CProxy_Validators validators;
	CProxy_Writers writers;
	double start_time;
	double end_time;
public:
	Main_SDAG_CODE
	Main(CkArgMsg* m){
		delete m;
		start_time = CkWallTimer();

		std::uniform_int_distribution<int> dist(1000000, 9999999); // random device defined in utils
		CkPrintf("Run ID: %d, Num PEs: %d, each stage will have %d chares. Total num records: %d, per prod: %d\n", RUN_ID, CkNumPes(), 2 * CkNumPes(), TOTAL_NUM_RECORDS, TOTAL_NUM_RECORDS / (2 * CkNumPes()));
	
		int num_prods = 2 * CkNumPes();
		int num_total_records = TOTAL_NUM_RECORDS;

		readers = CProxy_Readers::ckNew(num_total_records, thisProxy, num_prods);
		
		start_time = CkWallTimer();
		Ck::Stream::createNewStream(CkCallback(CkIndex_Main::readersValidatorsStreamMade(0), thisProxy));
	}
	Main(CkMigrateMessage* msg) {}
	void pup(PUP::er &p) {}
	void readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* msg) {
		size_t id = msg -> id;
		
		validators = CProxy_Validators::ckNew(2 * CkNumPes());
		readers.setOutputStreamId(id);
		validators.setInputStreamId(id);
		Ck::Stream::createNewStream(CkCallback(CkIndex_Main::validatorsFiltersStreamMade(0), thisProxy));
	};

	void validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* msg) {
		size_t id = msg -> id;
		filters = CProxy_Filters::ckNew(2 * CkNumPes());
		validators.setOutputStreamId(id);
		filters.setInputStreamId(id);
		
		Ck::Stream::createNewStream(CkCallback(CkIndex_Main::filtersTransformersStreamMade(0), thisProxy));

	}
	void filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* msg) {
		size_t id = msg -> id;
		transformers = CProxy_Transformers::ckNew(2 * CkNumPes());
		filters.setOutputStreamId(id);
		transformers.setInputStreamId(id);
		Ck::Stream::createNewStream(CkCallback(CkIndex_Main::transformersWritersStreamMade(0), thisProxy));
	}
	void transformersWritersStreamMade(Ck::Stream::StreamIdMessage* msg) {
		size_t id = msg -> id;
		writers = CProxy_Writers::ckNew(thisProxy, 2 * CkNumPes());
		transformers.setOutputStreamId(id);
		writers.setInputStreamId(id);
	}

	void getEndTime() {
		CkPrintf("Total time spend from creation of readers: %f\n", CkWallTimer() - start_time);
	}

	void getEndTimeAndExit() {
		CkPrintf("Total time spend from creation of readers: %f\n", CkWallTimer() - start_time);
		CkExit(0);
	}

};


class Readers : public CBase_Readers {
	StreamToken output_id = INVALID_STREAM_NO; 
	std::string records_str = "";
	int total_num_records;
	int num_records_to_send;
	int count;
	// bool begin_work_flag = false;
	// bool received_input_flag = false;
	CProxy_Main mainProxy;
public:
	Readers_SDAG_CODE
	Readers() {}
	Readers(int num_records, CProxy_Main main): total_num_records(num_records), mainProxy(main) {}
	void pup(PUP::er &p) {}

	void setOutputStreamId(StreamToken id) {
		output_id = id;
		beginWork();
	}
	Readers(CkMigrateMessage* msg) {};


	void beginWork() {
		if (output_id == INVALID_STREAM_NO) return;
		int chunk_size = total_num_records / (2 * CkNumPes());
		int remainder = total_num_records % (2 * CkNumPes());

		num_records_to_send = chunk_size + (thisIndex < remainder ? 1 : 0);
		// begin_work_flag = true;
		CkCallback cb = CkCallback(CkIndex_Readers::sendData(), thisProxy[thisIndex]);
		cb.send();
	}

	void sendData() {
		json record = generate_record("", false);
		CkPrintf("Reader %d sending record #%d\n", thisIndex, count);
		std::string json_string = record.dump();
		Ck::Stream::putRecord(output_id, (void*)json_string.c_str(), sizeof(char) * json_string.size() + 1);
		++count;
		if (count == num_records_to_send) {
			CkCallback cb = CkCallback(CkReductionTarget(Readers, finishedTask), thisProxy[0]);
			contribute(cb);
		} else {
			CkCallback cb = CkCallback(CkIndex_Readers::sendData(), thisProxy[thisIndex]);
			cb.send();
		}
	}
};

class Validators : public CBase_Validators {
	StreamToken input_id = INVALID_STREAM_NO;	// stream to fetch input from
	StreamToken output_id = INVALID_STREAM_NO; // stream to output to 

public:
	Validators_SDAG_CODE
	Validators() {}
	Validators(CkMigrateMessage* msg) {};
	void pup(PUP::er &p) {}

	void setInputStreamId(StreamToken id) {
		input_id = id;
		beginWork();
	}
	void setOutputStreamId(StreamToken id) {
		output_id = id;
		beginWork();
	}

	void beginWork() {
		if (input_id == INVALID_STREAM_NO || output_id == INVALID_STREAM_NO) return;
		Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Validators::recvData(0), thisProxy[thisIndex]));
	}

	void recvData(Ck::Stream::StreamDeliveryMsg* msg) {
		char* data = (char*)(msg -> data);
		
		if (msg->num_bytes && is_valid(data)) {
			Ck::Stream::putRecord(output_id, data, msg->num_bytes);
			Ck::Stream::flushLocalStream(output_id);
		}
		if (msg->status == Ck::Stream::StreamStatus::STREAM_OK) {
			delete msg;
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Validators::recvData(0), thisProxy[thisIndex]));
		} else {
			delete msg;
			CkCallback cb = CkCallback(CkReductionTarget(Validators, finishedTask), thisProxy[0]);
			contribute(cb);
		}
	}

	bool present_and_not_null(json j, std::string field) {
		return j.contains(field) && !j[field].is_null();
	}

	// return true if all fields present
	bool is_valid(char* cstr) {
		json j = json::parse(cstr);
		return (present_and_not_null(j, "name") && 
				present_and_not_null(j, "age") && 
				present_and_not_null(j, "biometrics") &&
				present_and_not_null(j["biometrics"], "heart_rate") && 
				present_and_not_null(j["biometrics"], "steps") && 
				present_and_not_null(j["biometrics"], "weight_kg") && 
				present_and_not_null(j["biometrics"], "height_m"));
	}
};

class Filters : public CBase_Filters {
	StreamToken input_id = INVALID_STREAM_NO;
	StreamToken output_id = INVALID_STREAM_NO; 

public:
	Filters_SDAG_CODE
	Filters() {}
	Filters(CkMigrateMessage* msg) {};
	void pup(PUP::er &p) {}

	void setInputStreamId(StreamToken id) {
		input_id = id;
		beginWork();
	}
	void setOutputStreamId(StreamToken id) {
		output_id = id;
		beginWork();
	}

	void beginWork() {
		if (input_id == INVALID_STREAM_NO || output_id == INVALID_STREAM_NO) return;
		Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Filters::recvData(0), thisProxy[thisIndex]));
	}
	void recvData(Ck::Stream::StreamDeliveryMsg* msg) {
		if (input_id == INVALID_STREAM_NO || output_id == INVALID_STREAM_NO) return;
		char* data = (char*)(msg->data);
		
		if (msg->num_bytes && !should_filter(data)) {
			Ck::Stream::putRecord(output_id, data, msg->num_bytes);
			Ck::Stream::flushLocalStream(output_id);
		} 

		if (msg->status == Ck::Stream::StreamStatus::STREAM_OK) {
			delete msg;
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Filters::recvData(0), thisProxy[thisIndex]));
		} else {
			delete msg;
			CkCallback cb = CkCallback(CkReductionTarget(Filters, finishedTask), thisProxy[0]);
			contribute(cb);
		}
	}

	bool should_filter(char* cstr) {
		json j = json::parse(cstr);
		return (j["age"] < 25 || j["biometrics"]["heart_rate"] > 90);
	}
};

class Transformers : public CBase_Transformers {
	StreamToken input_id = INVALID_STREAM_NO;
	StreamToken output_id = INVALID_STREAM_NO; 

public:
	Transformers_SDAG_CODE
	Transformers() {}
	Transformers(CkMigrateMessage* msg) {};
	void pup(PUP::er &p) {}

	void setInputStreamId(StreamToken id) {
		input_id = id;
		beginWork();
	}
	void setOutputStreamId(StreamToken id) {
		output_id = id;
		beginWork();
	}

	void beginWork() {
		if (input_id == INVALID_STREAM_NO || output_id == INVALID_STREAM_NO) return;
		Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Transformers::recvData(0), thisProxy[thisIndex]));
	}
	void recvData(Ck::Stream::StreamDeliveryMsg* msg) {
		if (input_id == INVALID_STREAM_NO || output_id == INVALID_STREAM_NO) return;
		char* data = (char*)(msg->data);
		if (msg->num_bytes) {
			std::string transformed_data = (transformJson(data));
			Ck::Stream::putRecord(output_id, (void*)transformed_data.c_str(), sizeof(char) * strlen(transformed_data.c_str()) + 1);
			Ck::Stream::flushLocalStream(output_id);
		}
		if (msg->status == Ck::Stream::StreamStatus::STREAM_OK) {
			delete msg;
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Transformers::recvData(0), thisProxy[thisIndex]));
		} else {
			delete msg;
			CkCallback cb = CkCallback(CkReductionTarget(Transformers, finishedTask), thisProxy[0]);
			contribute(cb);
		}
	}

	double calculatePi(int num_iters) {
		double pi = 0.0;
		int i = 0;
		int sign = 1;
		while (i < num_iters) {
			pi += sign * (4.0 / (2 * i + 1));
			sign = -sign;
			++i;
		}
		return pi;
	}

	std::string transformJson(char* cstr) {
		json j = json::parse(cstr);
		j["biometrics"]["height_in"] = j["biometrics"]["height_m"].get<double>() * 39.3701;
		j["biometrics"]["weight_lb"] = j["biometrics"]["weight_kg"].get<double>() * 2.20462;
		j["pi"] = calculatePi(random_int(10000000, 20000000));
		return j.dump();
	}
};


class Writers : public CBase_Writers {
	StreamToken input_id = INVALID_STREAM_NO;
	std::string outfile_name = "";
	std::ofstream fd;
	CProxy_Main mainProxy;
public:
	Writers_SDAG_CODE
	Writers(CProxy_Main main) {
		mainProxy = main;
		outfile_name = std::string(INPUT_FILE_BASE) + "/run-" + std::to_string(int(RUN_ID)) + std::string("/out/out-") + std::to_string(thisIndex) + std::string(".json");
		fd.open(outfile_name);
		if (!fd.is_open()) {
			CkPrintf("Error opening file\n");
		}
	}
	Writers(CkMigrateMessage* msg) {}
	void pup(PUP::er &p) {}

	void setInputStreamId(StreamToken id) {
		input_id = id;
		beginWork();
	}
	void beginWork() {
		if (input_id == INVALID_STREAM_NO) return;
		Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Writers::recvData(0), thisProxy[thisIndex]));
	}

	void recvData(Ck::Stream::StreamDeliveryMsg* msg) {
		if (input_id == INVALID_STREAM_NO) return;
		if (msg->num_bytes)
			fd << json::parse(msg->data).dump(4) << "\n";
		if (!msg->num_bytes) {
		}
		if (msg->status == Ck::Stream::StreamStatus::STREAM_OK) {
			delete msg;
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Writers::recvData(0), thisProxy[thisIndex]));
		} else {
			delete msg;
			fd.close();
			CkCallback cb = CkCallback(CkReductionTarget(Writers, finishedTask), thisProxy[0]);
			contribute(cb);
		}
	}
};

#include "streamtest.def.h"