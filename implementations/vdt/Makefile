

CXX ?= g++

CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Wno-float-conversion -Wno-conversion
CFLAGS += -Irequirements/vdt/include
CFLAGS += -Iinclude


.PHONY: all
all: obj/vdt_functions.a


obj/vdt_functions.a: obj/vdt_functions.o requirements/vdt/lib/libvdt.a
	ld -r -o $@ $^


obj/vdt_functions.o: src/vdt_functions.cpp include/vdt_functions.h requirements/vdt/lib/libvdt.a | obj
	$(CXX) -static ${CFLAGS} $<  -c -o $@


requirements/vdt/lib/libvdt.a: requirements/build.sh
	./$<



obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj
	$(RM) -r requirements/vdt_src

.PHONY: distclean
distclean: clean
	$(RM) -r requirements/vdt
	$(RM) -r requirements/log.txt
	$(RM) -r requirements/debug_enironment.sh

