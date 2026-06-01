unsigned __int64 __fastcall sub_2E7660(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __m128i *v10; // r12
  _BYTE *v11; // r13
  _BYTE *v12; // r14
  __int64 v13; // r13
  __int64 i; // r13
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  const __m128i *v19; // r14
  _BYTE *v20; // r13
  _BYTE *v21; // r14
  __int64 *v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r15
  _QWORD *v29; // rax
  const __m128i *v30; // r15
  unsigned __int64 v31; // r14
  __int64 v32; // r13
  __m128i *v33; // rcx
  void (__fastcall *v34)(__m128i *, __m128i *, __int64); // rax
  __m128i *v35; // rax
  unsigned __int64 v36; // r13
  const __m128i *v37; // rdx
  _QWORD *v38; // rax
  __m128i v39; // xmm0
  _BYTE *v40; // r14
  _BYTE *v41; // r13
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __int64 v44; // rax
  _QWORD *v46; // rdx
  unsigned __int64 v47; // r10
  __m128i *v48; // r9
  unsigned __int64 v49; // r8
  const __m128i *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __m128i v53; // xmm0
  bool v54; // cf
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  __int64 v57; // r15
  __int64 v58; // rax
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r15
  __m128i *v61; // rax
  __m128i *v62; // rcx
  __m128i *v63; // rdi
  const __m128i *v64; // rsi
  __m128i v65; // xmm0
  char *v66; // r13
  void *v67; // r13
  __int64 *v68; // r9
  const __m128i *v69; // r14
  const __m128i *v70; // r15
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r14
  int v74; // r12d
  int v75; // r15d
  void *v76; // rax
  __int64 *v77; // r14
  __int64 v78; // r10
  __int64 *v79; // rsi
  __int64 v80; // r10
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // r13
  __int64 *v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // r14
  __int64 v87; // rcx
  int v88; // r11d
  __int64 v89; // rdx
  void *v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 *v96; // rax
  __int64 v97; // r14
  __int64 *v98; // r13
  const __m128i *v99; // rsi
  _DWORD *v100; // rdi
  int v101; // eax
  __int64 v102; // rsi
  __int64 v103; // rbp
  void *v104; // r12
  const __m128i *v105; // rbx
  const __m128i *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // r15
  const char *v109; // r14
  __int64 v110; // rbx
  const char *v111; // rdx
  __int64 v112; // r15
  void *v113; // rcx
  __int128 v114; // xmm0
  _QWORD *v115; // r10
  int v116; // eax
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // r8
  void *v120; // rax
  signed __int64 v121; // rax
  signed __int64 v122; // rcx
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // r13
  __int64 v125; // rax
  __m128i *v126; // rdx
  char *v127; // rcx
  unsigned __int64 *v128; // rsi
  __int64 v129; // rsi
  const __m128i *v130; // rdi
  __m128i v131; // xmm0
  void *v132; // r14
  __int64 v133; // r13
  __int64 v134; // [rsp+0h] [rbp-268h]
  size_t na; // [rsp+8h] [rbp-260h]
  __int64 nb; // [rsp+8h] [rbp-260h]
  unsigned __int64 v138; // [rsp+10h] [rbp-258h]
  __int64 v139; // [rsp+10h] [rbp-258h]
  void *v140; // [rsp+18h] [rbp-250h]
  __int64 v141; // [rsp+18h] [rbp-250h]
  __int64 v142; // [rsp+18h] [rbp-250h]
  void *v143; // [rsp+18h] [rbp-250h]
  const __m128i *v144; // [rsp+18h] [rbp-250h]
  char *v145; // [rsp+18h] [rbp-250h]
  __m128i *v147; // [rsp+30h] [rbp-238h]
  __m128i *v148; // [rsp+30h] [rbp-238h]
  const __m128i *v149; // [rsp+30h] [rbp-238h]
  char *v150; // [rsp+30h] [rbp-238h]
  __m128i *v151; // [rsp+30h] [rbp-238h]
  _QWORD *v152; // [rsp+30h] [rbp-238h]
  unsigned __int64 v153; // [rsp+38h] [rbp-230h]
  signed __int64 v154; // [rsp+38h] [rbp-230h]
  signed __int64 v155; // [rsp+38h] [rbp-230h]
  unsigned __int64 v156; // [rsp+40h] [rbp-228h]
  const __m128i *v157; // [rsp+40h] [rbp-228h]
  const __m128i *dest; // [rsp+60h] [rbp-208h]
  __int128 v159; // [rsp+68h] [rbp-200h]
  const char *v160; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v161; // [rsp+88h] [rbp-1E0h]
  __int128 v162; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v163; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v164; // [rsp+B8h] [rbp-1B0h]
  char *v165; // [rsp+C0h] [rbp-1A8h]
  __int64 v166; // [rsp+C8h] [rbp-1A0h]
  __m128i v167[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v168; // [rsp+F0h] [rbp-178h]
  __m128i v169[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v170; // [rsp+120h] [rbp-148h]
  _BYTE v171[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v172; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v173)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v174; // [rsp+150h] [rbp-118h] BYREF
  __m128i v175; // [rsp+158h] [rbp-110h] BYREF
  __m128i v176; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v177; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v178; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v179; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v180; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v181; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v182; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v183[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *m128i_i8; // [rsp+1F0h] [rbp-78h]
  _QWORD *v185; // [rsp+1F8h] [rbp-70h]
  __m128i v186; // [rsp+200h] [rbp-68h] BYREF
  __m128i v187; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v188; // [rsp+228h] [rbp-40h]

  v188 = __readfsqword(0x28u);
  sub_2C6D50((__int64)v167, a2);
  v168 = a1;
  sub_2C6D50((__int64)v169, a2);
  v170 = a1;
  sub_2C6D50((__int64)v171, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2C6D50((__int64)&v174, v167);
    v6 = *v5;
    v7 = v5[1] << 6;
    v140 = (void *)(*v5 + v7);
    sub_2C6D50((__int64)&v177, (const __m128i *)&v174);
    sub_2C6D50((__int64)v183, (const __m128i *)&v177);
    sub_2C6D50((__int64)&v180, (const __m128i *)v183);
    sub_606D0((__int64)v183);
    if ( v140 != (void *)v6 )
    {
      sub_2C6D50((__int64)v183, (const __m128i *)&v180);
      v8 = v7 >> 6;
      v9 = -2;
      if ( v8 )
      {
        _BitScanReverse64(&v8, v8);
        v9 = 2LL * (int)v8;
      }
      sub_2E70A0(v6, (__int64)v140, v9, (const __m128i *)v183);
      sub_606D0((__int64)v183);
      sub_2C6D50((__int64)v183, (const __m128i *)&v180);
      sub_2D7090(v6, (__int64)v140, (const __m128i *)v183);
      sub_606D0((__int64)v183);
    }
    ++v4;
    v5 += 3;
    sub_606D0((__int64)&v180);
    sub_606D0((__int64)&v177);
    sub_606D0((__int64)&v174);
  }
  v163 = nullptr;
  m128i_i8 = nullptr;
  v185 = v168;
  v162 = 0;
  *(_OWORD *)v183 = 0;
  sub_2C6D50((__int64)&v186, v169);
  v174 = v185;
  sub_2C6D50((__int64)&v175, &v186);
  v10 = &v181;
  v11 = v183[1];
  v12 = v183[0];
  v180 = v174;
  sub_2C6D50((__int64)&v181, &v175);
  v177 = v180;
  sub_2C6D50((__int64)&v178, &v181);
  v13 = v11 - v12;
  sub_606D0((__int64)&v181);
  if ( v13 > 16 )
  {
    v141 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v15 = *(_QWORD *)&v12[16 * i];
      v16 = *(_QWORD *)&v12[16 * i + 8];
      v182 = 0u;
      v181 = 0;
      v180 = v177;
      if ( v179.m128i_i64[0] )
      {
        v138 = v16;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v179.m128i_i64[0])(&v181, &v178, 2);
        v16 = v138;
        v182 = _mm_loadu_si128(&v179);
      }
      sub_2D34A0((__int64)v12, i, v141, v15, v16, (__int64)&v180);
      if ( v182.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
      if ( !i )
        break;
    }
  }
  v17 = 0;
  sub_606D0((__int64)&v178);
  sub_606D0((__int64)&v175);
  if ( a1[1] )
  {
    do
    {
      while ( !a1[3 * v17 + 3] )
      {
        v18 = a1[1];
        if ( ++v17 >= v18 )
          goto LABEL_22;
      }
      v19 = (const __m128i *)v183[1];
      if ( v183[1] == m128i_i8 )
      {
        v121 = ((char *)v183[1] - (char *)v183[0]) >> 4;
        if ( v121 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v122 = 1;
        if ( v121 )
          v122 = ((char *)v183[1] - (char *)v183[0]) >> 4;
        v54 = __CFADD__(v122, v121);
        v123 = v122 + v121;
        if ( v54 )
        {
          v124 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v123 > 0x7FFFFFFFFFFFFFFLL )
            v123 = 0x7FFFFFFFFFFFFFFLL;
          v124 = 16 * v123;
        }
        v155 = (char *)v183[1] - (char *)v183[0];
        v144 = (const __m128i *)v183[0];
        v125 = operator new(v124);
        v126 = (__m128i *)v144;
        v127 = (char *)v125;
        v128 = (unsigned __int64 *)(v125 + v155);
        *v128 = v17;
        v128[1] = 0;
        if ( v19 != v144 )
        {
          v129 = v125;
          v130 = v144;
          v125 += (char *)v19 - (char *)v144;
          do
          {
            v131 = _mm_loadu_si128(v130);
            v129 += 16;
            ++v130;
            *(__m128i *)(v129 - 16) = v131;
          }
          while ( v125 != v129 );
        }
        v132 = (void *)(v125 + 16);
        if ( v144 )
        {
          v145 = v127;
          operator delete(v126, m128i_i8 - (char *)v126);
          v127 = v145;
        }
        v183[0] = v127;
        v183[1] = v132;
        m128i_i8 = &v127[v124];
      }
      else
      {
        *(_QWORD *)v183[1] = v17;
        v19->m128i_i64[1] = 0;
        v183[1] = (char *)v183[1] + 16;
      }
      v174 = v185;
      sub_2C6D50((__int64)&v175, &v186);
      v20 = v183[1];
      v21 = v183[0];
      v180 = v174;
      sub_2C6D50((__int64)&v181, &v175);
      v177 = v180;
      sub_2C6D50((__int64)&v178, &v181);
      sub_606D0((__int64)&v181);
      sub_2D3350((__int64)v21, ((v20 - v21) >> 4) - 1, 0, *((_QWORD *)v20 - 2), *((_QWORD *)v20 - 1), (__int64)&v177);
      ++v17;
      sub_606D0((__int64)&v178);
      sub_606D0((__int64)&v175);
      v18 = a1[1];
    }
    while ( v17 < v18 );
LABEL_22:
    dest = nullptr;
    v159 = 0;
    if ( v18 )
    {
      v133 = qvector_reserve();
      qfree();
      dest = (const __m128i *)v133;
    }
  }
  else
  {
    dest = nullptr;
    v159 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37B760(1961);
    goto LABEL_178;
  }
  v22 = (__int64 *)v183[0];
  if ( v183[0] == v183[1] )
    goto LABEL_57;
  do
  {
    *(_QWORD *)&v159 = 0;
    v23 = v22[1];
    v24 = *v22;
    v139 = v23 << 6;
    v142 = 3 * *v22;
    do
    {
      if ( a3 )
        goto LABEL_34;
      v26 = *(_QWORD *)(a1[3 * v24 + 2] + (v23 << 6) + 56);
      if ( v26 < 0 )
      {
        if ( !under_debugger )
          sub_37B760(2170);
        goto LABEL_178;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v26) != (1 << a1[1]) - 1 )
      {
LABEL_34:
        v27 = v159;
        if ( *((_QWORD *)&v159 + 1) < (unsigned __int64)(v159 + 1) )
        {
          v28 = qvector_reserve();
          v50 = dest;
          v51 = v159 - 1;
          if ( (__int64)v159 - 1 >= 0 )
          {
            v52 = v28;
            do
            {
              v53 = _mm_loadu_si128(v50);
              v52 += 16;
              ++v50;
              *(__m128i *)(v52 - 16) = v53;
              v54 = v51-- == 0;
            }
            while ( !v54 );
          }
          qfree();
          v27 = v159;
          dest = (const __m128i *)v28;
        }
        else
        {
          v28 = (__int64)dest;
        }
        v29 = (_QWORD *)(v28 + 16 * v27);
        *v29 = v24;
        v29[1] = v23;
        *(_QWORD *)&v159 = v159 + 1;
      }
      v30 = (const __m128i *)v183[0];
      v31 = *(_QWORD *)v183[0];
      v32 = *((_QWORD *)v183[0] + 1);
      v174 = v185;
      v176 = 0u;
      v175 = 0;
      if ( !v187.m128i_i64[0] )
      {
        v33 = (__m128i *)v183[1];
        if ( (char *)v183[1] - (char *)v183[0] <= 16 )
          goto LABEL_41;
        v46 = v185;
        goto LABEL_64;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v175, &v186, 2);
      v33 = (__m128i *)v183[1];
      v30 = (const __m128i *)v183[0];
      v34 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0];
      v176 = _mm_load_si128(&v187);
      if ( (char *)v183[1] - (char *)v183[0] > 16 )
      {
        v46 = v174;
        v182 = 0u;
        v180 = v174;
        v181 = 0;
        if ( v187.m128i_i64[0] )
        {
          v148 = (__m128i *)v183[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(v10, &v175, 2);
          v55 = _mm_loadu_si128(&v176);
          v179 = 0u;
          v33 = v148;
          v182 = v55;
          v177 = v180;
          v178 = 0;
          if ( v176.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v176.m128i_i64[0])(&v178, v10, 2);
            v56 = _mm_loadu_si128(&v182);
            v33 = v148;
            v179 = v56;
            if ( v56.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v56.m128i_i64[0])(v10, v10, 3);
              v33 = v148;
            }
          }
          goto LABEL_65;
        }
LABEL_64:
        v177 = v46;
        v179 = 0u;
        v178 = 0;
LABEL_65:
        v47 = v33[-1].m128i_u64[0];
        v48 = v33 - 1;
        v49 = v33[-1].m128i_u64[1];
        v33[-1] = _mm_loadu_si128(v30);
        v182 = 0u;
        v180 = v177;
        v181 = 0;
        if ( v179.m128i_i64[0] )
        {
          v156 = v49;
          v153 = v47;
          v147 = v33 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v179.m128i_i64[0])(v10, &v178, 2);
          v49 = v156;
          v47 = v153;
          v48 = v147;
          v182 = _mm_loadu_si128(&v179);
        }
        sub_2D34A0((__int64)v30, 0, v48 - v30, v47, v49, (__int64)&v180);
        if ( v182.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0])(v10, v10, 3);
        if ( v179.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v179.m128i_i64[0])(&v178, &v178, 3);
        v34 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v176.m128i_i64[0];
      }
      if ( v34 )
        v34(&v175, &v175, 3);
