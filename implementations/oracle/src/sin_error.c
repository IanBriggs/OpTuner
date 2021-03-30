

#include "crlibm_functions.h"
#include "glibc_functions.h"
#include "metalibm_functions.h"
#include "mpfr_functions.h"
#include "oracle_functions.h"
#include "table_generation.h"

#include <stdio.h>
#include <stdlib.h>


#define ENTRY_COUNT (18)

entry ENTRIES[ENTRY_COUNT] = {
                              {ml2_sin_1, "ml2_sin_1"},
                              {ml2_sin_3, "ml2_sin_3"},
                              {ml2_sin_5, "ml2_sin_5"},
                              {ml2_sin_7, "ml2_sin_7"},
                              {ml2_sin_9, "ml2_sin_9"},
                              {ml2_sin_11, "ml2_sin_11"},
                              {ml2_sin_13, "ml2_sin_13"},
                              {ml2_sin_15, "ml2_sin_15"},
                              {ml2_sin_17, "ml2_sin_17"},
                              {ml2_sin_19, "ml2_sin_19"},

                              {ml_sin_1, "ml_sin_1"},
                              {ml_sin_2, "ml_sin_2"},
                              {ml_sin_3, "ml_sin_3"},
                              {ml_sin_4, "ml_sin_4"},
                              {ml_sin_5, "ml_sin_5"},

                              {sin_crlibm, "sin_crlibm"},

                              {sin_glibc, "sin_glibc"},

                              {sin_mpfr, "sin_mpfr"},
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
   high = 1.5707963267948966;
   step = 0.00001;
   break;

  case 2:
    low = 3.14159141888171; //3.1415926750809864-0.00001;
    high = 3.1415938882978764;//3.1415926750809864+0.00001;
   step = 0.0000000001;
   break;

  default:
    exit(1);
  }

  generate_table(low, high, step, sin_oracle, "sin", ENTRY_COUNT, ENTRIES);
}
