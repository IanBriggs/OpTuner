#ifndef TIME_FUNC_H
#define TIME_FUNC_H

#include <stdlib.h>




typedef double(*arity_1)(double);
typedef double(*arity_2)(double,double);
typedef double(*arity_3)(double,double,double);
typedef double(*arity_4)(double,double,double,double);
typedef double(*arity_5)(double,double,double,double,double);
typedef double(*arity_6)(double,double,double,double,double,double);
typedef double(*arity_7)(double,double,double,double,double,double,double);
typedef double(*arity_8)(double,double,double,double,double,double,double,double);


typedef struct {
  void* func;
  size_t arity;
  char* name;
  double* lows;
  double* highs;
  double error;
} entry;

void
process_entries(int argc, char** argv,
                size_t count, entry* entries);



#endif
