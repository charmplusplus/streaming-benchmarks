#include "streamtest.decl.h"
#include "./includes/utils.hpp"
#include <iostream>
#include <time.h>
#include <json.hpp>
#include <sstream>

#define INVALID_STREAM_NO 9999999

using json = nlohmann::json;

class Main : public CBase_Main {
	CProxy_Readers readers;
	CProxy_Filters filters;
	CProxy_Transformers transformers;
	CProxy_Validators validators;
	CProxy_Writers writers;

public:
	Main_SDAG_CODE
	Main(CkArgMsg* m){
		int num_records = atoi(m->argv[1]);
		json records = generate_and_save_json(num_records, "generated_inputs.json");
		delete m;
		
		readers = CProxy_Readers::ckNew(num_records, records.dump(), 1);
		Ck::Stream::createNewStream(CkCallback(CkIndex_Main::readersValidatorsStreamMade(0), thisProxy));
	}
	Main(CkMigrateMessage* msg) {}
	void pup(PUP::er &p) {}
	void readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* msg) {
		size_t id = msg -> id;
		
		validators = CProxy_Validators::ckNew(1);
		readers.setOutputStreamId(id);
		validators.setInputStreamId(id);
		Ck::Stream::createNewStream(CkCallback(CkIndex_Main::validatorsFiltersStreamMade(0), thisProxy));
	};

	void validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* msg) {
		size_t id = msg -> id;
		filters = CProxy_Filters::ckNew(1);
		validators.setOutputStreamId(id);
		filters.setInputStreamId(id);
		
		Ck::Stream::createNewStream(CkCallback(CkIndex_Main::filtersTransformersStreamMade(0), thisProxy));

	}
	void filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* msg) {
		size_t id = msg -> id;
		transformers = CProxy_Transformers::ckNew(1);
		filters.setOutputStreamId(id);
		transformers.setInputStreamId(id);
		Ck::Stream::createNewStream(CkCallback(CkIndex_Main::transformersWritersStreamMade(0), thisProxy));
	}
	void transformersWritersStreamMade(Ck::Stream::StreamIdMessage* msg) {
		size_t id = msg -> id;
		writers = CProxy_Writers::ckNew(1);
		transformers.setOutputStreamId(id);
		writers.setInputStreamId(id);
	}

};

class Readers : public CBase_Readers {
	StreamToken output_id = INVALID_STREAM_NO; 
	std::string records_str = "";
	int num_records;
public:
	Readers_SDAG_CODE
	Readers() {}
	Readers(int num_records, std::string records_str): num_records(num_records), records_str(records_str) {}
	void pup(PUP::er &p) {}

	void setOutputStreamId(StreamToken id) {
		output_id = id;
		beginWork();
	}
	Readers(CkMigrateMessage* msg) {};


	void beginWork() {
		if (output_id == INVALID_STREAM_NO) return;
		json records = json::parse(records_str);
		for (auto& item : records) {
			std::string json_string = item.dump();

			Ck::Stream::putRecord(output_id, (void*)json_string.c_str(), sizeof(char) * json_string.size() + 1);
			Ck::Stream::flushLocalStream(output_id);
		}
		Ck::Stream::closeWriteStream(output_id);
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
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Validators::recvData(0), thisProxy[thisIndex]));
		} else {
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
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Filters::recvData(0), thisProxy[thisIndex]));
		} else {
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
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Transformers::recvData(0), thisProxy[thisIndex]));
		} else {
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
public:
	Writers_SDAG_CODE
	Writers() {
		std::ostringstream oss;
		oss << "outfile_" << thisIndex << ".txt";
		outfile_name = oss.str();
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
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Writers::recvData(0), thisProxy[thisIndex]));
		} else {
			fd.close();
			CkCallback cb = CkCallback(CkReductionTarget(Writers, finishedTask), thisProxy[0]);
			contribute(cb);
		}
	}
};

#include "streamtest.def.h"