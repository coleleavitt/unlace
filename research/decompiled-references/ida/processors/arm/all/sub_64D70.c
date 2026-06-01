__int64 __fastcall sub_64D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ecx
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rsi
  char v11; // r9
  int v12; // edi
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // r10
  int v15; // ebp
  int v16; // ebx
  int v17; // eax
  int v18; // edi
  unsigned __int8 v19; // r8
  __int64 v20; // rcx
  char v21; // si
  __int16 v22; // ax
  char v23; // al
  char v24; // si
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // si
  __int16 v29; // ax
  char v30; // si
  int v31; // eax
  char v32; // di
  __int64 v33; // rsi
  char v34; // cl
  int v35; // esi
  char v36; // r9
  int v37; // esi
  char v38; // r10
  char v39; // r8
  __int64 v40; // rcx
  char v41; // si
  __int16 v42; // ax
  char v43; // si
  int v44; // eax
  char v45; // cl
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // si
  char v49; // al
  unsigned __int8 v50; // di
  unsigned __int8 v51; // r10
  __int64 v52; // r8
  __int64 v53; // rax
  unsigned __int8 v54; // cl
  __int64 v55; // rsi
  __int16 v56; // ax
  char v57; // r8
  __int64 v58; // rsi
  unsigned __int8 v59; // r10
  char v60; // al
  __int64 v61; // rsi
  __int16 v62; // ax
  __int64 v63; // r9
  char v64; // si
  __int64 v65; // r9
  __int64 v66; // rsi
  __int64 v67; // rsi
  char v68; // r8
  char v69; // r9
  __int64 v70; // rcx
  char v71; // si
  __int16 v72; // ax
  char v73; // si
  int v74; // eax
  unsigned __int8 v75; // di
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r8
  char v79; // si
  __int16 v80; // ax
  char v81; // si
  int v82; // eax
  int v83; // ebx
  char v84; // al
  unsigned __int8 v85; // r10
  char v86; // al
  char v87; // al
  __int64 v88; // rcx
  char v89; // al
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned int v97; // eax
  _BYTE *v98; // r8
  unsigned int v99; // r11d
  __int64 v100; // r9
  int v101; // edx
  __int16 v102; // cx
  unsigned int v103; // eax
  int v104; // r10d
  int v105; // ebx
  int v106; // ecx
  int v107; // eax
  int v108; // ebp
  int v109; // esi
  __int64 v110; // rcx
  __int64 v111; // rsi
  int v112; // r10d
  __int64 v113; // rdx
  char v114; // r10
  __int64 v115; // rbx
  __int64 v116; // rax
  char v117; // r11
  char v118; // al
  char v119; // r8
  char v120; // r9
  __int16 v121; // cx
  __int64 v122; // rdx
  char v123; // cl
  __int64 v124; // rcx
  char v125; // dl
  __int16 v126; // r9
  char v127; // si
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rdx
  __int16 v131; // dx
  int v132; // edx
  __int64 v133; // rcx
  char v134; // dl
  unsigned __int8 v135; // si
  char v136; // cl
  unsigned __int8 v137; // dl
  char v138; // dl
  __int64 v139; // rcx
  char v140; // si
  unsigned __int8 v141; // dl
  int v142; // eax
  int v144; // ecx
  int v145; // r9d
  __int64 v146; // rsi
  int v147; // eax
  int v148; // edx
  __int16 v149; // ax
  char v150; // r8
  __int64 v151; // rsi
  char v152; // r8
  int v153; // eax
  __int64 v154; // rdx
  char v155; // cl
  __int16 v156; // ax
  unsigned int v157; // eax
  char v158; // si
  char v159; // dl
  __int64 v160; // rcx
  int v161; // eax
  char v162; // r8
  __int16 v163; // ax
  int v164; // eax
  __int64 v165; // rcx
  int v166; // r8d
  __int16 v167; // ax
  __int16 v168; // ax
  __int64 v169; // rcx
  unsigned int v170; // eax
  __int16 v171; // dx
  int v172; // eax
  __int64 v173; // rcx
  __int16 v174; // dx
  int v175; // edx
  __int64 v176; // rcx
  int v177; // esi
  __int16 v178; // dx

  v142 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 48) = a2;
  if ( (v142 & 0x800000) == 0 )
    JUMPOUT(0x62930);
  if ( (v142 & 0x10) != 0 )
  {
    v97 = *(_DWORD *)(a1 + 52);
    if ( (v97 & 0x380080) == 0 )
      return sub_643C0(a1, a2, a3, a4, a5, a6);
    v98 = &unk_8DF40;
    v99 = v97 >> 8;
    v100 = BYTE1(v97) & 0xF;
    v101 = BYTE1(v97) & 0xF;
    v102 = *((_WORD *)&unk_8DF40 + 2 * v100);
    if ( !v102 )
      return 0;
    v103 = HIWORD(v97);
    v104 = v103 & 0x3F;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v102;
    v105 = *(_DWORD *)(a1 + 36);
    v106 = *((unsigned __int8 *)&unk_8DF40 + 4 * v100 + 3);
    if ( v105 )
    {
      v107 = v103 & 0x3F;
      v108 = 3;
      v109 = 64;
      if ( v106 == 1 )
        goto LABEL_229;
    }
    else
    {
      if ( (v103 & 0x20) != 0 )
      {
        v107 = v103 & 0x1F;
        v108 = 2;
        v109 = 32;
      }
      else if ( (v103 & 0x10) != 0 )
      {
        v107 = v103 & 0xF;
        v108 = 1;
        v109 = 16;
      }
      else if ( (v103 & 8) != 0 )
      {
        v107 = v103 & 7;
        v108 = 0;
        v109 = 8;
      }
      else
      {
        v108 = 0;
        v107 = 0;
        v109 = 0;
      }
      if ( v106 == 1 )
        goto LABEL_229;
    }
    if ( v106 != 2 )
    {
LABEL_226:
      v110 = *(_DWORD *)(a1 + 20) | (unsigned int)(16 * *(_DWORD *)(a1 + 32));
      v111 = *(_DWORD *)(a1 + 24) | (unsigned int)(16 * *(_DWORD *)(a1 + 44));
      switch ( v101 )
      {
        case 4:
          if ( *(_DWORD *)(a1 + 48) )
            goto LABEL_271;
          return 0;
        case 5:
          v129 = *(_QWORD *)(a1 + 8);
          if ( *(_DWORD *)(a1 + 48) )
          {
            *(_WORD *)(v129 + 24) = 408;
LABEL_271:
            v113 = *(_QWORD *)(a1 + 8);
            if ( v108 == 4 )
            {
              if ( under_debugger )
                BUG();
              a1 = 10275;
              v107 = interr(10275);
              goto LABEL_319;
            }
            v114 = byte_8E210[v108];
            if ( v114 )
              goto LABEL_234;
          }
          else
          {
            v105 = 404;
            *(_WORD *)(v129 + 24) = 404;
            v113 = *(_QWORD *)(a1 + 8);
            if ( v108 == 4 )
            {
              while ( 2 )
              {
                v107 = sub_62620();
                do
                {
                  *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (v132 & 4) + 384;
LABEL_266:
                  v113 = *(_QWORD *)(a1 + 8);
                  if ( v108 != 4 )
                  {
                    v114 = byte_8E21C[v108];
                    if ( !v114 )
                      goto LABEL_245;
                    goto LABEL_234;
                  }
LABEL_287:
                  v107 = sub_62600(a1, v111, v113, v110);
LABEL_288:
                  if ( v105 )
                    return 0;
                  v132 = -(*(_DWORD *)(a1 + 40) == 0);
                }
                while ( *(_DWORD *)(a1 + 48) );
                *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (v132 & 8) + 399;
                v113 = *(_QWORD *)(a1 + 8);
                if ( v108 == 4 )
                  continue;
                break;
              }
            }
            v114 = byte_8E214[v108];
            if ( v114 )
            {
LABEL_234:
              *(_BYTE *)(v113 + 33) = v114 | 0x80;
              v113 = *(_QWORD *)(a1 + 8);
            }
          }
LABEL_245:
          v119 = v98[4 * v100 + 2];
          if ( v119 == 1 )
          {
LABEL_281:
            if ( (v110 & 1) != 0 )
              return 0;
            *(_BYTE *)(v113 + 41) = 1;
            *(_BYTE *)(v113 + 45) = 8;
            v119 = 1;
            *(_WORD *)(v113 + 46) = (int)v110 / 2 + 45;
            v130 = *(_QWORD *)(a1 + 8);
            *(_WORD *)(v130 + 86) = v111 + 61;
            *(_BYTE *)(v130 + 81) = 1;
            *(_BYTE *)(v130 + 85) = 7;
          }
          else
          {
            if ( v119 != 2 )
            {
              if ( *(_DWORD *)(a1 + 40) )
              {
                if ( (v110 & 1) != 0 )
                  return 0;
                v120 = 8;
                v121 = (int)v110 / 2 + 45;
              }
              else
              {
                v121 = v110 + 61;
                v120 = 7;
              }
              *(_WORD *)(v113 + 46) = v121;
              *(_BYTE *)(v113 + 41) = 1;
              *(_BYTE *)(v113 + 45) = v120;
              v122 = *(_QWORD *)(a1 + 8);
              if ( !*(_DWORD *)(a1 + 40) )
              {
                LOWORD(v111) = v111 + 61;
                v123 = 7;
                goto LABEL_253;
              }
              if ( (v111 & 1) == 0 )
              {
                LODWORD(v111) = (int)v111 / 2 + 45;
                v123 = 8;
LABEL_253:
                *(_WORD *)(v122 + 86) = v111;
                *(_BYTE *)(v122 + 81) = 1;
                *(_BYTE *)(v122 + 85) = v123;
                goto LABEL_254;
              }
              return 0;
            }
            *(_BYTE *)(v113 + 41) = 1;
            *(_WORD *)(v113 + 46) = v110 + 61;
            *(_BYTE *)(v113 + 45) = 7;
            if ( (v111 & 1) != 0 )
              return 0;
            v133 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v133 + 81) = 1;
            *(_BYTE *)(v133 + 85) = 8;
            *(_WORD *)(v133 + 86) = (int)v111 / 2 + 45;
          }
LABEL_254:
          v124 = *(_QWORD *)(a1 + 8);
          v125 = *(_BYTE *)(v124 + 33);
          v126 = *(_WORD *)(v124 + 24);
          if ( v125 >= 0 )
          {
            if ( v126 != 325 )
            {
              *(_BYTE *)(v124 + 85) = 7;
              v127 = 0;
              if ( v119 == 1 )
              {
LABEL_258:
                *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = v127;
LABEL_259:
                v128 = *(_QWORD *)(a1 + 8);
                if ( *(_WORD *)(v128 + 24) == 405 && !v107 )
                {
                  *(_WORD *)(v128 + 24) = 352;
                }
                else
                {
                  *(_BYTE *)(v128 + 121) = 5;
                  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 2;
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = v107;
                }
                return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
              }
LABEL_257:
              v127 = 7;
              goto LABEL_258;
            }
            goto LABEL_303;
          }
          v134 = v125 & 0x7F;
          v135 = v134 - 1;
          if ( v126 == 325 )
          {
            if ( v135 <= 0x14u )
            {
              v138 = byte_8DB20[v135];
              goto LABEL_304;
            }
LABEL_303:
            v138 = 7;
LABEL_304:
            *(_BYTE *)(v124 + 45) = v138;
            v139 = *(_QWORD *)(a1 + 8);
            v140 = 7;
            v141 = *(_BYTE *)(v139 + 72) - 1;
            if ( v141 <= 0x14u )
              v140 = byte_8DB20[v141];
            *(_BYTE *)(v139 + 85) = v140;
            goto LABEL_259;
          }
          if ( v135 <= 0x14u )
          {
            v127 = byte_8DB20[v135];
            *(_BYTE *)(v124 + 85) = v127;
            if ( v119 != 1 )
            {
              if ( v119 != 2 )
                goto LABEL_258;
LABEL_299:
              v136 = -1;
              goto LABEL_300;
            }
            goto LABEL_309;
          }
LABEL_319:
          *(_BYTE *)(v124 + 85) = 7;
          if ( v119 != 1 )
          {
            if ( v119 != 2 )
              goto LABEL_257;
            goto LABEL_299;
          }
LABEL_309:
          v136 = 1;
LABEL_300:
          v137 = v134 + v136 - 1;
          if ( v137 <= 0x14u )
          {
            v127 = byte_8DB20[v137];
            goto LABEL_258;
          }
          goto LABEL_257;
        case 6:
          v105 = *(_DWORD *)(a1 + 48);
          if ( v105 )
            goto LABEL_266;
          return 0;
        case 8:
          goto LABEL_288;
        case 9:
          if ( v105 )
            return 0;
          v131 = 387;
          if ( *(_DWORD *)(a1 + 40) )
            v131 = 383;
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v131;
          v112 = *(_DWORD *)(a1 + 48);
          v113 = *(_QWORD *)(a1 + 8);
          if ( v108 == 4 )
            goto LABEL_287;
LABEL_231:
          if ( v112 )
            v114 = byte_8E218[v108];
          else
            v114 = byte_8E21C[v108];
          if ( v114 )
            goto LABEL_234;
          goto LABEL_245;
        case 10:
          v105 |= *(_DWORD *)(a1 + 40);
          if ( v105 )
            return 0;
          v113 = *(_QWORD *)(a1 + 8);
          if ( v108 == 4 )
            goto LABEL_287;
          if ( *(_DWORD *)(a1 + 48) )
            v114 = byte_8E218[v108];
          else
            v114 = byte_8E21C[v108];
          if ( !v114 )
            goto LABEL_281;
          goto LABEL_234;
        case 12:
        case 13:
        case 14:
        case 15:
          if ( v105 )
            return 0;
          v115 = *(int *)(a1 + 48);
          v116 = 2LL * (v99 & 3);
          v117 = byte_8DF28[v116 + v115];
          v113 = *(_QWORD *)(a1 + 8);
          if ( v117 )
          {
            *(_BYTE *)(v113 + 33) = v117 | 0x80;
            v118 = byte_8DF20[v116 + v115];
            if ( v118 )
              *(_BYTE *)(v113 + 72) = v118;
            v113 = *(_QWORD *)(a1 + 8);
          }
          v107 = 64 - v104;
          goto LABEL_245;
        default:
          v112 = *(_DWORD *)(a1 + 48);
          v113 = *(_QWORD *)(a1 + 8);
          if ( v108 != 4 )
            goto LABEL_231;
          goto LABEL_287;
      }
    }
    ++v108;
