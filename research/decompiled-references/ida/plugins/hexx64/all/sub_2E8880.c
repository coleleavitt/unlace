unsigned __int64 __fastcall sub_2E8880(_QWORD *a1, const __m128i *a2, char a3)
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
  __m128i *v29; // r15
  char *m128i_i8; // rax
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
  __int64 v43; // rax
  _QWORD *v45; // rdx
  unsigned __int64 v46; // r10
  __m128i *v47; // r9
  unsigned __int64 v48; // r8
  void *v49; // rcx
  const __m128i *v50; // rdi
  __int64 v51; // rax
  __m128i *v52; // rdx
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
  char *v69; // r14
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r12
  int v73; // r15d
  int v74; // r14d
  void *v75; // rax
  __int64 *v76; // r14
  __int64 v77; // r10
  __int64 *v78; // rsi
  __int64 v79; // r10
  __int64 v80; // rax
  __int64 v81; // r13
  __int64 v82; // r12
  __int64 *v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // r13
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
  __int64 v102; // rbp
  __int64 v103; // r12
  __int64 v104; // rax
  char *v105; // rbx
  char *v106; // rdx
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
  int v117; // r9d
  __int64 v118; // rdx
  signed __int64 v119; // rax
  signed __int64 v120; // rcx
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // r13
  __int64 v123; // rax
  __m128i *v124; // rdx
  char *v125; // rcx
  unsigned __int64 *v126; // rsi
  __int64 v127; // rsi
  const __m128i *v128; // rdi
  __m128i v129; // xmm0
  void *v130; // r14
  __m128i *v131; // r13
  __int64 v132; // r14
  const __m128i *v133; // rdi
  __int64 v134; // rax
  __m128i *v135; // rdx
  __m128i v136; // xmm0
  __int64 v137; // [rsp+0h] [rbp-268h]
  __int64 v138; // [rsp+8h] [rbp-260h]
  const __m128i *v140; // [rsp+18h] [rbp-250h]
  void *v141; // [rsp+18h] [rbp-250h]
  __int64 v142; // [rsp+18h] [rbp-250h]
  char *v143; // [rsp+18h] [rbp-250h]
  const __m128i *v144; // [rsp+18h] [rbp-250h]
  char *v145; // [rsp+18h] [rbp-250h]
  __m128i *v147; // [rsp+30h] [rbp-238h]
  void *v148; // [rsp+30h] [rbp-238h]
  void *v149; // [rsp+30h] [rbp-238h]
  __m128i *v150; // [rsp+30h] [rbp-238h]
  const __m128i *v151; // [rsp+30h] [rbp-238h]
  char *v152; // [rsp+30h] [rbp-238h]
  unsigned __int64 v153; // [rsp+38h] [rbp-230h]
  signed __int64 v154; // [rsp+38h] [rbp-230h]
  signed __int64 v155; // [rsp+38h] [rbp-230h]
  unsigned __int64 v156; // [rsp+40h] [rbp-228h]
  const __m128i *v157; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v159; // [rsp+68h] [rbp-200h]
  __int64 v160; // [rsp+80h] [rbp-1E8h] BYREF
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
  char *v184; // [rsp+1F0h] [rbp-78h]
  _QWORD *v185; // [rsp+1F8h] [rbp-70h]
  __m128i v186; // [rsp+200h] [rbp-68h] BYREF
  __m128i v187; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v188; // [rsp+228h] [rbp-40h]

  v188 = __readfsqword(0x28u);
  sub_2CDFB0((__int64)v167, a2);
  v168 = a1;
  sub_2CDFB0((__int64)v169, a2);
  v170 = a1;
  sub_2CDFB0((__int64)v171, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CDFB0((__int64)&v174, v167);
    v6 = *v5;
    v7 = v5[1] << 6;
    v140 = (const __m128i *)(*v5 + v7);
    sub_2CDFB0((__int64)&v177, (const __m128i *)&v174);
    sub_2CDFB0((__int64)v183, (const __m128i *)&v177);
    sub_2CDFB0((__int64)&v180, (const __m128i *)v183);
    sub_66C50((__int64)v183);
    if ( v140 != (const __m128i *)v6 )
    {
      sub_2CDFB0((__int64)v183, (const __m128i *)&v180);
      v8 = v7 >> 6;
      v9 = -2;
      if ( v8 )
      {
        _BitScanReverse64(&v8, v8);
        v9 = 2LL * (int)v8;
      }
      sub_2E8460(v6, v140, v9, (const __m128i *)v183);
      sub_66C50((__int64)v183);
      sub_2CDFB0((__int64)v183, (const __m128i *)&v180);
      sub_2DD570(v6, (__int64)v140, (const __m128i *)v183);
      sub_66C50((__int64)v183);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v180);
    sub_66C50((__int64)&v177);
    sub_66C50((__int64)&v174);
  }
  v163 = nullptr;
  v184 = nullptr;
  v185 = v168;
  v162 = 0;
  *(_OWORD *)v183 = 0;
  sub_2CDFB0((__int64)&v186, v169);
  v174 = v185;
  sub_2CDFB0((__int64)&v175, &v186);
  v10 = v183[1];
  v11 = v183[0];
  v180 = v174;
  sub_2CDFB0((__int64)&v181, &v175);
  v177 = v180;
  sub_2CDFB0((__int64)&v178, &v181);
  v12 = v10 - v11;
  sub_66C50((__int64)&v181);
  if ( v12 > 16 )
  {
    v13 = v12 >> 4;
    for ( i = ((v12 >> 4) - 2) / 2; ; --i )
    {
      v15 = *(_QWORD *)&v11[16 * i];
      v16 = *(_QWORD *)&v11[16 * i + 8];
      v182 = 0u;
      v181 = 0;
      v180 = v177;
      if ( v179.m128i_i64[0] )
      {
        v141 = (void *)v16;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v179.m128i_i64[0])(&v181, &v178, 2);
        v16 = (unsigned __int64)v141;
        v182 = _mm_loadu_si128(&v179);
      }
      sub_2DA0A0((__int64)v11, i, v13, v15, v16, (__int64)&v180);
      if ( v182.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
      if ( !i )
        break;
    }
  }
  v17 = 0;
  sub_66C50((__int64)&v178);
  sub_66C50((__int64)&v175);
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
      if ( v183[1] == v184 )
      {
        v119 = ((char *)v183[1] - (char *)v183[0]) >> 4;
        if ( v119 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v120 = 1;
        if ( v119 )
          v120 = ((char *)v183[1] - (char *)v183[0]) >> 4;
        v54 = __CFADD__(v120, v119);
        v121 = v120 + v119;
        if ( v54 )
        {
          v122 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v121 > 0x7FFFFFFFFFFFFFFLL )
            v121 = 0x7FFFFFFFFFFFFFFLL;
          v122 = 16 * v121;
        }
        v155 = (char *)v183[1] - (char *)v183[0];
        v144 = (const __m128i *)v183[0];
        v123 = operator new(v122);
        v124 = (__m128i *)v144;
        v125 = (char *)v123;
        v126 = (unsigned __int64 *)(v123 + v155);
        *v126 = v17;
        v126[1] = 0;
        if ( v19 != v144 )
        {
          v127 = v123;
          v128 = v144;
          v123 += (char *)v19 - (char *)v144;
          do
          {
            v129 = _mm_loadu_si128(v128);
            v127 += 16;
            ++v128;
            *(__m128i *)(v127 - 16) = v129;
          }
          while ( v123 != v127 );
        }
        v130 = (void *)(v123 + 16);
        if ( v144 )
        {
          v145 = v125;
          operator delete(v124, v184 - (char *)v124);
          v125 = v145;
        }
        v183[0] = v125;
        v183[1] = v130;
        v184 = &v125[v122];
      }
      else
      {
        *(_QWORD *)v183[1] = v17;
        v19->m128i_i64[1] = 0;
        v183[1] = (char *)v183[1] + 16;
      }
      v174 = v185;
      sub_2CDFB0((__int64)&v175, &v186);
      v20 = v183[1];
      v21 = v183[0];
      v180 = v174;
      sub_2CDFB0((__int64)&v181, &v175);
      v177 = v180;
      sub_2CDFB0((__int64)&v178, &v181);
      sub_66C50((__int64)&v181);
      sub_2D9F50((__int64)v21, ((v20 - v21) >> 4) - 1, 0, *((_QWORD *)v20 - 2), *((_QWORD *)v20 - 1), (__int64)&v177);
      ++v17;
      sub_66C50((__int64)&v178);
      sub_66C50((__int64)&v175);
      v18 = a1[1];
    }
    while ( v17 < v18 );
