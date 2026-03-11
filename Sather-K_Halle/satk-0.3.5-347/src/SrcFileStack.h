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
    

#ifndef SrcFileSTACK_H
#define SrcFileSTACK_H
#include "obstack.h"

extern Obstack SrcFileStack;

#define SrcFileStackEmpty \
  (obstack_next_free(&SrcFileStack) == obstack_base(&SrcFileStack))

#define SrcFileStackSize \
  ((SrcFile *)obstack_next_free(&SrcFileStack)-(SrcFile *)obstack_base(&SrcFileStack))

#define SrcFileStackTop \
  (((SrcFile *)obstack_next_free(&SrcFileStack))[-1])

#define SrcFileStackPush(v) {\
  SrcFile SrcFileStackTemp; SrcFileStackTemp = v; \
  obstack_grow(&SrcFileStack, &SrcFileStackTemp, sizeof(SrcFile)); \
}

#define SrcFileStackPop \
  (*((SrcFile *)(obstack_next_free(&SrcFileStack) -= sizeof(SrcFile))))

#define ForEachSrcFileStackElementUp(i) \
  for ((i) = (SrcFile *)obstack_base(&SrcFileStack); \
       (i) < (SrcFile *)obstack_next_free(&SrcFileStack); \
       (i)++)

#define ForEachSrcFileStackElementDown(i) \
  for ((i) = ((SrcFile *)obstack_next_free(&SrcFileStack)) - 1; \
       (i) >= (SrcFile *)obstack_base(&SrcFileStack); \
       (i)--)

#define SrcFileStackArray(i) \
  (((SrcFile *)obstack_base(&SrcFileStack))[i])

#define SrcFileStackElement(i) \
  (((SrcFile *)obstack_next_free(&SrcFileStack))[-1-(i)])
#endif
