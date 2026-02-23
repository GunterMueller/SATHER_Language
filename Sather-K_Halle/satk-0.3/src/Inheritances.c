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
    
#include "Inheritances.h"

InheritanceInfo NewInheritanceInfo(DefTableKey k, DefTableKeyList modinfo, int ispriv,
int isonly, int issubtype) {
  InheritanceInfo newinfo;
  newinfo = malloc (sizeof(struct InheritanceParameter));
  newinfo->SuperKey = k;
  newinfo->ModList = modinfo;
  newinfo->IsPrivate = ispriv;
  newinfo->IsOnly = isonly;
  newinfo->IsSubType = issubtype;
  return newinfo;
}

DefTableKey SelectFeature(Environment env, DefTableKey meth_spec)
{
  DefTableKey feat;
  DefTableKeyList pl, dl;
  Binding bind;
  int kind;

  bind = BindingInScope(env, GetSym(meth_spec, 0));

  if (bind == NoBinding)
    return NoKey;

  feat = KeyOf(bind);

  pl = GetParams(meth_spec, NULLDefTableKeyList);
  
  if( InIS(attributeK, GetKindSet(feat, NULLIS)) &&
      GetResultType(meth_spec, NoType) == NoType && 
      pl == NULLDefTableKeyList && 
      !(InIS(streamK, GetKindSet(meth_spec, NULLIS))))
    return feat;

  dl = GetBindings(feat, NULLDefTableKeyList);

  // method type may be ommitted if no ambiguities arises
  if (LengthDefTableKeyList(dl) == 1 &&
    GetResultType(meth_spec, NoType) == NoType && 
    pl == NULLDefTableKeyList)
      return HeadDefTableKeyList(dl);
  
  while (dl != NULLDefTableKeyList)
  {
    if (EqualsType(GetType(HeadDefTableKeyList(dl), NoType),
      GetType(meth_spec, NoType)))
      return HeadDefTableKeyList(dl);

    dl = TailDefTableKeyList(dl);
  }
  return NoKey;
}

// Checks if thy type of k conflicts to any type of the list l
DefTableKey ListConflicts(DefTableKey k, DefTableKeyList li, DefTableKey class_context)
{
    if (!IsMethodType(GetType(k, NoType)))
      return NoKey;
  
    while (li != NULLDefTableKeyList)
    {
      if (Conflicts(
          GetType(k, NoType), 
          GetType(HeadDefTableKeyList(li), NoType), class_context))
        return HeadDefTableKeyList(li);
      li = TailDefTableKeyList(li);
    }
    return NoKey;
}

DefTableKey InheritSingleFeature(DefTableKey fromkey, int tosym, DefTableKey tokey, int
isPrivate, TreeNodePtr tree, CoordPtr pos)
{
  Environment toScope;
  Binding bsub;
  DefTableKey Featurekey, read_key, write_key, tempkey;
  DefTableKeyList li;

  toScope = GetInhScope(tokey, NoEnv);
  // legt bei Bedarf auch neu an
  bsub = BindIdn(toScope, tosym);

  if (InIS(attributeK, GetKindSet(fromkey, NULLIS)))
  {
    read_key = GetReaderMethod(fromkey, NoKey);
    write_key = GetWriterMethod(fromkey, NoKey);

    // falls Attribut Methodentyp hat, kann er auch Konflikte verursachen
    if (InIS(attributeK,GetKindSet(KeyOf(bsub),NULLIS)) 
    || ListConflicts(fromkey, GetBindings(KeyOf(bsub), NULLDefTableKeyList), tokey))
    {
      //wenn das Attribut eine Arraygrenze ist, darf es nicht ueberschrieben werden
      if (InIS(boundK, GetKindSet(fromkey, NULLIS)))
        message(ERROR, "overwriting class bound is not allowed",0, pos);
      else
      {
        //entferne Attribut aus Baum      
        ReplaceMark(&tree, fromkey, &empty_node); 
      }
      return KeyOf(bsub);
    }
    else
    {
      ResetType(KeyOf(bsub), GetType(fromkey, NoType));
      if (isPrivate && !InIS(privateK, GetKindSet(fromkey, NULLIS)))
        ResetKindSet(KeyOf(bsub), AddElIS(privateK, GetKindSet(fromkey, NULLIS)));
      else
        ResetKindSet(KeyOf(bsub), GetKindSet(fromkey, NULLIS));
      
      // Jetzt die Reader und Writer Methoden
      if (read_key != NoKey)
      {
        ResetReaderMethod(KeyOf(bsub), InheritSingleFeature(read_key, tosym, tokey,
        isPrivate, tree, pos));
      }

      if (write_key != NoKey)
      {
        ResetWriterMethod(KeyOf(bsub), InheritSingleFeature(write_key, tosym, tokey,
        isPrivate, tree, pos));
      }

      return KeyOf(bsub);
    }
  }
  else
  {
    // Methode kann auch Konflikt mit Attribut der Unterklasse haben, wenn diese Methodentyp
    // hat
    tempkey = ListConflicts(fromkey, 
    ConsDefTableKeyList(KeyOf(bsub), GetBindings(KeyOf(bsub), NULLDefTableKeyList)), tokey);

    if (tempkey != NoKey)
    {
      ReplaceMark(&tree, fromkey, &empty_node);  
      return tempkey;
    } 

    if (isPrivate) {
      tempkey = NewKey();
      ResetType(tempkey, GetType(fromkey, NoType));
      if (!InIS(privateK, GetKindSet(fromkey, NULLIS)))
        ResetKindSet(tempkey, AddElIS(privateK, GetKindSet(fromkey, NULLIS)));
      ResetParams(tempkey, GetParams(fromkey, NULLDefTableKeyList));
      ResetResultType(tempkey, GetResultType(fromkey, NoType));
    } else
      tempkey = fromkey;

    ResetBindings(KeyOf(bsub),
    AppElDefTableKeyList(GetBindings(KeyOf(bsub), NULLDefTableKeyList), tempkey));
    
    return tempkey;
  }
  return NoKey;
}