LABEL_229:
    v107 = v109 - v107;
    goto LABEL_226;
  }
  if ( (~v142 & 0x300000) != 0 )
  {
    if ( (v142 & 0x40) != 0 )
      JUMPOUT(0x63350);
    return sub_63010(a1);
  }
  if ( !(_DWORD)a2 )
  {
    v144 = *(_DWORD *)(a1 + 44);
    v145 = *(_DWORD *)(a1 + 24);
    v146 = *(_QWORD *)(a1 + 8);
    v147 = *(_DWORD *)(a1 + 20) | (16 * *(_DWORD *)(a1 + 32));
    v148 = *(_DWORD *)(a1 + 16) | (16 * *(_DWORD *)(a1 + 36));
    if ( *(_DWORD *)(a1 + 40) )
    {
      if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
        return 0;
      v150 = 8;
      v149 = v147 / 2 + 45;
    }
    else
    {
      v149 = v147 + 61;
      v150 = 7;
    }
    *(_WORD *)(v146 + 46) = v149;
    *(_BYTE *)(v146 + 41) = 1;
    *(_BYTE *)(v146 + 45) = v150;
    v151 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 40) )
    {
      if ( (v148 & 1) != 0 )
        return 0;
      v152 = 8;
      v148 = v148 / 2 + 45;
    }
    else
    {
      LOWORD(v148) = v148 + 61;
      v152 = 7;
    }
    *(_WORD *)(v151 + 86) = v148;
    *(_BYTE *)(v151 + 81) = 1;
    *(_BYTE *)(v151 + 85) = v152;
    v153 = v145 | (16 * v144);
    v154 = *(_QWORD *)(a1 + 8);
    if ( !*(_DWORD *)(a1 + 40) )
    {
      v156 = v153 + 61;
      v155 = 7;
      goto LABEL_18;
    }
    if ( (v145 & 1) == 0 )
    {
      v155 = 8;
      v156 = v153 / 2 + 45;
LABEL_18:
      *(_WORD *)(v154 + 126) = v156;
      *(_BYTE *)(v154 + 121) = 1;
      *(_BYTE *)(v154 + 125) = v155;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = -127;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 161LL) = 5;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 165LL) = 2;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) = (*(_DWORD *)(a1 + 52) >> 8) & 0xF;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 332;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 0;
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    return 0;
  }
  if ( (v142 & 0x800) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 52);
    v7 = a1;
    v8 = BYTE2(v6) & 3;
    v9 = ((v6 >> 7) & 0xF) + 16LL * (HIWORD(v6) & 3);
    v10 = *((unsigned __int16 *)&unk_8DE20 + 2 * v9);
    if ( (_WORD)v10 )
    {
      v11 = *((_BYTE *)&unk_8DE20 + 4 * v9 + 2);
      v12 = *((char *)&unk_8DE20 + 4 * v9 + 3);
      v13 = (v6 >> 18) & 3;
      if ( *((char *)&unk_8DE20 + 4 * v9 + 3) < 0 )
      {
        if ( !((_DWORD)v13 + v12) )
        {
          v14 = *((_BYTE *)&unk_8DE20 + 4 * v9 + 2);
LABEL_51:
          v15 = *(_DWORD *)(v7 + 16);
          v16 = *(_DWORD *)(v7 + 36);
          v17 = *(_DWORD *)(v7 + 20) | (16 * *(_DWORD *)(v7 + 32));
          v18 = *(_DWORD *)(v7 + 24) | (16 * *(_DWORD *)(v7 + 44));
          *(_WORD *)(*(_QWORD *)(v7 + 8) + 24LL) = v10;
          if ( (unsigned __int16)v10 <= 0x1CAu )
          {
            if ( (unsigned __int16)v10 > 0x12Cu )
            {
              LOWORD(v10) = v10 - 301;
              switch ( v10 )
              {
                case 0LL:
                case 58LL:
                case 90LL:
                case 99LL:
                case 141LL:
                case 143LL:
                case 144LL:
                case 145LL:
                case 146LL:
                case 147LL:
                  if ( !v11 )
                    v14 = byte_8DE18[v13];
                  if ( !v14 )
                    return 0;
                  v27 = *(_QWORD *)(v7 + 8);
                  if ( *(_DWORD *)(v7 + 40) )
                  {
                    v24 = 0;
                    if ( (v17 & 1) != 0 )
                      goto LABEL_79;
                    v28 = 8;
                    v29 = v17 / 2 + 45;
                  }
                  else
                  {
                    v29 = v17 + 61;
                    v28 = 7;
                  }
                  *(_WORD *)(v27 + 46) = v29;
                  *(_BYTE *)(v27 + 41) = 1;
                  *(_BYTE *)(v27 + 45) = v28;
                  v27 = *(_QWORD *)(v7 + 8);
                  if ( *(_DWORD *)(v7 + 40) )
                  {
                    v24 = 0;
                    if ( (v18 & 1) != 0 )
                      goto LABEL_79;
                    v30 = 8;
                    v31 = v18 / 2 + 45;
                  }
                  else
                  {
                    LOWORD(v31) = v18 + 61;
                    v30 = 7;
                  }
                  *(_BYTE *)(v27 + 85) = v30;
                  v24 = 1;
                  *(_WORD *)(v27 + 86) = v31;
                  *(_BYTE *)(v27 + 81) = 1;
                  v27 = *(_QWORD *)(v7 + 8);
LABEL_79:
                  v32 = 7;
                  if ( (unsigned __int8)(v14 - 1) <= 0x14u )
                    v32 = byte_8DB20[(unsigned __int8)(v14 - 1)];
                  *(_BYTE *)(v27 + 85) = v32;
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = v32;
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 33LL) = v14 | 0x80;
                  goto LABEL_67;
                case 14LL:
                case 15LL:
                case 16LL:
                case 17LL:
                case 19LL:
                  if ( (*(_BYTE *)(v7 + 53) & 4) != 0 )
                  {
                    v33 = 9;
                    if ( _bittest64(&v33, v13) )
                      return 0;
                    *(_BYTE *)(*(_QWORD *)(v7 + 8) + 121LL) = 5;
                    if ( (_DWORD)v13 == 1 )
                    {
                      v19 = 18;
                      v34 = 18;
                      v14 = 19;
                    }
                    else
                    {
                      v19 = 19;
                      v34 = 3;
                      v14 = 20;
                    }
                  }
                  else
                  {
                    v19 = v14 - 1;
                    *(_BYTE *)(*(_QWORD *)(v7 + 8) + 121LL) = 5;
                    v34 = 7;
                    if ( (unsigned __int8)(v14 - 1) <= 0x14u )
                      v34 = byte_8DB20[v19];
                  }
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 125LL) = v34;
                  *(_QWORD *)(*(_QWORD *)(v7 + 8) + 128LL) = 0;
                  goto LABEL_58;
                case 24LL:
                  if ( v8 == 2 )
                  {
                    if ( !*(_DWORD *)(v7 + 40) )
                    {
                      v90 = *(_QWORD *)(v7 + 8);
                      if ( (*(_BYTE *)(v7 + 53) & 1) != 0 )
                      {
                        if ( (v17 & 1) != 0 )
                        {
                          *(_BYTE *)(v90 + 45) = 3;
                          *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = 18;
                          v95 = *(_QWORD *)(v7 + 8);
                          *(_BYTE *)(v95 + 33) = -108;
                          *(_BYTE *)(v95 + 72) = 19;
                          return 0;
                        }
                        *(_BYTE *)(v90 + 41) = 1;
                        *(_BYTE *)(v90 + 45) = 8;
                        *(_WORD *)(v90 + 46) = v17 / 2 + 45;
                        v91 = *(_QWORD *)(v7 + 8);
                        *(_BYTE *)(v91 + 85) = 7;
                        *(_WORD *)(v91 + 86) = v18 + 61;
                        *(_BYTE *)(v91 + 81) = 1;
                        *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = 3;
                        *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = 18;
                        v92 = *(_QWORD *)(v7 + 8);
                        *(_BYTE *)(v92 + 33) = -108;
                        *(_BYTE *)(v92 + 72) = 19;
                      }
                      else
                      {
                        *(_BYTE *)(v90 + 41) = 1;
                        *(_WORD *)(v90 + 46) = v17 + 61;
                        *(_BYTE *)(v90 + 45) = 7;
                        v93 = *(_QWORD *)(v7 + 8);
                        if ( (v18 & 1) != 0 )
                        {
                          *(_BYTE *)(v93 + 45) = 18;
                          *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = 3;
                          v96 = *(_QWORD *)(v7 + 8);
                          *(_BYTE *)(v96 + 33) = -109;
                          *(_BYTE *)(v96 + 72) = 20;
                          return 0;
                        }
                        *(_BYTE *)(v93 + 81) = 1;
                        *(_BYTE *)(v93 + 85) = 8;
                        *(_WORD *)(v93 + 86) = v18 / 2 + 45;
                        *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = 18;
                        *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = 3;
                        v94 = *(_QWORD *)(v7 + 8);
                        *(_BYTE *)(v94 + 33) = -109;
                        *(_BYTE *)(v94 + 72) = 20;
                      }
                      return *(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 26LL);
                    }
                    return 0;
                  }
                  v66 = 9;
                  if ( _bittest64(&v66, v13) )
                    return 0;
                  v67 = (*(_DWORD *)(v7 + 52) >> 7) & 3;
                  if ( (_DWORD)v13 == 1 )
                  {
                    v68 = byte_8DE08[2 * v67];
                    v69 = byte_8DE08[2 * v67 + 1];
                  }
                  else
                  {
                    v68 = byte_8DE10[2 * v67];
                    v69 = byte_8DE10[2 * v67 + 1];
                  }
                  v70 = *(_QWORD *)(v7 + 8);
                  if ( *(_DWORD *)(v7 + 40) )
                  {
                    v24 = 0;
                    if ( (v17 & 1) != 0 )
                      goto LABEL_138;
                    v71 = 8;
                    v72 = v17 / 2 + 45;
                  }
                  else
                  {
                    v72 = v17 + 61;
                    v71 = 7;
                  }
                  *(_WORD *)(v70 + 46) = v72;
                  *(_BYTE *)(v70 + 41) = 1;
                  *(_BYTE *)(v70 + 45) = v71;
                  v70 = *(_QWORD *)(v7 + 8);
                  if ( *(_DWORD *)(v7 + 40) )
                  {
                    v24 = 0;
                    if ( (v18 & 1) != 0 )
                      goto LABEL_138;
                    v73 = 8;
                    v74 = v18 / 2 + 45;
                  }
                  else
                  {
                    LOWORD(v74) = v18 + 61;
                    v73 = 7;
                  }
                  *(_BYTE *)(v70 + 85) = v73;
                  v24 = 1;
                  *(_WORD *)(v70 + 86) = v74;
                  *(_BYTE *)(v70 + 81) = 1;
                  v70 = *(_QWORD *)(v7 + 8);
LABEL_138:
                  v75 = v69 - 1;
                  if ( (unsigned __int8)(v68 - 1) > 0x14u )
                  {
                    *(_BYTE *)(v70 + 45) = 7;
                    if ( v75 <= 0x14u )
                    {
                      *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = byte_8DB20[v75];
                      if ( v68 )
                        goto LABEL_141;
LABEL_67:
                      if ( v24 )
                        return *(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 26LL);
                      return 0;
                    }
                    *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = 7;
                    if ( !v68 )
                      goto LABEL_67;
                    v77 = *(_QWORD *)(v7 + 8);
                  }
                  else
                  {
                    *(_BYTE *)(v70 + 45) = byte_8DB20[(unsigned __int8)(v68 - 1)];
                    v76 = *(_QWORD *)(v7 + 8);
                    if ( v75 <= 0x14u )
                    {
                      *(_BYTE *)(v76 + 85) = byte_8DB20[v75];
LABEL_141:
                      v77 = *(_QWORD *)(v7 + 8);
                      *(_BYTE *)(v77 + 33) = v68 | 0x80;
LABEL_142:
                      *(_BYTE *)(v77 + 72) = v69;
                      goto LABEL_67;
                    }
                    *(_BYTE *)(v76 + 85) = 7;
                    v77 = *(_QWORD *)(v7 + 8);
                  }
                  *(_BYTE *)(v77 + 33) = v68 | 0x80;
                  if ( v69 )
                    goto LABEL_142;
                  goto LABEL_67;
                case 52LL:
                  v61 = *(_QWORD *)(v7 + 8);
                  v62 = v17 + 61;
                  if ( *(_DWORD *)(v7 + 40) )
                  {
                    *(_WORD *)(v61 + 24) = 379;
                    v63 = *(_QWORD *)(v7 + 8);
                    v64 = v13 + 6;
                    *(_WORD *)(v63 + 46) = v62;
                    *(_BYTE *)(v63 + 41) = 1;
                    *(_BYTE *)(v63 + 45) = 7;
                    v65 = *(_QWORD *)(v7 + 8);
                    if ( (v18 & 1) != 0 )
                    {
                      v59 = v13 + 5;
                      *(_BYTE *)(v65 + 33) = v64 | 0x80;
                      *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = byte_8DB20[(unsigned __int8)(v13 + 4)];
                      v24 = 0;
                    }
                    else
                    {
                      *(_BYTE *)(v65 + 81) = 1;
                      v59 = v13 + 5;
                      *(_BYTE *)(v65 + 85) = 8;
                      *(_WORD *)(v65 + 86) = v18 / 2 + 45;
                      *(_BYTE *)(*(_QWORD *)(v7 + 8) + 33LL) = v64 | 0x80;
                      *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = byte_8DB20[(unsigned __int8)(v13 + 4)];
                      v24 = 1;
                    }
                    goto LABEL_120;
                  }
                  *(_WORD *)(v61 + 46) = v62;
                  *(_BYTE *)(v61 + 41) = 1;
                  *(_BYTE *)(v61 + 45) = 7;
                  v24 = 0;
                  v88 = *(_QWORD *)(v7 + 8);
                  if ( (v18 & 1) == 0 )
                    goto LABEL_173;
                  goto LABEL_174;
                case 77LL:
                  v55 = *(_QWORD *)(v7 + 8);
                  v56 = v17 + 61;
                  if ( *(_DWORD *)(v7 + 40) )
                  {
                    *(_WORD *)(v55 + 46) = v56;
                    v57 = v13 + 10;
                    *(_BYTE *)(v55 + 41) = 1;
                    *(_BYTE *)(v55 + 45) = 7;
                    v58 = *(_QWORD *)(v7 + 8);
                    if ( (v18 & 1) != 0 )
                    {
                      v59 = v13 + 9;
                      *(_BYTE *)(v58 + 33) = v57 | 0x80;
                      *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = byte_8DB20[(unsigned __int8)(v13 + 8)];
                      v24 = 0;
                    }
                    else
                    {
                      *(_BYTE *)(v58 + 81) = 1;
                      v59 = v13 + 9;
                      *(_BYTE *)(v58 + 85) = 8;
                      *(_WORD *)(v58 + 86) = v18 / 2 + 45;
                      *(_BYTE *)(*(_QWORD *)(v7 + 8) + 33LL) = v57 | 0x80;
                      *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = byte_8DB20[(unsigned __int8)(v13 + 8)];
                      v24 = 1;
                    }
LABEL_120:
                    v60 = byte_8DB20[v59];
                    goto LABEL_121;
                  }
                  *(_WORD *)(v55 + 46) = v56;
                  *(_BYTE *)(v55 + 41) = 1;
                  *(_BYTE *)(v55 + 45) = 7;
                  v24 = 0;
                  v88 = *(_QWORD *)(v7 + 8);
                  if ( (v18 & 1) == 0 )
                  {
LABEL_173:
                    *(_BYTE *)(v88 + 81) = 1;
                    v24 = 1;
                    *(_BYTE *)(v88 + 85) = 8;
                    *(_WORD *)(v88 + 86) = v18 / 2 + 45;
                    v88 = *(_QWORD *)(v7 + 8);
                  }
LABEL_174:
                  if ( v14 )
                  {
                    *(_BYTE *)(v88 + 33) = v14 | 0x80;
                    if ( (unsigned __int8)(v14 - 2) <= 0x14u )
                      v89 = byte_8DB20[(unsigned __int8)(v14 - 2)];
                    else
                      v89 = 7;
                    v59 = v14 - 1;
                    *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = v89;
                    if ( v59 <= 0x14u )
                      goto LABEL_120;
                  }
                  else
                  {
                    *(_BYTE *)(v88 + 45) = 7;
                  }
                  v60 = 7;
LABEL_121:
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = v60;
                  goto LABEL_67;
                case 104LL:
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 121LL) = 5;
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 125LL) = 0;
                  *(_QWORD *)(*(_QWORD *)(v7 + 8) + 128LL) = 8 << v13;
                  v24 = 0;
                  v52 = *(_QWORD *)(v7 + 8);
                  if ( (v17 & 1) == 0 )
                  {
                    *(_BYTE *)(v52 + 41) = 1;
                    v24 = 1;
                    *(_BYTE *)(v52 + 45) = 8;
                    *(_WORD *)(v52 + 46) = v17 / 2 + 45;
                    v53 = *(_QWORD *)(v7 + 8);
                    *(_WORD *)(v53 + 86) = v18 + 61;
                    *(_BYTE *)(v53 + 81) = 1;
                    *(_BYTE *)(v53 + 85) = 7;
                    v52 = *(_QWORD *)(v7 + 8);
                  }
                  v54 = v14 - 1;
                  if ( v14 <= 0x14u )
                  {
                    *(_BYTE *)(v52 + 45) = byte_8DB20[v14];
                    if ( v54 > 0x14u )
                    {
                      *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = 7;
                      goto LABEL_67;
                    }
LABEL_116:
                    *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = byte_8DB20[v54];
                    v26 = *(_QWORD *)(v7 + 8);
                    break;
                  }
                  *(_BYTE *)(v52 + 45) = 7;
                  if ( v14 == 21 )
                    goto LABEL_116;
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = 7;
                  v26 = *(_QWORD *)(v7 + 8);
                  break;
                case 137LL:
                case 138LL:
                case 139LL:
                case 140LL:
                  v35 = (*(_DWORD *)(v7 + 52) >> 7) & 1;
                  if ( (_DWORD)v13 == 1 )
                  {
                    v38 = 1;
                    v36 = 19;
                    v39 = v35 == 0 ? -122 : -118;
                  }
                  else
                  {
                    v36 = byte_8DE18[v13];
                    v37 = v35 == 0 ? 7 : 11;
                    if ( !v36 )
                      return 0;
                    v38 = byte_8DB20[(unsigned __int8)(v37 - 1)];
                    v39 = v37 | 0x80;
                  }
                  v40 = *(_QWORD *)(v7 + 8);
                  if ( *(_DWORD *)(v7 + 40) )
                  {
                    v24 = 0;
                    if ( (v17 & 1) != 0 )
                      goto LABEL_97;
                    v41 = 8;
                    v42 = v17 / 2 + 45;
                  }
                  else
                  {
                    v42 = v17 + 61;
                    v41 = 7;
                  }
                  *(_WORD *)(v40 + 46) = v42;
                  *(_BYTE *)(v40 + 41) = 1;
                  *(_BYTE *)(v40 + 45) = v41;
                  v40 = *(_QWORD *)(v7 + 8);
                  if ( *(_DWORD *)(v7 + 40) )
                  {
                    v24 = 0;
                    if ( (v18 & 1) != 0 )
                      goto LABEL_97;
                    v43 = 8;
                    v44 = v18 / 2 + 45;
                  }
                  else
                  {
                    LOWORD(v44) = v18 + 61;
                    v43 = 7;
                  }
                  *(_BYTE *)(v40 + 85) = v43;
                  v24 = 1;
                  *(_WORD *)(v40 + 86) = v44;
                  *(_BYTE *)(v40 + 81) = 1;
                  v40 = *(_QWORD *)(v7 + 8);
LABEL_97:
                  *(_BYTE *)(v40 + 45) = v38;
                  v45 = 7;
                  if ( (unsigned __int8)(v36 - 1) <= 0x14u )
                    v45 = byte_8DB20[(unsigned __int8)(v36 - 1)];
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = v45;
                  v46 = *(_QWORD *)(v7 + 8);
                  *(_BYTE *)(v46 + 33) = v39;
                  *(_BYTE *)(v46 + 72) = v36;
                  goto LABEL_67;
                case 149LL:
                  if ( *(_DWORD *)(v7 + 40) )
                    *(_WORD *)(*(_QWORD *)(v7 + 8) + 24LL) = 449;
                  goto LABEL_102;
                case 151LL:
                  if ( *(_DWORD *)(v7 + 40) )
                    *(_WORD *)(*(_QWORD *)(v7 + 8) + 24LL) = 451;
                  goto LABEL_102;
                case 155LL:
                  if ( *(_DWORD *)(v7 + 40) )
                    goto LABEL_102;
                  return 0;
                case 157LL:
                  if ( *(_DWORD *)(v7 + 40) )
                    *(_WORD *)(*(_QWORD *)(v7 + 8) + 24LL) = 461;
LABEL_102:
                  v47 = *(_QWORD *)(v7 + 8);
                  v48 = 0;
                  if ( (v17 & 1) == 0 )
                  {
                    *(_BYTE *)(v47 + 41) = 1;
                    *(_BYTE *)(v47 + 45) = 8;
                    *(_WORD *)(v47 + 46) = v17 / 2 + 45;
                    v47 = *(_QWORD *)(v7 + 8);
                    if ( (v18 & 1) == 0 )
                    {
                      *(_BYTE *)(v47 + 81) = 1;
                      v48 = 1;
                      *(_BYTE *)(v47 + 85) = 8;
                      *(_WORD *)(v47 + 86) = v18 / 2 + 45;
                      v47 = *(_QWORD *)(v7 + 8);
                    }
                  }
                  v49 = 7;
                  if ( v14 )
                  {
                    v50 = v14;
                    v51 = v14 - 1;
                    *(_BYTE *)(v47 + 33) = v50 | 0x80;
                    v47 = *(_QWORD *)(v7 + 8);
                    if ( v51 <= 0x14u )
                      v49 = byte_8DB20[v51];
                  }
                  *(_BYTE *)(v47 + 85) = v49;
                  *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = v49;
                  if ( !v48 )
                    return 0;
                  return *(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 26LL);
                default:
                  goto LABEL_57;
              }
LABEL_66:
              *(_BYTE *)(v26 + 33) = v14 | 0x80;
              goto LABEL_67;
            }
