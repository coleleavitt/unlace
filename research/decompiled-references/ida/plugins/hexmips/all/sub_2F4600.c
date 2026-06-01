unsigned __int64 __fastcall sub_2F4600(_QWORD *a1, const __m128i *a2, char a3)
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
  _QWORD *v41; // rax
  __m128i v42; // xmm0
  _BYTE *v43; // r14
  _BYTE *v44; // r13
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rax
  _QWORD *v49; // rdx
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
  __int64 v99; // r14
  __int64 *v100; // r13
  const __m128i *v101; // rdi
  _DWORD *v102; // rdx
  int v103; // eax
  __int64 v104; // rbp
  const __m128i *v105; // rbx
  const __m128i *v106; // rcx
  __int64 v107; // rax
  __int64 v108; // r12
  const char *v109; // r15
  __int64 v110; // rbx
  const char *v111; // rax
  __int64 v112; // r12
  __int64 v113; // rbx
  __int64 v114; // rbx
  __int64 v115; // rsi
  signed __int64 v116; // rax
  signed __int64 v117; // rsi
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // r13
  __int64 v120; // rax
  __m128i *v121; // rcx
  char *v122; // r8
  unsigned __int64 *v123; // rdx
  const __m128i *v124; // rsi
  __int64 v125; // rdx
  __m128i v126; // xmm0
  void *v127; // r14
  __int64 v128; // r13
  __int64 v129; // [rsp+0h] [rbp-268h]
  __int64 v130; // [rsp+8h] [rbp-260h]
  __int64 v132; // [rsp+10h] [rbp-258h]
  void *v133; // [rsp+18h] [rbp-250h]
  void *v134; // [rsp+18h] [rbp-250h]
  __int64 v135; // [rsp+18h] [rbp-250h]
  const __m128i *v136; // [rsp+18h] [rbp-250h]
  __int64 v137; // [rsp+18h] [rbp-250h]
  _QWORD *v138; // [rsp+18h] [rbp-250h]
  const __m128i *v139; // [rsp+18h] [rbp-250h]
  char *v140; // [rsp+18h] [rbp-250h]
  __m128i *v142; // [rsp+30h] [rbp-238h]
  __m128i *v143; // [rsp+30h] [rbp-238h]
  const __m128i *v144; // [rsp+30h] [rbp-238h]
  char *v145; // [rsp+30h] [rbp-238h]
  unsigned __int64 v146; // [rsp+38h] [rbp-230h]
  signed __int64 v147; // [rsp+38h] [rbp-230h]
  signed __int64 v148; // [rsp+38h] [rbp-230h]
  unsigned __int64 v149; // [rsp+40h] [rbp-228h]
  const __m128i *v150; // [rsp+40h] [rbp-228h]
  const __m128i *dest; // [rsp+60h] [rbp-208h]
  __int128 v152; // [rsp+68h] [rbp-200h]
  const char *v153; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v154; // [rsp+88h] [rbp-1E0h]
  __int128 v155; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v156; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v157; // [rsp+B8h] [rbp-1B0h]
  char *v158; // [rsp+C0h] [rbp-1A8h]
  __int64 v159; // [rsp+C8h] [rbp-1A0h]
  __m128i v160[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v161; // [rsp+F0h] [rbp-178h]
  __m128i v162[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v163; // [rsp+120h] [rbp-148h]
  _BYTE v164[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v165; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v166)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v167; // [rsp+150h] [rbp-118h] BYREF
  __m128i v168; // [rsp+158h] [rbp-110h] BYREF
  __m128i v169; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v170; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v171; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v172; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v173; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v174; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v175; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v176[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *m128i_i8; // [rsp+1F0h] [rbp-78h]
  _QWORD *v178; // [rsp+1F8h] [rbp-70h]
  __m128i v179; // [rsp+200h] [rbp-68h] BYREF
  __m128i v180; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v181; // [rsp+228h] [rbp-40h]

  v181 = __readfsqword(0x28u);
  sub_2C9A00((__int64)v160, a2);
  v161 = a1;
  sub_2C9A00((__int64)v162, a2);
  v163 = a1;
  sub_2C9A00((__int64)v164, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2C9A00((__int64)&v167, v160);
    v6 = *v5;
    v7 = 72 * v5[1];
    v133 = (void *)(*v5 + v7);
    sub_2C9A00((__int64)&v170, (const __m128i *)&v167);
    sub_2C9A00((__int64)v176, (const __m128i *)&v170);
    sub_2C9A00((__int64)&v173, (const __m128i *)v176);
    sub_62A50((__int64)v176);
    if ( v133 != (void *)v6 )
    {
      sub_2C9A00((__int64)v176, (const __m128i *)&v173);
      v8 = -2;
      v9 = 0x8E38E38E38E38E39LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2F4120(v6, (__int64)v133, v8, (const __m128i *)v176);
      sub_62A50((__int64)v176);
      sub_2C9A00((__int64)v176, (const __m128i *)&v173);
      sub_2DB680(v6, (__int64)v133, (const __m128i *)v176);
      sub_62A50((__int64)v176);
    }
    ++v4;
    v5 += 3;
    sub_62A50((__int64)&v173);
    sub_62A50((__int64)&v170);
    sub_62A50((__int64)&v167);
  }
  v156 = nullptr;
  m128i_i8 = nullptr;
  v178 = v161;
  v155 = 0;
  *(_OWORD *)v176 = 0;
  sub_2C9A00((__int64)&v179, v162);
  v167 = v178;
  sub_2C9A00((__int64)&v168, &v179);
  v11 = v176[1];
  v12 = v176[0];
  v173 = v167;
  sub_2C9A00((__int64)&v174, &v168);
  v170 = v173;
  sub_2C9A00((__int64)&v171, &v174);
  v13 = v11 - v12;
  sub_62A50((__int64)&v174);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v175 = 0u;
      v174 = 0;
      v173 = v170;
      if ( v172.m128i_i64[0] )
      {
        v134 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v172.m128i_i64[0])(&v174, &v171, 2);
        v17 = (unsigned __int64)v134;
        v175 = _mm_loadu_si128(&v172);
      }
      sub_2D6AC0((__int64)v12, i, v14, v16, v17, (__int64)&v173);
      if ( v175.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v175.m128i_i64[0])(&v174, &v174, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_62A50((__int64)&v171);
  sub_62A50((__int64)&v168);
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
      v20 = (const __m128i *)v176[1];
      if ( v176[1] == m128i_i8 )
      {
        v116 = ((char *)v176[1] - (char *)v176[0]) >> 4;
        if ( v116 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v117 = 1;
        if ( v116 )
          v117 = ((char *)v176[1] - (char *)v176[0]) >> 4;
        v57 = __CFADD__(v117, v116);
        v118 = v117 + v116;
        if ( v57 )
        {
          v119 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v118 > 0x7FFFFFFFFFFFFFFLL )
            v118 = 0x7FFFFFFFFFFFFFFLL;
          v119 = 16 * v118;
        }
        v148 = (char *)v176[1] - (char *)v176[0];
        v139 = (const __m128i *)v176[0];
        v120 = operator new(v119);
        v121 = (__m128i *)v139;
        v122 = (char *)v120;
        v123 = (unsigned __int64 *)(v120 + v148);
        *v123 = v18;
        v123[1] = 0;
        if ( v20 != v139 )
        {
          v124 = v139;
          v125 = v120 + (char *)v20 - (char *)v139;
          do
          {
            v126 = _mm_loadu_si128(v124);
            v120 += 16;
            ++v124;
            *(__m128i *)(v120 - 16) = v126;
          }
          while ( v120 != v125 );
        }
        v127 = (void *)(v120 + 16);
        if ( v139 )
        {
          v140 = v122;
          operator delete(v121, m128i_i8 - (char *)v121);
          v122 = v140;
        }
        v176[0] = v122;
        v176[1] = v127;
        m128i_i8 = &v122[v119];
      }
      else
      {
        *(_QWORD *)v176[1] = v18;
        v20->m128i_i64[1] = 0;
        v176[1] = (char *)v176[1] + 16;
      }
      v167 = v178;
      sub_2C9A00((__int64)&v168, &v179);
      v21 = v176[1];
      v22 = v176[0];
      v173 = v167;
      sub_2C9A00((__int64)&v174, &v168);
      v170 = v173;
      sub_2C9A00((__int64)&v171, &v174);
      sub_62A50((__int64)&v174);
      sub_2D6970((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v170);
      ++v18;
      sub_62A50((__int64)&v171);
      sub_62A50((__int64)&v168);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v152 = 0;
    if ( v19 )
    {
      v128 = qvector_reserve();
      qfree();
      dest = (const __m128i *)v128;
    }
  }
  else
  {
    dest = nullptr;
    v152 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37E160(1961);
    goto LABEL_176;
  }
  v23 = (__int64 *)v176[0];
  if ( v176[0] == v176[1] )
    goto LABEL_57;
  do
  {
    *(_QWORD *)&v152 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 8 * v24;
    v135 = 3 * *v23;
    v27 = 72 * v24;
    do
    {
      if ( a3 )
        goto LABEL_34;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 8 * (v24 + v26) + 64);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_37E160(2170);
        goto LABEL_176;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_34:
        v30 = v152;
        if ( *((_QWORD *)&v152 + 1) < (unsigned __int64)(v152 + 1) )
        {
          v31 = qvector_reserve();
          v53 = dest;
          v54 = v152 - 1;
          if ( (__int64)v152 - 1 >= 0 )
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
          v30 = v152;
          dest = (const __m128i *)v31;
        }
        else
        {
          v31 = (__int64)dest;
        }
        v32 = (_QWORD *)(v31 + 16 * v30);
        *v32 = v25;
        v32[1] = v24;
        *(_QWORD *)&v152 = v152 + 1;
      }
      v33 = (const __m128i *)v176[0];
      v34 = *(_QWORD *)v176[0];
      v35 = *((_QWORD *)v176[0] + 1);
      v167 = v178;
      v169 = 0u;
      v168 = 0;
      if ( !v180.m128i_i64[0] )
      {
        v36 = (__m128i *)v176[1];
        if ( (char *)v176[1] - (char *)v176[0] <= 16 )
          goto LABEL_41;
        v49 = v178;
        goto LABEL_64;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v168, &v179, 2);
      v36 = (__m128i *)v176[1];
      v33 = (const __m128i *)v176[0];
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0];
      v169 = _mm_load_si128(&v180);
      if ( (char *)v176[1] - (char *)v176[0] > 16 )
      {
        v49 = v167;
        v175 = 0u;
        v173 = v167;
        v174 = 0;
        if ( v180.m128i_i64[0] )
        {
          v143 = (__m128i *)v176[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v174, &v168, 2);
          v58 = _mm_loadu_si128(&v169);
          v172 = 0u;
          v36 = v143;
          v175 = v58;
          v170 = v173;
          v171 = 0;
          if ( v169.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v169.m128i_i64[0])(&v171, &v174, 2);
            v59 = _mm_loadu_si128(&v175);
            v36 = v143;
            v172 = v59;
            if ( v59.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v59.m128i_i64[0])(&v174, &v174, 3);
              v36 = v143;
            }
          }
          goto LABEL_65;
        }
LABEL_64:
        v170 = v49;
        v172 = 0u;
        v171 = 0;
LABEL_65:
        v50 = v36[-1].m128i_u64[0];
        v51 = v36 - 1;
        v52 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v175 = 0u;
        v173 = v170;
        v174 = 0;
        if ( v172.m128i_i64[0] )
        {
          v149 = v52;
          v146 = v50;
          v142 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v172.m128i_i64[0])(&v174, &v171, 2);
          v52 = v149;
          v50 = v146;
          v51 = v142;
          v175 = _mm_loadu_si128(&v172);
        }
        sub_2D6AC0((__int64)v33, 0, v51 - v33, v50, v52, (__int64)&v173);
        if ( v175.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v175.m128i_i64[0])(&v174, &v174, 3);
        if ( v172.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v172.m128i_i64[0])(&v171, &v171, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v169.m128i_i64[0];
      }
      if ( v37 )
        v37(&v168, &v168, 3);
