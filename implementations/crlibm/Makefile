

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Irequirements/crlibm/include
CFLAGS += -Iinclude


.PHONY: all
all: obj/crlibm_functions.a


obj/crlibm_functions.a: obj/crlibm_functions.o requirements/crlibm/lib/libcrlibm.a
	ld -r -o $@ $^


obj/crlibm_functions.o: src/crlibm_functions.c include/crlibm_functions.h requirements/crlibm/lib/libcrlibm.a | obj
	$(CC) -static ${CFLAGS} src/crlibm_functions.c  -c -o $@


requirements/crlibm/lib/libcrlibm.a: requirements/build.sh
	./requirements/build.sh



obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj
	$(RM) -r requirements/crlibm_src

.PHONY: distclean
distclean: clean
	$(RM) -r requirements/crlibm
	$(RM) -r requirements/log.txt
	$(RM) -r requirements/debug_environment.sh

