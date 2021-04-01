

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion
CFLAGS += -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Iinclude

CFLAGS += -Irequirements/crlibm/include


.PHONY: all
all: obj/crlibm_functions.a


obj/crlibm_functions.a: obj/crlibm_functions.o requirements/crlibm/lib/libcrlibm.a
	ld -r -o $@ $^


obj/crlibm_functions.o: src/crlibm_functions.c include/crlibm_functions.h requirements/crlibm/lib/libcrlibm.a | obj
	$(CC) -static ${CFLAGS} $<  -c -o $@


requirements/crlibm/lib/libcrlibm.a: requirements/build.sh
	./$<




obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: slim
slim:
	$(RM) -r requirements/crlibm_src


.PHONY: distclean
distclean: clean
	$(RM) requirements/log.txt
	$(RM) requirements/debug_enironment.sh
	$(RM) -r requirements/crlibm

