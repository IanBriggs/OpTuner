

#include "alarm.h"

#include "utils.h"
#include "xmalloc.h"

#include <assert.h>




static timer_t ALARM = NULL;
volatile sig_atomic_t RUNNING = 0;


void sigprof_handler(union sigval val)
{
  UNUSED(val);

  RUNNING = 0;
}


void
set_alarm(size_t secs)
{
  int status;

  pthread_attr_t attr;
  pthread_attr_init(&attr);

  struct sched_param parm;
  parm.sched_priority = 255;
  pthread_attr_setschedparam(&attr, &parm);

  struct sigevent sig;
  sig.sigev_notify = SIGEV_THREAD;
  sig.sigev_signo = SIGPROF;
  sig.sigev_notify_function = sigprof_handler;
  sig.sigev_value.sival_int = 20;
  sig.sigev_notify_attributes = &attr;

  status = timer_create(CLOCK_REALTIME, &sig, &ALARM);
  assert_zero(status);

  struct itimerspec in, out;
  in.it_value.tv_sec =  (long int) secs;
  in.it_value.tv_nsec = 0;
  in.it_interval.tv_sec = (long int) secs;
  in.it_interval.tv_nsec = 0;
  status = timer_settime(ALARM, 0, &in, &out);
  assert_zero(status);

  RUNNING = 1;
}


void
clear_alarm(void)
{
  int status = timer_delete(ALARM);
  assert_zero(status);
}
