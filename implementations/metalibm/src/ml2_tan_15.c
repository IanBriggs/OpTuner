/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_tan_15.c --poly-degree 15 \
 *     --fname ml2_tan_15 --verbose Info
 * 
**/
#include <stdint.h>
#include <math.h>



double ml2_tan_15(double);
double ml2_tan_15(double x){
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
    pm_13 = X2_ * 0x1.22b46d5ec0e44p-8;
    pa_13 = -0x1.696dd6bd003bap-15 + pm_13;
    pm_11 = X2_ * pa_13;
    pa_11 = 0x1.66edf27a0cdfep-7 + pm_11;
    pm_9 = X2_ * pa_11;
    pa_9 = 0x1.5bd12658e5412p-6 + pm_9;
    pm_7 = X2_ * pa_9;
    pa_7 = 0x1.baf69be018faap-5 + pm_7;
    pm_5 = X2_ * pa_7;
    pa_5 = 0x1.110cbcb9c46bep-3 + pm_5;
    pm_3 = X2_ * pa_5;
    pa_3 = 0x1.555565e2bc673p-2 + pm_3;
    tmp9 = X2_ * pa_3;
    tmp10 = 0x1.fffffff5b0758p-1 + tmp9;
    tmp11 = tmp8 * tmp10;
    tmp12 = tmp2 || tmp1;
    tmp13 = 1.0 / tmp11;
    tmp14 = tmp12 ? tmp13 : tmp11;
    retval = tmp14 * sign_x;
    return retval;
}
