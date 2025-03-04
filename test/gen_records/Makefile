-include ../../common.mk
CHARMC=../../../bin/charmc $(OPTS)

TOTAL_NUM_RECORDS ?= 1000

all: streamtest 

streamtest: streamtest.ci streamtest.cpp
	$(CHARMC) streamtest.ci
	$(CHARMC) -g -DTOTAL_NUM_RECORDS=$(TOTAL_NUM_RECORDS) streamtest.cpp -o $@ -module CkStream

clean:
	rm -f *.o *.decl.h *.def.h streamtest test*

