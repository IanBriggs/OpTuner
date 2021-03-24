

#include "time_func.h"

#include "alarm.h"
#include "rand_range.h"
#include "stopwatch.h"
#include "utils.h"
#include "xmalloc.h"

#include <stdio.h>
#include <stdlib.h>






static inline size_t
log2_to_value(size_t log2_data)
{
  return ((size_t) 1) << log2_data;
}


static inline size_t
log2_to_mask(size_t log2_data)
{
  return (((size_t) 1) << (log2_data)) - 1;
}


void
time_entry_1(entry* e, size_t log2_data, size_t seconds, size_t repeats)
{
  assert(e->arity == 1);

  srand(42);

  printf("        {\n");
  printf("            \"function\": \"%s\",\n", e->name);
  printf("            \"domain_0\": [%1.16e, %1.16e],\n", e->lows[0], e->highs[0]);
  if (e->error > 0) {
    printf("            \"error\": %1.16e,\n", e->error);
  }
  printf("            \"runs\": [\n");
  fflush(stdout);

  arity_1 func = (arity_1) e->func;
  size_t values = log2_to_value(log2_data);
  size_t mask = log2_to_mask(log2_data);
  rand_range* rang = create_rand_range(e->lows[0], e->highs[0], (size_t) values);
  stopwatch* sw = create_stopwatch();
  size_t count = 0;

  fill_rand_range(rang);
  set_alarm(2);
  while (RUNNING) {
    size_t idx = count&mask;
    assert(idx < rang->len);
    func(rang->points[idx]);
    count += 1;
  }
  clear_alarm();

  for (size_t r=0; r<repeats; r++) {
    fill_rand_range(rang);
    count = 0;
    set_alarm((size_t) seconds);
    start_stopwatch(sw);
    while (RUNNING) {
      size_t idx = count&mask;
      assert(idx < rang->len);
      func(rang->points[idx]);
      count += 1;
    }
    double time = stop_stopwatch(sw);
    clear_alarm();

    printf("                {\"time\": %f, \"count\": %ld}", time, count);
    if (r == repeats-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  free_rand_range(rang);
  free_stopwatch(sw);
  printf("            ]\n");
  printf("        }");
}


void
time_entry_2(entry* e, size_t log2_data, size_t seconds, size_t repeats)
{
  assert(e->arity == 2);

  srand(42);

  printf("        {\n");
  printf("            \"function\": \"%s\",\n", e->name);
  printf("            \"domain_0\": [%1.16e, %1.16e],\n", e->lows[0], e->highs[0]);
  printf("            \"domain_1\": [%1.16e, %1.16e],\n", e->lows[1], e->highs[1]);
  if (e->error > 0) {
    printf("            \"error\": %1.16e,\n", e->error);
  }
  printf("            \"runs\": [\n");
  fflush(stdout);

  arity_2 func = (arity_2) e->func;
  size_t log2_part = log2_data - 1;
  size_t values = log2_to_value(log2_part);
  size_t mask = log2_to_mask(log2_part);
  rand_range* rang_0 = create_rand_range(e->lows[0], e->highs[0], (size_t) values);
  rand_range* rang_1 = create_rand_range(e->lows[1], e->highs[1], (size_t) values);
  stopwatch* sw = create_stopwatch();
  size_t count = 0;

  fill_rand_range(rang_0);
  fill_rand_range(rang_1);
  set_alarm(2);
  while (RUNNING) {
    size_t idx = count & mask;
    func(rang_0->points[idx], rang_1->points[idx]);
    count += 1;
  }
  clear_alarm();

  for (size_t r=0; r<repeats; r++) {
    fill_rand_range(rang_0);
    fill_rand_range(rang_1);
    count = 0;
    set_alarm((size_t) seconds);
    start_stopwatch(sw);
    while (RUNNING) {
      size_t idx = count & mask;
      func(rang_0->points[idx], rang_1->points[idx]);
      count += 1;
    }
    double time = stop_stopwatch(sw);
    clear_alarm();

    printf("                {\"time\": %f, \"count\": %ld}", time, count);
    if (r == repeats-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  free_rand_range(rang_0);
  free_rand_range(rang_1);
  free_stopwatch(sw);
  printf("            ]\n");
  printf("        }");
}


void
time_entry_3(entry* e, size_t log2_data, size_t seconds, size_t repeats)
{
  assert(e->arity == 3);

  srand(42);

  printf("        {\n");
  printf("            \"function\": \"%s\",\n", e->name);
  printf("            \"domain_0\": [%1.16e, %1.16e],\n", e->lows[0], e->highs[0]);
  printf("            \"domain_1\": [%1.16e, %1.16e],\n", e->lows[1], e->highs[1]);
  printf("            \"domain_2\": [%1.16e, %1.16e],\n", e->lows[2], e->highs[2]);
  if (e->error > 0) {
    printf("            \"error\": %1.16e,\n", e->error);
  }
  printf("            \"runs\": [\n");
  fflush(stdout);

  arity_3 func = (arity_3) e->func;
  size_t log2_part = log2_data - 2;
  size_t values = log2_to_value(log2_part);
  size_t mask = log2_to_mask(log2_part);
  rand_range* rang_0 = create_rand_range(e->lows[0], e->highs[0], (size_t) values);
  rand_range* rang_1 = create_rand_range(e->lows[1], e->highs[1], (size_t) values);
  rand_range* rang_2 = create_rand_range(e->lows[2], e->highs[2], (size_t) values);
  stopwatch* sw = create_stopwatch();
  size_t count = 0;

  fill_rand_range(rang_0);
  fill_rand_range(rang_1);
  fill_rand_range(rang_2);
  set_alarm(2);
  while (RUNNING) {
    size_t idx = count & mask;
    func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx]);
    count += 1;
  }
  clear_alarm();

  for (size_t r=0; r<repeats; r++) {
    fill_rand_range(rang_0);
    fill_rand_range(rang_1);
    fill_rand_range(rang_2);
    count = 0;
    set_alarm((size_t) seconds);
    start_stopwatch(sw);
    while (RUNNING) {
      size_t idx = count & mask;
      func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx]);
      count += 1;
    }
    double time = stop_stopwatch(sw);
    clear_alarm();

    printf("                {\"time\": %f, \"count\": %ld}", time, count);
    if (r == repeats-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  free_rand_range(rang_0);
  free_rand_range(rang_1);
  free_rand_range(rang_2);
  free_stopwatch(sw);
  printf("            ]\n");
  printf("        }");
}


void
time_entry_4(entry* e, size_t log2_data, size_t seconds, size_t repeats)
{
  assert(e->arity == 4);

  srand(42);

  printf("        {\n");
  printf("            \"function\": \"%s\",\n", e->name);
  printf("            \"domain_0\": [%1.16e, %1.16e],\n", e->lows[0], e->highs[0]);
  printf("            \"domain_1\": [%1.16e, %1.16e],\n", e->lows[1], e->highs[1]);
  printf("            \"domain_2\": [%1.16e, %1.16e],\n", e->lows[2], e->highs[2]);
  printf("            \"domain_3\": [%1.16e, %1.16e],\n", e->lows[3], e->highs[3]);
  if (e->error > 0) {
    printf("            \"error\": %1.16e,\n", e->error);
  }
  printf("            \"runs\": [\n");
  fflush(stdout);

  arity_4 func = (arity_4) e->func;
  size_t log2_part = log2_data - 2;
  size_t values = log2_to_value(log2_part);
  size_t mask = log2_to_mask(log2_part);
  rand_range* rang_0 = create_rand_range(e->lows[0], e->highs[0], (size_t) values);
  rand_range* rang_1 = create_rand_range(e->lows[1], e->highs[1], (size_t) values);
  rand_range* rang_2 = create_rand_range(e->lows[2], e->highs[2], (size_t) values);
  rand_range* rang_3 = create_rand_range(e->lows[3], e->highs[3], (size_t) values);
  stopwatch* sw = create_stopwatch();
  size_t count = 0;

  fill_rand_range(rang_0);
  fill_rand_range(rang_1);
  fill_rand_range(rang_2);
  fill_rand_range(rang_3);
  set_alarm(2);
  while (RUNNING) {
    size_t idx = count & mask;
    func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx]);
    count += 1;
  }
  clear_alarm();

  for (size_t r=0; r<repeats; r++) {
    fill_rand_range(rang_0);
    fill_rand_range(rang_1);
    fill_rand_range(rang_2);
    fill_rand_range(rang_3);
    count = 0;
    set_alarm((size_t) seconds);
    start_stopwatch(sw);
    while (RUNNING) {
      size_t idx = count & mask;
      func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx]);
      count += 1;
    }
    double time = stop_stopwatch(sw);
    clear_alarm();

    printf("                {\"time\": %f, \"count\": %ld}", time, count);
    if (r == repeats-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  free_rand_range(rang_0);
  free_rand_range(rang_1);
  free_rand_range(rang_2);
  free_rand_range(rang_3);
  free_stopwatch(sw);
  printf("            ]\n");
  printf("        }");
}


