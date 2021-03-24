CC=gcc
CFLAGS=-Wall -Wextra -Wconversion -O3 -march=native -mtune=native -fno-builtin -DNDEBUG




.PHONY: all
all: obj/mpfr_functions.o


obj/mpfr_functions.o:  include/mpfr_functions.h | obj
	$(CC) ${CFLAGS} -Iinclude src/mpfr_functions.c -lmpfr -c -o obj/mpfr_functions.o


obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: distclean
distclean: clean


