

#include "time_func.h"

#include "all_functions.h"



#define ENTRY_COUNT (209)



double cosf_low[1] = {-100.0};
double cosf_high[1] = {100.0};
double cos_low[1] = {-100.0};
double cos_high[1] = {100.0};
double raw_cos_low[1] = {0.0};
double raw_cos_high[1] = {1.5707963267948966};
double raw_wide_cos_low[1] = {-3.141592653589793};
double raw_wide_cos_high[1] = {3.141592653589793};

double expf_low[1] = {-88.0};
double expf_high[1] = {88.0};
double exp_low[1] = {-709.0};
double exp_high[1] = {709.0};
double raw_exp_low[1] = {0.0};
double raw_exp_high[1] = {0.6931471805599453};

double logf_low[1] = {0.0};
double logf_high[1] = {100.0};
double log_low[1] = {0.0};
double log_high[1] = {100.0};
double raw_log_low[1] = {0.5};
double raw_log_high[1] = {1.0};

double sinf_low[1] = {-100.0};
double sinf_high[1] = {100.0};
double sin_low[1] = {-100.0};
double sin_high[1] = {100.0};
double raw_sin_low[1] = {0.0};
double raw_sin_high[1] = {1.5707963267948966};
double raw_wide_sin_low[1] = {-3.141592653589793};
double raw_wide_sin_high[1] = {3.141592653589793};

double tanf_low[1] = {-100.0};
double tanf_high[1] = {100.0};
double tan_low[1] = {-100.0};
double tan_high[1] = {100.0};
double raw_tan_low[1] = {0.0};
double raw_tan_high[1] = {0.7853981633974483};

