__int64 __fastcall sub_4A720(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4, __int64 a5, int a6)
{
  char *v6; // rbp
  __int64 v8; // rdi
  int v10; // edi
  int v11; // edx
  __int64 v12; // rax
  int v13; // esi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // edi
  char v20; // cl
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned int v24; // ecx
  int v25; // r12d
  __int64 v26; // rax
  char v27; // al
  unsigned __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned int v32; // ecx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  unsigned int v35; // ecx
  char v36; // si
  unsigned int v37; // ecx
  unsigned __int64 v38; // rsi
  unsigned int v39; // ecx
  unsigned __int16 v40; // r12
  unsigned int v41; // ecx
  unsigned __int64 v42; // rsi
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rsi
  unsigned int v47; // ecx
  char v48; // r12
  unsigned int v49; // ecx
  unsigned __int64 v50; // rax
  unsigned int v51; // ecx
  char v52; // r12
  unsigned int v53; // ecx
  char v54; // si
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  char v57; // si
  unsigned int v58; // ecx
  char v59; // r12
  unsigned int v60; // ecx
  char v61; // si
  unsigned __int64 v62; // rax
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  __int64 v65; // rdi
  unsigned int v66; // ecx
  char v67; // al
  __int64 v68; // rdi
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rsi
  unsigned int v71; // ecx
  __int64 v72; // rsi
  __int64 v73; // r12
  __int64 first_seg; // rax
  char v75; // al
  unsigned __int64 v76; // rsi
  unsigned int v77; // ecx
  __int64 v78; // rdi
  unsigned int v79; // ecx
  char v80; // al
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // rsi
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rsi
  __int64 v89; // rdi
  unsigned int v90; // ecx
  char v91; // al
  char v92; // cl
  __int64 v93; // rax
  int i; // ecx
  __int64 v95; // rdi
  int v96; // edx
  int v97; // edx
  int v98; // ecx
  __int64 v99; // rax
  __int64 v100; // rax
  char v101; // cl
  __int64 v102; // rax

  v6 = a3;
  v8 = a2;
  switch ( a6 )
  {
    case 1:
      a3[4] |= 0x80u;
      a3[1] = 4;
      a3[5] = 2;
      *((_WORD *)a3 + 3) = BYTE2(a4) & 0x1F;
      *((_QWORD *)a3 + 2) = 0;
      return 1;
    case 2:
      v68 = *(_QWORD *)(a2 + 16);
      a3[1] = 3;
      v76 = a4 >> 16;
      v77 = *(_DWORD *)(a1 + 120);
      v72 = v76 & 0x3FF;
      v73 = v72;
      if ( v77 > 5 )
        goto LABEL_119;
      if ( ((1LL << v77) & 0x16) != 0 )
        goto LABEL_217;
      if ( ((1LL << v77) & 0x29) == 0 )
        goto LABEL_119;
      goto LABEL_150;
    case 3:
      a3[1] = 4;
      a3[5] = 2;
      *((_QWORD *)a3 + 2) = a4 & 0xFFF;
      *((_WORD *)a3 + 3) = BYTE2(a4) & 0x1F;
      return 1;
    case 4:
      a3[1] = 4;
      a3[5] = 2;
      *((_WORD *)a3 + 3) = BYTE2(a4) & 0x1F;
      *((_QWORD *)a3 + 2) = (unsigned __int8)a4
                          | (a4 >> 7) & 0x100
                          | (-256LL * (((unsigned __int8)a4 | (a4 >> 7) & 0x100) >> 8));
      return 1;
    case 5:
      a3 = (char *)dword_5E380;
      v68 = *(_QWORD *)(a2 + 16);
      v69 = a4 >> 7;
      v6[1] = 3;
      v70 = a4 >> 4;
      v71 = *(_DWORD *)(a1 + 120);
      v72 = v70 & 7;
      v73 = dword_5E380[v72] | (unsigned int)(32 * dword_5E380[v69 & 7]);
      if ( v71 > 5 )
        goto LABEL_265;
      if ( ((1LL << v71) & 0x16) != 0 )
        goto LABEL_217;
      if ( ((1LL << v71) & 0x29) == 0 )
      {
LABEL_265:
        if ( !under_debugger )
          goto LABEL_35;
LABEL_272:
        BUG();
      }
LABEL_150:
      if ( v68 == -1 )
        first_seg = get_first_seg(-1, v72, a3);
      else
        first_seg = getseg(v68);
      if ( first_seg )
      {
        if ( *(_BYTE *)(first_seg + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_217:
          v75 = 7;
        else
          v75 = 2;
        v6[5] = v75;
        v6[32] = 0;
        *((_QWORD *)v6 + 3) = v73;
      }
      else
      {
        do
        {
LABEL_261:
          if ( under_debugger )
            goto LABEL_272;
          interr(10206);
LABEL_263:
          if ( under_debugger )
            goto LABEL_272;
LABEL_35:
          while ( 1 )
          {
            v8 = 10339;
            interr(10339);
LABEL_36:
            v21 = *(_QWORD *)(v8 + 16);
            v6[1] = 1;
            v30 = a4 >> 22;
            v31 = a4 >> 21;
            v32 = *(_DWORD *)(a1 + 120);
            a3 = (char *)dword_5E2A0;
            a2 = v31 & 7;
            v25 = dword_5E2A0[a2 | v30 & 8];
            if ( v32 <= 5 )
            {
              if ( ((1LL << v32) & 0x16) != 0 )
                goto LABEL_214;
              if ( ((1LL << v32) & 0x29) != 0 )
                break;
            }
            if ( under_debugger )
              goto LABEL_272;
          }
LABEL_24:
          if ( v21 == -1 )
            v26 = get_first_seg(-1, a2, a3);
          else
            v26 = getseg(v21);
        }
        while ( !v26 );
        if ( *(_BYTE *)(v26 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_214:
          v27 = 7;
        else
          v27 = 2;
        v6[5] = v27;
        *((_WORD *)v6 + 3) = v25;
      }
      return 1;
    case 6:
      a3[1] = 4;
      a3[5] = 2;
      *((_QWORD *)a3 + 2) = a4 & 3;
      *((_WORD *)a3 + 3) = dword_5E380[(a4 >> 4) & 7];
      return 1;
    case 7:
      a3[1] = 4;
      a3[5] = 2;
      *((_QWORD *)a3 + 2) = a4 & 6;
      *((_WORD *)a3 + 3) = dword_5E380[(a4 >> 4) & 7];
      return 1;
    case 8:
      a3[1] = 4;
      a3[5] = 2;
      *((_QWORD *)a3 + 2) = (4 * (_BYTE)a4) & 0x3C;
      *((_WORD *)a3 + 3) = dword_5E380[(a4 >> 4) & 7];
      return 1;
    case 9:
      a3[1] = 4;
      a3[5] = 2;
      *((_WORD *)a3 + 3) = dword_5E2E0[a4 & 7 | (a4 >> 1) & 8];
      *((_QWORD *)a3 + 2) = a4 & 8 | (a4 >> 6) & 4;
      return 1;
    case 10:
      a3[1] = 4;
      a3[5] = 2;
      *((_WORD *)a3 + 3) = 29;
      *((_QWORD *)a3 + 2) = (4 * (_BYTE)a4) & 0x7C;
      return 1;
    case 11:
      a3[1] = 4;
      a3[5] = 2;
      *((_WORD *)a3 + 3) = 28;
      *((_QWORD *)a3 + 2) = (4 * (_WORD)a4) & 0x1FC;
      return 1;
    case 12:
      a3[1] = 4;
      a3[5] = 2;
      *((_WORD *)a3 + 3) = 28;
      *((_QWORD *)a3 + 2) = a4 & 0x1FFFFC;
      return 1;
    case 13:
      a3[1] = 4;
      a3[5] = 2;
      *((_WORD *)a3 + 3) = 28;
      *((_QWORD *)a3 + 2) = a4 & 0x3FFFE;
      return 1;
    case 14:
      a3[1] = 4;
      a3[5] = 2;
      *((_WORD *)a3 + 3) = 28;
      *((_QWORD *)a3 + 2) = a4 & 0x3FFFF;
      return 1;
    case 15:
      v78 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v79 = *(_DWORD *)(a1 + 120);
      if ( v79 > 5 )
        goto LABEL_269;
      if ( ((1LL << v79) & 0x16) != 0 )
        goto LABEL_169;
      if ( ((1LL << v79) & 0x29) != 0 )
      {
        if ( v78 == -1 )
          v100 = get_first_seg(-1, a2, a3);
        else
          v100 = getseg(v78);
        if ( !v100 )
          goto LABEL_261;
        if ( *(_BYTE *)(v100 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_169:
          v80 = 7;
        else
          v80 = 2;
        v6[5] = v80;
        *((_WORD *)v6 + 3) = 28;
        return 1;
      }
LABEL_269:
      if ( !under_debugger )
        goto LABEL_35;
      goto LABEL_272;
    case 16:
      v89 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v90 = *(_DWORD *)(a1 + 120);
      if ( v90 > 5 )
        goto LABEL_271;
      if ( ((1LL << v90) & 0x16) != 0 )
        goto LABEL_212;
      if ( ((1LL << v90) & 0x29) != 0 )
      {
        if ( v89 == -1 )
          v102 = get_first_seg(-1, a2, a3);
        else
          v102 = getseg(v89);
        if ( !v102 )
          goto LABEL_261;
        if ( *(_BYTE *)(v102 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_212:
          v91 = 7;
        else
          v91 = 2;
        v6[5] = v91;
        *((_WORD *)v6 + 3) = 29;
        return 1;
      }
LABEL_271:
      if ( !under_debugger )
        goto LABEL_35;
      goto LABEL_272;
    case 17:
      v65 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v66 = *(_DWORD *)(a1 + 120);
      if ( v66 > 5 )
        goto LABEL_267;
      if ( ((1LL << v66) & 0x16) != 0 )
        goto LABEL_123;
      if ( ((1LL << v66) & 0x29) != 0 )
      {
        if ( v65 == -1 )
          v93 = get_first_seg(-1, a2, a3);
        else
          v93 = getseg(v65);
        if ( !v93 )
          goto LABEL_261;
        if ( *(_BYTE *)(v93 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_123:
          v67 = 7;
        else
          v67 = 2;
        v6[5] = v67;
        *((_WORD *)v6 + 3) = 31;
        return 1;
      }
LABEL_267:
      if ( !under_debugger )
        goto LABEL_35;
      goto LABEL_272;
    case 18:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      a2 = a4 >> 37;
      v64 = *(_DWORD *)(a1 + 120);
      LOWORD(v25) = a2 & 0x1F;
      if ( v64 > 5 )
        goto LABEL_119;
      if ( ((1LL << v64) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v64) & 0x29) != 0 )
        goto LABEL_24;
LABEL_119:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 19:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v48 = a4 >> 21;
      v49 = *(_DWORD *)(a1 + 120);
      LOWORD(v25) = v48 & 0x1F;
      if ( v49 > 5 )
        goto LABEL_79;
      if ( ((1LL << v49) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v49) & 0x29) != 0 )
        goto LABEL_24;
LABEL_79:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 20:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      a2 = a4 >> 16;
      v56 = *(_DWORD *)(a1 + 120);
      LOWORD(v25) = a2 & 0x1F;
      if ( v56 > 5 )
        goto LABEL_99;
      if ( ((1LL << v56) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v56) & 0x29) != 0 )
        goto LABEL_24;
LABEL_99:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 21:
      v40 = a4;
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v41 = *(_DWORD *)(a1 + 120);
      LOWORD(v25) = v40 >> 11;
      if ( v41 > 5 )
        goto LABEL_59;
      if ( ((1LL << v41) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v41) & 0x29) != 0 )
        goto LABEL_24;
LABEL_59:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 22:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v59 = a4 >> 5;
      v60 = *(_DWORD *)(a1 + 120);
      LOWORD(v25) = v59 & 0x1F;
      if ( v60 > 5 )
        goto LABEL_109;
      if ( ((1LL << v60) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v60) & 0x29) != 0 )
        goto LABEL_24;
LABEL_109:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 23:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      a2 = a4 >> 3;
      v44 = *(_DWORD *)(a1 + 120);
      LOWORD(v25) = a2 & 0x1F;
      if ( v44 > 5 )
        goto LABEL_69;
      if ( ((1LL << v44) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v44) & 0x29) != 0 )
        goto LABEL_24;
LABEL_69:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 24:
      v52 = a4;
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v53 = *(_DWORD *)(a1 + 120);
      LOWORD(v25) = v52 & 0x1F;
      if ( v53 > 5 )
        goto LABEL_89;
      if ( ((1LL << v53) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v53) & 0x29) != 0 )
        goto LABEL_24;
LABEL_89:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 25:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v36 = BYTE3(a4);
      v37 = *(_DWORD *)(a1 + 120);
      a2 = v36 & 1;
      v25 = dword_5E340[a2];
      if ( v37 > 5 )
        goto LABEL_49;
      if ( ((1LL << v37) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v37) & 0x29) != 0 )
        goto LABEL_24;
LABEL_49:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 26:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v61 = BYTE1(a4);
      v62 = a4 >> 2;
      v63 = *(_DWORD *)(a1 + 120);
      a3 = (char *)dword_5E330;
      a2 = v61 & 1;
      v25 = dword_5E330[a2 | v62 & 2];
      if ( v63 > 5 )
        goto LABEL_114;
      if ( ((1LL << v63) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v63) & 0x29) != 0 )
        goto LABEL_24;
LABEL_114:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 27:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v45 = a4 >> 2;
      v46 = a4 >> 8;
      v47 = *(_DWORD *)(a1 + 120);
      a3 = (char *)dword_5E320;
      a2 = v46 & 1;
      v25 = dword_5E320[a2 | v45 & 2];
      if ( v47 > 5 )
        goto LABEL_74;
      if ( ((1LL << v47) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v47) & 0x29) != 0 )
        goto LABEL_24;
LABEL_74:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 28:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v54 = a4 >> 7;
      v55 = *(_DWORD *)(a1 + 120);
      a2 = v54 & 7;
      v25 = dword_5E360[a2];
      if ( v55 > 5 )
        goto LABEL_94;
      if ( ((1LL << v55) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v55) & 0x29) != 0 )
        goto LABEL_24;
LABEL_94:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 29:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v38 = a4 >> 7;
      v39 = *(_DWORD *)(a1 + 120);
      a2 = v38 & 7;
      v25 = dword_5E380[a2];
      if ( v39 > 5 )
        goto LABEL_54;
      if ( ((1LL << v39) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v39) & 0x29) != 0 )
        goto LABEL_24;
