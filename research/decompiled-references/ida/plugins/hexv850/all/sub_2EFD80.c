unsigned __int64 __fastcall sub_2EFD80(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v30; // r15
  _QWORD *v31; // rax
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
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rax
  _QWORD *v48; // rdx
  unsigned __int64 v49; // r10
  __m128i *v50; // r9
  unsigned __int64 v51; // r8
  const __m128i *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  __m128i v55; // xmm0
  bool v56; // cf
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __int64 v59; // r15
  __int64 v60; // rax
  unsigned __int64 v61; // r15
  unsigned __int64 v62; // r15
  __m128i *v63; // rax
  __m128i *v64; // rcx
  __m128i *v65; // rdi
  const __m128i *v66; // rsi
  __m128i v67; // xmm0
  char *v68; // r13
  void *v69; // r13
  __int64 *v70; // r9
  const __m128i *v71; // r14
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r12
  int v75; // r15d
  int v76; // r14d
  void *v77; // rax
  __int64 *v78; // r14
  __int64 v79; // r10
  __int64 *v80; // rsi
  __int64 v81; // r10
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // r12
  __int64 *v85; // rdi
  __int64 v86; // rsi
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
  const __m128i *v100; // rdi
  _DWORD *v101; // rdx
  int v102; // eax
  __int64 v103; // rsi
  __int64 v104; // r12
  const __m128i *v105; // rbx
  const __m128i *v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rbp
  const char *v109; // r13
  __int64 v110; // rbx
  const char *v111; // rax
  __int64 v112; // rbp
  __int64 v113; // rbx
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  int v116; // ecx
  signed __int64 v117; // rax
  signed __int64 v118; // rsi
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // r13
  __int64 v121; // rax
  __m128i *v122; // rcx
  char *v123; // r8
  unsigned __int64 *v124; // rdx
  const __m128i *v125; // rsi
  __int64 v126; // rdx
  __m128i v127; // xmm0
  void *v128; // r14
  __int64 v129; // r13
  __int64 v130; // [rsp+0h] [rbp-268h]
  __int64 v131; // [rsp+8h] [rbp-260h]
  _QWORD *v133; // [rsp+10h] [rbp-258h]
  void *v134; // [rsp+18h] [rbp-250h]
  void *v135; // [rsp+18h] [rbp-250h]
  __int64 v136; // [rsp+18h] [rbp-250h]
  const __m128i *v137; // [rsp+18h] [rbp-250h]
  __int64 v138; // [rsp+18h] [rbp-250h]
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
  sub_2C8E30((__int64)v160, a2);
  v161 = a1;
  sub_2C8E30((__int64)v162, a2);
  v163 = a1;
  sub_2C8E30((__int64)v164, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2C8E30((__int64)&v167, v160);
    v6 = *v5;
    v7 = 272 * v5[1];
    v134 = (void *)(*v5 + v7);
    sub_2C8E30((__int64)&v170, (const __m128i *)&v167);
    sub_2C8E30((__int64)v176, (const __m128i *)&v170);
    sub_2C8E30((__int64)&v173, (const __m128i *)v176);
    sub_621D0((__int64)v176);
    if ( v134 != (void *)v6 )
    {
      sub_2C8E30((__int64)v176, (const __m128i *)&v173);
      v8 = -2;
      v9 = 0xF0F0F0F0F0F0F0F1LL * (v7 >> 4);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2EFAB0(v6, (__int64)v134, v8, (const __m128i *)v176);
      sub_621D0((__int64)v176);
      sub_2C8E30((__int64)v176, (const __m128i *)&v173);
      sub_2DA2B0(v6, (__int64)v134, (const __m128i *)v176);
      sub_621D0((__int64)v176);
    }
    ++v4;
    v5 += 3;
    sub_621D0((__int64)&v173);
    sub_621D0((__int64)&v170);
    sub_621D0((__int64)&v167);
  }
  v156 = nullptr;
  m128i_i8 = nullptr;
  v178 = v161;
  v155 = 0;
  *(_OWORD *)v176 = 0;
  sub_2C8E30((__int64)&v179, v162);
  v167 = v178;
  sub_2C8E30((__int64)&v168, &v179);
  v11 = v176[1];
  v12 = v176[0];
  v173 = v167;
  sub_2C8E30((__int64)&v174, &v168);
  v170 = v173;
  sub_2C8E30((__int64)&v171, &v174);
  v13 = v11 - v12;
  sub_621D0((__int64)&v174);
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
        v135 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v172.m128i_i64[0])(&v174, &v171, 2);
        v17 = (unsigned __int64)v135;
        v175 = _mm_loadu_si128(&v172);
      }
      sub_2D5BC0((__int64)v12, i, v14, v16, v17, (__int64)&v173);
      if ( v175.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v175.m128i_i64[0])(&v174, &v174, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_621D0((__int64)&v171);
  sub_621D0((__int64)&v168);
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
        v117 = ((char *)v176[1] - (char *)v176[0]) >> 4;
        if ( v117 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v118 = 1;
        if ( v117 )
          v118 = ((char *)v176[1] - (char *)v176[0]) >> 4;
        v56 = __CFADD__(v118, v117);
        v119 = v118 + v117;
        if ( v56 )
        {
          v120 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v119 > 0x7FFFFFFFFFFFFFFLL )
            v119 = 0x7FFFFFFFFFFFFFFLL;
          v120 = 16 * v119;
        }
        v148 = (char *)v176[1] - (char *)v176[0];
        v139 = (const __m128i *)v176[0];
        v121 = operator new(v120);
        v122 = (__m128i *)v139;
        v123 = (char *)v121;
        v124 = (unsigned __int64 *)(v121 + v148);
        *v124 = v18;
        v124[1] = 0;
        if ( v20 != v139 )
        {
          v125 = v139;
          v126 = v121 + (char *)v20 - (char *)v139;
          do
          {
            v127 = _mm_loadu_si128(v125);
            v121 += 16;
            ++v125;
            *(__m128i *)(v121 - 16) = v127;
          }
          while ( v121 != v126 );
        }
        v128 = (void *)(v121 + 16);
        if ( v139 )
        {
          v140 = v123;
          operator delete(v122, m128i_i8 - (char *)v122);
          v123 = v140;
        }
        v176[0] = v123;
        v176[1] = v128;
        m128i_i8 = &v123[v120];
      }
      else
      {
        *(_QWORD *)v176[1] = v18;
        v20->m128i_i64[1] = 0;
        v176[1] = (char *)v176[1] + 16;
      }
      v167 = v178;
      sub_2C8E30((__int64)&v168, &v179);
      v21 = v176[1];
      v22 = v176[0];
      v173 = v167;
      sub_2C8E30((__int64)&v174, &v168);
      v170 = v173;
      sub_2C8E30((__int64)&v171, &v174);
      sub_621D0((__int64)&v174);
      sub_2D5A70((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v170);
      ++v18;
      sub_621D0((__int64)&v171);
      sub_621D0((__int64)&v168);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v152 = 0;
    if ( v19 )
    {
      v129 = qvector_reserve();
      qfree();
      dest = (const __m128i *)v129;
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
      sub_37CFE0(1961);
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
    v136 = 3 * *v23;
    v26 = 272 * v24;
    do
    {
      if ( a3 )
        goto LABEL_34;
      v28 = *(_QWORD *)(a1[3 * v25 + 2] + 272 * v24 + 264);
      if ( v28 < 0 )
      {
        if ( !under_debugger )
          sub_37CFE0(2170);
        goto LABEL_176;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v28) != (1 << a1[1]) - 1 )
      {
LABEL_34:
        v29 = v152;
        if ( *((_QWORD *)&v152 + 1) < (unsigned __int64)(v152 + 1) )
        {
          v30 = qvector_reserve();
          v52 = dest;
          v53 = v152 - 1;
          if ( (__int64)v152 - 1 >= 0 )
          {
            v54 = v30;
            do
            {
              v55 = _mm_loadu_si128(v52);
              v54 += 16;
              ++v52;
              *(__m128i *)(v54 - 16) = v55;
              v56 = v53-- == 0;
            }
            while ( !v56 );
          }
          qfree();
          v29 = v152;
          dest = (const __m128i *)v30;
        }
        else
        {
          v30 = (__int64)dest;
        }
        v31 = (_QWORD *)(v30 + 16 * v29);
        *v31 = v25;
        v31[1] = v24;
        *(_QWORD *)&v152 = v152 + 1;
      }
      v32 = (const __m128i *)v176[0];
      v33 = *(_QWORD *)v176[0];
      v34 = *((_QWORD *)v176[0] + 1);
      v167 = v178;
      v169 = 0u;
      v168 = 0;
      if ( !v180.m128i_i64[0] )
      {
        v35 = (__m128i *)v176[1];
        if ( (char *)v176[1] - (char *)v176[0] <= 16 )
          goto LABEL_41;
        v48 = v178;
        goto LABEL_64;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v168, &v179, 2);
      v35 = (__m128i *)v176[1];
      v32 = (const __m128i *)v176[0];
      v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0];
      v169 = _mm_load_si128(&v180);
      if ( (char *)v176[1] - (char *)v176[0] > 16 )
      {
        v48 = v167;
        v175 = 0u;
        v173 = v167;
        v174 = 0;
        if ( v180.m128i_i64[0] )
        {
          v143 = (__m128i *)v176[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v174, &v168, 2);
          v57 = _mm_loadu_si128(&v169);
          v172 = 0u;
          v35 = v143;
          v175 = v57;
          v170 = v173;
          v171 = 0;
          if ( v169.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v169.m128i_i64[0])(&v171, &v174, 2);
            v58 = _mm_loadu_si128(&v175);
            v35 = v143;
            v172 = v58;
            if ( v58.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128i_i64[0])(&v174, &v174, 3);
              v35 = v143;
            }
          }
          goto LABEL_65;
        }
