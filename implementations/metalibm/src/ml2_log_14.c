/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_14.c --poly-degree 14 \
 *     --fname ml2_log_14 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>



double ml2_log_14(double);
double ml2_log_14(double x){
    double x_man;
    double r;
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
    pm_13 = r * -0x1.1f534e3a2b067p2;
    pa_13 = 0x1.9e4809b57617ep5 + pm_13;
    pm_12 = r * pa_13;
    pa_12 = -0x1.15d9366cdd798p8 + pm_12;
    pm_11 = r * pa_12;
    pa_11 = 0x1.cbff13a3549afp9 + pm_11;
    pm_10 = r * pa_11;
    pa_10 = -0x1.06dbb271e37c1p11 + pm_10;
    pm_9 = r * pa_10;
    pa_9 = 0x1.b77ffa25971f2p11 + pm_9;
    pm_8 = r * pa_9;
    pa_8 = -0x1.15cf08b497c4cp12 + pm_8;
    pm_7 = r * pa_8;
    pa_7 = 0x1.0ea5a8dcacc1ap12 + pm_7;
    pm_6 = r * pa_7;
    pa_6 = -0x1.9a563711865aep11 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.e55e390a92996p10 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = -0x1.be82d7aae1217p9 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.3d35188e8f41ap8 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.5afde98086db5p6 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.360300d355382p4 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.ca17bd3b71d82p1 + tmp;
    x_exp_int = ml_exp_extraction_dirty_fp64(x);
    x_exp = x_exp_int;
    x_mul = x_exp + 1.0;
    offset = x_mul * 0x1.62e42fefa39efp-1;
    retval = offset + tmp1;
    return retval;
}