LABEL_54:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 30:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v57 = a4 >> 4;
      v58 = *(_DWORD *)(a1 + 120);
      a2 = v57 & 7;
      v25 = dword_5E380[a2];
      if ( v58 > 5 )
        goto LABEL_104;
      if ( ((1LL << v58) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v58) & 0x29) != 0 )
        goto LABEL_24;
LABEL_104:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 31:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v42 = a4 >> 1;
      v43 = *(_DWORD *)(a1 + 120);
      a2 = v42 & 7;
      v25 = dword_5E380[a2];
      if ( v43 > 5 )
        goto LABEL_64;
      if ( ((1LL << v43) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v43) & 0x29) != 0 )
        goto LABEL_24;
LABEL_64:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 32:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v50 = a4 >> 1;
      a2 = a4 & 7;
      v51 = *(_DWORD *)(a1 + 120);
      a3 = (char *)dword_5E2A0;
      v25 = dword_5E2A0[a2 | v50 & 8];
      if ( v51 > 5 )
        goto LABEL_84;
      if ( ((1LL << v51) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v51) & 0x29) != 0 )
        goto LABEL_24;
LABEL_84:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 33:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v33 = a4 >> 6;
      v34 = a4 >> 5;
      v35 = *(_DWORD *)(a1 + 120);
      a3 = (char *)dword_5E2A0;
      a2 = v34 & 7;
      v25 = dword_5E2A0[a2 | v33 & 8];
      if ( v35 > 5 )
        goto LABEL_44;
      if ( ((1LL << v35) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v35) & 0x29) != 0 )
        goto LABEL_24;
