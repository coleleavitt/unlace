unsigned __int64 __fastcall sub_2EE9E0(_QWORD *a1, const __m128i *a2, char a3)
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
  __m128i *v28; // r15
  char *m128i_i8; // rax
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
  __int64 v42; // rax
  _QWORD *v44; // rdx
  unsigned __int64 v45; // r10
  __m128i *v46; // r9
  unsigned __int64 v47; // r8
  void *v48; // rcx
  const __m128i *v49; // rdi
  __int64 v50; // rax
  __m128i *v51; // rdx
  __m128i v52; // xmm0
  bool v53; // cf
  __m128i v54; // xmm0
  __m128i v55; // xmm0
  __int64 v56; // r15
  __int64 v57; // rax
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // r15
  __m128i *v60; // rax
  __m128i *v61; // rcx
  __m128i *v62; // rdi
  const __m128i *v63; // rsi
  __m128i v64; // xmm0
  char *v65; // r13
  void *v66; // r13
  __int64 *v67; // r9
  char *v68; // r14
  char *v69; // r15
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r14
  int v73; // r12d
  int v74; // r15d
  void *v75; // rax
  __int64 *v76; // r14
  __int64 v77; // r10
  __int64 *v78; // rsi
  __int64 v79; // r10
  __int64 v80; // rax
  __int64 v81; // r14
  __int64 v82; // r13
  __int64 *v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // r14
  __int64 v86; // rcx
  int v87; // r11d
  __int64 v88; // rdx
  void *v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rdx
  __int64 *v95; // rax
  __int64 v96; // r14
  __int64 *v97; // r13
  __int64 *v98; // rsi
  _DWORD *v99; // rdi
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rsi
  __int64 v103; // rbp
  __int64 v104; // r12
  char *v105; // rbx
  char *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // r15
  const char *v109; // r14
  __int64 v110; // rbx
  const char *v111; // rdx
  __int64 v112; // r15
  __int64 v113; // rcx
  _QWORD *v114; // r10
  int v115; // eax
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // r8
  void *v119; // rax
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
  __m128i *v132; // r13
  __int64 v133; // r14
  const __m128i *v134; // rdi
  __int64 v135; // rax
  __m128i *v136; // rdx
  __m128i v137; // xmm0
  __int64 v138; // [rsp+0h] [rbp-268h]
  size_t na; // [rsp+8h] [rbp-260h]
  __int64 nb; // [rsp+8h] [rbp-260h]
  unsigned __int64 v142; // [rsp+10h] [rbp-258h]
  __int64 v143; // [rsp+10h] [rbp-258h]
  void *v144; // [rsp+18h] [rbp-250h]
  __int64 v145; // [rsp+18h] [rbp-250h]
  __int64 v146; // [rsp+18h] [rbp-250h]
  void *v147; // [rsp+18h] [rbp-250h]
  const __m128i *v148; // [rsp+18h] [rbp-250h]
  char *v149; // [rsp+18h] [rbp-250h]
  __m128i *v151; // [rsp+30h] [rbp-238h]
  void *v152; // [rsp+30h] [rbp-238h]
  void *v153; // [rsp+30h] [rbp-238h]
  __m128i *v154; // [rsp+30h] [rbp-238h]
  const __m128i *v155; // [rsp+30h] [rbp-238h]
  char *v156; // [rsp+30h] [rbp-238h]
  __m128i *v157; // [rsp+30h] [rbp-238h]
  _QWORD *v158; // [rsp+30h] [rbp-238h]
  unsigned __int64 v159; // [rsp+38h] [rbp-230h]
  signed __int64 v160; // [rsp+38h] [rbp-230h]
  signed __int64 v161; // [rsp+38h] [rbp-230h]
  unsigned __int64 v162; // [rsp+40h] [rbp-228h]
  const __m128i *v163; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v165; // [rsp+68h] [rbp-200h]
  __int64 v166; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v167; // [rsp+88h] [rbp-1E0h]
  __int128 v168; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v169; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v170; // [rsp+B8h] [rbp-1B0h]
  char *v171; // [rsp+C0h] [rbp-1A8h]
  __int64 v172; // [rsp+C8h] [rbp-1A0h]
  __m128i v173[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v174; // [rsp+F0h] [rbp-178h]
  __m128i v175[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v176; // [rsp+120h] [rbp-148h]
  _BYTE v177[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v178; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v179)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v180; // [rsp+150h] [rbp-118h] BYREF
  __m128i v181; // [rsp+158h] [rbp-110h] BYREF
  __m128i v182; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v183; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v184; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v185; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v186; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v187; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v188; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v189[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v190; // [rsp+1F0h] [rbp-78h]
  _QWORD *v191; // [rsp+1F8h] [rbp-70h]
  __m128i v192; // [rsp+200h] [rbp-68h] BYREF
  __m128i v193; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v194; // [rsp+228h] [rbp-40h]

  v194 = __readfsqword(0x28u);
  sub_2CE0D0((__int64)v173, a2);
  v174 = a1;
  sub_2CE0D0((__int64)v175, a2);
  v176 = a1;
  sub_2CE0D0((__int64)v177, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CE0D0((__int64)&v180, v173);
    v6 = *v5;
    v7 = v5[1] << 6;
    v144 = (void *)(*v5 + v7);
    sub_2CE0D0((__int64)&v183, (const __m128i *)&v180);
    sub_2CE0D0((__int64)v189, (const __m128i *)&v183);
    sub_2CE0D0((__int64)&v186, (const __m128i *)v189);
    sub_66C50((__int64)v189);
    if ( v144 != (void *)v6 )
    {
      sub_2CE0D0((__int64)v189, (const __m128i *)&v186);
      v8 = v7 >> 6;
      v9 = -2;
      if ( v8 )
      {
        _BitScanReverse64(&v8, v8);
        v9 = 2LL * (int)v8;
      }
      sub_2EE420(v6, (__int64)v144, v9, (const __m128i *)v189);
      sub_66C50((__int64)v189);
      sub_2CE0D0((__int64)v189, (const __m128i *)&v186);
      sub_2DE410(v6, (__int64)v144, (const __m128i *)v189);
      sub_66C50((__int64)v189);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v186);
    sub_66C50((__int64)&v183);
    sub_66C50((__int64)&v180);
  }
  v169 = nullptr;
  v190 = nullptr;
  v191 = v174;
  v168 = 0;
  *(_OWORD *)v189 = 0;
  sub_2CE0D0((__int64)&v192, v175);
  v180 = v191;
  sub_2CE0D0((__int64)&v181, &v192);
  v10 = &v187;
  v11 = v189[1];
  v12 = v189[0];
  v186 = v180;
  sub_2CE0D0((__int64)&v187, &v181);
  v183 = v186;
  sub_2CE0D0((__int64)&v184, &v187);
  v13 = v11 - v12;
  sub_66C50((__int64)&v187);
  if ( v13 > 16 )
  {
    v145 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v15 = *(_QWORD *)&v12[16 * i];
      v16 = *(_QWORD *)&v12[16 * i + 8];
      v188 = 0u;
      v187 = 0;
      v186 = v183;
      if ( v185.m128i_i64[0] )
      {
        v142 = v16;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v185.m128i_i64[0])(&v187, &v184, 2);
        v16 = v142;
        v188 = _mm_loadu_si128(&v185);
      }
      sub_2DA820((__int64)v12, i, v145, v15, v16, (__int64)&v186);
      if ( v188.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
      if ( !i )
        break;
    }
  }
  v17 = 0;
  sub_66C50((__int64)&v184);
  sub_66C50((__int64)&v181);
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
      v19 = (const __m128i *)v189[1];
      if ( v189[1] == v190 )
      {
        v120 = ((char *)v189[1] - (char *)v189[0]) >> 4;
        if ( v120 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v121 = 1;
        if ( v120 )
          v121 = ((char *)v189[1] - (char *)v189[0]) >> 4;
        v53 = __CFADD__(v121, v120);
        v122 = v121 + v120;
        if ( v53 )
        {
          v123 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v122 > 0x7FFFFFFFFFFFFFFLL )
            v122 = 0x7FFFFFFFFFFFFFFLL;
          v123 = 16 * v122;
        }
        v161 = (char *)v189[1] - (char *)v189[0];
        v148 = (const __m128i *)v189[0];
        v124 = operator new(v123);
        v125 = (__m128i *)v148;
        v126 = (char *)v124;
        v127 = (unsigned __int64 *)(v124 + v161);
        *v127 = v17;
        v127[1] = 0;
        if ( v19 != v148 )
        {
          v128 = v124;
          v129 = v148;
          v124 += (char *)v19 - (char *)v148;
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
        if ( v148 )
        {
          v149 = v126;
          operator delete(v125, v190 - (char *)v125);
          v126 = v149;
        }
        v189[0] = v126;
        v189[1] = v131;
        v190 = &v126[v123];
      }
      else
      {
        *(_QWORD *)v189[1] = v17;
        v19->m128i_i64[1] = 0;
        v189[1] = (char *)v189[1] + 16;
      }
      v180 = v191;
      sub_2CE0D0((__int64)&v181, &v192);
      v20 = v189[1];
      v21 = v189[0];
      v186 = v180;
      sub_2CE0D0((__int64)&v187, &v181);
      v183 = v186;
      sub_2CE0D0((__int64)&v184, &v187);
      sub_66C50((__int64)&v187);
      sub_2DA6D0((__int64)v21, ((v20 - v21) >> 4) - 1, 0, *((_QWORD *)v20 - 2), *((_QWORD *)v20 - 1), (__int64)&v183);
      ++v17;
      sub_66C50((__int64)&v184);
      sub_66C50((__int64)&v181);
      v18 = a1[1];
    }
    while ( v17 < v18 );
LABEL_22:
    dest = nullptr;
    v137.m128i_i64[0] = 0;
    v165 = 0;
    if ( v18 )
    {
      v132 = (__m128i *)qvector_reserve((__int64)&dest, 0, v18, 16);
      v133 = *((_QWORD *)&v165 + 1);
      *((_QWORD *)&v165 + 1) = 0;
      v134 = (const __m128i *)dest;
      v135 = v165 - 1;
      if ( (__int64)v165 - 1 >= 0 )
      {
        v136 = v132;
        do
        {
          v137 = _mm_loadu_si128(v134);
          ++v136;
          ++v134;
          v136[-1] = v137;
          v53 = v135-- == 0;
        }
        while ( !v53 );
        v134 = (const __m128i *)dest;
      }
      qfree((__int64)v134);
      dest = v132;
      *((_QWORD *)&v165 + 1) = v133;
    }
  }
  else
  {
    dest = nullptr;
    v137.m128i_i64[0] = 0;
    v165 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(0x7A9u, *(double *)v137.m128i_i64);
    goto LABEL_183;
  }
  v22 = (__int64 *)v189[0];
  if ( v189[0] == v189[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v165 = 0;
    v23 = v22[1];
    v24 = *v22;
    v143 = v23 << 6;
    v146 = 3 * *v22;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v26 = *(_QWORD *)(a1[3 * v24 + 2] + (v23 << 6) + 56);
      if ( v26 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0x87Au, *(double *)v137.m128i_i64);
        goto LABEL_183;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v26) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v27 = v165;
        if ( *((_QWORD *)&v165 + 1) < (unsigned __int64)(v165 + 1) )
        {
          v152 = *((void **)&v165 + 1);
          v28 = (__m128i *)qvector_reserve((__int64)&dest, 0, v165 + 1, 16);
          v48 = *((void **)&v165 + 1);
          v49 = (const __m128i *)dest;
          *((_QWORD *)&v165 + 1) = v152;
          v50 = v165 - 1;
          if ( (__int64)v165 - 1 >= 0 )
          {
            v51 = v28;
            do
            {
              v52 = _mm_loadu_si128(v49);
              ++v51;
              ++v49;
              v51[-1] = v52;
              v53 = v50-- == 0;
            }
            while ( !v53 );
            v49 = (const __m128i *)dest;
          }
          v153 = v48;
          qfree((__int64)v49);
          v27 = v165;
          dest = v28;
          *((_QWORD *)&v165 + 1) = v153;
        }
        else
        {
          v28 = (__m128i *)dest;
        }
        m128i_i8 = v28[v27].m128i_i8;
        *(_QWORD *)m128i_i8 = v24;
        *((_QWORD *)m128i_i8 + 1) = v23;
        *(_QWORD *)&v165 = v165 + 1;
      }
      v30 = (const __m128i *)v189[0];
      v137.m128i_i64[0] = 0;
      v31 = *(_QWORD *)v189[0];
      v32 = *((_QWORD *)v189[0] + 1);
      v180 = v191;
      v182 = 0u;
      v181 = 0;
      if ( !v193.m128i_i64[0] )
      {
        v33 = (__m128i *)v189[1];
        if ( (char *)v189[1] - (char *)v189[0] <= 16 )
          goto LABEL_40;
        v44 = v191;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v181, &v192, 2);
      v33 = (__m128i *)v189[1];
      v30 = (const __m128i *)v189[0];
      v137 = _mm_load_si128(&v193);
      v34 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0];
      v182 = v137;
      if ( (char *)v189[1] - (char *)v189[0] > 16 )
      {
        v44 = v180;
        v188 = 0u;
        v186 = v180;
        v187 = 0;
        if ( v193.m128i_i64[0] )
        {
          v154 = (__m128i *)v189[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(v10, &v181, 2);
          v54 = _mm_loadu_si128(&v182);
          v185 = 0u;
          v33 = v154;
          v188 = v54;
          v183 = v186;
          v184 = 0;
          if ( v182.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v182.m128i_i64[0])(&v184, v10, 2);
            v55 = _mm_loadu_si128(&v188);
            v33 = v154;
            v185 = v55;
            if ( v55.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v55.m128i_i64[0])(v10, v10, 3);
              v33 = v154;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v183 = v44;
        v185 = 0u;
        v184 = 0;
LABEL_64:
        v45 = v33[-1].m128i_u64[0];
        v46 = v33 - 1;
        v47 = v33[-1].m128i_u64[1];
        v33[-1] = _mm_loadu_si128(v30);
        v137.m128i_i64[0] = 0;
        v188 = 0u;
        v186 = v183;
        v187 = 0;
        if ( v185.m128i_i64[0] )
        {
          v162 = v47;
          v159 = v45;
          v151 = v33 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v185.m128i_i64[0])(v10, &v184, 2);
          v137 = _mm_loadu_si128(&v185);
          v47 = v162;
          v45 = v159;
          v46 = v151;
          v188 = v137;
        }
        sub_2DA820((__int64)v30, 0, v46 - v30, v45, v47, (__int64)&v186);
        if ( v188.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(v10, v10, 3);
        if ( v185.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
        v34 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0];
      }
      if ( v34 )
        v34(&v181, &v181, 3);
LABEL_40:
      v35 = (__m128i *)v189[1];
      v36 = v32 + 1;
      v37 = (const __m128i *)((char *)v189[1] - 16);
      v189[1] = (char *)v189[1] - 16;
      if ( v36 >= a1[3 * v31 + 3] )
      {
        v25 = (__int64 *)v189[0];
        if ( v189[0] == v37 )
          break;
        goto LABEL_28;
      }
      if ( v37 == (const __m128i *)v190 )
      {
        v56 = ((char *)v37 - (char *)v189[0]) >> 4;
        if ( v56 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v57 = 1;
        if ( v56 )
          v57 = ((char *)v37 - (char *)v189[0]) >> 4;
        v53 = __CFADD__(v57, v56);
        v58 = v57 + v56;
        if ( v53 )
        {
          v59 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v58 > 0x7FFFFFFFFFFFFFFLL )
            v58 = 0x7FFFFFFFFFFFFFFLL;
          v59 = v58;
        }
        v163 = v37;
        v160 = (char *)v37 - (char *)v189[0];
        v155 = (const __m128i *)v189[0];
        v60 = (__m128i *)operator new(v59 * 16);
        v61 = (__m128i *)v155;
        *(__m128i *)((char *)v60 + v160) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v36);
        if ( v163 == v155 )
        {
          v65 = (char *)v60;
        }
        else
        {
          v62 = v60;
          v63 = v155;
          do
          {
            v64 = _mm_loadu_si128(v63++);
            ++v62;
            v62[-1] = v64;
          }
          while ( v163 != v63 );
          v65 = &v60->m128i_i8[(char *)v163 - (char *)v155];
        }
        v66 = v65 + 16;
        if ( v155 )
        {
          v156 = (char *)v60;
          operator delete(v61, v190 - (char *)v61);
          v60 = (__m128i *)v156;
        }
        v189[0] = v60;
        v189[1] = v66;
        v190 = v60[v59].m128i_i8;
      }
      else
      {
        v35[-1] = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v36);
        v189[1] = (char *)v189[1] + 16;
      }
      v38 = v191;
      v182 = 0u;
      v180 = v191;
      v181 = 0;
      if ( !v193.m128i_i64[0] )
      {
        v40 = v189[1];
        v41 = v189[0];
LABEL_81:
        v137.m128i_i64[0] = 0;
        v183 = v38;
        v185 = 0u;
        v184 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v181, &v192, 2);
      v38 = v180;
      v39 = _mm_load_si128(&v193);
      v188 = 0u;
      v40 = v189[1];
      v182 = v39;
      v41 = v189[0];
      v186 = v180;
      v187 = 0;
      if ( !v193.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(v10, &v181, 2);
      v137 = _mm_loadu_si128(&v182);
      v185 = 0u;
      v188 = v137;
      v137.m128i_i64[0] = 0;
      v183 = v186;
      v184 = 0;
      if ( v182.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v182.m128i_i64[0])(&v184, v10, 2);
        v137 = _mm_loadu_si128(&v188);
        v185 = v137;
        if ( v137.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v137.m128i_i64[0])(v10, v10, 3);
      }
