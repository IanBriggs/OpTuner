

#include "time_func.h"

#include "glibc_functions.h"
#include "hand_generated_functions.h"
#include "mpfr_functions.h"
#include "metalibm_functions.h"




#define ENTRY_COUNT (142)
// (251)


double exp_low[1] = {-5.0};
double exp_high[1] = {100.0};
double raw_exp_low[1] = {0.0};
double raw_exp_high[1] = {0.6931471805599453};

double log_low[1] = {0.0};
double log_high[1] = {100.0};
double raw_log_low[1] = {0.5};
double raw_log_high[1] = {1.0};

double sin_low[1] = {-100.0};
double sin_high[1] = {100.0};
double raw_sin_low[1] = {0.0};
double raw_sin_high[1] = {1.5707963267948966};

double tan_low[1] = {-100.0};
double tan_high[1] = {100.0};
double raw_tan_low[1] = {0.0};
double raw_tan_high[1] = {0.7853981633974483};

entry ENTRIES[ENTRY_COUNT] = \
  {
   { exp_glibc, 1, "exp_glibc", exp_low, exp_high, -1 },

   { exp_mpfr, 1, "exp_mpfr", exp_low, exp_high, -1 },

   /* { ord_01_exp_fp64, 1, "ord_01_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_02_exp_fp64, 1, "ord_02_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_03_exp_fp64, 1, "ord_03_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_04_exp_fp64, 1, "ord_04_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_05_exp_fp64, 1, "ord_05_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_06_exp_fp64, 1, "ord_06_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_07_exp_fp64, 1, "ord_07_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_08_exp_fp64, 1, "ord_08_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_09_exp_fp64, 1, "ord_09_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_10_exp_fp64, 1, "ord_10_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_11_exp_fp64, 1, "ord_11_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */
   /* { ord_12_exp_fp64, 1, "ord_12_exp_fp64", raw_exp_low, raw_exp_high, -1 }, */

   /* { rord_01_exp_fp64, 1, "rord_01_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_02_exp_fp64, 1, "rord_02_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_03_exp_fp64, 1, "rord_03_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_04_exp_fp64, 1, "rord_04_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_05_exp_fp64, 1, "rord_05_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_06_exp_fp64, 1, "rord_06_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_07_exp_fp64, 1, "rord_07_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_08_exp_fp64, 1, "rord_08_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_09_exp_fp64, 1, "rord_09_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_10_exp_fp64, 1, "rord_10_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_11_exp_fp64, 1, "rord_11_exp_fp64", exp_low, exp_high, -1 }, */
   /* { rord_12_exp_fp64, 1, "rord_12_exp_fp64", exp_low, exp_high, -1 }, */

   { ml2_raw_exp_1, 1, "ml2_raw_exp_1", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_2, 1, "ml2_raw_exp_2", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_3, 1, "ml2_raw_exp_3", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_4, 1, "ml2_raw_exp_4", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_5, 1, "ml2_raw_exp_5", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_6, 1, "ml2_raw_exp_6", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_7, 1, "ml2_raw_exp_7", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_8, 1, "ml2_raw_exp_8", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_9, 1, "ml2_raw_exp_9", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_10, 1, "ml2_raw_exp_10", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_11, 1, "ml2_raw_exp_11", raw_exp_low, raw_exp_high, -1 },
   { ml2_raw_exp_12, 1, "ml2_raw_exp_12", raw_exp_low, raw_exp_high, -1 },

   { ml2_exp_1, 1, "ml2_exp_1", exp_low, exp_high, -1 },
   { ml2_exp_2, 1, "ml2_exp_2", exp_low, exp_high, -1 },
   { ml2_exp_3, 1, "ml2_exp_3", exp_low, exp_high, -1 },
   { ml2_exp_4, 1, "ml2_exp_4", exp_low, exp_high, -1 },
   { ml2_exp_5, 1, "ml2_exp_5", exp_low, exp_high, -1 },
   { ml2_exp_6, 1, "ml2_exp_6", exp_low, exp_high, -1 },
   { ml2_exp_7, 1, "ml2_exp_7", exp_low, exp_high, -1 },
   { ml2_exp_8, 1, "ml2_exp_8", exp_low, exp_high, -1 },
   { ml2_exp_9, 1, "ml2_exp_9", exp_low, exp_high, -1 },
   { ml2_exp_10, 1, "ml2_exp_10", exp_low, exp_high, -1 },
   { ml2_exp_11, 1, "ml2_exp_11", exp_low, exp_high, -1 },
   { ml2_exp_12, 1, "ml2_exp_12", exp_low, exp_high, -1 },

   { ml_exp_2, 1, "ml_exp_2", exp_low, exp_high, -1 },
   { ml_exp_3, 1, "ml_exp_3", exp_low, exp_high, -1 },
   { ml_exp_4, 1, "ml_exp_4", exp_low, exp_high, -1 },
   { ml_exp_5, 1, "ml_exp_5", exp_low, exp_high, -1 },
   { ml_exp_6, 1, "ml_exp_6", exp_low, exp_high, -1 },
   { ml_exp_7, 1, "ml_exp_7", exp_low, exp_high, -1 },
   { ml_exp_8, 1, "ml_exp_8", exp_low, exp_high, -1 },
   { ml_exp_9, 1, "ml_exp_9", exp_low, exp_high, -1 },
   { ml_exp_10, 1, "ml_exp_10", exp_low, exp_high, -1 },
   { ml_exp_11, 1, "ml_exp_11", exp_low, exp_high, -1 },
   { ml_exp_12, 1, "ml_exp_12", exp_low, exp_high, -1 },


   { log_glibc, 1, "log_glibc", log_low, log_high, -1 },

   { log_mpfr, 1, "log_mpfr", log_low, log_high, -1 },

   /* { ord_01_log_fp64, 1, "ord_01_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_02_log_fp64, 1, "ord_02_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_03_log_fp64, 1, "ord_03_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_04_log_fp64, 1, "ord_04_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_05_log_fp64, 1, "ord_05_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_06_log_fp64, 1, "ord_06_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_07_log_fp64, 1, "ord_07_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_08_log_fp64, 1, "ord_08_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_09_log_fp64, 1, "ord_09_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_10_log_fp64, 1, "ord_10_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_11_log_fp64, 1, "ord_11_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_12_log_fp64, 1, "ord_12_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_13_log_fp64, 1, "ord_13_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_14_log_fp64, 1, "ord_14_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_15_log_fp64, 1, "ord_15_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_16_log_fp64, 1, "ord_16_log_fp64", raw_log_low, raw_log_high, -1 }, */
   /* { ord_17_log_fp64, 1, "ord_17_log_fp64", raw_log_low, raw_log_high, -1 }, */

   /* { rord_01_log_fp64, 1, "rord_01_log_fp64", log_low, log_high, -1 }, */
   /* { rord_02_log_fp64, 1, "rord_02_log_fp64", log_low, log_high, -1 }, */
   /* { rord_03_log_fp64, 1, "rord_03_log_fp64", log_low, log_high, -1 }, */
   /* { rord_04_log_fp64, 1, "rord_04_log_fp64", log_low, log_high, -1 }, */
   /* { rord_05_log_fp64, 1, "rord_05_log_fp64", log_low, log_high, -1 }, */
   /* { rord_06_log_fp64, 1, "rord_06_log_fp64", log_low, log_high, -1 }, */
   /* { rord_07_log_fp64, 1, "rord_07_log_fp64", log_low, log_high, -1 }, */
   /* { rord_08_log_fp64, 1, "rord_08_log_fp64", log_low, log_high, -1 }, */
   /* { rord_09_log_fp64, 1, "rord_09_log_fp64", log_low, log_high, -1 }, */
   /* { rord_10_log_fp64, 1, "rord_10_log_fp64", log_low, log_high, -1 }, */
   /* { rord_11_log_fp64, 1, "rord_11_log_fp64", log_low, log_high, -1 }, */
   /* { rord_12_log_fp64, 1, "rord_12_log_fp64", log_low, log_high, -1 }, */
   /* { rord_13_log_fp64, 1, "rord_13_log_fp64", log_low, log_high, -1 }, */
   /* { rord_14_log_fp64, 1, "rord_14_log_fp64", log_low, log_high, -1 }, */
   /* { rord_15_log_fp64, 1, "rord_15_log_fp64", log_low, log_high, -1 }, */
   /* { rord_16_log_fp64, 1, "rord_16_log_fp64", log_low, log_high, -1 }, */
   /* { rord_17_log_fp64, 1, "rord_17_log_fp64", log_low, log_high, -1 }, */

   { ml2_raw_log_1, 1, "ml2_raw_log_1", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_2, 1, "ml2_raw_log_2", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_3, 1, "ml2_raw_log_3", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_4, 1, "ml2_raw_log_4", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_5, 1, "ml2_raw_log_5", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_6, 1, "ml2_raw_log_6", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_7, 1, "ml2_raw_log_7", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_8, 1, "ml2_raw_log_8", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_9, 1, "ml2_raw_log_9", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_10, 1, "ml2_raw_log_10", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_11, 1, "ml2_raw_log_11", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_12, 1, "ml2_raw_log_12", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_13, 1, "ml2_raw_log_13", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_14, 1, "ml2_raw_log_14", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_15, 1, "ml2_raw_log_15", raw_log_low, raw_log_high, -1 },
   { ml2_raw_log_16, 1, "ml2_raw_log_16", raw_log_low, raw_log_high, -1 },

   { ml2_log_1, 1, "ml2_log_1", log_low, log_high, -1 },
   { ml2_log_2, 1, "ml2_log_2", log_low, log_high, -1 },
   { ml2_log_3, 1, "ml2_log_3", log_low, log_high, -1 },
   { ml2_log_4, 1, "ml2_log_4", log_low, log_high, -1 },
   { ml2_log_5, 1, "ml2_log_5", log_low, log_high, -1 },
   { ml2_log_6, 1, "ml2_log_6", log_low, log_high, -1 },
   { ml2_log_7, 1, "ml2_log_7", log_low, log_high, -1 },
   { ml2_log_8, 1, "ml2_log_8", log_low, log_high, -1 },
   { ml2_log_9, 1, "ml2_log_9", log_low, log_high, -1 },
   { ml2_log_10, 1, "ml2_log_10", log_low, log_high, -1 },
   { ml2_log_11, 1, "ml2_log_11", log_low, log_high, -1 },
   { ml2_log_12, 1, "ml2_log_12", log_low, log_high, -1 },
   { ml2_log_13, 1, "ml2_log_13", log_low, log_high, -1 },
   { ml2_log_14, 1, "ml2_log_14", log_low, log_high, -1 },
   { ml2_log_15, 1, "ml2_log_15", log_low, log_high, -1 },
   { ml2_log_16, 1, "ml2_log_16", log_low, log_high, -1 },

   { ml_log_1, 1, "ml_log_1", log_low, log_high, -1 },
   { ml_log_2, 1, "ml_log_2", log_low, log_high, -1 },
   { ml_log_3, 1, "ml_log_3", log_low, log_high, -1 },
   { ml_log_4, 1, "ml_log_4", log_low, log_high, -1 },
   { ml_log_5, 1, "ml_log_5", log_low, log_high, -1 },
   { ml_log_6, 1, "ml_log_6", log_low, log_high, -1 },
   { ml_log_7, 1, "ml_log_7", log_low, log_high, -1 },
   { ml_log_8, 1, "ml_log_8", log_low, log_high, -1 },
   { ml_log_9, 1, "ml_log_9", log_low, log_high, -1 },
   { ml_log_10, 1, "ml_log_10", log_low, log_high, -1 },
   { ml_log_11, 1, "ml_log_11", log_low, log_high, -1 },
   { ml_log_12, 1, "ml_log_12", log_low, log_high, -1 },
   { ml_log_13, 1, "ml_log_13", log_low, log_high, -1 },
   { ml_log_14, 1, "ml_log_14", log_low, log_high, -1 },
   { ml_log_15, 1, "ml_log_15", log_low, log_high, -1 },
   { ml_log_16, 1, "ml_log_16", log_low, log_high, -1 },


   { sin_glibc, 1, "sin_glibc", sin_low, sin_high, -1 },

   { sin_mpfr, 1, "sin_mpfr", sin_low, sin_high, -1 },

   /* { ord_01_sin_fp64, 1, "ord_01_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_03_sin_fp64, 1, "ord_03_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_05_sin_fp64, 1, "ord_05_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_07_sin_fp64, 1, "ord_07_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_09_sin_fp64, 1, "ord_09_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_11_sin_fp64, 1, "ord_11_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_13_sin_fp64, 1, "ord_13_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_15_sin_fp64, 1, "ord_15_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_17_sin_fp64, 1, "ord_17_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */
   /* { ord_19_sin_fp64, 1, "ord_19_sin_fp64", raw_sin_low, raw_sin_high, -1 }, */

   /* { rord_01_sin_fp64, 1, "rord_01_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_03_sin_fp64, 1, "rord_03_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_05_sin_fp64, 1, "rord_05_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_07_sin_fp64, 1, "rord_07_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_09_sin_fp64, 1, "rord_09_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_11_sin_fp64, 1, "rord_11_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_13_sin_fp64, 1, "rord_13_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_15_sin_fp64, 1, "rord_15_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_17_sin_fp64, 1, "rord_17_sin_fp64", sin_low, sin_high, -1 }, */
   /* { rord_19_sin_fp64, 1, "rord_19_sin_fp64", sin_low, sin_high, -1 }, */

   { ml2_raw_sin_1, 1, "ml2_raw_sin_1", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_3, 1, "ml2_raw_sin_3", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_5, 1, "ml2_raw_sin_5", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_7, 1, "ml2_raw_sin_7", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_9, 1, "ml2_raw_sin_9", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_11, 1, "ml2_raw_sin_11", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_13, 1, "ml2_raw_sin_13", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_15, 1, "ml2_raw_sin_15", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_17, 1, "ml2_raw_sin_17", raw_sin_low, raw_sin_high, -1 },
   { ml2_raw_sin_19, 1, "ml2_raw_sin_19", raw_sin_low, raw_sin_high, -1 },

   { ml2_sin_1, 1, "ml2_sin_1", sin_low, sin_high, -1 },
   { ml2_sin_3, 1, "ml2_sin_3", sin_low, sin_high, -1 },
   { ml2_sin_5, 1, "ml2_sin_5", sin_low, sin_high, -1 },
   { ml2_sin_7, 1, "ml2_sin_7", sin_low, sin_high, -1 },
   { ml2_sin_9, 1, "ml2_sin_9", sin_low, sin_high, -1 },
   { ml2_sin_11, 1, "ml2_sin_11", sin_low, sin_high, -1 },
   { ml2_sin_13, 1, "ml2_sin_13", sin_low, sin_high, -1 },
   { ml2_sin_15, 1, "ml2_sin_15", sin_low, sin_high, -1 },
   { ml2_sin_17, 1, "ml2_sin_17", sin_low, sin_high, -1 },
   { ml2_sin_19, 1, "ml2_sin_19", sin_low, sin_high, -1 },

   { ml_sin_1, 1, "ml_sin_1", sin_low, sin_high, -1 },
   { ml_sin_2, 1, "ml_sin_2", sin_low, sin_high, -1 },
   { ml_sin_3, 1, "ml_sin_3", sin_low, sin_high, -1 },
   { ml_sin_4, 1, "ml_sin_4", sin_low, sin_high, -1 },
   { ml_sin_5, 1, "ml_sin_5", sin_low, sin_high, -1 },


   { tan_glibc, 1, "tan_glibc", tan_low, tan_high, -1 },

   { tan_mpfr, 1, "tan_mpfr", tan_low, tan_high, -1 },

   /* { ord_01_tan_fp64, 1, "ord_01_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_03_tan_fp64, 1, "ord_03_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_05_tan_fp64, 1, "ord_05_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_07_tan_fp64, 1, "ord_07_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_09_tan_fp64, 1, "ord_09_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_11_tan_fp64, 1, "ord_11_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_13_tan_fp64, 1, "ord_13_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_15_tan_fp64, 1, "ord_15_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_17_tan_fp64, 1, "ord_17_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_19_tan_fp64, 1, "ord_19_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_21_tan_fp64, 1, "ord_21_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_23_tan_fp64, 1, "ord_23_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_25_tan_fp64, 1, "ord_25_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_27_tan_fp64, 1, "ord_27_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */
   /* { ord_29_tan_fp64, 1, "ord_29_tan_fp64", raw_tan_low, raw_tan_high, -1 }, */

   /* { rord_01_tan_fp64, 1, "rord_01_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_03_tan_fp64, 1, "rord_03_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_05_tan_fp64, 1, "rord_05_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_07_tan_fp64, 1, "rord_07_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_09_tan_fp64, 1, "rord_09_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_11_tan_fp64, 1, "rord_11_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_13_tan_fp64, 1, "rord_13_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_15_tan_fp64, 1, "rord_15_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_17_tan_fp64, 1, "rord_17_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_19_tan_fp64, 1, "rord_19_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_21_tan_fp64, 1, "rord_21_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_23_tan_fp64, 1, "rord_23_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_25_tan_fp64, 1, "rord_25_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_27_tan_fp64, 1, "rord_27_tan_fp64", tan_low, tan_high, -1 }, */
   /* { rord_29_tan_fp64, 1, "rord_29_tan_fp64", tan_low, tan_high, -1 }, */

   { ml2_raw_tan_1, 1, "ml2_raw_tan_1", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_3, 1, "ml2_raw_tan_3", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_5, 1, "ml2_raw_tan_5", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_7, 1, "ml2_raw_tan_7", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_9, 1, "ml2_raw_tan_9", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_11, 1, "ml2_raw_tan_11", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_13, 1, "ml2_raw_tan_13", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_15, 1, "ml2_raw_tan_15", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_17, 1, "ml2_raw_tan_17", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_19, 1, "ml2_raw_tan_19", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_21, 1, "ml2_raw_tan_21", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_23, 1, "ml2_raw_tan_23", raw_tan_low, raw_tan_high, -1 },
   { ml2_raw_tan_25, 1, "ml2_raw_tan_25", raw_tan_low, raw_tan_high, -1 },

   { ml2_tan_1, 1, "ml2_tan_1", tan_low, tan_high, -1 },
   { ml2_tan_3, 1, "ml2_tan_3", tan_low, tan_high, -1 },
   { ml2_tan_5, 1, "ml2_tan_5", tan_low, tan_high, -1 },
   { ml2_tan_7, 1, "ml2_tan_7", tan_low, tan_high, -1 },
   { ml2_tan_9, 1, "ml2_tan_9", tan_low, tan_high, -1 },
   { ml2_tan_11, 1, "ml2_tan_11", tan_low, tan_high, -1 },
   { ml2_tan_13, 1, "ml2_tan_13", tan_low, tan_high, -1 },
   { ml2_tan_15, 1, "ml2_tan_15", tan_low, tan_high, -1 },
   { ml2_tan_17, 1, "ml2_tan_17", tan_low, tan_high, -1 },
   { ml2_tan_19, 1, "ml2_tan_19", tan_low, tan_high, -1 },
   { ml2_tan_21, 1, "ml2_tan_21", tan_low, tan_high, -1 },
   { ml2_tan_23, 1, "ml2_tan_23", tan_low, tan_high, -1 },
   { ml2_tan_25, 1, "ml2_tan_25", tan_low, tan_high, -1 },
  };




int main(int argc, char** argv)
{
  process_entries(argc, argv, ENTRY_COUNT, ENTRIES);
}
