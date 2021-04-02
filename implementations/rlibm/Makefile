

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion
CFLAGS += -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Iinclude

CFLAGS += -Wno-sign-conversion -Wno-conversion
CFLAGS += -Irequirements/rlibm/include
CFLAGS += -Irequirements/rlibm/include/rlibm


.PHONY: all
all: obj/rlibm_functions.a


obj/rlibm_functions.a: obj/rlibm_functions.o requirements/rlibm/lib/floatMathLib.a
	ld -r -o $@ $^


obj/rlibm_functions.o: src/rlibm_functions.c include/rlibm_functions.h requirements/rlibm/lib/floatMathLib.a | obj
	$(CC) -static ${CFLAGS} $<  -c -o $@


requirements/rlibm/lib/floatMathLib.a: requirements/build.sh
	./$<




obj:
	mkdir obj


.PHONY: clean
clean:
	$(RM) -r obj


.PHONY: slim
slim:
	$(RM) -r requirements/rlibm_src


.PHONY: distclean
distclean: clean slim
	$(RM) requirements/log.txt
	$(RM) -r requirements/rlibm


