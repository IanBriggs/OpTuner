#include "timing.h"
#include "xmalloc.h"
#include <float.h>
#include <math.h>
#include <stdio.h>
#include "log.h"
#include "ord_log.h"

const fp64 N_LOW = 0.0078125;
const fp64 N_HIGH = 10.0;

fp64 nmse_3_8_glibc(fp64 N) {
  return (N+1)*log_fp64(N+1) - N*log_fp64(N) - 1;
}

fp64 nmse_3_8_fast(fp64 N) {
  return (N+1)*((N+1)-1) - N*(N-1) - 1;
}

fp64 nmse_3_8_sol(fp64 N) {
  return (N+1)*ord_12_log_fp64(N+1) - N*ord_13_log_fp64(N) - 1;;
}

#define FUNC_COUNT (3)

unop_fp64 FUNCTIONS[FUNC_COUNT] = {nmse_3_8_glibc, nmse_3_8_fast, nmse_3_8_sol};
char* NAMES[FUNC_COUNT] = {"nmse_3_8_glibc", "nmse_3_8_fast", "nmse_3_8_sol"};
char* ERRORS[FUNC_COUNT] = {"1.209192e-14", "7.055555555555548", "null"};

int main(int argc, char** argv) {
  size_t log2_values = 18;
  size_t secs = 10;
  size_t runs = 3;
  if (argc > 1) { log2_values = strtoul(argv[1], NULL, 10); }
  if (argc > 2) { secs = strtoul(argv[2], NULL, 10); }
  if (argc > 3) { runs = strtoul(argv[3], NULL, 10); }
  timing_data_fp64* data = time_unop_fp64(N_LOW, N_HIGH,
                                          FUNC_COUNT, FUNCTIONS, NAMES, ERRORS,
                                          log2_values, runs, secs);
  print_timing_data_fp64(data);
  free_timing_data_fp64(data);
  return 0;
}
