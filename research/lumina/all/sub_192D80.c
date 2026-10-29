__int64 __fastcall sub_192D80(_WORD *a1, __int64 a2, __m128i *a3, int a4)
{
  int v4; // ebp
  unsigned int v6; // eax
  int v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // rdx
  const char *v10; // rsi
  __int16 v12; // ax
  __int64 v13; // r12
  unsigned int v14; // eax
  int v15; // r9d
  unsigned int v16; // edi
  int v17; // esi
  __int64 v18; // r13
  __int64 v19; // rbx
  int v20; // r8d
  int v21; // r9d
  char *v22; // rdi
  int v23; // eax
  int v24; // ebx
  __m128i *v25; // r10
  char *v26; // r15
  int v27; // ebx
  char *v28; // rbp
  int v29; // r12d
  __m128i *v30; // r10
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int16 v33; // ax
  char *v34; // rax
  _WORD *v35; // rdi
  char v36; // al
  int v37; // r11d
  __int64 v38; // rbp
  __m128i *v39; // rcx
  int v40; // edx
  __int16 v41; // ax
  __m128i v42; // xmm0
  int v43; // edx
  __m128i *v44; // rcx
  __int16 v45; // ax
  int v46; // edx
  __m128i *v47; // rcx
  __int16 v48; // ax
  unsigned __int16 *v49; // rcx
  unsigned int v50; // edi
  __m128i *v51; // rdx
  int v52; // eax
  int v53; // esi
  unsigned int v54; // eax
  unsigned __int16 v55; // ax
  char *v56; // r8
  char *v57; // rcx
  char v58; // dl
  char *i; // rsi
  char v60; // al
  int v61; // edx
  char v62; // al
  int v63; // edx
  unsigned int v64; // r13d
  unsigned int v65; // ecx
  __m128i *v66; // r9
  int v67; // edi
  __int16 v68; // ax
  __m128i v69; // xmm0
  int v70; // edi
  __m128i *v71; // r9
  __int16 v72; // ax
  int v73; // edi
  __m128i *v74; // r9
  __int16 v75; // ax
  unsigned __int16 *v76; // r9
  unsigned int v77; // r10d
  __m128i *v78; // rdi
  int v79; // eax
  int v80; // edx
  unsigned int v81; // eax
  __int16 v82; // ax
  unsigned int v83; // ebx
  char *v84; // r12
  __m128i v85; // xmm0
  __int16 epi16; // dx
  int v87; // ecx
  int v88; // eax
  unsigned int v89; // eax
  __m128i *v90; // rdi
  unsigned int v91; // esi
  unsigned int v92; // eax
  __m128i *v93; // rcx
  char *v94; // rbx
  unsigned int v95; // r13d
  __m128i v96; // xmm0
  __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // r10
  unsigned int v100; // edx
  int v101; // eax
  _WORD *v102; // rsi
  char *v103; // rax
  char v104; // cl
  char *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rsi
  int v108; // eax
  size_t v109; // rax
  __int64 v110; // rbx
  size_t v111; // rax
  int v112; // r11d
  int v113; // esi
  size_t v114; // r14
  unsigned int v115; // r10d
  unsigned int v116; // eax
  signed int v117; // r10d
  char *v118; // rcx
  int v119; // r8d
  int v120; // r9d
  unsigned int v121; // r10d
  char *v122; // rcx
  int v123; // eax
  __m128i *v124; // r10
  __m128i v125; // xmm0
  int v126; // r9d
  unsigned int v127; // esi
  unsigned __int16 *v128; // rcx
  __m128i *v129; // r11
  __m128i *v130; // rdx
  int v131; // eax
  int v132; // edi
  unsigned int v133; // eax
  __m128i v134; // xmm0
  size_t v135; // rax
  __int64 v136; // rbx
  signed int v137; // r13d
  unsigned int v138; // eax
  signed int v139; // ebx
  int v140; // eax
  size_t v141; // rbx
  size_t v142; // rax
  int v143; // eax
  int v144; // eax
  char *v145; // rdi
  size_t v146; // rdx
  unsigned int src; // [rsp+10h] [rbp-178h]
  char *srca; // [rsp+10h] [rbp-178h]
  unsigned int srcb; // [rsp+10h] [rbp-178h]
  int v151; // [rsp+18h] [rbp-170h]
  __m128i *v152; // [rsp+18h] [rbp-170h]
  int v154; // [rsp+20h] [rbp-168h]
  int v155; // [rsp+24h] [rbp-164h]
  int v156; // [rsp+24h] [rbp-164h]
  __m128i *v157; // [rsp+28h] [rbp-160h]
  unsigned int v158; // [rsp+30h] [rbp-158h]
  unsigned int n; // [rsp+34h] [rbp-154h]
  char *n_4; // [rsp+38h] [rbp-150h]
  int v161; // [rsp+40h] [rbp-148h]
  __m128i *v162; // [rsp+48h] [rbp-140h]
  __m128i v163; // [rsp+50h] [rbp-138h] BYREF
  __m128i v164; // [rsp+60h] [rbp-128h] BYREF
  __m128i v165; // [rsp+70h] [rbp-118h] BYREF
  __m128i si128; // [rsp+80h] [rbp-108h] BYREF
  __m128i v167; // [rsp+90h] [rbp-F8h] BYREF
  int v168; // [rsp+A0h] [rbp-E8h]
  __int16 v169; // [rsp+A4h] [rbp-E4h]
  __m128i v170; // [rsp+B0h] [rbp-D8h] BYREF
  __int32 v171; // [rsp+C0h] [rbp-C8h]
  _WORD v172[6]; // [rsp+C4h] [rbp-C4h] BYREF
  __m128i v173; // [rsp+D0h] [rbp-B8h] BYREF
  __int32 v174; // [rsp+E0h] [rbp-A8h]
  __int16 v175; // [rsp+E4h] [rbp-A4h]
  __m128i v176; // [rsp+F0h] [rbp-98h] BYREF
  __int32 v177; // [rsp+100h] [rbp-88h]
  __int16 v178; // [rsp+104h] [rbp-84h] BYREF
  char v179[10]; // [rsp+106h] [rbp-82h] BYREF
  char s[56]; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int64 v181; // [rsp+148h] [rbp-40h]

  v181 = __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1225);
    BUG();
  }
  v4 = a2;
  v6 = sub_192D10(a3);
  if ( v6 == 3 )
  {
    v9 = a2;
    v10 = "+Inf";
    return sub_1998A0(a1, v10, v9);
  }
  if ( v6 > 3 )
  {
    if ( v6 == 4 )
    {
      v9 = a2;
      v10 = "-Inf";
      return sub_1998A0(a1, v10, v9);
    }
  }
  else
  {
    if ( !v6 )
      return v181 - __readfsqword(0x28u);
    if ( v6 == 2 )
    {
      v9 = a2;
      v10 = "NaN";
      return sub_1998A0(a1, v10, v9);
    }
  }
  n = BYTE1(a4);
  v158 = BYTE2(a4);
  if ( BYTE2(a4) && (BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 || (unsigned int)BYTE1(a4) + 3 >= (unsigned __int64)a2) )
  {
    v158 = 0;
    n = 0;
  }
  n_4 = "";
  v163 = _mm_loadu_si128(a3);
  v12 = v163.m128i_i16[7];
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B7190);
  if ( v163.m128i_i16[7] < 0 )
  {
    v12 = v163.m128i_i16[7] & 0x7FFF;
    v163.m128i_i16[7] &= ~0x8000u;
    n_4 = "-";
  }
  if ( !v12 )
  {
    if ( !v158 )
    {
      sub_19D9D0((_DWORD)a1, a2, (unsigned int)"%s0.0", (_DWORD)n_4, v7, v8);
      return v181 - __readfsqword(0x28u);
    }
    strcpy(s, "0.0");
    if ( n )
    {
      v155 = 0;
      LODWORD(v13) = v158;
      n = n - v158 - 3;
      goto LABEL_22;
    }
    goto LABEL_98;
  }
  v23 = sub_191DC0((__int64)&unk_1D0EA0, (__int64)&v163);
  v155 = v23;
  if ( !v23 )
  {
    v30 = &v173;
    goto LABEL_48;
  }
  if ( v23 >= 0 )
  {
    if ( v163.m128i_i16[7] )
    {
      sub_1911A0((__int64)&v163, &v173);
      v124 = &v173;
      if ( (v175 & 7) != 0 )
      {
        v156 = 0;
      }
      else
      {
        do
        {
          v125 = _mm_load_si128(v124);
          v171 = v124[1].m128i_i32[0];
          v170 = v125;
          v172[0] = 0;
          sub_190880((__int64)&v170);
          sub_190880((__int64)&v170);
          v127 = 0;
          v128 = v172;
          v130 = v129;
          do
          {
            v131 = v130->m128i_u16[0];
            v132 = *v128;
            v130 = (__m128i *)((char *)v130 - 2);
            --v128;
            v133 = v127 + v132 + v131;
            v128[1] = v133;
            v127 = HIWORD(v133);
          }
          while ( v130 != (__m128i *)&v173.m128i_i16[1] );
          for ( v170.m128i_i16[1] += 3; v170.m128i_i16[2]; ++v170.m128i_i16[1] )
            sub_190880((__int64)&v170);
          if ( v172[0] )
            break;
          if ( v170.m128i_i16[1] > 0x3FFEu )
            break;
          v134 = _mm_load_si128(&v170);
          --v126;
          v124[1].m128i_i32[0] = v171;
          v175 = 0;
          *v124 = v134;
        }
        while ( v126 != -34 );
        v156 = v126;
      }
      v152 = v124;
      sub_191160(v124, (__int64)&v163);
      v25 = v152;
    }
    else if ( v163.m128i_i16[6] < 0 )
    {
      v156 = 0;
      v25 = &v173;
    }
    else
    {
      v24 = 0;
      do
      {
        --v24;
        sub_191E80((__int64)&v163, (__int64)&unk_1D0E20, &v163);
      }
      while ( v163.m128i_i16[6] >= 0 );
      v156 = v24;
      v25 = &v173;
    }
    v151 = v4;
    v26 = (char *)&unk_1D0C80;
    v27 = -4096;
    v28 = (char *)&unk_1D0D60;
    v29 = v156;
    v162 = v25;
    v164 = _mm_load_si128(&v163);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B7190);
    while ( (int)sub_191DC0((__int64)&unk_1D0EA0, (__int64)&v164) > 0 )
    {
      if ( (int)sub_191DC0((__int64)v26, (__int64)&v164) >= 0 )
      {
        v29 += v27;
        sub_191E80((__int64)&v164, (__int64)v28, &v164);
        sub_191E80((__int64)&si128, (__int64)v28, &si128);
      }
      v27 /= 2;
      if ( v26 == (char *)&unk_1D0D40 )
        break;
      v26 += 16;
      v28 += 16;
    }
    v155 = v29;
    v4 = v151;
    sub_191F50((__int64)&unk_1D0EA0, (__int64)&si128, &si128);
    v30 = v162;
    goto LABEL_48;
  }
  v155 = 0;
  v83 = 16;
  v165 = _mm_load_si128(&v163);
  v84 = (char *)&unk_1D0DE0;
  v165.m128i_i16[7] = 16494;
  do
  {
    sub_191F50((__int64)&v165, (__int64)v84, &si128);
    v85 = _mm_load_si128(&si128);
    epi16 = _mm_extract_epi16(v85, 7);
    v176 = v85;
    v87 = (epi16 & 0x7FFF) - 16382;
    if ( v87 <= 0 )
    {
      v164 = 0;
    }
    else
    {
      v88 = 112 - v87;
      v164 = _mm_load_si128(&v176);
      if ( 112 - v87 <= 0 )
        goto LABEL_139;
      if ( v88 <= 15 )
      {
        v93 = &v164;
      }
      else
      {
        v89 = (unsigned int)v88 >> 4;
        v90 = &v164;
        v91 = v89 - 1;
        v92 = 2 * v89;
        if ( v92 >= 8 )
        {
          LODWORD(v98) = 0;
          do
          {
            v99 = (unsigned int)v98;
            v98 = (unsigned int)(v98 + 8);
            *(__int64 *)((char *)v164.m128i_i64 + v99) = 0;
          }
          while ( (unsigned int)v98 < (v92 & 0xFFFFFFF8) );
          v90 = (__m128i *)((char *)&v164 + v98);
        }
        if ( (v92 & 4) != 0 )
        {
          v90->m128i_i32[0] = 0;
          v90 = (__m128i *)((char *)v90 + 4);
        }
        if ( (v92 & 2) != 0 )
          v90->m128i_i16[0] = 0;
        v88 = 96 - v87 - 16 * v91;
        v93 = (__m128i *)&v164.m128i_i16[v91 + 1];
      }
      v93->m128i_i16[0] &= word_1D0E40[v88];
    }
    if ( epi16 < 0 )
    {
      v97 = 0;
      while ( v176.m128i_i16[v97] == v164.m128i_i16[v97] )
      {
        if ( ++v97 == 7 )
          goto LABEL_139;
      }
      sub_191940((__int64)&v164, (__int64)&unk_1D0EA0, &v164, 1);
    }
LABEL_139:
    if ( si128.m128i_i64[0] == v164.m128i_i64[0]
      && *(__int64 *)((char *)si128.m128i_i64 + 6) == *(__int64 *)((char *)v164.m128i_i64 + 6) )
    {
      v155 += v83;
      v165 = _mm_load_si128(&si128);
    }
    v84 += 16;
    v83 >>= 1;
  }
  while ( v84 != (char *)&unk_1D0E30 );
  v94 = (char *)&unk_1D0D60;
  v95 = 4096;
  v165.m128i_i16[7] = v165.m128i_i16[7] + v163.m128i_i16[7] - 16494;
  v96 = _mm_load_si128(&v165);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B7190);
  v163 = v96;
  do
  {
    if ( (int)sub_191DC0((__int64)&unk_1D0E20, (__int64)&v165) > 0 )
      break;
    if ( (int)sub_191DC0((__int64)v94, (__int64)&v165) <= 0 )
    {
      sub_191F50((__int64)&v165, (__int64)v94, &v165);
      sub_191E80((__int64)&si128, (__int64)v94, &si128);
      v155 += v95;
    }
    v94 += 16;
    v95 >>= 1;
  }
  while ( v94 != (char *)&unk_1D0E30 );
  v30 = &v173;
