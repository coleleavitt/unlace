unsigned __int64 __fastcall sub_2F5140(_QWORD *a1, const __m128i *a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  _BYTE *v11; // r13
  _BYTE *v12; // r14
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 i; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  const __m128i *v20; // r14
  _BYTE *v21; // r13
  _BYTE *v22; // r14
  __int64 *v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128i *v30; // r15
  char *m128i_i8; // rax
  const __m128i *v32; // r15
  unsigned __int64 v33; // r14
  __int64 v34; // r13
  __m128i *v35; // rcx
  void (__fastcall *v36)(__m128i *, __m128i *, __int64); // rax
  __m128i *v37; // rax
  unsigned __int64 v38; // r13
  const __m128i *v39; // rdx
  _QWORD *v40; // rax
  __m128i v41; // xmm0
  _BYTE *v42; // r14
  _BYTE *v43; // r13
  __int64 v44; // rax
  _QWORD *v46; // rdx
  unsigned __int64 v47; // r10
  __m128i *v48; // r9
  unsigned __int64 v49; // r8
  void *v50; // rcx
  const __m128i *v51; // rdi
  __int64 v52; // rax
  __m128i *v53; // rdx
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
  char *v70; // r14
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
  __int64 v86; // rdx
  __int64 v87; // r13
  __int64 v88; // rcx
  int v89; // r11d
  __int64 v90; // rdx
  void *v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 *v97; // rax
  __int64 v98; // r13
  __int64 *v99; // r14
  __int64 *v100; // rdi
  _DWORD *v101; // rdx
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rsi
  __int64 v105; // r12
  __int64 v106; // rax
  char *v107; // rbx
  char *v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rbp
  const char *v111; // r13
  __int64 v112; // rbx
  const char *v113; // rax
  __int64 v114; // rbp
  __int64 v115; // rbx
  __m128i v116; // xmm0
  int v117; // ecx
  signed __int64 v118; // rax
  signed __int64 v119; // rsi
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // r13
  __int64 v122; // rax
  __m128i *v123; // rcx
  char *v124; // r8
  unsigned __int64 *v125; // rdx
  const __m128i *v126; // rsi
  __int64 v127; // rdx
  __m128i v128; // xmm0
  void *v129; // r14
  __m128i *v130; // r13
  __int64 v131; // r14
  const __m128i *v132; // rdi
  __int64 v133; // rax
  __m128i *v134; // rdx
  __m128i v135; // xmm0
  __int64 v136; // [rsp+0h] [rbp-268h]
  __int64 v137; // [rsp+8h] [rbp-260h]
  _QWORD *v139; // [rsp+10h] [rbp-258h]
  void *v140; // [rsp+18h] [rbp-250h]
  void *v141; // [rsp+18h] [rbp-250h]
  __int64 v142; // [rsp+18h] [rbp-250h]
  char *v143; // [rsp+18h] [rbp-250h]
  __int64 v144; // [rsp+18h] [rbp-250h]
  const __m128i *v145; // [rsp+18h] [rbp-250h]
  char *v146; // [rsp+18h] [rbp-250h]
  __m128i *v148; // [rsp+30h] [rbp-238h]
  void *v149; // [rsp+30h] [rbp-238h]
  void *v150; // [rsp+30h] [rbp-238h]
  __m128i *v151; // [rsp+30h] [rbp-238h]
  const __m128i *v152; // [rsp+30h] [rbp-238h]
  char *v153; // [rsp+30h] [rbp-238h]
  unsigned __int64 v154; // [rsp+38h] [rbp-230h]
  signed __int64 v155; // [rsp+38h] [rbp-230h]
  signed __int64 v156; // [rsp+38h] [rbp-230h]
  unsigned __int64 v157; // [rsp+40h] [rbp-228h]
  const __m128i *v158; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v160; // [rsp+68h] [rbp-200h]
  __int64 v161; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v162; // [rsp+88h] [rbp-1E0h]
  __int128 v163; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v164; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v165; // [rsp+B8h] [rbp-1B0h]
  char *v166; // [rsp+C0h] [rbp-1A8h]
  __int64 v167; // [rsp+C8h] [rbp-1A0h]
  __m128i v168[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v169; // [rsp+F0h] [rbp-178h]
  __m128i v170[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v171; // [rsp+120h] [rbp-148h]
  _BYTE v172[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v173; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v174)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v175; // [rsp+150h] [rbp-118h] BYREF
  __m128i v176; // [rsp+158h] [rbp-110h] BYREF
  __m128i v177; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v178; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v179; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v180; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v181; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v182; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v183; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v184[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v185; // [rsp+1F0h] [rbp-78h]
  _QWORD *v186; // [rsp+1F8h] [rbp-70h]
  __m128i v187; // [rsp+200h] [rbp-68h] BYREF
  __m128i v188; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v189; // [rsp+228h] [rbp-40h]

  v189 = __readfsqword(0x28u);
  sub_2CE1F0((__int64)v168, a2);
  v169 = a1;
  sub_2CE1F0((__int64)v170, a2);
  v171 = a1;
  sub_2CE1F0((__int64)v172, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CE1F0((__int64)&v175, v168);
    v6 = *v5;
    v7 = 272 * v5[1];
    v140 = (void *)(*v5 + v7);
    sub_2CE1F0((__int64)&v178, (const __m128i *)&v175);
    sub_2CE1F0((__int64)v184, (const __m128i *)&v178);
    sub_2CE1F0((__int64)&v181, (const __m128i *)v184);
    sub_66C50((__int64)v184);
    if ( v140 != (void *)v6 )
    {
      sub_2CE1F0((__int64)v184, (const __m128i *)&v181);
      v8 = -2;
      v9 = 0xF0F0F0F0F0F0F0F1LL * (v7 >> 4);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2F4E70(v6, (__int64)v140, v8, (const __m128i *)v184);
      sub_66C50((__int64)v184);
      sub_2CE1F0((__int64)v184, (const __m128i *)&v181);
      sub_2DF670(v6, (__int64)v140, (const __m128i *)v184);
      sub_66C50((__int64)v184);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v181);
    sub_66C50((__int64)&v178);
    sub_66C50((__int64)&v175);
  }
  v164 = nullptr;
  v185 = nullptr;
  v186 = v169;
  v163 = 0;
  *(_OWORD *)v184 = 0;
  sub_2CE1F0((__int64)&v187, v170);
  v175 = v186;
  sub_2CE1F0((__int64)&v176, &v187);
  v11 = v184[1];
  v12 = v184[0];
  v181 = v175;
  sub_2CE1F0((__int64)&v182, &v176);
  v178 = v181;
  sub_2CE1F0((__int64)&v179, &v182);
  v13 = v11 - v12;
  sub_66C50((__int64)&v182);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v183 = 0u;
      v182 = 0;
      v181 = v178;
      if ( v180.m128i_i64[0] )
      {
        v141 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v180.m128i_i64[0])(&v182, &v179, 2);
        v17 = (unsigned __int64)v141;
        v183 = _mm_loadu_si128(&v180);
      }
      sub_2DAF80((__int64)v12, i, v14, v16, v17, (__int64)&v181);
      if ( v183.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v183.m128i_i64[0])(&v182, &v182, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v179);
  sub_66C50((__int64)&v176);
  if ( a1[1] )
  {
    do
    {
      while ( !a1[3 * v18 + 3] )
      {
        v19 = a1[1];
        if ( ++v18 >= v19 )
          goto LABEL_22;
      }
      v20 = (const __m128i *)v184[1];
      if ( v184[1] == v185 )
      {
        v118 = ((char *)v184[1] - (char *)v184[0]) >> 4;
        if ( v118 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v119 = 1;
        if ( v118 )
          v119 = ((char *)v184[1] - (char *)v184[0]) >> 4;
        v55 = __CFADD__(v119, v118);
        v120 = v119 + v118;
        if ( v55 )
        {
          v121 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v120 > 0x7FFFFFFFFFFFFFFLL )
            v120 = 0x7FFFFFFFFFFFFFFLL;
          v121 = 16 * v120;
        }
        v156 = (char *)v184[1] - (char *)v184[0];
        v145 = (const __m128i *)v184[0];
        v122 = operator new(v121);
        v123 = (__m128i *)v145;
        v124 = (char *)v122;
        v125 = (unsigned __int64 *)(v122 + v156);
        *v125 = v18;
        v125[1] = 0;
        if ( v20 != v145 )
        {
          v126 = v145;
          v127 = v122 + (char *)v20 - (char *)v145;
          do
          {
            v128 = _mm_loadu_si128(v126);
            v122 += 16;
            ++v126;
            *(__m128i *)(v122 - 16) = v128;
          }
          while ( v122 != v127 );
        }
        v129 = (void *)(v122 + 16);
        if ( v145 )
        {
          v146 = v124;
          operator delete(v123, v185 - (char *)v123);
          v124 = v146;
        }
        v184[0] = v124;
        v184[1] = v129;
        v185 = &v124[v121];
      }
      else
      {
        *(_QWORD *)v184[1] = v18;
        v20->m128i_i64[1] = 0;
        v184[1] = (char *)v184[1] + 16;
      }
      v175 = v186;
      sub_2CE1F0((__int64)&v176, &v187);
      v21 = v184[1];
      v22 = v184[0];
      v181 = v175;
      sub_2CE1F0((__int64)&v182, &v176);
      v178 = v181;
      sub_2CE1F0((__int64)&v179, &v182);
      sub_66C50((__int64)&v182);
      sub_2DAE30((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v178);
      ++v18;
      sub_66C50((__int64)&v179);
      sub_66C50((__int64)&v176);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v135.m128i_i64[0] = 0;
    v160 = 0;
    if ( v19 )
    {
      v130 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
      v131 = *((_QWORD *)&v160 + 1);
      *((_QWORD *)&v160 + 1) = 0;
      v132 = (const __m128i *)dest;
      v133 = v160 - 1;
      if ( (__int64)v160 - 1 >= 0 )
      {
        v134 = v130;
        do
        {
          v135 = _mm_loadu_si128(v132);
          ++v134;
          ++v132;
          v134[-1] = v135;
          v55 = v133-- == 0;
        }
        while ( !v55 );
        v132 = (const __m128i *)dest;
      }
      qfree((__int64)v132);
      dest = v130;
      *((_QWORD *)&v160 + 1) = v131;
    }
  }
  else
  {
    dest = nullptr;
    v135.m128i_i64[0] = 0;
    v160 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(0x7A9u, *(double *)v135.m128i_i64);
    goto LABEL_181;
  }
  v23 = (__int64 *)v184[0];
  if ( v184[0] == v184[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v160 = 0;
    v24 = v23[1];
    v25 = *v23;
    v142 = 3 * *v23;
    v26 = 272 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v28 = *(_QWORD *)(a1[3 * v25 + 2] + 272 * v24 + 264);
      if ( v28 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0x87Au, *(double *)v135.m128i_i64);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v28) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v29 = v160;
        if ( *((_QWORD *)&v160 + 1) < (unsigned __int64)(v160 + 1) )
        {
          v149 = *((void **)&v160 + 1);
          v30 = (__m128i *)qvector_reserve((__int64)&dest, 0, v160 + 1, 16);
          v50 = *((void **)&v160 + 1);
          v51 = (const __m128i *)dest;
          *((_QWORD *)&v160 + 1) = v149;
          v52 = v160 - 1;
          if ( (__int64)v160 - 1 >= 0 )
          {
            v53 = v30;
            do
            {
              v54 = _mm_loadu_si128(v51);
              ++v53;
              ++v51;
              v53[-1] = v54;
              v55 = v52-- == 0;
            }
            while ( !v55 );
            v51 = (const __m128i *)dest;
          }
          v150 = v50;
          qfree((__int64)v51);
          v29 = v160;
          dest = v30;
          *((_QWORD *)&v160 + 1) = v150;
        }
        else
        {
          v30 = (__m128i *)dest;
        }
        m128i_i8 = v30[v29].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v160 = v160 + 1;
      }
      v32 = (const __m128i *)v184[0];
      v135.m128i_i64[0] = 0;
      v33 = *(_QWORD *)v184[0];
      v34 = *((_QWORD *)v184[0] + 1);
      v175 = v186;
      v177 = 0u;
      v176 = 0;
      if ( !v188.m128i_i64[0] )
      {
        v35 = (__m128i *)v184[1];
        if ( (char *)v184[1] - (char *)v184[0] <= 16 )
          goto LABEL_40;
        v46 = v186;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v176, &v187, 2);
      v35 = (__m128i *)v184[1];
      v32 = (const __m128i *)v184[0];
      v135 = _mm_load_si128(&v188);
      v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0];
      v177 = v135;
      if ( (char *)v184[1] - (char *)v184[0] > 16 )
      {
        v46 = v175;
        v183 = 0u;
        v181 = v175;
        v182 = 0;
        if ( v188.m128i_i64[0] )
        {
          v151 = (__m128i *)v184[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v182, &v176, 2);
          v56 = _mm_loadu_si128(&v177);
          v180 = 0u;
          v35 = v151;
          v183 = v56;
          v178 = v181;
          v179 = 0;
          if ( v177.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v177.m128i_i64[0])(&v179, &v182, 2);
            v57 = _mm_loadu_si128(&v183);
            v35 = v151;
            v180 = v57;
            if ( v57.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v57.m128i_i64[0])(&v182, &v182, 3);
              v35 = v151;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v178 = v46;
        v180 = 0u;
        v179 = 0;
LABEL_64:
        v47 = v35[-1].m128i_u64[0];
        v48 = v35 - 1;
        v49 = v35[-1].m128i_u64[1];
        v35[-1] = _mm_loadu_si128(v32);
        v135.m128i_i64[0] = 0;
        v183 = 0u;
        v181 = v178;
        v182 = 0;
        if ( v180.m128i_i64[0] )
        {
          v157 = v49;
          v154 = v47;
          v148 = v35 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v180.m128i_i64[0])(&v182, &v179, 2);
          v135 = _mm_loadu_si128(&v180);
          v49 = v157;
          v47 = v154;
          v48 = v148;
          v183 = v135;
        }
        sub_2DAF80((__int64)v32, 0, v48 - v32, v47, v49, (__int64)&v181);
        if ( v183.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v183.m128i_i64[0])(&v182, &v182, 3);
        if ( v180.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v180.m128i_i64[0])(&v179, &v179, 3);
        v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v177.m128i_i64[0];
      }
      if ( v36 )
        v36(&v176, &v176, 3);
LABEL_40:
      v37 = (__m128i *)v184[1];
      v38 = v34 + 1;
      v39 = (const __m128i *)((char *)v184[1] - 16);
      v184[1] = (char *)v184[1] - 16;
      if ( v38 >= a1[3 * v33 + 3] )
      {
        v27 = (__int64 *)v184[0];
        if ( v184[0] == v39 )
          break;
        goto LABEL_28;
      }
      if ( v39 == (const __m128i *)v185 )
      {
        v58 = ((char *)v39 - (char *)v184[0]) >> 4;
        if ( v58 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v59 = 1;
        if ( v58 )
          v59 = ((char *)v39 - (char *)v184[0]) >> 4;
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
        v158 = v39;
        v155 = (char *)v39 - (char *)v184[0];
        v152 = (const __m128i *)v184[0];
        v62 = (__m128i *)operator new(v61 * 16);
        v63 = (__m128i *)v152;
        *(__m128i *)((char *)v62 + v155) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        if ( v158 == v152 )
        {
          v67 = (char *)v62;
        }
        else
        {
          v64 = v62;
          v65 = v152;
          do
          {
            v66 = _mm_loadu_si128(v65++);
            ++v64;
            v64[-1] = v66;
          }
          while ( v158 != v65 );
          v67 = &v62->m128i_i8[(char *)v158 - (char *)v152];
        }
        v68 = v67 + 16;
        if ( v152 )
        {
          v153 = (char *)v62;
          operator delete(v63, v185 - (char *)v63);
          v62 = (__m128i *)v153;
        }
        v184[0] = v62;
        v184[1] = v68;
        v185 = v62[v61].m128i_i8;
      }
      else
      {
        v37[-1] = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        v184[1] = (char *)v184[1] + 16;
      }
      v40 = v186;
      v177 = 0u;
      v175 = v186;
      v176 = 0;
      if ( !v188.m128i_i64[0] )
      {
        v42 = v184[1];
        v43 = v184[0];
LABEL_81:
        v135.m128i_i64[0] = 0;
        v178 = v40;
        v180 = 0u;
        v179 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v176, &v187, 2);
      v40 = v175;
      v41 = _mm_load_si128(&v188);
      v183 = 0u;
      v42 = v184[1];
      v177 = v41;
      v43 = v184[0];
      v181 = v175;
      v182 = 0;
      if ( !v188.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v182, &v176, 2);
      v135 = _mm_loadu_si128(&v177);
      v180 = 0u;
      v183 = v135;
      v135.m128i_i64[0] = 0;
      v178 = v181;
      v179 = 0;
      if ( v177.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v177.m128i_i64[0])(&v179, &v182, 2);
        v135 = _mm_loadu_si128(&v183);
        v180 = v135;
        if ( v135.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v135.m128i_i64[0])(&v182, &v182, 3);
      }
LABEL_48:
      sub_2DAE30((__int64)v43, ((v42 - v43) >> 4) - 1, 0, *((_QWORD *)v42 - 2), *((_QWORD *)v42 - 1), (__int64)&v178);
      if ( v180.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v180.m128i_i64[0])(&v179, &v179, 3);
      if ( v177.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v177.m128i_i64[0])(&v176, &v176, 3);
      v27 = (__int64 *)v184[0];
      if ( v184[0] == v184[1] )
        break;
LABEL_28:
      v24 = v27[1];
      v25 = *v27;
      if ( !v173 )
        std::__throw_bad_function_call();
    }
    while ( !v174(v172, v171[3 * *v27 + 2] + 272 * v24, v26 + v171[v142 + 2]) );
    if ( a3 )
    {
      v98 = a1[12];
      LODWORD(v163) = 0;
      sub_2CDC90(a1 + 11, (int *)&v163);
      v99 = (__int64 *)dest;
      v100 = (__int64 *)((char *)dest + 16 * v160);
      if ( dest == v100 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v99 + 2] + 272 * v99[1] + 264) = v98;
        v101 = (_DWORD *)(4 * v98 + a1[11]);
        v102 = 1 << *v99;
        if ( (*v101 & v102) != 0 )
          break;
        v99 += 2;
        *v101 |= v102;
        if ( v100 == v99 )
          goto LABEL_55;
      }
      switch_dbctx();
      v104 = *v99;
      v105 = 0;
      v106 = a1[3 * *v99 + 3];
      v137 = v106;
      if ( v106 )
      {
        v144 = 2 * *v99;
        v105 = qalloc_or_throw(272 * v106, v104, v103, v144);
        v114 = v105 + 32;
        v136 = 0;
        v139 = &a1[v104 + v144];
        do
        {
          v115 = v139[2] + v114 + -32 - v105;
          *(_QWORD *)(v114 - 32) = off_4E1460;
          v116 = _mm_loadu_si128((const __m128i *)(v115 + 8));
          *(_QWORD *)(v114 - 8) = *(_QWORD *)(v115 + 24);
          *(__m128i *)(v114 - 24) = v116;
          sub_2B5BF0(v114, v115 + 32);
          *(_DWORD *)(v114 + 80) = *(_DWORD *)(v115 + 112);
          *(_DWORD *)(v114 + 88) = *(_DWORD *)(v115 + 120);
          *(_BYTE *)(v114 + 96) = *(_BYTE *)(v115 + 128);
          v135 = _mm_loadu_si128((const __m128i *)(v115 + 136));
          *(_QWORD *)(v114 + 120) = *(_QWORD *)(v115 + 152);
          *(__m128i *)(v114 + 104) = v135;
          sub_2B5BF0(v114 + 128, v115 + 160);
          ++v136;
          v114 += 272;
          *(_DWORD *)(v114 - 64) = *(_DWORD *)(v115 + 240);
          *(_DWORD *)(v114 - 56) = *(_DWORD *)(v115 + 248);
          v117 = *(_DWORD *)(v115 + 256);
          *(_QWORD *)(v114 - 304) = off_4E2CB0;
          *(_DWORD *)(v114 - 48) = v117;
          *(_QWORD *)(v114 - 40) = *(_QWORD *)(v115 + 264);
        }
        while ( v137 != v136 );
      }
      v107 = (char *)dest;
      v108 = (char *)dest + 16 * v160;
      if ( v108 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v107 == *v99 )
          {
            v109 = *((_QWORD *)v107 + 1);
            v110 = v99[1];
            if ( v109 != v110 && *(_QWORD *)(v105 + 272 * v109 + 264) == v98 )
              break;
          }
          v107 += 16;
          if ( v108 == v107 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v163, (const char *)&unk_418793);
        v111 = s1;
        if ( *((_QWORD *)&v163 + 1) )
          v111 = (const char *)v163;
        v112 = *((_QWORD *)v107 + 1);
        sub_81980((__int64)&v161, (const char *)&unk_418793);
        v113 = s1;
        if ( v162 )
          v113 = (const char *)v161;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v99, v113, v112, v111, v110);
        if ( v161 )
        {
          v162 = 0;
          qfree(v161);
        }
        if ( (_QWORD)v163 )
        {
          *((_QWORD *)&v163 + 1) = 0;
          qfree(v163);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(0x87Bu, *(double *)v135.m128i_i64);
LABEL_181:
      BUG();
    }
    v44 = v160;
    if ( (unsigned __int64)v160 <= 1 )
      goto LABEL_55;
    v69 = (__int64 *)dest;
    DWORD2(v163) = 0;
    v165 = (__int128 *)((char *)&v163 + 8);
    v164 = nullptr;
    v166 = (char *)&v163 + 8;
    v167 = 0;
    v143 = (char *)dest + 16 * v160;
    if ( v143 != dest )
    {
      v70 = (char *)dest;
      do
      {
        v161 = *(_QWORD *)(a1[3 * *(_QWORD *)v70 + 2] + 272LL * *((_QWORD *)v70 + 1) + 264);
        v71 = sub_2CDD40(&v163, (unsigned __int64 *)&v161);
        v72 = *(_QWORD *)v70;
        v70 += 16;
        *(_DWORD *)v71 |= 1 << v72;
      }
      while ( v143 != v70 );
      if ( v165 != (__int128 *)((char *)&v163 + 8) )
      {
        v73 = (__int64)v165;
        do
        {
          v74 = *(_DWORD *)(v73 + 40);
          v75 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v73 + 32));
          v73 = std::_Rb_tree_increment();
          if ( v75 != v74 )
          {
            v76 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v76, 0x30u);
            --v167;
          }
        }
        while ( (__int128 *)v73 != (__int128 *)((char *)&v163 + 8) );
      }
      v44 = v160;
      v69 = (__int64 *)dest;
      v77 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v160 != dest )
      {
        do
        {
          while ( 1 )
          {
            v79 = v77 + 2;
            if ( (_QWORD *)((char *)&v163 + 8) == sub_2AE200(
                                                    (__int64)&v163,
                                                    *(_QWORD *)(a1[3 * *v77 + 2] + 272 * v77[1] + 264)) )
              break;
            v44 = v160;
            v77 += 2;
            if ( v79 == &v69[2 * (_QWORD)v160] )
              goto LABEL_111;
          }
          v80 = v78 - (_QWORD)v77;
          if ( (v80 >> 4) - 2 >= 0 )
          {
            memmove(v77, v79, v80 - 16);
            v69 = (__int64 *)dest;
          }
          *(_QWORD *)&v160 = v160 - 1;
          v44 = v160;
        }
        while ( v77 != &v69[2 * (_QWORD)v160] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v81 = 16 * v44;
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
      v44 = v160 - 1;
      v86 = a1[3 * v82 + 2] + 272 * v83;
      *(_QWORD *)&v160 = v160 - 1;
      v87 = *(_QWORD *)(v86 + 264);
      if ( v85 )
      {
        v88 = 0;
        v89 = *(_DWORD *)(a1[11] + 4 * v87);
        do
        {
          v90 = -1;
          if ( (v89 & (1 << v88)) != 0 )
            v90 = v87;
          (&v181)[v88++] = (_QWORD *)v90;
        }
        while ( v88 != v85 );
      }
      if ( 16 * v44 )
      {
        do
        {
          v92 = *v84;
          v93 = a1[3 * *v84 + 2] + 272 * v84[1];
          v94 = *(_QWORD *)(v93 + 264);
          if ( (&v181)[*v84] == (_QWORD *)-1LL )
          {
            v95 = a1[11];
            (&v181)[v92] = (_QWORD *)v94;
            *(_DWORD *)(v95 + 4 * v94) &= ~(1 << v92);
            if ( !*(_DWORD *)(a1[11] + 4 * v94) )
              ++a1[14];
            *(_QWORD *)(v93 + 264) = v87;
            *(_DWORD *)(4 * v87 + a1[11]) |= 1 << *v84;
            v96 = *(_QWORD *)(v93 + 264);
            v91 = v84 + 2;
            v69 = (__int64 *)dest;
            v44 = v160;
            if ( v87 == v96 )
            {
LABEL_128:
              if ( (((char *)&v69[2 * v44] - (char *)v84) >> 4) - 2 >= 0 )
              {
                v97 = (__int64 *)memmove(v84, v91, (char *)&v69[2 * v44] - (char *)v84 - 16);
                v69 = (__int64 *)dest;
                v84 = v97;
                v44 = v160;
              }
              *(_QWORD *)&v160 = --v44;
              continue;
            }
          }
          else
          {
            v44 = v160;
            v91 = v84 + 2;
            if ( v87 == v94 )
              goto LABEL_128;
          }
          v84 = (__int64 *)v91;
        }
        while ( v84 != &v69[2 * v44] );
      }
LABEL_111:
      if ( v44 )
        continue;
      break;
    }
    sub_2AE260((void **)v164);
LABEL_55:
    v23 = (__int64 *)v184[0];
  }
  while ( v184[1] != v184[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v160 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v187);
  if ( v184[0] )
    operator delete(v184[0], v185 - (char *)v184[0]);
  sub_66C50((__int64)v172);
  sub_66C50((__int64)v170);
  sub_66C50((__int64)v168);
  return v189 - __readfsqword(0x28u);
}

