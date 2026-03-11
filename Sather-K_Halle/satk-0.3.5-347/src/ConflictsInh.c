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
    
#include "ConflictsInh.head"

// checks for an environment every binding for a method conflict
int CheckLocalConflicts(DefTableKey k, POSITION *ref)
{
  Environment e;
  Binding b;
  DefTableKeyList li;
  int num = 0;

  e = GetInhScope(k,NoEnv);
  if (e == NoEnv)
  {
    message (ERROR,"unexpected error while checking method conflicts" ,0,0);
    return;
  }

  b = DefinitionsOf(e);
  while (b != NoBinding)
  {
  num = 0;
  li = GetBindings(KeyOf(b),NULLDefTableKeyList);
  if (InIS(attributeK, GetKindSet(KeyOf(b), NULLIS)))
    li = ConsDefTableKeyList(KeyOf(b), li);
  if (LengthDefTableKeyList(li) > 1)
    if (CheckMethodConflicts(li, k))
    {
      message(ERROR,
      CatStrInd("Method conflicts for method: ",IdnOf(b)),
      0,ref);
            num++;
    }
  b = NextDefinition(b);
  }
  return num;
}

// checks for every method of one identifier if one conflicts with another
int CheckMethodConflicts(DefTableKeyList li, DefTableKey class_key)
{
  DefTableKey cur;
  DefTableKey chk;
  DefTableKeyList lj;
  int num = 0;

  while (LengthDefTableKeyList(li) != 1)
  {
    cur = HeadDefTableKeyList(li);

    // static builtin Methoden werden nicht geprueft
    if (InIS(builtinstaticK, GetKindSet(cur, NULLIS)))
    {
      li = TailDefTableKeyList(li);
      continue;
    }

    lj = TailDefTableKeyList(li);
    while (lj != NULLDefTableKeyList)
    {
      chk = HeadDefTableKeyList(lj);
      
      // Ein Attribut hat keinen Konflikt mit seinen eigenen reader/writer Methoden
      if (!(InIS(attributeK, GetKindSet(cur, NULLIS)) && 
          ((chk == GetReaderMethod(cur, NoKey)) || (chk == GetWriterMethod(cur, NoKey))))
        &&
          !(InIS(attributeK, GetKindSet(chk, NULLIS)) && 
          ((cur == GetReaderMethod(chk, NoKey)) || (cur == GetWriterMethod(chk, NoKey)))))
        num += Conflicts(GetType(cur, NoType),GetType(chk, NoType),class_key);
      
      lj = TailDefTableKeyList(lj);
    }
    li = TailDefTableKeyList(li);
  }
  return num;
}

// Checks for a method type s and t, if they conflict
int Conflicts(STPtr s, STPtr t, DefTableKey class_key)
{
  DefTableKeyList li, lj; // Die Paramterlisten
  DefTableKey k, l, p1, p2; // die Parameter
  STPtr t1, t2;

  k = KeyOfType(s);
  l = KeyOfType(t);

  // um einen Konflikt zu haben muessen beide Methoden...
  // ... Prozeduren oder Streams sein
  if (
    !((IsProcedureType(s) && IsProcedureType(t))
      ||
      (IsStreamType(s) && IsStreamType(t)))
    
   ) return 0;

  
  li = GetParams(k,NULLDefTableKeyList);
  lj = GetParams(l,NULLDefTableKeyList);

  // ... gleich viele Parameter haben
  if(
    LengthDefTableKeyList(li) !=
    LengthDefTableKeyList(lj)
  ) return 0;

  while (li != NULLDefTableKeyList)
  {
    p1 = HeadDefTableKeyList(li);
    p2 = HeadDefTableKeyList(lj);

    // ...die Parameter den gleichen "Kind" haben
    if (
            !(
                (InIS(inK, GetKindSet(p1,NULLIS)) &&
                InIS(inK, GetKindSet(p2,NULLIS)) )
              ||
                (InIS(outK, GetKindSet(p1,NULLIS)) &&
                InIS(outK, GetKindSet(p2,NULLIS)) )
              ||
                (InIS(inoutK, GetKindSet(p1,NULLIS)) &&
                InIS(inoutK, GetKindSet(p2,NULLIS)) )
              ||
                (InIS(onceK, GetKindSet(p1,NULLIS)) &&
                InIS(onceK, GetKindSet(p2,NULLIS)) )
            )
         ) return 0;

    // ..die Parameter den gleichen Typ haben und
    // keiner der beiden eine gebundene Methode ist und
    // keiner der beiden polymorph ist
    
    t1 = GetType(p1, NoType);
    t2 = GetType(p2, NoType);

    if (t1==NoType || t2 == NoType)
      return 1;

    if ((KeyOfType(t1) != KeyOfType(t2)) &&
      !IsMethodType(t1) &&
      !IsMethodType(t2) &&
      !(IsPolymorph(t1) 
      // wenn es SAME ist, und die Klasse polymorph genutzt wird, steht das SAME f"ur $SAME
        || ((KeyOfType(t1) == same_key) && GetUsedPolymorph(class_key,0))) && 
      !(IsPolymorph(t2)
        || ((KeyOfType(t2) == same_key) && GetUsedPolymorph(class_key,0))) && 
      !((KeyOfType(t1) == same_key) && (KeyOfType(t2) == class_key)) &&
      !((KeyOfType(t2) == same_key) && (KeyOfType(t1) == class_key)) 
    )
    return 0;

    li = TailDefTableKeyList(li);
    lj = TailDefTableKeyList(lj);
  }

  return 1;
}