LABEL_57:
            v19 = v14 - 1;
LABEL_58:
            v20 = *(_QWORD *)(v7 + 8);
            if ( *(_DWORD *)(v7 + 40) )
            {
              if ( (v17 & 1) != 0 )
                goto LABEL_164;
              v21 = 8;
              v22 = v17 / 2 + 45;
            }
            else
            {
              v22 = v17 + 61;
              v21 = 7;
            }
            *(_WORD *)(v20 + 46) = v22;
            *(_BYTE *)(v20 + 41) = 1;
            *(_BYTE *)(v20 + 45) = v21;
            v20 = *(_QWORD *)(v7 + 8);
            if ( !*(_DWORD *)(v7 + 40) )
            {
              LOWORD(v18) = v18 + 61;
              v23 = 7;
              goto LABEL_64;
            }
            if ( (v18 & 1) == 0 )
            {
              v18 = v18 / 2 + 45;
              v23 = 8;
LABEL_64:
              *(_WORD *)(v20 + 86) = v18;
              v24 = 1;
              *(_BYTE *)(v20 + 81) = 1;
              *(_BYTE *)(v20 + 85) = v23;
              v20 = *(_QWORD *)(v7 + 8);
              if ( v19 <= 0x14u )
              {
LABEL_65:
                v25 = byte_8DB20[v19];
                *(_BYTE *)(v20 + 85) = v25;
                *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = v25;
                v26 = *(_QWORD *)(v7 + 8);
                goto LABEL_66;
              }
              *(_BYTE *)(v20 + 85) = 7;
              *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = 7;
              if ( !v14 )
                return *(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 26LL);
LABEL_167:
              v26 = *(_QWORD *)(v7 + 8);
              goto LABEL_66;
            }