LABEL_44:
      if ( under_debugger )
        goto LABEL_272;
      goto LABEL_35;
    case 34:
      goto LABEL_36;
    case 35:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v28 = a4 >> 1;
      a2 = a4 & 7;
      v29 = *(_DWORD *)(a1 + 120);
      a3 = (char *)dword_5E2E0;
      v25 = dword_5E2E0[a2 | v28 & 8];
      if ( v29 > 5 )
        goto LABEL_34;
      if ( ((1LL << v29) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v29) & 0x29) != 0 )
        goto LABEL_24;
LABEL_34:
      if ( !under_debugger )
        goto LABEL_35;
      goto LABEL_272;
    case 36:
      v21 = *(_QWORD *)(a2 + 16);
      a3[1] = 1;
      v22 = a4 >> 6;
      v23 = a4 >> 5;
      v24 = *(_DWORD *)(a1 + 120);
      a3 = (char *)dword_5E2E0;
      a2 = v23 & 7;
      v25 = dword_5E2E0[a2 | v22 & 8];
      if ( v24 > 5 )
        goto LABEL_263;
      if ( ((1LL << v24) & 0x16) != 0 )
        goto LABEL_214;
      if ( ((1LL << v24) & 0x29) != 0 )
        goto LABEL_24;
      goto LABEL_263;
    case 37:
      v16 = (a4 >> 16) & 0xF;
      v17 = (a4 >> 21) & 0x1F;
      v18 = a4 & 4;
      if ( (a4 & 4) != 0 )
      {
        LODWORD(v16) = v16 - 1;
        v18 = 0x10000000;
      }
      v19 = v17 + v16;
      if ( (unsigned int)(v17 + v16) > 0x20 )
      {
        for ( i = (a4 >> 21) & 0x1F; i != 32; ++i )
        {
          while ( i > 63 )
            ++i;
          v95 = 1LL << i;
          v18 |= v95;
        }
        v96 = v16 + v17 - 32;
        if ( v96 <= 0 )
        {
LABEL_20:
          v6[1] = 12;
          *((_QWORD *)v6 + 3) = v18;
          return 1;
        }
        v97 = v96 + 16;
        v98 = 16;
        do
        {
          while ( v98 > 63 )
            ++v98;
          v99 = 1LL << v98++;
          v18 |= v99;
        }
        while ( v97 != v98 );
      }
      else if ( (int)v16 > 0 )
      {
        do
        {
          for ( ; (int)v17 > 63; LODWORD(v17) = v17 + 1 )
            ;
          v20 = v17;
          LODWORD(v17) = v17 + 1;
          v18 |= 1LL << v20;
        }
        while ( v19 != (_DWORD)v17 );
        goto LABEL_20;
      }
      v6[1] = 12;
      *((_QWORD *)v6 + 3) = v18;
      if ( !v18 )
