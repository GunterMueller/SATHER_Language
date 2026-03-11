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
    

#include "ptg_gen.h"
#include "DefTableKeyList.h"

#ifndef CODE_GEN_STREAMS_H
#define CODE_GEN_STREAMS_H

PTGNode CreateStreamBase();
PTGNode CreateStreamObject(int name, DefTableKey k);
PTGNode BackupLocals(DefTableKey k, int stream_object);
PTGNode RecoverLocals(DefTableKey k, int stream_object);
PTGNode EmptyStack(int h);
#endif
