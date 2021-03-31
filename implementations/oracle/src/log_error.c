

#include "crlibm_functions.h"
#include "glibc_functions.h"
#include "metalibm_functions.h"
#include "mpfr_functions.h"
#include "openlibm_functions.h"
#include "vdt_functions.h"

#include "oracle_functions.h"
#include "table_generation.h"

#include <stdio.h>
#include <stdlib.h>


#define ENTRY_COUNT (37)

entry ENTRIES[ENTRY_COUNT] = {
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

                              {log_crlibm, "log_crlibm"},

                              {log_openlibm, "log_openlibm"},

                              {log_vdt, "log_vdt"},

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
