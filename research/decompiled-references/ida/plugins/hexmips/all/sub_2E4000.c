unsigned __int64 __fastcall sub_2E4000(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  _BYTE *v10; // r13
  _BYTE *v11; // r14
  __int64 v12; // r13
  __int64 v13; // r12
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
  __int64 v25; // r12
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r15
  _QWORD *v30; // rax
  const __m128i *v31; // r15
  unsigned __int64 v32; // r14
  __int64 v33; // r13
  __m128i *v34; // rcx
  void (__fastcall *v35)(__m128i *, __m128i *, __int64); // rax
  __m128i *v36; // rax
  unsigned __int64 v37; // r13
  const __m128i *v38; // rdx
  _QWORD *v39; // rax
  __m128i v40; // xmm0
  _BYTE *v41; // r14
  _BYTE *v42; // r13
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __int64 v45; // rax
  _QWORD *v47; // rdx
  unsigned __int64 v48; // r10
  __m128i *v49; // r9
  unsigned __int64 v50; // r8
  const __m128i *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __m128i v54; // xmm0
  bool v55; // cf
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  __int64 v58; // r15
  __int64 v59; // rax
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // r15
  __m128i *v62; // rax
  __m128i *v63; // rcx
  __m128i *v64; // rdi
  const __m128i *v65; // rsi
  __m128i v66; // xmm0
  char *v67; // r13
  void *v68; // r13
  __int64 *v69; // r9
  const __m128i *v70; // r14
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r12
  int v74; // r15d
  int v75; // r14d
  void *v76; // rax
  __int64 *v77; // r14
  __int64 v78; // r10
  __int64 *v79; // rsi
  __int64 v80; // r10
  __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // r12
  __int64 *v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // r13
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
  __int64 v102; // rbp
  __int64 v103; // r12
  __int64 v104; // rax
  const __m128i *v105; // rbx
  const __m128i *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // r12
  const char *v109; // r14
  __int64 v110; // rbx
  const char *v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // rdx
  int v116; // r9d
  __m128i v117; // xmm0
  int v118; // r9d
  __int64 v119; // rdx
  signed __int64 v120; // rax
  signed __int64 v121; // rcx
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // r13
  __int64 v124; // rax
  __m128i *v125; // rdx
  char *v126; // rcx
  unsigned __int64 *v127; // rsi
  __int64 v128; // rsi
  const __m128i *v129; // rdi
  __m128i v130; // xmm0
  void *v131; // r14
  __int64 v132; // r13
  __int64 v133; // [rsp+0h] [rbp-268h]
  __int64 v134; // [rsp+8h] [rbp-260h]
  const __m128i *v136; // [rsp+18h] [rbp-250h]
  void *v137; // [rsp+18h] [rbp-250h]
  __int64 v138; // [rsp+18h] [rbp-250h]
  const __m128i *v139; // [rsp+18h] [rbp-250h]
  const __m128i *v140; // [rsp+18h] [rbp-250h]
  char *v141; // [rsp+18h] [rbp-250h]
  __m128i *v143; // [rsp+30h] [rbp-238h]
  __m128i *v144; // [rsp+30h] [rbp-238h]
  const __m128i *v145; // [rsp+30h] [rbp-238h]
  char *v146; // [rsp+30h] [rbp-238h]
  unsigned __int64 v147; // [rsp+38h] [rbp-230h]
  signed __int64 v148; // [rsp+38h] [rbp-230h]
  signed __int64 v149; // [rsp+38h] [rbp-230h]
  unsigned __int64 v150; // [rsp+40h] [rbp-228h]
  const __m128i *v151; // [rsp+40h] [rbp-228h]
  const __m128i *dest; // [rsp+60h] [rbp-208h]
  __int128 v153; // [rsp+68h] [rbp-200h]
  const char *v154; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v155; // [rsp+88h] [rbp-1E0h]
  __int128 v156; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v157; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v158; // [rsp+B8h] [rbp-1B0h]
  char *v159; // [rsp+C0h] [rbp-1A8h]
  __int64 v160; // [rsp+C8h] [rbp-1A0h]
  __m128i v161[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v162; // [rsp+F0h] [rbp-178h]
  __m128i v163[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v164; // [rsp+120h] [rbp-148h]
  _BYTE v165[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v166; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v167)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v168; // [rsp+150h] [rbp-118h] BYREF
  __m128i v169; // [rsp+158h] [rbp-110h] BYREF
  __m128i v170; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v171; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v172; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v173; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v174; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v175; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v176; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v177[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *m128i_i8; // [rsp+1F0h] [rbp-78h]
  _QWORD *v179; // [rsp+1F8h] [rbp-70h]
  __m128i v180; // [rsp+200h] [rbp-68h] BYREF
  __m128i v181; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v182; // [rsp+228h] [rbp-40h]

  v182 = __readfsqword(0x28u);
  sub_2C9730((__int64)v161, a2);
  v162 = a1;
  sub_2C9730((__int64)v163, a2);
  v164 = a1;
  sub_2C9730((__int64)v165, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2C9730((__int64)&v168, v161);
    v6 = *v5;
    v7 = v5[1] << 6;
    v136 = (const __m128i *)(*v5 + v7);
    sub_2C9730((__int64)&v171, (const __m128i *)&v168);
    sub_2C9730((__int64)v177, (const __m128i *)&v171);
    sub_2C9730((__int64)&v174, (const __m128i *)v177);
    sub_62A50((__int64)v177);
    if ( v136 != (const __m128i *)v6 )
    {
      sub_2C9730((__int64)v177, (const __m128i *)&v174);
      v8 = v7 >> 6;
      v9 = -2;
      if ( v8 )
      {
        _BitScanReverse64(&v8, v8);
        v9 = 2LL * (int)v8;
      }
      sub_2E3BE0(v6, v136, v9, (const __m128i *)v177);
      sub_62A50((__int64)v177);
      sub_2C9730((__int64)v177, (const __m128i *)&v174);
      sub_2D8CF0(v6, (__int64)v136, (const __m128i *)v177);
      sub_62A50((__int64)v177);
    }
    ++v4;
    v5 += 3;
    sub_62A50((__int64)&v174);
    sub_62A50((__int64)&v171);
    sub_62A50((__int64)&v168);
  }
  v157 = nullptr;
  m128i_i8 = nullptr;
  v179 = v162;
  v156 = 0;
  *(_OWORD *)v177 = 0;
  sub_2C9730((__int64)&v180, v163);
  v168 = v179;
  sub_2C9730((__int64)&v169, &v180);
  v10 = v177[1];
  v11 = v177[0];
  v174 = v168;
  sub_2C9730((__int64)&v175, &v169);
  v171 = v174;
  sub_2C9730((__int64)&v172, &v175);
  v12 = v10 - v11;
  sub_62A50((__int64)&v175);
  if ( v12 > 16 )
  {
    v13 = v12 >> 4;
    for ( i = ((v12 >> 4) - 2) / 2; ; --i )
    {
      v15 = *(_QWORD *)&v11[16 * i];
      v16 = *(_QWORD *)&v11[16 * i + 8];
      v176 = 0u;
      v175 = 0;
      v174 = v171;
      if ( v173.m128i_i64[0] )
      {
        v137 = (void *)v16;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v173.m128i_i64[0])(&v175, &v172, 2);
        v16 = (unsigned __int64)v137;
        v176 = _mm_loadu_si128(&v173);
      }
      sub_2D5820((__int64)v11, i, v13, v15, v16, (__int64)&v174);
      if ( v176.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v176.m128i_i64[0])(&v175, &v175, 3);
      if ( !i )
        break;
    }
  }
  v17 = 0;
  sub_62A50((__int64)&v172);
  sub_62A50((__int64)&v169);
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
      v19 = (const __m128i *)v177[1];
      if ( v177[1] == m128i_i8 )
      {
        v120 = ((char *)v177[1] - (char *)v177[0]) >> 4;
        if ( v120 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v121 = 1;
        if ( v120 )
          v121 = ((char *)v177[1] - (char *)v177[0]) >> 4;
        v55 = __CFADD__(v121, v120);
        v122 = v121 + v120;
        if ( v55 )
        {
          v123 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v122 > 0x7FFFFFFFFFFFFFFLL )
            v122 = 0x7FFFFFFFFFFFFFFLL;
          v123 = 16 * v122;
        }
        v149 = (char *)v177[1] - (char *)v177[0];
        v140 = (const __m128i *)v177[0];
        v124 = operator new(v123);
        v125 = (__m128i *)v140;
        v126 = (char *)v124;
        v127 = (unsigned __int64 *)(v124 + v149);
        *v127 = v17;
        v127[1] = 0;
        if ( v19 != v140 )
        {
          v128 = v124;
          v129 = v140;
          v124 += (char *)v19 - (char *)v140;
          do
          {
            v130 = _mm_loadu_si128(v129);
            v128 += 16;
            ++v129;
            *(__m128i *)(v128 - 16) = v130;
          }
          while ( v124 != v128 );
        }
        v131 = (void *)(v124 + 16);
        if ( v140 )
        {
          v141 = v126;
          operator delete(v125, m128i_i8 - (char *)v125);
          v126 = v141;
        }
        v177[0] = v126;
        v177[1] = v131;
        m128i_i8 = &v126[v123];
      }
      else
      {
        *(_QWORD *)v177[1] = v17;
        v19->m128i_i64[1] = 0;
        v177[1] = (char *)v177[1] + 16;
      }
      v168 = v179;
      sub_2C9730((__int64)&v169, &v180);
      v20 = v177[1];
      v21 = v177[0];
      v174 = v168;
      sub_2C9730((__int64)&v175, &v169);
      v171 = v174;
      sub_2C9730((__int64)&v172, &v175);
      sub_62A50((__int64)&v175);
      sub_2D56D0((__int64)v21, ((v20 - v21) >> 4) - 1, 0, *((_QWORD *)v20 - 2), *((_QWORD *)v20 - 1), (__int64)&v171);
      ++v17;
      sub_62A50((__int64)&v172);
      sub_62A50((__int64)&v169);
      v18 = a1[1];
    }
    while ( v17 < v18 );
LABEL_22:
    dest = nullptr;
    v153 = 0;
    if ( v18 )
    {
      v132 = qvector_reserve();
      qfree();
      dest = (const __m128i *)v132;
    }
  }
  else
  {
    dest = nullptr;
    v153 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37E160(1961);
    goto LABEL_176;
  }
  v22 = (__int64 *)v177[0];
  if ( v177[0] == v177[1] )
    goto LABEL_57;
  do
  {
    *(_QWORD *)&v153 = 0;
    v23 = v22[1];
    v24 = *v22;
    v25 = v23 << 6;
    v138 = 3 * *v22;
    do
    {
      if ( a3 )
        goto LABEL_34;
      v27 = *(_QWORD *)(a1[3 * v24 + 2] + (v23 << 6) + 56);
      if ( v27 < 0 )
      {
        if ( !under_debugger )
          sub_37E160(2170);
        goto LABEL_176;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v27) != (1 << a1[1]) - 1 )
      {
LABEL_34:
        v28 = v153;
        if ( *((_QWORD *)&v153 + 1) < (unsigned __int64)(v153 + 1) )
        {
          v29 = qvector_reserve();
          v51 = dest;
          v52 = v153 - 1;
          if ( (__int64)v153 - 1 >= 0 )
          {
            v53 = v29;
            do
            {
              v54 = _mm_loadu_si128(v51);
              v53 += 16;
              ++v51;
              *(__m128i *)(v53 - 16) = v54;
              v55 = v52-- == 0;
            }
            while ( !v55 );
          }
          qfree();
          v28 = v153;
          dest = (const __m128i *)v29;
        }
        else
        {
          v29 = (__int64)dest;
        }
        v30 = (_QWORD *)(v29 + 16 * v28);
        *v30 = v24;
        v30[1] = v23;
        *(_QWORD *)&v153 = v153 + 1;
      }
      v31 = (const __m128i *)v177[0];
      v32 = *(_QWORD *)v177[0];
      v33 = *((_QWORD *)v177[0] + 1);
      v168 = v179;
      v170 = 0u;
      v169 = 0;
      if ( !v181.m128i_i64[0] )
      {
        v34 = (__m128i *)v177[1];
        if ( (char *)v177[1] - (char *)v177[0] <= 16 )
          goto LABEL_41;
        v47 = v179;
        goto LABEL_64;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(&v169, &v180, 2);
      v34 = (__m128i *)v177[1];
      v31 = (const __m128i *)v177[0];
      v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0];
      v170 = _mm_load_si128(&v181);
      if ( (char *)v177[1] - (char *)v177[0] > 16 )
      {
        v47 = v168;
        v176 = 0u;
        v174 = v168;
        v175 = 0;
        if ( v181.m128i_i64[0] )
        {
          v144 = (__m128i *)v177[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(&v175, &v169, 2);
          v56 = _mm_loadu_si128(&v170);
          v173 = 0u;
          v34 = v144;
          v176 = v56;
          v171 = v174;
          v172 = 0;
          if ( v170.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v170.m128i_i64[0])(&v172, &v175, 2);
            v57 = _mm_loadu_si128(&v176);
            v34 = v144;
            v173 = v57;
            if ( v57.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v57.m128i_i64[0])(&v175, &v175, 3);
              v34 = v144;
            }
          }
          goto LABEL_65;
        }
LABEL_64:
        v171 = v47;
        v173 = 0u;
        v172 = 0;
LABEL_65:
        v48 = v34[-1].m128i_u64[0];
        v49 = v34 - 1;
        v50 = v34[-1].m128i_u64[1];
        v34[-1] = _mm_loadu_si128(v31);
        v176 = 0u;
        v174 = v171;
        v175 = 0;
        if ( v173.m128i_i64[0] )
        {
          v150 = v50;
          v147 = v48;
          v143 = v34 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v173.m128i_i64[0])(&v175, &v172, 2);
          v50 = v150;
          v48 = v147;
          v49 = v143;
          v176 = _mm_loadu_si128(&v173);
        }
        sub_2D5820((__int64)v31, 0, v49 - v31, v48, v50, (__int64)&v174);
        if ( v176.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v176.m128i_i64[0])(&v175, &v175, 3);
        if ( v173.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v173.m128i_i64[0])(&v172, &v172, 3);
        v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v170.m128i_i64[0];
      }
      if ( v35 )
        v35(&v169, &v169, 3);
