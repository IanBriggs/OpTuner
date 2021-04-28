

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion
CFLAGS += -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Iinclude


.PHONY: all
all: obj/povray_functions.o


obj/povray_functions.o: src/povray_functions.c include/povray_functions.h | obj
	$(CC) ${CFLAGS} $< -c -o $@


obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: distclean
distclean: clean


