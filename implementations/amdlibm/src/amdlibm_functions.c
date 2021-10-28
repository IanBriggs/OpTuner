

#include "amdlibm_functions.h"


#include "amdlibm.h"




double cos_amdlibm(double x) {
  return amd_cos(x);
}

double exp_amdlibm(double x) {
  return amd_exp(x);
}


double expm1_amdlibm(double x) {
  return amd_expm1(x);
}


double log_amdlibm(double x) {
  return amd_log(x);
}


double log1p_amdlibm(double x) {
  return amd_log1p(x);
}


double sin_amdlibm(double x) {
  return amd_sin(x);
}


double tan_amdlibm(double x) {
  return amd_tan(x);
}



double cosf_amdlibm(double x) {
  return (double) amd_cosf((float) x);
}

double expf_amdlibm(double x) {
  return (double) amd_expf((float) x);
}


double expm1f_amdlibm(double x) {
  return (double) amd_expm1f((float) x);
}


double logf_amdlibm(double x) {
  return (double) amd_logf((float) x);
}


double log1pf_amdlibm(double x) {
  return (double) amd_log1pf((float) x);
}


double sinf_amdlibm(double x) {
  return (double) amd_sinf((float) x);
}


double tanf_amdlibm(double x) {
  return (double) amd_tanf((float) x);
}