LABEL_41:
      v36 = (__m128i *)v177[1];
      v37 = v33 + 1;
      v38 = (const __m128i *)((char *)v177[1] - 16);
      v177[1] = (char *)v177[1] - 16;
      if ( v37 >= a1[3 * v32 + 3] )
      {
        v26 = (__int64 *)v177[0];
        if ( v177[0] == v38 )
          break;
        goto LABEL_29;
      }
      if ( v38 == (const __m128i *)m128i_i8 )
      {
        v58 = ((char *)v38 - (char *)v177[0]) >> 4;
        if ( v58 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v59 = 1;
        if ( v58 )
          v59 = ((char *)v38 - (char *)v177[0]) >> 4;
        v55 = __CFADD__(v59, v58);
        v60 = v59 + v58;
        if ( v55 )
        {
          v61 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v60 > 0x7FFFFFFFFFFFFFFLL )
            v60 = 0x7FFFFFFFFFFFFFFLL;
          v61 = v60;
        }
        v151 = v38;
        v148 = (char *)v38 - (char *)v177[0];
        v145 = (const __m128i *)v177[0];
        v62 = (__m128i *)operator new(v61 * 16);
        v63 = (__m128i *)v145;
        *(__m128i *)((char *)v62 + v148) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v37);
        if ( v151 == v145 )
        {
          v67 = (char *)v62;
        }
        else
        {
          v64 = v62;
          v65 = v145;
          do
          {
            v66 = _mm_loadu_si128(v65++);
            ++v64;
            v64[-1] = v66;
          }
          while ( v151 != v65 );
          v67 = &v62->m128i_i8[(char *)v151 - (char *)v145];
        }
        v68 = v67 + 16;
        if ( v145 )
        {
          v146 = (char *)v62;
          operator delete(v63, m128i_i8 - (char *)v63);
          v62 = (__m128i *)v146;
        }
        v177[0] = v62;
        v177[1] = v68;
        m128i_i8 = v62[v61].m128i_i8;
      }
      else
      {
        v36[-1] = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v37);
        v177[1] = (char *)v177[1] + 16;
      }
      v39 = v179;
      v170 = 0u;
      v168 = v179;
      v169 = 0;
      if ( !v181.m128i_i64[0] )
      {
        v41 = v177[1];
        v42 = v177[0];
LABEL_81:
        v171 = v39;
        v173 = 0u;
        v172 = 0;
        goto LABEL_49;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(&v169, &v180, 2);
      v39 = v168;
      v40 = _mm_load_si128(&v181);
      v176 = 0u;
      v41 = v177[1];
      v170 = v40;
      v42 = v177[0];
      v174 = v168;
      v175 = 0;
      if ( !v181.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(&v175, &v169, 2);
      v43 = _mm_loadu_si128(&v170);
      v173 = 0u;
      v176 = v43;
      v171 = v174;
      v172 = 0;
      if ( v170.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v170.m128i_i64[0])(&v172, &v175, 2);
        v44 = _mm_loadu_si128(&v176);
        v173 = v44;
        if ( v44.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v44.m128i_i64[0])(&v175, &v175, 3);
      }
LABEL_49:
      sub_2D56D0((__int64)v42, ((v41 - v42) >> 4) - 1, 0, *((_QWORD *)v41 - 2), *((_QWORD *)v41 - 1), (__int64)&v171);
      if ( v173.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v173.m128i_i64[0])(&v172, &v172, 3);
      if ( v170.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v170.m128i_i64[0])(&v169, &v169, 3);
      v26 = (__int64 *)v177[0];
      if ( v177[0] == v177[1] )
        break;
LABEL_29:
      v24 = *v26;
      v23 = v26[1];
      if ( !v166 )
        std::__throw_bad_function_call();
    }
    while ( !v167(v165, v164[3 * *v26 + 2] + (v23 << 6), v25 + v164[v138 + 2]) );
    if ( a3 )
    {
      v97 = a1[12];
      LODWORD(v156) = 0;
      sub_2C9410(a1 + 11, (int *)&v156);
      v98 = (__int64 *)dest;
      v99 = &dest[v153];
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
      v102 = 0;
      v103 = 2 * *v98;
      v104 = a1[3 * *v98 + 3];
      if ( v104 )
      {
        v134 = *v98;
        v133 = v104 << 6;
        v112 = qalloc_or_throw();
        v102 = v112;
        v113 = 0;
        v114 = v112 + v133;
        do
        {
          v112 += 64;
          v115 = v113 + a1[v134 + 2 + v103];
          v113 += 64;
          v116 = *(_DWORD *)(v115 + 24);
          *(__m128i *)(v112 - 56) = _mm_loadu_si128((const __m128i *)(v115 + 8));
          v117 = _mm_loadu_si128((const __m128i *)(v115 + 32));
          *(_DWORD *)(v112 - 40) = v116;
          v118 = *(_DWORD *)(v115 + 48);
          *(__m128i *)(v112 - 32) = v117;
          *(_DWORD *)(v112 - 16) = v118;
          v119 = *(_QWORD *)(v115 + 56);
          *(_QWORD *)(v112 - 64) = off_4C3350;
          *(_QWORD *)(v112 - 8) = v119;
        }
        while ( v112 != v114 );
      }
      v105 = dest;
      v106 = &dest[v153];
      if ( v106 != dest )
      {
        while ( 1 )
        {
          if ( v105->m128i_i64[0] == *v98 )
          {
            v107 = v105->m128i_i64[1];
            v108 = v98[1];
            if ( v107 != v108 && *(_QWORD *)(v102 + (v107 << 6) + 56) == v97 )
              break;
          }
          if ( v106 == ++v105 )
            goto LABEL_151;
        }
        sub_7D780((__int64)&v156, (const char *)&unk_3FC793);
        v109 = s1;
        if ( *((_QWORD *)&v156 + 1) )
          v109 = (const char *)v156;
        v110 = v105->m128i_i64[1];
        sub_7D780((__int64)&v154, (const char *)&unk_3FC793);
        v111 = s1;
        if ( v155 )
          v111 = v154;
        sub_68EA0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v98, v111, v110, v109, v108);
        if ( v154 )
        {
          v155 = 0;
          qfree();
        }
        if ( (_QWORD)v156 )
        {
          *((_QWORD *)&v156 + 1) = 0;
          qfree();
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_37E160(2171);
LABEL_176:
      BUG();
    }
    v45 = v153;
    if ( (unsigned __int64)v153 <= 1 )
      goto LABEL_56;
    v69 = (__int64 *)dest;
    DWORD2(v156) = 0;
    v158 = (__int128 *)((char *)&v156 + 8);
    v157 = nullptr;
    v159 = (char *)&v156 + 8;
    v160 = 0;
    v139 = &dest[v153];
    if ( v139 != dest )
    {
      v70 = dest;
      do
      {
        v154 = *(const char **)(a1[3 * v70->m128i_i64[0] + 2] + (v70->m128i_i64[1] << 6) + 56);
        v71 = sub_2C94C0(&v156, (unsigned __int64 *)&v154);
        v72 = v70->m128i_i64[0];
        ++v70;
        *(_DWORD *)v71 |= 1 << v72;
      }
      while ( v139 != v70 );
      if ( v158 != (__int128 *)((char *)&v156 + 8) )
      {
        v73 = (__int64)v158;
        do
        {
          v74 = *(_DWORD *)(v73 + 40);
          v75 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v73 + 32));
          v73 = std::_Rb_tree_increment();
          if ( v75 != v74 )
          {
            v76 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v76, 0x30u);
            --v160;
          }
        }
        while ( (__int128 *)v73 != (__int128 *)((char *)&v156 + 8) );
      }
      v45 = v153;
      v69 = (__int64 *)dest;
      v77 = (__int64 *)dest;
      if ( &dest[(_QWORD)v153] != dest )
      {
        do
        {
          while ( 1 )
          {
            v79 = v77 + 2;
            if ( (_QWORD *)((char *)&v156 + 8) == sub_2A9980(
                                                    (__int64)&v156,
                                                    *(_QWORD *)(a1[3 * *v77 + 2] + (v77[1] << 6) + 56)) )
              break;
            v45 = v153;
            v77 += 2;
            if ( v79 == &v69[2 * (_QWORD)v153] )
              goto LABEL_111;
          }
          v80 = v78 - (_QWORD)v77;
          if ( (v80 >> 4) - 2 >= 0 )
          {
            memmove(v77, v79, v80 - 16);
            v69 = (__int64 *)dest;
          }
          *(_QWORD *)&v153 = v153 - 1;
          v45 = v153;
        }
        while ( v77 != &v69[2 * (_QWORD)v153] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v81 = 16 * v45;
      v82 = *v69;
      v83 = v69[1];
      v84 = v69;
      if ( (v81 >> 4) - 2 >= 0 )
      {
        memmove(v69, v69 + 2, v81 - 16);
        v69 = (__int64 *)dest;
        v84 = (__int64 *)dest;
      }
      v85 = a1[1];
      v45 = v153 - 1;
      v86 = *(_QWORD *)(a1[3 * v82 + 2] + (v83 << 6) + 56);
      *(_QWORD *)&v153 = v153 - 1;
      if ( v85 )
      {
        v87 = 0;
        v88 = *(_DWORD *)(a1[11] + 4 * v86);
        do
        {
          v89 = -1;
          if ( (v88 & (1 << v87)) != 0 )
            v89 = v86;
          (&v174)[v87++] = (_QWORD *)v89;
        }
        while ( v87 != v85 );
      }
      if ( 16 * v45 )
      {
        do
        {
          v91 = *v84;
          v92 = a1[3 * *v84 + 2] + (v84[1] << 6);
          v93 = *(_QWORD *)(v92 + 56);
          if ( (&v174)[*v84] == (_QWORD *)-1LL )
          {
            v94 = a1[11];
            (&v174)[v91] = (_QWORD *)v93;
            *(_DWORD *)(v94 + 4 * v93) &= ~(1 << v91);
            if ( !*(_DWORD *)(a1[11] + 4 * v93) )
              ++a1[14];
            *(_QWORD *)(v92 + 56) = v86;
            *(_DWORD *)(4 * v86 + a1[11]) |= 1 << *v84;
            v95 = *(_QWORD *)(v92 + 56);
            v90 = v84 + 2;
            v69 = (__int64 *)dest;
            v45 = v153;
            if ( v86 == v95 )
            {
LABEL_128:
              if ( (((char *)&v69[2 * v45] - (char *)v84) >> 4) - 2 >= 0 )
              {
                v96 = (__int64 *)memmove(v84, v90, (char *)&v69[2 * v45] - (char *)v84 - 16);
                v69 = (__int64 *)dest;
                v84 = v96;
                v45 = v153;
              }
              *(_QWORD *)&v153 = --v45;
              continue;
            }
          }
          else
          {
            v45 = v153;
            v90 = v84 + 2;
            if ( v86 == v93 )
              goto LABEL_128;
          }
          v84 = (__int64 *)v90;
        }
        while ( v84 != &v69[2 * v45] );
      }
LABEL_111:
      if ( v45 )
        continue;
      break;
    }
    sub_2A99E0((void **)v157);
LABEL_56:
    v22 = (__int64 *)v177[0];
  }
  while ( v177[1] != v177[0] );
LABEL_57:
  if ( dest )
    qfree();
  sub_62A50((__int64)&v180);
  if ( v177[0] )
    operator delete(v177[0], m128i_i8 - (char *)v177[0]);
  sub_62A50((__int64)v165);
  sub_62A50((__int64)v163);
  sub_62A50((__int64)v161);
  return v182 - __readfsqword(0x28u);
}

