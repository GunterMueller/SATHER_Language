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
    
#include "ReaderWriter.h"

void CreateReaderWriterMethods(DefTableKey k, DefTableKey class_key)
{
  DefTableKeyList li;
  DefTableKey read_key;
  DefTableKey write_key;
  DefTableKey new_param;
  DefTableKey tempkey;
  IntSet kind_set, parent_kinds;
  int temp, is_inh;

  if (k == NoKey) return; 

  li = GetBindings(k, NULLDefTableKeyList);
  
  is_inh = 1;

  parent_kinds = GetKindSet(k, NULLIS);
  if (parent_kinds == NULLIS)
  {
    is_inh = 0;
    parent_kinds = GetSemKindSet(k, NULLIS);
  }

  // Reader Methode
  read_key = NewKey();
  kind_set = AddElIS(procedureK, AddElIS(methodK, SingleIS(featureK)));

  if (InIS(privateK, parent_kinds))
    kind_set = AddElIS(privateK,kind_set);

  if (InIS(boundK, parent_kinds))
    kind_set = AddElIS(boundK,kind_set);

  if (InIS(sharedK, parent_kinds))
    kind_set = AddElIS(sharedK,kind_set);
  else
    kind_set = AddElIS(unsharedK, kind_set);

  is_inh ? ResetKindSet(read_key,kind_set) : ResetSemKindSet(read_key,kind_set);
  ResetType(read_key, NewType(read_key, kind_set, 
    MakeName(CatStrInd("getter method for ", GetSym(k, 0)))));
  ResetResultType(read_key, GetType(k, NoType));
  ResetFeatureOf(read_key, class_key);
  ResetSym(read_key, GetSym(k, 0));
  ResetSharedStatus(read_key, FINISHED);

  tempkey = ListConflicts(read_key, GetBindings(k, NULLDefTableKeyList), class_key);

  if (tempkey) {
    //ResetReaderMethod(k,tempkey);
    //free(read_key);
  } else {
    li = AppElDefTableKeyList(li,read_key);
    ResetReaderMethod(k,read_key);
  }
  // Writer Methode
  if (!InIS(constantK, parent_kinds) && 
  !InIS(readonlyK, parent_kinds))
  {
    write_key = NewKey();
    new_param = NewKey();
    is_inh ? ResetKindSet(write_key, kind_set) : ResetSemKindSet(write_key, kind_set);
    is_inh ? ResetKindSet(new_param, AddElIS(inK, AddElIS(parameterK,NULLIS))) : 
             ResetSemKindSet(new_param, AddElIS(inK, AddElIS(parameterK,NULLIS)));
    ResetType(new_param,GetType(k,NoType));
    ResetType(write_key, NewType(write_key, kind_set, 
      MakeName(CatStrInd("setter method for ", GetSym(k, 0)))));
    ResetParams(write_key, AppElDefTableKeyList(NULLDefTableKeyList,new_param));
    ResetFeatureOf(write_key, class_key);
    ResetSym(write_key, GetSym(k, 0));
    ResetSharedStatus(write_key, FINISHED);
    
    li = AppElDefTableKeyList(li,write_key);
    ResetWriterMethod(k, write_key);
  }

  ResetBindings(k,li);
}