LABEL_48:
  v157 = v30;
  sub_1911A0((__int64)&si128, v30);
  v31 = _mm_load_si128(&v173);
  v168 = v174;
  v169 = 0;
  v167 = v31;
  sub_1911A0((__int64)&v163, v157);
  v32 = _mm_load_si128(&v173);
  v177 = v174;
  v178 = 0;
  v176 = v32;
  v33 = sub_191780((__int64)&v167, (__int64)&v176);
  if ( v33 == 10 )
  {
    ++v155;
    v36 = 49;
  }
  else if ( v33 )
  {
    v36 = v33 + 48;
  }
  else
  {
    do
    {
      v34 = &v176.m128i_i8[4];
      v35 = &unk_1D0E74;
      while ( *(_WORD *)v34 == *v35 )
      {
        v34 += 2;
        ++v35;
        if ( v34 == v179 )
        {
          v36 = 48;
          goto LABEL_54;
        }
      }
      v66 = (__m128i *)&v178;
      v67 = 0;
      do
      {
        if ( v66->m128i_i16[0] < 0 )
          v67 |= 1u;
        v68 = 2 * v66->m128i_i16[0];
        if ( (v67 & 2) != 0 )
          v68 |= 1u;
        v66 = (__m128i *)((char *)v66 - 2);
        v67 *= 2;
        v66->m128i_i16[1] = v68;
      }
      while ( v66 != (__m128i *)&v176.m128i_i16[1] );
      v69 = _mm_load_si128(&v176);
      v70 = 0;
      v71 = (__m128i *)v172;
      v171 = v177;
      v172[0] = 0;
      v170 = v69;
      do
      {
        if ( v71->m128i_i16[0] < 0 )
          v70 |= 1u;
        v72 = 2 * v71->m128i_i16[0];
        if ( (v70 & 2) != 0 )
          v72 |= 1u;
        v71 = (__m128i *)((char *)v71 - 2);
        v70 *= 2;
        v71->m128i_i16[1] = v72;
      }
      while ( v71 != (__m128i *)&v170.m128i_i16[1] );
      v73 = 0;
      v74 = (__m128i *)v172;
      do
      {
        if ( v74->m128i_i16[0] < 0 )
          v73 |= 1u;
        v75 = 2 * v74->m128i_i16[0];
        if ( (v73 & 2) != 0 )
          v75 |= 1u;
        v74 = (__m128i *)((char *)v74 - 2);
        v73 *= 2;
        v74->m128i_i16[1] = v75;
      }
      while ( v74 != (__m128i *)&v170.m128i_i16[1] );
      v76 = (unsigned __int16 *)&v178;
      v77 = 0;
      v78 = (__m128i *)v172;
      do
      {
        v79 = v78->m128i_u16[0];
        v80 = *v76;
        v78 = (__m128i *)((char *)v78 - 2);
        --v76;
        v81 = v77 + v80 + v79;
        v76[1] = v81;
        v77 = HIWORD(v81);
      }
      while ( v78 != (__m128i *)&v170.m128i_i16[1] );
      v82 = sub_191780((__int64)&v167, (__int64)&v176);
      --v155;
    }
    while ( !v82 );
    v36 = v82 + 48;
  }