LABEL_3:
        v6[4] &= ~8u;
      return 1;
    case 38:
      v10 = a4 & 0xF;
      if ( (a4 & 0x200) != 0 )
      {
        v92 = 31;
        if ( (unsigned int)(v10 + 31) > 0x20 )
        {
          v11 = 31;
          v12 = 0x80000000LL;
LABEL_8:
          if ( v10 + v11 != 32 )
          {
            v13 = v10 + v11 - 32 + 16;
            v14 = 16;
            do
            {
              while ( v14 > 63 )
                ++v14;
              v15 = 1LL << v14++;
              v12 |= v15;
            }
            while ( v14 != v13 );
          }
          goto LABEL_12;
        }
      }
      else
      {
        if ( (unsigned int)(v10 + 30) > 0x20 )
        {
          v11 = 30;
          v12 = 3221225472LL;
          goto LABEL_8;
        }
        v92 = 30;
      }
      if ( !v10 )
      {
LABEL_2:
        a3[1] = 12;
        *((_QWORD *)a3 + 3) = 0;
        goto LABEL_3;
      }
      v12 = 1LL << v92;
      v101 = v92 + 1;
      if ( v10 != 1 )
        v12 |= 1LL << v101;
LABEL_12:
      v6[1] = 12;
      *((_QWORD *)v6 + 3) = v12;
      return 1;
    case 39:
      goto LABEL_2;
    case 40:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = ((a4 >> 6) & 0x1F) - (a4 & 0x1F) + 1;
      return 1;
    case 41:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = ((a4 >> 6) & 0x1F) + 1;
      return 1;
    case 43:
      a3[1] = 9;
      a3[5] = 2;
      *(_WORD *)(a3 + 33) = 261;
      *((_WORD *)a3 + 3) = BYTE2(a4) & 0x1F;
      return 1;
    case 44:
      a3[1] = 9;
      a3[5] = 2;
      *(_WORD *)(a3 + 33) = 258;
      *((_WORD *)a3 + 3) = BYTE2(a4) & 0x1F;
      return 1;
    case 45:
      a3[1] = 8;
      a3[5] = 0;
      *((_QWORD *)a3 + 1) = (unsigned __int16)a4 >> 11;
      return 1;
    case 46:
      a3[1] = 7;
      a3[5] = 9;
      *((_QWORD *)a3 + 2) = ((2 * (_BYTE)a4) & 0x1E) + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
      return 1;
    case 47:
      a3[1] = 7;
      a3[5] = 9;
      v83 = (unsigned __int8)((_BYTE)a4 << 7) | a4 & 0x7E;
      v84 = (char)v83 & 0xFFFFFFFFFFFFFF80LL;
      goto LABEL_176;
    case 48:
      a3[1] = 7;
      a3[5] = 9;
      v83 = ((_WORD)a4 << 10) & 0x400 | a4 & 0x3FE;
      v84 = -1024LL * (v83 >> 10);
      goto LABEL_176;
    case 49:
      a3[1] = 7;
      a3[5] = 9;
      v83 = ((_WORD)a4 << 11) & 0x800 | a4 & 0x7FE;
      v84 = -2048LL * (v83 >> 11);
      goto LABEL_176;
    case 50:
      a3[1] = 7;
      a3[5] = 9;
      v83 = ((_WORD)a4 << 14) & 0x4000 | a4 & 0x3FFE;
      v84 = -16384LL * (v83 >> 14);
      goto LABEL_176;
    case 51:
      a3[1] = 7;
      a3[5] = 9;
      v83 = ((_DWORD)a4 << 21) & 0x200000 | a4 & 0x1FFFFE;
      v84 = -2097152LL * (v83 >> 21);
      goto LABEL_176;
    case 52:
      a3[1] = 7;
      a3[5] = 9;
      v83 = ((_DWORD)a4 << 25) & 0x2000000 | a4 & 0x1FFFFFE;
      v84 = -33554432LL * (v83 >> 25);
      goto LABEL_176;
    case 53:
      a3[1] = 2;
      v83 = ((_DWORD)a4 << 21) & 0x200000 | a4 & 0x1FFFFE;
      v84 = -2097152LL * (v83 >> 21);
