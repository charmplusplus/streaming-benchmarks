#include "streamtest.decl.h"
#include "./includes/utils.hpp"
#include <iostream>
#include <time.h>
#include <sstream>
#include <json.hpp>
#include <random>

#define INPUT_FILE_BASE "./out"

#ifndef TOTAL_NUM_RECORDS
#define TOTAL_NUM_RECORDS 9000000
#endif

// random_device rd;
// mt19937 gen(rd());


using json = nlohmann::json;

class Main : public CBase_Main {
	CProxy_Generators generators;
	double start_time;
	double end_time;
public:
	Main_SDAG_CODE
	Main(CkArgMsg* m){
		delete m;
		start_time = CkWallTimer();

		std::uniform_int_distribution<int> dist(1000000, 9999999); // random device defined in utils
		CkPrintf("Num PEs: %d. Total num records: %d, per prod: %d\n", CkNumPes(), TOTAL_NUM_RECORDS, TOTAL_NUM_RECORDS / (CkNumPes()));
	
		int num_prods = CkNumPes();
		int num_total_records = TOTAL_NUM_RECORDS;

		generators = CProxy_Generators::ckNew(thisProxy, num_prods);
		
		int chunk_size = num_total_records / num_prods;
		int remainder = num_total_records % num_prods;
		for (int i = 0; i < num_prods; ++i)
			generators[i].generateJsonData(chunk_size + (i < remainder ? 1 : 0));

	}
	Main(CkMigrateMessage* msg) {}
	void pup(PUP::er &p) {}
};

class Generators : public CBase_Generators {
	std::string outfile;
	CProxy_Main mainProxy;
public:
	Generators() {}
	Generators(CProxy_Main main_proxy) {
		mainProxy = main_proxy;
		// writes output to "./out/data-#.json"
		outfile = "/data-" + std::to_string(thisIndex) + ".json";
	}

	void generateJsonData(int num_record) {
		std::string full_path = INPUT_FILE_BASE + outfile;
		generate_and_save_json(num_record, full_path, true);
		CkCallback cb = CkCallback(CkReductionTarget(Main, doneCreatingInput), mainProxy);
		contribute(cb);
	}
};


#include "streamtest.def.h"