LABEL_41:
      v38 = (__m128i *)v176[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v176[1] - 16);
      v176[1] = (char *)v176[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v176[0];
        if ( v176[0] == v40 )
          break;
        goto LABEL_29;
      }
      if ( v40 == (const __m128i *)m128i_i8 )
      {
        v60 = ((char *)v40 - (char *)v176[0]) >> 4;
        if ( v60 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v61 = 1;
        if ( v60 )
          v61 = ((char *)v40 - (char *)v176[0]) >> 4;
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
        v150 = v40;
        v147 = (char *)v40 - (char *)v176[0];
        v144 = (const __m128i *)v176[0];
        v64 = (__m128i *)operator new(v63 * 16);
        v65 = (__m128i *)v144;
        *(__m128i *)((char *)v64 + v147) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v150 == v144 )
        {
          v69 = (char *)v64;
        }
        else
        {
          v66 = v64;
          v67 = v144;
          do
          {
            v68 = _mm_loadu_si128(v67++);
            ++v66;
            v66[-1] = v68;
          }
          while ( v150 != v67 );
          v69 = &v64->m128i_i8[(char *)v150 - (char *)v144];
        }
        v70 = v69 + 16;
        if ( v144 )
        {
          v145 = (char *)v64;
          operator delete(v65, m128i_i8 - (char *)v65);
          v64 = (__m128i *)v145;
        }
        v176[0] = v64;
        v176[1] = v70;
        m128i_i8 = v64[v63].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v176[1] = (char *)v176[1] + 16;
      }
      v41 = v178;
      v169 = 0u;
      v167 = v178;
      v168 = 0;
      if ( !v180.m128i_i64[0] )
      {
        v43 = v176[1];
        v44 = v176[0];
LABEL_81:
        v170 = v41;
        v172 = 0u;
        v171 = 0;
        goto LABEL_49;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v168, &v179, 2);
      v41 = v167;
      v42 = _mm_load_si128(&v180);
      v175 = 0u;
      v43 = v176[1];
      v169 = v42;
      v44 = v176[0];
      v173 = v167;
      v174 = 0;
      if ( !v180.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v174, &v168, 2);
      v45 = _mm_loadu_si128(&v169);
      v172 = 0u;
      v175 = v45;
      v170 = v173;
      v171 = 0;
      if ( v169.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v169.m128i_i64[0])(&v171, &v174, 2);
        v46 = _mm_loadu_si128(&v175);
        v172 = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v174, &v174, 3);
      }
