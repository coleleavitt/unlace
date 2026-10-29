unsigned __int64 __fastcall sub_2DDD80(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  _QWORD *v32; // rax
  const __m128i *v33; // r15
  unsigned __int64 v34; // r14
  __int64 v35; // r13
  __m128i *v36; // rcx
  void (__fastcall *v37)(__m128i *, __m128i *, __int64); // rax
  __m128i *v38; // rax
  unsigned __int64 v39; // r13
  const __m128i *v40; // rdx
  __int64 v41; // rax
  __m128i v42; // xmm0
  _BYTE *v43; // r14
  _BYTE *v44; // r13
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // r10
  __m128i *v51; // r9
  unsigned __int64 v52; // r8
  const __m128i *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  __m128i v56; // xmm0
  bool v57; // cf
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __int64 v60; // r15
  __int64 v61; // rax
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // r15
  __m128i *v64; // rax
  __m128i *v65; // rcx
  __m128i *v66; // rdi
  const __m128i *v67; // rsi
  __m128i v68; // xmm0
  char *v69; // r13
  void *v70; // r13
  __int64 *v71; // r9
  const __m128i *v72; // r14
  _QWORD *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r12
  int v76; // r15d
  int v77; // r14d
  void *v78; // rax
  __int64 *v79; // r14
  __int64 v80; // r10
  __int64 *v81; // rsi
  __int64 v82; // r10
  __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // r12
  __int64 *v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // r13
  __int64 v89; // rcx
  int v90; // r11d
  __int64 v91; // rdx
  bool v92; // zf
  void *v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rsi
  __int64 *v98; // rax
  void *v99; // r8
  __int64 *v100; // r14
  const __m128i *v101; // rdi
  _DWORD *v102; // rdx
  int v103; // eax
  __int64 v104; // rbp
  void *v105; // r8
  __int64 v106; // r12
  const __m128i *v107; // rbx
  const __m128i *v108; // rcx
  __int64 v109; // rax
  __int64 v110; // r13
  const char *v111; // r15
  __int64 v112; // rbx
  const char *v113; // rax
  __int64 v114; // r13
  __int64 v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rbx
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  __int32 v120; // esi
  signed __int64 v121; // rax
  signed __int64 v122; // rsi
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // r13
  __int64 v125; // rax
  __m128i *v126; // rcx
  char *v127; // r8
  unsigned __int64 *v128; // rdx
  const __m128i *v129; // rsi
  __int64 v130; // rdx
  __m128i v131; // xmm0
  void *v132; // r14
  __int64 v133; // r13
  __int64 v134; // [rsp+0h] [rbp-268h]
  __m128i *v135; // [rsp+0h] [rbp-268h]
  void *v136; // [rsp+8h] [rbp-260h]
  __int64 v138; // [rsp+10h] [rbp-258h]
  _QWORD *v139; // [rsp+10h] [rbp-258h]
  void *v140; // [rsp+18h] [rbp-250h]
  void *v141; // [rsp+18h] [rbp-250h]
  __int64 v142; // [rsp+18h] [rbp-250h]
  const __m128i *v143; // [rsp+18h] [rbp-250h]
  void *v144; // [rsp+18h] [rbp-250h]
  const __m128i *v145; // [rsp+18h] [rbp-250h]
  char *v146; // [rsp+18h] [rbp-250h]
  __m128i *v148; // [rsp+30h] [rbp-238h]
  __m128i *v149; // [rsp+30h] [rbp-238h]
  const __m128i *v150; // [rsp+30h] [rbp-238h]
  char *v151; // [rsp+30h] [rbp-238h]
  unsigned __int64 v152; // [rsp+38h] [rbp-230h]
  signed __int64 v153; // [rsp+38h] [rbp-230h]
  signed __int64 v154; // [rsp+38h] [rbp-230h]
  unsigned __int64 v155; // [rsp+40h] [rbp-228h]
  const __m128i *v156; // [rsp+40h] [rbp-228h]
  const __m128i *dest; // [rsp+60h] [rbp-208h]
  __int128 v158; // [rsp+68h] [rbp-200h]
  const char *v159; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v160; // [rsp+88h] [rbp-1E0h]
  __int128 v161; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v162; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v163; // [rsp+B8h] [rbp-1B0h]
  char *v164; // [rsp+C0h] [rbp-1A8h]
  __int64 v165; // [rsp+C8h] [rbp-1A0h]
  __m128i v166[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v167; // [rsp+F0h] [rbp-178h]
  __m128i v168[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v169; // [rsp+120h] [rbp-148h]
  _BYTE v170[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v171; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v172)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  __int64 v173; // [rsp+150h] [rbp-118h] BYREF
  __m128i v174; // [rsp+158h] [rbp-110h] BYREF
  __m128i v175; // [rsp+168h] [rbp-100h] BYREF
  __int64 v176; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v177; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v178; // [rsp+198h] [rbp-D0h] BYREF
  __int64 v179; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v180; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v181; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v182[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *m128i_i8; // [rsp+1F0h] [rbp-78h]
  __int64 v184; // [rsp+1F8h] [rbp-70h]
  __m128i v185; // [rsp+200h] [rbp-68h] BYREF
  __m128i v186; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v187; // [rsp+228h] [rbp-40h]

  v187 = __readfsqword(0x28u);
  sub_2C9380((__int64)v166, a2);
  v167 = a1;
  sub_2C9380((__int64)v168, a2);
  v169 = a1;
  sub_2C9380((__int64)v170, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2C9380((__int64)&v173, v166);
    v6 = *v5;
    v7 = 88 * v5[1];
    v140 = (void *)(*v5 + v7);
    sub_2C9380((__int64)&v176, (const __m128i *)&v173);
    sub_2C9380((__int64)v182, (const __m128i *)&v176);
    sub_2C9380((__int64)&v179, (const __m128i *)v182);
    sub_62A50((__int64)v182);
    if ( v140 != (void *)v6 )
    {
      sub_2C9380((__int64)v182, (const __m128i *)&v179);
      v8 = -2;
      v9 = 0x2E8BA2E8BA2E8BA3LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2DD730(v6, (__int64)v140, v8, (const __m128i *)v182);
      sub_62A50((__int64)v182);
      sub_2C9380((__int64)v182, (const __m128i *)&v179);
      sub_2D7E40(v6, (__int64)v140, (const __m128i *)v182);
      sub_62A50((__int64)v182);
    }
    ++v4;
    v5 += 3;
    sub_62A50((__int64)&v179);
    sub_62A50((__int64)&v176);
    sub_62A50((__int64)&v173);
  }
  v162 = nullptr;
  m128i_i8 = nullptr;
  v184 = (__int64)v167;
  v161 = 0;
  *(_OWORD *)v182 = 0;
  sub_2C9380((__int64)&v185, v168);
  v173 = v184;
  sub_2C9380((__int64)&v174, &v185);
  v11 = v182[1];
  v12 = v182[0];
  v179 = v173;
  sub_2C9380((__int64)&v180, &v174);
  v176 = v179;
  sub_2C9380((__int64)&v177, &v180);
  v13 = v11 - v12;
  sub_62A50((__int64)&v180);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v181 = 0u;
      v180 = 0;
      v179 = v176;
      if ( v178.m128i_i64[0] )
      {
        v141 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v178.m128i_i64[0])(&v180, &v177, 2);
        v17 = (unsigned __int64)v141;
        v181 = _mm_loadu_si128(&v178);
      }
      sub_2D50C0((__int64)v12, i, v14, v16, v17, &v179);
      if ( v181.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(&v180, &v180, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_62A50((__int64)&v177);
  sub_62A50((__int64)&v174);
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
      v20 = (const __m128i *)v182[1];
      if ( v182[1] == m128i_i8 )
      {
        v121 = ((char *)v182[1] - (char *)v182[0]) >> 4;
        if ( v121 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v122 = 1;
        if ( v121 )
          v122 = ((char *)v182[1] - (char *)v182[0]) >> 4;
        v57 = __CFADD__(v122, v121);
        v123 = v122 + v121;
        if ( v57 )
        {
          v124 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v123 > 0x7FFFFFFFFFFFFFFLL )
            v123 = 0x7FFFFFFFFFFFFFFLL;
          v124 = 16 * v123;
        }
        v154 = (char *)v182[1] - (char *)v182[0];
        v145 = (const __m128i *)v182[0];
        v125 = operator new(v124);
        v126 = (__m128i *)v145;
        v127 = (char *)v125;
        v128 = (unsigned __int64 *)(v125 + v154);
        *v128 = v18;
        v128[1] = 0;
        if ( v20 != v145 )
        {
          v129 = v145;
          v130 = v125 + (char *)v20 - (char *)v145;
          do
          {
            v131 = _mm_loadu_si128(v129);
            v125 += 16;
            ++v129;
            *(__m128i *)(v125 - 16) = v131;
          }
          while ( v125 != v130 );
        }
        v132 = (void *)(v125 + 16);
        if ( v145 )
        {
          v146 = v127;
          operator delete(v126, m128i_i8 - (char *)v126);
          v127 = v146;
        }
        v182[0] = v127;
        v182[1] = v132;
        m128i_i8 = &v127[v124];
      }
      else
      {
        *(_QWORD *)v182[1] = v18;
        v20->m128i_i64[1] = 0;
        v182[1] = (char *)v182[1] + 16;
      }
      v173 = v184;
      sub_2C9380((__int64)&v174, &v185);
      v21 = v182[1];
      v22 = v182[0];
      v179 = v173;
      sub_2C9380((__int64)&v180, &v174);
      v176 = v179;
      sub_2C9380((__int64)&v177, &v180);
      sub_62A50((__int64)&v180);
      sub_2D4F60((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v176);
      ++v18;
      sub_62A50((__int64)&v177);
      sub_62A50((__int64)&v174);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v158 = 0;
    if ( v19 )
    {
      v133 = qvector_reserve();
      qfree();
      dest = (const __m128i *)v133;
    }
  }
  else
  {
    dest = nullptr;
    v158 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37E160(1961);
    goto LABEL_176;
  }
  v23 = (__int64 *)v182[0];
  if ( v182[0] == v182[1] )
    goto LABEL_57;
  do
  {
    *(_QWORD *)&v158 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 4 * v24;
    v142 = 3 * *v23;
    v27 = 88 * v24;
    do
    {
      if ( a3 )
        goto LABEL_34;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 8 * (v24 + 2 * (v24 + v26)) + 80);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_37E160(2170);
        goto LABEL_176;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_34:
        v30 = v158;
        if ( *((_QWORD *)&v158 + 1) < (unsigned __int64)(v158 + 1) )
        {
          v31 = qvector_reserve();
          v53 = dest;
          v54 = v158 - 1;
          if ( (__int64)v158 - 1 >= 0 )
          {
            v55 = v31;
            do
            {
              v56 = _mm_loadu_si128(v53);
              v55 += 16;
              ++v53;
              *(__m128i *)(v55 - 16) = v56;
              v57 = v54-- == 0;
            }
            while ( !v57 );
          }
          qfree();
          v30 = v158;
          dest = (const __m128i *)v31;
        }
        else
        {
          v31 = (__int64)dest;
        }
        v32 = (_QWORD *)(v31 + 16 * v30);
        *v32 = v25;
        v32[1] = v24;
        *(_QWORD *)&v158 = v158 + 1;
      }
      v33 = (const __m128i *)v182[0];
      v34 = *(_QWORD *)v182[0];
      v35 = *((_QWORD *)v182[0] + 1);
      v173 = v184;
      v175 = 0u;
      v174 = 0;
      if ( !v186.m128i_i64[0] )
      {
        v36 = (__m128i *)v182[1];
        if ( (char *)v182[1] - (char *)v182[0] <= 16 )
          goto LABEL_41;
        v49 = v184;
        goto LABEL_64;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(&v174, &v185, 2);
      v36 = (__m128i *)v182[1];
      v33 = (const __m128i *)v182[0];
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0];
      v175 = _mm_load_si128(&v186);
      if ( (char *)v182[1] - (char *)v182[0] > 16 )
      {
        v49 = v173;
        v181 = 0u;
        v179 = v173;
        v180 = 0;
        if ( v186.m128i_i64[0] )
        {
          v149 = (__m128i *)v182[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(&v180, &v174, 2);
          v58 = _mm_loadu_si128(&v175);
          v178 = 0u;
          v36 = v149;
          v181 = v58;
          v176 = v179;
          v177 = 0;
          if ( v175.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v175.m128i_i64[0])(&v177, &v180, 2);
            v59 = _mm_loadu_si128(&v181);
            v36 = v149;
            v178 = v59;
            if ( v59.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v59.m128i_i64[0])(&v180, &v180, 3);
              v36 = v149;
            }
          }
          goto LABEL_65;
        }
LABEL_64:
        v176 = v49;
        v178 = 0u;
        v177 = 0;
LABEL_65:
        v50 = v36[-1].m128i_u64[0];
        v51 = v36 - 1;
        v52 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v181 = 0u;
        v179 = v176;
        v180 = 0;
        if ( v178.m128i_i64[0] )
        {
          v155 = v52;
          v152 = v50;
          v148 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v178.m128i_i64[0])(&v180, &v177, 2);
          v52 = v155;
          v50 = v152;
          v51 = v148;
          v181 = _mm_loadu_si128(&v178);
        }
        sub_2D50C0((__int64)v33, 0, v51 - v33, v50, v52, &v179);
        if ( v181.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(&v180, &v180, 3);
        if ( v178.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v178.m128i_i64[0])(&v177, &v177, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v175.m128i_i64[0];
      }
      if ( v37 )
        v37(&v174, &v174, 3);
LABEL_41:
      v38 = (__m128i *)v182[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v182[1] - 16);
      v182[1] = (char *)v182[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v182[0];
        if ( v182[0] == v40 )
          break;
        goto LABEL_29;
      }
      if ( v40 == (const __m128i *)m128i_i8 )
      {
        v60 = ((char *)v40 - (char *)v182[0]) >> 4;
        if ( v60 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v61 = 1;
        if ( v60 )
          v61 = ((char *)v40 - (char *)v182[0]) >> 4;
        v57 = __CFADD__(v61, v60);
        v62 = v61 + v60;
        if ( v57 )
        {
          v63 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v62 > 0x7FFFFFFFFFFFFFFLL )
            v62 = 0x7FFFFFFFFFFFFFFLL;
          v63 = v62;
        }
        v156 = v40;
        v153 = (char *)v40 - (char *)v182[0];
        v150 = (const __m128i *)v182[0];
        v64 = (__m128i *)operator new(v63 * 16);
        v65 = (__m128i *)v150;
        *(__m128i *)((char *)v64 + v153) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v156 == v150 )
        {
          v69 = (char *)v64;
        }
        else
        {
          v66 = v64;
          v67 = v150;
          do
          {
            v68 = _mm_loadu_si128(v67++);
            ++v66;
            v66[-1] = v68;
          }
          while ( v156 != v67 );
          v69 = &v64->m128i_i8[(char *)v156 - (char *)v150];
        }
        v70 = v69 + 16;
        if ( v150 )
        {
          v151 = (char *)v64;
          operator delete(v65, m128i_i8 - (char *)v65);
          v64 = (__m128i *)v151;
        }
        v182[0] = v64;
        v182[1] = v70;
        m128i_i8 = v64[v63].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v182[1] = (char *)v182[1] + 16;
      }
      v41 = v184;
      v175 = 0u;
      v173 = v184;
      v174 = 0;
      if ( !v186.m128i_i64[0] )
      {
        v43 = v182[1];
        v44 = v182[0];
LABEL_81:
        v176 = v41;
        v178 = 0u;
        v177 = 0;
        goto LABEL_49;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(&v174, &v185, 2);
      v41 = v173;
      v42 = _mm_load_si128(&v186);
      v181 = 0u;
      v43 = v182[1];
      v175 = v42;
      v44 = v182[0];
      v179 = v173;
      v180 = 0;
      if ( !v186.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128i_i64[0])(&v180, &v174, 2);
      v45 = _mm_loadu_si128(&v175);
      v178 = 0u;
      v181 = v45;
      v176 = v179;
      v177 = 0;
      if ( v175.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v175.m128i_i64[0])(&v177, &v180, 2);
        v46 = _mm_loadu_si128(&v181);
        v178 = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v180, &v180, 3);
      }
LABEL_49:
      sub_2D4F60((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v176);
      if ( v178.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v178.m128i_i64[0])(&v177, &v177, 3);
      if ( v175.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v175.m128i_i64[0])(&v174, &v174, 3);
      v28 = (__int64 *)v182[0];
      if ( v182[0] == v182[1] )
        break;
LABEL_29:
      v24 = v28[1];
      v25 = *v28;
      v26 = 4 * v24;
      if ( !v171 )
        std::__throw_bad_function_call();
    }
    while ( !v172(v170, v169[3 * *v28 + 2] + 88 * v24, v27 + v169[v142 + 2]) );
    if ( a3 )
    {
      v99 = (void *)a1[12];
      LODWORD(v161) = 0;
      v144 = v99;
      sub_2C9410(a1 + 11, (int *)&v161);
      v100 = (__int64 *)dest;
      v101 = &dest[v158];
      if ( dest == v101 )
        goto LABEL_56;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v100 + 2] + 88 * v100[1] + 80) = v144;
        v102 = (_DWORD *)(4LL * (_QWORD)v144 + a1[11]);
        v103 = 1 << *v100;
        if ( (*v102 & v103) != 0 )
          break;
        v100 += 2;
        *v102 |= v103;
        if ( v101 == (const __m128i *)v100 )
          goto LABEL_56;
      }
      switch_dbctx();
      v104 = 0;
      v105 = v144;
      v106 = a1[3 * *v100 + 3];
      if ( v106 )
      {
        v138 = 2 * *v100;
        v134 = *v100;
        v104 = qalloc_or_throw();
        v114 = 0;
        v105 = v144;
        v115 = v104 + 24;
        v139 = &a1[v138 + v134];
        do
        {
          v136 = v105;
          v135 = (__m128i *)v115;
          v116 = v139[2];
          *(_QWORD *)(v115 - 24) = off_4C1998;
          v117 = -24 - v104 + v115 + v116;
          v118 = _mm_loadu_si128((const __m128i *)(v117 + 8));
          *(_QWORD *)v115 = 0;
          *(_OWORD *)(v115 + 8) = 0;
          *(__m128i *)(v115 - 16) = v118;
          sub_2A9AA0((_QWORD *)v115, v117 + 24);
          ++v114;
          v105 = v136;
          v135[1].m128i_i8[8] = *(_BYTE *)(v117 + 48);
          v119 = _mm_loadu_si128((const __m128i *)(v117 + 56));
          v115 = (__int64)&v135[5].m128i_i64[1];
          v120 = *(_DWORD *)(v117 + 72);
          v135[-2].m128i_i64[1] = (__int64)off_4C3300;
          v135[2] = v119;
          v135[3].m128i_i32[0] = v120;
          v135[3].m128i_i64[1] = *(_QWORD *)(v117 + 80);
        }
        while ( v106 != v114 );
      }
      v107 = dest;
      v108 = &dest[v158];
      if ( v108 != dest )
      {
        while ( 1 )
        {
          if ( v107->m128i_i64[0] == *v100 )
          {
            v109 = v107->m128i_i64[1];
            v110 = v100[1];
            if ( v109 != v110 && *(void **)(v104 + 88 * v109 + 80) == v105 )
              break;
          }
          if ( v108 == ++v107 )
            goto LABEL_151;
        }
        sub_7D780((__int64)&v161, (const char *)&unk_3FC793);
        v111 = s1;
        if ( *((_QWORD *)&v161 + 1) )
          v111 = (const char *)v161;
        v112 = v107->m128i_i64[1];
        sub_7D780((__int64)&v159, (const char *)&unk_3FC793);
        v113 = s1;
        if ( v160 )
          v113 = v159;
        sub_68EA0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v100, v113, v112, v111, v110);
        if ( v159 )
        {
          v160 = 0;
          qfree();
        }
        if ( (_QWORD)v161 )
        {
          *((_QWORD *)&v161 + 1) = 0;
          qfree();
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_37E160(2171);
LABEL_176:
      BUG();
    }
    v47 = v158;
    if ( (unsigned __int64)v158 <= 1 )
      goto LABEL_56;
    v71 = (__int64 *)dest;
    DWORD2(v161) = 0;
    v163 = (__int128 *)((char *)&v161 + 8);
    v162 = nullptr;
    v164 = (char *)&v161 + 8;
    v165 = 0;
    v143 = &dest[v158];
    if ( v143 != dest )
    {
      v72 = dest;
      do
      {
        v159 = *(const char **)(a1[3 * v72->m128i_i64[0] + 2] + 88 * v72->m128i_i64[1] + 80);
        v73 = sub_2C94C0(&v161, (unsigned __int64 *)&v159);
        v74 = v72->m128i_i64[0];
        ++v72;
        *(_DWORD *)v73 |= 1 << v74;
      }
      while ( v143 != v72 );
      if ( v163 != (__int128 *)((char *)&v161 + 8) )
      {
        v75 = (__int64)v163;
        do
        {
          v76 = *(_DWORD *)(v75 + 40);
          v77 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v75 + 32));
          v75 = std::_Rb_tree_increment();
          if ( v77 != v76 )
          {
            v78 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v78, 0x30u);
            --v165;
          }
        }
        while ( (__int128 *)v75 != (__int128 *)((char *)&v161 + 8) );
      }
      v47 = v158;
      v71 = (__int64 *)dest;
      v79 = (__int64 *)dest;
      if ( &dest[(_QWORD)v158] != dest )
      {
        do
        {
          while ( 1 )
          {
            v81 = v79 + 2;
            if ( (_QWORD *)((char *)&v161 + 8) == sub_2A9980(
                                                    (__int64)&v161,
                                                    *(_QWORD *)(a1[3 * *v79 + 2] + 88 * v79[1] + 80)) )
              break;
            v47 = v158;
            v79 += 2;
            if ( v81 == &v71[2 * (_QWORD)v158] )
              goto LABEL_111;
          }
          v82 = v80 - (_QWORD)v79;
          if ( (v82 >> 4) - 2 >= 0 )
          {
            memmove(v79, v81, v82 - 16);
            v71 = (__int64 *)dest;
          }
          *(_QWORD *)&v158 = v158 - 1;
          v47 = v158;
        }
        while ( v79 != &v71[2 * (_QWORD)v158] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v83 = 16 * v47;
      v84 = *v71;
      v85 = v71[1];
      v86 = v71;
      if ( (v83 >> 4) - 2 >= 0 )
      {
        memmove(v71, v71 + 2, v83 - 16);
        v71 = (__int64 *)dest;
        v86 = (__int64 *)dest;
      }
      v87 = a1[1];
      v47 = v158 - 1;
      *(_QWORD *)&v158 = v158 - 1;
      v88 = *(_QWORD *)(a1[3 * v84 + 2] + 88 * v85 + 80);
      if ( v87 )
      {
        v89 = 0;
        v90 = *(_DWORD *)(a1[11] + 4 * v88);
        do
        {
          v91 = -1;
          if ( (v90 & (1 << v89)) != 0 )
            v91 = v88;
          *(&v179 + v89++) = v91;
        }
        while ( v89 != v87 );
      }
      if ( 16 * v47 )
      {
        do
        {
          v94 = *v86;
          v95 = a1[3 * *v86 + 2] + 88 * v86[1];
          v96 = *(_QWORD *)(v95 + 80);
          if ( *(&v179 + *v86) == -1 )
          {
            v97 = a1[11];
            *(&v179 + v94) = v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 80) = v88;
            *(_DWORD *)(4 * v88 + a1[11]) |= 1 << *v86;
            v93 = v86 + 2;
            v71 = (__int64 *)dest;
            v47 = v158;
            if ( v88 == *(_QWORD *)(v95 + 80) )
            {
LABEL_128:
              if ( (((char *)&v71[2 * v47] - (char *)v86) >> 4) - 2 >= 0 )
              {
                v98 = (__int64 *)memmove(v86, v93, (char *)&v71[2 * v47] - (char *)v86 - 16);
                v71 = (__int64 *)dest;
                v86 = v98;
                v47 = v158;
              }
              *(_QWORD *)&v158 = --v47;
              continue;
            }
          }
          else
          {
            v92 = v88 == v96;
            v93 = v86 + 2;
            v47 = v158;
            if ( v92 )
              goto LABEL_128;
          }
          v86 = (__int64 *)v93;
        }
        while ( v86 != &v71[2 * v47] );
      }
LABEL_111:
      if ( v47 )
        continue;
      break;
    }
    sub_2A99E0((void **)v162);
LABEL_56:
    v23 = (__int64 *)v182[0];
  }
  while ( v182[1] != v182[0] );
LABEL_57:
  if ( dest )
    qfree();
  sub_62A50((__int64)&v185);
  if ( v182[0] )
    operator delete(v182[0], m128i_i8 - (char *)v182[0]);
  sub_62A50((__int64)v170);
  sub_62A50((__int64)v168);
  sub_62A50((__int64)v166);
  return v187 - __readfsqword(0x28u);
}