LABEL_54:
  v37 = (unsigned __int8)a4;
  s[0] = v36;
  s[1] = 46;
  if ( (unsigned __int8)a4 > 0x21u )
    v37 = 33;
  v161 = v4;
  v38 = 0;
  v154 = v37;
  do
  {
    v39 = (__m128i *)&v178;
    v40 = 0;
    do
    {
      if ( v39->m128i_i16[0] < 0 )
        v40 |= 1u;
      v41 = 2 * v39->m128i_i16[0];
      if ( (v40 & 2) != 0 )
        v41 |= 1u;
      v39 = (__m128i *)((char *)v39 - 2);
      v40 *= 2;
      v39->m128i_i16[1] = v41;
    }
    while ( v39 != (__m128i *)&v176.m128i_i16[1] );
    v42 = _mm_load_si128(&v176);
    v43 = 0;
    v44 = (__m128i *)v172;
    v171 = v177;
    v172[0] = 0;
    v170 = v42;
    do
    {
      if ( v44->m128i_i16[0] < 0 )
        v43 |= 1u;
      v45 = 2 * v44->m128i_i16[0];
      if ( (v43 & 2) != 0 )
        v45 |= 1u;
      v44 = (__m128i *)((char *)v44 - 2);
      v43 *= 2;
      v44->m128i_i16[1] = v45;
    }
    while ( v44 != (__m128i *)&v170.m128i_i16[1] );
    v46 = 0;
    v47 = (__m128i *)v172;
    do
    {
      if ( v47->m128i_i16[0] < 0 )
        v46 |= 1u;
      v48 = 2 * v47->m128i_i16[0];
      if ( (v46 & 2) != 0 )
        v48 |= 1u;
      v47 = (__m128i *)((char *)v47 - 2);
      v46 *= 2;
      v47->m128i_i16[1] = v48;
    }
    while ( v47 != (__m128i *)&v170.m128i_i16[1] );
    v49 = (unsigned __int16 *)&v178;
    v50 = 0;
    v51 = (__m128i *)v172;
    do
    {
      v52 = v51->m128i_u16[0];
      v53 = *v49;
      v51 = (__m128i *)((char *)v51 - 2);
      --v49;
      v54 = v50 + v53 + v52;
      v49[1] = v54;
      v50 = HIWORD(v54);
    }
    while ( v51 != (__m128i *)&v170.m128i_i16[1] );
    v55 = sub_191780((__int64)&v167, (__int64)&v176);
    s[v38++ + 2] = v55 + 48;
  }
  while ( v154 >= (int)v38 );
  v4 = v161;
  v57 = &s[v154 + 2];
  v58 = *(v57 - 1);
  if ( v55 > 4u )
  {
    if ( v55 == 5 )
    {
      v102 = &unk_1D0E74;
      v103 = &v176.m128i_i8[4];
      v56 = v179;
      while ( *(_WORD *)v103 == *v102 )
      {
        v103 += 2;
        ++v102;
        if ( v103 == v179 )
        {
          if ( (v58 & 1) != 0 )
          {
            i = v57 - 1;
            v61 = v58 & 0x7F;
            v62 = *(v57 - 1) & 0x7F;
            goto LABEL_81;
          }
          goto LABEL_87;
        }
      }
    }
    for ( i = v57 - 1; ; --i )
    {
      v60 = v58;
      v61 = v58 & 0x7F;
      v62 = v60 & 0x7F;
      if ( v62 == 46 )
        break;
LABEL_81:
      *i = v62 + 1;
      if ( v61 + 1 <= 57 )
        goto LABEL_86;
      *i = 48;
      v58 = *(i - 1);
    }
    v63 = (*(i - 1))++;
    if ( v63 + 1 > 57 )
    {
      ++v155;
      *(i - 1) = 49;
    }
LABEL_86:
    v58 = *(v57 - 1);
  }
