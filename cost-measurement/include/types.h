#ifndef TYPES_H
#define TYPES_H

#include "asserts.h"

#include <limits.h>




STATIC_ASSERT(sizeof(float)*CHAR_BIT == 32, "float must be 32 bits");
typedef float fp32;

STATIC_ASSERT(sizeof(double)*CHAR_BIT == 64, "double must be 64 bits");
typedef double fp64;

typedef fp32(*unop_fp32)(fp32);
typedef fp64(*unop_fp64)(fp64);

typedef fp32(*binop_fp32)(fp32, fp32);
typedef fp64(*binop_fp64)(fp64, fp64);

typedef fp32(*triop_fp32)(fp32, fp32, fp32);
typedef fp64(*triop_fp64)(fp64, fp64, fp64);

typedef fp32(*quadop_fp32)(fp32, fp32, fp32, fp32);
typedef fp64(*quadop_fp64)(fp64, fp64, fp64, fp64);

typedef fp32(*quintop_fp32)(fp32, fp32, fp32, fp32, fp32);
typedef fp64(*quintop_fp64)(fp64, fp64, fp64, fp64, fp64);

typedef fp32(*hexop_fp32)(fp32, fp32, fp32, fp32, fp32, fp32);
typedef fp64(*hexop_fp64)(fp64, fp64, fp64, fp64, fp64, fp64);

typedef fp64(*octop_fp64)(fp64, fp64, fp64, fp64, fp64, fp64, fp64, fp64);




#endif
