

#include "rlibm_functions.h"

#include "float_math.h"




double expf_rlibm(double x) {
  return (double) rlibm_exp((float) x);
}


double logf_rlibm(double x) {
  return (double) rlibm_log((float) x);
}