void
time_entry_5(entry* e, size_t log2_data, size_t seconds, size_t repeats)
{
  assert(e->arity == 5);

  srand(42);

  printf("        {\n");
  printf("            \"function\": \"%s\",\n", e->name);
  printf("            \"domain_0\": [%1.16e, %1.16e],\n", e->lows[0], e->highs[0]);
  printf("            \"domain_1\": [%1.16e, %1.16e],\n", e->lows[1], e->highs[1]);
  printf("            \"domain_2\": [%1.16e, %1.16e],\n", e->lows[2], e->highs[2]);
  printf("            \"domain_3\": [%1.16e, %1.16e],\n", e->lows[3], e->highs[3]);
  printf("            \"domain_4\": [%1.16e, %1.16e],\n", e->lows[4], e->highs[4]);
  if (e->error > 0) {
    printf("            \"error\": %1.16e,\n", e->error);
  }
  printf("            \"runs\": [\n");
  fflush(stdout);

  arity_5 func = (arity_5) e->func;
  size_t log2_part = log2_data - 3;
  size_t values = log2_to_value(log2_part);
  size_t mask = log2_to_mask(log2_part);
  rand_range* rang_0 = create_rand_range(e->lows[0], e->highs[0], (size_t) values);
  rand_range* rang_1 = create_rand_range(e->lows[1], e->highs[1], (size_t) values);
  rand_range* rang_2 = create_rand_range(e->lows[2], e->highs[2], (size_t) values);
  rand_range* rang_3 = create_rand_range(e->lows[3], e->highs[3], (size_t) values);
  rand_range* rang_4 = create_rand_range(e->lows[4], e->highs[4], (size_t) values);
  stopwatch* sw = create_stopwatch();
  size_t count = 0;

  fill_rand_range(rang_0);
  fill_rand_range(rang_1);
  fill_rand_range(rang_2);
  fill_rand_range(rang_3);
  fill_rand_range(rang_4);
  set_alarm(2);
  while (RUNNING) {
    size_t idx = count & mask;
    func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx], rang_4->points[idx]);
    count += 1;
  }
  clear_alarm();

  for (size_t r=0; r<repeats; r++) {
    fill_rand_range(rang_0);
    fill_rand_range(rang_1);
    fill_rand_range(rang_2);
    fill_rand_range(rang_3);
    fill_rand_range(rang_4);
    count = 0;
    set_alarm((size_t) seconds);
    start_stopwatch(sw);
    while (RUNNING) {
      size_t idx = count & mask;
      func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx], rang_4->points[idx]);
      count += 1;
    }
    double time = stop_stopwatch(sw);
    clear_alarm();

    printf("                {\"time\": %f, \"count\": %ld}", time, count);
    if (r == repeats-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  free_rand_range(rang_0);
  free_rand_range(rang_1);
  free_rand_range(rang_2);
  free_rand_range(rang_3);
  free_rand_range(rang_4);
  free_stopwatch(sw);
  printf("            ]\n");
  printf("        }");
}


