

#include "rand.h"

#include "asserts.h"

#include <stdlib.h>




fp32 rand_fp32(fp32 low, fp32 high)
{
  precondition(low < high);

  fp32 ret;

  do {
    const fp32 scale = (high-low) / ((fp32) RAND_MAX);
    fp32 rnd = (fp32) rand();
    ret = low + rnd * scale;
  } while (ret < low || ret > high);

  return ret;
}


fp64 rand_fp64(fp64 low, fp64 high)
{
  precondition(low < high);

  fp64 ret;

  do {
    const fp64 scale = (high-low) / ((fp64) RAND_MAX);
    fp64 rnd = (fp64) rand();
    ret = low + rnd * scale;
  } while(ret < low || ret > high);

  return ret;
}

void fill_rand_fp32(fp32 low, fp32 high, size_t len, fp32* A)
{
  precondition(low < high);
  precondition(A != NULL);

  for (size_t i=0; i<len; i++) {
    A[i] = rand_fp32(low, high);
  }
}

void fill_rand_fp64(fp64 low, fp64 high, size_t len, fp64* A)
{
  precondition(low < high);
  precondition(A != NULL);

  for (size_t i=0; i<len; i++) {
    A[i] = rand_fp64(low, high);
  }
}