LABEL_48:
      sub_2DA6D0((__int64)v41, ((v40 - v41) >> 4) - 1, 0, *((_QWORD *)v40 - 2), *((_QWORD *)v40 - 1), (__int64)&v183);
      if ( v185.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
      if ( v182.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
      v25 = (__int64 *)v189[0];
      if ( v189[0] == v189[1] )
        break;
LABEL_28:
      v24 = *v25;
      v23 = v25[1];
      if ( !v178 )
        std::__throw_bad_function_call();
    }
    while ( !v179(v177, v176[3 * *v25 + 2] + (v23 << 6), v176[v146 + 2] + v143) );
    if ( a3 )
    {
      v96 = a1[12];
      LODWORD(v168) = 0;
      sub_2CDC90(a1 + 11, (int *)&v168);
      v97 = (__int64 *)dest;
      v98 = (__int64 *)((char *)dest + 16 * v165);
      if ( dest == v98 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v97 + 2] + (v97[1] << 6) + 56) = v96;
        v99 = (_DWORD *)(4 * v96 + a1[11]);
        v100 = 1 << *v97;
        if ( (*v99 & v100) != 0 )
          break;
        v97 += 2;
        *v99 |= v100;
        if ( v98 == v97 )
          goto LABEL_55;
      }
      switch_dbctx();
      v102 = *v97;
      v103 = 0;
      v104 = a1[3 * *v97 + 3];
      if ( v104 )
      {
        na = 2 * *v97;
        v103 = qalloc_or_throw(v104 << 6, v102, na, v101);
        v112 = v103;
        v113 = 0;
        v137 = 0;
        v114 = &a1[v102 + na];
        do
        {
          v116 = v114[2] + (v113 << 6);
          *(_QWORD *)v112 = off_4E13C0;
          v117 = *(_QWORD *)(v116 + 8);
          *(_QWORD *)(v112 + 16) = 0;
          *(__m128i *)(v112 + 24) = v137;
          *(_QWORD *)(v112 + 8) = v117;
          v118 = *(_QWORD *)(v116 + 24);
          if ( v118 )
          {
            v158 = v114;
            v147 = (void *)v113;
            v138 = *(_QWORD *)(v116 + 24);
            nb = 4 * v118;
            v119 = (void *)qalloc_or_throw(4 * v118, v102, 4 * v118, v113);
            *(_QWORD *)(v112 + 16) = v119;
            *(_QWORD *)(v112 + 32) = v138;
            v102 = *(_QWORD *)(v116 + 16);
            memcpy(v119, (const void *)v102, nb);
            v137 = 0;
            v114 = v158;
            v113 = (__int64)v147;
            *(_QWORD *)(v112 + 24) = v138;
          }
          ++v113;
          v112 += 64;
          *(_QWORD *)(v112 - 24) = *(_QWORD *)(v116 + 40);
          v115 = *(_DWORD *)(v116 + 48);
          *(_QWORD *)(v112 - 64) = off_4E2C60;
          *(_DWORD *)(v112 - 16) = v115;
          *(_QWORD *)(v112 - 8) = *(_QWORD *)(v116 + 56);
        }
        while ( v104 != v113 );
      }
      v105 = (char *)dest;
      v106 = (char *)dest + 16 * v165;
      if ( v106 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v105 == *v97 )
          {
            v107 = *((_QWORD *)v105 + 1);
            v108 = v97[1];
            if ( v107 != v108 && *(_QWORD *)(v103 + (v107 << 6) + 56) == v96 )
              break;
          }
          v105 += 16;
          if ( v106 == v105 )
            goto LABEL_152;
        }
        sub_81980((__int64)&v168, (const char *)&unk_418793);
        v109 = s1;
        if ( *((_QWORD *)&v168 + 1) )
          v109 = (const char *)v168;
        v110 = *((_QWORD *)v105 + 1);
        sub_81980((__int64)&v166, (const char *)&unk_418793);
        v111 = s1;
        if ( v167 )
          v111 = (const char *)v166;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v97, v111, v110, v109, v108);
        if ( v166 )
        {
          v167 = 0;
          qfree(v166);
        }
        if ( (_QWORD)v168 )
        {
          *((_QWORD *)&v168 + 1) = 0;
          qfree(v168);
        }
      }