void
time_entry_6(entry* e, size_t log2_data, size_t seconds, size_t repeats)
{
  assert(e->arity == 6);

  srand(42);

  printf("        {\n");
  printf("            \"function\": \"%s\",\n", e->name);
  printf("            \"domain_0\": [%1.16e, %1.16e],\n", e->lows[0], e->highs[0]);
  printf("            \"domain_1\": [%1.16e, %1.16e],\n", e->lows[1], e->highs[1]);
  printf("            \"domain_2\": [%1.16e, %1.16e],\n", e->lows[2], e->highs[2]);
  printf("            \"domain_3\": [%1.16e, %1.16e],\n", e->lows[3], e->highs[3]);
  printf("            \"domain_4\": [%1.16e, %1.16e],\n", e->lows[4], e->highs[4]);
  printf("            \"domain_5\": [%1.16e, %1.16e],\n", e->lows[5], e->highs[5]);
  if (e->error > 0) {
    printf("            \"error\": %1.16e,\n", e->error);
  }
  printf("            \"runs\": [\n");
  fflush(stdout);

  arity_6 func = (arity_6) e->func;
  size_t log2_part = log2_data - 3;
  size_t values = log2_to_value(log2_part);
  size_t mask = log2_to_mask(log2_part);
  rand_range* rang_0 = create_rand_range(e->lows[0], e->highs[0], (size_t) values);
  rand_range* rang_1 = create_rand_range(e->lows[1], e->highs[1], (size_t) values);
  rand_range* rang_2 = create_rand_range(e->lows[2], e->highs[2], (size_t) values);
  rand_range* rang_3 = create_rand_range(e->lows[3], e->highs[3], (size_t) values);
  rand_range* rang_4 = create_rand_range(e->lows[4], e->highs[4], (size_t) values);
  rand_range* rang_5 = create_rand_range(e->lows[5], e->highs[5], (size_t) values);
  stopwatch* sw = create_stopwatch();
  size_t count = 0;

  fill_rand_range(rang_0);
  fill_rand_range(rang_1);
  fill_rand_range(rang_2);
  fill_rand_range(rang_3);
  fill_rand_range(rang_4);
  fill_rand_range(rang_5);
  set_alarm(2);
  while (RUNNING) {
    size_t idx = count & mask;
    func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx], rang_4->points[idx], rang_5->points[idx]);
    count += 1;
  }
  clear_alarm();

  for (size_t r=0; r<repeats; r++) {
    fill_rand_range(rang_0);
    fill_rand_range(rang_1);
    fill_rand_range(rang_2);
    fill_rand_range(rang_3);
    fill_rand_range(rang_4);
    fill_rand_range(rang_5);
    count = 0;
    set_alarm((size_t) seconds);
    start_stopwatch(sw);
    while (RUNNING) {
      size_t idx = count & mask;
      func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx], rang_4->points[idx], rang_5->points[idx]);
      count += 1;
    }
    double time = stop_stopwatch(sw);
    clear_alarm();

    printf("                {\"time\": %f, \"count\": %ld}", time, count);
    if (r == repeats-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  free_rand_range(rang_0);
  free_rand_range(rang_1);
  free_rand_range(rang_2);
  free_rand_range(rang_3);
  free_rand_range(rang_4);
  free_rand_range(rang_5);
  free_stopwatch(sw);
  printf("            ]\n");
  printf("        }");
}


