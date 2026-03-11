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
    

#ifndef _PTGOUTPUT_H
#define _PTGOUTPUT_H


#ifdef ELI_ARG
#undef ELI_ARG
#endif
#if defined(__STDC__) || defined(__cplusplus)
#define ELI_ARG(p) p
#else
#define ELI_ARG(p) ()
#endif


typedef struct PtgFile_s *PtgFilePtr;

typedef void (*PrintStringFct) ELI_ARG((PtgFilePtr, const char *));
typedef void (*PrintIntFct) ELI_ARG((PtgFilePtr, int));
typedef void (*PrintLongFct) ELI_ARG((PtgFilePtr, long));
typedef void (*PrintShortFct) ELI_ARG((PtgFilePtr, short));
typedef void (*PrintCharFct) ELI_ARG((PtgFilePtr, char));
typedef void (*PrintFloatFct) ELI_ARG((PtgFilePtr, float));
typedef void (*PrintDoubleFct) ELI_ARG((PtgFilePtr, double));

typedef struct PtgFile_s {
        PrintStringFct PrintString;
        PrintIntFct PrintInt;
        PrintLongFct PrintLong;
        PrintShortFct PrintShort;
        PrintCharFct PrintChar;
        PrintFloatFct PrintFloat;
        PrintDoubleFct PrintDouble;

        void *destinfo;
} PtgFile;


extern PtgFilePtr NewPtgFile ELI_ARG((void *destination, PrintStringFct printstring));
extern void FreePtgFile ELI_ARG((PtgFilePtr file));


#endif
