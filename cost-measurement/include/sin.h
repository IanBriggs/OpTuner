#ifndef SIN_H
#define SIN_H

#include "types.h"




fp32 sin_fp32(fp32 x);
fp64 sin_fp64(fp64 x);

fp32 zero_sin_fp32(fp32 x);
fp64 zero_sin_fp64(fp64 x);

fp32 one_sin_fp32(fp32 x);
fp64 one_sin_fp64(fp64 x);

fp32 m_one_sin_fp32(fp32 x);
fp64 m_one_sin_fp64(fp64 x);

fp32 taylor_1_sin_fp32(fp32 x);
fp64 taylor_1_sin_fp64(fp64 x);

fp32 taylor_3_sin_fp32(fp32 x);
fp64 taylor_3_sin_fp64(fp64 x);




#endif