LABEL_64:
        v170 = v48;
        v172 = 0u;
        v171 = 0;
LABEL_65:
        v49 = v35[-1].m128i_u64[0];
        v50 = v35 - 1;
        v51 = v35[-1].m128i_u64[1];
        v35[-1] = _mm_loadu_si128(v32);
        v175 = 0u;
        v173 = v170;
        v174 = 0;
        if ( v172.m128i_i64[0] )
        {
          v149 = v51;
          v146 = v49;
          v142 = v35 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v172.m128i_i64[0])(&v174, &v171, 2);
          v51 = v149;
          v49 = v146;
          v50 = v142;
          v175 = _mm_loadu_si128(&v172);
        }
        sub_2D5BC0((__int64)v32, 0, v50 - v32, v49, v51, (__int64)&v173);
        if ( v175.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v175.m128i_i64[0])(&v174, &v174, 3);
        if ( v172.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v172.m128i_i64[0])(&v171, &v171, 3);
        v36 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v169.m128i_i64[0];
      }
      if ( v36 )
        v36(&v168, &v168, 3);
LABEL_41:
      v37 = (__m128i *)v176[1];
      v38 = v34 + 1;
      v39 = (const __m128i *)((char *)v176[1] - 16);
      v176[1] = (char *)v176[1] - 16;
      if ( v38 >= a1[3 * v33 + 3] )
      {
        v27 = (__int64 *)v176[0];
        if ( v176[0] == v39 )
          break;
        goto LABEL_29;
      }
      if ( v39 == (const __m128i *)m128i_i8 )
      {
        v59 = ((char *)v39 - (char *)v176[0]) >> 4;
        if ( v59 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v60 = 1;
        if ( v59 )
          v60 = ((char *)v39 - (char *)v176[0]) >> 4;
        v56 = __CFADD__(v60, v59);
        v61 = v60 + v59;
        if ( v56 )
        {
          v62 = 0x7FFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( v61 > 0x7FFFFFFFFFFFFFFLL )
            v61 = 0x7FFFFFFFFFFFFFFLL;
          v62 = v61;
        }
        v150 = v39;
        v147 = (char *)v39 - (char *)v176[0];
        v144 = (const __m128i *)v176[0];
        v63 = (__m128i *)operator new(v62 * 16);
        v64 = (__m128i *)v144;
        *(__m128i *)((char *)v63 + v147) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        if ( v150 == v144 )
        {
          v68 = (char *)v63;
        }
        else
        {
          v65 = v63;
          v66 = v144;
          do
          {
            v67 = _mm_loadu_si128(v66++);
            ++v65;
            v65[-1] = v67;
          }
          while ( v150 != v66 );
          v68 = &v63->m128i_i8[(char *)v150 - (char *)v144];
        }
        v69 = v68 + 16;
        if ( v144 )
        {
          v145 = (char *)v63;
          operator delete(v64, m128i_i8 - (char *)v64);
          v63 = (__m128i *)v145;
        }
        v176[0] = v63;
        v176[1] = v69;
        m128i_i8 = v63[v62].m128i_i8;
      }
      else
      {
        v37[-1] = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v38);
        v176[1] = (char *)v176[1] + 16;
      }
      v40 = v178;
      v169 = 0u;
      v167 = v178;
      v168 = 0;
      if ( !v180.m128i_i64[0] )
      {
        v42 = v176[1];
        v43 = v176[0];
LABEL_81:
        v170 = v40;
        v172 = 0u;
        v171 = 0;
        goto LABEL_49;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v168, &v179, 2);
      v40 = v167;
      v41 = _mm_load_si128(&v180);
      v175 = 0u;
      v42 = v176[1];
      v169 = v41;
      v43 = v176[0];
      v173 = v167;
      v174 = 0;
      if ( !v180.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v174, &v168, 2);
      v44 = _mm_loadu_si128(&v169);
      v172 = 0u;
      v175 = v44;
      v170 = v173;
      v171 = 0;
      if ( v169.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v169.m128i_i64[0])(&v171, &v174, 2);
        v45 = _mm_loadu_si128(&v175);
        v172 = v45;
        if ( v45.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v45.m128i_i64[0])(&v174, &v174, 3);
      }
