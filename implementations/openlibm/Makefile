

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion
CFLAGS += -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Iinclude

CFLAGS += -Irequirements/openlibm/include
CFLAGS += -Irequirements/openlibm/include/openlibm


.PHONY: all
all: obj/openlibm_functions.a


obj/openlibm_functions.a: obj/openlibm_functions.o requirements/openlibm/lib/libopenlibm.a
	ld -r -o $@ $^


obj/openlibm_functions.o: src/openlibm_functions.c include/openlibm_functions.h requirements/openlibm/lib/libopenlibm.a | obj
	$(CC) -static ${CFLAGS} $<  -c -o $@


requirements/openlibm/lib/libopenlibm.a: requirements/build.sh
	./$<




obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: slim
slim:
	$(RM) -r requirements/openlibm_src


.PHONY: distclean
distclean: clean slim
	$(RM) requirements/log.txt
	$(RM) requirements/debug_enironment.sh
	$(RM) -r requirements/openlibm