LABEL_87:
  while ( v58 == 48 )
  {
    v58 = *(v57 - 2);
    --v57;
  }
  if ( v58 == 46 )
    *v57++ = 48;
  *v57 = 0;
  if ( !n )
  {
    LODWORD(v19) = sub_19D9D0((_DWORD)a1, v161, (unsigned int)"%s%s", (_DWORD)n_4, (unsigned int)s, v8);
    goto LABEL_29;
  }
  v64 = -v155;
  if ( v155 > 0 )
    v64 = v155;
  if ( !v158 )
  {
    if ( !v155 )
    {
LABEL_98:
      sub_19D9D0((_DWORD)a1, v4, (unsigned int)"%s%s", (_DWORD)n_4, (unsigned int)s, v8);
      return v181 - __readfsqword(0x28u);
    }
    if ( n < v64 )
    {
      LODWORD(v19) = sub_19D9D0((_DWORD)a1, v161, (unsigned int)"%s%s", (_DWORD)n_4, (unsigned int)s, v8);
      goto LABEL_30;
    }
    if ( s[2] == 48 && !s[3] )
    {
      s[1] = 0;
      v13 = 0;
      goto LABEL_170;
    }
    v13 = 0;
LABEL_183:
    v109 = strlen(&s[2]);
    memmove(&s[1], &s[2], v109 + 1);
    if ( v158 )
    {
LABEL_184:
      if ( v155 > 0 )
      {
        LODWORD(v110) = n - v64;
        if ( n == v64 )
        {
          v110 = 0;
          v111 = strlen(s);
          v112 = (int)a1;
          v113 = v161;
          v114 = v111;
          v115 = v111;
          if ( v64 < (unsigned int)v111 )
          {
LABEL_187:
            v116 = v115 - v64 - 1;
            v117 = v64 + 1;
            if ( v158 < v116 )
            {
              v144 = v64 + 1 + v13;
              LODWORD(v13) = 0;
              s[v144] = 0;
            }
            else
            {
              LODWORD(v13) = v158 - v116;
            }
            v114 = v117;
            v118 = (char *)(v110
                          + (int)sub_19D9D0(v112, v113, (unsigned int)"%s%.*s", (_DWORD)n_4, v117, (unsigned int)s));
            v121 = v64 + 1;
            goto LABEL_190;
          }
        }
        else
        {
          v110 = (unsigned int)v110;
          memset(a1, 32, (unsigned int)v110);
          *((_BYTE *)a1 + (unsigned int)v110) = 0;
          v142 = strlen(s);
          v112 = (_DWORD)a1 + v110;
          v113 = v161 - v110;
          v114 = v142;
          v115 = v142;
          if ( v64 < (unsigned int)v142 )
            goto LABEL_187;
        }
        srcb = v115;
        v143 = sub_19D9D0(v112, v113, (unsigned int)"%s%.*s", (_DWORD)n_4, v115, (unsigned int)s);
        v121 = srcb;
        v118 = (char *)(v110 + v143);
        goto LABEL_190;
      }
      LODWORD(v136) = n - 1;
      if ( n == 1 )
      {
        v105 = (char *)a1;
        v106 = 1;
        v136 = 0;
      }
      else
      {
        v136 = (unsigned int)v136;
        memset(a1, 32, (unsigned int)v136);
        v105 = (char *)a1 + (unsigned int)v136;
        v106 = (unsigned int)v136 + 1LL;
        *v105 = 0;
      }
      v19 = v136 + 2;
      v104 = *n_4;
      if ( !*n_4 )
      {
LABEL_174:
        v8 = v158;
        *v105 = 48;
        *((_BYTE *)a1 + v106) = 46;
        if ( v158 && (int)v13 < (int)v64 )
        {
          v108 = v161 - v19;
          if ( v161 - (int)v19 >= (unsigned int)v13 )
            goto LABEL_178;
          goto LABEL_177;
        }
        v137 = v64 - 1;
        if ( v137 )
        {
          v145 = (char *)a1 + v19;
          v19 += v137;
          memset(v145, 48, v137);
          LODWORD(v56) = v158;
          if ( v158 )
          {
            v13 = (unsigned int)(v13 - v137);
            goto LABEL_216;
          }
        }
        else if ( v158 )
        {
LABEL_216:
          v138 = strlen(s);
          if ( (unsigned int)v13 < v138 )
          {
            s[v13] = 0;
            sub_19D9D0(v19 + (_DWORD)a1, v161 - v19, (unsigned int)"%s", (unsigned int)s, v119, v120);
            return v181 - __readfsqword(0x28u);
          }
          LODWORD(v13) = v13 - v138;
          v122 = s;
LABEL_192:
          v123 = sub_19D9D0((int)a1 + (int)v19, v161 - (int)v19, (unsigned int)"%s", (_DWORD)v122, v119, v120);
          if ( !(_DWORD)v13 )
            return v181 - __readfsqword(0x28u);
          v19 += v123;
          v108 = v161 - v19;
          if ( v161 - (int)v19 >= (unsigned int)v13 )
          {
LABEL_179:
            v155 = 0;
            goto LABEL_28;
          }
LABEL_177:
          LODWORD(v13) = v108;
LABEL_178:
          if ( !(_DWORD)v13 )
            return v181 - __readfsqword(0x28u);
          goto LABEL_179;
        }
LABEL_220:
        sub_19D9D0(v19 + (_DWORD)a1, v161 - v19, (unsigned int)"%s", (unsigned int)s, (_DWORD)v56, v8);
        return v181 - __readfsqword(0x28u);
      }
      v19 = v106 + 2;
      v107 = v106++;
LABEL_173:
      *v105 = v104;
      v105 = (char *)a1 + v107;
      goto LABEL_174;
    }
LABEL_170:
    if ( v155 > 0 )
    {
      v135 = strlen(s);
      v114 = v135;
      if ( v64 >= (unsigned int)v135 )
      {
        src = v135;
        v140 = sub_19D9D0((_DWORD)a1, v161, (unsigned int)"%s%.*s", (_DWORD)n_4, v135, (unsigned int)s);
        v121 = src;
        v118 = (char *)v140;
        if ( s[(unsigned int)v114] )
          goto LABEL_222;
      }
      else
      {
        v114 = (int)(v64 + 1);
        v118 = (char *)(int)sub_19D9D0((_DWORD)a1, v161, (unsigned int)"%s%.*s", (_DWORD)n_4, v64 + 1, (unsigned int)s);
        v121 = v64 + 1;
        if ( s[v64 + 1] )
          goto LABEL_190;
      }
      LODWORD(v13) = v13 + 1;
LABEL_190:
      if ( v64 < v121 )
      {
LABEL_191:
        v19 = (__int64)(v118 + 1);
        v118[(_QWORD)a1] = 46;
        v122 = &s[v114];
        goto LABEL_192;
      }
LABEL_222:
      srca = v118;
      v141 = (int)(v64 + 1 - v121);
      memset(&v118[(_QWORD)a1], 48, v141);
      v118 = &srca[v141];
      goto LABEL_191;
    }
    v104 = *n_4;
    if ( !*n_4 )
    {
      *a1 = 11824;
      v139 = v64 - 1;
      if ( v64 == 1 )
      {
        LODWORD(v19) = 2;
      }
      else
      {
        v146 = v139;
        LODWORD(v19) = v139 + 2;
        memset(a1 + 1, 48, v146);
      }
      goto LABEL_220;
    }
    v105 = (char *)a1;
    v19 = 3;
    v106 = 2;
    v107 = 1;
    goto LABEL_173;
  }
  v13 = v158;
  v65 = n - 2 - (v158 + (v155 >= 0));
  n = v65;
  if ( !v155 )
    goto LABEL_22;
  if ( v65 >= v64 )
  {
    if ( s[2] == 48 && !s[3] )
    {
      s[1] = 0;
      goto LABEL_184;
    }
    goto LABEL_183;
  }
  n = v65 - ((v65 != 0) & ((unsigned int)v155 >> 31));