int InheritFeatures(DefTableKey k, CoordPtr pos)
{
  InheritanceInfoList li;
  InheritanceInfo par;
  Environment esuper, esub;
  Binding bsuper, bsub,btemp;
  DefTableKeyList modlist;
  DefTableKey modinfo;
  DefTableKeyList methbinds, modded_features;
  DefTableKey modkey, inhkey;
  TreeNodePtr features;

  if (GetInhStatus(k,0) == STARTED)
  {
    message(ERROR,"detected cycle in inheritance dependencies", 0, pos);
    return 0;
  }

  ResetInhStatus(k, STARTED);
  li = GetInheritances(k,NULLInheritanceInfoList);

  while (li != NULLInheritanceInfoList)
  {
    par = HeadInheritanceInfoList(li);
    if (GetInhStatus(par->SuperKey,0) != FINISHED)
    {
      if (InheritFeatures(par->SuperKey, pos) == 0)
      {
         message(ERROR, CatStrInd("Class is on Inheritance cycle path: ",
         GetSym(k, 0)), 0, pos);
        return 0;
      }
    }

    features = CopyTree(GetFeatureTree(par->SuperKey, NULL));
  
    esuper = GetInhScope(par->SuperKey,NoEnv);
    esub = GetInhScope(k,NoEnv);
    if (esuper == NoEnv || esub == NoEnv)
    {
        message (ERROR,"could not inherit from class - class not defined?" ,0,pos);
        return;
    }

    // Zuerst die Modifikationen
    modlist = par->ModList;
    modded_features = NULLDefTableKeyList;
    while (modlist != NULLDefTableKeyList)
    {
      modinfo = HeadDefTableKeyList(modlist);
      modkey = SelectFeature(esuper, modinfo);

      if (modkey == NoKey)
        message (ERROR,"Feature not found in parent class", 0, GetPos(modinfo, NULL));
      else {
        if (InIS(boundK, GetKindSet(modkey, NULLIS)))
          message(ERROR, "modification of array bound not allowed", 0, pos);
        
        btemp = BindingInScope(esuper, GetSym(modinfo, 0));        
        if (btemp != NoBinding && (
            modkey ==  GetReaderMethod(KeyOf(btemp),NoKey) ||
            modkey ==  GetWriterMethod(KeyOf(btemp),NoKey)))
          message (ERROR,
            "modification of reader or writer methods not allowed", 
            0, GetPos(modinfo, NULL));
        else {
          if (GetModSym(modinfo, 0) == 0)
          {
            if (par->IsOnly)
              InheritSingleFeature(modkey, GetSym(modinfo, 0),k,
                par->IsPrivate, features, pos);
            else  
              ReplaceMark(&features, modkey, &empty_node);
          }
          else
          {
            ReplaceMark(&features, modkey, NewTreeNodeRhs_0_1(0, 
            (InIS(attributeK, GetKindSet(modkey, NULLIS))) ? MkIDENT_DEF_2 :
            MkMETHOD_IDENT_DEF_2 ,GetModSym(modinfo, 0) , modkey));
            
            InheritSingleFeature(modkey, GetModSym(modinfo, 0), k, 
              par->IsPrivate, features, pos);
          }
        }
      }
      modded_features = AppElDefTableKeyList(modded_features, modkey);
      modlist = TailDefTableKeyList(modlist);
    }
    //dann der Rest
    bsuper = DefinitionsOf(esuper);
    while (bsuper != NoBinding)
    {
        methbinds = GetBindings(KeyOf(bsuper), NULLDefTableKeyList);

        if (InIS(attributeK, GetKindSet(KeyOf(bsuper), NULLIS)))
        {
          if (!ElemInDefTableKeyList(KeyOf(bsuper), modded_features, &CmpDefTableKey))
          {
            if (par->IsOnly)
              ReplaceMark(&features, KeyOf(bsuper), &empty_node);
            else
              InheritSingleFeature(KeyOf(bsuper), IdnOf(bsuper), k, par->IsPrivate,
                features, pos);
          }   
        }

        while (methbinds != NULLDefTableKeyList)
        {
          inhkey = HeadDefTableKeyList(methbinds);
          if 
          (
            !ElemInDefTableKeyList(inhkey, modded_features, &CmpDefTableKey)
            &&
            ! (
              inhkey == GetReaderMethod(KeyOf(bsuper), NoKey)
              ||
              inhkey == GetWriterMethod(KeyOf(bsuper), NoKey)
              )
          ) 
          {
            if (par->IsOnly)
              ReplaceMark(&features, inhkey, &empty_node);
            else
              InheritSingleFeature(inhkey, IdnOf(bsuper), k, par->IsPrivate,  
                features, pos);
          }
          
          methbinds = TailDefTableKeyList(methbinds);
        }

        bsuper = NextDefinition(bsuper);
    }

  PropagateEmptyNodes(features);
  if (par->IsPrivate)
    ReplaceFct_1_0(features, MkFEATURE_DECL_2, MkFEATURE_DECL_PRIV_2);
  ResetFeatureTree(k, 
    NewTreeNodeRhs_2_0(pos, Mk2FEATURE_DECLS_2, features, GetFeatureTree(k, NULL), NoKey));
    li = TailInheritanceInfoList(li);
  }
  ResetInhStatus(k, FINISHED);
  return 1;
}
