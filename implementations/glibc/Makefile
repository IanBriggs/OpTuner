CC=gcc
CFLAGS=-Wall -Wextra -Wconversion -O3 -march=native -mtune=native -fno-builtin -DNDEBUG

GLIBC_MATH = -L$(abspath ./glibc_install/butchered_libm) -lm -Wl,-rpath=$(abspath ./glibc_install/butchered_libm) -lm


.PHONY: all
all: obj/glibc_functions.o


obj/glibc_functions.o: glibc_install/butchered_libm/libm.a src/glibc_functions.c include/glibc_functions.h | obj
	$(CC) -static ${CFLAGS} -Iinclude src/glibc_functions.c ${GLIBC_MATH} -c -o obj/glibc_functions.o


glibc_install/butchered_libm/libm.a: compile-glibc.sh
	./compile-glibc.sh



obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r glibc
	$(RM) -r glibc_build
	$(RM) -r obj


.PHONY: distclean
distclean: clean
	$(RM) -r glibc_install
	$(RM) -r obj

