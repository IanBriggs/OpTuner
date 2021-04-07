

CXX ?= g++

CXXFLAGS ?= -Wall -Wextra -Wconversion
CXXFLAGS += -O3 -march=native -mtune=native -DNDEBUG
CXXFLAGS += -Iinclude

CXXFLAGS += -Wno-float-conversion -Wno-conversion
CXXFLAGS += -Irequirements/vdt/include


.PHONY: all
all: obj/vdt_functions.a


obj/vdt_functions.a: obj/vdt_functions.o requirements/vdt/lib/libvdt.a
	ld -r -o $@ $^


obj/vdt_functions.o: src/vdt_functions.cpp include/vdt_functions.h requirements/vdt/lib/libvdt.a | obj
	$(CXX) -static ${CXXFLAGS} $< -c -o $@


requirements/vdt/lib/libvdt.a: requirements/build.sh
	./$<




obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: slim
slim:
	$(RM) -r requirements/vdt_src


.PHONY: distclean
distclean: clean slim
	$(RM) requirements/log.txt
	$(RM) -r requirements/vdt


