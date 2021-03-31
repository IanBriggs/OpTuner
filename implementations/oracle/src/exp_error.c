

#include "crlibm_functions.h"
#include "glibc_functions.h"
#include "metalibm_functions.h"
#include "mpfr_functions.h"
#include "vdt_functions.h"

#include "oracle_functions.h"
#include "table_generation.h"

#include <stdio.h>
#include <stdlib.h>


#define ENTRY_COUNT (27)

entry ENTRIES[ENTRY_COUNT] = {
                              {ml2_exp_1, "ml2_exp_1"},
                              {ml2_exp_2, "ml2_exp_2"},
                              {ml2_exp_3, "ml2_exp_3"},
                              {ml2_exp_4, "ml2_exp_4"},
                              {ml2_exp_5, "ml2_exp_5"},
                              {ml2_exp_6, "ml2_exp_6"},
                              {ml2_exp_7, "ml2_exp_7"},
                              {ml2_exp_8, "ml2_exp_8"},
                              {ml2_exp_9, "ml2_exp_9"},
                              {ml2_exp_10, "ml2_exp_10"},
                              {ml2_exp_11, "ml2_exp_11"},
                              {ml2_exp_12, "ml2_exp_12"},

                              {ml_exp_2, "ml_exp_2"},
                              {ml_exp_3, "ml_exp_3"},
                              {ml_exp_4, "ml_exp_4"},
                              {ml_exp_5, "ml_exp_5"},
                              {ml_exp_6, "ml_exp_6"},
                              {ml_exp_7, "ml_exp_7"},
                              {ml_exp_8, "ml_exp_8"},
                              {ml_exp_9, "ml_exp_9"},
                              {ml_exp_10, "ml_exp_10"},
                              {ml_exp_11, "ml_exp_11"},
                              {ml_exp_12, "ml_exp_12"},

                              {exp_crlibm, "exp_crlibm"},

                              {exp_vdt, "exp_vdt"},

                              {exp_glibc, "exp_glibc"},

                              {exp_mpfr, "exp_mpfr"},
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
   low = -6.0;
   high = 6.0;
   step = 0.0001;
   break;

  case 1:
   low = 0.0;
   high = 0.6931471805599453;
   step = 0.00001;
   break;

  case 2:
   low = -0.34657359027997264;
   high = 0.34657359027997264;
   step = 0.00001;
   break;

  default:
    exit(1);
  }

  generate_table(low, high, step, exp_oracle, "exp", ENTRY_COUNT, ENTRIES);
}
