

#include "glibc_functions.h"

#include <math.h>




double cos_glibc(double x) {
  return cos(x);
}


double exp_glibc(double x) {
  return exp(x);
}


double expm1_glibc(double x) {
  return expm1(x);
}


double log_glibc(double x) {
  return log(x);
}


double log1p_glibc(double x) {
  return log1p(x);
}


double sin_glibc(double x) {
  return sin(x);
}


double tan_glibc(double x) {
  return tan(x);
}




double cosf_glibc(double x) {
  return (double) cosf((float) x);
}


double expf_glibc(double x) {
  return (double) expf((float) x);
}


double expm1f_glibc(double x) {
  return (double) expm1f((float) x);
}


double logf_glibc(double x) {
  return (double) logf((float) x);
}


double log1pf_glibc(double x) {
  return (double) log1pf((float) x);
}


double sinf_glibc(double x) {
  return (double) sinf((float) x);
}


double tanf_glibc(double x) {
  return (double) tanf((float) x);
}

