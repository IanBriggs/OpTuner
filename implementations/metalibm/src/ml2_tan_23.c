/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_tan_23.c --poly-degree 23 \
 *     --fname ml2_tan_23 --verbose Info
 * 
**/
#include <stdint.h>
#include <math.h>



double ml2_tan_23(double);
double ml2_tan_23(double x){
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
    pm_21 = X2_ * 0x1.b5bd38fa3007ap-13;
    pa_21 = -0x1.10d25bb2e3602p-12 + pm_21;
    pm_19 = X2_ * pa_21;
    pa_19 = 0x1.43dca696abd1fp-11 + pm_19;
    pm_17 = X2_ * pa_19;
    pa_17 = 0x1.6d0d721f95fa6p-12 + pm_17;
    pm_15 = X2_ * pa_17;
    pa_15 = 0x1.97b7644a785a8p-10 + pm_15;
    pm_13 = X2_ * pa_15;
    pa_13 = 0x1.d34dcc04ff29p-9 + pm_13;
    pm_11 = X2_ * pa_13;
    pa_11 = 0x1.2295ede0befp-7 + pm_11;
    pm_9 = X2_ * pa_11;
    pa_9 = 0x1.664d14b4334c9p-6 + pm_9;
    pm_7 = X2_ * pa_9;
    pa_7 = 0x1.ba1bb41394b07p-5 + pm_7;
    pm_5 = X2_ * pa_7;
    pa_5 = 0x1.111110e9bc2f1p-3 + pm_5;
    pm_3 = X2_ * pa_5;
    pa_3 = 0x1.5555555597263p-2 + pm_3;
    tmp9 = X2_ * pa_3;
    tmp10 = 0x1.ffffffffffeddp-1 + tmp9;
    tmp11 = tmp8 * tmp10;
    tmp12 = tmp2 || tmp1;
    tmp13 = 1.0 / tmp11;
    tmp14 = tmp12 ? tmp13 : tmp11;
    retval = tmp14 * sign_x;
    return retval;
}