LABEL_49:
      sub_2D6970((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v170);
      if ( v172.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v172.m128i_i64[0])(&v171, &v171, 3);
      if ( v169.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v169.m128i_i64[0])(&v168, &v168, 3);
      v28 = (__int64 *)v176[0];
      if ( v176[0] == v176[1] )
        break;
LABEL_29:
      v24 = v28[1];
      v25 = *v28;
      v26 = 8 * v24;
      if ( !v165 )
        std::__throw_bad_function_call();
    }
    while ( !v166(v164, v163[3 * *v28 + 2] + 72 * v24, v27 + v163[v135 + 2]) );
    if ( a3 )
    {
      v99 = a1[12];
      LODWORD(v155) = 0;
      sub_2C9410(a1 + 11, (int *)&v155);
      v100 = (__int64 *)dest;
      v101 = &dest[v152];
      if ( dest == v101 )
        goto LABEL_56;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v100 + 2] + 72 * v100[1] + 64) = v99;
        v102 = (_DWORD *)(4 * v99 + a1[11]);
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
      v130 = a1[3 * *v100 + 3];
      if ( v130 )
      {
        v137 = 2 * *v100;
        v132 = *v100;
        v104 = qalloc_or_throw();
        v112 = v104 + 16;
        v129 = 0;
        v138 = &a1[v137 + v132];
        do
        {
          v113 = v138[2];
          *(_QWORD *)(v112 - 16) = off_4C1BF0;
          v114 = -16 - v104 + v112 + v113;
          v115 = *(_QWORD *)(v114 + 8);
          *(_QWORD *)v112 = 0;
          *(_OWORD *)(v112 + 8) = 0;
          *(_QWORD *)(v112 - 8) = v115;
          sub_2A9AA0((_QWORD *)v112, v114 + 16);
          *(_QWORD *)(v112 + 24) = 0;
          copy_tinfo_t();
          ++v129;
          v112 += 72;
          *(_QWORD *)(v112 - 40) = *(_QWORD *)(v114 + 48);
          LODWORD(v115) = *(_DWORD *)(v114 + 56);
          *(_QWORD *)(v112 - 88) = off_4C3418;
          *(_DWORD *)(v112 - 32) = v115;
          *(_QWORD *)(v112 - 24) = *(_QWORD *)(v114 + 64);
        }
        while ( v130 != v129 );
      }
      v105 = dest;
      v106 = &dest[v152];
      if ( v106 != dest )
      {
        while ( 1 )
        {
          if ( v105->m128i_i64[0] == *v100 )
          {
            v107 = v105->m128i_i64[1];
            v108 = v100[1];
            if ( v107 != v108 && *(_QWORD *)(v104 + 72 * v107 + 64) == v99 )
              break;
          }
          if ( v106 == ++v105 )
            goto LABEL_151;
        }
        sub_7D780((__int64)&v155, (const char *)&unk_3FC793);
        v109 = s1;
        if ( *((_QWORD *)&v155 + 1) )
          v109 = (const char *)v155;
        v110 = v105->m128i_i64[1];
        sub_7D780((__int64)&v153, (const char *)&unk_3FC793);
        v111 = s1;
        if ( v154 )
          v111 = v153;
        sub_68EA0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v100, v111, v110, v109, v108);
        if ( v153 )
        {
          v154 = 0;
          qfree();
        }
        if ( (_QWORD)v155 )
        {
          *((_QWORD *)&v155 + 1) = 0;
          qfree();
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_37E160(2171);
LABEL_176:
      BUG();
    }
    v47 = v152;
    if ( (unsigned __int64)v152 <= 1 )
      goto LABEL_56;
    v71 = (__int64 *)dest;
    DWORD2(v155) = 0;
    v157 = (__int128 *)((char *)&v155 + 8);
    v156 = nullptr;
    v158 = (char *)&v155 + 8;
    v159 = 0;
    v136 = &dest[v152];
    if ( v136 != dest )
    {
      v72 = dest;
      do
      {
        v153 = *(const char **)(a1[3 * v72->m128i_i64[0] + 2] + 72 * v72->m128i_i64[1] + 64);
        v73 = sub_2C94C0(&v155, (unsigned __int64 *)&v153);
        v74 = v72->m128i_i64[0];
        ++v72;
        *(_DWORD *)v73 |= 1 << v74;
      }
      while ( v136 != v72 );
      if ( v157 != (__int128 *)((char *)&v155 + 8) )
      {
        v75 = (__int64)v157;
        do
        {
          v76 = *(_DWORD *)(v75 + 40);
          v77 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v75 + 32));
          v75 = std::_Rb_tree_increment();
          if ( v77 != v76 )
          {
            v78 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v78, 0x30u);
            --v159;
          }
        }
        while ( (__int128 *)v75 != (__int128 *)((char *)&v155 + 8) );
      }
      v47 = v152;
      v71 = (__int64 *)dest;
      v79 = (__int64 *)dest;
      if ( &dest[(_QWORD)v152] != dest )
      {
        do
        {
          while ( 1 )
          {
            v81 = v79 + 2;
            if ( (_QWORD *)((char *)&v155 + 8) == sub_2A9980(
                                                    (__int64)&v155,
                                                    *(_QWORD *)(a1[3 * *v79 + 2] + 72 * v79[1] + 64)) )
              break;
            v47 = v152;
            v79 += 2;
            if ( v81 == &v71[2 * (_QWORD)v152] )
              goto LABEL_111;
          }
          v82 = v80 - (_QWORD)v79;
          if ( (v82 >> 4) - 2 >= 0 )
          {
            memmove(v79, v81, v82 - 16);
            v71 = (__int64 *)dest;
          }
          *(_QWORD *)&v152 = v152 - 1;
          v47 = v152;
        }
        while ( v79 != &v71[2 * (_QWORD)v152] );
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
      v47 = v152 - 1;
      *(_QWORD *)&v152 = v152 - 1;
      v88 = *(_QWORD *)(a1[3 * v84 + 2] + 72 * v85 + 64);
      if ( v87 )
      {
        v89 = 0;
        v90 = *(_DWORD *)(a1[11] + 4 * v88);
        do
        {
          v91 = -1;
          if ( (v90 & (1 << v89)) != 0 )
            v91 = v88;
          (&v173)[v89++] = (_QWORD *)v91;
        }
        while ( v89 != v87 );
      }
      if ( 16 * v47 )
      {
        do
        {
          v94 = *v86;
          v95 = a1[3 * *v86 + 2] + 72 * v86[1];
          v96 = *(_QWORD *)(v95 + 64);
          if ( (&v173)[*v86] == (_QWORD *)-1LL )
          {
            v97 = a1[11];
            (&v173)[v94] = (_QWORD *)v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 64) = v88;
            *(_DWORD *)(4 * v88 + a1[11]) |= 1 << *v86;
            v93 = v86 + 2;
            v71 = (__int64 *)dest;
            v47 = v152;
            if ( v88 == *(_QWORD *)(v95 + 64) )
            {
LABEL_128:
              if ( (((char *)&v71[2 * v47] - (char *)v86) >> 4) - 2 >= 0 )
              {
                v98 = (__int64 *)memmove(v86, v93, (char *)&v71[2 * v47] - (char *)v86 - 16);
                v71 = (__int64 *)dest;
                v86 = v98;
                v47 = v152;
              }
              *(_QWORD *)&v152 = --v47;
              continue;
            }
          }
          else
          {
            v92 = v88 == v96;
            v93 = v86 + 2;
            v47 = v152;
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
    sub_2A99E0((void **)v156);
LABEL_56:
    v23 = (__int64 *)v176[0];
  }
  while ( v176[1] != v176[0] );
LABEL_57:
  if ( dest )
    qfree();
  sub_62A50((__int64)&v179);
  if ( v176[0] )
    operator delete(v176[0], m128i_i8 - (char *)v176[0]);
  sub_62A50((__int64)v164);
  sub_62A50((__int64)v162);
  sub_62A50((__int64)v160);
  return v181 - __readfsqword(0x28u);
}

