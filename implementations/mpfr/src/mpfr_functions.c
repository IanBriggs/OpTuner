

#include "mpfr_functions.h"

#include <mpfr.h>




#define PREC (53)


double exp_mpfr(double x)
{
  mpfr_t rx, frx;
  mpfr_inits2(PREC, rx, frx, (mpfr_ptr) 0);
  mpfr_set_d(rx, x, MPFR_RNDN);
  mpfr_exp(frx, rx, MPFR_RNDN);
  double fx = mpfr_get_d(frx, MPFR_RNDN);
  mpfr_clears(rx, frx, (mpfr_ptr) 0);
  return fx;
}


double log_mpfr(double x)
{
  mpfr_t rx, frx;
  mpfr_inits2(PREC, rx, frx, (mpfr_ptr) 0);
  mpfr_set_d(rx, x, MPFR_RNDN);
  mpfr_log(frx, rx, MPFR_RNDN);
  double fx = mpfr_get_d(frx, MPFR_RNDN);
  mpfr_clears(rx, frx, (mpfr_ptr) 0);
  return fx;
}


double sin_mpfr(double x)
{
  mpfr_t rx, frx;
  mpfr_inits2(PREC, rx, frx, (mpfr_ptr) 0);
  mpfr_set_d(rx, x, MPFR_RNDN);
  mpfr_sin(frx, rx, MPFR_RNDN);
  double fx = mpfr_get_d(frx, MPFR_RNDN);
  mpfr_clears(rx, frx, (mpfr_ptr) 0);
  return fx;
}


double tan_mpfr(double x)
{
  mpfr_t rx, frx;
  mpfr_inits2(PREC, rx, frx, (mpfr_ptr) 0);
  mpfr_set_d(rx, x, MPFR_RNDN);
  mpfr_tan(frx, rx, MPFR_RNDN);
  double fx = mpfr_get_d(frx, MPFR_RNDN);
  mpfr_clears(rx, frx, (mpfr_ptr) 0);
  return fx;
}

