-include ../../common.mk
CHARMC=../../../bin/charmc $(OPTS)

TOTAL_NUM_RECORDS ?= 118518519
GENERATE_RECORDS ?= 1
RUN_ID ?= 0

all: streamtest 

streamtest: streamtest.ci streamtest.cpp
	$(CHARMC) streamtest.ci
	$(CHARMC) -DTOTAL_NUM_RECORDS=$(TOTAL_NUM_RECORDS) -DGENERATE_RECORDS=${GENERATE_RECORDS} -DRUN_ID=${RUN_ID} streamtest.cpp -o $@ -module CkStream

clean:
	rm -f *.o *.decl.h *.def.h streamtest test*

