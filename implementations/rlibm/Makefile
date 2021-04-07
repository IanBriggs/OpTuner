

CXX ?= g++

CXXFLAGS ?= -Wall -Wextra -Wconversion
CXXFLAGS += -O3 -march=native -mtune=native -DNDEBUG
CXXFLAGS += -Iinclude

CXXFLAGS += -Irequirements/rlibm/include



.PHONY: all
all: obj/rlibm_functions.a


obj/rlibm_functions.a: obj/rlibm_functions.o requirements/rlibm/lib/floatMathLib.a
	ld -r -o $@ $^


obj/rlibm_functions.o: src/rlibm_functions.cpp include/rlibm_functions.h requirements/rlibm/lib/floatMathLib.a | obj
	$(CXX) -static ${CXXFLAGS} $<  -c -o $@


requirements/rlibm/lib/floatMathLib.a: requirements/build.sh
	./$<




obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: slim
slim:
	$(RM) -r requirements/rlibm_src


.PHONY: distclean
distclean: clean slim
	$(RM) requirements/log.txt
	$(RM) -r requirements/rlibm


