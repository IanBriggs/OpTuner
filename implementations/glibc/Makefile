

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion
CFLAGS += -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Iinclude

GLIBC_MATH = -L$(abspath ./requirements/butchered_libm) -lm -Wl,-rpath=$(abspath ./requirements/butchered_libm) -lm


.PHONY: all
all: obj/glibc_functions.a


obj/glibc_functions.a: obj/glibc_functions.o requirements/butchered_libm/libm.a
	ld -r -o $@ $^


obj/glibc_functions.o: src/glibc_functions.c include/glibc_functions.h requirements/butchered_libm/libm.a | obj
	$(CC) -static ${CFLAGS} $< ${GLIBC_MATH} -c -o obj/glibc_functions.o


requirements/butchered_libm/libm.a: requirements/build.sh
	./$<




obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: slim
slim:
	$(RM) -r requirements/glibc
	$(RM) -r requirements/glibc_build


.PHONY: distclean
distclean: clean slim
	$(RM) requirements/log.txt
	$(RM) requirements/debug_enironment.sh
	$(RM) -r requirements/butchered_libm


