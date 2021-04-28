

CC ?= gcc
CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -fno-builtin -DNDEBUG
CFLAGS += -Iinclude

CRLIBM_O = ../crlibm/obj/crlibm_functions.a
CRLIBM_I = ../crlibm/include/

GLIBC_O = ../glibc/obj/glibc_functions.o
GLIBC_I = ../glibc/include/

METALIBM_O = ../metalibm/obj/metalibm_functions.a
METALIBM_I = ../metalibm/include

MPFR_O = ../mpfr/obj/mpfr_functions.o
MPFR_I = ../mpfr/include

OPENLIBM_O = ../openlibm/obj/openlibm_functions.a
OPENLIBM_I = ../openlibm/include/

POVRAY_O = ../povray/obj/povray_functions.o
POVRAY_I = ../povray/include/

VDT_O = ../vdt/obj/vdt_functions.a
VDT_I = ../vdt/include/


ORACLE_O = obj/oracle_functions.o
ORACLE_I = include

TABLE_O = obj/table_generation.o
TABLE_I = include

OBJ = ${CRLIBM_O} ${GLIBC_O} ${METALIBM_O} ${MPFR_O} ${ORACLE_O} ${TABLE_O} ${OPENLIBM_O} ${POVRAY_O} ${VDT_O}
INC = -I${CRLIBM_I} -I${GLIBC_I} -I${METALIBM_I} -I${MPFR_I} -I${ORACLE_I} -I${TABLE_I} -I${OPENLIBM_I} -I${POVRAY_I} -I${VDT_I}


BINS = $(foreach s,$(wildcard src/*_error.c),$(patsubst src/%_error.c,bin/%_error,$s))


.PHONY: all
all: ${BINS}


bin/%_error: src/%_error.c ${OBJ} | bin
	$(CC) ${CFLAGS} ${INC} $< ${OBJ} -lmpfr -lm -o $@


${CRLIBM_O}:
	$(MAKE) -C ../crlibm

${GLIBC_O}:
	$(MAKE) -C ../glibc

${METALIBM_O}:
	$(MAKE) -C ../metalibm

${MPFR_O}:
	$(MAKE) -C ../mpfr

${OPENLIBM_O}:
	$(MAKE) -C ../openlibm

${POVRAY_O}:
	$(MAKE) -C ../povray

${VDT_O}:
	$(MAKE) -C ../vdt


${ORACLE_O}: src/oracle_functions.c include/oracle_functions.h | obj
	$(CC) ${CFLAGS} $< -c -o $@

${TABLE_O}: src/table_generation.c include/table_generation.h | obj
	$(CC) ${CFLAGS} $< -c -o $@




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

