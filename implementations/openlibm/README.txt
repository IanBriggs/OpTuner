
# Given error bounds based on file:

## Sin
* src/k_sin.c: no claims on accuracy
* src/s_sin.c: "nearly rounded"
* i387/s_sin.S: no claims on accuracy

## SinCos
* src/s_sincos.c: no claims on accuracy

## Cos
* src/k_cos.c: no claims on accuracy
* src/s_cos.c: "nearly rounded"
* i387/s_cos.S: no claims on accuracy

## Tan
* src/s_tan.c: "nearly rounded"
* src/k_tan.c: changable via argument, either 2 ulp or "accurately"
* i387/s_tan.S: no claims on accuracy

## Exp
* src/e_exp.c: "according to an error analysis, the error is always less than 1 ulp"
* src/k_exp.c: no claims on accuracy
* bsdsrc/b_exp.c: underestimate of 0.869 ulp from 1,156,000 random samples (on a VAX)
* i387/e_exp.S: "less than one ulp"

## Log
* src/k_log.h: "according to an error analysis, the error is always less than 1 ulp"
* src/e_log.c: "according to an error analysis, the error is always less than 1 ulp"
* bsdsrc/b_log.c: less than 1 ulp, based on "Table-driven implementation of the logarithm function in IEEE floating-point arithmetic"
* i387/e_log.S: no claims on accuracy
