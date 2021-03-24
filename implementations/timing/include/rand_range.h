#ifndef RAND_RANGE_H
#define RAND_RANGE_H


#include <stddef.h>




typedef struct {
  size_t len;
  double* points;
  double low;
  double high;
} rand_range;


rand_range* create_rand_range(double low, double high, size_t len);

void free_rand_range(rand_range* in);

void fill_rand_range(rand_range* in);


#endif
