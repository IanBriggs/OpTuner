#ifndef RAND_H
#define RAND_H

#include "types.h"

#include <stddef.h>




fp32 rand_fp32(fp32 low, fp32 high);
fp64 rand_fp64(fp64 low, fp64 high);

void fill_rand_fp32(fp32 low, fp32 high, size_t len, fp32* A);
void fill_rand_fp64(fp64 low, fp64 high, size_t len, fp64* A);




#endif