LABEL_152:
      if ( !under_debugger )
        sub_383060(0x87Bu, *(double *)v137.m128i_i64);
LABEL_183:
      BUG();
    }
    v42 = v165;
    if ( (unsigned __int64)v165 <= 1 )
      goto LABEL_55;
    v67 = (__int64 *)dest;
    DWORD2(v168) = 0;
    v170 = (__int128 *)((char *)&v168 + 8);
    v68 = (char *)dest + 16 * v165;
    v169 = nullptr;
    v171 = (char *)&v168 + 8;
    v172 = 0;
    if ( v68 != dest )
    {
      v69 = (char *)dest;
      do
      {
        v166 = *(_QWORD *)(a1[3 * *(_QWORD *)v69 + 2] + (*((_QWORD *)v69 + 1) << 6) + 56LL);
        v70 = sub_2CDD40(&v168, (unsigned __int64 *)&v166);
        v71 = *(_QWORD *)v69;
        v69 += 16;
        *(_DWORD *)v70 |= 1 << v71;
      }
      while ( v68 != v69 );
      if ( v170 != (__int128 *)((char *)&v168 + 8) )
      {
        v72 = (__int64)v170;
        v157 = v10;
        do
        {
          v73 = *(_DWORD *)(v72 + 40);
          v74 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v72 + 32));
          v72 = std::_Rb_tree_increment();
          if ( v74 != v73 )
          {
            v75 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v75, 0x30u);
            --v172;
          }
        }
        while ( (__int128 *)v72 != (__int128 *)((char *)&v168 + 8) );
        v10 = v157;
      }
      v42 = v165;
      v67 = (__int64 *)dest;
      v76 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v165 != dest )
      {
        do
        {
          while ( 1 )
          {
            v78 = v76 + 2;
            if ( (_QWORD *)((char *)&v168 + 8) == sub_2AE200(
                                                    (__int64)&v168,
                                                    *(_QWORD *)(a1[3 * *v76 + 2] + (v76[1] << 6) + 56)) )
              break;
            v42 = v165;
            v76 += 2;
            if ( v78 == &v67[2 * (_QWORD)v165] )
              goto LABEL_112;
          }
          v79 = v77 - (_QWORD)v76;
          if ( (v79 >> 4) - 2 >= 0 )
          {
            memmove(v76, v78, v79 - 16);
            v67 = (__int64 *)dest;
          }
          *(_QWORD *)&v165 = v165 - 1;
          v42 = v165;
        }
        while ( v76 != &v67[2 * (_QWORD)v165] );
      }
      goto LABEL_112;
    }
    while ( 2 )
    {
      v80 = 16 * v42;
      v81 = *v67;
      v82 = v67[1];
      v83 = v67;
      if ( (v80 >> 4) - 2 >= 0 )
      {
        memmove(v67, v67 + 2, v80 - 16);
        v67 = (__int64 *)dest;
        v83 = (__int64 *)dest;
      }
      v84 = a1[1];
      v42 = v165 - 1;
      v85 = *(_QWORD *)(a1[3 * v81 + 2] + (v82 << 6) + 56);
      *(_QWORD *)&v165 = v165 - 1;
      if ( v84 )
      {
        v86 = 0;
        v87 = *(_DWORD *)(a1[11] + 4 * v85);
        do
        {
          v88 = -1;
          if ( (v87 & (1 << v86)) != 0 )
            v88 = v85;
          (&v186)[v86++] = (_QWORD *)v88;
        }
        while ( v86 != v84 );
      }
      if ( 16 * v42 )
      {
        do
        {
          v90 = *v83;
          v91 = a1[3 * *v83 + 2] + (v83[1] << 6);
          v92 = *(_QWORD *)(v91 + 56);
          if ( (&v186)[*v83] == (_QWORD *)-1LL )
          {
            v93 = a1[11];
            (&v186)[v90] = (_QWORD *)v92;
            *(_DWORD *)(v93 + 4 * v92) &= ~(1 << v90);
            if ( !*(_DWORD *)(a1[11] + 4 * v92) )
              ++a1[14];
            *(_QWORD *)(v91 + 56) = v85;
            *(_DWORD *)(4 * v85 + a1[11]) |= 1 << *v83;
            v94 = *(_QWORD *)(v91 + 56);
            v89 = v83 + 2;
            v67 = (__int64 *)dest;
            v42 = v165;
            if ( v85 == v94 )
            {
LABEL_129:
              if ( (((char *)&v67[2 * v42] - (char *)v83) >> 4) - 2 >= 0 )
              {
                v95 = (__int64 *)memmove(v83, v89, (char *)&v67[2 * v42] - (char *)v83 - 16);
                v67 = (__int64 *)dest;
                v83 = v95;
                v42 = v165;
              }
              *(_QWORD *)&v165 = --v42;
              continue;
            }
          }
          else
          {
            v42 = v165;
            v89 = v83 + 2;
            if ( v85 == v92 )
              goto LABEL_129;
          }
          v83 = (__int64 *)v89;
        }
        while ( v83 != &v67[2 * v42] );
      }
LABEL_112:
      if ( v42 )
        continue;
      break;
    }
    sub_2AE260((void **)v169);
LABEL_55:
    v22 = (__int64 *)v189[0];
  }
  while ( v189[1] != v189[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v165 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v192);
  if ( v189[0] )
    operator delete(v189[0], v190 - (char *)v189[0]);
  sub_66C50((__int64)v177);
  sub_66C50((__int64)v175);
  sub_66C50((__int64)v173);
  return v194 - __readfsqword(0x28u);
}

