

#include "log.h"
#include "ord_log.h"

#include <stdio.h>

const fp64 low = 0.1;
const fp64 high = 6;
const int steps = 5000;
const fp64 step_size = (high - low) / ((fp64) steps);

int main() {
  for (fp64 p=low; p<high; p+=step_size) {
    printf("%1.16e\t%1.16e\t%1.16e\n", p, rord_13_log_fp64(p), log_fp64(p));
  }
}
