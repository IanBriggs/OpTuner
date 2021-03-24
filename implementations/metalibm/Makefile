

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -fno-builtin -DNDEBUG
CFLAGS += -Wno-float-conversion -Wno-sign-conversion -Wno-conversion
CFLAGS += -Irequirements/metalibm/metalibm_core/support_lib
CFLAGS += -Iinclude

ML_EXPS = $(foreach i,$(shell seq 2 12), src/ml_exp_$i.c)
ML_LOGS = $(foreach i,$(shell seq 1 16), src/ml_log_$i.c)
ML_SINS = $(foreach i,$(shell seq 1 5), src/ml_sin_$i.c)

ML2_RAW_EXPS = $(foreach i,$(shell seq 1 12), src/ml2_raw_exp_$i.c)
ML2_RAW_LOGS = $(foreach i,$(shell seq 1 16), src/ml2_raw_log_$i.c)
ML2_RAW_SINS = $(foreach i,$(shell seq 1 2 19), src/ml2_raw_sin_$i.c)
ML2_RAW_TANS = $(foreach i,$(shell seq 1 2 25), src/ml2_raw_tan_$i.c)

ML2_EXPS = $(foreach i,$(shell seq 1 12), src/ml2_exp_$i.c)
ML2_LOGS = $(foreach i,$(shell seq 1 16), src/ml2_log_$i.c)
ML2_SINS = $(foreach i,$(shell seq 1 2 19), src/ml2_sin_$i.c)
ML2_TANS = $(foreach i,$(shell seq 1 2 25), src/ml2_tan_$i.c)

FUNCS = ${ML_EXPS} ${ML_LOGS} ${ML_SINS} \
${ML2_EXPS} ${ML2_LOGS} ${ML2_SINS} ${ML2_TANS} \
${ML2_RAW_EXPS} ${ML2_RAW_LOGS} ${ML2_RAW_SINS} ${ML2_RAW_TANS}
ML_FUNCS = ${ML_EXPS} ${ML_LOGS} ${ML_SINS}

OBJS = $(foreach n,${FUNCS},$(patsubst src/%.c,obj/%.o,$n))
ML_OBJS = $(foreach n,${ML_FUNCS},$(patsubst src/%.c,obj/%.o,$n))



.PHONY: all
all: obj/metalibm_functions.a


.PHONY: ml
ml: ${ML_OBJS}


obj/metalibm_functions.a:  ${OBJS} include/metalibm_functions.h
	ar cr $@ ${OBJS}


obj/%.o: src/%.c | obj
	$(CC) ${CFLAGS} $< -c -o $@


src/ml_exp_%.c: scripts/ml_exp.py | src
	$< --precision double --output $@ --poly-degree $* --fname "ml_exp_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

src/ml_log_%.c: scripts/ml_log.py | src
	$< --precision double --output $@ --poly-degree $* --fname "ml_log_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

src/ml_sin_%.c: scripts/ml_sin.py | src
	$< --precision double --output $@ --poly-degree $* --fname "ml_sin_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp


src/ml2_exp_%.c: my_scripts/ml2_exp.py | src
	$<  --output $@ --poly-degree $* --fname "ml2_exp_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

src/ml2_log_%.c: my_scripts/ml2_log.py | src
	$<  --output $@ --poly-degree $* --fname "ml2_log_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

src/ml2_sin_%.c: my_scripts/ml2_sin.py | src
	$<  --output $@ --poly-degree $* --fname "ml2_sin_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

src/ml2_tan_%.c: my_scripts/ml2_tan.py | src
	$<  --output $@ --poly-degree $* --fname "ml2_tan_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp


src/ml2_raw_exp_%.c: my_scripts/ml2_exp.py | src
	$<  --output $@ --poly-degree $* --fname "ml2_raw_exp_$*" --verbose Info --skip-reduction | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

src/ml2_raw_log_%.c: my_scripts/ml2_log.py | src
	$<  --output $@ --poly-degree $* --fname "ml2_raw_log_$*" --verbose Info --skip-reduction | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

src/ml2_raw_sin_%.c: my_scripts/ml2_sin.py | src
	$<  --output $@ --poly-degree $* --fname "ml2_raw_sin_$*" --verbose Info --skip-reduction | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

src/ml2_raw_tan_%.c: my_scripts/ml2_tan.py | src
	$<  --output $@ --poly-degree $* --fname "ml2_raw_tan_$*" --verbose Info --skip-reduction | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp


include/metalibm_functions.h: ${FUNCS} | include
	cat ${FUNCS} | grep -o "double ml2\?_\(raw_\)\?[a-z]*_[0-9]*(double);" > $@


obj:
	mkdir obj

src:
	mkdir src

include:
	mkdir include



.PHONY: clean
clean:
	$(RM) -r obj
	$(RM) -r my_scripts/__pycache__


.PHONY: distclean
distclean: clean
	$(RM) -r include
	$(RM) -r src

