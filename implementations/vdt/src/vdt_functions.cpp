

#include "vdt_functions.h"


#include "vdt/vdtMath.h"




double sin_vdt(double x)
{
  return vdt::fast_sin(x);
}


double cos_vdt(double x)
{
  return vdt::fast_cos(x);
}


double tan_vdt(double x)
{
  return vdt::fast_tan(x);
}


double exp_vdt(double x)
{
  return vdt::fast_exp(x);
}


double log_vdt(double x)
{
  return vdt::fast_log(x);
}


double asin_vdt(double x)
{
  return vdt::fast_asin(x);
}


double acos_vdt(double x)
{
  return vdt::fast_acos(x);
}


double atan_vdt(double x)
{
  return vdt::fast_atan(x);
}
