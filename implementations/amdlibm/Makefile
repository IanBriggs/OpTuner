

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Wno-sign-conversion -Wno-conversion
CFLAGS += -Irequirements/amdlibm/include
CFLAGS += -Iinclude


.PHONY: all
all: obj/amdlibm_functions.a


obj/amdlibm_functions.a: obj/amdlibm_functions.o requirements/amdlibm/lib/libalm.a
	ld -r -o $@ $^


obj/amdlibm_functions.o: src/amdlibm_functions.c include/amdlibm_functions.h requirements/amdlibm/lib/libalm.a | obj
	$(CC) -static ${CFLAGS} $<  -c -o $@


requirements/amdlibm/lib/libalm.a: requirements/build.sh
	./$<




obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: slim
slim:
	$(RM) -r requirements/amdlibm_src


.PHONY: distclean
distclean: clean slim
	$(RM) requirements/log.txt
	$(RM) -r requirements/amdlibm