LABEL_41:
      v35 = (__m128i *)v183[1];
      v36 = v32 + 1;
      v37 = (const __m128i *)((char *)v183[1] - 16);
      v183[1] = (char *)v183[1] - 16;
      if ( v36 >= a1[3 * v31 + 3] )
      {
        v25 = (__int64 *)v183[0];
        if ( v183[0] == v37 )
          break;
        goto LABEL_29;
      }
      if ( v37 == (const __m128i *)m128i_i8 )
      {
        v57 = ((char *)v37 - (char *)v183[0]) >> 4;
        if ( v57 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v58 = 1;
        if ( v57 )
          v58 = ((char *)v37 - (char *)v183[0]) >> 4;
        v54 = __CFADD__(v58, v57);
        v59 = v58 + v57;
        if ( v54 )
        {
          v60 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v59 > 0x7FFFFFFFFFFFFFFLL )
            v59 = 0x7FFFFFFFFFFFFFFLL;
          v60 = v59;
        }
        v157 = v37;
        v154 = (char *)v37 - (char *)v183[0];
        v149 = (const __m128i *)v183[0];
        v61 = (__m128i *)operator new(v60 * 16);
        v62 = (__m128i *)v149;
        *(__m128i *)((char *)v61 + v154) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v36);
        if ( v157 == v149 )
        {
          v66 = (char *)v61;
        }
        else
        {
          v63 = v61;
          v64 = v149;
          do
          {
            v65 = _mm_loadu_si128(v64++);
            ++v63;
            v63[-1] = v65;
          }
          while ( v157 != v64 );
          v66 = &v61->m128i_i8[(char *)v157 - (char *)v149];
        }
        v67 = v66 + 16;
        if ( v149 )
        {
          v150 = (char *)v61;
          operator delete(v62, m128i_i8 - (char *)v62);
          v61 = (__m128i *)v150;
        }
        v183[0] = v61;
        v183[1] = v67;
        m128i_i8 = v61[v60].m128i_i8;
      }
      else
      {
        v35[-1] = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v36);
        v183[1] = (char *)v183[1] + 16;
      }
      v38 = v185;
      v176 = 0u;
      v174 = v185;
      v175 = 0;
      if ( !v187.m128i_i64[0] )
      {
        v40 = v183[1];
        v41 = v183[0];
LABEL_81:
        v177 = v38;
        v179 = 0u;
        v178 = 0;
        goto LABEL_49;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v175, &v186, 2);
      v38 = v174;
      v39 = _mm_load_si128(&v187);
      v182 = 0u;
      v40 = v183[1];
      v176 = v39;
      v41 = v183[0];
      v180 = v174;
      v181 = 0;
      if ( !v187.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(v10, &v175, 2);
      v42 = _mm_loadu_si128(&v176);
      v179 = 0u;
      v182 = v42;
      v177 = v180;
      v178 = 0;
      if ( v176.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v176.m128i_i64[0])(&v178, v10, 2);
        v43 = _mm_loadu_si128(&v182);
        v179 = v43;
        if ( v43.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v43.m128i_i64[0])(v10, v10, 3);
      }