LABEL_176:
      *((_QWORD *)a3 + 2) = *(_QWORD *)(v8 + 8) + *(unsigned __int16 *)(v8 + 26) + (v83 | v84);
      return 1;
    case 54:
      a3[1] = 2;
      v82 = a4 & 0x1FF000 | (unsigned int)((_DWORD)a4 << 31);
      *((_QWORD *)a3 + 2) = (*(_QWORD *)(a2 + 8)
                           + *(unsigned __int16 *)(a2 + 26)
                           + (v82 | ((_DWORD)a4 << 19) & 0x7FE00000 | (int)v82 & 0xFFFFFFFF80000000LL))
                          & 0xFFFFFFFFFFFFF000LL;
      return 1;
    case 55:
      a3[1] = 2;
      *((_QWORD *)a3 + 2) = WORD1(a4)
                          + (unsigned int)((_DWORD)a4 << 16)
                          + *(_QWORD *)(a2 + 8)
                          + *(unsigned __int16 *)(a2 + 26);
      return 1;
    case 56:
      a3[1] = 5;
      a3[5] = 2;
      v81 = a4 & 0x1FF000 | (unsigned int)((_DWORD)a4 << 31);
      *((_QWORD *)a3 + 1) = ((v81 | ((_DWORD)a4 << 19) & 0x7FE00000) >> 12) | (-524288LL * (v81 >> 31));
      return 1;
    case 57:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 1) & 8 | a4 & 7 | (-8LL * (((a4 >> 1) & 8 | a4 & 7) >> 3));
      return 1;
    case 58:
      a3[1] = 5;
      v88 = a4 & 0x7F;
      a3[5] = 2;
      if ( v88 == 127 )
        v88 = -1;
      *((_QWORD *)a3 + 1) = v88;
      return 1;
    case 59:
      v86 = a4 & 0xF;
      a3[1] = 5;
      a3[5] = 2;
      v87 = v86;
      if ( v86 == 12 )
      {
        *((_QWORD *)a3 + 1) = 255;
      }
      else
      {
        if ( v86 == 13 )
          v87 = 0xFFFF;
        *((_QWORD *)a3 + 1) = v87;
      }
      return 1;
    case 60:
      v85 = 8;
      a3[1] = 5;
      a3[5] = 2;
      if ( ((a4 >> 12) & 7) != 0 )
        v85 = (a4 >> 12) & 7;
      *((_QWORD *)a3 + 1) = v85;
      return 1;
    case 61:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 & 8) != 0;
      return 1;
    case 62:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 6) & 1;
      return 1;
    case 63:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 & 0x400) != 0;
      return 1;
    case 64:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 3;
      return 1;
    case 65:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 9) & 3;
      return 1;
    case 66:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 21) & 3;
      return 1;
    case 67:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (4 * (_BYTE)a4) & 0x1C;
      return 1;
    case 68:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 7;
      return 1;
    case 69:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (unsigned __int8)a4 & 0xF0;
      return 1;
    case 70:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 6) & 0x1E;
      return 1;
    case 71:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 0x1F;
      return 1;
    case 72:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 6) & 0x1F;
      return 1;
    case 73:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (unsigned __int16)a4 >> 11;
      return 1;
    case 74:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 16) & 0x1F;
      return 1;
    case 75:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 21) & 0x1F;
      return 1;
    case 76:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (unsigned __int8)(4 * a4);
      return 1;
    case 77:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 11) & 0x7F;
      return 1;
    case 78:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 0xFF8;
      return 1;
    case 79:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (a4 >> 16) & 0x3FF;
      return 1;
    case 80:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 0xFFF;
      return 1;
    case 81:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = -(__int64)(a4 & 0xFFF);
      return 1;
    case 82:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (unsigned __int16)a4;
      return 1;
    case 83:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 0x3FFFE;
      return 1;
    case 84:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 0x3FFFF;
      return 1;
    case 85:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 0x7FFFF;
      return 1;
    case 86:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = a4 & 0x1FFFFC;
      return 1;
    case 87:
      a3[1] = 5;
      a3[5] = 2;
      *((_QWORD *)a3 + 1) = (unsigned int)((_DWORD)a4 << 16)
                          | (unsigned __int64)WORD1(a4)
                          | (int)((_DWORD)a4 << 16) & 0xFFFFFFFF80000000LL;
      return 1;
    default:
      sub_3AC20((__int64)"nanomips: interr (code=%llx, op=%x)\n", a4, a6);
      return 0;
  }
}

