

#include "tan.h"
#include "ord_tan.h"

#include "testing.h"
#include "xmalloc.h"

#include <float.h>
#include <math.h>
#include <mpfr.h>
#include <stdio.h>
#include <string.h>
#include <time.h>



#define CYCLES (100)
const fp64 LOW = -CYCLES*M_PI;
const fp64 HIGH = CYCLES*M_PI;

#define FUNC_COUNT (20)

unop_fp64 FUNCTIONS[FUNC_COUNT] = {rord_01_tan_fp64,
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

char* NAMES[FUNC_COUNT] = {"rord_01_tan_fp64",
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
                           "tan_64"};

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
                            "null"};


fp64 reference_tan(fp64 x)
{
  static int init_done = 0;
  static mpfr_t mx, my;

  if (init_done == 0) {
    mpfr_init2(mx, 1024);
    mpfr_init2(my, 1024);
    init_done = 1;
  }

  mpfr_set_d(mx, x, GMP_RNDN);
  mpfr_tan(my, mx, GMP_RNDN);

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
                                           reference_tan,
                                           FUNC_COUNT, FUNCTIONS, NAMES, ERRORS,
                                           log2_points);

  print_testing_data_fp64(data);

  free_testing_data_fp64(data);

  return 0;
}
