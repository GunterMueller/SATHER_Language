/* * Last edited: Oct  6 16:57 1993 (trapp) */
/*************************************************************
 * file.sa: C::xxx
 *************************************************************/
#define BOOL char
#define PTR char *

#include <stdio.h>
#include <stdlib.h>

void * stdin_()  {
  return ((void*)stdin);
}
void * stdout_() {
  return ((void*)stdout);
}
void * stderr_() {
  return ((void*)stderr);
}

static int scanf_val=1;		/* What the last scanf returned. */
/* Return and clear scanf_val. */
int scanf_val_() {int sv=scanf_val; scanf_val=1; return(sv);}

/* A function version of the macro getc. */
int get_ci_(fp) FILE *fp;{return(getc(fp));
}

/* Check if eof has been read. */
BOOL check_eof_(fp) FILE *fp;
{if (feof(fp)) {return((BOOL)1);} return((BOOL)0);}

/* Read an int from the file fp. */
int fscanfi_(fp) FILE *fp;
{int i; fscanf(fp, "%d", &i); return (i);}
/* Since the resetting of "scanf_val" appears not to be working, 
   we ignore it for now.*/
/*{int i; scanf_val=fscanf(fp, "%d", &i); return (i);} */

/* Read a double from the file fp. */
double fscanfd_(fp) FILE *fp;
{double d; fscanf(fp, "%lf", &d); return (d);}
/* Since the resetting of "scanf_val" appears not to be working, 
we ignore it for now.*/
/*{double d; scanf_val=fscanf(fp, "%lf", &d); return (d);} */

/* Print a char, int, string, or double onto file. */
fprintfi_(fp,in) FILE *fp; int in; {fprintf(fp,"%d",in);}
fprintfs_(fp,st) FILE *fp; char *st; {fprintf(fp,"%s",st);}
fprintfd_(fp,dou) FILE *fp; double dou; {fprintf(fp,"%lf",dou);}

/* Open a file for reading, writing, or appending. */
PTR fopenr_(s) char *s; {return((PTR)fopen(s,"r"));} 
PTR fopenw_(s) char *s; {return((PTR)fopen(s,"w"));} 
PTR fopena_(s) char *s; {return((PTR)fopen(s,"a"));} 

/* Open pipes for reading and writing. */
PTR popenr_(c) char *c; {return((PTR)popen(c,"r"));}
PTR popenw_(c) char *c; {return((PTR)popen(c,"w"));}

