

#include "timing.h"

#include "rand.h"
#include "xmalloc.h"

#include <signal.h>
#include <string.h>
#include <pthread.h>
#include <time.h>




volatile sig_atomic_t RUNNING = 0;




timing_data_fp32* malloc_timing_data_fp32(size_t funcs, char** names, char** error_bounds, size_t values, size_t runs, size_t secs, size_t arity)
{
  timing_data_fp32* retval = (timing_data_fp32*) xmalloc(sizeof(timing_data_fp32));
  retval->values = values;
  retval->secs = secs;
  retval->funcs = funcs;

  retval->data = (func_data*) xmalloc(sizeof(func_data)*funcs);
  for (size_t i=0; i<funcs; i++) {
    size_t name_len = strlen(names[i]);
    retval->data[i].name = (char*) xmalloc(name_len+1);
    strcpy(retval->data[i].name, names[i]);
    retval->data[i].name[name_len] = '\0';

    size_t error_bound_len = strlen(error_bounds[i]);
    retval->data[i].error_bound = (char*) xmalloc(error_bound_len+1);
    strcpy(retval->data[i].error_bound, error_bounds[i]);
    retval->data[i].error_bound[error_bound_len] = '\0';

    retval->data[i].runs = runs;
    retval->data[i].counts = (size_t*) xmalloc(sizeof(size_t)*runs);
  }

  retval->arity = arity;
  retval->lows = (fp32*) xmalloc(sizeof(fp32)*arity);
  retval->highs = (fp32*) xmalloc(sizeof(fp32)*arity);

  return retval;
}

timing_data_fp64* malloc_timing_data_fp64(size_t funcs, char** names, char** error_bounds, size_t values, size_t runs, size_t secs, size_t arity)
{
  timing_data_fp64* retval = (timing_data_fp64*) xmalloc(sizeof(timing_data_fp64));
  retval->values = values;
  retval->secs = secs;
  retval->funcs = funcs;

  retval->data = (func_data*) xmalloc(sizeof(func_data)*funcs);
  for (size_t i=0; i<funcs; i++) {
    size_t name_len = strlen(names[i]);
    retval->data[i].name = (char*) xmalloc(sizeof(char)*(name_len+1));
    strcpy(retval->data[i].name, names[i]);
    retval->data[i].name[name_len] = '\0';

    size_t error_bound_len = strlen(error_bounds[i]);
    retval->data[i].error_bound = (char*) xmalloc(sizeof(char)*(error_bound_len+1));
    strcpy(retval->data[i].error_bound, error_bounds[i]);
    retval->data[i].error_bound[error_bound_len] = '\0';

    retval->data[i].runs = runs;
    retval->data[i].counts = (size_t*) xmalloc(sizeof(size_t)*runs);
  }

  retval->arity = arity;
  retval->lows = (fp64*) xmalloc(sizeof(fp64)*arity);
  retval->highs = (fp64*) xmalloc(sizeof(fp64)*arity);

  return retval;
}

void sigprof_handler(union sigval val)
{
  UNUSED(val);

  RUNNING = 0;
}


timer_t start_timer(size_t secs)
{
  int status;

  pthread_attr_t attr;
  pthread_attr_init( &attr );

  struct sched_param parm;
  parm.sched_priority = 255;
  pthread_attr_setschedparam(&attr, &parm);

  struct sigevent sig;
  sig.sigev_notify = SIGEV_THREAD;
  sig.sigev_signo = SIGPROF;
  sig.sigev_notify_function = sigprof_handler;
  sig.sigev_value.sival_int = 20;
  sig.sigev_notify_attributes = &attr;

  timer_t timerid;
  status = timer_create(CLOCK_REALTIME, &sig, &timerid);
  assert_zero(status);

  struct itimerspec in, out;
  in.it_value.tv_sec = 1;
  in.it_value.tv_nsec = 0;
  in.it_interval.tv_sec = (long int) secs;
  in.it_interval.tv_nsec = 0;
  status = timer_settime(timerid, 0, &in, &out);
  assert_zero(status);

  return timerid;
}




