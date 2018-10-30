/*

    Add by Kapoo, resovle complie error

*/
#ifndef __GLOBAL_ARM__
#define __GLOBAL_ARM__

#define x86     (0)
#define arm     (1)
#define i686	(2)

#if (ARCH == arm)
#ifndef CLOCK_REALTIME
#define CLOCK_REALTIME  0
#endif  /* CLOCK_REALTIME */

#ifndef CLOCK_MONOTONIC
#define CLOCK_MONOTONIC  1
#endif  /* CLOCK_MONOTONIC */

struct timespec
{
__time_t tv_sec;		/* Seconds.  */
__syscall_slong_t tv_nsec;	/* Nanoseconds.  */
};

#endif  /* (ARCH == arm) */

#endif
