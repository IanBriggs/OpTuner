

#include "testing.h"
#include "rand.h"
#include "xmalloc.h"

#include <math.h>
#include <string.h>
#include <stdint.h>



fp64 crossover_fp64 = 2.225073858507201e-308;

uint32_t fp32_to_uint32_t(fp32 x) {
  uint32_t y;
  memcpy(&y, &x, sizeof(fp32));
  return y;
}

fp32 uint32_t_to_fp32(uint32_t x) {
  fp32 y;
  memcpy(&y, &x, sizeof(fp32));
  return y;
}

uint64_t fp64_to_uint64_t(fp64 x) {
  uint64_t y;
  memcpy(&y, &x, sizeof(fp64));
  return y;
}

fp64 uint64_t_to_fp64(uint64_t x) {
  fp64 y;
  memcpy(&y, &x, sizeof(fp64));
  return y;
}

testing_data_fp64* malloc_testing_data_fp64(size_t funcs, char** names, char** error_bounds, size_t points, size_t arity)
{
  testing_data_fp64* retval = (testing_data_fp64*) xmalloc(sizeof(testing_data_fp64));
  retval->points = points;
  retval->funcs = funcs;

  retval->data = (func_error_data_fp64*) xmalloc(sizeof(func_error_data_fp64)*funcs);
  for (size_t i=0; i<funcs; i++) {
    size_t name_len = strlen(names[i]);
    retval->data[i].name = (char*) xmalloc(name_len+1);
    strcpy(retval->data[i].name, names[i]);
    retval->data[i].name[name_len] = '\0';

    size_t error_bound_len = strlen(error_bounds[i]);
    retval->data[i].error_bound = (char*) xmalloc(error_bound_len+1);
    strcpy(retval->data[i].error_bound, error_bounds[i]);
    retval->data[i].error_bound[error_bound_len] = '\0';

    retval->data[i].arity = arity;
    retval->data[i].worst_abs_inputs = (fp64*) xmalloc(sizeof(fp64)*arity);
    retval->data[i].worst_rel_inputs = (fp64*) xmalloc(sizeof(fp64)*arity);
    for (size_t j=0; j<arity; j++) {
      retval->data[i].worst_abs_inputs[j] = NAN;
      retval->data[i].worst_rel_inputs[j] = NAN;
    }

    retval->data[i].worst_abs_diff = -1.0;
    retval->data[i].worst_rel_diff = -1.0;

    retval->data[i].worst_abs_expected = NAN;
    retval->data[i].worst_rel_expected = NAN;

    retval->data[i].worst_abs_actual = NAN;
    retval->data[i].worst_rel_actual = NAN;
  }

  retval->arity = arity;
  retval->lows = (fp64*) xmalloc(sizeof(fp64)*arity);
  retval->highs = (fp64*) xmalloc(sizeof(fp64)*arity);

  return retval;
}



void print_testing_data_fp32(testing_data_fp32* in);

