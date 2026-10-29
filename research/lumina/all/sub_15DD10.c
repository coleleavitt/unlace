unsigned __int64 __fastcall sub_15DD10(__int64 *a1, __int64 *a2, __m128i *a3, int a4, __int64 a5, double a6)
{
  __m128i *v6; // r12
  const char **v8; // r14
  __int64 v9; // rdi
  char v10; // dl
  char v11; // si
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  int *v15; // r8
  int v16; // edx
  __int64 v17; // rbp
  int v18; // ebx
  int j; // r13d
  const char *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  const char *v23; // rdx
  const char *v24; // rcx
  __int16 v25; // di
  unsigned __int8 *v26; // rax
  __int64 v27; // rsi
  int v28; // edx
  int v29; // ecx
  unsigned __int64 v30; // rsi
  unsigned int v31; // edx
  unsigned __int64 v32; // rax
  __int16 v33; // ax
  __int16 v34; // ax
  __int64 v35; // r10
  __int64 v36; // r10
  int v37; // eax
  int v38; // eax
  __int64 v39; // r15
  __int64 v40; // rdx
  int v41; // eax
  const char *v42; // rcx
  char v43; // si
  int v44; // eax
  _BYTE *v45; // rdx
  __int64 v46; // rax
  const char *v47; // rdi
  int v48; // eax
  __int64 *v49; // rax
  __int64 *v50; // rax
  const char ***v51; // rdx
  __int64 i; // r13
  unsigned __int16 v53; // dx
  char v54; // al
  int v55; // eax
  _BYTE *v56; // rdx
  __int64 v57; // rbx
  unsigned __int16 v58; // ax
  int v59; // r15d
  __int64 v60; // r12
  int v61; // r14d
  int v62; // ebp
  __int64 v63; // r14
  int v64; // edx
  __int64 v65; // rbp
  __int64 v66; // r15
  int v67; // r14d
  int v68; // r11d
  __int64 v69; // r8
  __int64 v70; // rdi
  int v71; // r9d
  __int64 v72; // rax
  int v73; // edx
  int v74; // r10d
  __int64 v75; // rdi
  int v76; // esi
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 *v80; // rax
  __int64 v81; // rbx
  int v82; // eax
  const char *v83; // rbp
  const char *v84; // rbx
  const char *v85; // rax
  __int64 *v86; // r13
  const char *v87; // rdx
  char *v88; // rax
  char *v89; // rsi
  __int64 v90; // rax
  __int16 v91; // ax
  int v92; // r14d
  __int64 v93; // rbp
  __int64 v94; // rax
  unsigned __int16 v95; // bx
  __int32 v96; // ebx
  unsigned int v97; // r15d
  __m128i *v98; // rax
  __int64 v99; // rax
  int v100; // ebp
  __int64 v101; // rax
  __int16 v102; // dx
  int v103; // edx
  _BYTE *v104; // rax
  unsigned int v105; // ebx
  signed int v106; // ebp
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  int v110; // edx
  _BYTE *v111; // rax
  int v112; // r9d
  __int64 v113; // rsi
  int v114; // edi
  __int64 v115; // r8
  char *v116; // rax
  char v117; // dl
  int v118; // ecx
  _BOOL4 v119; // r10d
  int v120; // ecx
  char *v121; // rcx
  char v122; // dl
  _BOOL4 v123; // eax
  unsigned int v124; // eax
  int v125; // eax
  char *v126; // rdx
  char *v127; // rdx
  char *v128; // rcx
  __int64 v129; // rax
  char *v130; // rbp
  __int64 v131; // rax
  const char *v132; // rbx
  int v133; // eax
  char *v134; // rcx
  int v135; // r15d
  size_t v136; // r12
  size_t v137; // rdx
  int v138; // r12d
  __int64 v139; // rax
  const void *v140; // r13
  __m128i *v141; // rax
  const char *v142; // r8
  int v143; // ecx
  __int64 v144; // rbx
  _QWORD *v145; // rbx
  __int64 v146; // rax
  signed int v147; // [rsp+8h] [rbp-E0h]
  __int64 *v148; // [rsp+8h] [rbp-E0h]
  const char **v149; // [rsp+8h] [rbp-E0h]
  _QWORD *v150; // [rsp+10h] [rbp-D8h]
  char *v151; // [rsp+10h] [rbp-D8h]
  __int64 v153; // [rsp+20h] [rbp-C8h]
  _QWORD *v156; // [rsp+38h] [rbp-B0h]
  char *v157; // [rsp+38h] [rbp-B0h]
  int v158; // [rsp+40h] [rbp-A8h]
  char *v159; // [rsp+48h] [rbp-A0h]
  __int64 *v160; // [rsp+48h] [rbp-A0h]
  const char *v161; // [rsp+50h] [rbp-98h]
  int v162; // [rsp+58h] [rbp-90h]
  __m128i *v163; // [rsp+58h] [rbp-90h]
  int v165; // [rsp+60h] [rbp-88h]
  unsigned __int16 v166; // [rsp+66h] [rbp-82h]
  __int64 v167; // [rsp+68h] [rbp-80h]
  const char **v168; // [rsp+70h] [rbp-78h]
  __m128i *v169; // [rsp+78h] [rbp-70h]
  const char *v170; // [rsp+80h] [rbp-68h] BYREF
  __int64 v171; // [rsp+88h] [rbp-60h]
  unsigned int v172; // [rsp+90h] [rbp-58h]
  __int64 v173; // [rsp+98h] [rbp-50h]
  unsigned __int64 v174; // [rsp+A8h] [rbp-40h]

  v6 = (__m128i *)a1;
  v174 = __readfsqword(0x28u);
  if ( !a3 && !a5 )
    return __readfsqword(0x28u) ^ v174;
  v8 = (const char **)a1[42];
  if ( !v8 )
    return __readfsqword(0x28u) ^ v174;
  v153 = *a1;
  if ( a5 )
  {
    if ( !*(_BYTE *)(v153 + 197) )
      goto LABEL_7;
LABEL_128:
    sub_DBD10((__int64)a1, "");
    return __readfsqword(0x28u) ^ v174;
  }
  v81 = *a1;
  if ( (unsigned int)sub_D47E0(*a1, (char *)*v8) )
  {
    *((_DWORD *)v8 + 12) |= 0x1000u;
    if ( !*(_BYTE *)(v81 + 197) )
      goto LABEL_7;
  }
  else if ( !*(_BYTE *)(v153 + 197) )
  {
    goto LABEL_7;
  }
  v82 = *(_DWORD *)(v153 + 192);
  if ( *((_BYTE *)v8 + 63) )
  {
    if ( !v82 )
    {
      *((_DWORD *)v8 + 10) = 0;
      goto LABEL_7;
    }
    goto LABEL_128;
  }
  *((_DWORD *)v8 + 10) = v82;
  if ( v82 == 1 )
    *((_DWORD *)v8 + 12) |= 1u;
LABEL_7:
  if ( (a4 & 0x10000) != 0 )
  {
    *((_DWORD *)v8 + 12) |= 0x10000u;
    if ( *((__int16 *)v8 + 27) > 0 )
    {
      v9 = (__int64)v8[1];
      v10 = *(_BYTE *)(v9 + 8);
      v11 = v10 & 0xF0;
      if ( (v10 & 0xF0) == 0 )
      {
LABEL_134:
        v83 = *(const char **)v9;
        v84 = *v8;
        if ( (*(_BYTE *)(v9 + 14) & 4) != 0 )
        {
          v85 = (const char *)sub_D4C70(v9, (size_t)"");
          sub_DBD10((__int64)v6, "unknown datatype for %s.%s: \"%s\"", v84, v83, v85);
        }
        else
        {
          sub_DBD10((__int64)v6, "missing datatype for %s.%s", *v8, *(const char **)v9);
        }
        return __readfsqword(0x28u) ^ v174;
      }
      v12 = 16;
      v13 = 0;
      while ( 1 )
      {
        if ( v11 == 16 )
          *(_BYTE *)(v9 + 9) = 65;
        if ( (*(_BYTE *)(v9 + 14) & 1) != 0 && *((__int16 *)v8 + 26) != v13 && (v10 & 0xF) == 0 )
        {
          *(_BYTE *)(v9 + 8) = *(_BYTE *)(v9 + 8) & 0xF0 | 2;
          *((_DWORD *)v8 + 12) |= 0x800u;
        }
        if ( *((__int16 *)v8 + 27) <= ++v13 )
          break;
        v9 = (__int64)&v8[1][v12];
        v12 += 16;
        v10 = *(_BYTE *)(v9 + 8);
        v11 = v10 & 0xF0;
        if ( (v10 & 0xF0) == 0 )
          goto LABEL_134;
      }
    }
  }
  if ( (a4 & 0x80u) == 0 )
    goto LABEL_20;
  v37 = *((_DWORD *)v8 + 12);
  if ( (v37 & 8) != 0 )
  {
    sub_DBD10((__int64)v6, "AUTOINCREMENT not allowed on WITHOUT ROWID tables");
    return __readfsqword(0x28u) ^ v174;
  }
  if ( (v37 & 4) == 0 )
  {
    sub_DBD10((__int64)v6, "PRIMARY KEY missing on table %s", *v8);
    return __readfsqword(0x28u) ^ v174;
  }
  v38 = v37 | 0x280;
  *((_DWORD *)v8 + 12) = v38;
  v39 = v6[1].m128i_i64[0];
  v167 = v6->m128i_i64[0];
  if ( (*(_BYTE *)(v6->m128i_i64[0] + 198) & 2) == 0 )
  {
    if ( *((__int16 *)v8 + 27) > 0 )
    {
      v40 = 0;
      v41 = 0;
      do
      {
        v42 = &v8[1][v40];
        if ( (v42[14] & 1) != 0 )
        {
          v43 = v42[8];
          if ( (v43 & 0xF) == 0 )
            *((_BYTE *)v42 + 8) = v43 & 0xF0 | 2;
        }
        ++v41;
        v40 += 16;
      }
      while ( v41 < *((__int16 *)v8 + 27) );
      v38 = *((_DWORD *)v8 + 12);
    }
    BYTE1(v38) |= 8u;
    *((_DWORD *)v8 + 12) = v38;
  }
  v44 = v6[12].m128i_i32[0];
  if ( v44 )
  {
    if ( v44 < 0 )
      v44 = *(_DWORD *)(v39 + 144) - 1;
    v45 = byte_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v39 + 103LL) )
      v45 = (_BYTE *)(*(_QWORD *)(v39 + 136) + 24LL * v44);
    *((_DWORD *)v45 + 3) = 2;
  }
  v46 = *((__int16 *)v8 + 26);
  if ( (v46 & 0x8000u) != 0LL )
  {
    for ( i = (__int64)v8[2]; i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_BYTE *)(i + 99) & 3) == 2 )
        break;
    }
    if ( *(_WORD *)(i + 94) <= 1u )
    {
      v162 = 1;
      v53 = 1;
    }
    else
    {
      v149 = v8;
      v92 = 1;
      v93 = 1;
      do
      {
        if ( (unsigned int)sub_CF650(
                             (__int64 *)(i + 8),
                             (_QWORD *)(i + 64),
                             v92,
                             *(_QWORD *)(i + 8),
                             (_QWORD *)(i + 64),
                             v93) )
        {
          --*(_WORD *)(i + 96);
        }
        else
        {
          v94 = v92++;
          *(_QWORD *)(*(_QWORD *)(i + 64) + 8 * v94) = *(_QWORD *)(*(_QWORD *)(i + 64) + 8 * v93);
          *(_BYTE *)(*(_QWORD *)(i + 56) + v94) = *(_BYTE *)(*(_QWORD *)(i + 56) + v93);
          *(_WORD *)(*(_QWORD *)(i + 8) + 2 * v94) = *(_WORD *)(*(_QWORD *)(i + 8) + 2 * v93);
        }
        ++v93;
      }
      while ( *(unsigned __int16 *)(i + 94) > (int)v93 );
      v95 = v92;
      v8 = v149;
      v53 = v95;
      v162 = v95;
    }
    *(_WORD *)(i + 94) = v53;
  }
  else
  {
    v47 = *(const char **)&v8[1][16 * v46];
    v48 = 0;
    v170 = v47;
    if ( v47 )
      v48 = strlen(v47) & 0x3FFFFFFF;
    LODWORD(v171) = v48;
    v49 = sub_DEC00(v167, 59, (__int64)&v170, 0);
    v50 = sub_DEBF0(v6->m128i_i64, (__int64)v49);
    if ( !v50 )
      goto LABEL_176;
    if ( v6[18].m128i_i8[4] > 1u )
    {
      v51 = (const char ***)v6[25].m128i_i64[0];
      if ( v51 )
      {
        while ( (const char **)((char *)v8 + 52) != *v51 )
        {
          v51 = (const char ***)v51[3];
          if ( !v51 )
            goto LABEL_79;
        }
        *v51 = (const char **)v50[1];
      }
    }
LABEL_79:
    *((_BYTE *)v50 + 24) = v6[18].m128i_i8[2];
    *((_WORD *)v8 + 26) = -1;
    sub_15C470((__int64)v6, 0, 0, nullptr, v50, *((unsigned __int8 *)v8 + 62), a6, 0, 0, 0, 0, 2);
    if ( v6[3].m128i_i32[0] )
    {
LABEL_176:
      *((_DWORD *)v8 + 12) &= ~0x80u;
      goto LABEL_20;
    }
    for ( i = (__int64)v8[2]; i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_BYTE *)(i + 99) & 3) == 2 )
        break;
    }
    v53 = *(_WORD *)(i + 94);
    v162 = v53;
  }
  v54 = *(_BYTE *)(i + 99);
  *(_BYTE *)(i + 99) = v54 | 0x20;
  if ( (*(_BYTE *)(v167 + 198) & 2) == 0 )
    *(_BYTE *)(i + 99) = v54 | 0x28;
  *(_WORD *)(i + 96) = v53;
  if ( v39 )
  {
    v55 = *(_DWORD *)(i + 88);
    if ( v55 )
    {
      if ( v55 < 0 )
        v55 = *(_DWORD *)(v39 + 144) - 1;
      v56 = byte_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v39 + 103LL) )
        v56 = (_BYTE *)(*(_QWORD *)(v39 + 136) + 24LL * v55);
      *v56 = 8;
    }
  }
  *(_DWORD *)(i + 88) = *((_DWORD *)v8 + 10);
  v57 = (__int64)v8[2];
  if ( !v57 )
  {
LABEL_111:
    v68 = *(unsigned __int16 *)(i + 96);
    if ( *((__int16 *)v8 + 27) <= 0 )
    {
      if ( v162 <= v68 )
        goto LABEL_173;
      v73 = v162;
    }
    else
    {
      v69 = *(_QWORD *)(i + 8);
      v70 = 0;
      v71 = 0;
      do
      {
        v72 = *(_QWORD *)(i + 8);
        while ( v72 != v69 + 2LL * v162 )
        {
          v72 += 2;
          if ( *(__int16 *)(v72 - 2) == (_DWORD)v70 )
            goto LABEL_117;
        }
        v71 += (*(_WORD *)&v8[1][16 * v70 + 14] & 0x20) == 0;
LABEL_117:
        ++v70;
      }
      while ( (unsigned int)(*((__int16 *)v8 + 27) - 1) + 1LL != v70 );
      v73 = v71 + v162;
      if ( v71 + v162 <= v68 )
        goto LABEL_119;
    }
    if ( (unsigned int)sub_DC3F0(v167, i, v73) )
      goto LABEL_20;
    if ( *((__int16 *)v8 + 27) > 0 )
    {
      v69 = *(_QWORD *)(i + 8);
LABEL_119:
      v74 = v162;
      v75 = 0;
      v76 = 0;
      while ( 1 )
      {
        v77 = v74;
        v78 = v69;
        while ( v77 > 0 )
        {
          v78 += 2;
          --v77;
          if ( *(__int16 *)(v78 - 2) == v76 )
            goto LABEL_125;
        }
        if ( (v8[1][v75 + 14] & 0x20) == 0 )
        {
          v79 = v74++;
          *(_WORD *)(v69 + 2 * v79) = v76;
          *(_QWORD *)(*(_QWORD *)(i + 64) + 8 * v79) = "BINARY";
        }
LABEL_125:
        ++v76;
        v75 += 16;
        if ( v76 >= *((__int16 *)v8 + 27) )
          break;
        v69 = *(_QWORD *)(i + 8);
      }
    }
LABEL_173:
    sub_C47F0(i);
    goto LABEL_20;
  }
  v168 = v8;
  v169 = v6;
  v156 = (_QWORD *)(i + 64);
  while ( (*(_BYTE *)(v57 + 99) & 3) == 2 )
  {
LABEL_109:
    v57 = *(_QWORD *)(v57 + 40);
    if ( !v57 )
    {
      v8 = v168;
      v6 = v169;
      goto LABEL_111;
    }
  }
  v58 = *(_WORD *)(v57 + 94);
  v166 = v58;
  if ( !v162 )
    goto LABEL_160;
  v59 = v58;
  v60 = *(_QWORD *)(i + 8);
  v61 = 0;
  v148 = (__int64 *)(v57 + 8);
  v158 = v58;
  v62 = 0;
  v150 = (_QWORD *)(v57 + 64);
  do
    v61 += sub_CF650(v148, v150, v59, v60, v156, v62++) == 0;
  while ( v62 != v162 );
  if ( !v61 )
  {
LABEL_160:
    *(_WORD *)(v57 + 96) = v166;
    goto LABEL_109;
  }
  if ( v59 + v61 <= *(unsigned __int16 *)(v57 + 96) )
    goto LABEL_102;
  if ( !(unsigned int)sub_DC3F0(v167, v57, v59 + v61) )
  {
    v59 = *(unsigned __int16 *)(v57 + 94);
    v60 = *(_QWORD *)(i + 8);
    v158 = v59;
LABEL_102:
    v63 = (unsigned int)(v62 - 1);
    v64 = v59;
    v65 = 0;
    v66 = v63 + 1;
    v67 = v158;
    while ( 1 )
    {
      if ( !(unsigned int)sub_CF650(v148, v150, v64, v60, v156, v65) )
      {
        *(_WORD *)(*(_QWORD *)(v57 + 8) + 2LL * v67) = *(_WORD *)(v60 + 2 * v65);
        *(_QWORD *)(*(_QWORD *)(v57 + 64) + 8LL * v67) = *(_QWORD *)(*(_QWORD *)(i + 64) + 8 * v65);
        if ( *(_BYTE *)(*(_QWORD *)(i + 56) + v65) )
          *(_BYTE *)(v57 + 100) |= 2u;
        ++v67;
      }
      if ( v66 == ++v65 )
        break;
      v64 = *(unsigned __int16 *)(v57 + 94);
      v60 = *(_QWORD *)(i + 8);
    }
    goto LABEL_109;
  }
  v8 = v168;
  v6 = v169;