LABEL_22:
    dest = nullptr;
    v136.m128i_i64[0] = 0;
    v159 = 0;
    if ( v18 )
    {
      v131 = (__m128i *)qvector_reserve((__int64)&dest, 0, v18, 16);
      v132 = *((_QWORD *)&v159 + 1);
      *((_QWORD *)&v159 + 1) = 0;
      v133 = (const __m128i *)dest;
      v134 = v159 - 1;
      if ( (__int64)v159 - 1 >= 0 )
      {
        v135 = v131;
        do
        {
          v136 = _mm_loadu_si128(v133);
          ++v135;
          ++v133;
          v135[-1] = v136;
          v54 = v134-- == 0;
        }
        while ( !v54 );
        v133 = (const __m128i *)dest;
      }
      qfree((__int64)v133);
      dest = v131;
      *((_QWORD *)&v159 + 1) = v132;
    }
  }
  else
  {
    dest = nullptr;
    v136.m128i_i64[0] = 0;
    v159 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(0x7A9u, *(double *)v136.m128i_i64);
    goto LABEL_181;
  }
  v22 = (__int64 *)v183[0];
  if ( v183[0] == v183[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v159 = 0;
    v23 = v22[1];
    v24 = *v22;
    v25 = v23 << 6;
    v142 = 3 * *v22;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v27 = *(_QWORD *)(a1[3 * v24 + 2] + (v23 << 6) + 56);
      if ( v27 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0x87Au, *(double *)v136.m128i_i64);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v27) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v28 = v159;
        if ( *((_QWORD *)&v159 + 1) < (unsigned __int64)(v159 + 1) )
        {
          v148 = *((void **)&v159 + 1);
          v29 = (__m128i *)qvector_reserve((__int64)&dest, 0, v159 + 1, 16);
          v49 = *((void **)&v159 + 1);
          v50 = (const __m128i *)dest;
          *((_QWORD *)&v159 + 1) = v148;
          v51 = v159 - 1;
          if ( (__int64)v159 - 1 >= 0 )
          {
            v52 = v29;
            do
            {
              v53 = _mm_loadu_si128(v50);
              ++v52;
              ++v50;
              v52[-1] = v53;
              v54 = v51-- == 0;
            }
            while ( !v54 );
            v50 = (const __m128i *)dest;
          }
          v149 = v49;
          qfree((__int64)v50);
          v28 = v159;
          dest = v29;
          *((_QWORD *)&v159 + 1) = v149;
        }
        else
        {
          v29 = (__m128i *)dest;
        }
        m128i_i8 = v29[v28].m128i_i8;
        *(_QWORD *)m128i_i8 = v24;
        *((_QWORD *)m128i_i8 + 1) = v23;
        *(_QWORD *)&v159 = v159 + 1;
      }
      v31 = (const __m128i *)v183[0];
      v136.m128i_i64[0] = 0;
      v32 = *(_QWORD *)v183[0];
      v33 = *((_QWORD *)v183[0] + 1);
      v174 = v185;
      v176 = 0u;
      v175 = 0;
      if ( !v187.m128i_i64[0] )
      {
        v34 = (__m128i *)v183[1];
        if ( (char *)v183[1] - (char *)v183[0] <= 16 )
          goto LABEL_40;
        v45 = v185;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v175, &v186, 2);
      v34 = (__m128i *)v183[1];
      v31 = (const __m128i *)v183[0];
      v136 = _mm_load_si128(&v187);
      v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0];
      v176 = v136;
      if ( (char *)v183[1] - (char *)v183[0] > 16 )
      {
        v45 = v174;
        v182 = 0u;
        v180 = v174;
        v181 = 0;
        if ( v187.m128i_i64[0] )
        {
          v150 = (__m128i *)v183[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v181, &v175, 2);
          v55 = _mm_loadu_si128(&v176);
          v179 = 0u;
          v34 = v150;
          v182 = v55;
          v177 = v180;
          v178 = 0;
          if ( v176.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v176.m128i_i64[0])(&v178, &v181, 2);
            v56 = _mm_loadu_si128(&v182);
            v34 = v150;
            v179 = v56;
            if ( v56.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v56.m128i_i64[0])(&v181, &v181, 3);
              v34 = v150;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v177 = v45;
        v179 = 0u;
        v178 = 0;
LABEL_64:
        v46 = v34[-1].m128i_u64[0];
        v47 = v34 - 1;
        v48 = v34[-1].m128i_u64[1];
        v34[-1] = _mm_loadu_si128(v31);
        v136.m128i_i64[0] = 0;
        v182 = 0u;
        v180 = v177;
        v181 = 0;
        if ( v179.m128i_i64[0] )
        {
          v156 = v48;
          v153 = v46;
          v147 = v34 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v179.m128i_i64[0])(&v181, &v178, 2);
          v136 = _mm_loadu_si128(&v179);
          v48 = v156;
          v46 = v153;
          v47 = v147;
          v182 = v136;
        }
        sub_2DA0A0((__int64)v31, 0, v47 - v31, v46, v48, (__int64)&v180);
        if ( v182.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
        if ( v179.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v179.m128i_i64[0])(&v178, &v178, 3);
        v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v176.m128i_i64[0];
      }
      if ( v35 )
        v35(&v175, &v175, 3);
LABEL_40:
      v36 = (__m128i *)v183[1];
      v37 = v33 + 1;
      v38 = (const __m128i *)((char *)v183[1] - 16);
      v183[1] = (char *)v183[1] - 16;
      if ( v37 >= a1[3 * v32 + 3] )
      {
        v26 = (__int64 *)v183[0];
        if ( v183[0] == v38 )
          break;
        goto LABEL_28;
      }
      if ( v38 == (const __m128i *)v184 )
      {
        v57 = ((char *)v38 - (char *)v183[0]) >> 4;
        if ( v57 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v58 = 1;
        if ( v57 )
          v58 = ((char *)v38 - (char *)v183[0]) >> 4;
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
        v157 = v38;
        v154 = (char *)v38 - (char *)v183[0];
        v151 = (const __m128i *)v183[0];
        v61 = (__m128i *)operator new(v60 * 16);
        v62 = (__m128i *)v151;
        *(__m128i *)((char *)v61 + v154) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v37);
        if ( v157 == v151 )
        {
          v66 = (char *)v61;
        }
        else
        {
          v63 = v61;
          v64 = v151;
          do
          {
            v65 = _mm_loadu_si128(v64++);
            ++v63;
            v63[-1] = v65;
          }
          while ( v157 != v64 );
          v66 = &v61->m128i_i8[(char *)v157 - (char *)v151];
        }
        v67 = v66 + 16;
        if ( v151 )
        {
          v152 = (char *)v61;
          operator delete(v62, v184 - (char *)v62);
          v61 = (__m128i *)v152;
        }
        v183[0] = v61;
        v183[1] = v67;
        v184 = v61[v60].m128i_i8;
      }
      else
      {
        v36[-1] = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v37);
        v183[1] = (char *)v183[1] + 16;
      }
      v39 = v185;
      v176 = 0u;
      v174 = v185;
      v175 = 0;
      if ( !v187.m128i_i64[0] )
      {
        v41 = v183[1];
        v42 = v183[0];
LABEL_81:
        v136.m128i_i64[0] = 0;
        v177 = v39;
        v179 = 0u;
        v178 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v175, &v186, 2);
      v39 = v174;
      v40 = _mm_load_si128(&v187);
      v182 = 0u;
      v41 = v183[1];
      v176 = v40;
      v42 = v183[0];
      v180 = v174;
      v181 = 0;
      if ( !v187.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v181, &v175, 2);
      v136 = _mm_loadu_si128(&v176);
      v179 = 0u;
      v182 = v136;
      v136.m128i_i64[0] = 0;
      v177 = v180;
      v178 = 0;
      if ( v176.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v176.m128i_i64[0])(&v178, &v181, 2);
        v136 = _mm_loadu_si128(&v182);
        v179 = v136;
        if ( v136.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v136.m128i_i64[0])(&v181, &v181, 3);
      }
