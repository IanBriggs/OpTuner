

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Wno-sign-conversion -Wno-conversion
CFLAGS += -Irequirements/openlibm/include
CFLAGS += -Irequirements/openlibm/include/openlibm
CFLAGS += -Iinclude


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
	$(RM) -r requirements/openlibm_src

.PHONY: distclean
distclean: clean
	$(RM) -r requirements/openlibm
	$(RM) -r requirements/log.txt
	$(RM) -r requirements/debug_enironment.sh

