/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_exp_12.c --poly-degree 12 \
 *     --fname ml2_exp_12 --verbose Info
 * 
**/
#include <stdint.h>
#include <math.h>
#include <ml_support_lib.h>



double ml2_exp_12(double);
double ml2_exp_12(double x){
    double unround_k;
    double k;
    double whole;
    double r;
    double pm_11;
    double pa_11;
    double pm_10;
    double pa_10;
    double pm_9;
    double pa_9;
    double pm_8;
    double pa_8;
    double pm_7;
    double pa_7;
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
    double pm_0;
    double pa_0;
    int64_t ik;
    double twok;
    double retval;
    
    unround_k = x * 0x1.71547652b82fep0;
    k = floor(unround_k);
    whole = k * 0x1.62e42fefa39efp-1;
    r = x - whole;
    pm_11 = r * 0x1.92ef740040bc9p-29;
    pa_11 = 0x1.90bf4706f9ee9p-26 + pm_11;
    pm_10 = r * pa_11;
    pa_10 = 0x1.2a06b9b570bep-22 + pm_10;
    pm_9 = r * pa_10;
    pa_9 = 0x1.71ac824800dbbp-19 + pm_9;
    pm_8 = r * pa_9;
    pa_8 = 0x1.a01d04f257033p-16 + pm_8;
    pm_7 = r * pa_8;
    pa_7 = 0x1.a019e20a33cbfp-13 + pm_7;
    pm_6 = r * pa_7;
    pa_6 = 0x1.6c16c24a2f67ap-10 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.1111110d191d4p-7 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = 0x1.555555556b834p-5 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.5555555555128p-3 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = 0x1.0000000000005p-1 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1p0 + pm_1;
    pm_0 = r * pa_1;
    pa_0 = 0x1p0 + pm_0;
    ik = k;
    twok = ml_exp_insertion_fp64(ik);
    retval = pa_0 * twok;
    return retval;
}
