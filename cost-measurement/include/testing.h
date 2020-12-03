

#include "types.h"

#include <stddef.h>
#include <stdio.h>


typedef struct {
  char* name;
  char* error_bound;
  size_t arity;
  fp32* worst_abs_inputs;
  fp32 worst_abs_expected;
  fp32 worst_abs_actual;
  fp32 worst_abs_diff;
  fp32* worst_rel_inputs;
  fp32 worst_rel_expected;
  fp32 worst_rel_actual;
  fp32 worst_rel_diff;
} func_error_data_fp32;

typedef struct {
  char* name;
  char* error_bound;
  size_t arity;
  fp64* worst_abs_inputs;
  fp64 worst_abs_expected;
  fp64 worst_abs_actual;
  fp64 worst_abs_diff;
  fp64* worst_rel_inputs;
  fp64 worst_rel_expected;
  fp64 worst_rel_actual;
  fp64 worst_rel_diff;
} func_error_data_fp64;

typedef struct {
  size_t points;
  size_t funcs;
  func_error_data_fp32* data;
  size_t arity;
  fp32* lows;
  fp32* highs;
} testing_data_fp32;

typedef struct {
  size_t points;
  size_t funcs;
  func_error_data_fp64* data;
  size_t arity;
  fp64* lows;
  fp64* highs;
} testing_data_fp64;




void print_testing_data_fp32(testing_data_fp32* in);

void print_testing_data_fp64(testing_data_fp64* in);

void free_testing_data_fp32(testing_data_fp32* in);

void free_testing_data_fp64(testing_data_fp64* in);


testing_data_fp32* test_unop_fp32(fp32 low, fp32 high,
                                 unop_fp32 reference,
                                 size_t funcs, unop_fp32* functions, char** names, char** error_bounds,
                                 size_t log2_points);

testing_data_fp64* test_unop_fp64(fp64 low, fp64 high,
                                 unop_fp64 reference,
                                 size_t funcs, unop_fp64* functions, char** names, char** error_bounds,
                                 size_t log2_points);

testing_data_fp32* test_binop_fp32(fp32 low_1, fp32 high_1,
                                  fp32 low_2, fp32 high_2,
                                  binop_fp32 reference,
                                  size_t funcs, binop_fp32* functions, char** names, char** error_bounds,
                                  size_t log2_points);

testing_data_fp64* test_binop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  binop_fp64 reference,
                                  size_t funcs, binop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_points);

testing_data_fp32* test_triop_fp32(fp32 low_1, fp32 high_1,
                                  fp32 low_2, fp32 high_2,
                                  fp32 low_3, fp32 high_3,
                                  triop_fp32 reference,
                                  size_t funcs, triop_fp32* functions, char** names, char** error_bounds,
                                  size_t log2_points);

testing_data_fp64* test_triop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  fp64 low_3, fp64 high_3,
                                  triop_fp64 reference,
                                  size_t funcs, triop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_points);
