

#include "tan.h"
#include "ord_tan.h"

#include "timing.h"
#include "xmalloc.h"

#include <float.h>
#include <math.h>
#include <stdio.h>


const fp64 LOW = 0.0;
const fp64 HIGH = 0.7853981633974483096;

#define FUNC_COUNT (39)

unop_fp64 FUNCTIONS[FUNC_COUNT] = {ord_01_tan_fp64,
                                   ord_03_tan_fp64,
                                   ord_05_tan_fp64,
                                   ord_07_tan_fp64,
                                   ord_09_tan_fp64,
                                   ord_11_tan_fp64,
                                   ord_13_tan_fp64,
                                   ord_15_tan_fp64,
                                   ord_17_tan_fp64,
                                   ord_19_tan_fp64,
                                   ord_21_tan_fp64,
                                   ord_23_tan_fp64,
                                   ord_25_tan_fp64,
                                   ord_27_tan_fp64,
                                   ord_29_tan_fp64,
                                   ord_31_tan_fp64,
                                   ord_33_tan_fp64,
                                   ord_35_tan_fp64,
                                   ord_37_tan_fp64,
                                   rord_01_tan_fp64,
                                   rord_03_tan_fp64,
                                   rord_05_tan_fp64,
                                   rord_07_tan_fp64,
                                   rord_09_tan_fp64,
                                   rord_11_tan_fp64,
                                   rord_13_tan_fp64,
                                   rord_15_tan_fp64,
                                   rord_17_tan_fp64,
                                   rord_19_tan_fp64,
                                   rord_21_tan_fp64,
                                   rord_23_tan_fp64,
                                   rord_25_tan_fp64,
                                   rord_27_tan_fp64,
                                   rord_29_tan_fp64,
                                   rord_31_tan_fp64,
                                   rord_33_tan_fp64,
                                   rord_35_tan_fp64,
                                   rord_37_tan_fp64,
                                   tan_fp64};

char* NAMES[FUNC_COUNT] = {"ord_01_tan_fp64",
                           "ord_03_tan_fp64",
                           "ord_05_tan_fp64",
                           "ord_07_tan_fp64",
                           "ord_09_tan_fp64",
                           "ord_11_tan_fp64",
                           "ord_13_tan_fp64",
                           "ord_15_tan_fp64",
                           "ord_17_tan_fp64",
                           "ord_19_tan_fp64",
                           "ord_21_tan_fp64",
                           "ord_23_tan_fp64",
                           "ord_25_tan_fp64",
                           "ord_27_tan_fp64",
                           "ord_29_tan_fp64",
                           "ord_31_tan_fp64",
                           "ord_33_tan_fp64",
                           "ord_35_tan_fp64",
                           "ord_37_tan_fp64",
                           "rord_01_tan_fp64",
                           "rord_03_tan_fp64",
                           "rord_05_tan_fp64",
                           "rord_07_tan_fp64",
                           "rord_09_tan_fp64",
                           "rord_11_tan_fp64",
                           "rord_13_tan_fp64",
                           "rord_15_tan_fp64",
                           "rord_17_tan_fp64",
                           "rord_19_tan_fp64",
                           "rord_21_tan_fp64",
                           "rord_23_tan_fp64",
                           "rord_25_tan_fp64",
                           "rord_27_tan_fp64",
                           "rord_29_tan_fp64",
                           "rord_31_tan_fp64",
                           "rord_33_tan_fp64",
                           "rord_35_tan_fp64",
                           "rord_37_tan_fp64",
                           "tan_fp64"};

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