LABEL_49:
      sub_2D5A70((__int64)v43, ((v42 - v43) >> 4) - 1, 0, *((_QWORD *)v42 - 2), *((_QWORD *)v42 - 1), (__int64)&v170);
      if ( v172.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v172.m128i_i64[0])(&v171, &v171, 3);
      if ( v169.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v169.m128i_i64[0])(&v168, &v168, 3);
      v27 = (__int64 *)v176[0];
      if ( v176[0] == v176[1] )
        break;
LABEL_29:
      v24 = v27[1];
      v25 = *v27;
      if ( !v165 )
        std::__throw_bad_function_call();
    }
    while ( !v166(v164, v163[3 * *v27 + 2] + 272 * v24, v26 + v163[v136 + 2]) );
    if ( a3 )
    {
      v98 = a1[12];
      LODWORD(v155) = 0;
      sub_2C88D0(a1 + 11, (int *)&v155);
      v99 = (__int64 *)dest;
      v100 = &dest[v152];
      if ( dest == v100 )
        goto LABEL_56;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v99 + 2] + 272 * v99[1] + 264) = v98;
        v101 = (_DWORD *)(4 * v98 + a1[11]);
        v102 = 1 << *v99;
        if ( (*v101 & v102) != 0 )
          break;
        v99 += 2;
        *v101 |= v102;
        if ( v100 == (const __m128i *)v99 )
          goto LABEL_56;
      }
      switch_dbctx();
      v103 = *v99;
      v104 = 0;
      v131 = a1[3 * *v99 + 3];
      if ( v131 )
      {
        v138 = 2 * *v99;
        v104 = qalloc_or_throw();
        v112 = v104 + 32;
        v130 = 0;
        v133 = &a1[v103 + v138];
        do
        {
          v113 = v133[2] + v112 + -32 - v104;
          *(_QWORD *)(v112 - 32) = off_4B4E00;
          v114 = _mm_loadu_si128((const __m128i *)(v113 + 8));
          *(_QWORD *)(v112 - 8) = *(_QWORD *)(v113 + 24);
          *(__m128i *)(v112 - 24) = v114;
          sub_2B0830(v112, v113 + 32);
          *(_DWORD *)(v112 + 80) = *(_DWORD *)(v113 + 112);
          *(_DWORD *)(v112 + 88) = *(_DWORD *)(v113 + 120);
          *(_BYTE *)(v112 + 96) = *(_BYTE *)(v113 + 128);
          v115 = _mm_loadu_si128((const __m128i *)(v113 + 136));
          *(_QWORD *)(v112 + 120) = *(_QWORD *)(v113 + 152);
          *(__m128i *)(v112 + 104) = v115;
          sub_2B0830(v112 + 128, v113 + 160);
          ++v130;
          v112 += 272;
          *(_DWORD *)(v112 - 64) = *(_DWORD *)(v113 + 240);
          *(_DWORD *)(v112 - 56) = *(_DWORD *)(v113 + 248);
          v116 = *(_DWORD *)(v113 + 256);
          *(_QWORD *)(v112 - 304) = off_4B6650;
          *(_DWORD *)(v112 - 48) = v116;
          *(_QWORD *)(v112 - 40) = *(_QWORD *)(v113 + 264);
        }
        while ( v131 != v130 );
      }
      v105 = dest;
      v106 = &dest[v152];
      if ( v106 != dest )
      {
        while ( 1 )
        {
          if ( v105->m128i_i64[0] == *v99 )
          {
            v107 = v105->m128i_i64[1];
            v108 = v99[1];
            if ( v107 != v108 && *(_QWORD *)(v104 + 272 * v107 + 264) == v98 )
              break;
          }
          if ( v106 == ++v105 )
            goto LABEL_151;
        }
        sub_7CDC0((__int64)&v155, (const char *)&unk_3F5793);
        v109 = s1;
        if ( *((_QWORD *)&v155 + 1) )
          v109 = (const char *)v155;
        v110 = v105->m128i_i64[1];
        sub_7CDC0((__int64)&v153, (const char *)&unk_3F5793);
        v111 = s1;
        if ( v154 )
          v111 = v153;
        sub_68620((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v99, v111, v110, v109, v108);
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
        sub_37CFE0(2171);
LABEL_176:
      BUG();
    }
    v46 = v152;
    if ( (unsigned __int64)v152 <= 1 )
      goto LABEL_56;
    v70 = (__int64 *)dest;
    DWORD2(v155) = 0;
    v157 = (__int128 *)((char *)&v155 + 8);
    v156 = nullptr;
    v158 = (char *)&v155 + 8;
    v159 = 0;
    v137 = &dest[v152];
    if ( v137 != dest )
    {
      v71 = dest;
      do
      {
        v153 = *(const char **)(a1[3 * v71->m128i_i64[0] + 2] + 272 * v71->m128i_i64[1] + 264);
        v72 = sub_2C8980(&v155, (unsigned __int64 *)&v153);
        v73 = v71->m128i_i64[0];
        ++v71;
        *(_DWORD *)v72 |= 1 << v73;
      }
      while ( v137 != v71 );
      if ( v157 != (__int128 *)((char *)&v155 + 8) )
      {
        v74 = (__int64)v157;
        do
        {
          v75 = *(_DWORD *)(v74 + 40);
          v76 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v74 + 32));
          v74 = std::_Rb_tree_increment();
          if ( v76 != v75 )
          {
            v77 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v77, 0x30u);
            --v159;
          }
        }
        while ( (__int128 *)v74 != (__int128 *)((char *)&v155 + 8) );
      }
      v46 = v152;
      v70 = (__int64 *)dest;
      v78 = (__int64 *)dest;
      if ( &dest[(_QWORD)v152] != dest )
      {
        do
        {
          while ( 1 )
          {
            v80 = v78 + 2;
            if ( (_QWORD *)((char *)&v155 + 8) == sub_2A8E40(
                                                    (__int64)&v155,
                                                    *(_QWORD *)(a1[3 * *v78 + 2] + 272 * v78[1] + 264)) )
              break;
            v46 = v152;
            v78 += 2;
            if ( v80 == &v70[2 * (_QWORD)v152] )
              goto LABEL_111;
          }
          v81 = v79 - (_QWORD)v78;
          if ( (v81 >> 4) - 2 >= 0 )
          {
            memmove(v78, v80, v81 - 16);
            v70 = (__int64 *)dest;
          }
          *(_QWORD *)&v152 = v152 - 1;
          v46 = v152;
        }
        while ( v78 != &v70[2 * (_QWORD)v152] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v82 = 16 * v46;
      v83 = *v70;
      v84 = v70[1];
      v85 = v70;
      if ( (v82 >> 4) - 2 >= 0 )
      {
        memmove(v70, v70 + 2, v82 - 16);
        v70 = (__int64 *)dest;
        v85 = (__int64 *)dest;
      }
      v86 = a1[1];
      v46 = v152 - 1;
      *(_QWORD *)&v152 = v152 - 1;
      v87 = *(_QWORD *)(a1[3 * v83 + 2] + 272 * v84 + 264);
      if ( v86 )
      {
        v88 = 0;
        v89 = *(_DWORD *)(a1[11] + 4 * v87);
        do
        {
          v90 = -1;
          if ( (v89 & (1 << v88)) != 0 )
            v90 = v87;
          (&v173)[v88++] = (_QWORD *)v90;
        }
        while ( v88 != v86 );
      }
      if ( 16 * v46 )
      {
        do
        {
          v92 = *v85;
          v93 = a1[3 * *v85 + 2] + 272 * v85[1];
          v94 = *(_QWORD *)(v93 + 264);
          if ( (&v173)[*v85] == (_QWORD *)-1LL )
          {
            v95 = a1[11];
            (&v173)[v92] = (_QWORD *)v94;
            *(_DWORD *)(v95 + 4 * v94) &= ~(1 << v92);
            if ( !*(_DWORD *)(a1[11] + 4 * v94) )
              ++a1[14];
            *(_QWORD *)(v93 + 264) = v87;
            *(_DWORD *)(4 * v87 + a1[11]) |= 1 << *v85;
            v96 = *(_QWORD *)(v93 + 264);
            v91 = v85 + 2;
            v70 = (__int64 *)dest;
            v46 = v152;
            if ( v87 == v96 )
            {
LABEL_128:
              if ( (((char *)&v70[2 * v46] - (char *)v85) >> 4) - 2 >= 0 )
              {
                v97 = (__int64 *)memmove(v85, v91, (char *)&v70[2 * v46] - (char *)v85 - 16);
                v70 = (__int64 *)dest;
                v85 = v97;
                v46 = v152;
              }
              *(_QWORD *)&v152 = --v46;
              continue;
            }
          }
          else
          {
            v46 = v152;
            v91 = v85 + 2;
            if ( v87 == v94 )
              goto LABEL_128;
          }
          v85 = (__int64 *)v91;
        }
        while ( v85 != &v70[2 * v46] );
      }
LABEL_111:
      if ( v46 )
        continue;
      break;
    }
    sub_2A8EA0((void **)v156);
LABEL_56:
    v23 = (__int64 *)v176[0];
  }
  while ( v176[1] != v176[0] );
LABEL_57:
  if ( dest )
    qfree();
  sub_621D0((__int64)&v179);
  if ( v176[0] )
    operator delete(v176[0], m128i_i8 - (char *)v176[0]);
  sub_621D0((__int64)v164);
  sub_621D0((__int64)v162);
  sub_621D0((__int64)v160);
  return v181 - __readfsqword(0x28u);
}