LABEL_164:
            v24 = 0;
            if ( v19 <= 0x14u )
              goto LABEL_65;
            *(_BYTE *)(v20 + 85) = 7;
            *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = 7;
            if ( !v14 )
              return 0;
            v24 = 0;
            goto LABEL_167;
          }
          if ( (unsigned __int16)(v10 - 881) > 1u )
            goto LABEL_57;
          v78 = *(_QWORD *)(v7 + 8);
          if ( *(_DWORD *)(v7 + 40) )
          {
            v24 = 0;
            if ( (v17 & 1) != 0 )
              goto LABEL_156;
            v79 = 8;
            v80 = v17 / 2 + 45;
          }
          else
          {
            v80 = v17 + 61;
            v79 = 7;
          }
          *(_WORD *)(v78 + 46) = v80;
          *(_BYTE *)(v78 + 41) = 1;
          *(_BYTE *)(v78 + 45) = v79;
          v78 = *(_QWORD *)(v7 + 8);
          if ( *(_DWORD *)(v7 + 40) )
          {
            v24 = 0;
            if ( (v18 & 1) != 0 )
              goto LABEL_156;
            v81 = 8;
            v82 = v18 / 2 + 45;
          }
          else
          {
            LOWORD(v82) = v18 + 61;
            v81 = 7;
          }
          *(_WORD *)(v78 + 86) = v82;
          *(_BYTE *)(v78 + 81) = 1;
          v83 = v15 | (16 * v16);
          *(_BYTE *)(v78 + 85) = v81;
          v78 = *(_QWORD *)(v7 + 8);
          if ( !*(_DWORD *)(v7 + 40) )
          {
            LOWORD(v83) = v83 + 61;
            v84 = 7;
            goto LABEL_155;
          }
          v24 = 0;
          if ( (v83 & 1) == 0 )
          {
            v83 = v83 / 2 + 45;
            v84 = 8;
LABEL_155:
            *(_WORD *)(v78 + 126) = v83;
            v24 = 1;
            *(_BYTE *)(v78 + 121) = 1;
            *(_BYTE *)(v78 + 125) = v84;
            v78 = *(_QWORD *)(v7 + 8);
          }
