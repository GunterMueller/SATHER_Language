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
    
#include "err.h"
#include "pdl_gen.h"
#include "TDG.h"
#include "Kinds.head"
#include "deftbl.h"
#include "SatherType.h"
#include "envmod.h"
#include "MyDebug.h"
#include "Coercions.h"

STPtr GetMethodCallDestination(DefTableKey k, MethArgInfoList al, CoordPtr pos, int
call_kind, int is_partial_call, DefTableKey* called, int is_init_call, 
Environment scope);

int CompareParamList(DefTableKeyList l1, DefTableKeyList l2, CoordPtr pos, 
Environment scope);

int IsApplicable(STPtr t, MethArgInfoList al, int call_kind, CoordPtr pos, 
Environment scope);

STPtr BuildBoundMethodType(STPtr t,MethArgInfoList al, CoordPtr pos, 
int partial_call_kind, STPtr restype);

