CC ?= gcc
CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -fno-builtin -DNDEBUG

LDFLAGS = -lmpfr -lrt -lm


CRLIBM_O = ../crlibm/obj/crlibm_functions.a
CRLIBM_I = ../crlibm/include

GLIBC_O = ../glibc/obj/glibc_functions.a
GLIBC_I = ../glibc/include/

METALIBM_O = ../metalibm/obj/metalibm_functions.a
METALIBM_I = ../metalibm/include

MPFR_O = ../mpfr/obj/mpfr_functions.o
MPFR_I = ../mpfr/include

OPENLIBM_O = ../openlibm/obj/openlibm_functions.a
OPENLIBM_I = ../openlibm/include

RLIBM_O = ../rlibm/obj/rlibm_functions.a
RLIBM_I = ../rlibm/include

VDT_O = ../vdt/obj/vdt_functions.a
VDT_I = ../vdt/include




OBJ = ${CRLIBM_O} ${GLIBC_O} ${METALIBM_O} ${MPFR_O} ${OPENLIBM_O} ${RLIBM_O} ${VDT_O}
INC = -I${CRLIBM_I} -I${GLIBC_I} -I${METALIBM_I} -I${MPFR_I} -I${OPENLIBM_I} -I${RLIBM_I} -I${VDT_I}


CFILES = $(filter-out src/time_all.c,$(wildcard src/*.c))
IFILES = $(wildcard include/*.h)
OBJFILES = $(foreach s,${CFILES},$(patsubst src/%.c,obj/%.o,$s))

KERNCFILES = $(wildcard kern/*.c)
KERNIFILES = $(wildcard kern/*.h)
KERNOBJFILES = $(foreach s,${KERNCFILES},$(patsubst kern/%.c,obj/%.o,$s))

KERNMAINS = $(foreach s,$(wildcard kern_main/*.c),$(patsubst kern_main/%.c,bin/%,$s))

.PHONY: all
all: bin/time_all ${KERNMAINS}


bin/time_all: src/time_all.c ${OBJFILES} ${OBJ} | bin
	$(CC) ${CFLAGS} ${INC} -Iinclude $< ${OBJFILES} ${OBJ} ${LDFLAGS} -o $@

bin/%: kern_main/%.c ${KERNOBJFILES} ${OBJFILES} ${OBJ} | bin
	$(CC) ${CFLAGS} ${INC} -Iinclude -Ikern $< ${KERNOBJFILES} ${OBJFILES} ${OBJ} ${LDFLAGS} -o $@

obj/%.o: src/%.c ${IFILES} | obj
	$(CC) ${CFLAGS} -Iinclude $< -c -o $@

obj/%.o: kern/%.c ${IFILES} ${KERNIFILES} | obj
	$(CC) ${CFLAGS} ${INC} -Iinclude -Ikern $< -c -o $@


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

${RLIBM_O}:
	$(MAKE) -C ../rlibm

${VDT_O}:
	$(MAKE) -C ../vdt


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


