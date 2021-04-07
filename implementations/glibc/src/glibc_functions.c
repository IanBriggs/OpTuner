

#include "glibc_functions.h"

#include <math.h>




double exp_glibc(double x) {
  return exp(x);
}


double log_glibc(double x) {
  return log(x);
}


double sin_glibc(double x) {
  return sin(x);
}


double tan_glibc(double x) {
  return tan(x);
}




double expf_glibc(double x) {
  return (double) expf((float) x);
}


double logf_glibc(double x) {
  return (double) logf((float) x);
}


double sinf_glibc(double x) {
  return (double) sinf((float) x);
}


double tanf_glibc(double x) {
  return (double) tanf((float) x);
}

