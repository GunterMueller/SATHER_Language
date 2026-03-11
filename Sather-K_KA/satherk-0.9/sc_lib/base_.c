/* * Last edited: Aug  2 22:24 1992 (mauch) */
/*************************************************************
 * base.sa: C::xxx
 *************************************************************/
#define bool unsigned char
#define ptr  char *
#define real float

/* File: sather/lib/base/C/base.c
   Author: Stephen M. Omohundro
   Created: Wed Aug 29 11:06:43 1990
   Copyright (C) International Computer Science Institute, 1990 

   COPYRIGHT NOTICE: This code is provided "AS IS" WITHOUT ANY WARRANTY
   and is subject to the terms of the SATHER LIBRARY GENERAL PUBLIC
   LICENSE contained in the file: "sather/doc/license.txt" of the Sather
   distribution. The license is also available from ICSI, 1947 Center
   St., Suite 600, Berkeley CA 94704, USA.

   C functions to support base.sa.
   */

#include <stdio.h>
#include <ctype.h>
     

     /* Support for class CHAR. */
bool is_alpha(c) char c; {return((char)isalpha(c));}
bool is_upper(c) char c; {return((char)isupper(c));}
bool is_lower(c) char c; {return((char)islower(c));}
bool is_digit(c) char c; {return((char)isdigit(c));}
bool is_alnum(c) char c; {return((char)isalnum(c));}
bool is_space(c) char c; {return((char)isspace(c));}
bool is_print(c) char c; {return((char)isprint(c));}
bool is_punct(c) char c; {return((char)ispunct(c));}
bool is_cntrl(c) char c; {return((char)iscntrl(c));}
int c_to_i(c) char c; {return((int)c);}
#if defined(mips) && defined(SYSTYPE_SYSV)
char to_upper(c) char c; {return(islower(c)?_toupper(c):c);}
char to_lower(c) char c; {return(isupper(c)?_tolower(c):c);}
#else
char to_upper(c) char c; {return(islower(c)?toupper(c):c);}
char to_lower(c) char c; {return(isupper(c)?tolower(c):c);}
#endif

/* Support for class INT. */
int u_mod(i,j) int i,j; {return(((unsigned int)i)%j);}
real i_to_r(i) int i; {return((real)i);}
double i_to_d(i) int i; {return((double)i);}
char i_to_c(i) int i; {return((char)i);}
ptr i_to_s(i) int i; {char res[20]; sprintf(res,"%d",i); return(makestr_(res));}
int bit_and(i,j) int i,j; {return(i&j);}
int bit_or(i,j) int i,j; {return(i|j);}
int bit_xor(i,j) int i,j; {return(i^j);}
int bit_not(i) int i; {return(~i);}
int lshift(i,j) int i,j; {return(i<<j);}
int rshift(i,j) int i,j; {return(((unsigned int)i)>>j);}
int arith_rshift(i,j) int i,j; {return(i>>j);}

/* Support for class REAL. */
double r_to_d(r) float r; {return((double)r);}
int r_to_i(r) float r; {return((int)r);}

/* Support for class DOUBLE. */
real d_to_r(r) double r; {return((real)r);}
     int d_to_i(r) double r; {return((int)r);}

     
/* Conversion of pointers to ints and back. */
     int ob_id(p) ptr p; {return((int)p);}
     ptr id_ob(i) int i; {return((ptr)i);}

