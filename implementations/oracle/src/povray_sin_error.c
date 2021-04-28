

#include "crlibm_functions.h"
#include "glibc_functions.h"
#include "metalibm_functions.h"
#include "mpfr_functions.h"
#include "openlibm_functions.h"
#include "povray_functions.h"
#include "vdt_functions.h"

#include "oracle_functions.h"
#include "table_generation.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


#define ENTRY_COUNT (1)

entry ENTRIES[ENTRY_COUNT] = {
                              {povray_sin, "povray_sin"},
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
   low = -M_PI;
   high = M_PI;
   step = 0.005;
   break;

  case 1:
   low = -M_PI;
   high = M_PI;
   step = 0.00001;
   break;

  case 2:
   low = -0.5;
   high = 0.5;
   step = 0.000001;
   break;

  default:
    exit(1);
  }

  generate_table(low, high, step, sin_oracle, "sin", ENTRY_COUNT, ENTRIES);
}
