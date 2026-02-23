/* Copyright (C) 2010, University of Halle */

/*  This file is part of Sather-K Compiler Halle.
      
    Sather-K Compiler Halle is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
                      
    Sather-K Compiler Halle is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
                                      
    You should have received a copy of the GNU General Public
    License along with Sather-K Compiler Halle.  If not, see
    <http://www.gnu.org/licenses/>. */
    

#include "StringOutput.h"
#include "obstack.h"


static Obstack obst_stringout;
static void *obst_base = 0;


static void InitStringOut()
{
   if (obst_base)
      return;

   obstack_init(&obst_stringout);
   obst_base = obstack_alloc(&obst_stringout, 0);
}

void FreeStringOut()
{
   if (!obst_base)
      return;

   obstack_free(&obst_stringout, obst_base);
   obst_base = obstack_alloc(&obst_stringout, 0);
}

#if defined(__STDC__) || defined(__cplusplus)
static void PrintString(PTG_OUTPUT_FILE f, const char *s)
#else
static void PrintString(f, s) PTG_OUTPUT_FILE f; char *s;
#endif
{
   obstack_grow(&obst_stringout, s, strlen(s));
}

#if defined(__STDC__) || defined(__cplusplus)
static void PrintChar(PTG_OUTPUT_FILE f, char c)
#else
static void PrintChar(f, c) PTG_OUTPUT_FILE f; char c;
#endif
{
   obstack_1grow(&obst_stringout, c);
}

#if defined(__STDC__) || defined(__cplusplus)
char *PTG_StringOut(PTGNode root)
#else
char *PTG_StringOut(root) PTGNode root;
#endif
{
   /* Allocate the 'file' for ptg */
   PtgFilePtr ptgfile = NewPtgFile(0, PrintString);
   char *result = 0;

   ptgfile->PrintChar = PrintChar;

   /* Initialize Obstack, if necessary */
   InitStringOut();
 
   /* Create new blank region */
   obstack_blank(&obst_stringout, 0);

   /* Process the node into the region */
   PTGProcess(ptgfile, root);
  
   /* Null terminate the string */
   obstack_1grow(&obst_stringout, '\0');

   /* Retrieve the resulting string */
   result = (char *)obstack_finish(&obst_stringout);
   
   /* Remove the 'file' */
   FreePtgFile(ptgfile);

   return result;
}


