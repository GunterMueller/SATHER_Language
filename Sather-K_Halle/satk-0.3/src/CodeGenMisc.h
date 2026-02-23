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
    

#include "SatherTypeImpl.h"
#include "DefTableKeyList.h"
#include "ptg_gen.h"
#include "err.h"

#ifndef CODE_GEN_MISC_H
#define CODE_GEN_MISC_H

PTGNode GetCLRType(STPtr type); 
PTGNode GetCLRFieldRef(DefTableKey k);  
PTGNode GetImplementsPattern(DefTableKeyList l);
PTGNode GetConvCode(STPtr from, STPtr to, int conv_type, CoordPtr pos, Environment scope);
PTGNode GetNativeArrayName(STPtr elem_type, int bound_num);
PTGNode GenerateCommaSepTypeList(DefTableKeyList l, int only_once);
int NewUniqueLabel();
int NewUniqueLocal();
#endif
