

#include "glibc_functions.h"
#include "hand_generated_functions.h"
#include "metalibm_functions.h"
#include "mpfr_functions.h"
#include "oracle_functions.h"
#include "table_generation.h"

#include <stdio.h>
#include <stdlib.h>


#define ENTRY_COUNT (51)

entry ENTRIES[ENTRY_COUNT] = {
                              {rord_01_log_fp64, "rord_01_log_fp64"},
                              {rord_02_log_fp64, "rord_02_log_fp64"},
                              {rord_03_log_fp64, "rord_03_log_fp64"},
                              {rord_04_log_fp64, "rord_04_log_fp64"},
                              {rord_05_log_fp64, "rord_05_log_fp64"},
                              {rord_06_log_fp64, "rord_06_log_fp64"},
                              {rord_07_log_fp64, "rord_07_log_fp64"},
                              {rord_08_log_fp64, "rord_08_log_fp64"},
                              {rord_09_log_fp64, "rord_09_log_fp64"},
                              {rord_10_log_fp64, "rord_10_log_fp64"},
                              {rord_11_log_fp64, "rord_11_log_fp64"},
                              {rord_12_log_fp64, "rord_12_log_fp64"},
                              {rord_13_log_fp64, "rord_13_log_fp64"},
                              {rord_14_log_fp64, "rord_14_log_fp64"},
                              {rord_15_log_fp64, "rord_15_log_fp64"},
                              {rord_16_log_fp64, "rord_16_log_fp64"},
                              {rord_17_log_fp64, "rord_17_log_fp64"},

                              {ml2_log_1, "ml2_log_1"},
                              {ml2_log_2, "ml2_log_2"},
                              {ml2_log_3, "ml2_log_3"},
                              {ml2_log_4, "ml2_log_4"},
                              {ml2_log_5, "ml2_log_5"},
                              {ml2_log_6, "ml2_log_6"},
                              {ml2_log_7, "ml2_log_7"},
                              {ml2_log_8, "ml2_log_8"},
                              {ml2_log_9, "ml2_log_9"},
                              {ml2_log_10, "ml2_log_10"},
                              {ml2_log_11, "ml2_log_11"},
                              {ml2_log_12, "ml2_log_12"},
                              {ml2_log_13, "ml2_log_13"},
                              {ml2_log_14, "ml2_log_14"},
                              {ml2_log_15, "ml2_log_15"},
                              {ml2_log_16, "ml2_log_16"},

                              {ml_log_1, "ml_log_1"},
                              {ml_log_2, "ml_log_2"},
                              {ml_log_3, "ml_log_3"},
                              {ml_log_4, "ml_log_4"},
                              {ml_log_5, "ml_log_5"},
                              {ml_log_6, "ml_log_6"},
                              {ml_log_7, "ml_log_7"},
                              {ml_log_8, "ml_log_8"},
                              {ml_log_9, "ml_log_9"},
                              {ml_log_10, "ml_log_10"},
                              {ml_log_11, "ml_log_11"},
                              {ml_log_12, "ml_log_12"},
                              {ml_log_13, "ml_log_13"},
                              {ml_log_14, "ml_log_14"},
                              {ml_log_15, "ml_log_15"},
                              {ml_log_16, "ml_log_16"},

                              {log_glibc, "log_glibc"},

                              {log_mpfr, "log_mpfr"},
};


int main(int argc, char** argv)
{
  long int choice = 0;
  if (argc == 2) {
    choice = strtol(argv[1], NULL, 10);
  }

  double low, high, step;
  switch (choice) {
  case 0:
   low =  0.0001;
   high = 12.0;
   step = 0.0001;
   break;

  case 1:
   low =  1.0;
   high = 2.0;
   step = 0.00001;
   break;

  case 2:
   low =  0.5;
   high = 1.0;
   step = 0.00001;
   break;

  default:
    exit(1);
  }

  generate_table(low, high, step, log_oracle, "log", ENTRY_COUNT, ENTRIES);
}
