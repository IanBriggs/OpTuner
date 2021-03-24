/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_sin_19.c --poly-degree 19 \
 *     --fname ml2_sin_19 --verbose Info
 * 
**/
#include <stdint.h>
#include <math.h>



double ml2_sin_19(double);
double ml2_sin_19(double x){
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
    double pm_17;
    double pa_17;
    double pm_15;
    double pa_15;
    double pm_13;
    double pa_13;
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
    double X3_;
    double pm_1;
    double pa_1;
    int tmp1;
    double tmp2;
    double tmp3;
    double tmp4;
    
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
    pm_17 = X2_ * -0x1.79788be11bcecp-58;
    pa_17 = 0x1.902dd55f5409p-49 + pm_17;
    pm_15 = X2_ * pa_17;
    pa_15 = -0x1.ae672c08db96p-41 + pm_15;
    pm_13 = X2_ * pa_15;
    pa_13 = 0x1.612421a64f915p-33 + pm_13;
    pm_11 = X2_ * pa_13;
    pa_11 = -0x1.ae6455b8d9fa2p-26 + pm_11;
    pm_9 = X2_ * pa_11;
    pa_9 = 0x1.71de3a53faf73p-19 + pm_9;
    pm_7 = X2_ * pa_9;
    pa_7 = -0x1.a01a01a016efcp-13 + pm_7;
    pm_5 = X2_ * pa_7;
    pa_5 = 0x1.11111111110dcp-7 + pm_5;
    pm_3 = X2_ * pa_5;
    pa_3 = -0x1.5555555555555p-3 + pm_3;
    X3_ = tmp * X2_;
    pm_1 = X3_ * pa_3;
    pa_1 = tmp + pm_1;
    tmp1 = part >= INT64_C(2);
    tmp2 =  - pa_1;
    tmp3 = tmp1 ? tmp2 : pa_1;
    tmp4 = tmp3 * sign_x;
    return tmp4;
}
