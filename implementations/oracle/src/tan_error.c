

#include "crlibm_functions.h"
#include "glibc_functions.h"
#include "metalibm_functions.h"
#include "mpfr_functions.h"
#include "oracle_functions.h"
#include "table_generation.h"

#include <stdio.h>
#include <stdlib.h>


#define ENTRY_COUNT (16)

entry ENTRIES[ENTRY_COUNT] = {
                              {ml2_tan_1, "ml2_tan_1"},
                              {ml2_tan_3, "ml2_tan_3"},
                              {ml2_tan_5, "ml2_tan_5"},
                              {ml2_tan_7, "ml2_tan_7"},
                              {ml2_tan_9, "ml2_tan_9"},
                              {ml2_tan_11, "ml2_tan_11"},
                              {ml2_tan_13, "ml2_tan_13"},
                              {ml2_tan_15, "ml2_tan_15"},
                              {ml2_tan_17, "ml2_tan_17"},
                              {ml2_tan_19, "ml2_tan_19"},
                              {ml2_tan_21, "ml2_tan_21"},
                              {ml2_tan_23, "ml2_tan_23"},
                              {ml2_tan_25, "ml2_tan_25"},

                              {tan_glibc, "tan_glibc"},

                              {tan_crlibm, "tan_crlibm"},

                              {tan_mpfr, "tan_mpfr"},
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
    low = 0;
    high = 0.79;
    step = 0.00001;
    break;

  default:
    exit(1);
  }

  generate_table(low, high, step, tan_oracle, "tan", ENTRY_COUNT, ENTRIES);
}
