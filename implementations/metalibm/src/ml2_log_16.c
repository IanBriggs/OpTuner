/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_16.c --poly-degree 16 \
 *     --fname ml2_log_16 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>



double ml2_log_16(double);
double ml2_log_16(double x){
    double x_man;
    double r;
    double pm_15;
    double pa_15;
    double pm_14;
    double pa_14;
    double pm_13;
    double pa_13;
    double pm_12;
    double pa_12;
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
    double tmp;
    double tmp1;
    int32_t x_exp_int;
    double x_exp;
    double x_mul;
    double offset;
    double retval;
    
    x_man = ml_mantissa_extraction_fp64(x);
    r = x_man * 0.5;
    pm_15 = r * -0x1.d929f2a983e63p2;
    pa_15 = 0x1.81393e14e36b9p6 + pm_15;
    pm_14 = r * pa_15;
    pa_14 = -0x1.2649c0b247eedp9 + pm_14;
    pm_13 = r * pa_14;
    pa_13 = 0x1.18321fbcd48d6p11 + pm_13;
    pm_12 = r * pa_13;
    pa_12 = -0x1.746e88da35351p12 + pm_12;
    pm_11 = r * pa_12;
    pa_11 = 0x1.6ec1f1e325fc4p13 + pm_11;
    pm_10 = r * pa_11;
    pa_10 = -0x1.1527491b5bc42p14 + pm_10;
    pm_9 = r * pa_10;
    pa_9 = 0x1.48740e50b6835p14 + pm_9;
    pm_8 = r * pa_9;
    pa_8 = -0x1.352e59d3ed5a5p14 + pm_8;
    pm_7 = r * pa_8;
    pa_7 = 0x1.d16a6b6051717p13 + pm_7;
    pm_6 = r * pa_7;
    pa_6 = -0x1.18839a1ce4adfp13 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.0df44160e5f1p12 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = -0x1.9bcfd6e79901p10 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.ece06b19cd213p8 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.cc54feaeae791p6 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.634243e9910dep4 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.daeef1dd6bbaap1 + tmp;
    x_exp_int = ml_exp_extraction_dirty_fp64(x);
    x_exp = x_exp_int;
    x_mul = x_exp + 1.0;
    offset = x_mul * 0x1.62e42fefa39efp-1;
    retval = offset + tmp1;
    return retval;
}