void
time_entry_7(entry* e, size_t log2_data, size_t seconds, size_t repeats)
{
  assert(e->arity == 7);

  srand(42);

  printf("        {\n");
  printf("            \"function\": \"%s\",\n", e->name);
  printf("            \"domain_0\": [%1.16e, %1.16e],\n", e->lows[0], e->highs[0]);
  printf("            \"domain_1\": [%1.16e, %1.16e],\n", e->lows[1], e->highs[1]);
  printf("            \"domain_2\": [%1.16e, %1.16e],\n", e->lows[2], e->highs[2]);
  printf("            \"domain_3\": [%1.16e, %1.16e],\n", e->lows[3], e->highs[3]);
  printf("            \"domain_4\": [%1.16e, %1.16e],\n", e->lows[4], e->highs[4]);
  printf("            \"domain_5\": [%1.16e, %1.16e],\n", e->lows[5], e->highs[5]);
  printf("            \"domain_6\": [%1.16e, %1.16e],\n", e->lows[6], e->highs[6]);
  if (e->error > 0) {
    printf("            \"error\": %1.16e,\n", e->error);
  }
  printf("            \"runs\": [\n");
  fflush(stdout);

  arity_7 func = (arity_7) e->func;
  size_t log2_part = log2_data - 3;
  size_t values = log2_to_value(log2_part);
  size_t mask = log2_to_mask(log2_part);
  rand_range* rang_0 = create_rand_range(e->lows[0], e->highs[0], (size_t) values);
  rand_range* rang_1 = create_rand_range(e->lows[1], e->highs[1], (size_t) values);
  rand_range* rang_2 = create_rand_range(e->lows[2], e->highs[2], (size_t) values);
  rand_range* rang_3 = create_rand_range(e->lows[3], e->highs[3], (size_t) values);
  rand_range* rang_4 = create_rand_range(e->lows[4], e->highs[4], (size_t) values);
  rand_range* rang_5 = create_rand_range(e->lows[5], e->highs[5], (size_t) values);
  rand_range* rang_6 = create_rand_range(e->lows[6], e->highs[6], (size_t) values);
  stopwatch* sw = create_stopwatch();
  size_t count = 0;

  fill_rand_range(rang_0);
  fill_rand_range(rang_1);
  fill_rand_range(rang_2);
  fill_rand_range(rang_3);
  fill_rand_range(rang_4);
  fill_rand_range(rang_5);
  fill_rand_range(rang_6);
  set_alarm(2);
  while (RUNNING) {
    size_t idx = count & mask;
    func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx], rang_4->points[idx], rang_5->points[idx], rang_6->points[idx]);
    count += 1;
  }
  clear_alarm();

  for (size_t r=0; r<repeats; r++) {
    fill_rand_range(rang_0);
    fill_rand_range(rang_1);
    fill_rand_range(rang_2);
    fill_rand_range(rang_3);
    fill_rand_range(rang_4);
    fill_rand_range(rang_5);
    fill_rand_range(rang_6);
    count = 0;
    set_alarm((size_t) seconds);
    start_stopwatch(sw);
    while (RUNNING) {
      size_t idx = count & mask;
      func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx], rang_4->points[idx], rang_5->points[idx], rang_6->points[idx]);
      count += 1;
    }
    double time = stop_stopwatch(sw);
    clear_alarm();

    printf("                {\"time\": %f, \"count\": %ld}", time, count);
    if (r == repeats-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  free_rand_range(rang_0);
  free_rand_range(rang_1);
  free_rand_range(rang_2);
  free_rand_range(rang_3);
  free_rand_range(rang_4);
  free_rand_range(rang_5);
  free_rand_range(rang_6);
  free_stopwatch(sw);
  printf("            ]\n");
  printf("        }");
}

