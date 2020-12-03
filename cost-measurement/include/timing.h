

#include "types.h"

#include <stddef.h>
#include <stdio.h>


typedef struct {
  char* name;
  char* error_bound;
  size_t runs;
  size_t* counts;
} func_data;

typedef struct {
  size_t values;
  size_t secs;
  size_t funcs;
  func_data* data;
  size_t arity;
  fp32* lows;
  fp32* highs;
} timing_data_fp32;


typedef struct {
  size_t values;
  size_t secs;
  size_t funcs;
  func_data* data;
  size_t arity;
  fp64* lows;
  fp64* highs;
} timing_data_fp64;




void print_timing_data_fp32(timing_data_fp32* in);

void print_timing_data_fp64(timing_data_fp64* in);

void free_timing_data_fp32(timing_data_fp32* in);

void free_timing_data_fp64(timing_data_fp64* in);

timing_data_fp32* time_unop_fp32(fp32 low_1, fp32 high_1,
                                 size_t count, unop_fp32* functions, char** names, char** error_bounds,
                                 size_t log2_values, size_t runs, size_t secs);

timing_data_fp64* time_unop_fp64(fp64 low_1, fp64 high_1,
                                 size_t count, unop_fp64* functions, char** names, char** error_bounds,
                                 size_t log2_values, size_t runs, size_t secs);

timing_data_fp32* time_binop_fp32(fp32 low_1, fp32 high_1,
                                  fp32 low_2, fp32 high_2,
                                  size_t count, binop_fp32* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs);

timing_data_fp64* time_binop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  size_t count, binop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs);

timing_data_fp32* time_triop_fp32(fp32 low_1, fp32 high_1,
                                  fp32 low_2, fp32 high_2,
                                  fp32 low_3, fp32 high_3,
                                  size_t count, triop_fp32* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs);

timing_data_fp64* time_triop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  fp64 low_3, fp64 high_3,
                                  size_t count, triop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs);

timing_data_fp64* time_quadop_fp64(fp64 low_1, fp64 high_1,
                                   fp64 low_2, fp64 high_2,
                                   fp64 low_3, fp64 high_3,
                                   fp64 low_4, fp64 high_4,
                                   size_t count, quadop_fp64* functions, char** names, char** error_bounds,
                                   size_t log2_values, size_t runs, size_t secs);

timing_data_fp64* time_quintop_fp64(fp64 low_1, fp64 high_1,
                                    fp64 low_2, fp64 high_2,
                                    fp64 low_3, fp64 high_3,
                                    fp64 low_4, fp64 high_4,
                                    fp64 low_5, fp64 high_5,
                                    size_t count, quintop_fp64* functions, char** names, char** error_bounds,
                                    size_t log2_values, size_t runs, size_t secs);

timing_data_fp64* time_hexop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  fp64 low_3, fp64 high_3,
                                  fp64 low_4, fp64 high_4,
                                  fp64 low_5, fp64 high_5,
                                  fp64 low_6, fp64 high_6,
                                  size_t count, hexop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs);

timing_data_fp64* time_octop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  fp64 low_3, fp64 high_3,
                                  fp64 low_4, fp64 high_4,
                                  fp64 low_5, fp64 high_5,
                                  fp64 low_6, fp64 high_6,
                                  fp64 low_7, fp64 high_7,
                                  fp64 low_8, fp64 high_8,
                                  size_t count, octop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs);
