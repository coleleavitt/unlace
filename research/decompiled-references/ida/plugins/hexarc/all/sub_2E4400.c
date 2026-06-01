unsigned __int64 __fastcall sub_2E4400(_QWORD *a1, const __m128i *a2, char a3)
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
  int v118; // esi
  __int64 v119; // rcx
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
  __int64 v134; // [rsp+0h] [rbp-268h]
  void *v135; // [rsp+8h] [rbp-260h]
  __int64 v137; // [rsp+10h] [rbp-258h]
  _QWORD *v138; // [rsp+10h] [rbp-258h]
  void *v139; // [rsp+18h] [rbp-250h]
  void *v140; // [rsp+18h] [rbp-250h]
  __int64 v141; // [rsp+18h] [rbp-250h]
  const __m128i *v142; // [rsp+18h] [rbp-250h]
  void *v143; // [rsp+18h] [rbp-250h]
  const __m128i *v144; // [rsp+18h] [rbp-250h]
  char *v145; // [rsp+18h] [rbp-250h]
  __m128i *v147; // [rsp+30h] [rbp-238h]
  __m128i *v148; // [rsp+30h] [rbp-238h]
  const __m128i *v149; // [rsp+30h] [rbp-238h]
  char *v150; // [rsp+30h] [rbp-238h]
  unsigned __int64 v151; // [rsp+38h] [rbp-230h]
  signed __int64 v152; // [rsp+38h] [rbp-230h]
  signed __int64 v153; // [rsp+38h] [rbp-230h]
  unsigned __int64 v154; // [rsp+40h] [rbp-228h]
  const __m128i *v155; // [rsp+40h] [rbp-228h]
  const __m128i *dest; // [rsp+60h] [rbp-208h]
  __int128 v157; // [rsp+68h] [rbp-200h]
  const char *v158; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v159; // [rsp+88h] [rbp-1E0h]
  __int128 v160; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v161; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v162; // [rsp+B8h] [rbp-1B0h]
  char *v163; // [rsp+C0h] [rbp-1A8h]
  __int64 v164; // [rsp+C8h] [rbp-1A0h]
  __m128i v165[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v166; // [rsp+F0h] [rbp-178h]
  __m128i v167[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v168; // [rsp+120h] [rbp-148h]
  _BYTE v169[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v170; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v171)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  __int64 v172; // [rsp+150h] [rbp-118h] BYREF
  __m128i v173; // [rsp+158h] [rbp-110h] BYREF
  __m128i v174; // [rsp+168h] [rbp-100h] BYREF
  __int64 v175; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v176; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v177; // [rsp+198h] [rbp-D0h] BYREF
  __int64 v178; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v179; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v180; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v181[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *m128i_i8; // [rsp+1F0h] [rbp-78h]
  __int64 v183; // [rsp+1F8h] [rbp-70h]
  __m128i v184; // [rsp+200h] [rbp-68h] BYREF
  __m128i v185; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v186; // [rsp+228h] [rbp-40h]

  v186 = __readfsqword(0x28u);
  sub_2C6CC0((__int64)v165, a2);
  v166 = a1;
  sub_2C6CC0((__int64)v167, a2);
  v168 = a1;
  sub_2C6CC0((__int64)v169, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2C6CC0((__int64)&v172, v165);
    v6 = *v5;
    v7 = 56 * v5[1];
    v139 = (void *)(*v5 + v7);
    sub_2C6CC0((__int64)&v175, (const __m128i *)&v172);
    sub_2C6CC0((__int64)v181, (const __m128i *)&v175);
    sub_2C6CC0((__int64)&v178, (const __m128i *)v181);
    sub_606D0((__int64)v181);
    if ( v139 != (void *)v6 )
    {
      sub_2C6CC0((__int64)v181, (const __m128i *)&v178);
      v8 = -2;
      v9 = 0x6DB6DB6DB6DB6DB7LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2E3E50(v6, (__int64)v139, v8, (const __m128i *)v181);
      sub_606D0((__int64)v181);
      sub_2C6CC0((__int64)v181, (const __m128i *)&v178);
      sub_2D6920(v6, (__int64)v139, (const __m128i *)v181);
      sub_606D0((__int64)v181);
    }
    ++v4;
    v5 += 3;
    sub_606D0((__int64)&v178);
    sub_606D0((__int64)&v175);
    sub_606D0((__int64)&v172);
  }
  v161 = nullptr;
  m128i_i8 = nullptr;
  v183 = (__int64)v166;
  v160 = 0;
  *(_OWORD *)v181 = 0;
  sub_2C6CC0((__int64)&v184, v167);
  v172 = v183;
  sub_2C6CC0((__int64)&v173, &v184);
  v11 = v181[1];
  v12 = v181[0];
  v178 = v172;
  sub_2C6CC0((__int64)&v179, &v173);
  v175 = v178;
  sub_2C6CC0((__int64)&v176, &v179);
  v13 = v11 - v12;
  sub_606D0((__int64)&v179);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v180 = 0u;
      v179 = 0;
      v178 = v175;
      if ( v177.m128i_i64[0] )
      {
        v140 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v177.m128i_i64[0])(&v179, &v176, 2);
        v17 = (unsigned __int64)v140;
        v180 = _mm_loadu_si128(&v177);
      }
      sub_2D30E0((__int64)v12, i, v14, v16, v17, &v178);
      if ( v180.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v179, &v179, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_606D0((__int64)&v176);
  sub_606D0((__int64)&v173);
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
      v20 = (const __m128i *)v181[1];
      if ( v181[1] == m128i_i8 )
      {
        v120 = ((char *)v181[1] - (char *)v181[0]) >> 4;
        if ( v120 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v121 = 1;
        if ( v120 )
          v121 = ((char *)v181[1] - (char *)v181[0]) >> 4;
        v57 = __CFADD__(v121, v120);
        v122 = v121 + v120;
        if ( v57 )
        {
          v123 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v122 > 0x7FFFFFFFFFFFFFFLL )
            v122 = 0x7FFFFFFFFFFFFFFLL;
          v123 = 16 * v122;
        }
        v153 = (char *)v181[1] - (char *)v181[0];
        v144 = (const __m128i *)v181[0];
        v124 = operator new(v123);
        v125 = (__m128i *)v144;
        v126 = (char *)v124;
        v127 = (unsigned __int64 *)(v124 + v153);
        *v127 = v18;
        v127[1] = 0;
        if ( v20 != v144 )
        {
          v128 = v124;
          v129 = v144;
          v124 += (char *)v20 - (char *)v144;
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
        if ( v144 )
        {
          v145 = v126;
          operator delete(v125, m128i_i8 - (char *)v125);
          v126 = v145;
        }
        v181[0] = v126;
        v181[1] = v131;
        m128i_i8 = &v126[v123];
      }
      else
      {
        *(_QWORD *)v181[1] = v18;
        v20->m128i_i64[1] = 0;
        v181[1] = (char *)v181[1] + 16;
      }
      v172 = v183;
      sub_2C6CC0((__int64)&v173, &v184);
      v21 = v181[1];
      v22 = v181[0];
      v178 = v172;
      sub_2C6CC0((__int64)&v179, &v173);
      v175 = v178;
      sub_2C6CC0((__int64)&v176, &v179);
      sub_606D0((__int64)&v179);
      sub_2D2F80((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v175);
      ++v18;
      sub_606D0((__int64)&v176);
      sub_606D0((__int64)&v173);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v157 = 0;
    if ( v19 )
    {
      v132 = qvector_reserve();
      qfree();
      dest = (const __m128i *)v132;
    }
  }
  else
  {
    dest = nullptr;
    v157 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_37B760(1961);
    goto LABEL_176;
  }
  v23 = (__int64 *)v181[0];
  if ( v181[0] == v181[1] )
    goto LABEL_57;
  do
  {
    *(_QWORD *)&v157 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 8 * v24;
    v141 = 3 * *v23;
    v27 = 56 * v24;
    do
    {
      if ( a3 )
        goto LABEL_34;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 8 * (v26 - v24) + 48);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_37B760(2170);
        goto LABEL_176;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_34:
        v30 = v157;
        if ( *((_QWORD *)&v157 + 1) < (unsigned __int64)(v157 + 1) )
        {
          v31 = qvector_reserve();
          v53 = dest;
          v54 = v157 - 1;
          if ( (__int64)v157 - 1 >= 0 )
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
          v30 = v157;
          dest = (const __m128i *)v31;
        }
        else
        {
          v31 = (__int64)dest;
        }
        v32 = (_QWORD *)(v31 + 16 * v30);
        *v32 = v25;
        v32[1] = v24;
        *(_QWORD *)&v157 = v157 + 1;
      }
      v33 = (const __m128i *)v181[0];
      v34 = *(_QWORD *)v181[0];
      v35 = *((_QWORD *)v181[0] + 1);
      v172 = v183;
      v174 = 0u;
      v173 = 0;
      if ( !v185.m128i_i64[0] )
      {
        v36 = (__m128i *)v181[1];
        if ( (char *)v181[1] - (char *)v181[0] <= 16 )
          goto LABEL_41;
        v49 = v183;
        goto LABEL_64;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(&v173, &v184, 2);
      v36 = (__m128i *)v181[1];
      v33 = (const __m128i *)v181[0];
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0];
      v174 = _mm_load_si128(&v185);
      if ( (char *)v181[1] - (char *)v181[0] > 16 )
      {
        v49 = v172;
        v180 = 0u;
        v178 = v172;
        v179 = 0;
        if ( v185.m128i_i64[0] )
        {
          v148 = (__m128i *)v181[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(&v179, &v173, 2);
          v58 = _mm_loadu_si128(&v174);
          v177 = 0u;
          v36 = v148;
          v180 = v58;
          v175 = v178;
          v176 = 0;
          if ( v174.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v174.m128i_i64[0])(&v176, &v179, 2);
            v59 = _mm_loadu_si128(&v180);
            v36 = v148;
            v177 = v59;
            if ( v59.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v59.m128i_i64[0])(&v179, &v179, 3);
              v36 = v148;
            }
          }
          goto LABEL_65;
        }
LABEL_64:
        v175 = v49;
        v177 = 0u;
        v176 = 0;
LABEL_65:
        v50 = v36[-1].m128i_u64[0];
        v51 = v36 - 1;
        v52 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v180 = 0u;
        v178 = v175;
        v179 = 0;
        if ( v177.m128i_i64[0] )
        {
          v154 = v52;
          v151 = v50;
          v147 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v177.m128i_i64[0])(&v179, &v176, 2);
          v52 = v154;
          v50 = v151;
          v51 = v147;
          v180 = _mm_loadu_si128(&v177);
        }
        sub_2D30E0((__int64)v33, 0, v51 - v33, v50, v52, &v178);
        if ( v180.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v180.m128i_i64[0])(&v179, &v179, 3);
        if ( v177.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v177.m128i_i64[0])(&v176, &v176, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v174.m128i_i64[0];
      }
      if ( v37 )
        v37(&v173, &v173, 3);
LABEL_41:
      v38 = (__m128i *)v181[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v181[1] - 16);
      v181[1] = (char *)v181[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v181[0];
        if ( v181[0] == v40 )
          break;
        goto LABEL_29;
      }
      if ( v40 == (const __m128i *)m128i_i8 )
      {
        v60 = ((char *)v40 - (char *)v181[0]) >> 4;
        if ( v60 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v61 = 1;
        if ( v60 )
          v61 = ((char *)v40 - (char *)v181[0]) >> 4;
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
        v155 = v40;
        v152 = (char *)v40 - (char *)v181[0];
        v149 = (const __m128i *)v181[0];
        v64 = (__m128i *)operator new(v63 * 16);
        v65 = (__m128i *)v149;
        *(__m128i *)((char *)v64 + v152) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v155 == v149 )
        {
          v69 = (char *)v64;
        }
        else
        {
          v66 = v64;
          v67 = v149;
          do
          {
            v68 = _mm_loadu_si128(v67++);
            ++v66;
            v66[-1] = v68;
          }
          while ( v155 != v67 );
          v69 = &v64->m128i_i8[(char *)v155 - (char *)v149];
        }
        v70 = v69 + 16;
        if ( v149 )
        {
          v150 = (char *)v64;
          operator delete(v65, m128i_i8 - (char *)v65);
          v64 = (__m128i *)v150;
        }
        v181[0] = v64;
        v181[1] = v70;
        m128i_i8 = v64[v63].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v181[1] = (char *)v181[1] + 16;
      }
      v41 = v183;
      v174 = 0u;
      v172 = v183;
      v173 = 0;
      if ( !v185.m128i_i64[0] )
      {
        v43 = v181[1];
        v44 = v181[0];
LABEL_81:
        v175 = v41;
        v177 = 0u;
        v176 = 0;
        goto LABEL_49;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(&v173, &v184, 2);
      v41 = v172;
      v42 = _mm_load_si128(&v185);
      v180 = 0u;
      v43 = v181[1];
      v174 = v42;
      v44 = v181[0];
      v178 = v172;
      v179 = 0;
      if ( !v185.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v185.m128i_i64[0])(&v179, &v173, 2);
      v45 = _mm_loadu_si128(&v174);
      v177 = 0u;
      v180 = v45;
      v175 = v178;
      v176 = 0;
      if ( v174.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v174.m128i_i64[0])(&v176, &v179, 2);
        v46 = _mm_loadu_si128(&v180);
        v177 = v46;
        if ( v46.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v179, &v179, 3);
      }
LABEL_49:
      sub_2D2F80((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v175);
      if ( v177.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v177.m128i_i64[0])(&v176, &v176, 3);
      if ( v174.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v174.m128i_i64[0])(&v173, &v173, 3);
      v28 = (__int64 *)v181[0];
      if ( v181[0] == v181[1] )
        break;
LABEL_29:
      v24 = v28[1];
      v25 = *v28;
      v26 = 8 * v24;
      if ( !v170 )
        std::__throw_bad_function_call();
    }
    while ( !v171(v169, v168[3 * *v28 + 2] + 56 * v24, v27 + v168[v141 + 2]) );
    if ( a3 )
    {
      v99 = (void *)a1[12];
      LODWORD(v160) = 0;
      v143 = v99;
      sub_2C6910(a1 + 11, (int *)&v160);
      v100 = (__int64 *)dest;
      v101 = &dest[v157];
      if ( dest == v101 )
        goto LABEL_56;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v100 + 2] + 56 * v100[1] + 48) = v143;
        v102 = (_DWORD *)(4LL * (_QWORD)v143 + a1[11]);
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
      v105 = v143;
      v106 = a1[3 * *v100 + 3];
      if ( v106 )
      {
        v137 = 2 * *v100;
        v133 = *v100;
        v104 = qalloc_or_throw();
        v114 = 0;
        v105 = v143;
        v115 = v104 + 16;
        v138 = &a1[v137 + v133];
        do
        {
          v135 = v105;
          v134 = v115;
          v116 = v138[2];
          *(_QWORD *)(v115 - 16) = off_4ADB70;
          v117 = -16 - v104 + v115 + v116;
          v118 = *(_DWORD *)(v117 + 8);
          *(_QWORD *)v115 = 0;
          *(_OWORD *)(v115 + 8) = 0;
          *(_DWORD *)(v115 - 8) = v118;
          sub_2A6FA0((_QWORD *)v115, v117 + 16);
          ++v114;
          v105 = v135;
          *(_QWORD *)(v134 + 24) = *(_QWORD *)(v117 + 40);
          v119 = *(_QWORD *)(v117 + 48);
          v115 = v134 + 56;
          *(_QWORD *)(v134 - 16) = off_4AF438;
          *(_QWORD *)(v134 + 32) = v119;
        }
        while ( v106 != v114 );
      }
      v107 = dest;
      v108 = &dest[v157];
      if ( v108 != dest )
      {
        while ( 1 )
        {
          if ( v107->m128i_i64[0] == *v100 )
          {
            v109 = v107->m128i_i64[1];
            v110 = v100[1];
            if ( v109 != v110 && *(void **)(v104 + 56 * v109 + 48) == v105 )
              break;
          }
          if ( v108 == ++v107 )
            goto LABEL_151;
        }
        sub_7B2C0((__int64)&v160, (const char *)&unk_3EF793);
        v111 = s1;
        if ( *((_QWORD *)&v160 + 1) )
          v111 = (const char *)v160;
        v112 = v107->m128i_i64[1];
        sub_7B2C0((__int64)&v158, (const char *)&unk_3EF793);
        v113 = s1;
        if ( v159 )
          v113 = v158;
        sub_66B20((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v100, v113, v112, v111, v110);
        if ( v158 )
        {
          v159 = 0;
          qfree();
        }
        if ( (_QWORD)v160 )
        {
          *((_QWORD *)&v160 + 1) = 0;
          qfree();
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_37B760(2171);
LABEL_176:
      BUG();
    }
    v47 = v157;
    if ( (unsigned __int64)v157 <= 1 )
      goto LABEL_56;
    v71 = (__int64 *)dest;
    DWORD2(v160) = 0;
    v162 = (__int128 *)((char *)&v160 + 8);
    v161 = nullptr;
    v163 = (char *)&v160 + 8;
    v164 = 0;
    v142 = &dest[v157];
    if ( v142 != dest )
    {
      v72 = dest;
      do
      {
        v158 = *(const char **)(a1[3 * v72->m128i_i64[0] + 2] + 56 * v72->m128i_i64[1] + 48);
        v73 = sub_2C69C0(&v160, (unsigned __int64 *)&v158);
        v74 = v72->m128i_i64[0];
        ++v72;
        *(_DWORD *)v73 |= 1 << v74;
      }
      while ( v142 != v72 );
      if ( v162 != (__int128 *)((char *)&v160 + 8) )
      {
        v75 = (__int64)v162;
        do
        {
          v76 = *(_DWORD *)(v75 + 40);
          v77 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v75 + 32));
          v75 = std::_Rb_tree_increment();
          if ( v77 != v76 )
          {
            v78 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v78, 0x30u);
            --v164;
          }
        }
        while ( (__int128 *)v75 != (__int128 *)((char *)&v160 + 8) );
      }
      v47 = v157;
      v71 = (__int64 *)dest;
      v79 = (__int64 *)dest;
      if ( &dest[(_QWORD)v157] != dest )
      {
        do
        {
          while ( 1 )
          {
            v81 = v79 + 2;
            if ( (_QWORD *)((char *)&v160 + 8) == sub_2A6E80(
                                                    (__int64)&v160,
                                                    *(_QWORD *)(a1[3 * *v79 + 2] + 56 * v79[1] + 48)) )
              break;
            v47 = v157;
            v79 += 2;
            if ( v81 == &v71[2 * (_QWORD)v157] )
              goto LABEL_111;
          }
          v82 = v80 - (_QWORD)v79;
          if ( (v82 >> 4) - 2 >= 0 )
          {
            memmove(v79, v81, v82 - 16);
            v71 = (__int64 *)dest;
          }
          *(_QWORD *)&v157 = v157 - 1;
          v47 = v157;
        }
        while ( v79 != &v71[2 * (_QWORD)v157] );
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
      v47 = v157 - 1;
      *(_QWORD *)&v157 = v157 - 1;
      v88 = *(_QWORD *)(a1[3 * v84 + 2] + 56 * v85 + 48);
      if ( v87 )
      {
        v89 = 0;
        v90 = *(_DWORD *)(a1[11] + 4 * v88);
        do
        {
          v91 = -1;
          if ( (v90 & (1 << v89)) != 0 )
            v91 = v88;
          *(&v178 + v89++) = v91;
        }
        while ( v89 != v87 );
      }
      if ( 16 * v47 )
      {
        do
        {
          v94 = *v86;
          v95 = a1[3 * *v86 + 2] + 56 * v86[1];
          v96 = *(_QWORD *)(v95 + 48);
          if ( *(&v178 + *v86) == -1 )
          {
            v97 = a1[11];
            *(&v178 + v94) = v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 48) = v88;
            *(_DWORD *)(4 * v88 + a1[11]) |= 1 << *v86;
            v93 = v86 + 2;
            v71 = (__int64 *)dest;
            v47 = v157;
            if ( v88 == *(_QWORD *)(v95 + 48) )
            {
LABEL_128:
              if ( (((char *)&v71[2 * v47] - (char *)v86) >> 4) - 2 >= 0 )
              {
                v98 = (__int64 *)memmove(v86, v93, (char *)&v71[2 * v47] - (char *)v86 - 16);
                v71 = (__int64 *)dest;
                v86 = v98;
                v47 = v157;
              }
              *(_QWORD *)&v157 = --v47;
              continue;
            }
          }
          else
          {
            v92 = v88 == v96;
            v93 = v86 + 2;
            v47 = v157;
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
    sub_2A6EE0((void **)v161);
LABEL_56:
    v23 = (__int64 *)v181[0];
  }
  while ( v181[1] != v181[0] );
LABEL_57:
  if ( dest )
    qfree();
  sub_606D0((__int64)&v184);
  if ( v181[0] )
    operator delete(v181[0], m128i_i8 - (char *)v181[0]);
  sub_606D0((__int64)v169);
  sub_606D0((__int64)v167);
  sub_606D0((__int64)v165);
  return v186 - __readfsqword(0x28u);
}