void
time_entry_8(entry* e, size_t log2_data, size_t seconds, size_t repeats)
{
  assert(e->arity == 8);

  srand(42);

  printf("        {\n");
  printf("            \"function\": \"%s\",\n", e->name);
  printf("            \"domain_0\": [%1.16e, %1.16e],\n", e->lows[0], e->highs[0]);
  printf("            \"domain_1\": [%1.16e, %1.16e],\n", e->lows[1], e->highs[1]);
  printf("            \"domain_2\": [%1.16e, %1.16e],\n", e->lows[2], e->highs[2]);
  printf("            \"domain_3\": [%1.16e, %1.16e],\n", e->lows[3], e->highs[3]);
  printf("            \"domain_4\": [%1.16e, %1.16e],\n", e->lows[4], e->highs[4]);
  printf("            \"domain_5\": [%1.16e, %1.16e],\n", e->lows[5], e->highs[5]);
  printf("            \"domain_6\": [%1.16e, %1.16e],\n", e->lows[6], e->highs[6]);
  printf("            \"domain_7\": [%1.16e, %1.16e],\n", e->lows[7], e->highs[7]);
  if (e->error > 0) {
    printf("            \"error\": %1.16e,\n", e->error);
  }
  printf("            \"runs\": [\n");
  fflush(stdout);

  arity_8 func = (arity_8) e->func;
  size_t log2_part = log2_data - 3;
  size_t values = log2_to_value(log2_part);
  size_t mask = log2_to_mask(log2_part);
  rand_range* rang_0 = create_rand_range(e->lows[0], e->highs[0], (size_t) values);
  rand_range* rang_1 = create_rand_range(e->lows[1], e->highs[1], (size_t) values);
  rand_range* rang_2 = create_rand_range(e->lows[2], e->highs[2], (size_t) values);
  rand_range* rang_3 = create_rand_range(e->lows[3], e->highs[3], (size_t) values);
  rand_range* rang_4 = create_rand_range(e->lows[4], e->highs[4], (size_t) values);
  rand_range* rang_5 = create_rand_range(e->lows[5], e->highs[5], (size_t) values);
  rand_range* rang_6 = create_rand_range(e->lows[6], e->highs[6], (size_t) values);
  rand_range* rang_7 = create_rand_range(e->lows[7], e->highs[7], (size_t) values);
  stopwatch* sw = create_stopwatch();
  size_t count = 0;

  fill_rand_range(rang_0);
  fill_rand_range(rang_1);
  fill_rand_range(rang_2);
  fill_rand_range(rang_3);
  fill_rand_range(rang_4);
  fill_rand_range(rang_5);
  fill_rand_range(rang_6);
  fill_rand_range(rang_7);
  set_alarm(2);
  while (RUNNING) {
    size_t idx = count & mask;
    func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx], rang_4->points[idx], rang_5->points[idx], rang_6->points[idx], rang_7->points[idx]);
    count += 1;
  }
  clear_alarm();

  for (size_t r=0; r<repeats; r++) {
    fill_rand_range(rang_0);
    fill_rand_range(rang_1);
    fill_rand_range(rang_2);
    fill_rand_range(rang_3);
    fill_rand_range(rang_4);
    fill_rand_range(rang_5);
    fill_rand_range(rang_6);
    fill_rand_range(rang_7);
    count = 0;
    set_alarm((size_t) seconds);
    start_stopwatch(sw);
    while (RUNNING) {
      size_t idx = count & mask;
      func(rang_0->points[idx], rang_1->points[idx], rang_2->points[idx], rang_3->points[idx], rang_4->points[idx], rang_5->points[idx], rang_6->points[idx], rang_7->points[idx]);
      count += 1;
    }
    double time = stop_stopwatch(sw);
    clear_alarm();

    printf("                {\"time\": %f, \"count\": %ld}", time, count);
    if (r == repeats-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  free_rand_range(rang_0);
  free_rand_range(rang_1);
  free_rand_range(rang_2);
  free_rand_range(rang_3);
  free_rand_range(rang_4);
  free_rand_range(rang_5);
  free_rand_range(rang_6);
  free_rand_range(rang_7);
  free_stopwatch(sw);
  printf("            ]\n");
  printf("        }");
}


void
parse_args(int argc, char** argv,
           size_t* log2_data_p, size_t* seconds_p, size_t* repeats_p)
{
  *log2_data_p = 15;
  if (argc >= 2) {
    *log2_data_p = (size_t) strtoul(argv[1], NULL, 10);
  }

  *seconds_p = 2;
  if (argc >= 3) {
    *seconds_p = (size_t) strtoul(argv[2], NULL, 10);
  }

  *repeats_p = 3;
  if (argc >= 3) {
    *repeats_p = (size_t) strtoul(argv[3], NULL, 10);
  }

  printf("{\n");
  printf("    \"config\": {\n");
  printf("        \"max_data_size\": %ld,\n", log2_to_value(*log2_data_p));
  printf("        \"seconds\": %ld,\n", *seconds_p);
  printf("        \"repeats\": %ld\n", *repeats_p);
  printf("    },\n");
  printf("    \"runs\": [\n");
  fflush(stdout);
}


void
process_entries(int argc, char** argv,
                size_t count, entry* entries)
{
  size_t log2_data, seconds, repeats;
  parse_args(argc, argv, &log2_data, &seconds, &repeats);

  for (size_t i=0; i<count; i++) {
    entry* e = &entries[i];
    switch (e->arity) {
    case 1:
      time_entry_1(e, log2_data, seconds, repeats);
      break;
    case 2:
      time_entry_2(e, log2_data, seconds, repeats);
      break;
    case 3:
      time_entry_3(e, log2_data, seconds, repeats);
      break;
    case 4:
      time_entry_4(e, log2_data, seconds, repeats);
      break;
    case 5:
      time_entry_5(e, log2_data, seconds, repeats);
      break;
    case 6:
      time_entry_6(e, log2_data, seconds, repeats);
      break;
    case 7:
      time_entry_7(e, log2_data, seconds, repeats);
      break;
    case 8:
      time_entry_8(e, log2_data, seconds, repeats);
      break;
    default:
      printf("Arity not handled: %d", (int) e->arity);
      exit(2);
    }

    if (i == count-1) {
      printf("\n");
    } else {
      printf(",\n");
    }
    fflush(stdout);
  }

  printf("    ]\n");
  printf("}\n");
}
