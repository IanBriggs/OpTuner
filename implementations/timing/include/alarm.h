#ifndef ALRAM_H
#define ALRAM_H


#include <pthread.h>
#include <signal.h>
#include <time.h>




extern volatile sig_atomic_t RUNNING;


void set_alarm(size_t secs);

void clear_alarm(void);


#endif
