#ifndef STOPWATCH_H
#define STOPWATCH_H


#include <stddef.h>
#include <time.h>




typedef struct {
  int running;
  struct timespec start;
  size_t len;
  size_t maxlen;
  double* times;
} stopwatch;


stopwatch* create_stopwatch(void);

void free_stopwatch(stopwatch* in);

void reset_stopwatch(stopwatch* in);

void start_stopwatch(stopwatch* in);

double stop_stopwatch(stopwatch* in);

double elapsed_stopwatch(stopwatch* in);

double average_stopwatch(stopwatch* in);

double stddev_stopwatch(stopwatch* in);

double minimum_stopwatch(stopwatch* in);

double maximum_stopwatch(stopwatch* in);


#endif
