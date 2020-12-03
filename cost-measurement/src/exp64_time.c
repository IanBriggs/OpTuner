

#include "exp.h"
#include "ord_exp.h"

#include "timing.h"
#include "xmalloc.h"

#include <float.h>
#include <math.h>
#include <stdio.h>


const fp64 LOW = 0.0;
const fp64 HIGH = 0.69314718055994531;

#define FUNC_COUNT (27)

unop_fp64 FUNCTIONS[FUNC_COUNT] = {ord_01_exp_fp64,
                                   ord_02_exp_fp64,
                                   ord_03_exp_fp64,
                                   ord_04_exp_fp64,
                                   ord_05_exp_fp64,
                                   ord_06_exp_fp64,
                                   ord_07_exp_fp64,
                                   ord_08_exp_fp64,
                                   ord_09_exp_fp64,
                                   ord_10_exp_fp64,
                                   ord_11_exp_fp64,
                                   ord_12_exp_fp64,
                                   ord_13_exp_fp64,
                                   rord_01_exp_fp64,
                                   rord_02_exp_fp64,
                                   rord_03_exp_fp64,
                                   rord_04_exp_fp64,
                                   rord_05_exp_fp64,
                                   rord_06_exp_fp64,
                                   rord_07_exp_fp64,
                                   rord_08_exp_fp64,
                                   rord_09_exp_fp64,
                                   rord_10_exp_fp64,
                                   rord_11_exp_fp64,
                                   rord_12_exp_fp64,
                                   rord_13_exp_fp64,
                                   exp_fp64};

char* NAMES[FUNC_COUNT] = {"ord_01_exp_fp64",
                           "ord_02_exp_fp64",
                           "ord_03_exp_fp64",
                           "ord_04_exp_fp64",
                           "ord_05_exp_fp64",
                           "ord_06_exp_fp64",
                           "ord_07_exp_fp64",
                           "ord_08_exp_fp64",
                           "ord_09_exp_fp64",
                           "ord_10_exp_fp64",
                           "ord_11_exp_fp64",
                           "ord_12_exp_fp64",
                           "ord_13_exp_fp64",
                           "rord_01_exp_fp64",
                           "rord_02_exp_fp64",
                           "rord_03_exp_fp64",
                           "rord_04_exp_fp64",
                           "rord_05_exp_fp64",
                           "rord_06_exp_fp64",
                           "rord_07_exp_fp64",
                           "rord_08_exp_fp64",
                           "rord_09_exp_fp64",
                           "rord_10_exp_fp64",
                           "rord_11_exp_fp64",
                           "rord_12_exp_fp64",
                           "rord_13_exp_fp64",
                           "exp_fp64"};

char* ERRORS[FUNC_COUNT] = {"null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
                            "null",
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
