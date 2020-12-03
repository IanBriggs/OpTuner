

#include "sin.h"
#include "ord_sin.h"

#include "testing.h"
#include "xmalloc.h"

#include <float.h>
#include <math.h>
#include <mpfr.h>
#include <stdio.h>
#include <string.h>
#include <time.h>




const fp64 LOW = 0.0;
const fp64 HIGH = 1.570796326794896619;

#define FUNC_COUNT (11)

unop_fp64 FUNCTIONS[FUNC_COUNT] = {ord_01_sin_fp64,
                                   ord_03_sin_fp64,
                                   ord_05_sin_fp64,
                                   ord_07_sin_fp64,
                                   ord_09_sin_fp64,
                                   ord_11_sin_fp64,
                                   ord_13_sin_fp64,
                                   ord_15_sin_fp64,
                                   ord_17_sin_fp64,
                                   ord_19_sin_fp64,
                                   sin_fp64};

char* NAMES[FUNC_COUNT] = {"ord_01_sin_fp64",
                           "ord_03_sin_fp64",
                           "ord_05_sin_fp64",
                           "ord_07_sin_fp64",
                           "ord_09_sin_fp64",
                           "ord_11_sin_fp64",
                           "ord_13_sin_fp64",
                           "ord_15_sin_fp64",
                           "ord_17_sin_fp64",
                           "ord_19_sin_fp64",
                           "sin_64"};

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
                            "null"};


fp64 reference_sin(fp64 x)
{
  static int init_done = 0;
  static mpfr_t mx, my;

  if (init_done == 0) {
    mpfr_init2(mx, 1024);
    mpfr_init2(my, 1024);
    init_done = 1;
  }

  mpfr_set_d(mx, x, GMP_RNDN);
  mpfr_sin(my, mx, GMP_RNDN);

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
                                           reference_sin,
                                           FUNC_COUNT, FUNCTIONS, NAMES, ERRORS,
                                           log2_points);

  print_testing_data_fp64(data);

  free_testing_data_fp64(data);

  return 0;
}
