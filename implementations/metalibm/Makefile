

CC ?= gcc

CFLAGS ?= -Wall -Wextra -Wconversion -O3 -march=native -mtune=native -DNDEBUG
CFLAGS += -Wno-float-conversion -Wno-sign-conversion -Wno-conversion
CFLAGS += -Irequirements/metalibm/metalibm_core/support_lib
CFLAGS += -Iinclude

WIDE_COS_DEGS= 2 6 8 12 14 18 20

ML_EXPS = $(foreach i,$(shell seq 2 12), src/ml_exp_$i.c)

ML_FUNCS = ${ML_EXPS}

ML2_RAW_COSS = $(foreach i,$(shell seq 2 2 20), src/ml2_raw_cos_$i.c)
ML2_RAW_EXPS = $(foreach i,$(shell seq 1 12), src/ml2_raw_exp_$i.c)
ML2_RAW_LOGS = $(foreach i,$(shell seq 1 16), src/ml2_raw_log_$i.c)
ML2_RAW_SINS = $(foreach i,$(shell seq 1 2 19), src/ml2_raw_sin_$i.c)
ML2_RAW_TANS = $(foreach i,$(shell seq 1 2 25), src/ml2_raw_tan_$i.c)
ML2_RAW_WIDE_COSS = $(foreach i,${WIDE_COS_DEGS}, src/ml2_raw_wide_cos_$i.c)
ML2_RAW_WIDE_SINS = $(foreach i,$(shell seq 3 2 19), src/ml2_raw_wide_sin_$i.c)

ML2_COSS = $(foreach i,$(shell seq 2 2 20), src/ml2_cos_$i.c)
ML2_EXPS = $(foreach i,$(shell seq 1 12), src/ml2_exp_$i.c)
ML2_LOGS = $(foreach i,$(shell seq 1 16), src/ml2_log_$i.c)
ML2_SINS = $(foreach i,$(shell seq 1 2 19), src/ml2_sin_$i.c)
ML2_TANS = $(foreach i,$(shell seq 1 2 25), src/ml2_tan_$i.c)
ML2_WIDE_COSS = $(foreach i,${WIDE_COS_DEGS}, src/ml2_wide_cos_$i.c)
ML2_WIDE_SINS = $(foreach i,$(shell seq 3 2 19), src/ml2_wide_sin_$i.c)

ML2_FUNCS = \
${ML2_COSS} ${ML2_EXPS} ${ML2_LOGS} ${ML2_SINS} ${ML2_TANS} \
${ML2_WIDE_COSS} ${ML2_WIDE_SINS} \
${ML2_RAW_COSS} ${ML2_RAW_EXPS} ${ML2_RAW_LOGS} ${ML2_RAW_SINS} ${ML2_RAW_TANS} \
${ML2_RAW_WIDE_COSS} ${ML2_RAW_WIDE_SINS}

FUNCS = ${ML_FUNCS} ${ML2_FUNCS}

OBJS = $(foreach n,${FUNCS},$(patsubst src/%.c,obj/%.o,$n))

GENS = $(foreach n,${ML2_FUNCS},$(patsubst src/%.c,gen/%.c,$n))


.PHONY: all
all: obj/metalibm_functions.a

.PHONY: generate
generate: gen/ml_gen_done ${GENS} | src


obj/metalibm_functions.a:  ${OBJS} include/metalibm_functions.h accuracy_specification.json
	ld -r -o $@ ${OBJS}


obj/%.o: src/%.c requirements/metalibm/metalibm_core/support_lib/ml_support_lib.h | obj
	$(CC) ${CFLAGS} $< -c -o $@



gen/ml_gen_done: | gen
	@$(RM) gen/ml_gen_doing
	@touch gen/ml_gen_doing
	./metalibm_function_generate.sh
	@mv -f gen/ml_gen_doing $@

${ML_FUNCS}: gen/ml_gen_done
	@test -f $@ || $(RM) $<
	@test -f $@ || $(MAKE) ${AM_MAKEFLAGS} $<}


gen/ml2_cos_%.c: my_scripts/ml2_cos.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_cos_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_exp_%.c: my_scripts/ml2_exp.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_exp_$*" --verbose Info ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_log_%.c: my_scripts/ml2_log.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_log_$*" --verbose Info ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_sin_%.c: my_scripts/ml2_sin.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_sin_$*" --verbose Info ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_tan_%.c: my_scripts/ml2_tan.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_tan_$*" --verbose Info ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_wide_cos_%.c: my_scripts/ml2_wide_cos.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_wide_cos_$*" --verbose Info | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_wide_sin_%.c: my_scripts/ml2_wide_sin.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_wide_sin_$*" --verbose Info ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp




gen/ml2_raw_cos_%.c: my_scripts/ml2_cos.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_raw_cos_$*" --verbose Info --skip-reduction | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_raw_exp_%.c: my_scripts/ml2_exp.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_raw_exp_$*" --verbose Info --skip-reduction ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_raw_log_%.c: my_scripts/ml2_log.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_raw_log_$*" --verbose Info --skip-reduction ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_raw_sin_%.c: my_scripts/ml2_sin.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_raw_sin_$*" --verbose Info --skip-reduction ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_raw_tan_%.c: my_scripts/ml2_tan.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_raw_tan_$*" --verbose Info --skip-reduction ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_raw_wide_cos_%.c: my_scripts/ml2_wide_cos.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_raw_wide_cos_$*" --verbose Info --skip-reduction | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp

gen/ml2_raw_wide_sin_%.c: my_scripts/ml2_wide_sin.py | gen
	$<  --output $@ --poly-degree $* --fname "ml2_raw_wide_sin_$*" --verbose Info --skip-reduction ${ML2_FLAGS} | sed "s|^|//|g" > $@.tmp
	cat $@.tmp >> $@
	$(RM) $@.tmp


accuracy_specification.json: ${FUNCS}
	grep spec src/*.c | sed 's|^[^:]*://spec: ||g' > $@

include/metalibm_functions.h: ${FUNCS} | include
	cat ${FUNCS} | grep -o "double ml2\?_\(raw_\)\?\(wide_\)\?[a-z]*_[0-9]*(double);" > $@

requirements/metalibm/metalibm_core/support_lib/ml_support_lib.h: requirements/build.sh
	./$<



gen:
	mkdir gen

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
	$(RM) -r gen