LABEL_156:
          v85 = v14 - 1;
          v86 = 7;
          if ( v85 <= 0x14u )
            v86 = byte_8DB20[v85];
          *(_BYTE *)(v78 + 125) = v86;
          *(_BYTE *)(*(_QWORD *)(v7 + 8) + 85LL) = v86;
          *(_BYTE *)(*(_QWORD *)(v7 + 8) + 45LL) = v86;
          if ( *(_DWORD *)(v7 + 48) )
            v87 = byte_8E218[v13];
          else
            v87 = byte_8E21C[v13];
          if ( v87 )
            *(_BYTE *)(*(_QWORD *)(v7 + 8) + 33LL) = v87 | 0x80;
          goto LABEL_67;
        }
      }
      else
      {
        v14 = v11 + v13;
        if ( (int)v13 <= v12 )
          goto LABEL_51;
      }
    }
    return 0;
  }
  if ( (v142 & 0x400) != 0 )
  {
    if ( (v142 & 0x380) != 0 )
      return 0;
    v157 = *(_DWORD *)(a1 + 16);
    if ( (v157 & 1) != 0 )
    {
      v158 = 1;
      v159 = (v157 >> 1) & 7;
    }
    else if ( (v157 & 2) != 0 )
    {
      v158 = 2;
      v159 = (v157 >> 2) & 3;
    }
    else
    {
      if ( (v157 & 4) == 0 )
        return 0;
      v158 = 3;
      v159 = (*(_DWORD *)(a1 + 16) & 8) != 0;
    }
    v160 = *(_QWORD *)(a1 + 8);
    v161 = *(_DWORD *)(a1 + 20) | (16 * *(_DWORD *)(a1 + 32));
    if ( *(_DWORD *)(a1 + 40) )
    {
      if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
        return 0;
      v162 = 8;
      v163 = v161 / 2 + 45;
    }
    else
    {
      v163 = v161 + 61;
      v162 = 7;
    }
    *(_WORD *)(v160 + 46) = v163;
    *(_BYTE *)(v160 + 41) = 1;
    *(_BYTE *)(v160 + 45) = v162;
    v164 = *(_DWORD *)(a1 + 44);
    v165 = *(_QWORD *)(a1 + 8);
    v166 = *(_DWORD *)(a1 + 24);
    *(_BYTE *)(v165 + 81) = 12;
    if ( v164 == 2 )
      v167 = v166 + 45;
    else
      v167 = (v166 | (16 * v164)) + 61;
    *(_WORD *)(v165 + 86) = v167;
    *(_BYTE *)(v165 + 114) = v159 + 1;
    *(_QWORD *)(v165 + 88) = 0;
    *(_BYTE *)(v165 + 113) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 330;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v158 | 0x80;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = byte_8DB20[(unsigned __int8)(v158 - 1)];
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL);
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
  else
  {
    v168 = 423;
    if ( *(_DWORD *)(a1 + 40) )
      v168 = 424;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v168;
    v169 = *(_QWORD *)(a1 + 8);
    v170 = *(_DWORD *)(a1 + 52);
    v171 = (*(_WORD *)(a1 + 20) | (16 * *(_WORD *)(a1 + 32))) + 61;
    *(_BYTE *)(v169 + 41) = 1;
    *(_WORD *)(v169 + 46) = v171;
    *(_BYTE *)(v169 + 45) = 7;
    v172 = ((v170 >> 8) & 3) + 1;
    v173 = *(_QWORD *)(a1 + 8);
    v174 = (*(_WORD *)(a1 + 24) | (16 * *(_WORD *)(a1 + 44))) + 61;
    *(_BYTE *)(v173 + 121) = 1;
    *(_WORD *)(v173 + 126) = v174;
    *(_BYTE *)(v173 + 125) = 7;
    v175 = *(_DWORD *)(a1 + 36);
    v176 = *(_QWORD *)(a1 + 8);
    v177 = *(_DWORD *)(a1 + 16);
    *(_BYTE *)(v176 + 81) = 12;
    if ( v175 == 2 )
      v178 = v177 + 45;
    else
      v178 = (v177 | (16 * v175)) + 61;
    *(_WORD *)(v176 + 86) = v178;
    *(_QWORD *)(v176 + 88) = v172;
    *(_WORD *)(v176 + 113) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = -127;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 0;
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
}
