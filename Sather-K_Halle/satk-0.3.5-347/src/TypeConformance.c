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
    
#include "TypeConformance.h"  

DefTableKey CheckTypeConformance(DefTableKey k, DefTableKeyList li, CoordPtr pos, int set_ovr)
{
  Environment esuper, esub;
  Binding bsuper, bsub;
  DefTableKeyList mbinds_super, mbinds_sub, temp;
  int assume_conformance; 

  while (li != NULLDefTableKeyList)
  {
        assume_conformance = 0;
    esuper = GetSemScope(HeadDefTableKeyList(li),NoEnv);
    esub = GetSemScope(k,NoEnv);
    if (esuper == NoEnv || esub == NoEnv)
    {
      message (ERROR,"unexpected error while checking conformance" ,0,pos);
      return NoKey;
    }

    // wenn Typgrenzen gecheckt werden wird Konformanz angenommen
    if (!set_ovr && 
        !IsConform(GetType(k, NoType), GetType(HeadDefTableKeyList(li), NoType)))
    {
        assume_conformance = 1;
      ResetConformsTo(k, ConsDefTableKeyList(HeadDefTableKeyList(li), 
        GetConformsTo(k, NULLDefTableKeyList)));        
    }

    bsuper = DefinitionsOf(esuper);
      
    while (bsuper != NoBinding)
    {
      // erstmal bis zu einer oeffentlichen Methode vorruecken
      mbinds_super = GetBindings(KeyOf(bsuper), NULLDefTableKeyList);
     
      while(mbinds_super != NULLDefTableKeyList)
      { 
        if(!InIS(privateK,GetSemKindSet(HeadDefTableKeyList(mbinds_super), NULLIS)))
          break;
        mbinds_super = TailDefTableKeyList(mbinds_super); 
      }
    
      if (mbinds_super != NULLDefTableKeyList)
      {
        bsub = BindingInScope(esub, IdnOf(bsuper));

        if (bsub == NoBinding)
        {
          message (FATAL , CatStrInd("identifier must be defined in subtype class: ",
          IdnOf(bsuper)) ,0,pos);
          return HeadDefTableKeyList(li);
        }

       mbinds_sub = GetBindings(KeyOf(bsub), NULLDefTableKeyList);
      
       while (mbinds_super != NULLDefTableKeyList)
       {
         if (!InIS(privateK, GetSemKindSet(HeadDefTableKeyList(mbinds_super), NULLIS)))
         {
          temp = mbinds_sub;

          while (temp != NULLDefTableKeyList &&
            !MethodConforms(GetType(HeadDefTableKeyList(temp), NoType)
            , GetType(HeadDefTableKeyList(mbinds_super), NoType)))
            temp = TailDefTableKeyList(temp);
        
          if (temp == NULLDefTableKeyList)
          {
            message (FATAL , 
            CatStrStr("couldn't find conforming method in subtype class for: ",
            NameOfType(GetType(HeadDefTableKeyList(mbinds_super), NoType))) ,0,pos);
            return HeadDefTableKeyList(li);
          }
          else
          {
            if (set_ovr && !EqualsType(GetType(HeadDefTableKeyList(temp), NoType),
              GetType(HeadDefTableKeyList(mbinds_super), NoType)))
              ResetOverrides(k, AddToSetOvrPtrList(
                NewOverriding(HeadDefTableKeyList(mbinds_super), HeadDefTableKeyList(temp)),
                GetOverrides(k, NULLOvrPtrList),
                CmpOverriding));
          }
        } 
        mbinds_super = TailDefTableKeyList(mbinds_super);
       }
      }     
      bsuper = NextDefinition(bsuper);
    }
    if (assume_conformance) {
      ResetConformsTo(k,
        TailDefTableKeyList(GetConformsTo(k, NULLDefTableKeyList)));
    }
    li = TailDefTableKeyList(li);
  }

  return NoKey;
}

// Checks for a methodtype s , if it conforms t
int MethodConforms(STPtr s, STPtr t)
{
  DefTableKeyList li, lj; // Die Parameterlisten
  DefTableKey k,l, p1, p2;
  STPtr restype1, restype2; 

  k = KeyOfType(s);
  l = KeyOfType(t);

  if (k == l) return 1;

  // um konform zu sein m"ussen beide Methodentypen...
  // ... Prozeduren oder Streams sein
  if (
    !( 
      (IsProcedureType(s) && IsProcedureType(t))
      ||
      (IsStreamType(s) && IsStreamType(t))
    )
   ) 
   return 0;

  li = GetParams(k,NULLDefTableKeyList);
  lj = GetParams(l,NULLDefTableKeyList);
 
  // ... gleich viele Parameter haben
  if(
    LengthDefTableKeyList(li) !=
    LengthDefTableKeyList(lj)
  ) 
    return 0;
  
  while (li != NULLDefTableKeyList)
  {
    p1 = HeadDefTableKeyList(li);
    p2 = HeadDefTableKeyList(lj);
    
    // ...die Parameter den gleichen "Kind" haben
    if (
            !(
                (InIS(inK, GetSemKindSet(p1,NULLIS)) &&
                InIS(inK, GetSemKindSet(p2,NULLIS)) )
              ||
                (InIS(outK, GetSemKindSet(p1,NULLIS)) &&
                InIS(outK, GetSemKindSet(p2,NULLIS)) )
              ||
                (InIS(inoutK, GetSemKindSet(p1,NULLIS)) &&
                InIS(inoutK, GetSemKindSet(p2,NULLIS)) )
              ||
                (InIS(onceK, GetSemKindSet(p1,NULLIS)) &&
                InIS(onceK, GetSemKindSet(p2,NULLIS)) )
            )
     ) 
      return 0;
    
    //bei in und once-Parametern contravariante Konformit"at
    if ( InIS(inK, GetSemKindSet(p1,NULLIS)) || InIS(onceK, GetSemKindSet(p1,NULLIS)))
    {
      if (!IsConform(GetType(p2, NoType), GetType(p1, NoType)))
        return 0;
    }
    else 
    {
      // bei out-Parametern covariante Konformit"at
     if ( InIS(outK, GetSemKindSet(p1,NULLIS)))
     {
        if (!IsConform(GetType(p1, NoType), GetType(p2, NoType)))
          return 0;
     }
      else
      // inout - also m"ussen die Typen gleich sein
      {
      if (!EqualsType(GetType(p1, NoType), GetType(p2, NoType)))
         return 0;
      }
    }
 
    li = TailDefTableKeyList(li);
    lj = TailDefTableKeyList(lj);
  }
  // Der Ergebnistyp der ersten Methode muss konform zur zweiten sein
  restype1 = GetResultType(k, NoType);
  restype2 = GetResultType(l, NoType);
    
  if (restype2 != NoType)
    if (!IsConform(restype1, restype2)) return 0;  
 
  return 1;
}

// Check if the first type conforms to the second
int IsConform(STPtr s, STPtr t)
{
  if (EqualsType(s, t))
    return 1;
  
  if (IsMethodType(s)) 
    return(MethodConforms(s, t));
  else //Klassentyp 
    return
      ElemInDefTableKeyList(KeyOfType(t), GetConformsTo(KeyOfType(s), NULLDefTableKeyList), 
        CmpDefTableKey);
}
