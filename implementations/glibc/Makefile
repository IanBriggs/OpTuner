

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion
CFLAGS += -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Iinclude

CFLAGS += -Irequirements/glibc/include
GLIBC_MATH = -L$(abspath ./requirements/glibc/lib) -lm -Wl,-rpath=$(abspath ./requirements/glibc/lib) -lm


.PHONY: all
all: obj/glibc_functions.a


obj/glibc_functions.a: obj/glibc_functions.o
	ld -r -o $@ $^


obj/glibc_functions.o: src/glibc_functions.c include/glibc_functions.h requirements/glibc/lib/libm.a | obj
	$(CC) -static ${CFLAGS} $< ${GLIBC_MATH} -c -o $@


requirements/glibc/lib/libm.a: requirements/build.sh
	./$<




obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: slim
slim:
	$(RM) -r requirements/glibc_src
	$(RM) -r requirements/glibc_build


.PHONY: distclean
distclean: clean slim
	$(RM) requirements/log.txt
	$(RM) -r requirements/glibc