LABEL_20:
  v14 = (__int64)v8[12];
  v147 = -32768;
  if ( v14 )
    v147 = sub_CFB20(v153, v14);
  v15 = (int *)v8[4];
  if ( v15 )
  {
    sub_E4860((__int64)v6, (__int64 *)v8, 4, 0, v15);
    if ( v6[3].m128i_i32[0] )
    {
      v89 = (char *)v8[4];
      if ( v89 )
        sub_D7810(v153, v89);
      v8[4] = nullptr;
    }
  }
  v16 = *((__int16 *)v8 + 27);
  if ( ((_BYTE)v8[6] & 0x60) != 0 )
  {
    if ( (__int16)v16 <= 0 )
      goto LABEL_171;
    v17 = 0;
    v18 = 0;
    for ( j = 0; j < v16; ++j )
    {
      v20 = &v8[1][v17];
      if ( (v20[14] & 0x60) != 0 )
      {
        v21 = *((unsigned __int16 *)v20 + 6);
        v22 = 0;
        if ( (_WORD)v21 )
        {
          if ( !*((_BYTE *)v8 + 63) )
          {
            v23 = v8[10];
            if ( v23 )
            {
              if ( *(_DWORD *)v23 >= v21 )
                v22 = *(_QWORD *)&v23[24 * v21 - 16];
            }
          }
        }
        if ( (unsigned int)sub_E4860((__int64)v6, (__int64 *)v8, 8, v22, nullptr) )
        {
          v80 = sub_DEC00(v153, 121, 0, 0);
          sub_E0FE0(v6->m128i_i64, (int **)v8 + 10, (__int16 *)&v8[1][v17 + 12], (__int64)v80);
        }
      }
      else
      {
        ++v18;
      }
      v16 = *((__int16 *)v8 + 27);
      v17 += 16;
    }
    if ( !v18 )
    {
LABEL_171:
      sub_DBD10((__int64)v6, "must have at least one non-generated column");
      return __readfsqword(0x28u) ^ v174;
    }
  }
  v24 = v8[1];
  v25 = *((_WORD *)v8 + 26);
  if ( v16 <= 0 )
  {
    if ( v25 >= 0 )
      goto LABEL_172;
    LOBYTE(v30) = 8;
    v91 = 30;
LABEL_166:
    v33 = v91 - 10;
LABEL_44:
    v34 = word_1BACD0[v30 & 7] + v33;
  }
  else
  {
    v26 = (unsigned __int8 *)(v24 + 10);
    v27 = (__int64)&v24[16 * (v16 - 1) + 26];
    v28 = 0;
    do
    {
      v29 = *v26;
      v26 += 16;
      v28 += v29;
    }
    while ( v26 != (unsigned __int8 *)v27 );
    if ( v25 < 0 )
    {
      v30 = (unsigned int)(4 * v28 + 4);
      v31 = 4 * v28 + 4;
    }
    else
    {
      v30 = (unsigned int)(4 * v28);
      v31 = 4 * v28;
    }
    if ( v31 > 7 )
    {
      _BitScanReverse64(&v32, v30);
      v30 >>= 60 - ((unsigned __int8)v32 ^ 0x3Fu);
      v33 = 10 * (60 - (v32 ^ 0x3F)) + 30;
      goto LABEL_44;
    }
    if ( v30 > 1 )
    {
      v91 = 40;
      do
      {
        v30 *= 2LL;
        v91 -= 10;
      }
      while ( v30 <= 7 );
      goto LABEL_166;
    }
LABEL_172:
    v34 = 0;
  }
  v35 = (__int64)v8[2];
  for ( *((_WORD *)v8 + 30) = v34; v35; v35 = *(_QWORD *)(v36 + 40) )
    sub_C8260(v35);
  if ( !*(_BYTE *)(v153 + 197) )
  {
    v86 = (__int64 *)v6[1].m128i_i64[0];
    if ( !v86 )
    {
      v86 = sub_E2050(v6->m128i_i64);
      if ( !v86 )
        return __readfsqword(0x28u) ^ v174;
    }
    sub_E1710((__int64)v86, 122, 0, 0, 0);
    v87 = "TABLE";
    if ( *((_BYTE *)v8 + 63) )
      v87 = "VIEW";
    v88 = "table";
    if ( *((_BYTE *)v8 + 63) )
      v88 = "view";
    v151 = v88;
    if ( !a5 )
    {
      v141 = v6 + 17;
      v142 = (const char *)v6[16].m128i_i64[0];
      if ( !a4 )
        v141 = a3;
      if ( *(_BYTE *)v141->m128i_i64[0] == 59 )
        v143 = v141->m128i_i32[0] - (_DWORD)v142;
      else
        v143 = v141->m128i_i32[0] - (_DWORD)v142 + v141->m128i_i32[2];
      v130 = (char *)sub_E8280(v153, "CREATE %s %.*s", v87, v143, v142);
LABEL_236:
      v144 = 32LL * v147;
      sub_15B750(
        v6,
        "UPDATE %Q.sqlite_master SET type='%s', name=%Q, tbl_name=%Q, rootpage=#%d, sql=%Q WHERE rowid=#%d",
        *(_QWORD *)(*(_QWORD *)(v153 + 32) + v144),
        v151,
        *v8,
        *v8,
        v6[7].m128i_u32[3],
        v130,
        v6[7].m128i_u32[2]);
      if ( v130 )
        sub_C9250(v153, v130);
      sub_E2460(v6->m128i_i64[0], v6[1].m128i_i64[0], v147);
      if ( ((_BYTE)v8[6] & 8) != 0 && !v6[18].m128i_i8[4] )
      {
        v145 = (_QWORD *)(*(_QWORD *)(v153 + 32) + v144);
        if ( !*(_QWORD *)(v145[3] + 104LL) )
          sub_15B750(v6, "CREATE TABLE %Q.sqlite_sequence(name,seq)", *v145);
      }
      v146 = sub_E8280(v153, "tbl_name='%q' AND type!='trigger'", *v8);
      sub_E18F0((__int64)v86, v147, v146, 0);
      if ( *(_BYTE *)(v153 + 197) )
        goto LABEL_48;
      goto LABEL_153;
    }
    if ( v6[18].m128i_i8[4] )
    {
      v6[1].m128i_i32[2] = 1;
      ++v6[3].m128i_i32[0];
      return __readfsqword(0x28u) ^ v174;
    }
    v96 = v6[3].m128i_i32[2];
    v97 = v96 + 3;
    v98 = (__m128i *)v6[10].m128i_i64[0];
    v6[3].m128i_i32[2] = v96 + 3;
    if ( !v98 )
      v98 = v6;
    v98[2].m128i_i8[1] = 1;
    sub_E1710((__int64)v86, 113, 1u, v6[7].m128i_u32[3], v147);
    v99 = *((int *)v86 + 36);
    if ( (int)v99 > 0 )
      *(_WORD *)(v86[17] + 24 * v99 - 22) = 16;
    v6[3].m128i_i32[1] = 2;
    v100 = *((_DWORD *)v86 + 36);
    sub_E1710((__int64)v86, 10, v96 + 1, 0, v100 + 1);
    if ( v6[3].m128i_i32[0] )
      return __readfsqword(0x28u) ^ v174;
    v101 = sub_11F0B0((__int64)v6, a5, 65);
    if ( !v101 )
      return __readfsqword(0x28u) ^ v174;
    v102 = *(_WORD *)(v101 + 54);
    *((_WORD *)v8 + 28) = v102;
    *((_WORD *)v8 + 27) = v102;
    v8[1] = *(const char **)(v101 + 8);
    *(_WORD *)(v101 + 54) = 0;
    *(_QWORD *)(v101 + 8) = 0;
    sub_D8230(v153, (_QWORD *)v101);
    LOBYTE(v170) = 13;
    v173 = 0;
    HIDWORD(v170) = v96 + 1;
    v171 = 0;
    v172 = 0;
    sub_11F190(v6, a5, &v170);
    if ( v6[3].m128i_i32[0] )
      return __readfsqword(0x28u) ^ v174;
    sub_E1710((__int64)v86, 68, v96 + 1, 0, 0);
    *(_BYTE *)(v86[3] + 31) = 0;
    *(_DWORD *)(v86[3] + 40) = 0;
    v103 = *((_DWORD *)v86 + 36);
    if ( v100 < 0 )
      v100 = v103 - 1;
    v104 = byte_241F50;
    if ( !*(_BYTE *)(*v86 + 103) )
      v104 = (_BYTE *)(v86[17] + 24LL * v100);
    *((_DWORD *)v104 + 2) = v103;
    v105 = v96 + 2;
    v106 = sub_E1710((__int64)v86, 11, HIDWORD(v170), 0, 0);
    sub_E1710((__int64)v86, 97, HIDWORD(v171), v172, v105);
    sub_E3840((__int64)v86, (__int64)v8, 0, v107, v108, v109);
    sub_E1710((__int64)v86, 127, 1u, v97, 0);
    sub_E1710((__int64)v86, 128, 1u, v105, v97);
    sub_E1710((__int64)v86, 8, 0, v106, 0);
    v110 = *((_DWORD *)v86 + 36);
    if ( v106 < 0 )
      v106 = v110 - 1;
    v111 = byte_241F50;
    if ( !*(_BYTE *)(*v86 + 103) )
      v111 = (_BYTE *)(v86[17] + 24LL * v106);
    *((_DWORD *)v111 + 2) = v110;
    sub_E1710((__int64)v86, 122, 1u, 0, 0);
    v112 = *((__int16 *)v8 + 27);
    v113 = (__int64)v8[1];
    if ( v112 <= 0 )
    {
      v121 = (char *)*v8;
      v114 = 0;
      v122 = **v8;
      if ( !v122 )
      {
        v125 = 2;
        v128 = "";
        v161 = ")";
        v157 = ",";
LABEL_220:
        v159 = v128;
        v165 = v125 + 6 * v112 + 35;
        v129 = sub_D1E10(v165, v113);
        v130 = (char *)v129;
        if ( v129 )
        {
          sub_E89C0(v165, v129, "CREATE TABLE ");
          LODWORD(v170) = strlen(v130) & 0x3FFFFFFF;
          sub_D1070((__int64)v130, (int *)&v170, (unsigned __int8 *)*v8);
          v131 = (int)v170;
          LODWORD(v170) = (_DWORD)v170 + 1;
          v130[v131] = 40;
          v132 = v8[1];
          v133 = (int)v170;
          if ( *((__int16 *)v8 + 27) > 0 )
          {
            v134 = v159;
            v135 = 0;
            v160 = v86;
            v163 = v6;
            sub_E89C0(v165 - (_DWORD)v170, (__int64)&v130[(int)v170], v134);
            while ( 1 )
            {
              v138 = (int)v170;
              if ( &v130[(int)v170] )
                v138 += strlen(&v130[(int)v170]) & 0x3FFFFFFF;
              LODWORD(v170) = v138;
              sub_D1070((__int64)v130, (int *)&v170, *(unsigned __int8 **)v132);
              v139 = v132[9] - 65;
              v140 = *(&off_23A8A0 + v139);
              if ( v140 )
              {
                v136 = strlen((const char *)*(&off_23A8A0 + v139)) & 0x3FFFFFFF;
                v137 = (int)v136;
              }
              else
              {
                LODWORD(v136) = 0;
                v137 = 0;
              }
              ++v135;
              v132 += 16;
              memcpy(&v130[(int)v170], v140, v137);
              v133 = v136 + (_DWORD)v170;
              LODWORD(v170) = v136 + (_DWORD)v170;
              if ( v135 >= *((__int16 *)v8 + 27) )
                break;
              sub_E89C0(v165 - v133, (__int64)&v130[v133], v157);
            }
            v86 = v160;
            v6 = v163;
          }
          sub_E89C0(v165 - v133, (__int64)&v130[v133], "%s", v161);
        }
        else if ( !*(_BYTE *)(v153 + 103) && !*(_BYTE *)(v153 + 104) )
        {
          sub_DBE60(v153);
        }
        goto LABEL_236;
      }
    }
    else
    {
      v114 = 0;
      v115 = v113 + 16 * ((unsigned int)(v112 - 1) + 1LL);
      do
      {
        v116 = *(char **)v113;
        v117 = **(_BYTE **)v113;
        if ( v117 )
        {
          v118 = 0;
          do
          {
            v119 = v117 == 34;
            v117 = *++v116;
            v118 += v119 + 1;
          }
          while ( *v116 );
          v120 = v118 + 7;
        }
        else
        {
          v120 = 7;
        }
        v113 += 16;
        v114 += v120;
      }
      while ( v115 != v113 );
      v121 = (char *)*v8;
      v122 = **v8;
      if ( !v122 )
      {
        v124 = 0;
LABEL_214:
        v125 = v114 + v124 + 2;
        v126 = ")";
        if ( v125 > 49 )
          v126 = "\n)";
        v161 = v126;
        v127 = ",";
        if ( v125 > 49 )
          v127 = ",\n  ";
        v128 = "\n  ";
        v157 = v127;
        if ( v125 <= 49 )
          v128 = "";
        goto LABEL_220;
      }
    }
    LODWORD(v113) = 0;
    do
    {
      v123 = v122 == 34;
      v122 = *++v121;
      v124 = v113 + v123 + 1;
      v113 = v124;
    }
    while ( *v121 );
    goto LABEL_214;
  }
LABEL_48:
  if ( sub_D1F90((__int64)(v8[12] + 8), (unsigned __int8 *)*v8, (__int64)v8) )
  {
    if ( !*(_BYTE *)(v153 + 103) && !*(_BYTE *)(v153 + 104) )
      sub_DBE60(v153);
    return __readfsqword(0x28u) ^ v174;
  }
  v6[21].m128i_i64[0] = 0;
  *(_DWORD *)(v153 + 44) |= 1u;
  if ( !strcmp(*v8, "sqlite_sequence") )
    *((_QWORD *)v8[12] + 13) = v8;
LABEL_153:
  if ( !a5 && !*((_BYTE *)v8 + 63) )
  {
    v90 = *a2;
    if ( !*a2 )
      v90 = a3->m128i_i64[0];
    *((_DWORD *)v8 + 16) = v90 - v6[16].m128i_i32[0] + 13;
  }
  return __readfsqword(0x28u) ^ v174;
}
