

#include "exp.h"
#include "ord_exp.h"

#include "testing.h"
#include "xmalloc.h"

#include <float.h>
#include <math.h>
#include <mpfr.h>
#include <stdio.h>
#include <string.h>
#include <time.h>




const fp64 LOW = -314;
const fp64 HIGH = 314;

#define FUNC_COUNT (14)

unop_fp64 FUNCTIONS[FUNC_COUNT] = {rord_01_exp_fp64,
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

char* NAMES[FUNC_COUNT] = {"rord_01_exp_fp64",
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
                           "exp_64"};

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
                            "null"};


fp64 reference_exp(fp64 x)
{
  static int init_done = 0;
  static mpfr_t mx, my;

  if (init_done == 0) {
    mpfr_init2(mx, 1024);
    mpfr_init2(my, 1024);
    init_done = 1;
  }

  mpfr_set_d(mx, x, GMP_RNDN);
  mpfr_exp(my, mx, GMP_RNDN);

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
                                           reference_exp,
                                           FUNC_COUNT, FUNCTIONS, NAMES, ERRORS,
                                           log2_points);

  print_testing_data_fp64(data);

  free_testing_data_fp64(data);

  return 0;
}
