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
    

#include "PtgOutFPtr.h"
#include <stdlib.h>
#include <stdio.h>



#if defined(__STDC__) || defined(__cplusplus)
void PtgFPtrPrintString(PtgFilePtr file, const char * param)
#else
void PtgFPtrPrintString(file, param)
        PtgFilePtr file;
        const char * param;
#endif
{
        fputs(param, (FILE *)(file->destinfo));
}


#if defined(__STDC__) || defined(__cplusplus)
void PtgFPtrPrintInt(PtgFilePtr file, int param)
#else
void PtgFPtrPrintInt(file, param)
        PtgFilePtr file;
        int param;
#endif
{
        fprintf((FILE *)(file->destinfo), "%d", param);
}


#if defined(__STDC__) || defined(__cplusplus)
void PtgFPtrPrintShort(PtgFilePtr file, short param)
#else
void PtgFPtrPrintShort(file, param)
        PtgFilePtr file;
        short param;
#endif
{
        fprintf((FILE *)(file->destinfo), "%d", (int)param);
}


#if defined(__STDC__) || defined(__cplusplus)
void PtgFPtrPrintLong(PtgFilePtr file, long param)
#else
void PtgFPtrPrintLong(file, param)
        PtgFilePtr file;
        long param;
#endif
{
        fprintf((FILE *)(file->destinfo), "%ld", param);
}


#if defined(__STDC__) || defined(__cplusplus)
void PtgFPtrPrintChar(PtgFilePtr file, char param)
#else
void PtgFPtrPrintChar(file, param)
        PtgFilePtr file;
        char param;
#endif
{
        putc(param, (FILE *)(file->destinfo));
}


#if defined(__STDC__) || defined(__cplusplus)
void PtgFPtrPrintFloat(PtgFilePtr file, float param)
#else
void PtgFPtrPrintFloat(file, param)
        PtgFilePtr file;
        float param;
#endif
{
        fprintf((FILE *)(file->destinfo), "%g", (double)param);
}


#if defined(__STDC__) || defined(__cplusplus)
void PtgFPtrPrintDouble(PtgFilePtr file, double param)
#else
void PtgFPtrPrintDouble(file, param)
        PtgFilePtr file;
        double param;
#endif
{
        fprintf((FILE *)(file->destinfo), "%g", param);
}




#if defined(__STDC__) || defined(__cplusplus)
PTGNode PTGOutFPtr(FILE *fptr, PTGNode root)
#else
PTGNode PTGOutFPtr(fptr, root)
        FILE *fptr;
        PTGNode root;
#endif
{
        PtgFilePtr ptgfile = NewPtgFile(fptr, PtgFPtrPrintString);
        ptgfile->PrintInt = PtgFPtrPrintInt;
        ptgfile->PrintLong = PtgFPtrPrintLong;
        ptgfile->PrintShort = PtgFPtrPrintShort;
        ptgfile->PrintChar = PtgFPtrPrintChar;
        ptgfile->PrintFloat = PtgFPtrPrintFloat;
        ptgfile->PrintDouble = PtgFPtrPrintDouble;

        PTGProcess(ptgfile, root);
        FreePtgFile(ptgfile);
        return root;
}

#if defined(__STDC__) || defined(__cplusplus)
PTGNode PTGOut (PTGNode r)
#else
PTGNode PTGOut (r)
        PTGNode r;
#endif
{
        return PTGOutFPtr(stdout, r);
}

#if defined(__STDC__) || defined(__cplusplus)
PTGNode PTGOutFile (const char *filename, PTGNode root)
#else
PTGNode PTGOutFile (filename, root)
        char * filename; PTGNode root;
#endif
{
        FILE *f = fopen(filename, "w");
        if (!f)
        {
                fprintf(stderr, "DEADLY: PTGOutFile: output file '%s' can't be opened.\n",
                        filename);
                exit(1);
        }
        PTGOutFPtr(f, root);
        fclose(f);
        return root;
}