LABEL_48:
      sub_2D9F50((__int64)v42, ((v41 - v42) >> 4) - 1, 0, *((_QWORD *)v41 - 2), *((_QWORD *)v41 - 1), (__int64)&v177);
      if ( v179.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v179.m128i_i64[0])(&v178, &v178, 3);
      if ( v176.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v176.m128i_i64[0])(&v175, &v175, 3);
      v26 = (__int64 *)v183[0];
      if ( v183[0] == v183[1] )
        break;
LABEL_28:
      v24 = *v26;
      v23 = v26[1];
      if ( !v172 )
        std::__throw_bad_function_call();
    }
    while ( !v173(v171, v170[3 * *v26 + 2] + (v23 << 6), v25 + v170[v142 + 2]) );
    if ( a3 )
    {
      v96 = a1[12];
      LODWORD(v162) = 0;
      sub_2CDC90(a1 + 11, (int *)&v162);
      v97 = (__int64 *)dest;
      v98 = (__int64 *)((char *)dest + 16 * v159);
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
      v102 = 0;
      v103 = 2 * *v97;
      v104 = a1[3 * *v97 + 3];
      if ( v104 )
      {
        v138 = *v97;
        v137 = v104 << 6;
        v112 = qalloc_or_throw(v104 << 6, (__int64)v98, *v97, v101);
        v102 = v112;
        v113 = 0;
        v114 = v112 + v137;
        do
        {
          v112 += 64;
          v115 = v113 + a1[v138 + 2 + v103];
          v113 += 64;
          v116 = *(_DWORD *)(v115 + 24);
          *(__m128i *)(v112 - 56) = _mm_loadu_si128((const __m128i *)(v115 + 8));
          v136 = _mm_loadu_si128((const __m128i *)(v115 + 32));
          *(_DWORD *)(v112 - 40) = v116;
          v117 = *(_DWORD *)(v115 + 48);
          *(__m128i *)(v112 - 32) = v136;
          *(_DWORD *)(v112 - 16) = v117;
          v118 = *(_QWORD *)(v115 + 56);
          *(_QWORD *)(v112 - 64) = off_4E2C10;
          *(_QWORD *)(v112 - 8) = v118;
        }
        while ( v112 != v114 );
      }
      v105 = (char *)dest;
      v106 = (char *)dest + 16 * v159;
      if ( v106 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v105 == *v97 )
          {
            v107 = *((_QWORD *)v105 + 1);
            v108 = v97[1];
            if ( v107 != v108 && *(_QWORD *)(v102 + (v107 << 6) + 56) == v96 )
              break;
          }
          v105 += 16;
          if ( v106 == v105 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v162, (const char *)&unk_418793);
        v109 = s1;
        if ( *((_QWORD *)&v162 + 1) )
          v109 = (const char *)v162;
        v110 = *((_QWORD *)v105 + 1);
        sub_81980((__int64)&v160, (const char *)&unk_418793);
        v111 = s1;
        if ( v161 )
          v111 = (const char *)v160;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v97, v111, v110, v109, v108);
        if ( v160 )
        {
          v161 = 0;
          qfree(v160);
        }
        if ( (_QWORD)v162 )
        {
          *((_QWORD *)&v162 + 1) = 0;
          qfree(v162);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(0x87Bu, *(double *)v136.m128i_i64);
LABEL_181:
      BUG();
    }
    v43 = v159;
    if ( (unsigned __int64)v159 <= 1 )
      goto LABEL_55;
    v68 = (__int64 *)dest;
    DWORD2(v162) = 0;
    v164 = (__int128 *)((char *)&v162 + 8);
    v163 = nullptr;
    v165 = (char *)&v162 + 8;
    v166 = 0;
    v143 = (char *)dest + 16 * v159;
    if ( v143 != dest )
    {
      v69 = (char *)dest;
      do
      {
        v160 = *(_QWORD *)(a1[3 * *(_QWORD *)v69 + 2] + (*((_QWORD *)v69 + 1) << 6) + 56LL);
        v70 = sub_2CDD40(&v162, (unsigned __int64 *)&v160);
        v71 = *(_QWORD *)v69;
        v69 += 16;
        *(_DWORD *)v70 |= 1 << v71;
      }
      while ( v143 != v69 );
      if ( v164 != (__int128 *)((char *)&v162 + 8) )
      {
        v72 = (__int64)v164;
        do
        {
          v73 = *(_DWORD *)(v72 + 40);
          v74 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v72 + 32));
          v72 = std::_Rb_tree_increment();
          if ( v74 != v73 )
          {
            v75 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v75, 0x30u);
            --v166;
          }
        }
        while ( (__int128 *)v72 != (__int128 *)((char *)&v162 + 8) );
      }
      v43 = v159;
      v68 = (__int64 *)dest;
      v76 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v159 != dest )
      {
        do
        {
          while ( 1 )
          {
            v78 = v76 + 2;
            if ( (_QWORD *)((char *)&v162 + 8) == sub_2AE200(
                                                    (__int64)&v162,
                                                    *(_QWORD *)(a1[3 * *v76 + 2] + (v76[1] << 6) + 56)) )
              break;
            v43 = v159;
            v76 += 2;
            if ( v78 == &v68[2 * (_QWORD)v159] )
              goto LABEL_111;
          }
          v79 = v77 - (_QWORD)v76;
          if ( (v79 >> 4) - 2 >= 0 )
          {
            memmove(v76, v78, v79 - 16);
            v68 = (__int64 *)dest;
          }
          *(_QWORD *)&v159 = v159 - 1;
          v43 = v159;
        }
        while ( v76 != &v68[2 * (_QWORD)v159] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v80 = 16 * v43;
      v81 = *v68;
      v82 = v68[1];
      v83 = v68;
      if ( (v80 >> 4) - 2 >= 0 )
      {
        memmove(v68, v68 + 2, v80 - 16);
        v68 = (__int64 *)dest;
        v83 = (__int64 *)dest;
      }
      v84 = a1[1];
      v43 = v159 - 1;
      v85 = *(_QWORD *)(a1[3 * v81 + 2] + (v82 << 6) + 56);
      *(_QWORD *)&v159 = v159 - 1;
      if ( v84 )
      {
        v86 = 0;
        v87 = *(_DWORD *)(a1[11] + 4 * v85);
        do
        {
          v88 = -1;
          if ( (v87 & (1 << v86)) != 0 )
            v88 = v85;
          (&v180)[v86++] = (_QWORD *)v88;
        }
        while ( v86 != v84 );
      }
      if ( 16 * v43 )
      {
        do
        {
          v90 = *v83;
          v91 = a1[3 * *v83 + 2] + (v83[1] << 6);
          v92 = *(_QWORD *)(v91 + 56);
          if ( (&v180)[*v83] == (_QWORD *)-1LL )
          {
            v93 = a1[11];
            (&v180)[v90] = (_QWORD *)v92;
            *(_DWORD *)(v93 + 4 * v92) &= ~(1 << v90);
            if ( !*(_DWORD *)(a1[11] + 4 * v92) )
              ++a1[14];
            *(_QWORD *)(v91 + 56) = v85;
            *(_DWORD *)(4 * v85 + a1[11]) |= 1 << *v83;
            v94 = *(_QWORD *)(v91 + 56);
            v89 = v83 + 2;
            v68 = (__int64 *)dest;
            v43 = v159;
            if ( v85 == v94 )
            {
LABEL_128:
              if ( (((char *)&v68[2 * v43] - (char *)v83) >> 4) - 2 >= 0 )
              {
                v95 = (__int64 *)memmove(v83, v89, (char *)&v68[2 * v43] - (char *)v83 - 16);
                v68 = (__int64 *)dest;
                v83 = v95;
                v43 = v159;
              }
              *(_QWORD *)&v159 = --v43;
              continue;
            }
          }
          else
          {
            v43 = v159;
            v89 = v83 + 2;
            if ( v85 == v92 )
              goto LABEL_128;
          }
          v83 = (__int64 *)v89;
        }
        while ( v83 != &v68[2 * v43] );
      }
LABEL_111:
      if ( v43 )
        continue;
      break;
    }
    sub_2AE260((void **)v163);
LABEL_55:
    v22 = (__int64 *)v183[0];
  }
  while ( v183[1] != v183[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v159 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v186);
  if ( v183[0] )
    operator delete(v183[0], v184 - (char *)v183[0]);
  sub_66C50((__int64)v171);
  sub_66C50((__int64)v169);
  sub_66C50((__int64)v167);
  return v188 - __readfsqword(0x28u);
}

