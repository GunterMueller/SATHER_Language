/* * Last edited: Aug  2 22:16 1992 (mauch) */
/*************************************************************
 * time.sa: C::xxx
 *************************************************************/

/* File: sather/lib/base/C/time_.c
   Author: Stephen M. Omohundro
   Created: Tue Sep 25 17:14:23 1990
   Copyright (C) International Computer Science Institute, 1990

   COPYRIGHT NOTICE: This code is provided "AS IS" WITHOUT ANY WARRANTY
   and is subject to the terms of the SATHER LIBRARY GENERAL PUBLIC
   LICENSE contained in the file: "sather/doc/license.txt" of the Sather
   distribution. The license is also available from ICSI, 1947 Center
   St., Suite 600, Berkeley CA 94704, USA.

   Time related functions.
*/

#include <sys/time.h>
#include <sys/resource.h>
#include <sys/timeb.h>

static struct rusage ru;
static float st;		/* holds start time */

/* Initializes st. */
extern void start_clock_()
{
  getrusage(RUSAGE_SELF,&ru);
  st=ru.ru_utime.tv_sec+.000001*ru.ru_utime.tv_usec;
}

/* Returns time since start_clock. */
extern float get_clock_()
{
  getrusage(RUSAGE_SELF,&ru);
  return(ru.ru_utime.tv_sec+.000001*ru.ru_utime.tv_usec-st);
}

/* Time since 00:00:00 GMT, Jan. 1, 1970 in seconds. */
double time_() 
{
  static struct timeb t;
  ftime(&t);
  return(t.time+(t.millitm/1000.));
}