void print_timing_data_fp32(timing_data_fp32* in)
{
  size_t func;
  size_t run;
  size_t a;

  printf("{\n");
  printf("  \"values\" : %zu,\n", in->values);
  printf("  \"secs\" : %zu,\n", in->secs);

  printf("  \"functions_data\" : [\n");
  for (func=0; func<in->funcs-1; func++) {
    printf("    {\n");
    printf("      \"name\" : \"%s\",\n", in->data[func].name);
    printf("      \"error_bound\" : \"%s\",\n", in->data[func].error_bound);
    printf("      \"counts\" : [\n");
    for (run=0; run<in->data[func].runs-1; run++) {
      printf("        %zu,\n", in->data[func].counts[run]);
    }
    printf("        %zu\n", in->data[func].counts[run]);
    printf("      ]\n");
    printf("    },\n");
  }

  printf("    {\n");
  printf("      \"name\" : \"%s\",\n", in->data[func].name);
  printf("      \"error_bound\" : \"%s\",\n", in->data[func].error_bound);
  printf("      \"counts\" : [\n");
  for (run=0; run<in->data[func].runs-1; run++) {
    printf("        %zu,\n", in->data[func].counts[run]);
  }
  printf("        %zu\n", in->data[func].counts[run]);
  printf("      ]\n");
  printf("    }\n");
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
  printf("  ],\n");

  printf("}\n");
}

void print_timing_data_fp64(timing_data_fp64* in)
{
  size_t func;
  size_t run;
  size_t a;

  printf("{\n");
  printf("  \"values\" : %zu,\n", in->values);
  printf("  \"secs\" : %zu,\n", in->secs);

  printf("  \"functions_data\" : [\n");
  for (func=0; func<in->funcs-1; func++) {
    printf("    {\n");
    printf("      \"name\" : \"%s\",\n", in->data[func].name);
    printf("      \"error_bound\" : \"%s\",\n", in->data[func].error_bound);
    printf("      \"counts\" : [\n");
    for (run=0; run<in->data[func].runs-1; run++) {
      printf("        %zu,\n", in->data[func].counts[run]);
    }
    printf("        %zu\n", in->data[func].counts[run]);
    printf("      ]\n");
    printf("    },\n");
  }

  printf("    {\n");
  printf("      \"name\" : \"%s\",\n", in->data[func].name);
  printf("      \"error_bound\" : \"%s\",\n", in->data[func].error_bound);
  printf("      \"counts\" : [\n");
  for (run=0; run<in->data[func].runs-1; run++) {
    printf("        %zu,\n", in->data[func].counts[run]);
  }
  printf("        %zu\n", in->data[func].counts[run]);
  printf("      ]\n");
  printf("    }\n");
  printf("  ],\n");

  printf("  \"lows\" : [\n");
  for (a=0; a<in->arity-1; a++) {
    printf("    %1.18e,\n", in->lows[a]);
  }
  printf("    %1.18e\n", in->lows[a]);
  printf("  ],\n");

  printf("  \"highs\" : [\n");
  for (a=0; a<in->arity-1; a++) {
    printf("    %1.18e,\n", in->highs[a]);
  }
  printf("    %1.18e\n", in->highs[a]);
  printf("  ]\n");

  printf("}\n");
}

void free_timing_data_fp32(timing_data_fp32* in)
{
  for (size_t func=0; func<in->funcs; func++) {
    free(in->data[func].name);
    in->data[func].name = NULL;
    free(in->data[func].error_bound);
    in->data[func].error_bound = NULL;
    free(in->data[func].counts);
    in->data[func].counts = NULL;
  }
  free(in->data);
  in->data = NULL;
  free(in->lows);
  in->lows = NULL;
  free(in->highs);
  in->highs = NULL;
  free(in);
}

