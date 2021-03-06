#ifndef __WRAP_GETPID_H_
#define __WRAP_GETPID_H_

#include <sys/types.h>
#include <unistd.h>

// never remove statistics from this structure, they could be
// used by existing exercices. You might add some additional information
// if it can help to validate some exercices

struct stats_getpid_t {
  int called;           // number of times the system call has been called
  pid_t last_return;    // last return value for getpid

};

void init_getpid();
void clean_getpid();
void resetstats_getpid();

#endif // __WRAP_GETPID_H_

