

#include "log.h"
#include "ord_log.h"

#include "timing.h"
#include "xmalloc.h"

#include <float.h>
#include <math.h>
#include <stdio.h>


const fp64 LOW = 0.001;
const fp64 HIGH = 100.5;

#define FUNC_COUNT (1)

unop_fp64 FUNCTIONS[FUNC_COUNT] = {/* ord_01_log_fp64, */
                                   /* ord_02_log_fp64, */
                                   /* ord_03_log_fp64, */
                                   /* ord_04_log_fp64, */
                                   /* ord_05_log_fp64, */
                                   /* ord_06_log_fp64, */
                                   /* ord_07_log_fp64, */
                                   /* ord_08_log_fp64, */
                                   /* ord_09_log_fp64, */
                                   /* ord_10_log_fp64, */
                                   /* ord_11_log_fp64, */
                                   /* ord_12_log_fp64, */
                                   /* ord_13_log_fp64, */
                                   /* ord_14_log_fp64, */
                                   /* ord_15_log_fp64, */
                                   /* ord_16_log_fp64, */
                                   /* ord_17_log_fp64, */
                                   /* ord_18_log_fp64, */
                                   /* ord_19_log_fp64, */
                                   /* ord_20_log_fp64, */
                                   /* ord_21_log_fp64, */
                                   /* rord_01_log_fp64, */
                                   /* rord_02_log_fp64, */
                                   /* rord_03_log_fp64, */
                                   /* rord_04_log_fp64, */
                                   /* rord_05_log_fp64, */
                                   /* rord_06_log_fp64, */
                                   /* rord_07_log_fp64, */
                                   /* rord_08_log_fp64, */
                                   /* rord_09_log_fp64, */
                                   /* rord_10_log_fp64, */
                                   /* rord_11_log_fp64, */
                                   /* rord_12_log_fp64, */
                                   /* rord_13_log_fp64, */
                                   /* rord_14_log_fp64, */
                                   /* rord_15_log_fp64, */
                                   /* rord_16_log_fp64, */
                                   /* rord_17_log_fp64, */
                                   /* rord_18_log_fp64, */
                                   /* rord_19_log_fp64, */
                                   /* rord_20_log_fp64, */
                                   /* rord_21_log_fp64, */
                                   log_fp64};

char* NAMES[FUNC_COUNT] = {/* "ord_01_log_fp64", */
                           /* "ord_02_log_fp64", */
                           /* "ord_03_log_fp64", */
                           /* "ord_04_log_fp64", */
                           /* "ord_05_log_fp64", */
                           /* "ord_06_log_fp64", */
                           /* "ord_07_log_fp64", */
                           /* "ord_08_log_fp64", */
                           /* "ord_09_log_fp64", */
                           /* "ord_10_log_fp64", */
                           /* "ord_11_log_fp64", */
                           /* "ord_12_log_fp64", */
                           /* "ord_13_log_fp64", */
                           /* "ord_14_log_fp64", */
                           /* "ord_15_log_fp64", */
                           /* "ord_16_log_fp64", */
                           /* "ord_17_log_fp64", */
                           /* "ord_18_log_fp64", */
                           /* "ord_19_log_fp64", */
                           /* "ord_20_log_fp64", */
                           /* "ord_21_log_fp64", */
                           /* "rord_01_log_fp64", */
                           /* "rord_02_log_fp64", */
                           /* "rord_03_log_fp64", */
                           /* "rord_04_log_fp64", */
                           /* "rord_05_log_fp64", */
                           /* "rord_06_log_fp64", */
                           /* "rord_07_log_fp64", */
                           /* "rord_08_log_fp64", */
                           /* "rord_09_log_fp64", */
                           /* "rord_10_log_fp64", */
                           /* "rord_11_log_fp64", */
                           /* "rord_12_log_fp64", */
                           /* "rord_13_log_fp64", */
                           /* "rord_14_log_fp64", */
                           /* "rord_15_log_fp64", */
                           /* "rord_16_log_fp64", */
                           /* "rord_17_log_fp64", */
                           /* "rord_18_log_fp64", */
                           /* "rord_19_log_fp64", */
                           /* "rord_20_log_fp64", */
                           /* "rord_21_log_fp64", */
                           "log_fp64"};

char* ERRORS[FUNC_COUNT] = {/* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            /* "null", */
                            "null"};




int main(int argc, char** argv)
{
  size_t log2_values = 18;
  size_t secs = 10;
  size_t runs = 10;

  if (argc > 1) {
    log2_values = strtoul(argv[1], NULL, 10);
  }
  if (argc > 2) {
    secs = strtoul(argv[2], NULL, 10);
  }
  if (argc > 3) {
    runs = strtoul(argv[3], NULL, 10);
  }

  timing_data_fp64* data = time_unop_fp64(LOW, HIGH,
                                          FUNC_COUNT, FUNCTIONS, NAMES, ERRORS,
                                          log2_values, runs, secs);

  print_timing_data_fp64(data);

  free_timing_data_fp64(data);

  return 0;
}