void free_timing_data_fp64(timing_data_fp64* in)
{
  for (size_t func=0; func<in->funcs; func++) {
    free(in->data[func].name);
    in->data[func].name = NULL;
    free(in->data[func].error_bound);
    in->data[func].error_bound = NULL;
    free(in->data[func].counts);
    in->data[func].counts = NULL;
  }
  free(in->data);
  in->data = NULL;
  free(in->lows);
  in->lows = NULL;
  free(in->highs);
  in->highs = NULL;
  free(in);
}

timing_data_fp32* time_unop_fp32(fp32 low_1, fp32 high_1,
                                 size_t funcs, unop_fp32* functions, char** names, char** error_bounds,
                                 size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp32* A = (fp32*) xmalloc(sizeof(fp32)*values);

  timing_data_fp32* data = malloc_timing_data_fp32(funcs, names, error_bounds, values, runs, secs, 1);
  data->lows[0] = low_1;
  data->highs[0] = high_1;

  for (size_t run=0; run<runs; run++) {
    fill_rand_fp32(low_1, high_1, values, A);

    for(size_t func=0; func<funcs; func++) {
      unop_fp32 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}


timing_data_fp64* time_unop_fp64(fp64 low_1, fp64 high_1,
                                 size_t funcs, unop_fp64* functions, char** names, char** error_bounds,
                                 size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp64* A = (fp64*) xmalloc(sizeof(fp64)*values);

  timing_data_fp64* data = malloc_timing_data_fp64(funcs, names, error_bounds, values, runs, secs, 1);
  data->lows[0] = low_1;
  data->highs[0] = high_1;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp64(low_1, high_1, values, A);

    for(size_t func=0; func<funcs; func++) {
      unop_fp64 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}


timing_data_fp32* time_binop_fp32(fp32 low_1, fp32 high_1,
                                  fp32 low_2, fp32 high_2,
                                  size_t funcs, binop_fp32* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp32* A = (fp32*) xmalloc(sizeof(fp32)*values);
  fp32* B = (fp32*) xmalloc(sizeof(fp32)*values);

  timing_data_fp32* data = malloc_timing_data_fp32(funcs, names, error_bounds, values, runs, secs, 2);
  data->lows[0] = low_1;
  data->lows[1] = low_2;
  data->highs[0] = high_1;
  data->highs[1] = high_2;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp32(low_1, high_1, values, A);
    fill_rand_fp32(low_2, high_2, values, B);

    for(size_t func=0; func<funcs; func++) {
      binop_fp32 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx], B[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}


timing_data_fp64* time_binop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  size_t funcs, binop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp64* A = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* B = (fp64*) xmalloc(sizeof(fp64)*values);

  timing_data_fp64* data = malloc_timing_data_fp64(funcs, names, error_bounds, values, runs, secs, 2);
  data->lows[0] = low_1;
  data->lows[1] = low_2;
  data->highs[0] = high_1;
  data->highs[1] = high_2;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp64(low_1, high_1, values, A);
    fill_rand_fp64(low_2, high_2, values, B);

    for(size_t func=0; func<funcs; func++) {
      binop_fp64 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx], B[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}


timing_data_fp32* time_triop_fp32(fp32 low_1, fp32 high_1,
                                  fp32 low_2, fp32 high_2,
                                  fp32 low_3, fp32 high_3,
                                  size_t funcs, triop_fp32* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp32* A = (fp32*) xmalloc(sizeof(fp32)*values);
  fp32* B = (fp32*) xmalloc(sizeof(fp32)*values);
  fp32* C = (fp32*) xmalloc(sizeof(fp32)*values);

  timing_data_fp32* data = malloc_timing_data_fp32(funcs, names, error_bounds, values, runs, secs, 3);
  data->lows[0] = low_1;
  data->lows[1] = low_2;
  data->lows[2] = low_3;
  data->highs[0] = high_1;
  data->highs[1] = high_2;
  data->highs[2] = high_3;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp32(low_1, high_1, values, A);
    fill_rand_fp32(low_2, high_2, values, B);
    fill_rand_fp32(low_3, high_3, values, C);

    for(size_t func=0; func<funcs; func++) {
      triop_fp32 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx], B[idx], C[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}


timing_data_fp64* time_triop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  fp64 low_3, fp64 high_3,
                                  size_t funcs, triop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp64* A = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* B = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* C = (fp64*) xmalloc(sizeof(fp64)*values);

  timing_data_fp64* data = malloc_timing_data_fp64(funcs, names, error_bounds, values, runs, secs, 3);
  data->lows[0] = low_1;
  data->lows[1] = low_2;
  data->lows[2] = low_3;
  data->highs[0] = high_1;
  data->highs[1] = high_2;
  data->highs[2] = high_3;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp64(low_1, high_1, values, A);
    fill_rand_fp64(low_2, high_2, values, B);
    fill_rand_fp64(low_3, high_3, values, C);

    for(size_t func=0; func<funcs; func++) {
      triop_fp64 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx], B[idx], C[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}


timing_data_fp64* time_quadop_fp64(fp64 low_1, fp64 high_1,
                                   fp64 low_2, fp64 high_2,
                                   fp64 low_3, fp64 high_3,
                                   fp64 low_4, fp64 high_4,
                                   size_t funcs, quadop_fp64* functions, char** names, char** error_bounds,
                                   size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp64* A = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* B = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* C = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* D = (fp64*) xmalloc(sizeof(fp64)*values);

  timing_data_fp64* data = malloc_timing_data_fp64(funcs, names, error_bounds, values, runs, secs, 4);
  data->lows[0] = low_1;
  data->lows[1] = low_2;
  data->lows[2] = low_3;
    data->lows[3] = low_4;
  data->highs[0] = high_1;
  data->highs[1] = high_2;
  data->highs[2] = high_3;
    data->highs[3] = high_4;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp64(low_1, high_1, values, A);
    fill_rand_fp64(low_2, high_2, values, B);
    fill_rand_fp64(low_3, high_3, values, C);
    fill_rand_fp64(low_4, high_4, values, D);

    for(size_t func=0; func<funcs; func++) {
      quadop_fp64 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx], B[idx], C[idx], D[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}


timing_data_fp64* time_quintop_fp64(fp64 low_1, fp64 high_1,
                                    fp64 low_2, fp64 high_2,
                                    fp64 low_3, fp64 high_3,
                                    fp64 low_4, fp64 high_4,
                                    fp64 low_5, fp64 high_5,
                                    size_t funcs, quintop_fp64* functions, char** names, char** error_bounds,
                                    size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp64* A = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* B = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* C = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* D = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* E = (fp64*) xmalloc(sizeof(fp64)*values);

  timing_data_fp64* data = malloc_timing_data_fp64(funcs, names, error_bounds, values, runs, secs, 5);
  data->lows[0] = low_1;
  data->lows[1] = low_2;
  data->lows[2] = low_3;
  data->lows[2] = low_4;
  data->lows[4] = low_5;
  data->highs[0] = high_1;
  data->highs[1] = high_2;
  data->highs[2] = high_3;
  data->highs[3] = high_4;
  data->highs[4] = high_5;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp64(low_1, high_1, values, A);
    fill_rand_fp64(low_2, high_2, values, B);
    fill_rand_fp64(low_3, high_3, values, C);
    fill_rand_fp64(low_4, high_4, values, D);
    fill_rand_fp64(low_5, high_5, values, E);

    for(size_t func=0; func<funcs; func++) {
      quintop_fp64 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx], B[idx], C[idx], D[idx], E[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}

timing_data_fp64* time_hexop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  fp64 low_3, fp64 high_3,
                                  fp64 low_4, fp64 high_4,
                                  fp64 low_5, fp64 high_5,
                                  fp64 low_6, fp64 high_6,
                                  size_t funcs, hexop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp64* A = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* B = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* C = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* D = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* E = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* F = (fp64*) xmalloc(sizeof(fp64)*values);

  timing_data_fp64* data = malloc_timing_data_fp64(funcs, names, error_bounds, values, runs, secs, 6);
  data->lows[0] = low_1;
  data->lows[1] = low_2;
  data->lows[2] = low_3;
  data->lows[3] = low_4;
  data->lows[4] = low_5;
  data->lows[5] = low_6;
  data->highs[0] = high_1;
  data->highs[1] = high_2;
  data->highs[2] = high_3;
  data->highs[3] = high_4;
  data->highs[4] = high_5;
  data->highs[5] = high_6;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp64(low_1, high_1, values, A);
    fill_rand_fp64(low_2, high_2, values, B);
    fill_rand_fp64(low_3, high_3, values, C);
    fill_rand_fp64(low_4, high_4, values, D);
    fill_rand_fp64(low_5, high_5, values, E);
    fill_rand_fp64(low_6, high_6, values, F);

    for(size_t func=0; func<funcs; func++) {
      hexop_fp64 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx], B[idx], C[idx], D[idx], E[idx], F[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}


timing_data_fp64* time_octop_fp64(fp64 low_1, fp64 high_1,
                                  fp64 low_2, fp64 high_2,
                                  fp64 low_3, fp64 high_3,
                                  fp64 low_4, fp64 high_4,
                                  fp64 low_5, fp64 high_5,
                                  fp64 low_6, fp64 high_6,
                                  fp64 low_7, fp64 high_7,
                                  fp64 low_8, fp64 high_8,
                                  size_t funcs, octop_fp64* functions, char** names, char** error_bounds,
                                  size_t log2_values, size_t runs, size_t secs)
{
  size_t values = ((size_t) 1) << log2_values;
  fp64* A = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* B = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* C = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* D = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* E = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* F = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* G = (fp64*) xmalloc(sizeof(fp64)*values);
  fp64* H = (fp64*) xmalloc(sizeof(fp64)*values);

  timing_data_fp64* data = malloc_timing_data_fp64(funcs, names, error_bounds, values, runs, secs, 8);
  data->lows[0] = low_1;
  data->lows[1] = low_2;
  data->lows[2] = low_3;
  data->lows[3] = low_4;
  data->lows[4] = low_5;
  data->lows[5] = low_6;
  data->lows[6] = low_7;
  data->lows[7] = low_8;
  data->highs[0] = high_1;
  data->highs[1] = high_2;
  data->highs[2] = high_3;
  data->highs[3] = high_4;
  data->highs[4] = high_5;
  data->highs[5] = high_6;
  data->highs[6] = high_7;
  data->highs[7] = high_8;

  for(size_t run=0; run<runs; run++) {
    fill_rand_fp64(low_1, high_1, values, A);
    fill_rand_fp64(low_2, high_2, values, B);
    fill_rand_fp64(low_3, high_3, values, C);
    fill_rand_fp64(low_4, high_4, values, D);
    fill_rand_fp64(low_5, high_5, values, E);
    fill_rand_fp64(low_6, high_6, values, F);
    fill_rand_fp64(low_7, high_7, values, G);
    fill_rand_fp64(low_8, high_8, values, H);

    for(size_t func=0; func<funcs; func++) {
      octop_fp64 f = functions[func];
      size_t calls = 0;
      size_t idx = 0;

      RUNNING = 1;
      timer_t timerid = start_timer(secs);
      while (RUNNING) {
        f(A[idx], B[idx], C[idx], D[idx], E[idx], F[idx], G[idx], H[idx]);
        idx = (idx+1) % values;
        calls += 1;
      };

      int status = timer_delete(timerid);
      assert_zero(status);

      data->data[func].counts[run] = calls;
    }
  }

  return data;
}
