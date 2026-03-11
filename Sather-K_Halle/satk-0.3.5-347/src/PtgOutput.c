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
    

#include "PtgOutput.h"
#include <stdio.h>
#include <stdlib.h>


extern void _PTGPrintint ELI_ARG((PtgFilePtr file, int param));
extern void _PTGPrintlong ELI_ARG((PtgFilePtr file, long param));
extern void _PTGPrintshort ELI_ARG((PtgFilePtr file, short param));
extern void _PTGPrintchar ELI_ARG((PtgFilePtr file, char param));
extern void _PTGPrintfloat ELI_ARG((PtgFilePtr file, float param));
extern void _PTGPrintdouble ELI_ARG((PtgFilePtr file, double param));


static char buffer[40];


#if defined(__STDC__) || defined(__cplusplus)
void _PTGPrintint(PtgFilePtr file, int param)
#else
void _PTGPrintint(file, param)
        PtgFilePtr file;
        int param;
#endif
{
        sprintf(buffer, "%d", param);
        file->PrintString(file, buffer);
}


#if defined(__STDC__) || defined(__cplusplus)
void _PTGPrintlong(PtgFilePtr file, long param)
#else
void _PTGPrintlong(file, param)
        PtgFilePtr file;
        long param;
#endif
{
        sprintf(buffer, "%ld", param);
        file->PrintString(file, buffer);
}


#if defined(__STDC__) || defined(__cplusplus)
void _PTGPrintshort(PtgFilePtr file, short param)
#else
void _PTGPrintshort(file, param)
        PtgFilePtr file;
        short param;
#endif
{
        sprintf(buffer, "%d",(int) param);
        file->PrintString(file, buffer);
}


#if defined(__STDC__) || defined(__cplusplus)
void _PTGPrintchar(PtgFilePtr file, char param)
#else
void _PTGPrintchar(file, param)
        PtgFilePtr file;
        char param;
#endif
{
        sprintf(buffer, "%c", param);
        file->PrintString(file, buffer);
}


#if defined(__STDC__) || defined(__cplusplus)
void _PTGPrintfloat(PtgFilePtr file, float param)
#else
void _PTGPrintfloat(file, param)
        PtgFilePtr file;
        float param;
#endif
{
        sprintf(buffer, "%g",(double) param);
        file->PrintString(file, buffer);
}


#if defined(__STDC__) || defined(__cplusplus)
void _PTGPrintdouble(PtgFilePtr file, double param)
#else
void _PTGPrintdouble(file, param)
        PtgFilePtr file;
        double param;
#endif
{
        sprintf(buffer, "%g", param);
        file->PrintString(file, buffer);
}



#if defined(__STDC__) || defined(__cplusplus)
PtgFilePtr NewPtgFile(void *destination, PrintStringFct printstring)
#else
PtgFilePtr NewPtgFile(destination, printstring)
        void *destination;
        PrintStringFct printstring;
#endif
{
        PtgFilePtr n = (PtgFilePtr)malloc(sizeof(PtgFile));
        if (!n)
        {
                fputs("DEADLY: Out of Memory.\n", stderr);
                exit(1);
        }
        n->PrintString = printstring;
        n->PrintInt = _PTGPrintint;
        n->PrintShort = _PTGPrintshort;
        n->PrintLong = _PTGPrintlong;
        n->PrintChar = _PTGPrintchar;
        n->PrintFloat = _PTGPrintfloat;
        n->PrintDouble = _PTGPrintdouble;
        n->destinfo = destination;
        return n;
}

#if defined(__STDC__) || defined(__cplusplus)
void FreePtgFile(PtgFilePtr file)
#else
void FreePtgFile(file)
        PtgFilePtr file;
#endif
{
        free(file);
}