entry ENTRIES[ENTRY_COUNT] = \
  {
   { cosf_glibc, 1, "cosf_glibc", cosf_low, cosf_high, -1 },
   { cosf_openlibm, 1, "cosf_openlibm", cosf_low, cosf_high, -1 },
   { cosf_vdt, 1, "cosf_vdt", cosf_low, cosf_high, -1 },

   { cos_crlibm, 1, "cos_crlibm", cos_low, cos_high, -1 },
   { cos_glibc, 1, "cos_glibc", cos_low, cos_high, -1 },
   { cos_mpfr, 1, "cos_mpfr", cos_low, cos_high, -1 },
   { cos_openlibm, 1, "cos_openlibm", cos_low, cos_high, -1 },
   { cos_vdt, 1, "cos_vdt", cos_low, cos_high, -1 },

   { cos_povray, 1, "cos_povray", raw_wide_cos_low, raw_wide_cos_high, -1 },

   { ml2_raw_cos_2, 1, "ml2_raw_cos_2", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_4, 1, "ml2_raw_cos_4", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_6, 1, "ml2_raw_cos_6", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_8, 1, "ml2_raw_cos_8", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_10, 1, "ml2_raw_cos_10", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_12, 1, "ml2_raw_cos_12", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_14, 1, "ml2_raw_cos_14", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_16, 1, "ml2_raw_cos_16", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_18, 1, "ml2_raw_cos_18", raw_cos_low, raw_cos_high, -1 },
   { ml2_raw_cos_20, 1, "ml2_raw_cos_20", raw_cos_low, raw_cos_high, -1 },

   { ml2_raw_wide_cos_2, 1, "ml2_raw_wide_cos_2", raw_wide_cos_low, raw_wide_cos_high, -1 },
   { ml2_raw_wide_cos_6, 1, "ml2_raw_wide_cos_6", raw_wide_cos_low, raw_wide_cos_high, -1 },
   { ml2_raw_wide_cos_8, 1, "ml2_raw_wide_cos_8", raw_wide_cos_low, raw_wide_cos_high, -1 },
   { ml2_raw_wide_cos_12, 1, "ml2_raw_wide_cos_12", raw_wide_cos_low, raw_wide_cos_high, -1 },
   { ml2_raw_wide_cos_14, 1, "ml2_raw_wide_cos_14", raw_wide_cos_low, raw_wide_cos_high, -1 },
   { ml2_raw_wide_cos_18, 1, "ml2_raw_wide_cos_18", raw_wide_cos_low, raw_wide_cos_high, -1 },
   { ml2_raw_wide_cos_20, 1, "ml2_raw_wide_cos_20", raw_wide_cos_low, raw_wide_cos_high, -1 },

   { ml2_cos_2, 1, "ml2_cos_2", cos_low, cos_high, -1 },
   { ml2_cos_4, 1, "ml2_cos_4", cos_low, cos_high, -1 },
   { ml2_cos_6, 1, "ml2_cos_6", cos_low, cos_high, -1 },
   { ml2_cos_8, 1, "ml2_cos_8", cos_low, cos_high, -1 },
   { ml2_cos_10, 1, "ml2_cos_10", cos_low, cos_high, -1 },
   { ml2_cos_12, 1, "ml2_cos_12", cos_low, cos_high, -1 },
   { ml2_cos_14, 1, "ml2_cos_14", cos_low, cos_high, -1 },
   { ml2_cos_16, 1, "ml2_cos_16", cos_low, cos_high, -1 },
   { ml2_cos_18, 1, "ml2_cos_18", cos_low, cos_high, -1 },
   { ml2_cos_20, 1, "ml2_cos_20", cos_low, cos_high, -1 },

   { ml2_wide_cos_2, 1, "ml2_wide_cos_2", cos_low, cos_high, -1 },
   { ml2_wide_cos_6, 1, "ml2_wide_cos_6", cos_low, cos_high, -1 },
   { ml2_wide_cos_8, 1, "ml2_wide_cos_8", cos_low, cos_high, -1 },
   { ml2_wide_cos_12, 1, "ml2_wide_cos_12", cos_low, cos_high, -1 },
   { ml2_wide_cos_14, 1, "ml2_wide_cos_14", cos_low, cos_high, -1 },
   { ml2_wide_cos_18, 1, "ml2_wide_cos_18", cos_low, cos_high, -1 },
   { ml2_wide_cos_20, 1, "ml2_wide_cos_20", cos_low, cos_high, -1 },





   { expf_glibc, 1, "expf_glibc", expf_low, expf_high, -1 },
   { expf_openlibm, 1, "expf_openlibm", expf_low, expf_high, -1 },
   { expf_vdt, 1, "expf_vdt", expf_low, expf_high, -1 },

   { exp_crlibm, 1, "exp_crlibm", exp_low, exp_high, -1 },
   { exp_glibc, 1, "exp_glibc", exp_low, exp_high, -1 },
   { exp_mpfr, 1, "exp_mpfr", exp_low, exp_high, -1 },
   { exp_openlibm, 1, "exp_openlibm", exp_low, exp_high, -1 },
   { expf_rlibm, 1, "expf_rlibm", exp_low, exp_high, -1 },
   { exp_vdt, 1, "exp_vdt", exp_low, exp_high, -1 },

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




   { logf_glibc, 1, "logf_glibc", logf_low, logf_high, -1 },
   { logf_openlibm, 1, "logf_openlibm", logf_low, logf_high, -1 },
   { logf_vdt, 1, "logf_vdt", logf_low, logf_high, -1 },

   { log_crlibm, 1, "log_crlibm", log_low, log_high, -1 },
   { log_glibc, 1, "log_glibc", log_low, log_high, -1 },
   { log_mpfr, 1, "log_mpfr", log_low, log_high, -1 },
   { log_openlibm, 1, "log_openlibm", log_low, log_high, -1 },
   { logf_rlibm, 1, "logf_rlibm", log_low, log_high, -1 },
   { log_vdt, 1, "log_vdt", log_low, log_high, -1 },

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




   { sinf_glibc, 1, "sinf_glibc", sinf_low, sinf_high, -1 },
   { sinf_openlibm, 1, "sinf_openlibm", sinf_low, sinf_high, -1 },
   { sinf_vdt, 1, "sinf_vdt", sinf_low, sinf_high, -1 },

   { sin_crlibm, 1, "sin_crlibm", sin_low, sin_high, -1 },
   { sin_glibc, 1, "sin_glibc", sin_low, sin_high, -1 },
   { sin_mpfr, 1, "sin_mpfr", sin_low, sin_high, -1 },
   { sin_openlibm, 1, "sin_openlibm", sin_low, sin_high, -1 },
   { sin_vdt, 1, "sin_vdt", sin_low, sin_high, -1 },

   { sin_povray, 1, "sin_povray", raw_wide_sin_low, raw_wide_sin_high, -1 },

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

   { ml2_raw_wide_sin_3, 1, "ml2_raw_wide_sin_3", raw_wide_sin_low, raw_wide_sin_high, -1 },
   { ml2_raw_wide_sin_5, 1, "ml2_raw_wide_sin_5", raw_wide_sin_low, raw_wide_sin_high, -1 },
   { ml2_raw_wide_sin_7, 1, "ml2_raw_wide_sin_7", raw_wide_sin_low, raw_wide_sin_high, -1 },
   { ml2_raw_wide_sin_9, 1, "ml2_raw_wide_sin_9", raw_wide_sin_low, raw_wide_sin_high, -1 },
   { ml2_raw_wide_sin_11, 1, "ml2_raw_wide_sin_11", raw_wide_sin_low, raw_wide_sin_high, -1 },
   { ml2_raw_wide_sin_13, 1, "ml2_raw_wide_sin_13", raw_wide_sin_low, raw_wide_sin_high, -1 },
   { ml2_raw_wide_sin_15, 1, "ml2_raw_wide_sin_15", raw_wide_sin_low, raw_wide_sin_high, -1 },
   { ml2_raw_wide_sin_17, 1, "ml2_raw_wide_sin_17", raw_wide_sin_low, raw_wide_sin_high, -1 },
   { ml2_raw_wide_sin_19, 1, "ml2_raw_wide_sin_19", raw_wide_sin_low, raw_wide_sin_high, -1 },

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

   { ml2_wide_sin_3, 1, "ml2_wide_sin_3", sin_low, sin_high, -1 },
   { ml2_wide_sin_5, 1, "ml2_wide_sin_5", sin_low, sin_high, -1 },
   { ml2_wide_sin_7, 1, "ml2_wide_sin_7", sin_low, sin_high, -1 },
   { ml2_wide_sin_9, 1, "ml2_wide_sin_9", sin_low, sin_high, -1 },
   { ml2_wide_sin_11, 1, "ml2_wide_sin_11", sin_low, sin_high, -1 },
   { ml2_wide_sin_13, 1, "ml2_wide_sin_13", sin_low, sin_high, -1 },
   { ml2_wide_sin_15, 1, "ml2_wide_sin_15", sin_low, sin_high, -1 },
   { ml2_wide_sin_17, 1, "ml2_wide_sin_17", sin_low, sin_high, -1 },
   { ml2_wide_sin_19, 1, "ml2_wide_sin_19", sin_low, sin_high, -1 },




   { tanf_glibc, 1, "tanf_glibc", tanf_low, tanf_high, -1 },
   { tanf_openlibm, 1, "tanf_openlibm", tanf_low, tanf_high, -1 },
   { tanf_vdt, 1, "tanf_vdt", tanf_low, tanf_high, -1 },

   { tan_crlibm, 1, "tan_crlibm", tan_low, tan_high, -1 },
   { tan_glibc, 1, "tan_glibc", tan_low, tan_high, -1 },
   { tan_mpfr, 1, "tan_mpfr", tan_low, tan_high, -1 },
   { tan_openlibm, 1, "tan_openlibm", tan_low, tan_high, -1 },
   { tan_vdt, 1, "tan_vdt", tan_low, tan_high, -1 },

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
