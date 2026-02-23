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
    
switch (CaseTbl[c = *p++]) {
case 0:	/* sentinel - probably EOB */
  if (c == '\0') {
    p = TokenStart = TokenEnd = auxNUL(TokenStart, 0);
    if (*p) extcode = NORETURN;
    else {
      p = TokenStart = TokenEnd = auxEOF(TokenStart, 0);
      if (*p) extcode = NORETURN;
      else { extcode = EOFTOKEN; EndOfText(p, 0, &extcode, v); }
    }
    goto done;
  } else {
    obstack_grow(Csm_obstk, "char '", 6);
    obstack_cchgrow(Csm_obstk, c);
    message(
      ERROR,
      (char *)obstack_copy0(Csm_obstk, "' is not a token", 16),
      0,
      &curpos);
    TokenEnd = p;
    continue;
  }
  
case 1:	/* space */
  while (scanTbl[c = *p++] & 1<<0) ;
  TokenEnd = p - 1;
  continue;
case 2:	/* tab */
  do { StartLine -= TABSIZE(p - StartLine); }
  while (scanTbl[c = *p++] & 1<<1);
  TokenEnd = p - 1;
  continue;
case 4:	/* carriage return */
  if (*p == '\n') { TokenEnd = p; continue; }
case 3:	/* newline */
  do { LineNum++; } while (scanTbl[c = *p++] & 1<<2);
  StartLine = (TokenEnd = p - 1) - 1;
  continue;

case 5:	/* Entered on:  A-H J-M O-R T-Z g-h j-k q u x-z */
	St_28:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 6:	/* Entered on: 1-9 */
	St_20:
		/*  0-9*/
		while(scanTbl[(c= *p++)+0] & 1<< 4);--p;
		if( scanTbl[(c= *p++)+0] & 1<< 5){ /*  E e */
		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_64;}
		else if(c ==95) {		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_67;}
		else if(c ==46) {		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_63;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 85;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 7:	/* Entered on: w */
	St_53:
		if( scanTbl[(c= *p++)+0] & 1<< 6){ /*  0-9 A-Z _ a-g i-z */
			goto St_75;}
		else if(c ==104) {			goto St_113;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 8:	/* Entered on: v */
	St_52:
		if( scanTbl[(c= *p++)+0] & 1<< 7){ /*  0-9 A-Z _ b-n p-z */
			goto St_75;}
		else if(c ==111) {			goto St_112;}
		else if(c ==97) {			goto St_111;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 9:	/* Entered on: t */
	St_51:
		if( scanTbl[(c= *p++)+256] & 1<< 0){ /*  0-9 A-Z _ a-g i-q s-x z */
			goto St_75;}
		else if(c ==121) {			goto St_110;}
		else if(c ==114) {			goto St_109;}
		else if(c ==104) {			goto St_108;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 10:	/* Entered on: s */
	St_50:
		if( scanTbl[(c= *p++)+256] & 1<< 1){ /*  0-9 A-Z _ a-g i-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_107;}
		else if(c ==104) {			goto St_106;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 11:	/* Entered on: r */
	St_49:
		if( scanTbl[(c= *p++)+256] & 1<< 2){ /*  0-9 A-Z _ b-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_105;}
		else if(c ==97) {			goto St_104;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 12:	/* Entered on: p */
	St_48:
		if( scanTbl[(c= *p++)+256] & 1<< 3){ /*  0-9 A-Z _ a-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_103;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 13:	/* Entered on: o */
	St_47:
		if( scanTbl[(c= *p++)+256] & 1<< 3){ /*  0-9 A-Z _ a-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_102;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 14:	/* Entered on: n */
	St_46:
		if( scanTbl[(c= *p++)+256] & 1<< 4){ /*  0-9 A-Z _ a-n p-z */
			goto St_75;}
		else if(c ==111) {			goto St_101;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 15:	/* Entered on: m */
	St_45:
		if( scanTbl[(c= *p++)+256] & 1<< 4){ /*  0-9 A-Z _ a-n p-z */
			goto St_75;}
		else if(c ==111) {			goto St_100;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 16:	/* Entered on: l */
	St_44:
		if( scanTbl[(c= *p++)+256] & 1<< 5){ /*  0-9 A-Z _ a-h j-n p-z */
			goto St_75;}
		else if(c ==111) {			goto St_99;}
		else if(c ==105) {			goto St_98;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 17:	/* Entered on: i */
	St_43:
		if( scanTbl[(c= *p++)+256] & 1<< 6){ /*  0-9 A-Z _ a-e g-m o-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_97;}
		else if(c ==110) {			goto St_96;}
		else if(c ==102) {			goto St_95;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 18:	/* Entered on: f */
	St_42:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_94;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 19:	/* Entered on: e */
	St_41:
		if( scanTbl[(c= *p++)+512] & 1<< 0){ /*  0-9 A-Z _ a-k m o-w y-z */
			goto St_75;}
		else if(c ==120) {			goto St_93;}
		else if(c ==110) {			goto St_92;}
		else if(c ==108) {			goto St_91;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 20:	/* Entered on: d */
	St_40:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_90;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 21:	/* Entered on: c */
	St_39:
		if( scanTbl[(c= *p++)+512] & 1<< 2){ /*  0-9 A-Z _ b-k m-n p-z */
			goto St_75;}
		else if(c ==111) {			goto St_89;}
		else if(c ==108) {			goto St_88;}
		else if(c ==97) {			goto St_87;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 22:	/* Entered on: b */
	St_38:
		if( scanTbl[(c= *p++)+512] & 1<< 3){ /*  0-9 A-Z _ a-d f-h j-q s-t v-z */
			goto St_75;}
		else if(c ==117) {			goto St_86;}
		else if(c ==114) {			goto St_85;}
		else if(c ==105) {			goto St_84;}
		else if(c ==101) {			goto St_83;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 23:	/* Entered on: a */
	St_37:
		if( scanTbl[(c= *p++)+512] & 1<< 4){ /*  0-9 A-Z _ a c-m o-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_82;}
		else if(c ==110) {			goto St_81;}
		else if(c ==98) {			goto St_80;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 24:	/* Entered on: [ */
	St_32:
		if((c= *p++) ==93) {			goto St_79;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 11;
			goto done;
			}

case 25:	/* Entered on: S */
	St_31:
		if( scanTbl[(c= *p++)+512] & 1<< 5){ /*  0-9 B-Z _ a-z */
			goto St_75;}
		else if(c ==65) {			goto St_78;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 26:	/* Entered on: N */
	St_30:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_77;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 27:	/* Entered on: I */
	St_29:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_76;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 28:	/* Entered on: @ */
	St_27:
		if((c= *p++) ==110) {		extcode = 43;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = NULL;
			goto St_74;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 43;
			goto done;
			}

case 29:	/* Entered on: > */
	St_25:
		if((c= *p++) ==62) {			goto St_73;}
		else if(c ==61) {			goto St_72;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 64;
			goto done;
			}

case 30:	/* Entered on: < */
	St_23:
		if((c= *p++) ==61) {			goto St_71;}
		else if(c ==60) {			goto St_70;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 37;
			goto done;
			}

case 31:	/* Entered on: : */
	St_21:
		if((c= *p++) ==61) {			goto St_69;}
		else if(c ==58) {			goto St_68;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 16;
			goto done;
			}

case 32:	/* Entered on: 0 */
	St_19:
		if( scanTbl[(c= *p++)+0] & 1<< 4){ /*  0-9 */
			goto St_20;}
		else if( scanTbl[c+512] & 1<< 7){ /*  X x */
		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_66;}
		else if( scanTbl[c+768] & 1<< 0){ /*  O o */
		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_65;}
		else if( scanTbl[c+0] & 1<< 5){ /*  E e */
		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_64;}
		else if(c ==95) {		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_67;}
		else if(c ==46) {		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_63;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 85;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}

case 33:	/* Entered on: / */
	St_18:
		if((c= *p++) ==61) {			goto St_62;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 67;
			goto done;
			}

case 34:	/* Entered on: - */
	St_16:
		if((c= *p++) ==62) {			goto St_61;}
		else if(c ==45) {			goto St_60;}
		else if(c ==42) {			goto St_59;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 48;
			goto done;
			}

case 35:	/* Entered on: * */
	St_13:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 19;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;

case 36:	/* Entered on: ' */
	St_10:
			TokenEnd=p=auxCChar(TokenStart, p-TokenStart);
			extcode = 83;
			c_mkchar(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;

case 37:	/* Entered on: & */
	St_9:
		if((c= *p++) ==38) {			goto St_58;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 6;
			goto done;
			}

case 38:	/* Entered on: " */
	St_5:
			TokenEnd=p=auxCString(TokenStart, p-TokenStart);
			extcode = 24;
			satk_mkstr(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;


default: TokenEnd=p; extcode=ExtCodeTbl[c]; goto done; /*  ! #-% (-) +-, . ; = ? \-^ ` {-~ */
}
	St_58:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 7;
			goto done;
	St_59:
			TokenEnd=p=auxSatherKComment(TokenStart, p-TokenStart);
			extcode = 15001;
			goto done;
	St_60:
			TokenEnd=p=auxEOL(TokenStart, p-TokenStart);
			extcode = 15001;
			goto done;
	St_61:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 51;
			goto done;
	St_62:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 65;
			goto done;
	St_63:
		if( scanTbl[(c= *p++)+0] & 1<< 4){ /*  0-9 */
			goto St_114;}
		else {--p; goto fallback; }
	St_114:
		/*  0-9*/
		while(scanTbl[(c= *p++)+0] & 1<< 4);--p;
		if( scanTbl[(c= *p++)+0] & 1<< 5){ /*  E e */
		extcode = 84;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_64;}
		else if(c ==95) {		extcode = 84;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_161;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 84;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_161:
		if( scanTbl[(c= *p++)+0] & 1<< 4){ /*  0-9 */
			goto St_201;}
		else {--p; goto fallback; }
	St_201:
		/*  0-9*/
		while(scanTbl[(c= *p++)+0] & 1<< 4);--p;
		if( scanTbl[(c= *p++)+0] & 1<< 5){ /*  E e */
		extcode = 84;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_64;}
		else if(c ==95) {		extcode = 84;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_161;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 84;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_64:
		if( scanTbl[(c= *p++)+0] & 1<< 4){ /*  0-9 */
			goto St_116;}
		else if( scanTbl[c+768] & 1<< 1){ /*  + - */
			goto St_115;}
		else {--p; goto fallback; }
	St_115:
		if( scanTbl[(c= *p++)+0] & 1<< 4){ /*  0-9 */
			goto St_116;}
		else {--p; goto fallback; }
	St_116:
		/*  0-9*/
		while(scanTbl[(c= *p++)+0] & 1<< 4);--p;
		if((c= *p++) ==95) {		extcode = 84;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_162;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 84;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_162:
		if( scanTbl[(c= *p++)+0] & 1<< 4){ /*  0-9 */
			goto St_202;}
		else {--p; goto fallback; }
	St_202:
		/*  0-9*/
		while(scanTbl[(c= *p++)+0] & 1<< 4);--p;
		if((c= *p++) ==95) {		extcode = 84;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_162;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 84;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_67:
		if( scanTbl[(c= *p++)+0] & 1<< 4){ /*  0-9 */
			goto St_119;}
		else {--p; goto fallback; }
	St_119:
		/*  0-9*/
		while(scanTbl[(c= *p++)+0] & 1<< 4);--p;
		if( scanTbl[(c= *p++)+0] & 1<< 5){ /*  E e */
		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_64;}
		else if(c ==95) {		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_67;}
		else if(c ==46) {		extcode = 85;/* remember fallback*/
		TokenEnd = p-1;

		scan = NULL;
		proc = satk_mknumidn;
			goto St_63;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 85;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_65:
		if( scanTbl[(c= *p++)+768] & 1<< 2){ /*  0-7 */
			goto St_117;}
		else {--p; goto fallback; }
	St_117:
		if( scanTbl[(c= *p++)+768] & 1<< 3){ /*  0-7 _ */
			goto St_163;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 86;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_163:
		/*  0-7 _*/
		while(scanTbl[(c= *p++)+768] & 1<< 3);--p;
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 86;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
	St_66:
		if( scanTbl[(c= *p++)+768] & 1<< 4){ /*  0-9 A-F a-f */
			goto St_118;}
		else {--p; goto fallback; }
	St_118:
		if( scanTbl[(c= *p++)+768] & 1<< 5){ /*  0-9 A-F _ a-f */
			goto St_164;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 87;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_164:
		/*  0-9 A-F _ a-f*/
		while(scanTbl[(c= *p++)+768] & 1<< 5);--p;
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 87;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
	St_68:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 46;
			goto done;
	St_69:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 10;
			goto done;
	St_70:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 77;
			goto done;
	St_71:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 61;
			goto done;
	St_72:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 63;
			goto done;
	St_73:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 76;
			goto done;
	St_74:
		if((c= *p++) ==97) {			goto St_120;}
		else {--p; goto fallback; }
	St_120:
		if((c= *p++) ==116) {			goto St_165;}
		else {--p; goto fallback; }
	St_165:
		if((c= *p++) ==105) {			goto St_203;}
		else {--p; goto fallback; }
	St_203:
		if((c= *p++) ==118) {			goto St_228;}
		else {--p; goto fallback; }
	St_228:
		if((c= *p++) ==101) {			goto St_246;}
		else {--p; goto fallback; }
	St_246:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 25;
			goto done;
	St_76:
		if( scanTbl[(c= *p++)+768] & 1<< 6){ /*  0-9 A-Z _ a-e g-z */
			goto St_75;}
		else if(c ==102) {			goto St_121;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_121:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 84;
			satk_mknumidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_75:
		/*  0-9 A-Z _ a-z*/
		while(scanTbl[(c= *p++)+0] & 1<< 3);--p;
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
	St_77:
		if( scanTbl[(c= *p++)+768] & 1<< 7){ /*  0-9 A-M O-Z _ a-z */
			goto St_75;}
		else if(c ==78) {			goto St_121;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_78:
		if( scanTbl[(c= *p++)+1024] & 1<< 0){ /*  0-9 A-L N-Z _ a-z */
			goto St_75;}
		else if(c ==77) {			goto St_122;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_122:
		if( scanTbl[(c= *p++)+1024] & 1<< 1){ /*  0-9 A-D F-Z _ a-z */
			goto St_75;}
		else if(c ==69) {			goto St_166;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_166:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 53;
			goto done;
			}
	St_79:
			TokenEnd= p; /* FINAL, no auxscan, must set */
			extcode = 27;
			goto done;
	St_80:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_123;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_123:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_167;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_167:
		if( scanTbl[(c= *p++)+256] & 1<< 3){ /*  0-9 A-Z _ a-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_204;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_204:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_229;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_229:
		if( scanTbl[(c= *p++)+1024] & 1<< 4){ /*  0-9 A-Z _ a-b d-z */
			goto St_75;}
		else if(c ==99) {			goto St_247;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_247:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_257;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_257:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 29;
			goto done;
			}
	St_81:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_124;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_124:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 60;
			goto done;
			}
	St_82:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_125;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 38;
			goto done;
			}
	St_125:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_168;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_168:
		if( scanTbl[(c= *p++)+256] & 1<< 3){ /*  0-9 A-Z _ a-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_205;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_205:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_230;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_230:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 12;
			goto done;
			}
	St_83:
		if( scanTbl[(c= *p++)+1024] & 1<< 7){ /*  0-9 A-Z _ a-f h-z */
			goto St_75;}
		else if(c ==103) {			goto St_126;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_126:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_169;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_169:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_206;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_206:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 17;
			goto done;
			}
	St_84:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_127;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_127:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_170;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_170:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 20;
			goto done;
			}
	St_85:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_128;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_128:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_171;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_171:
		if( scanTbl[(c= *p++)+1280] & 1<< 0){ /*  0-9 A-Z _ a-j l-z */
			goto St_75;}
		else if(c ==107) {			goto St_207;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_207:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 23;
			goto done;
			}
	St_86:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_129;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_129:
		if( scanTbl[(c= *p++)+1280] & 1<< 1){ /*  0-9 A-Z _ a-k m-z */
			goto St_75;}
		else if(c ==108) {			goto St_172;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_172:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_208;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_208:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_231;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_231:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_248;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_248:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 26;
			goto done;
			}
	St_87:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_130;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_130:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_173;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_173:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 28;
			goto done;
			}
	St_88:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_131;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_131:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_174;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_174:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_209;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_209:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 32;
			goto done;
			}
	St_89:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_132;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_132:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_175;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_175:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_210;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_210:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_232;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_232:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_249;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_249:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_258;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_258:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 47;
			goto done;
			}
	St_90:
		if( scanTbl[(c= *p++)+1280] & 1<< 2){ /*  0-9 A-Z _ a-u w-z */
			goto St_75;}
		else if(c ==118) {			goto St_133;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_133:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 69;
			goto done;
			}
	St_91:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_134;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_134:
		if( scanTbl[(c= *p++)+1280] & 1<< 3){ /*  0-9 A-Z _ a-d f-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_177;}
		else if(c ==101) {			goto St_176;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_176:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 41;
			goto done;
			}
	St_177:
		if( scanTbl[(c= *p++)+768] & 1<< 6){ /*  0-9 A-Z _ a-e g-z */
			goto St_75;}
		else if(c ==102) {			goto St_211;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_211:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 4;
			goto done;
			}
	St_92:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_135;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_135:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 18;
			goto done;
			}
	St_93:
		if( scanTbl[(c= *p++)+1280] & 1<< 4){ /*  0-9 A-Z _ a-b d-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_137;}
		else if(c ==99) {			goto St_136;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_136:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_178;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_178:
		if( scanTbl[(c= *p++)+1280] & 1<< 5){ /*  0-9 A-Z _ a-o q-z */
			goto St_75;}
		else if(c ==112) {			goto St_212;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_212:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_233;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_233:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 42;
			goto done;
			}
	St_137:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_179;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_179:
		if( scanTbl[(c= *p++)+256] & 1<< 3){ /*  0-9 A-Z _ a-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_213;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_213:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_234;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_234:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_250;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_250:
		if( scanTbl[(c= *p++)+1280] & 1<< 1){ /*  0-9 A-Z _ a-k m-z */
			goto St_75;}
		else if(c ==108) {			goto St_259;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_259:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 31;
			goto done;
			}
	St_94:
		if( scanTbl[(c= *p++)+1280] & 1<< 1){ /*  0-9 A-Z _ a-k m-z */
			goto St_75;}
		else if(c ==108) {			goto St_138;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_138:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_180;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_180:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_195;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_195:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 82;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_95:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 39;
			goto done;
			}
	St_96:
		if( scanTbl[(c= *p++)+1024] & 1<< 4){ /*  0-9 A-Z _ a-b d-z */
			goto St_75;}
		else if(c ==99) {			goto St_139;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_139:
		if( scanTbl[(c= *p++)+1280] & 1<< 1){ /*  0-9 A-Z _ a-k m-z */
			goto St_75;}
		else if(c ==108) {			goto St_181;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_181:
		if( scanTbl[(c= *p++)+1280] & 1<< 6){ /*  0-9 A-Z _ a-t v-z */
			goto St_75;}
		else if(c ==117) {			goto St_214;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_214:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_235;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_235:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_251;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_251:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 45;
			goto done;
			}
	St_97:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 33;
			goto done;
			}
	St_98:
		if( scanTbl[(c= *p++)+1280] & 1<< 0){ /*  0-9 A-Z _ a-j l-z */
			goto St_75;}
		else if(c ==107) {			goto St_140;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_140:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_182;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_182:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 78;
			goto done;
			}
	St_99:
		if( scanTbl[(c= *p++)+256] & 1<< 4){ /*  0-9 A-Z _ a-n p-z */
			goto St_75;}
		else if(c ==111) {			goto St_141;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_141:
		if( scanTbl[(c= *p++)+1280] & 1<< 5){ /*  0-9 A-Z _ a-o q-z */
			goto St_75;}
		else if(c ==112) {			goto St_183;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_183:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 49;
			goto done;
			}
	St_100:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_142;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_142:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 70;
			goto done;
			}
	St_101:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_143;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_143:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 81;
			goto done;
			}
	St_102:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 59;
			goto done;
			}
	St_103:
		if( scanTbl[(c= *p++)+1280] & 1<< 7){ /*  0-9 A-Z _ b-h j-n p-z */
			goto St_75;}
		else if(c ==111) {			goto St_146;}
		else if(c ==105) {			goto St_145;}
		else if(c ==97) {			goto St_144;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_144:
		if( scanTbl[(c= *p++)+1024] & 1<< 7){ /*  0-9 A-Z _ a-f h-z */
			goto St_75;}
		else if(c ==103) {			goto St_184;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_184:
		if( scanTbl[(c= *p++)+1536] & 1<< 0){ /*  0-9 A-Z _ a-l n-z */
			goto St_75;}
		else if(c ==109) {			goto St_215;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_215:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_236;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_236:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd=p=auxEOL(TokenStart, (--p)-TokenStart);
			extcode = 15001;
			goto done;
			}
	St_145:
		if( scanTbl[(c= *p++)+1280] & 1<< 2){ /*  0-9 A-Z _ a-u w-z */
			goto St_75;}
		else if(c ==118) {			goto St_185;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_185:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_216;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_216:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_237;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_237:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_252;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_252:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 44;
			goto done;
			}
	St_146:
		if( scanTbl[(c= *p++)+1024] & 1<< 4){ /*  0-9 A-Z _ a-b d-z */
			goto St_75;}
		else if(c ==99) {			goto St_186;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_186:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_217;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_217:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_238;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_238:
		if( scanTbl[(c= *p++)+1280] & 1<< 6){ /*  0-9 A-Z _ a-t v-z */
			goto St_75;}
		else if(c ==117) {			goto St_253;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_253:
		if( scanTbl[(c= *p++)+256] & 1<< 3){ /*  0-9 A-Z _ a-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_260;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_260:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_264;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_264:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 21;
			goto done;
			}
	St_104:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_147;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_147:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_187;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_187:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_218;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_218:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 73;
			goto done;
			}
	St_105:
		if( scanTbl[(c= *p++)+1536] & 1<< 1){ /*  0-9 A-Z _ b-r u-z */
			goto St_75;}
		else if(c ==116) {			goto St_150;}
		else if(c ==115) {			goto St_149;}
		else if(c ==97) {			goto St_148;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_148:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_188;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_188:
		if( scanTbl[(c= *p++)+256] & 1<< 4){ /*  0-9 A-Z _ a-n p-z */
			goto St_75;}
		else if(c ==111) {			goto St_219;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_219:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_239;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_239:
		if( scanTbl[(c= *p++)+1280] & 1<< 1){ /*  0-9 A-Z _ a-k m-z */
			goto St_75;}
		else if(c ==108) {			goto St_254;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_254:
		if( scanTbl[(c= *p++)+1536] & 1<< 2){ /*  0-9 A-Z _ a-x z */
			goto St_75;}
		else if(c ==121) {			goto St_261;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_261:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 14;
			goto done;
			}
	St_149:
		if( scanTbl[(c= *p++)+1280] & 1<< 6){ /*  0-9 A-Z _ a-t v-z */
			goto St_75;}
		else if(c ==117) {			goto St_189;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_189:
		if( scanTbl[(c= *p++)+1536] & 1<< 0){ /*  0-9 A-Z _ a-l n-z */
			goto St_75;}
		else if(c ==109) {			goto St_220;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_220:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_240;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_240:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 74;
			goto done;
			}
	St_150:
		if( scanTbl[(c= *p++)+1280] & 1<< 6){ /*  0-9 A-Z _ a-t v-z */
			goto St_75;}
		else if(c ==117) {			goto St_190;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_190:
		if( scanTbl[(c= *p++)+256] & 1<< 3){ /*  0-9 A-Z _ a-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_221;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_221:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_241;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_241:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 75;
			goto done;
			}
	St_106:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_151;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_151:
		if( scanTbl[(c= *p++)+256] & 1<< 3){ /*  0-9 A-Z _ a-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_191;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_191:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_222;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_222:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_242;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_242:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 15;
			goto done;
			}
	St_107:
		if( scanTbl[(c= *p++)+1536] & 1<< 3){ /*  0-9 A-Z _ b-q s-z */
			goto St_75;}
		else if(c ==114) {			goto St_153;}
		else if(c ==97) {			goto St_152;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_152:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_192;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_192:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_223;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_223:
		if( scanTbl[(c= *p++)+1024] & 1<< 4){ /*  0-9 A-Z _ a-b d-z */
			goto St_75;}
		else if(c ==99) {			goto St_243;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_243:
		if( scanTbl[(c= *p++)+1536] & 1<< 4){ /*  0-9 A-Z a-z */
			goto St_75;}
		else if(c ==95) {			goto St_255;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 91;
			goto done;
			}
	St_255:
		if( scanTbl[(c= *p++)+1536] & 1<< 5){ /*  0-9 A-Z _ a c-z */
			goto St_75;}
		else if(c ==98) {			goto St_262;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_262:
		if( scanTbl[(c= *p++)+1280] & 1<< 6){ /*  0-9 A-Z _ a-t v-z */
			goto St_75;}
		else if(c ==117) {			goto St_265;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_265:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_266;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_266:
		if( scanTbl[(c= *p++)+1280] & 1<< 1){ /*  0-9 A-Z _ a-k m-z */
			goto St_75;}
		else if(c ==108) {			goto St_267;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_267:
		if( scanTbl[(c= *p++)+1024] & 1<< 3){ /*  0-9 A-Z _ a-s u-z */
			goto St_75;}
		else if(c ==116) {			goto St_268;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_268:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_269;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_269:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_270;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_270:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 50;
			goto done;
			}
	St_153:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_193;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_193:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_224;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_224:
		if( scanTbl[(c= *p++)+1536] & 1<< 0){ /*  0-9 A-Z _ a-l n-z */
			goto St_75;}
		else if(c ==109) {			goto St_244;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_244:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 22;
			goto done;
			}
	St_108:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_154;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_154:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_194;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_194:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 5;
			goto done;
			}
	St_109:
		if( scanTbl[(c= *p++)+1280] & 1<< 6){ /*  0-9 A-Z _ a-t v-z */
			goto St_75;}
		else if(c ==117) {			goto St_155;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_155:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_195;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_110:
		if( scanTbl[(c= *p++)+1280] & 1<< 5){ /*  0-9 A-Z _ a-o q-z */
			goto St_75;}
		else if(c ==112) {			goto St_156;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_156:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_196;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_196:
		if( scanTbl[(c= *p++)+1024] & 1<< 4){ /*  0-9 A-Z _ a-b d-z */
			goto St_75;}
		else if(c ==99) {			goto St_225;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_225:
		if( scanTbl[(c= *p++)+256] & 1<< 7){ /*  0-9 A-Z _ b-z */
			goto St_75;}
		else if(c ==97) {			goto St_245;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_245:
		if( scanTbl[(c= *p++)+1024] & 1<< 2){ /*  0-9 A-Z _ a-r t-z */
			goto St_75;}
		else if(c ==115) {			goto St_256;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_256:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_263;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_263:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 79;
			goto done;
			}
	St_111:
		if( scanTbl[(c= *p++)+1280] & 1<< 1){ /*  0-9 A-Z _ a-k m-z */
			goto St_75;}
		else if(c ==108) {			goto St_157;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_157:
		if( scanTbl[(c= *p++)+1280] & 1<< 6){ /*  0-9 A-Z _ a-t v-z */
			goto St_75;}
		else if(c ==117) {			goto St_197;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_197:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_226;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_226:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 30;
			goto done;
			}
	St_112:
		if( scanTbl[(c= *p++)+512] & 1<< 1){ /*  0-9 A-Z _ a-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_158;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_158:
		if( scanTbl[(c= *p++)+1024] & 1<< 5){ /*  0-9 A-Z _ a-c e-z */
			goto St_75;}
		else if(c ==100) {			goto St_198;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_198:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 88;
			goto done;
			}
	St_113:
		if( scanTbl[(c= *p++)+1280] & 1<< 3){ /*  0-9 A-Z _ a-d f-h j-z */
			goto St_75;}
		else if(c ==105) {			goto St_160;}
		else if(c ==101) {			goto St_159;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_159:
		if( scanTbl[(c= *p++)+512] & 1<< 6){ /*  0-9 A-Z _ a-m o-z */
			goto St_75;}
		else if(c ==110) {			goto St_199;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_199:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 89;
			goto done;
			}
	St_160:
		if( scanTbl[(c= *p++)+1280] & 1<< 1){ /*  0-9 A-Z _ a-k m-z */
			goto St_75;}
		else if(c ==108) {			goto St_200;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_200:
		if( scanTbl[(c= *p++)+1024] & 1<< 6){ /*  0-9 A-Z _ a-d f-z */
			goto St_75;}
		else if(c ==101) {			goto St_227;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 13;
			mkidn(TokenStart, TokenEnd-TokenStart,&extcode,v);
			goto done;
			}
	St_227:
		if( scanTbl[(c= *p++)+0] & 1<< 3){ /*  0-9 A-Z _ a-z */
			goto St_75;}
		else {
			TokenEnd= (--p); /* FINAL, no auxscan, must set */
			extcode = 90;
			goto done;
			}
