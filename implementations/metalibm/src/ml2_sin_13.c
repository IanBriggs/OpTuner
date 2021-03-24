/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_sin_13.c --poly-degree 13 \
 *     --fname ml2_sin_13 --verbose Info
 * 
**/
#include <stdint.h>
#include <math.h>



double ml2_sin_13(double);
double ml2_sin_13(double x){
    double sign_x;
    double abs_x;
    double unround_k;
    double k;
    double whole;
    double r;
    double flip;
    int64_t ik;
    int64_t part;
    int64_t pre_part;
    int do_flip;
    double tmp;
    double X2_;
    double pm_11;
    double pa_11;
    double pm_9;
    double pa_9;
    double pm_7;
    double pa_7;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double tmp1;
    double tmp2;
    double tmp3;
    int tmp4;
    double tmp5;
    double tmp6;
    double tmp7;
    
    sign_x = copysign(0x1p0, x);
    abs_x = fabs(x);
    unround_k = abs_x * 0x1.45f306dc9c883p-1;
    k = floor(unround_k);
    whole = k * 0x1.921fb54442d18p0;
    r = abs_x - whole;
    flip = 0x1.921fb54442d18p0 - r;
    ik = k;
    part = ik % INT64_C(4);
    pre_part = part % INT64_C(2);
    do_flip = pre_part == INT64_C(0);
    tmp = do_flip ? r : flip;
    X2_ = tmp * tmp;
    pm_11 = X2_ * 0x1.52a851954275cp-33;
    pa_11 = -0x1.ae00bdd2a86a8p-26 + pm_11;
    pm_9 = X2_ * pa_11;
    pa_9 = 0x1.71dce463cf737p-19 + pm_9;
    pm_7 = X2_ * pa_9;
    pa_7 = -0x1.a019fce360596p-13 + pm_7;
    pm_5 = X2_ * pa_7;
    pa_5 = 0x1.11111109020a6p-7 + pm_5;
    pm_3 = X2_ * pa_5;
    pa_3 = -0x1.5555555540916p-3 + pm_3;
    tmp1 = X2_ * pa_3;
    tmp2 = 0x1.ffffffffffdc9p-1 + tmp1;
    tmp3 = tmp * tmp2;
    tmp4 = part >= INT64_C(2);
    tmp5 =  - tmp3;
    tmp6 = tmp4 ? tmp5 : tmp3;
    tmp7 = tmp6 * sign_x;
    return tmp7;
}