void print_testing_data_fp64(testing_data_fp64* in)
{
  size_t func;
  size_t a;

  printf("{\n");
  printf("  \"points\" : %zu,\n", in->points);
  printf("  \"function_data\" : [\n");

  for (func=0; func<in->funcs-1; func++) {
    printf("  {\n");
    printf("    \"name\" : \"%s\",\n", in->data[func].name);
    printf("    \"error_bound\" : \"%s\",\n", in->data[func].error_bound);
    printf("    \"worst_abs_inputs\" : [\n");
    for (a=0; a<in->arity-1; a++) {
      printf("      %1.18e,\n", in->data[func].worst_abs_inputs[a]);
    }
    printf("      %1.18e\n", in->data[func].worst_abs_inputs[a]);
    printf("    ],\n");
    printf("    \"worst_abs_expected\" : %1.18e,\n", in->data[func].worst_abs_expected);
    printf("    \"worst_abs_actual\" : %1.18e,\n", in->data[func].worst_abs_actual);
    printf("    \"worst_abs_diff\" : %1.18e,\n", in->data[func].worst_abs_diff);
    printf("    \"worst_rel_inputs\" : [\n");
    for (a=0; a<in->arity-1; a++) {
      printf("      %1.18e,\n", in->data[func].worst_rel_inputs[a]);
    }
    printf("      %1.18e\n", in->data[func].worst_rel_inputs[a]);
    printf("    ],\n");
    printf("    \"worst_rel_expected\" : %1.18e,\n", in->data[func].worst_rel_expected);
    printf("    \"worst_rel_actual\" : %1.18e,\n", in->data[func].worst_rel_actual);
    printf("    \"worst_rel_diff\" : %1.18e\n", in->data[func].worst_rel_diff);
    printf("  },\n");
  }
  printf("  {\n");
  printf("    \"name\" : \"%s\",\n", in->data[func].name);
  printf("    \"error_bound\" : \"%s\",\n", in->data[func].error_bound);
  printf("    \"worst_abs_inputs\" : [\n");
  for (a=0; a<in->arity-1; a++) {
    printf("      %1.18e,\n", in->data[func].worst_abs_inputs[a]);
  }
  printf("      %1.18e\n", in->data[func].worst_abs_inputs[a]);
  printf("    ],\n");
  printf("    \"worst_abs_expected\" : %1.18e,\n", in->data[func].worst_abs_expected);
  printf("    \"worst_abs_actual\" : %1.18e,\n", in->data[func].worst_abs_actual);
  printf("    \"worst_abs_diff\" : %1.18e,\n", in->data[func].worst_abs_diff);
  printf("    \"worst_rel_inputs\" : [\n");
  for (a=0; a<in->arity-1; a++) {
    printf("      %1.18e,\n", in->data[func].worst_rel_inputs[a]);
  }
  printf("      %1.18e\n", in->data[func].worst_rel_inputs[a]);
  printf("    ],\n");
  printf("    \"worst_rel_expected\" : %1.18e,\n", in->data[func].worst_rel_expected);
  printf("    \"worst_rel_actual\" : %1.18e,\n", in->data[func].worst_rel_actual);
  printf("    \"worst_rel_diff\" : %1.18e\n", in->data[func].worst_rel_diff);
  printf("  }\n");
  printf("  ],\n");

  printf("  \"lows\" : [");
  for (a=0; a<in->arity-1; a++) {
    printf("    %1.10e,\n", in->lows[a]);
  }
  printf("    %1.10e\n", in->lows[a]);
  printf("  ],\n");

  printf("  \"highs\" : [\n");
  for (a=0; a<in->arity-1; a++) {
    printf("    %1.10e,\n", in->highs[a]);
  }
  printf("    %1.10e\n", in->highs[a]);
  printf("  ]\n");

  printf("}\n");
}

void free_testing_data_fp32(testing_data_fp32* in);

void free_testing_data_fp64(testing_data_fp64* in)
{
  for (size_t i=0; i<in->funcs; i++) {
    free(in->data[i].name);
    in->data[i].name = NULL;
    free(in->data[i].error_bound);
    in->data[i].error_bound = NULL;
    free(in->data[i].worst_abs_inputs);
    in->data[i].worst_abs_inputs = NULL;
    free(in->data[i].worst_rel_inputs);
    in->data[i].worst_rel_inputs = NULL;
  }
  free(in->data);
  in->data = NULL;
  free(in->lows);
  in->lows = NULL;
  free(in->highs);
  in->highs = NULL;
}

testing_data_fp32* test_unop_fp32(fp32 low_1, fp32 high_1,
                                  unop_fp32 reference,
                                  size_t funcs, unop_fp32* functions, char** names, char** error_bounds,
                                  size_t log2_points);

testing_data_fp64* test_unop_fp64(fp64 low_1, fp64 high_1,
                                  unop_fp64 reference,
                                  size_t funcs, unop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_points)
{
  size_t points = ((size_t) 1) << log2_points;

  testing_data_fp64* data = malloc_testing_data_fp64(funcs, names, error_bounds, points, 1);
  data->lows[0] = low_1;
  data->highs[0] = high_1;

  for (size_t point=0; point<points; point++) {
    fp64 in_1 = rand_fp64(low_1, high_1);

    fp64 expected = reference(in_1);
    for (size_t func=0; func<funcs; func++) {
      fp64 actual = functions[func](in_1);

      fp64 abs_diff = fabs(expected - actual);
      if (fabs(expected) <= crossover_fp64 && abs_diff > data->data[func].worst_abs_diff) {
        data->data[func].worst_abs_diff = abs_diff;
        data->data[func].worst_abs_expected = expected;
        data->data[func].worst_abs_actual = actual;
        data->data[func].worst_abs_inputs[0] = in_1;
      }

      fp64 rel_diff = abs_diff / fabs(expected);
      if (fabs(expected) > crossover_fp64 && rel_diff > data->data[func].worst_rel_diff) {
        data->data[func].worst_rel_diff = rel_diff;
        data->data[func].worst_rel_expected = expected;
        data->data[func].worst_rel_actual = actual;
        data->data[func].worst_rel_inputs[0] = in_1;
      }
    }
  }

  return data;
}

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
