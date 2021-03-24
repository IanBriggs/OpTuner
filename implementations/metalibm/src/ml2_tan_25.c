/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_tan_25.c --poly-degree 25 \
 *     --fname ml2_tan_25 --verbose Info
 * 
**/
#include <stdint.h>
#include <math.h>



double ml2_tan_25(double);
double ml2_tan_25(double x){
    double sign_x;
    double abs_x;
    double unround_k;
    double k;
    int64_t ik;
    int64_t part;
    int tmp;
    int tmp1;
    double whole;
    double r;
    int tmp2;
    double tmp3;
    double tmp4;
    double tmp5;
    double tmp6;
    double tmp7;
    double tmp8;
    double X2_;
    double pm_23;
    double pa_23;
    double pm_21;
    double pa_21;
    double pm_19;
    double pa_19;
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
    double tmp9;
    double tmp10;
    double tmp11;
    int tmp12;
    double tmp13;
    double tmp14;
    double retval;
    
    sign_x = copysign(0x1p0, x);
    abs_x = fabs(x);
    unround_k = abs_x * 0x1.45f306dc9c883p0;
    k = floor(unround_k);
    ik = k;
    part = ik % INT64_C(4);
    tmp = part == INT64_C(3);
    tmp1 = part == INT64_C(2);
    whole = k * 0x1.921fb54442d18p-1;
    r = abs_x - whole;
    tmp2 = part == INT64_C(1);
    tmp3 = 0x1.921fb54442d18p-1 - r;
    tmp4 = tmp2 ? tmp3 : r;
    tmp5 =  - r;
    tmp6 = tmp1 ? tmp5 : tmp4;
    tmp7 = r - 0x1.921fb54442d18p-1;
    tmp8 = tmp ? tmp7 : tmp6;
    X2_ = tmp8 * tmp8;
    pm_23 = X2_ * 0x1.97a5aba2e5f27p-14;
    pa_23 = -0x1.3cf73a41bdaebp-13 + pm_23;
    pm_21 = X2_ * pa_23;
    pa_21 = 0x1.525b10ae21e08p-12 + pm_21;
    pm_19 = X2_ * pa_21;
    pa_19 = 0x1.3ccc4f21efa33p-14 + pm_19;
    pm_17 = X2_ * pa_19;
    pa_17 = 0x1.5e2b1c21a859p-11 + pm_17;
    pm_15 = X2_ * pa_17;
    pa_15 = 0x1.77138a0efb4a9p-10 + pm_15;
    pm_13 = X2_ * pa_15;
    pa_13 = 0x1.d78aa91527d5dp-9 + pm_13;
    pm_11 = X2_ * pa_13;
    pa_11 = 0x1.226797467160bp-7 + pm_11;
    pm_9 = X2_ * pa_11;
    pa_9 = 0x1.664f96c4fd8b6p-6 + pm_9;
    pm_7 = X2_ * pa_9;
    pa_7 = 0x1.ba1b9f95f4846p-5 + pm_7;
    pm_5 = X2_ * pa_7;
    pa_5 = 0x1.11111114f1e71p-3 + pm_5;
    pm_3 = X2_ * pa_5;
    pa_3 = 0x1.555555554fd95p-2 + pm_3;
    tmp9 = X2_ * pa_3;
    tmp10 = 0x1.000000000000ap0 + tmp9;
    tmp11 = tmp8 * tmp10;
    tmp12 = tmp2 || tmp1;
    tmp13 = 1.0 / tmp11;
    tmp14 = tmp12 ? tmp13 : tmp11;
    retval = tmp14 * sign_x;
    return retval;
}
