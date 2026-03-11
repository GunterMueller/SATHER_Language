/* * Last edited: Nov 24 22:09 1993 (holzw) */

/* Changes for Sather K:
   o Memory free function

*/

# include <stdio.h>

extern void saint_abort(void);

/*------------------------------*/
char *saint_calloc(unsigned size){
/*------------------------------*/
  
  char *res;
  if (!size) {
    fprintf(stderr,"FATAL: request for zero bytes.\n");
    saint_abort();
  }
  res =  (char *)malloc(size);
  if (!res){
    fprintf(stderr,"FATAL: out of memory.\n");
    saint_abort();
  } 
  memset(res,0,size);
  return res;
}

/*--------------------------------*/
void saint_free(unsigned adr){
/*--------------------------------*/

  free (adr);
}

void saint_calloc_initialize(void){
}
