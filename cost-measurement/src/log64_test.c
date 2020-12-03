

#include "log.h"
#include "ord_log.h"

#include "testing.h"
#include "xmalloc.h"

#include <float.h>
#include <math.h>
#include <mpfr.h>
#include <stdio.h>
#include <string.h>
#include <time.h>




const fp64 LOW = 0.75;
const fp64 HIGH = 1.5;

#define FUNC_COUNT (22)

unop_fp64 FUNCTIONS[FUNC_COUNT] = {ord_01_log_fp64,
                                   ord_02_log_fp64,
                                   ord_03_log_fp64,
                                   ord_04_log_fp64,
                                   ord_05_log_fp64,
                                   ord_06_log_fp64,
                                   ord_07_log_fp64,
                                   ord_08_log_fp64,
                                   ord_09_log_fp64,
                                   ord_10_log_fp64,
                                   ord_11_log_fp64,
                                   ord_12_log_fp64,
                                   ord_13_log_fp64,
                                   ord_14_log_fp64,
                                   ord_15_log_fp64,
                                   ord_16_log_fp64,
                                   ord_17_log_fp64,
                                   ord_18_log_fp64,
                                   ord_19_log_fp64,
                                   ord_20_log_fp64,
                                   ord_21_log_fp64,
                                   log_fp64};

char* NAMES[FUNC_COUNT] = {"ord_01_log_fp64",
                           "ord_02_log_fp64",
                           "ord_03_log_fp64",
                           "ord_04_log_fp64",
                           "ord_05_log_fp64",
                           "ord_06_log_fp64",
                           "ord_07_log_fp64",
                           "ord_08_log_fp64",
                           "ord_09_log_fp64",
                           "ord_10_log_fp64",
                           "ord_11_log_fp64",
                           "ord_12_log_fp64",
                           "ord_13_log_fp64",
                           "ord_14_log_fp64",
                           "ord_15_log_fp64",
                           "ord_16_log_fp64",
                           "ord_17_log_fp64",
                           "ord_18_log_fp64",
                           "ord_19_log_fp64",
                           "ord_20_log_fp64",
                           "ord_21_log_fp64",
                           "log_64"};

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
                            "null"};


fp64 reference_log(fp64 x)
{
  static int init_done = 0;
  static mpfr_t mx, my;

  if (init_done == 0) {
    mpfr_init2(mx, 1024);
    mpfr_init2(my, 1024);
    init_done = 1;
  }

  mpfr_set_d(mx, x, GMP_RNDN);
  mpfr_log(my, mx, GMP_RNDN);

  return mpfr_get_d(my, GMP_RNDN);
}


int main(int argc, char** argv)
{
  size_t log2_points = 20;
  unsigned int seed = (unsigned int) time(NULL);

  if (argc > 1) {
    log2_points = strtoul(argv[1], NULL, 10);
  }
  if (argc > 2) {
    seed = (unsigned int) strtoul(argv[2], NULL, 10);
  }

  srand(seed);

  testing_data_fp64* data = test_unop_fp64(LOW, HIGH,
                                           reference_log,
                                           FUNC_COUNT, FUNCTIONS, NAMES, ERRORS,
                                           log2_points);

  print_testing_data_fp64(data);

  free_testing_data_fp64(data);

  return 0;
}
