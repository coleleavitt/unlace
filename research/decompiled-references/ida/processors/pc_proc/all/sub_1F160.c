__int64 __fastcall sub_1F160(__int64 a1, char **a2, int a3, unsigned __int8 a4, unsigned __int8 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // edi
  __int16 v11; // r14
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // ax
  unsigned __int8 v14; // al
  unsigned int v15; // r9d
  __int16 v17; // cx
  unsigned __int16 v18; // r14
  unsigned __int8 v19; // dl
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r13
  __int16 v23; // dx
  __int64 v24; // r15
  __int16 v25; // ax
  bool v26; // cl
  __int64 v27; // rax
  signed int v28; // r13d
  char **v29; // r15
  char v30; // bp
  __int64 i; // r14
  int v32; // eax
  char v33; // dl
  __int16 v34; // ax
  __int16 v35; // ax
  unsigned int v36; // eax
  unsigned int v37; // ecx
  char *v38; // rax
  char v39; // dl
  char *v40; // rax
  int v41; // eax
  char *v42; // rdx
  __int16 v43; // ax
  char v44; // dl
  __int64 v45; // rax
  unsigned __int8 v46; // di
  int v47; // ebp
  char *v48; // rax
  int v49; // ebx
  char v50; // dl
  char *v51; // rax
  bool v52; // zf
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int v56; // eax
  char v57; // cl
  __int16 v58; // ax
  char v59; // al
  unsigned __int64 v60; // rax
  __int64 v61; // rsi
  int v62; // eax
  char *v63; // r11
  __int16 v64; // ax
  char v65; // al
  char v66; // al
  char *v67; // rax
  char *v68; // rax
  char *v69; // rax
  unsigned __int8 v70; // dl
  char *v71; // rax
  char *v72; // rax
  char *v73; // rdx
  char v74; // al
  char v75; // al
  char *v76; // rsi
  int v77; // eax
  char *v78; // rax
  char *v79; // rax
  unsigned __int8 v80; // cl
  char *v81; // rdi
  const char *v82; // rsi
  char *v83; // rax
  char *v84; // rax
  char *v85; // rdx
  unsigned int v86; // eax
  int v87; // eax
  int v88; // ecx
  __int64 v89; // rsi
  int v90; // edx
  unsigned __int8 v91; // si
  unsigned __int8 v92; // di
  int v93; // eax
  char v94; // r8
  int v95; // ecx
  unsigned int v96; // eax
  int v97; // ecx
  char *v98; // rdi
  const char *v99; // rsi
  char *v100; // rdx
  char v101; // cl
  char v102; // dl
  unsigned __int8 v103; // al
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  int v107; // r9d
  int v108; // eax
  unsigned int v109; // r9d
  char *v110; // rdi
  unsigned int v111; // eax
  __int64 v112; // r11
  __int64 v113; // r9
  char v114; // al
  int v115; // r10d
  char v116; // al
  unsigned int v117; // edx
  char *v118; // r11
  int v119; // eax
  int v120; // eax
  int v121; // eax
  char v122; // cl
  char v123; // dl
  char v124; // cl
  int v125; // eax
  int v126; // eax
  char *v127; // rsi
  char v128; // cl
  char *v129; // rsi
  char *v130; // rax
  const char *v131; // rdi
  char *v132; // rax
  char v133; // cl
  char *v134; // rdx
  int v135; // edx
  char v136; // cl
  int v137; // edx
  char *v138; // rcx
  char v139; // si
  char v140; // dl
  const char *v141; // rsi
  char *v142; // rdx
  char *v143; // rax
  char v144; // dl
  int v145; // ecx
  char v146; // si
  char *v147; // rdx
  char *v148; // rax
  int v149; // edi
  char *v150; // rdx
  int v151; // edx
  char *v152; // r8
  char v153; // si
  char *v154; // r8
  const char *v155; // rsi
  char v156; // cl
  char *v157; // rdx
  char v158; // r9
  char v159; // si
  char v160; // r9
  char v161; // r8
  char *v162; // rax
  int v163; // ecx
  char v164; // si
  int v165; // eax
  char **v166; // r10
  __int64 v167; // r15
  char v168; // al
  char *v169; // rax
  __int64 v170; // r13
  unsigned __int8 v171; // cl
  char v172; // r11
  int v173; // eax
  __int16 v174; // di
  unsigned __int8 v175; // al
  int v176; // edx
  char v177; // si
  int v178; // ecx
  char v179; // si
  char **v180; // [rsp+0h] [rbp-C8h]
  __int64 v181; // [rsp+0h] [rbp-C8h]
  int v182; // [rsp+Ch] [rbp-BCh]
  char *v183; // [rsp+18h] [rbp-B0h]
  unsigned int v185; // [rsp+28h] [rbp-A0h]
  unsigned __int8 v186; // [rsp+28h] [rbp-A0h]
  signed int v187; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int8 v188; // [rsp+38h] [rbp-90h]
  unsigned int v189; // [rsp+38h] [rbp-90h]
  unsigned int v190; // [rsp+38h] [rbp-90h]
  int v191; // [rsp+38h] [rbp-90h]
  unsigned int v192; // [rsp+40h] [rbp-88h]
  unsigned __int8 v194; // [rsp+46h] [rbp-82h]
  int v197; // [rsp+5Ch] [rbp-6Ch]
  unsigned __int8 v198; // [rsp+6Ah] [rbp-5Eh] BYREF
  unsigned __int8 v199; // [rsp+6Bh] [rbp-5Dh] BYREF
  int v200; // [rsp+6Ch] [rbp-5Ch] BYREF
  char *v201; // [rsp+70h] [rbp-58h] BYREF
  __int64 v202; // [rsp+78h] [rbp-50h] BYREF
  _QWORD v203[9]; // [rsp+80h] [rbp-48h] BYREF

  v7 = *(unsigned __int8 *)(a6 + 17);
  v203[1] = __readfsqword(0x28u);
  v185 = 0;
  v8 = (__int64)*(&off_180A00 + a3);
  v9 = a6;
LABEL_7:
  while ( 2 )
  {
    v13 = *(_WORD *)v8 & 0x1FF;
    if ( v13 == 511 )
    {
      v14 = *(_BYTE *)(v8 + 1);
      v8 += 4;
      v7 += v14 >> 1;
      *(_BYTE *)(v9 + 17) = v7;
      if ( ((unsigned __int8)v7 & a4) != 0 )
        continue;
      return (unsigned int)-1;
    }
    break;
  }
  v10 = (*(_BYTE *)(v8 + 2) >> 3) & 7;
  if ( v13 > 0x1FBu )
  {
    v7 += (unsigned __int8)(byte_94031[v10] + byte_9402C[v10]);
    *(_BYTE *)(v9 + 17) = v7;
    goto LABEL_6;
  }
  v11 = *(char *)(v9 + 19);
  v12 = 4 * ((unsigned __int8)v7 + (v11 & 0x100)) + 3;
  if ( v13 == 506 )
  {
    v18 = *(_WORD *)(v9 + 40);
    if ( v12 >= v18 )
    {
      *(_BYTE *)(v9 + 16) = v7;
      *(_BYTE *)(v9 + 17) = 0;
      *(_WORD *)(v9 + 40) = v18 & 3;
      v180 = a2;
      v19 = *(_BYTE *)(v8 + 1) >> 1;
      v199 = v7;
      v20 = sub_1F160(a1, a2, v19, 7, a5, v9);
      *(_WORD *)(v9 + 40) = v18;
      a2 = v180;
      v200 = v20;
      if ( v20 != -1 )
      {
        v15 = v20;
        v21 = v9;
        v22 = v8;
        *(_BYTE *)(v21 + 18) |= 1u;
        v23 = *(_WORD *)(v21 + 42);
        v24 = v21;
        if ( (*(_BYTE *)(v22 + 3) & 8) != 0 || (v25 = *(_WORD *)(v21 + 42) & 3, (v23 & 3) != 0) )
          v25 = v23 + 4 * ((unsigned __int8)v7 + (*(char *)(v24 + 19) & 0x100));
        *(_WORD *)(v24 + 42) = v25;
        return v15;
      }
    }
LABEL_5:
    *(_BYTE *)(v9 + 17) = ++v7;
    goto LABEL_6;
  }
  if ( v13 == 507 )
    goto LABEL_5;
  v17 = (*(_WORD *)(v8 + 2) >> 6) & 0xF;
  if ( ((*(_WORD *)(v8 + 2) >> 6) & 0xFu) <= 8 )
  {
    v26 = a5 >= (unsigned __int8)v17;
  }
  else if ( (_BYTE)v17 == 14 )
  {
    v26 = a5 == 3;
  }
  else
  {
    if ( (_BYTE)v17 != 15 )
    {
      if ( (_BYTE)v17 != 13 || a5 != 6 && a5 <= 7u )
      {
LABEL_19:
        LOBYTE(v7) = byte_9402C[v10] + (byte_94031[v10] | v7);
        *(_BYTE *)(v9 + 17) = v7;
        goto LABEL_6;
      }
      goto LABEL_17;
    }
    v26 = a5 == 2;
  }
  if ( !v26 )
    goto LABEL_19;
LABEL_17:
  v194 = *(_BYTE *)(v8 + 1) >> 1;
  if ( v194 != 2 && v12 < *(_WORD *)(v9 + 40) )
    goto LABEL_19;
  if ( a4 == 7 )
  {
    v12 = 3;
  }
  else if ( (v11 & 0x10) != 0 )
  {
    v12 = 3;
  }
  *(_WORD *)(v9 + 42) = v12;
  v187 = v13;
  v27 = v9;
  v181 = v8;
  v28 = v187;
  v29 = a2;
  v30 = v11;
  v182 = v10;
  for ( i = v27; ; v30 = *(_BYTE *)(i + 19) )
  {
    v33 = *(_BYTE *)(i + 46);
    v201 = *v29;
    v34 = *(_WORD *)(i + 44);
    *(_BYTE *)(i + 21) = v33;
    v35 = v34 & 0x100;
    *(_BYTE *)(i + 19) = v30 & 0x97;
    *(_WORD *)(i + 44) = v35;
    if ( a4 != 7 && (v30 & 0x10) == 0 )
      *(_BYTE *)(i + 16) = *(_BYTE *)(i + 17);
    if ( v194 > 0x56u )
    {
      HIBYTE(v35) |= 2u;
      *(_WORD *)(i + 44) = v35;
    }
    if ( v28 != 45 )
    {
      v36 = sub_1D9C0(&v201, v28, *(_BYTE *)(v181 + 2) & 7, i);
      if ( v36 )
        break;
    }
    v7 = *(unsigned __int8 *)(i + 17);
    v32 = byte_94031[v182];
    if ( (*(_BYTE *)(v181 + 3) & 4) != 0 )
      v7 = v32 | *(unsigned __int8 *)(i + 17);
    v28 += 2;
    LOBYTE(v7) = byte_9402C[v182] + v7;
    *(_BYTE *)(i + 17) = v7;
LABEL_36:
    if ( ((unsigned __int8)v7 & (unsigned __int8)v32) == 0 )
    {
      a2 = v29;
      v9 = i;
      v8 = v181;
LABEL_6:
      v8 += 4;
      if ( ((unsigned __int8)v7 & a4) == 0 )
        return (unsigned int)-1;
      goto LABEL_7;
    }
  }
  if ( v194 == 2 )
  {
    v166 = v29;
    v167 = i;
    v15 = v36;
    v168 = *(_BYTE *)(i + 17);
    if ( v168 == -16 )
    {
      if ( (v30 & 1) == 0 )
      {
        *(_BYTE *)(i + 19) = v30 & 0x96 | 1;
        goto LABEL_366;
      }
    }
    else
    {
      if ( (unsigned __int8)(v168 + 14) > 1u )
      {
LABEL_366:
        v169 = v201;
        *(_WORD *)(i + 42) = 0;
        *v166 = v169;
        return v15;
      }
      if ( (v30 & 6) == 0 )
      {
        *(_BYTE *)(i + 19) = (2 << (v168 & 1)) | v30 & 0x97;
        goto LABEL_366;
      }
    }
    v173 = -5;
LABEL_373:
    *(_DWORD *)(v167 + 24) = v173;
    return (unsigned int)-1;
  }
  v183 = v201;
  if ( v187 == 234 )
    *(_WORD *)(i + 44) |= 0x80u;
  LOBYTE(v7) = *(_BYTE *)(i + 17);
  v28 = v194;
  v192 = v36;
  v37 = v185;
LABEL_49:
  *(_WORD *)(i + 42) |= 3u;
  v198 = v7;
  v201 = v183;
  if ( v28 <= 2 )
    goto LABEL_50;
  v44 = *(_BYTE *)(i + 19);
  *(_BYTE *)(i + 20) = 0;
  *(_QWORD *)(i + 8) = 0;
  *(_BYTE *)(i + 18) = 0;
  *(_BYTE *)(i + 19) = v44 & 0x97;
  if ( a4 == 7 )
    v198 = 8 * v7;
  v45 = v28 - 3;
  if ( (*((_BYTE *)&unk_93B60 + 4 * v45 + 2) & 0x20) != 0 )
  {
    v46 = v198;
    *(_BYTE *)(i + 18) = 1;
    v198 = 0;
    *(_BYTE *)(i + 16) = v46;
  }
  v47 = *((unsigned __int16 *)&unk_93B60 + 2 * v45);
  v186 = v44 & 0x10 | *((_BYTE *)&unk_93B60 + 4 * v45 + 2) & 0xF;
  if ( !(_WORD)v47 )
  {
    if ( !v37 )
      goto LABEL_123;
LABEL_50:
    v38 = v183;
    goto LABEL_51;
  }
  v48 = v183;
  v49 = 0;
LABEL_72:
  v50 = *v48;
  if ( *v48 == 32 || v50 == 9 )
  {
    v51 = v48 + 1;
    do
    {
      do
      {
        v201 = v51;
        v50 = *v51++;
      }
      while ( v50 == 32 );
    }
    while ( v50 == 9 );
  }
  if ( !v50 && (v47 & 0x3F) != 0x19 )
  {
    *(_DWORD *)(i + 24) = -9;
    v43 = *(_WORD *)(i + 44);
    v37 = 0;
    goto LABEL_61;
  }
  v52 = *(_DWORD *)(i + 24) == -1;
  v199 = 0;
  v200 = 0;
  if ( v52 )
    *(_DWORD *)(i + 24) = -7;
  while ( 2 )
  {
    switch ( v47 & 0x3F )
    {
      case 0:
        goto LABEL_114;
      case 1:
        v78 = v201;
        if ( (*v201 & 0xDF) != 0x43 )
          goto LABEL_123;
        ++v201;
        if ( (v78[1] & 0xDF) != 0x4C )
          goto LABEL_123;
        v54 = v199;
        v201 = v78 + 2;
        goto LABEL_86;
      case 2:
      case 3:
        if ( v187 != 98 )
          goto LABEL_96;
        v148 = v201;
        v149 = 2;
        if ( (*v201 & 0xDF) == 0x44 )
        {
          v148 = v201 + 1;
          v149 = 4;
          ++v201;
        }
        v199 = v149;
        v150 = "WORD";
        while ( *v150 == *v148 || *v148 == ((unsigned __int8)*v150 | 0x20) )
        {
          ++v150;
          ++v148;
          if ( v150 == "" )
          {
            if ( *v148 == 9 || *v148 == 32 )
            {
              v151 = 0;
              do
              {
                do
                {
                  v152 = v148;
                  v153 = *++v148;
                  ++v151;
                }
                while ( v153 == 32 );
              }
              while ( v153 == 9 );
              if ( v151 )
              {
                v201 = v148;
                v154 = v152 + 4;
                v155 = "PTR";
                do
                {
                  if ( *v155 != *v148 && *v148 != (*v155 | 0x20) )
                    goto LABEL_321;
                  ++v148;
                  ++v155;
                }
                while ( v148 != v154 );
                if ( *v148 != 9 && *v148 != 32 )
                  goto LABEL_321;
                v176 = 0;
                do
                {
                  do
                  {
                    v177 = *++v148;
                    ++v176;
                  }
                  while ( v177 == 32 );
                }
                while ( v177 == 9 );
                if ( !v176 )
                {
LABEL_321:
                  v49 = v149;
                  break;
                }
                v201 = v148;
                v49 = v149;
              }
            }
            break;
          }
        }
LABEL_96:
        v58 = sub_1DF40(a1, &v201, i);
        if ( v58 == -1 )
          goto LABEL_123;
        if ( (v47 & 0x3F) == 2 )
        {
          if ( (v58 & 0xFF00u) > 0x100 )
            goto LABEL_123;
          *(_BYTE *)(i + 18) |= 0x20u;
          if ( !(_BYTE)v49 && v187 == 98 )
            v49 = (*(_BYTE *)(i + 46) & 2) == 0 ? 2 : 4;
        }
        else
        {
          if ( (_BYTE)v49 )
          {
            if ( (unsigned __int8)v49 < (unsigned __int8)v58 )
              goto LABEL_123;
            v59 = 32 * v49;
          }
          else
          {
            if ( v187 != 98 )
              goto LABEL_150;
            if ( (unsigned __int8)v58 > 2u || (*(_BYTE *)(i + 46) & 2) != 0 )
            {
              v59 = 0x80;
              v49 = 4;
            }
            else
            {
              v59 = 64;
              v49 = 2;
            }
          }
          *(_BYTE *)(i + 18) |= v59;
        }
        v199 = v49;
        v54 = v49;
        if ( (_BYTE)v49 )
          goto LABEL_103;
        goto LABEL_87;
      case 4:
        goto LABEL_115;
      case 5:
        v67 = v201;
        if ( *v201 != 49 )
          goto LABEL_123;
        goto LABEL_161;
      case 6:
        v71 = v201;
        if ( (*v201 & 0xDF) != 0x44 )
          goto LABEL_123;
        ++v201;
        if ( (v71[1] & 0xDF) != 0x58 )
          goto LABEL_123;
        v54 = v199;
        v201 = v71 + 2;
        goto LABEL_86;
      case 7:
        v68 = v201;
        if ( (*v201 & 0xDF) != 0x43 )
          goto LABEL_123;
        goto LABEL_125;
      case 8:
        v68 = v201;
        if ( (*v201 & 0xDF) != 0x44 )
          goto LABEL_123;
        goto LABEL_125;
      case 9:
        if ( v194 == 57 )
          v200 = 3;
        LOBYTE(v54) = v199 + 1;
        goto LABEL_116;
      case 0xA:
        v73 = v201;
        v74 = *v201 & 0xDF;
        if ( v74 == 69 )
        {
          v199 = 2;
          ++v201;
          v75 = *++v73;
          v74 = v75 & 0xDF;
        }
        goto LABEL_141;
      case 0xB:
        v72 = v201;
        if ( (*v201 & 0xDF) != 0x41 )
          goto LABEL_123;
        ++v201;
        if ( (v72[1] & 0xDF) != 0x4C )
          goto LABEL_123;
        v199 = 1;
        v54 = 1;
        v201 = v72 + 2;
        goto LABEL_86;
      case 0xC:
        v120 = sub_1D840(&v201);
        v200 = v120;
        if ( !v120 )
          goto LABEL_123;
        v198 |= 8 * (_BYTE)v120;
        v199 = BYTE1(v120);
        v54 = v120 >> 8;
        goto LABEL_86;
      case 0xD:
        v62 = sub_1D840(&v201);
        v200 = v62;
        if ( !v62 )
        {
          v201 = v63;
          if ( (v186 & 0xFE) == 6 )
            v186 += (*(_BYTE *)(i + 46) & 2) + 26;
LABEL_113:
          if ( (unsigned int)sub_1E060(a1, &v201, &v199, &v198, i) )
          {
LABEL_114:
            v54 = v199;
            goto LABEL_86;
          }
          goto LABEL_123;
        }
        v156 = *v201;
        if ( *v201 == 9 || v156 == 32 )
        {
          v157 = v201 + 1;
          do
          {
            do
            {
              v201 = v157;
              v156 = *v157++;
            }
            while ( v156 == 32 );
          }
          while ( v156 == 9 );
        }
        if ( v156 && v156 != 44 )
          goto LABEL_123;
        v199 = BYTE1(v62);
        v54 = v62 >> 8;
        v198 |= (unsigned __int8)v62 | 0xC0;
        goto LABEL_86;
      case 0xE:
        if ( !(unsigned int)sub_1E060(a1, &v201, &v199, &v200, i) || (*(_BYTE *)(i + 44) & 2) != 0 )
          goto LABEL_123;
        *(_BYTE *)(i + 18) &= 0xFCu;
        v54 = v199;
        goto LABEL_86;
      case 0xF:
        v119 = sub_1D840(&v201);
        v200 = v119;
        if ( !v119 )
          goto LABEL_123;
        v199 = BYTE1(v119);
        v54 = v119 >> 8;
        v198 = v198 & 0xF8 | v119;
        goto LABEL_86;
      case 0x10:
        v199 = 2;
        v125 = sub_1D960(&v201);
        v200 = v125;
        if ( !v125 )
          goto LABEL_123;
        if ( (*(_BYTE *)(i + 18) & 1) != 0 )
        {
          if ( v125 <= 4 || a5 > 2u )
          {
            v54 = 2;
            v198 |= 8 * v125 - 8;
            goto LABEL_86;
          }
          *(_DWORD *)(i + 24) = -4;
        }
        else if ( v125 == ((v198 >> 3) & 7) + 1 )
        {
          v54 = 2;
          goto LABEL_86;
        }
        goto LABEL_123;
      case 0x11:
        v121 = sub_1D840(&v201);
        v200 = v121;
        if ( !v121 )
          goto LABEL_123;
        if ( v121 <= 511 )
          goto LABEL_150;
        v122 = *(_BYTE *)(i + 21);
        v123 = v122 | 2;
        v124 = v122 & 0xFD;
        if ( v121 <= 1023 )
          v123 = v124;
        v198 |= 8 * (_BYTE)v121;
        *(_BYTE *)(i + 21) = v123;
        v54 = v199;
        goto LABEL_86;
      case 0x12:
        if ( (*(_BYTE *)(i + 16) & 0xFD) != 0x69 )
        {
          if ( v186 == 7 )
            v186 = (*(_BYTE *)(i + 46) & 2) + 33;
          goto LABEL_113;
        }
        v200 = sub_1D840(&v201);
        if ( v200 )
        {
          v146 = *v201;
          if ( *v201 == 32 || v146 == 9 )
          {
            v147 = v201 + 1;
            do
            {
              do
              {
                v201 = v147;
                v146 = *v147++;
              }
              while ( v146 == 32 );
            }
            while ( v146 == 9 );
          }
          if ( !v146 || v146 == 44 )
          {
            v199 = BYTE1(v200);
            v54 = v200 >> 8;
            v198 |= (unsigned __int8)v200 | 0xC0;
            goto LABEL_86;
          }
        }
        v201 = v118;
        if ( (unsigned int)sub_1E060(a1, &v201, &v199, &v198, i) )
          goto LABEL_114;
        LOWORD(v47) = (unsigned __int16)v47 >> 6;
        v198 |= (v198 >> 3) & 7 | 0xC0;
        continue;
      case 0x13:
        v98 = v201;
        v99 = "FAR";
        v100 = v201;
        do
        {
          if ( *v99 != *v100 && *v100 != (*v99 | 0x20) )
            goto LABEL_195;
          ++v100;
          ++v99;
        }
        while ( v100 != v201 + 3 );
        if ( *v100 != 32 && *v100 != 9 )
        {
LABEL_195:
          v101 = 0;
          goto LABEL_196;
        }
        v126 = 0;
        do
        {
          do
          {
            v127 = v100;
            v128 = *++v100;
            ++v126;
          }
          while ( v128 == 32 );
        }
        while ( v128 == 9 );
        v101 = 0;
        if ( v126 )
        {
          v201 = v100;
          v129 = v127 + 4;
          v130 = v100;
          v131 = "PTR";
          while ( *v131 == *v130 || *v130 == (*v131 | 0x20) )
          {
            ++v130;
            ++v131;
            if ( v130 == v129 )
            {
              if ( *v130 == 32 || *v130 == 9 )
              {
                v163 = 0;
                do
                {
                  do
                  {
                    v164 = *++v130;
                    ++v163;
                  }
                  while ( v164 == 32 );
                }
                while ( v164 == 9 );
                if ( v163 )
                {
                  v201 = v130;
                  v100 = v130;
                }
              }
              break;
            }
          }
          v98 = v100;
          v101 = 1;
        }
LABEL_196:
        v199 = v101;
        v190 = sub_1D7D0(v98, 0, 0);
        v103 = sub_1D7D0(v98, 58, v102);
        v104 = *(int *)(i + 8);
        v105 = v103;
        v106 = *(_QWORD *)i;
        v203[0] = *(int *)(i + 12);
        v202 = v104;
        if ( (int)v105 >= v107 )
        {
          v115 = sub_86990(a1, v98, v190, 5, &v202, v203, v106);
          v200 = v115;
          *(_DWORD *)(i + 8) = v202;
          *(_DWORD *)(i + 12) = v115;
          if ( (~(_BYTE)v115 & 3) != 0 )
            goto LABEL_123;
        }
        else
        {
          v191 = v105;
          v108 = sub_86990(a1, v98, v105, 7, &v202, v203, v106);
          v109 = v202;
          v200 = v108;
          *(_DWORD *)(i + 8) = v202;
          v110 = &v201[v191 + 1];
          *(_DWORD *)(i + 12) = v108;
          v201 = v110;
          if ( (v108 & 3) == 0 )
            goto LABEL_123;
          if ( (v108 & 2) == 0 )
          {
            if ( v109 > 0xFFFF )
              goto LABEL_123;
            *(_DWORD *)(i + 12) = v109;
          }
          v197 = v108;
          v111 = sub_1D7D0(v110, 0, 0);
          v203[0] = v112;
          v190 = v111;
          v202 = v113;
          v114 = sub_86990(a1, v110, v111, 8, &v202, v203, *(_QWORD *)i);
          *(_DWORD *)(i + 8) = v202;
          if ( (v114 & 1) == 0 )
            goto LABEL_123;
          LOBYTE(v115) = v197;
          *(_DWORD *)(i + 12) = v197;
        }
        v201 += (int)v190;
        v116 = *(_BYTE *)(i + 18);
        *(_BYTE *)(i + 18) = v116 | 0x40;
        if ( (v115 & 4) != 0 )
        {
          v199 = 6;
          v54 = 6;
          *(_BYTE *)(i + 18) = v116 | 0x50;
          goto LABEL_86;
        }
        v117 = *(_DWORD *)(i + 8);
        if ( v117 < 0x10000 || v117 == (__int16)v117 )
        {
          v199 = 4;
          v54 = 4;
          *(_BYTE *)(i + 18) = v116 | 0x48;
          goto LABEL_86;
        }
        v199 = 4;
        goto LABEL_150;
      case 0x14:
        v81 = v201;
        v82 = "SHORT";
        v83 = v201;
        while ( *v82 == *v83 || *v83 == (*v82 | 0x20) )
        {
          ++v83;
          ++v82;
          if ( v83 == v201 + 5 )
          {
            if ( *v83 == 32 || *v83 == 9 )
            {
              v135 = 0;
              do
              {
                do
                {
                  v136 = *++v83;
                  ++v135;
                }
                while ( v136 == 32 );
              }
              while ( v136 == 9 );
              if ( v135 )
              {
                v201 = v83;
                v81 = v83;
                v199 = 1;
                goto LABEL_180;
              }
            }
            break;
          }
        }
        v84 = v201;
        v85 = "NEAR";
        while ( *v85 == *v84 || *v84 == ((unsigned __int8)*v85 | 0x20) )
        {
          ++v85;
          ++v84;
          if ( v85 == "" )
          {
            if ( *v84 == 9 || *v84 == 32 )
            {
              v137 = 0;
              do
              {
                do
                {
                  v138 = v84;
                  v139 = *++v84;
                  ++v137;
                }
                while ( v139 == 32 );
              }
              while ( v139 == 9 );
              if ( v137 )
              {
                v140 = *(_BYTE *)(i + 46);
                v201 = v84;
                v141 = "PTR";
                v199 = (v140 & 2) == 0 ? 2 : 4;
                v142 = v84;
                while ( *v141 == *v142 || *v142 == (*v141 | 0x20) )
                {
                  ++v142;
                  ++v141;
                  if ( v142 == v138 + 4 )
                  {
                    if ( *v142 == 32 || *v142 == 9 )
                    {
                      v178 = 0;
                      do
                      {
                        do
                        {
                          v179 = *++v142;
                          ++v178;
                        }
                        while ( v179 == 32 );
                      }
                      while ( v179 == 9 );
                      if ( v178 )
                      {
                        v201 = v142;
                        v84 = v142;
                      }
                    }
                    break;
                  }
                }
                if ( *v84 == 32 || *v84 == 9 )
                {
                  v143 = v84 + 1;
                  do
                  {
                    do
                    {
                      v201 = v143;
                      v144 = *v143;
                      v81 = v143++;
                    }
                    while ( v144 == 32 );
                  }
                  while ( v144 == 9 );
                }
                else
                {
                  v81 = v84;
                }
              }
            }
            break;
          }
        }
LABEL_180:
        v86 = sub_1D7D0(v81, 0, 0);
        v203[0] = 0;
        v189 = v86;
        v202 = *(int *)(i + 8);
        v87 = sub_86990(a1, v81, v86, 4, &v202, v203, *(_QWORD *)i);
        v88 = v202;
        v200 = v87;
        v89 = v203[0];
        *(_DWORD *)(i + 8) = v202;
        v201 += (int)v189;
        v90 = v87 & 1;
        if ( (v87 & 1) == 0 )
          goto LABEL_123;
        if ( (v87 & 2) != 0 && *(_QWORD *)(i + 32) != v89 )
          goto LABEL_292;
        if ( (*(_BYTE *)(i + 19) & 0xF) != 0 )
        {
          *(_DWORD *)(i + 24) = -5;
          goto LABEL_123;
        }
        v91 = *(_BYTE *)(i + 46);
        v92 = v198;
        v93 = v88 - *(_DWORD *)(i + 28) - ((v91 ^ *(_BYTE *)(i + 21)) & 1);
        v94 = v198 & 0xF0;
        v95 = v93 - 2;
        *(_DWORD *)(i + 8) = v93 - 2;
        if ( v94 == (char)0x80 )
        {
          v95 = v93 - 3;
        }
        else if ( (v92 & 0xFE) != 0xE8 )
        {
          goto LABEL_186;
        }
        if ( (v91 & 2) != 0 )
        {
          v145 = v95 - 3;
          v90 = 4;
        }
        else
        {
          v145 = v95 - 1;
          v90 = 2;
        }
        *(_DWORD *)(i + 8) = v145;
LABEL_186:
        v200 = v90;
        if ( v199 && v199 != v90 )
        {
LABEL_150:
          *(_DWORD *)(i + 24) = -6;
          goto LABEL_123;
        }
        v96 = *(_DWORD *)(i + 8);
        if ( !v96 )
          goto LABEL_345;
        if ( v96 > 0xFFFF || v96 <= 0xFF )
        {
          v97 = 4;
          if ( v96 == (__int16)v96 )
            goto LABEL_345;
        }
        else
        {
          v97 = 2 * (v96 != (__int16)v96) + 2;
        }
        if ( v90 < v97 )
        {
LABEL_292:
          *(_DWORD *)(i + 24) = -10;
LABEL_123:
          v43 = *(_WORD *)(i + 44);
          v37 = 0;
          goto LABEL_61;
        }
LABEL_345:
        *(_BYTE *)(i + 18) |= 4 * (_BYTE)v90;
        v54 = (v91 & 2) == 0 ? 2 : 4;
        v199 = (v91 & 2) == 0 ? 2 : 4;
LABEL_86:
        if ( (_BYTE)v49 )
        {
LABEL_103:
          if ( (_BYTE)v54 && (_BYTE)v49 != (_BYTE)v54 )
            goto LABEL_94;
        }
        else
        {
LABEL_87:
          HIWORD(v55) = HIWORD(v47);
          LOWORD(v55) = (unsigned __int16)v47 >> 6;
          if ( v194 == 8 )
          {
            v49 = v54 + 2;
            if ( !(_WORD)v55 )
              goto LABEL_90;
            goto LABEL_240;
          }
          v49 = v54;
          if ( v194 == 23 )
          {
            v49 = 2 * v54;
            if ( !(_WORD)v55 )
              goto LABEL_90;
LABEL_240:
            v47 = v55;
            goto LABEL_241;
          }
        }
        LOWORD(v47) = (unsigned __int16)v47 >> 6;
        if ( (_WORD)v47 )
        {
LABEL_241:
          v132 = v201;
          v133 = *v201;
          if ( *v201 == 32 || v133 == 9 )
          {
            v134 = v201 + 1;
            do
            {
              do
              {
                v201 = v134;
                v133 = *v134;
                v132 = v134++;
              }
              while ( v133 == 32 );
            }
            while ( v133 == 9 );
          }
          if ( v133 != 44 )
          {
            v165 = -(v133 == 0);
            v37 = 0;
            *(_DWORD *)(i + 24) = (v165 & 0xFFFFFFFE) - 7;
            v43 = *(_WORD *)(i + 44);
            goto LABEL_61;
          }
          v48 = v132 + 1;
          v201 = v48;
          goto LABEL_72;
        }
        v60 = (v194 + 100) & 0x7F;
        if ( (unsigned __int8)v60 > 0x37u )
        {
          if ( v194 != 84 || (v49 & 0xF7) != 0 )
            goto LABEL_90;
          v38 = v201;
        }
        else
        {
          v61 = 0x80010000000001LL;
          if ( _bittest64(&v61, v60) && !(_BYTE)v49 )
            goto LABEL_109;
LABEL_90:
          v56 = byte_93FC0[v186];
          if ( byte_93FC0[v186] == byte_93F80[v186] )
          {
LABEL_93:
            if ( v56 != (unsigned __int8)v49 )
            {
LABEL_94:
              *(_DWORD *)(i + 24) = -6;
              v43 = *(_WORD *)(i + 44);
              v37 = 0;
              goto LABEL_61;
            }
LABEL_109:
            v38 = v201;
          }
          else
          {
            v57 = *(_BYTE *)(i + 21);
            if ( byte_93F80[v186] != (unsigned __int8)v49 )
            {
              *(_BYTE *)(i + 21) = v57 & 0xFD;
              goto LABEL_93;
            }
            v38 = v201;
            *(_BYTE *)(i + 21) = v57 | 2;
          }
        }
LABEL_51:
        v39 = *v38;
        if ( *v38 == 32 || v39 == 9 )
        {
          v40 = v38 + 1;
          do
          {
            do
            {
              v201 = v40;
              v39 = *v40++;
            }
            while ( v39 == 32 );
          }
          while ( v39 == 9 );
        }
        if ( !v39 )
        {
          v170 = v181;
          v171 = a4;
          v167 = i;
          v172 = *(_BYTE *)(i + 19);
          goto LABEL_368;
        }
        v41 = sub_1D960(&v201);
        v42 = v201;
        if ( !v41 )
        {
LABEL_60:
          v43 = *(_WORD *)(i + 44);
          v37 = v192;
          *(_DWORD *)(i + 24) = 5 * (*v42 != 44) - 8;
          goto LABEL_61;
        }
        if ( *v201 != 58 )
        {
          v42 = v201 - 2;
          v201 -= 2;
          goto LABEL_60;
        }
        v158 = *(_BYTE *)(i + 19);
        *(_BYTE *)(i + 48) = v41;
        v201 = v42 + 1;
        v159 = byte_93351[v41];
        v160 = v158 | 8;
        *(_BYTE *)(i + 19) = v160;
        *(_BYTE *)(i + 47) = v159;
        if ( !v159 )
        {
          ++v42;
          goto LABEL_60;
        }
        v161 = v42[1];
        if ( v161 == 9 || v161 == 32 )
        {
          v162 = v42 + 2;
          do
          {
            do
            {
              v201 = v162;
              v161 = *v162++;
            }
            while ( v161 == 32 );
          }
          while ( v161 == 9 );
        }
        if ( v187 != 293 )
        {
          v43 = *(_WORD *)(i + 44);
          if ( (v43 & 0x40) == 0 )
          {
            if ( v161 )
              *(_DWORD *)(i + 24) = -3;
            else
              *(_DWORD *)(i + 24) = -5;
            v37 = v192;
LABEL_61:
            v7 = *(unsigned __int8 *)(i + 17);
            *(_BYTE *)(i + 21) = *(_BYTE *)(i + 46);
            if ( (v43 & 0x80u) != 0 )
            {
              LOBYTE(v43) = v43 & 0x7F;
              v28 += 2;
              *(_WORD *)(i + 44) = v43;
              goto LABEL_49;
            }
            ++v28;
            LOBYTE(v7) = aEcsdfg[v182 + 6] | v7;
            ++v7;
            LOBYTE(v32) = byte_94031[v182];
            *(_BYTE *)(i + 17) = v7;
            if ( (*(_BYTE *)(v181 + 3) & 4) == 0 )
            {
              v185 = v37;
              goto LABEL_36;
            }
            if ( ((unsigned __int8)v32 & (unsigned __int8)v7) == 0 )
            {
              v185 = v37;
              a2 = v29;
              v8 = v181;
              v9 = i;
              goto LABEL_6;
            }
            goto LABEL_49;
          }
        }
        v170 = v181;
        v171 = a4;
        v172 = v160;
        v167 = i;
        if ( v161 )
        {
          v173 = -3;
          goto LABEL_373;
        }
LABEL_368:
        if ( (v172 & 1) != 0
          && *(_BYTE *)(v167 + 49) > 2u
          && ((*(_BYTE *)(v170 + 3) & 0x10) == 0 || (*(_BYTE *)(v167 + 44) & 8) == 0) )
        {
          v173 = -12;
          goto LABEL_373;
        }
        v174 = *(_WORD *)(v167 + 42);
        v175 = v198;
        *(_BYTE *)(v167 + 17) = v198;
        *(_WORD *)(v167 + 42) = v174 + 1;
        if ( v171 != 7 && (*(_BYTE *)(v170 + 3) & 8) == 0 && (((_BYTE)v174 + 1) & 3) == 0 )
          *(_WORD *)(v167 + 42) = 0;
        if ( v187 == 37 && (*(_BYTE *)(v167 + 16) & 0xFE) == 0x84 && (~v175 & 0xC0) == 0 )
          *(_BYTE *)(v167 + 17) = (v175 >> 3) & 7 | (8 * v175) & 0x38 | 0xC0;
        return 0;
      case 0x15:
        v79 = v201;
        if ( (*v201 & 0xDF) != 0x53 )
          goto LABEL_123;
        ++v201;
        if ( (v79[1] & 0xDF) != 0x54 )
          goto LABEL_123;
        v201 = v79 + 2;
        v54 = v199;
        if ( v79[2] == 40 && v79[3] == 48 && v79[4] == 41 )
          goto LABEL_173;
        goto LABEL_86;
      case 0x16:
        v79 = v201;
        if ( (*v201 & 0xDF) != 0x53 )
          goto LABEL_123;
        ++v201;
        if ( (v79[1] & 0xDF) != 0x54 )
          goto LABEL_123;
        v201 = v79 + 2;
        v54 = v199;
        if ( v79[2] != 40 )
          goto LABEL_86;
        v80 = v79[3] - 48;
        if ( v80 > 7u || v79[4] != 41 )
          goto LABEL_86;
        v198 |= v80;
LABEL_173:
        v201 = v79 + 5;
        goto LABEL_86;
      case 0x17:
        if ( v198 == 0xCC )
        {
          v67 = v201;
          if ( *v201 == 51 )
          {
LABEL_161:
            v54 = v199;
            v201 = v67 + 1;
            goto LABEL_86;
          }
        }
        else
        {
LABEL_115:
          LOBYTE(v54) = v199;
LABEL_116:
          v199 = v54 + 1;
          v188 = v54 + 1;
          v64 = sub_1DF40(a1, &v201, i);
          if ( v64 != -1 && v188 >= (unsigned __int8)v64 )
          {
            v65 = *(_BYTE *)(i + 18);
            if ( v200 )
            {
              *(_DWORD *)(i + 8) = *(_DWORD *)(i + 12);
              v66 = (4 * v188) | v65;
            }
            else
            {
              v66 = (32 * v188) | v65;
            }
            *(_BYTE *)(i + 18) = v66;
            v199 = 0;
LABEL_121:
            v54 = 0;
            goto LABEL_86;
          }
        }
        goto LABEL_123;
      case 0x18:
        v68 = v201;
        if ( (*v201 & 0xDF) != 0x54 )
          goto LABEL_123;
LABEL_125:
        v69 = v68 + 1;
        v201 = v69;
        if ( (*v69 & 0xDF) != 0x52 )
          goto LABEL_123;
        v201 = v69 + 1;
        v70 = v69[1] - 48;
        if ( v70 > 7u )
          goto LABEL_123;
        v199 = 4;
        v198 |= 8 * v70;
        v54 = 4;
        v201 = v69 + 2;
        goto LABEL_86;
      case 0x19:
        v54 = v199;
        if ( *v201 )
          goto LABEL_116;
        *(_BYTE *)(i + 18) |= 0x20u;
        *(_DWORD *)(i + 12) = 10;
        goto LABEL_86;
      case 0x1A:
        v73 = v201;
        v74 = *v201 & 0xDF;
LABEL_141:
        if ( v74 != 65 )
          goto LABEL_123;
        v201 = v73 + 1;
        if ( (v73[1] & 0xDF) != 0x58 )
          goto LABEL_123;
        v201 = v73 + 2;
        v54 = v199 + 2;
        v199 += 2;
        goto LABEL_86;
      case 0x1E:
      case 0x1F:
        v53 = sub_1D8F0(&v201);
        v200 = v53;
        if ( v53 < 0 )
          goto LABEL_123;
        if ( (v47 & 0x3F) == 0x1E )
          LOBYTE(v53) = 8 * v53;
        v198 |= v53;
        v54 = (unsigned __int8)byte_93FC0[v186];
        v199 = byte_93FC0[v186];
        goto LABEL_86;
      case 0x20:
        v76 = v201;
        v77 = sub_1D8F0(&v201);
        v200 = v77;
        if ( v77 >= 0 && (!*v201 || *v201 == 44) )
        {
          v54 = (unsigned __int8)byte_93FC0[v186];
          v198 |= (unsigned __int8)v77 | 0xC0;
          v199 = v54;
          goto LABEL_86;
        }
        v201 = v76;
        if ( !(unsigned int)sub_1E060(a1, &v201, &v199, &v198, i) )
          goto LABEL_123;
        v54 = v199;
        if ( !v199 )
          goto LABEL_121;
        if ( v199 == byte_93FC0[v186] )
          goto LABEL_86;
        goto LABEL_150;
      default:
        goto LABEL_123;
    }
  }
}

