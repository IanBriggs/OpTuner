

#include "stopwatch.h"

#include "xmalloc.h"
#include "utils.h"

#include <math.h>




inline static void
check_stopwatch(stopwatch* in)
{
  assert(in != NULL);
  assert(in->times != NULL);
  assert(in->running == 0 || in->running == 1);
  assert(in->maxlen != 0);
  assert(in->len < in->maxlen);

  for (size_t i=0; i<in->len; i++) {
    assert(finite(in->times[i]));
  }
}


stopwatch*
create_stopwatch(void)
{
  stopwatch* ret = (stopwatch*) xmalloc(sizeof(stopwatch));
  ret->running = 0;
  ret->len = 0;
  ret->maxlen = 8;
  ret->times = (double*) xmalloc(ret->maxlen*sizeof(double));

  check_stopwatch(ret);
  return ret;
}


void
free_stopwatch(stopwatch* in) {
  check_stopwatch(in);

  xfree(in->times);
  in->times = NULL;
  xfree(in);
}


void
reset_stopwatch(stopwatch* in)
{
  check_stopwatch(in);

  in->running = 0;
  in->len = 0;
}


void
start_stopwatch(stopwatch* in)
{
  check_stopwatch(in);
  assert(in->running == 0);

  in->running = 1;
  int status = clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &in->start);
  assert_zero(status);
}


double
stop_stopwatch(stopwatch* in)
{
  check_stopwatch(in);
  assert(in->running == 1);

  struct timespec end;
  int status = clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);
  assert_zero(status);
  in->running = 0;

  double elapsed;
  elapsed = ((double) (end.tv_sec - in->start.tv_sec)) * 1e9;
  elapsed = (elapsed + ((double) (end.tv_nsec - in->start.tv_nsec))) * 1e-9;

  if (in->len+1 == in->maxlen) {
    in->maxlen *= 2;
    in->times = xrealloc(in->times, in->maxlen*sizeof(double));
  }

  in->times[in->len] = elapsed;
  in->len += 1;

  return elapsed;
}


double
elapsed_stopwatch(stopwatch* in)
{
  check_stopwatch(in);
  assert(in->running == 0);
  assert(in->len >= 1);

  double sum = 0.0;
  for (size_t i=0; i< in->len; i++) {
    sum += in->times[i];
  }

  return sum;
}


double
average_stopwatch(stopwatch* in)
{
  check_stopwatch(in);
  assert(in->running == 0);
  assert(in->len >= 1);

  return elapsed_stopwatch(in) / ((double) in->len);
}


double
stddev_stopwatch(stopwatch* in)
{
  check_stopwatch(in);
  assert(in->running == 0);
  assert(in->len >= 2);

  double avg = average_stopwatch(in);
  double sum_of_squares = 0.0;
  for (size_t i=0; i< in->len; i++) {
    double diff = in->times[i] - avg;
    sum_of_squares += diff * diff;
  }

  double avg_of_squares = sum_of_squares / ((double) in->len);
  double stddev = sqrt(avg_of_squares);

  return stddev;
}


double
minimum_stopwatch(stopwatch* in)
{
  check_stopwatch(in);
  assert(in->running == 0);
  assert(in->len >= 1);

  double min = in->times[0];;
  for (size_t i=1; i< in->len; i++) {
    if (in->times[i] < min) {
      min = in->times[i];
    }
  }

  return min;
}


double
maximum_stopwatch(stopwatch* in)
{
  check_stopwatch(in);
  assert(in->running == 0);
  assert(in->len >= 1);

  double max = in->times[0];;
  for (size_t i=1; i< in->len; i++) {
    if (in->times[i] > max) {
      max = in->times[i];
    }
  }

  return max;
}
