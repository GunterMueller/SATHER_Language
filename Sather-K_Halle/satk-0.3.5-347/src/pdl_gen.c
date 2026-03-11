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
    
#include "pdl_gen.h"

#ifdef MONITOR
#include "pdl_dapto.h"
#endif

#define PRESENT find(key, _property, (Entry *)&_Item, 0)
#define VALUE (_Item->PropVal)

#define TYPE int

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct intElt))

typedef struct intElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *intProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
Getint (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
Getint (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  intProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
Setint (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
Setint (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  intProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
Resetint (int _property, DefTableKey key, TYPE _val)
#else
void
Resetint (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  intProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#if defined(__STDC__) || defined(__cplusplus)
TYPE
SetGetint (int _property, DefTableKey key, TYPE init, TYPE reset)
#else
TYPE
SetGetint (_property, key, init, reset)
int _property;
DefTableKey key;
TYPE init;
TYPE reset;
#endif
{  intProperty _Item;
{ if (key == NoKey) return init;
  if (ACCESS)   {VALUE = reset; return reset;}
  else          {VALUE = init; return init;}
}
}

#if defined(__STDC__) || defined(__cplusplus)
DefTableKey
KResetint (int _property, DefTableKey key, TYPE val)
#else
DefTableKey
KResetint (_property, key, val)
int _property;
DefTableKey key;
TYPE val;
#endif
{  intProperty _Item;
{ if (key == NoKey) return NoKey;
  ACCESS; VALUE = val; return key;
}
}

#undef ACCESS
#undef TYPE
#define TYPE PTGNode

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct PTGNodeElt))

typedef struct PTGNodeElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *PTGNodeProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetPTGNode (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetPTGNode (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  PTGNodeProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetPTGNode (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetPTGNode (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  PTGNodeProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetPTGNode (int _property, DefTableKey key, TYPE _val)
#else
void
ResetPTGNode (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  PTGNodeProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE
#define TYPE DefTableKeyList

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct DefTableKeyListElt))

typedef struct DefTableKeyListElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *DefTableKeyListProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetDefTableKeyList (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetDefTableKeyList (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  DefTableKeyListProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetDefTableKeyList (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetDefTableKeyList (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  DefTableKeyListProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetDefTableKeyList (int _property, DefTableKey key, TYPE _val)
#else
void
ResetDefTableKeyList (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  DefTableKeyListProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#if defined(__STDC__) || defined(__cplusplus)
DefTableKey
KResetDefTableKeyList (int _property, DefTableKey key, TYPE val)
#else
DefTableKey
KResetDefTableKeyList (_property, key, val)
int _property;
DefTableKey key;
TYPE val;
#endif
{  DefTableKeyListProperty _Item;
{ if (key == NoKey) return NoKey;
  ACCESS; VALUE = val; return key;
}
}

#undef ACCESS
#undef TYPE
#define TYPE GenericInfoList

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct GenericInfoListElt))

typedef struct GenericInfoListElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *GenericInfoListProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetGenericInfoList (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetGenericInfoList (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  GenericInfoListProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetGenericInfoList (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetGenericInfoList (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  GenericInfoListProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetGenericInfoList (int _property, DefTableKey key, TYPE _val)
#else
void
ResetGenericInfoList (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  GenericInfoListProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE
#define TYPE TreeNodePtrListList

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct TreeNodePtrListListElt))

typedef struct TreeNodePtrListListElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *TreeNodePtrListListProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetTreeNodePtrListList (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetTreeNodePtrListList (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  TreeNodePtrListListProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetTreeNodePtrListList (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetTreeNodePtrListList (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  TreeNodePtrListListProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetTreeNodePtrListList (int _property, DefTableKey key, TYPE _val)
#else
void
ResetTreeNodePtrListList (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  TreeNodePtrListListProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE
#define TYPE TreeNodePtr

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct TreeNodePtrElt))

typedef struct TreeNodePtrElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *TreeNodePtrProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetTreeNodePtr (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetTreeNodePtr (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  TreeNodePtrProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetTreeNodePtr (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetTreeNodePtr (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  TreeNodePtrProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetTreeNodePtr (int _property, DefTableKey key, TYPE _val)
#else
void
ResetTreeNodePtr (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  TreeNodePtrProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE
#define TYPE DefTableKey

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct DefTableKeyElt))

typedef struct DefTableKeyElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *DefTableKeyProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetDefTableKey (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetDefTableKey (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  DefTableKeyProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetDefTableKey (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetDefTableKey (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  DefTableKeyProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetDefTableKey (int _property, DefTableKey key, TYPE _val)
#else
void
ResetDefTableKey (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  DefTableKeyProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE
#define TYPE InheritanceInfoList

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct InheritanceInfoListElt))

typedef struct InheritanceInfoListElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *InheritanceInfoListProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetInheritanceInfoList (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetInheritanceInfoList (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  InheritanceInfoListProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetInheritanceInfoList (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetInheritanceInfoList (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  InheritanceInfoListProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetInheritanceInfoList (int _property, DefTableKey key, TYPE _val)
#else
void
ResetInheritanceInfoList (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  InheritanceInfoListProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE
#define TYPE CoordPtr

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct CoordPtrElt))

typedef struct CoordPtrElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *CoordPtrProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetCoordPtr (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetCoordPtr (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  CoordPtrProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetCoordPtr (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetCoordPtr (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  CoordPtrProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetCoordPtr (int _property, DefTableKey key, TYPE _val)
#else
void
ResetCoordPtr (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  CoordPtrProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#if defined(__STDC__) || defined(__cplusplus)
DefTableKey
KResetCoordPtr (int _property, DefTableKey key, TYPE val)
#else
DefTableKey
KResetCoordPtr (_property, key, val)
int _property;
DefTableKey key;
TYPE val;
#endif
{  CoordPtrProperty _Item;
{ if (key == NoKey) return NoKey;
  ACCESS; VALUE = val; return key;
}
}

#undef ACCESS
#undef TYPE
#define TYPE OvrPtrList

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct OvrPtrListElt))

typedef struct OvrPtrListElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *OvrPtrListProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetOvrPtrList (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetOvrPtrList (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  OvrPtrListProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetOvrPtrList (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetOvrPtrList (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  OvrPtrListProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetOvrPtrList (int _property, DefTableKey key, TYPE _val)
#else
void
ResetOvrPtrList (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  OvrPtrListProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE
#define TYPE STPtr

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct STPtrElt))

typedef struct STPtrElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *STPtrProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetSTPtr (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetSTPtr (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  STPtrProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetSTPtr (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetSTPtr (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  STPtrProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetSTPtr (int _property, DefTableKey key, TYPE _val)
#else
void
ResetSTPtr (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  STPtrProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#if defined(__STDC__) || defined(__cplusplus)
DefTableKey
KResetSTPtr (int _property, DefTableKey key, TYPE val)
#else
DefTableKey
KResetSTPtr (_property, key, val)
int _property;
DefTableKey key;
TYPE val;
#endif
{  STPtrProperty _Item;
{ if (key == NoKey) return NoKey;
  ACCESS; VALUE = val; return key;
}
}

#undef ACCESS
#undef TYPE
#define TYPE CTValuePtr

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct CTValuePtrElt))

typedef struct CTValuePtrElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *CTValuePtrProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetCTValuePtr (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetCTValuePtr (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  CTValuePtrProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetCTValuePtr (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetCTValuePtr (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  CTValuePtrProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetCTValuePtr (int _property, DefTableKey key, TYPE _val)
#else
void
ResetCTValuePtr (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  CTValuePtrProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE
#define TYPE IntSet

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct IntSetElt))

typedef struct IntSetElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *IntSetProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetIntSet (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetIntSet (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  IntSetProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetIntSet (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetIntSet (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  IntSetProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetIntSet (int _property, DefTableKey key, TYPE _val)
#else
void
ResetIntSet (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  IntSetProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#if defined(__STDC__) || defined(__cplusplus)
TYPE
InsertIntSet (int _property, DefTableKey key, int val)
#else
TYPE
InsertIntSet (_property, key, val)
int _property;
DefTableKey key;
int val;
#endif
{  IntSetProperty _Item;
{ if (key == NoKey) return NULLIS;
  if (val < 0 || val > 8*sizeof(TYPE))
     message(DEADLY,"Invalid set element",0,NoPosition);
  if (!ACCESS) VALUE = NULLIS;
  VALUE |= (1<<val);
  return VALUE;
}
}

#if defined(__STDC__) || defined(__cplusplus)
TYPE
UnionIntSet (int _property, DefTableKey key, TYPE val)
#else
TYPE
UnionIntSet (_property, key, val)
int _property;
DefTableKey key;
TYPE val;
#endif
{  IntSetProperty _Item;
{ if (key == NoKey) return NULLIS;
  if (!ACCESS) VALUE = val;
  else VALUE |= val;
  return VALUE;
}
}

#if defined(__STDC__) || defined(__cplusplus)
TYPE
IntersectIntSet (int _property, DefTableKey key, TYPE val)
#else
TYPE
IntersectIntSet (_property, key, val)
int _property;
DefTableKey key;
TYPE val;
#endif
{  IntSetProperty _Item;
{ if (key == NoKey) return NULLIS;
  if (!ACCESS) VALUE = val;
  else VALUE &= val;
  return VALUE;
}
}

#undef ACCESS
#undef TYPE
#define TYPE Environment

#define ACCESS find(key, _property, (Entry *)&_Item, sizeof(struct EnvironmentElt))

typedef struct EnvironmentElt {
	Entry next;
	int selector;
	TYPE PropVal;
} *EnvironmentProperty;

#if defined(__STDC__) || defined(__cplusplus)
TYPE
GetEnvironment (int _property, DefTableKey key, TYPE deflt)
#else
TYPE
GetEnvironment (_property, key, deflt)
int _property;
DefTableKey key;
TYPE deflt;
#endif
{  EnvironmentProperty _Item;
{ if (key == NoKey) return deflt;
  if (PRESENT) return VALUE;
  else return deflt;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
SetEnvironment (int _property, DefTableKey key, TYPE _add, TYPE _replace)
#else
void
SetEnvironment (_property, key, _add, _replace)
int _property;
DefTableKey key;
TYPE _add;
TYPE _replace;
#endif
{  EnvironmentProperty _Item;
{ if (key == NoKey) return;
  if (ACCESS) VALUE = _replace;
  else VALUE = _add;
}
}

#if defined(__STDC__) || defined(__cplusplus)
void
ResetEnvironment (int _property, DefTableKey key, TYPE _val)
#else
void
ResetEnvironment (_property, key, _val)
int _property;
DefTableKey key;
TYPE _val;
#endif
{  EnvironmentProperty _Item;
{ if (key == NoKey) return;
  ACCESS; VALUE = _val;
}
}

#undef ACCESS
#undef TYPE

static struct PropElt PDLe0 = {(Entry)0, 0};

DefTableKey
#if defined(__STDC__) || defined(__cplusplus)
CloneKey (DefTableKey key)
#else
CloneKey (key)
    DefTableKey key;
#endif
{
  DefTableKey k;
  Entry e;

  if (key == NoKey) return NoKey;
  k = NewKey ();
  for (e = key->List; (e != (Entry)0) && (e->selector != 0);
       e = e->next) {
    switch (e->selector) {
      case 1:
         ResetClpValue (k, ((intProperty)e)->PropVal);
         break;
      case 2:
         ResetCLRNative (k, ((PTGNodeProperty)e)->PropVal);
         break;
      case 3:
         ResetUniqueName (k, ((intProperty)e)->PropVal);
         break;
      case 4:
         ResetCLRStreamName (k, ((intProperty)e)->PropVal);
         break;
      case 5:
         ResetLocals (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 6:
         ResetClassParCount (k, ((intProperty)e)->PropVal);
         break;
      case 7:
         ResetSym (k, ((intProperty)e)->PropVal);
         break;
      case 8:
         ResetGenInfos (k, ((GenericInfoListProperty)e)->PropVal);
         break;
      case 9:
         ResetGenStatus (k, ((intProperty)e)->PropVal);
         break;
      case 10:
         ResetInstances (k, ((TreeNodePtrListListProperty)e)->PropVal);
         break;
      case 11:
         ResetReferencedClasses (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 12:
         ResetReachableVisited (k, ((intProperty)e)->PropVal);
         break;
      case 13:
         ResetBoundsTree (k, ((TreeNodePtrProperty)e)->PropVal);
         break;
      case 14:
         ResetGetsBoundsFrom (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 15:
         ResetBuiltinTree (k, ((TreeNodePtrProperty)e)->PropVal);
         break;
      case 16:
         ResetGetsBuiltinFrom (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 17:
         ResetInheritances (k, ((InheritanceInfoListProperty)e)->PropVal);
         break;
      case 18:
         ResetInhStatus (k, ((intProperty)e)->PropVal);
         break;
      case 19:
         ResetFeatureTree (k, ((TreeNodePtrProperty)e)->PropVal);
         break;
      case 20:
         ResetModSym (k, ((intProperty)e)->PropVal);
         break;
      case 21:
         ResetPos (k, ((CoordPtrProperty)e)->PropVal);
         break;
      case 22:
         ResetArrayDefs (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 23:
         ResetBoundCnt (k, ((intProperty)e)->PropVal);
         break;
      case 24:
         ResetBoundsMark (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 25:
         ResetAsetMark (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 26:
         ResetAgetMark (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 27:
         ResetBindings (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 28:
         ResetIsClassParam (k, ((intProperty)e)->PropVal);
         break;
      case 29:
         ResetClassParams (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 30:
         ResetOverrides (k, ((OvrPtrListProperty)e)->PropVal);
         break;
      case 31:
         ResetOvrReady (k, ((intProperty)e)->PropVal);
         break;
      case 32:
         ResetReaderMethod (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 33:
         ResetWriterMethod (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 34:
         ResetPublicAttrList (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 35:
         ResetBoundKeys (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 36:
         ResetAgetKey (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 37:
         ResetAsetKey (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 38:
         ResetElementType (k, ((STPtrProperty)e)->PropVal);
         break;
      case 39:
         ResetHasInitMethod (k, ((intProperty)e)->PropVal);
         break;
      case 40:
         ResetFeatureOf (k, ((DefTableKeyProperty)e)->PropVal);
         break;
      case 41:
         ResetSharedStatus (k, ((intProperty)e)->PropVal);
         break;
      case 42:
         ResetLocalCalled (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 43:
         ResetConstValue (k, ((CTValuePtrProperty)e)->PropVal);
         break;
      case 44:
         ResetParams (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 45:
         ResetResultType (k, ((STPtrProperty)e)->PropVal);
         break;
      case 46:
         ResetIsLike (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 47:
         ResetMustConformTo (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 48:
         ResetConformsTo (k, ((DefTableKeyListProperty)e)->PropVal);
         break;
      case 49:
         ResetTDGReady (k, ((intProperty)e)->PropVal);
         break;
      case 50:
         ResetType (k, ((STPtrProperty)e)->PropVal);
         break;
      case 51:
         ResetPolyType (k, ((STPtrProperty)e)->PropVal);
         break;
      case 52:
         ResetMonoType (k, ((STPtrProperty)e)->PropVal);
         break;
      case 53:
         ResetUsedPolymorph (k, ((intProperty)e)->PropVal);
         break;
      case 54:
         ResetSemKindSet (k, ((IntSetProperty)e)->PropVal);
         break;
      case 55:
         ResetKindSet (k, ((IntSetProperty)e)->PropVal);
         break;
      case 56:
         ResetInhScope (k, ((EnvironmentProperty)e)->PropVal);
         break;
      case 57:
         ResetCnt (k, ((intProperty)e)->PropVal);
         break;
      case 58:
         ResetFirstOcc (k, ((intProperty)e)->PropVal);
         break;
      case 59:
         ResetSemScope (k, ((EnvironmentProperty)e)->PropVal);
         break;
      }
  }
  return k;
}

#ifdef MONITOR
static CONST char *pdl_names[] = {
    (char *)0,
    "ClpValue",
    "CLRNative",
    "UniqueName",
    "CLRStreamName",
    "Locals",
    "ClassParCount",
    "Sym",
    "GenInfos",
    "GenStatus",
    "Instances",
    "ReferencedClasses",
    "ReachableVisited",
    "BoundsTree",
    "GetsBoundsFrom",
    "BuiltinTree",
    "GetsBuiltinFrom",
    "Inheritances",
    "InhStatus",
    "FeatureTree",
    "ModSym",
    "Pos",
    "ArrayDefs",
    "BoundCnt",
    "BoundsMark",
    "AsetMark",
    "AgetMark",
    "Bindings",
    "IsClassParam",
    "ClassParams",
    "Overrides",
    "OvrReady",
    "ReaderMethod",
    "WriterMethod",
    "PublicAttrList",
    "BoundKeys",
    "AgetKey",
    "AsetKey",
    "ElementType",
    "HasInitMethod",
    "FeatureOf",
    "SharedStatus",
    "LocalCalled",
    "ConstValue",
    "Params",
    "ResultType",
    "IsLike",
    "MustConformTo",
    "ConformsTo",
    "TDGReady",
    "Type",
    "PolyType",
    "MonoType",
    "UsedPolymorph",
    "SemKindSet",
    "KindSet",
    "InhScope",
    "Cnt",
    "FirstOcc",
    "SemScope",
};
static CONST char *pdl_types[] = {
    (char *)0,
    "int",
    "PTGNode",
    "int",
    "int",
    "DefTableKeyList",
    "int",
    "int",
    "GenericInfoList",
    "int",
    "TreeNodePtrListList",
    "DefTableKeyList",
    "int",
    "TreeNodePtr",
    "DefTableKey",
    "TreeNodePtr",
    "DefTableKey",
    "InheritanceInfoList",
    "int",
    "TreeNodePtr",
    "int",
    "CoordPtr",
    "DefTableKeyList",
    "int",
    "DefTableKey",
    "DefTableKey",
    "DefTableKey",
    "DefTableKeyList",
    "int",
    "DefTableKeyList",
    "OvrPtrList",
    "int",
    "DefTableKey",
    "DefTableKey",
    "DefTableKeyList",
    "DefTableKeyList",
    "DefTableKey",
    "DefTableKey",
    "STPtr",
    "int",
    "DefTableKey",
    "int",
    "DefTableKeyList",
    "CTValuePtr",
    "DefTableKeyList",
    "STPtr",
    "DefTableKeyList",
    "DefTableKeyList",
    "DefTableKeyList",
    "int",
    "STPtr",
    "STPtr",
    "STPtr",
    "int",
    "IntSet",
    "IntSet",
    "Environment",
    "int",
    "int",
    "Environment",
};

void
#if defined(__STDC__) || defined(__cplusplus)
pdl_mon_properties(DefTableKey k)
#else
pdl_mon_properties(k) DefTableKey k;
#endif
{
    Entry e;
    if (k == NoKey) return;
    for (e = k->List; (e != (Entry)0) && (e->selector != 0);
         e = e->next) {
        DAPTO_RESULT_STR (pdl_names[e->selector]);
        DAPTO_RESULT_STR (pdl_types[e->selector]);
        switch (e->selector) {
            case 1:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 2:
#ifdef DAPTO_RESULTPTGNode
                DAPTO_RESULTPTGNode (((PTGNodeProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((PTGNodeProperty)e)->PropVal);
#endif
                break;
            case 3:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 4:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 5:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 6:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 7:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 8:
#ifdef DAPTO_RESULTGenericInfoList
                DAPTO_RESULTGenericInfoList (((GenericInfoListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((GenericInfoListProperty)e)->PropVal);
#endif
                break;
            case 9:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 10:
#ifdef DAPTO_RESULTTreeNodePtrListList
                DAPTO_RESULTTreeNodePtrListList (((TreeNodePtrListListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((TreeNodePtrListListProperty)e)->PropVal);
#endif
                break;
            case 11:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 12:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 13:
#ifdef DAPTO_RESULTTreeNodePtr
                DAPTO_RESULTTreeNodePtr (((TreeNodePtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((TreeNodePtrProperty)e)->PropVal);
#endif
                break;
            case 14:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 15:
#ifdef DAPTO_RESULTTreeNodePtr
                DAPTO_RESULTTreeNodePtr (((TreeNodePtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((TreeNodePtrProperty)e)->PropVal);
#endif
                break;
            case 16:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 17:
#ifdef DAPTO_RESULTInheritanceInfoList
                DAPTO_RESULTInheritanceInfoList (((InheritanceInfoListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((InheritanceInfoListProperty)e)->PropVal);
#endif
                break;
            case 18:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 19:
#ifdef DAPTO_RESULTTreeNodePtr
                DAPTO_RESULTTreeNodePtr (((TreeNodePtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((TreeNodePtrProperty)e)->PropVal);
#endif
                break;
            case 20:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 21:
#ifdef DAPTO_RESULTCoordPtr
                DAPTO_RESULTCoordPtr (((CoordPtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((CoordPtrProperty)e)->PropVal);
#endif
                break;
            case 22:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 23:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 24:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 25:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 26:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 27:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 28:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 29:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 30:
#ifdef DAPTO_RESULTOvrPtrList
                DAPTO_RESULTOvrPtrList (((OvrPtrListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((OvrPtrListProperty)e)->PropVal);
#endif
                break;
            case 31:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 32:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 33:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 34:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 35:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 36:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 37:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 38:
#ifdef DAPTO_RESULTSTPtr
                DAPTO_RESULTSTPtr (((STPtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((STPtrProperty)e)->PropVal);
#endif
                break;
            case 39:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 40:
#ifdef DAPTO_RESULTDefTableKey
                DAPTO_RESULTDefTableKey (((DefTableKeyProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyProperty)e)->PropVal);
#endif
                break;
            case 41:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 42:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 43:
#ifdef DAPTO_RESULTCTValuePtr
                DAPTO_RESULTCTValuePtr (((CTValuePtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((CTValuePtrProperty)e)->PropVal);
#endif
                break;
            case 44:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 45:
#ifdef DAPTO_RESULTSTPtr
                DAPTO_RESULTSTPtr (((STPtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((STPtrProperty)e)->PropVal);
#endif
                break;
            case 46:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 47:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 48:
#ifdef DAPTO_RESULTDefTableKeyList
                DAPTO_RESULTDefTableKeyList (((DefTableKeyListProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((DefTableKeyListProperty)e)->PropVal);
#endif
                break;
            case 49:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 50:
#ifdef DAPTO_RESULTSTPtr
                DAPTO_RESULTSTPtr (((STPtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((STPtrProperty)e)->PropVal);
#endif
                break;
            case 51:
#ifdef DAPTO_RESULTSTPtr
                DAPTO_RESULTSTPtr (((STPtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((STPtrProperty)e)->PropVal);
#endif
                break;
            case 52:
#ifdef DAPTO_RESULTSTPtr
                DAPTO_RESULTSTPtr (((STPtrProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((STPtrProperty)e)->PropVal);
#endif
                break;
            case 53:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 54:
#ifdef DAPTO_RESULTIntSet
                DAPTO_RESULTIntSet (((IntSetProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((IntSetProperty)e)->PropVal);
#endif
                break;
            case 55:
#ifdef DAPTO_RESULTIntSet
                DAPTO_RESULTIntSet (((IntSetProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((IntSetProperty)e)->PropVal);
#endif
                break;
            case 56:
#ifdef DAPTO_RESULTEnvironment
                DAPTO_RESULTEnvironment (((EnvironmentProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((EnvironmentProperty)e)->PropVal);
#endif
                break;
            case 57:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 58:
#ifdef DAPTO_RESULTint
                DAPTO_RESULTint (((intProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((intProperty)e)->PropVal);
#endif
                break;
            case 59:
#ifdef DAPTO_RESULTEnvironment
                DAPTO_RESULTEnvironment (((EnvironmentProperty)e)->PropVal);
#else
                DAPTO_RESULT_OTHER (((EnvironmentProperty)e)->PropVal);
#endif
                break;
            default: DAPTO_RESULT_STR ("unknown property");
        }
    }
}
#endif
