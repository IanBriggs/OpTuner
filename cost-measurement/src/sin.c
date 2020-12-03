

#include "sin.h"

#include <math.h>




fp32 sin_fp32(fp32 x)
{
  return sinf(x);
}

fp64 sin_fp64(fp64 x)
{
  return sin(x);
}


fp32 zero_sin_fp32(fp32 x)
{
  UNUSED(x);
  return 0.0f;
}

fp64 zero_sin_fp64(fp64 x)
{
  UNUSED(x);
  return 0.0;
}


fp32 one_sin_fp32(fp32 x)
{
  UNUSED(x);
  return 1.0f;
}

fp64 one_sin_fp64(fp64 x)
{
  UNUSED(x);
  return 1.0;
}


fp32 m_one_sin_fp32(fp32 x)
{
  UNUSED(x);
  return -1.0f;
}

fp64 m_one_sin_fp64(fp64 x)
{
  UNUSED(x);
  return -1.0;
}


fp32 taylor_1_sin_fp32(fp32 x)
{
  return x;
}

fp64 taylor_1_sin_fp64(fp64 x)
{
  return x;
}


fp32 taylor_3_sin_fp32(fp32 x)
{
  return x * (0x1p0f + x*x * (-0x1.555556p-3f));
}

fp64 taylor_3_sin_fp64(fp64 x)
{
  return x * (0x1p0 + x*x * (-0x1.5555555555555p-3));
}


