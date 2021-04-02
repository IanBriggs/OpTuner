

#include "amdlibm_functions.h"


#include "amdlibm.h"




double exp_amdlibm(double x) {
  return amd_exp(x);
}


double log_amdlibm(double x) {
  return amd_log(x);
}


double sin_amdlibm(double x) {
  return amd_sin(x);
}


double tan_amdlibm(double x) {
  return amd_tan(x);
}



double expf_amdlibm(double x) {
  return (double) amd_expf((float) x);
}


double logf_amdlibm(double x) {
  return (double) amd_logf((float) x);
}


double sinf_amdlibm(double x) {
  return (double) amd_sinf((float) x);
}


double tanf_amdlibm(double x) {
  return (double) amd_tanf((float) x);
}


