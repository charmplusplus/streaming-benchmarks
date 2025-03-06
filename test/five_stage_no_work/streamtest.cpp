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
#define TOTAL_NUM_RECORDS 9000000
#endif

#ifndef RUN_ID
#define RUN_ID 0
#endif

// random_device rd;
// mt19937 gen(rd());


using json = nlohmann::json;

class Main : public CBase_Main {
	CProxy_Generators generators;
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
		generators = CProxy_Generators::ckNew(readers, num_prods);
		
		#if GENERATE_RECORDS
		int chunk_size = num_total_records / num_prods;
		int remainder = num_total_records % num_prods;
		for (int i = 0; i < num_prods; ++i)
			generators[i].generateJsonData(chunk_size + (i < remainder ? 1 : 0), WRITE_RECORDS);
		#else
		generators.readJsonData("/sample");
		// std::ifstream file("./generated_inputs.json");
		// if (!file) {
		// 	std::cerr << "Error: Could not open the file!" << std::endl;
		// 	CkExit(0);
		// }
		// std::stringstream buffer;
		// buffer << file.rdbuf();
		// std::string fileContents = buffer.str();
		// json records = json::parse(fileContents);
		// CkPrintf("WARNING: Reading directly from file; record count: %d. THIS IS EXTREMELY SLOW.\n", records.size());
		
		// int start = 0;
		// int chunk_size = num_total_records / num_prods;
		// int remainder = num_total_records % num_prods;
		// for (int i = 0; i < num_prods; ++i) {
		// 	int end = start + chunk_size + (i < remainder ? 1 : 0);
		// 	json partition(records.begin() + start, records.begin() + end);
		// 	start = end;
		// 	readers[i].setInput(partition.dump());
		// }
		#endif
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

class Generators : public CBase_Generators {
	std::string outfile;
	// CProxy_Main mainProxy;
	CProxy_Readers readers;
public:
	Generators() {}
	Generators(CProxy_Readers reader_proxy) {
		readers = reader_proxy;
		outfile = "/data-" + std::to_string(thisIndex) + ".json";
	}

	void generateJsonData(int num_record) {
		#if WRITE_RECORDS
		std::string full_path = INPUT_FILE_BASE + std::string("/run-") + std::to_string(RUN_ID) + std::string("/input") + outfile;
		json records = generate_and_save_json(num_record, full_path, true);
		#else
		json records = generate_and_save_json(num_record, "", false);
		#endif
		readers[thisIndex].setInput(records.dump());
	}

	// target_folder must have leading slash
	void readJsonData(std::string target_folder) {
		// /scratch/mzu/yanniz3/CkStream/{target_folder}/run-{thisIndex}.json
		std::ifstream file(std::string(INPUT_FILE_BASE) + target_folder + "/data-" + std::to_string(thisIndex) + ".json");
		if (!file) {
			std::cerr << "Error: Could not open the file!" << std::endl;
			CkExit(0);
		}
		std::stringstream buffer;
		buffer << file.rdbuf();
		std::string fileContents = buffer.str();
		readers[thisIndex].setInput(fileContents);
	}

};

class Readers : public CBase_Readers {
	StreamToken output_id = INVALID_STREAM_NO; 
	std::string records_str = "";
	int num_records;
	bool begin_work_flag = false;
	bool received_input_flag = false;
	CProxy_Main mainProxy;
public:
	Readers_SDAG_CODE
	Readers() {}
	Readers(int num_records, CProxy_Main main): num_records(num_records), mainProxy(main) {}
	void pup(PUP::er &p) {}

	void setInput(std::string input) {
		records_str = input;
		received_input_flag = 1;
		CkCallback cb = CkCallback(CkReductionTarget(Main, doneReceivingInput), mainProxy);
		contribute(cb);
	}

	void setOutputStreamId(StreamToken id) {
		output_id = id;
		beginWork();
	}
	Readers(CkMigrateMessage* msg) {};


	void beginWork() {
		if (output_id == INVALID_STREAM_NO || !received_input_flag || begin_work_flag) return;
		begin_work_flag = true;
		json records = json::parse(records_str);
		// CkPrintf("Reader %d beginning work, num_records %d\n", thisIndex, records.size());
		int num_records_per_prod = TOTAL_NUM_RECORDS / (2 * CkNumPes());
		int index = num_records_per_prod * thisIndex;
		for (int i = index; i < index + num_records_per_prod; ++i) {
			std::string json_string = records[i].dump();

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
		
		if (msg->num_bytes) {
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
		
		if (msg->num_bytes) {
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
			Ck::Stream::putRecord(output_id, data, msg->num_bytes);
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
		// outfile_name = std::string(INPUT_FILE_BASE) + "/run-" + std::to_string(int(RUN_ID)) + std::string("/out/out-") + std::to_string(thisIndex) + std::string(".json");
		// fd.open(outfile_name);
		// if (!fd.is_open()) {
		// 	CkPrintf("Error opening file\n");
		// }
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
		if (msg->status == Ck::Stream::StreamStatus::STREAM_OK) {
			delete msg;
			Ck::Stream::getRecord(input_id, CkCallback(CkIndex_Writers::recvData(0), thisProxy[thisIndex]));
		} else {
			delete msg;
			// fd.close();
			CkCallback cb = CkCallback(CkReductionTarget(Writers, finishedTask), thisProxy[0]);
			contribute(cb);
		}
	}
};

#include "streamtest.def.h"