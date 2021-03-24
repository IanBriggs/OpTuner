CC ?= gcc
CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -fno-builtin -DNDEBUG

GLIBC_O = ../glibc/obj/glibc_functions.o
GLIBC_I = ../glibc/include/

HAND_O = ../hand_generated/obj/hand_generated_functions.o
HAND_I = ../hand_generated/include

METALIBM_O = ../metalibm/obj/metalibm_functions.a
METALIBM_I = ../metalibm/include

MPFR_O = ../mpfr/obj/mpfr_functions.o
MPFR_I = ../mpfr/include

ORACLE_O = obj/oracle_functions.o
ORACLE_I = include

TABLE_O = obj/table_generation.o
TABLE_I = include

OBJ = ${GLIBC_O} ${HAND_O} ${METALIBM_O} ${MPFR_O} ${ORACLE_O} ${TABLE_O}
INC = -I${GLIBC_I} -I${HAND_I} -I${METALIBM_I} -I${MPFR_I} -I${ORACLE_I} -I${TABLE_I}


BINS = $(foreach s,$(wildcard src/*_error.c),$(patsubst src/%_error.c,bin/%_error,$s))


.PHONY: all
all: ${BINS}


bin/%_error: src/%_error.c ${OBJ} | bin
	$(CC) ${CFLAGS} ${INC} $< ${OBJ} -lmpfr -lm -o $@


${GLIBC_O}:
	$(MAKE) -C ../glibc

${HAND_O}:
	$(MAKE) -C ../hand_generated

${METALIBM_O}:
	$(MAKE) -C ../metalibm

${MPFR_O}:
	$(MAKE) -C ../mpfr

${ORACLE_O}: src/oracle_functions.c include/oracle_functions.h | obj
	$(CC) ${CFLAGS} -Iinclude $< -c -o $@

${TABLE_O}: src/table_generation.c include/table_generation.h | obj
	$(CC) ${CFLAGS} -Iinclude $< -c -o $@




bin:
	mkdir bin

obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r bin
	$(RM) -r obj


.PHONY: distclean
distclean: clean
	$(RM) -r data

