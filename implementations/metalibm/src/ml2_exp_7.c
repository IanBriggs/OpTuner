/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_exp_7.c --poly-degree 7 --fname \
 *     ml2_exp_7 --verbose Info
 * 
**/
#include <stdint.h>
#include <math.h>
#include <ml_support_lib.h>



double ml2_exp_7(double);
double ml2_exp_7(double x){
    double unround_k;
    double k;
    double whole;
    double r;
    double pm_6;
    double pa_6;
    double pm_5;
    double pa_5;
    double pm_4;
    double pa_4;
    double pm_3;
    double pa_3;
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    int64_t ik;
    double twok;
    double retval;
    
    unround_k = x * 0x1.71547652b82fep0;
    k = floor(unround_k);
    whole = k * 0x1.62e42fefa39efp-1;
    r = x - whole;
    pm_6 = r * 0x1.253e17fd78628p-12;
    pa_6 = 0x1.5341dd24bd194p-10 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.12e32cb90b39ep-7 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = 0x1.55302409ff038p-5 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.5556ebea5027ep-3 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = 0x1.ffffef3bfbdfap-2 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.00000020bf7d4p0 + pm_1;
    tmp = r * pa_1;
    tmp1 = 0x1.ffffffffb68e5p-1 + tmp;
    ik = k;
    twok = ml_exp_insertion_fp64(ik);
    retval = tmp1 * twok;
    return retval;
}
