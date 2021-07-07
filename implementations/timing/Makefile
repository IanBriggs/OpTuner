CC ?= gcc
CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -fno-builtin -DNDEBUG

LDFLAGS = -lmpfr -lrt -lm


AMDLIBM_O = ../amdlibm/obj/amdlibm_functions.a
AMDLIBM_I = ../amdlibm/include

CRLIBM_O = ../crlibm/obj/crlibm_functions.a
CRLIBM_I = ../crlibm/include

GLIBC_O = ../glibc/obj/glibc_functions.a
GLIBC_I = ../glibc/include/

METALIBM_O = ../metalibm/obj/metalibm_functions.a
METALIBM_I = ../metalibm/include

# MPFR_O = ../mpfr/obj/mpfr_functions.o
# MPFR_I = ../mpfr/include

OPENLIBM_O = ../openlibm/obj/openlibm_functions.a
OPENLIBM_I = ../openlibm/include

POVRAY_O = ../povray/obj/povray_functions.o
POVRAY_I = ../povray/include/

RLIBM_O = ../rlibm/obj/rlibm_functions.a
RLIBM_I = ../rlibm/include

VDT_O = ../vdt/obj/vdt_functions.a
VDT_I = ../vdt/include



OBJ = ${AMDLIBM_O} ${CRLIBM_O} ${GLIBC_O} ${METALIBM_O} ${OPENLIBM_O} ${RLIBM_O} ${POVRAY_O} ${VDT_O}
INC = -I${AMDLIBM_I} -I${CRLIBM_I} -I${GLIBC_I} -I${METALIBM_I} -I${OPENLIBM_I} -I${RLIBM_I} -I${POVRAY_I} -I${VDT_I}


CFILES = $(filter-out src/time_all.c,$(wildcard src/*.c))
IFILES = $(wildcard include/*.h)
OBJFILES = $(foreach s,${CFILES},$(patsubst src/%.c,obj/%.o,$s))

KERNCFILES = $(wildcard kern/*.c)
KERNIFILES = $(wildcard kern/*.h)
KERNOBJFILES = $(foreach s,${KERNCFILES},$(patsubst kern/%.c,obj/%.o,$s))

KERNMAINS = $(foreach s,$(wildcard kern_main/*.c),$(patsubst kern_main/%.c,bin/%,$s))

.PHONY: all
all: bin/time_all ${KERNMAINS} out/expanded_all_functions.h


bin/time_all: src/time_all.c ${OBJFILES} out/all_functions.a | bin
	$(CC) ${CFLAGS} ${INC} -Iinclude $< ${OBJFILES} out/all_functions.a ${LDFLAGS} -o $@

bin/%: kern_main/%.c ${KERNOBJFILES} ${OBJFILES} out/all_functions.a | bin
	$(CC) ${CFLAGS} ${INC} -Iinclude -Ikern $< ${KERNOBJFILES} ${OBJFILES} out/all_functions.a ${LDFLAGS} -o $@

obj/%.o: src/%.c ${IFILES} | obj
	$(CC) ${CFLAGS} -Iinclude $< -c -o $@

obj/%.o: kern/%.c ${IFILES} ${KERNIFILES} | obj
	$(CC) ${CFLAGS} ${INC} -Iinclude -Ikern $< -c -o $@


out/all_functions.a: ${OBJ} | out
	ld -r -o $@ $^

out/expanded_all_functions.h: include/all_functions.h ${OBJ} | out
	@echo "#ifdef __cplusplus" > $@
	@echo "extern \"C\" {" >> $@
	@echo "#endif" >> $@
	@echo "#ifndef EXPANDED_ALL_FUNCTIONS_H" >> $@
	@echo "#define EXPANDED_ALL_FUNCTIONS_H" >> $@
	-$(CC) -E -nostdinc ${INC} $< 2> /dev/null | sed '/^#/d' | sed '/^$$/d' >> $@
	@echo "#ifdef __cplusplus" >> $@
	@echo "}" >> $@
	@echo "#endif" >> $@
	@echo "#endif" >> $@

${AMDLIBM_O}:
	$(MAKE) -C ../amdlibm

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

${RLIBM_O}:
	$(MAKE) -C ../rlibm

${VDT_O}:
	$(MAKE) -C ../vdt


bin:
	mkdir bin

obj:
	mkdir obj

out:
	mkdir out


.PHONY: clean
clean:
	$(RM) -r bin
	$(RM) -r obj
	$(RM) -r out


.PHONY: distclean
distclean: clean


