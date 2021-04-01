

#include "vdt_functions.h"


#include "vdt/vdtMath.h"




double cos_vdt(double x) {
  return vdt::fast_cos(x);
}


double exp_vdt(double x) {
  return vdt::fast_exp(x);
}


double log_vdt(double x) {
  return vdt::fast_log(x);
}


double sin_vdt(double x) {
  return vdt::fast_sin(x);
}


double tan_vdt(double x) {
  return vdt::fast_tan(x);
}




double cosf_vdt(double x) {
  return (double) vdt::fast_cosf((float) x);
}


double expf_vdt(double x) {
  return (double) vdt::fast_expf((float) x);
}


double logf_vdt(double x) {
  return (double) vdt::fast_logf((float) x);
}


double sinf_vdt(double x) {
  return (double) vdt::fast_sinf((float) x);
}


double tanf_vdt(double x) {
  return (double) vdt::fast_tanf((float) x);
}