LABEL_22:
  v14 = strlen(&s[2]);
  if ( v158 < v14 )
  {
    v100 = v158;
    do
    {
      if ( s[v100 + 1] != 48 )
      {
        v101 = v100 + 2;
        LODWORD(v13) = v158 - v100;
        goto LABEL_161;
      }
      --v100;
    }
    while ( v100 );
    v101 = 2;
LABEL_161:
    s[v101] = 0;
  }
  else
  {
    LODWORD(v13) = v158 - v14;
  }
  if ( n )
  {
    v18 = n;
    memset(a1, 32, n);
    v16 = (_DWORD)a1 + n;
    *((_BYTE *)a1 + n) = 0;
    v17 = v4 - n;
  }
  else
  {
    v16 = (unsigned int)a1;
    v17 = v4;
    v18 = 0;
  }
  v19 = v18 + (int)sub_19D9D0(v16, v17, (unsigned int)"%s%s", (_DWORD)n_4, (unsigned int)s, v15);
  if ( (_DWORD)v13 )
  {
    if ( v4 - (int)v19 >= (unsigned int)v13 || (LODWORD(v13) = v4 - v19, v4 != (_DWORD)v19) )
    {
LABEL_28:
      v22 = (char *)a1 + v19;
      v19 += (int)v13;
      memset(v22, 48, (int)v13);
      *((_BYTE *)a1 + v19) = 0;
    }
  }
LABEL_29:
  if ( v155 )
LABEL_30:
    sub_19D9D0(v19 + (_DWORD)a1, v4 - v19, (unsigned int)"e%d", v155, v20, v21);
  return v181 - __readfsqword(0x28u);
}
