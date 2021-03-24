

#include "rand_range.h"

#include "utils.h"
#include "xmalloc.h"

#include <math.h>
#include <stdlib.h>




inline static double
rand_in_range(double low, double high)
{
  assert(finite(low));
  assert(finite(high));
  assert(low < high);

  double diff = high - low;
  return low + diff * ((double) rand())/((double) RAND_MAX);
}


inline static void
check_rand_range(rand_range* in)
{
  UNUSED(in);
  assert(in != NULL);
  assert(in->points != NULL);
  assert(in->len > 0);
  assert(finite(in->low));
  assert(finite(in->high));
  assert(in->low < in->high);
}


rand_range*
create_rand_range(double low, double high, size_t len)
{
  rand_range* ret = (rand_range*) xmalloc(sizeof(rand_range));
  ret->low = low;
  ret->high = high;
  ret->len = len;

  ret->points = (double*) xmalloc(ret->len * sizeof(double));

  check_rand_range(ret);
  return ret;
}


void
free_rand_range(rand_range* in)
{
  check_rand_range(in);

  xfree(in->points);
  in->points = NULL;
  xfree(in);
}


void
fill_rand_range(rand_range* in)
{
  check_rand_range(in);

  double diff = in->high - in->low;
  double sep = 2*diff / ((double) in->len);

  double pt = in->low;
  size_t i;
  for (i=0; i<in->len; i++) {
    pt += rand_in_range(0.0, sep);
    if (pt > in->high) {
      break;
    }
    in->points[i] = pt;
  }

  while (i<in->len) {
    in->points[i] = rand_in_range(in->low, in->high);
    i += 1;
  }
}
