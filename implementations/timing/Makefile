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



OBJ = ${GLIBC_O} ${HAND_O} ${METALIBM_O} ${MPFR_O}
INC = -I${GLIBC_I} -I${HAND_I} -I${METALIBM_I} -I${MPFR_I}


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
	$(CC) ${CFLAGS} ${INC} -Iinclude $< ${OBJFILES} ${OBJ} -lmpfr -lm -lrt -o $@

bin/%: kern_main/%.c ${KERNOBJFILES} ${OBJFILES} ${OBJ} | bin
	$(CC) ${CFLAGS} ${INC} -Iinclude -Ikern $< ${KERNOBJFILES} ${OBJFILES} ${OBJ} -lmpfr -lm -lrt -o $@

obj/%.o: src/%.c ${IFILES} | obj
	$(CC) ${CFLAGS} -Iinclude $< -c -o $@

obj/%.o: kern/%.c ${IFILES} ${KERNIFILES} | obj
	$(CC) ${CFLAGS} ${INC} -Iinclude -Ikern $< -c -o $@


${GLIBC_O}:
	$(MAKE) -C ../glibc

${MPFR_O}:
	$(MAKE) -C ../mpfr

${HAND_O}:
	$(MAKE) -C ../hand_generated



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