LABEL_49:
      sub_2D3350((__int64)v41, ((v40 - v41) >> 4) - 1, 0, *((_QWORD *)v40 - 2), *((_QWORD *)v40 - 1), (__int64)&v177);
      if ( v179.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v179.m128i_i64[0])(&v178, &v178, 3);
      if ( v176.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v176.m128i_i64[0])(&v175, &v175, 3);
      v25 = (__int64 *)v183[0];
      if ( v183[0] == v183[1] )
        break;
LABEL_29:
      v24 = *v25;
      v23 = v25[1];
      if ( !v172 )
        std::__throw_bad_function_call();
    }
    while ( !v173(v171, v170[3 * *v25 + 2] + (v23 << 6), v170[v142 + 2] + v139) );
    if ( a3 )
    {
      v97 = a1[12];
      LODWORD(v162) = 0;
      sub_2C6910(a1 + 11, (int *)&v162);
      v98 = (__int64 *)dest;
      v99 = &dest[v159];
      if ( dest == v99 )
        goto LABEL_56;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v98 + 2] + (v98[1] << 6) + 56) = v97;
        v100 = (_DWORD *)(4 * v97 + a1[11]);
        v101 = 1 << *v98;
        if ( (*v100 & v101) != 0 )
          break;
        v98 += 2;
        *v100 |= v101;
        if ( v99 == (const __m128i *)v98 )
          goto LABEL_56;
      }
      switch_dbctx();
      v102 = *v98;
      v103 = 0;
      v104 = (void *)a1[3 * *v98 + 3];
      if ( v104 )
      {
        na = 2 * *v98;
        v103 = qalloc_or_throw();
        v112 = v103;
        v113 = nullptr;
        v114 = 0;
        v115 = &a1[v102 + na];
        do
        {
          v117 = v115[2] + ((_QWORD)v113 << 6);
          *(_QWORD *)v112 = off_4ADBC0;
          v118 = *(_QWORD *)(v117 + 8);
          *(_QWORD *)(v112 + 16) = 0;
          *(_OWORD *)(v112 + 24) = v114;
          *(_QWORD *)(v112 + 8) = v118;
          v119 = *(_QWORD *)(v117 + 24);
          if ( v119 )
          {
            v152 = v115;
            v143 = v113;
            v134 = *(_QWORD *)(v117 + 24);
            nb = 4 * v119;
            v120 = (void *)qalloc_or_throw();
            *(_QWORD *)(v112 + 16) = v120;
            *(_QWORD *)(v112 + 32) = v134;
            memcpy(v120, *(const void **)(v117 + 16), nb);
            v114 = 0;
            v115 = v152;
            v113 = v143;
            *(_QWORD *)(v112 + 24) = v134;
          }
          v113 = (char *)v113 + 1;
          v112 += 64;
          *(_QWORD *)(v112 - 24) = *(_QWORD *)(v117 + 40);
          v116 = *(_DWORD *)(v117 + 48);
          *(_QWORD *)(v112 - 64) = off_4AF460;
          *(_DWORD *)(v112 - 16) = v116;
          *(_QWORD *)(v112 - 8) = *(_QWORD *)(v117 + 56);
        }
        while ( v104 != v113 );
      }
      v105 = dest;
      v106 = &dest[v159];
      if ( v106 != dest )
      {
        while ( 1 )
        {
          if ( v105->m128i_i64[0] == *v98 )
          {
            v107 = v105->m128i_i64[1];
            v108 = v98[1];
            if ( v107 != v108 && *(_QWORD *)(v103 + (v107 << 6) + 56) == v97 )
              break;
          }
          if ( v106 == ++v105 )
            goto LABEL_152;
        }
        sub_7B2C0((__int64)&v162, (const char *)&unk_3EF793);
        v109 = s1;
        if ( *((_QWORD *)&v162 + 1) )
          v109 = (const char *)v162;
        v110 = v105->m128i_i64[1];
        sub_7B2C0((__int64)&v160, (const char *)&unk_3EF793);
        v111 = s1;
        if ( v161 )
          v111 = v160;
        sub_66B20((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v98, v111, v110, v109, v108);
        if ( v160 )
        {
          v161 = 0;
          qfree();
        }
        if ( (_QWORD)v162 )
        {
          *((_QWORD *)&v162 + 1) = 0;
          qfree();
        }
      }
LABEL_152:
      if ( !under_debugger )
        sub_37B760(2171);
LABEL_178:
      BUG();
    }
    v44 = v159;
    if ( (unsigned __int64)v159 <= 1 )
      goto LABEL_56;
    v68 = (__int64 *)dest;
    DWORD2(v162) = 0;
    v164 = (__int128 *)((char *)&v162 + 8);
    v69 = &dest[v159];
    v163 = nullptr;
    v165 = (char *)&v162 + 8;
    v166 = 0;
    if ( v69 != dest )
    {
      v70 = dest;
      do
      {
        v160 = *(const char **)(a1[3 * v70->m128i_i64[0] + 2] + (v70->m128i_i64[1] << 6) + 56);
        v71 = sub_2C69C0(&v162, (unsigned __int64 *)&v160);
        v72 = v70->m128i_i64[0];
        ++v70;
        *(_DWORD *)v71 |= 1 << v72;
      }
      while ( v69 != v70 );
      if ( v164 != (__int128 *)((char *)&v162 + 8) )
      {
        v73 = (__int64)v164;
        v151 = v10;
        do
        {
          v74 = *(_DWORD *)(v73 + 40);
          v75 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v73 + 32));
          v73 = std::_Rb_tree_increment();
          if ( v75 != v74 )
          {
            v76 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v76, 0x30u);
            --v166;
          }
        }
        while ( (__int128 *)v73 != (__int128 *)((char *)&v162 + 8) );
        v10 = v151;
      }
      v44 = v159;
      v68 = (__int64 *)dest;
      v77 = (__int64 *)dest;
      if ( &dest[(_QWORD)v159] != dest )
      {
        do
        {
          while ( 1 )
          {
            v79 = v77 + 2;
            if ( (_QWORD *)((char *)&v162 + 8) == sub_2A6E80(
                                                    (__int64)&v162,
                                                    *(_QWORD *)(a1[3 * *v77 + 2] + (v77[1] << 6) + 56)) )
              break;
            v44 = v159;
            v77 += 2;
            if ( v79 == &v68[2 * (_QWORD)v159] )
              goto LABEL_112;
          }
          v80 = v78 - (_QWORD)v77;
          if ( (v80 >> 4) - 2 >= 0 )
          {
            memmove(v77, v79, v80 - 16);
            v68 = (__int64 *)dest;
          }
          *(_QWORD *)&v159 = v159 - 1;
          v44 = v159;
        }
        while ( v77 != &v68[2 * (_QWORD)v159] );
      }
      goto LABEL_112;
    }
    while ( 2 )
    {
      v81 = 16 * v44;
      v82 = *v68;
      v83 = v68[1];
      v84 = v68;
      if ( (v81 >> 4) - 2 >= 0 )
      {
        memmove(v68, v68 + 2, v81 - 16);
        v68 = (__int64 *)dest;
        v84 = (__int64 *)dest;
      }
      v85 = a1[1];
      v44 = v159 - 1;
      v86 = *(_QWORD *)(a1[3 * v82 + 2] + (v83 << 6) + 56);
      *(_QWORD *)&v159 = v159 - 1;
      if ( v85 )
      {
        v87 = 0;
        v88 = *(_DWORD *)(a1[11] + 4 * v86);
        do
        {
          v89 = -1;
          if ( (v88 & (1 << v87)) != 0 )
            v89 = v86;
          (&v180)[v87++] = (_QWORD *)v89;
        }
        while ( v87 != v85 );
      }
      if ( 16 * v44 )
      {
        do
        {
          v91 = *v84;
          v92 = a1[3 * *v84 + 2] + (v84[1] << 6);
          v93 = *(_QWORD *)(v92 + 56);
          if ( (&v180)[*v84] == (_QWORD *)-1LL )
          {
            v94 = a1[11];
            (&v180)[v91] = (_QWORD *)v93;
            *(_DWORD *)(v94 + 4 * v93) &= ~(1 << v91);
            if ( !*(_DWORD *)(a1[11] + 4 * v93) )
              ++a1[14];
            *(_QWORD *)(v92 + 56) = v86;
            *(_DWORD *)(4 * v86 + a1[11]) |= 1 << *v84;
            v95 = *(_QWORD *)(v92 + 56);
            v90 = v84 + 2;
            v68 = (__int64 *)dest;
            v44 = v159;
            if ( v86 == v95 )
            {
LABEL_129:
              if ( (((char *)&v68[2 * v44] - (char *)v84) >> 4) - 2 >= 0 )
              {
                v96 = (__int64 *)memmove(v84, v90, (char *)&v68[2 * v44] - (char *)v84 - 16);
                v68 = (__int64 *)dest;
                v84 = v96;
                v44 = v159;
              }
              *(_QWORD *)&v159 = --v44;
              continue;
            }
          }
          else
          {
            v44 = v159;
            v90 = v84 + 2;
            if ( v86 == v93 )
              goto LABEL_129;
          }
          v84 = (__int64 *)v90;
        }
        while ( v84 != &v68[2 * v44] );
      }
LABEL_112:
      if ( v44 )
        continue;
      break;
    }
    sub_2A6EE0((void **)v163);
LABEL_56:
    v22 = (__int64 *)v183[0];
  }
  while ( v183[1] != v183[0] );
LABEL_57:
  if ( dest )
    qfree();
  sub_606D0((__int64)&v186);
  if ( v183[0] )
    operator delete(v183[0], m128i_i8 - (char *)v183[0]);
  sub_606D0((__int64)v171);
  sub_606D0((__int64)v169);
  sub_606D0((__int64)v167);
  return v188 - __readfsqword(0x28u);
}

