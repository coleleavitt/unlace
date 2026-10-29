unsigned __int64 __fastcall sub_2EB780(_QWORD *a1, const __m128i *a2, char a3)
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
  __m128i *v31; // r15
  char *m128i_i8; // rax
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
  __int64 v45; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r10
  __m128i *v49; // r9
  unsigned __int64 v50; // r8
  void *v51; // rcx
  const __m128i *v52; // rdi
  __int64 v53; // rax
  __m128i *v54; // rdx
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
  char *v71; // r14
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
  __int64 v87; // rdx
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
  __int64 *v101; // rdi
  __int64 v102; // rsi
  _DWORD *v103; // rdx
  int v104; // eax
  __int64 v105; // rbp
  void *v106; // r8
  __int64 v107; // r12
  char *v108; // rbx
  char *v109; // rcx
  __int64 v110; // rax
  __int64 v111; // r13
  const char *v112; // r15
  __int64 v113; // rbx
  const char *v114; // rax
  __int64 v115; // r13
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rbx
  char *v119; // rbx
  int v120; // esi
  __int64 v121; // rcx
  signed __int64 v122; // rax
  signed __int64 v123; // rcx
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // r13
  __int64 v126; // rax
  __m128i *v127; // rdx
  char *v128; // rcx
  unsigned __int64 *v129; // rsi
  __int64 v130; // rsi
  const __m128i *v131; // rdi
  __m128i v132; // xmm0
  void *v133; // r14
  __m128i *v134; // r13
  __int64 v135; // r14
  const __m128i *v136; // rdi
  __int64 v137; // rax
  __m128i *v138; // rdx
  __m128i v139; // xmm0
  __int64 v140; // [rsp+0h] [rbp-268h]
  __int64 v141; // [rsp+0h] [rbp-268h]
  void *v142; // [rsp+8h] [rbp-260h]
  __int64 v144; // [rsp+10h] [rbp-258h]
  _QWORD *v145; // [rsp+10h] [rbp-258h]
  void *v146; // [rsp+18h] [rbp-250h]
  void *v147; // [rsp+18h] [rbp-250h]
  __int64 v148; // [rsp+18h] [rbp-250h]
  char *v149; // [rsp+18h] [rbp-250h]
  void *v150; // [rsp+18h] [rbp-250h]
  char *v151; // [rsp+18h] [rbp-250h]
  const __m128i *v152; // [rsp+18h] [rbp-250h]
  char *v153; // [rsp+18h] [rbp-250h]
  __m128i *v155; // [rsp+30h] [rbp-238h]
  void *v156; // [rsp+30h] [rbp-238h]
  void *v157; // [rsp+30h] [rbp-238h]
  __m128i *v158; // [rsp+30h] [rbp-238h]
  const __m128i *v159; // [rsp+30h] [rbp-238h]
  char *v160; // [rsp+30h] [rbp-238h]
  unsigned __int64 v161; // [rsp+38h] [rbp-230h]
  signed __int64 v162; // [rsp+38h] [rbp-230h]
  signed __int64 v163; // [rsp+38h] [rbp-230h]
  unsigned __int64 v164; // [rsp+40h] [rbp-228h]
  const __m128i *v165; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v167; // [rsp+68h] [rbp-200h]
  __int64 v168; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v169; // [rsp+88h] [rbp-1E0h]
  __int128 v170; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v171; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v172; // [rsp+B8h] [rbp-1B0h]
  char *v173; // [rsp+C0h] [rbp-1A8h]
  __int64 v174; // [rsp+C8h] [rbp-1A0h]
  __m128i v175[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v176; // [rsp+F0h] [rbp-178h]
  __m128i v177[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v178; // [rsp+120h] [rbp-148h]
  _BYTE v179[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v180; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v181)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  __int64 v182; // [rsp+150h] [rbp-118h] BYREF
  __m128i v183; // [rsp+158h] [rbp-110h] BYREF
  __m128i v184; // [rsp+168h] [rbp-100h] BYREF
  __int64 v185; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v186; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v187; // [rsp+198h] [rbp-D0h] BYREF
  __int64 v188; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v189; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v190; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v191[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v192; // [rsp+1F0h] [rbp-78h]
  _QWORD *v193; // [rsp+1F8h] [rbp-70h]
  __m128i v194; // [rsp+200h] [rbp-68h] BYREF
  __m128i v195; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v196; // [rsp+228h] [rbp-40h]

  v196 = __readfsqword(0x28u);
  sub_2CE040((__int64)v175, a2);
  v176 = a1;
  sub_2CE040((__int64)v177, a2);
  v178 = a1;
  sub_2CE040((__int64)v179, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CE040((__int64)&v182, v175);
    v6 = *v5;
    v7 = 56 * v5[1];
    v146 = (void *)(*v5 + v7);
    sub_2CE040((__int64)&v185, (const __m128i *)&v182);
    sub_2CE040((__int64)v191, (const __m128i *)&v185);
    sub_2CE040((__int64)&v188, (const __m128i *)v191);
    sub_66C50((__int64)v191);
    if ( v146 != (void *)v6 )
    {
      sub_2CE040((__int64)v191, (const __m128i *)&v188);
      v8 = -2;
      v9 = 0x6DB6DB6DB6DB6DB7LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2EB1D0(v6, (__int64)v146, v8, (const __m128i *)v191);
      sub_66C50((__int64)v191);
      sub_2CE040((__int64)v191, (const __m128i *)&v188);
      sub_2DDCA0(v6, (__int64)v146, (const __m128i *)v191);
      sub_66C50((__int64)v191);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v188);
    sub_66C50((__int64)&v185);
    sub_66C50((__int64)&v182);
  }
  v171 = nullptr;
  v192 = nullptr;
  v193 = v176;
  v170 = 0;
  *(_OWORD *)v191 = 0;
  sub_2CE040((__int64)&v194, v177);
  v182 = (__int64)v193;
  sub_2CE040((__int64)&v183, &v194);
  v11 = v191[1];
  v12 = v191[0];
  v188 = v182;
  sub_2CE040((__int64)&v189, &v183);
  v185 = v188;
  sub_2CE040((__int64)&v186, &v189);
  v13 = v11 - v12;
  sub_66C50((__int64)&v189);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v190 = 0u;
      v189 = 0;
      v188 = v185;
      if ( v187.m128i_i64[0] )
      {
        v147 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v187.m128i_i64[0])(&v189, &v186, 2);
        v17 = (unsigned __int64)v147;
        v190 = _mm_loadu_si128(&v187);
      }
      sub_2DA460((__int64)v12, i, v14, v16, v17, &v188);
      if ( v190.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v186);
  sub_66C50((__int64)&v183);
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
      v20 = (const __m128i *)v191[1];
      if ( v191[1] == v192 )
      {
        v122 = ((char *)v191[1] - (char *)v191[0]) >> 4;
        if ( v122 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v123 = 1;
        if ( v122 )
          v123 = ((char *)v191[1] - (char *)v191[0]) >> 4;
        v56 = __CFADD__(v123, v122);
        v124 = v123 + v122;
        if ( v56 )
        {
          v125 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v124 > 0x7FFFFFFFFFFFFFFLL )
            v124 = 0x7FFFFFFFFFFFFFFLL;
          v125 = 16 * v124;
        }
        v163 = (char *)v191[1] - (char *)v191[0];
        v152 = (const __m128i *)v191[0];
        v126 = operator new(v125);
        v127 = (__m128i *)v152;
        v128 = (char *)v126;
        v129 = (unsigned __int64 *)(v126 + v163);
        *v129 = v18;
        v129[1] = 0;
        if ( v20 != v152 )
        {
          v130 = v126;
          v131 = v152;
          v126 += (char *)v20 - (char *)v152;
          do
          {
            v132 = _mm_loadu_si128(v131);
            v130 += 16;
            ++v131;
            *(__m128i *)(v130 - 16) = v132;
          }
          while ( v126 != v130 );
        }
        v133 = (void *)(v126 + 16);
        if ( v152 )
        {
          v153 = v128;
          operator delete(v127, v192 - (char *)v127);
          v128 = v153;
        }
        v191[0] = v128;
        v191[1] = v133;
        v192 = &v128[v125];
      }
      else
      {
        *(_QWORD *)v191[1] = v18;
        v20->m128i_i64[1] = 0;
        v191[1] = (char *)v191[1] + 16;
      }
      v182 = (__int64)v193;
      sub_2CE040((__int64)&v183, &v194);
      v21 = v191[1];
      v22 = v191[0];
      v188 = v182;
      sub_2CE040((__int64)&v189, &v183);
      v185 = v188;
      sub_2CE040((__int64)&v186, &v189);
      sub_66C50((__int64)&v189);
      sub_2DA300((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v185);
      ++v18;
      sub_66C50((__int64)&v186);
      sub_66C50((__int64)&v183);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v139.m128i_i64[0] = 0;
    v167 = 0;
    if ( v19 )
    {
      v134 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
      v135 = *((_QWORD *)&v167 + 1);
      *((_QWORD *)&v167 + 1) = 0;
      v136 = (const __m128i *)dest;
      v137 = v167 - 1;
      if ( (__int64)v167 - 1 >= 0 )
      {
        v138 = v134;
        do
        {
          v139 = _mm_loadu_si128(v136);
          ++v138;
          ++v136;
          v138[-1] = v139;
          v56 = v137-- == 0;
        }
        while ( !v56 );
        v136 = (const __m128i *)dest;
      }
      qfree((__int64)v136);
      dest = v134;
      *((_QWORD *)&v167 + 1) = v135;
    }
  }
  else
  {
    dest = nullptr;
    v139.m128i_i64[0] = 0;
    v167 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(0x7A9u, *(double *)v139.m128i_i64);
    goto LABEL_181;
  }
  v23 = (__int64 *)v191[0];
  if ( v191[0] == v191[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v167 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 8 * v24;
    v148 = 3 * *v23;
    v27 = 56 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 8 * (v26 - v24) + 48);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0x87Au, *(double *)v139.m128i_i64);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v167;
        if ( *((_QWORD *)&v167 + 1) < (unsigned __int64)(v167 + 1) )
        {
          v156 = *((void **)&v167 + 1);
          v31 = (__m128i *)qvector_reserve((__int64)&dest, 0, v167 + 1, 16);
          v51 = *((void **)&v167 + 1);
          v52 = (const __m128i *)dest;
          *((_QWORD *)&v167 + 1) = v156;
          v53 = v167 - 1;
          if ( (__int64)v167 - 1 >= 0 )
          {
            v54 = v31;
            do
            {
              v55 = _mm_loadu_si128(v52);
              ++v54;
              ++v52;
              v54[-1] = v55;
              v56 = v53-- == 0;
            }
            while ( !v56 );
            v52 = (const __m128i *)dest;
          }
          v157 = v51;
          qfree((__int64)v52);
          v30 = v167;
          dest = v31;
          *((_QWORD *)&v167 + 1) = v157;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        m128i_i8 = v31[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v167 = v167 + 1;
      }
      v33 = (const __m128i *)v191[0];
      v139.m128i_i64[0] = 0;
      v34 = *(_QWORD *)v191[0];
      v35 = *((_QWORD *)v191[0] + 1);
      v182 = (__int64)v193;
      v184 = 0u;
      v183 = 0;
      if ( !v195.m128i_i64[0] )
      {
        v36 = (__m128i *)v191[1];
        if ( (char *)v191[1] - (char *)v191[0] <= 16 )
          goto LABEL_40;
        v47 = (__int64)v193;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0])(&v183, &v194, 2);
      v36 = (__m128i *)v191[1];
      v33 = (const __m128i *)v191[0];
      v139 = _mm_load_si128(&v195);
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0];
      v184 = v139;
      if ( (char *)v191[1] - (char *)v191[0] > 16 )
      {
        v47 = v182;
        v190 = 0u;
        v188 = v182;
        v189 = 0;
        if ( v195.m128i_i64[0] )
        {
          v158 = (__m128i *)v191[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0])(&v189, &v183, 2);
          v57 = _mm_loadu_si128(&v184);
          v187 = 0u;
          v36 = v158;
          v190 = v57;
          v185 = v188;
          v186 = 0;
          if ( v184.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v184.m128i_i64[0])(&v186, &v189, 2);
            v58 = _mm_loadu_si128(&v190);
            v36 = v158;
            v187 = v58;
            if ( v58.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128i_i64[0])(&v189, &v189, 3);
              v36 = v158;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v185 = v47;
        v187 = 0u;
        v186 = 0;
LABEL_64:
        v48 = v36[-1].m128i_u64[0];
        v49 = v36 - 1;
        v50 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v139.m128i_i64[0] = 0;
        v190 = 0u;
        v188 = v185;
        v189 = 0;
        if ( v187.m128i_i64[0] )
        {
          v164 = v50;
          v161 = v48;
          v155 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v187.m128i_i64[0])(&v189, &v186, 2);
          v139 = _mm_loadu_si128(&v187);
          v50 = v164;
          v48 = v161;
          v49 = v155;
          v190 = v139;
        }
        sub_2DA460((__int64)v33, 0, v49 - v33, v48, v50, &v188);
        if ( v190.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v190.m128i_i64[0])(&v189, &v189, 3);
        if ( v187.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v184.m128i_i64[0];
      }
      if ( v37 )
        v37(&v183, &v183, 3);
LABEL_40:
      v38 = (__m128i *)v191[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v191[1] - 16);
      v191[1] = (char *)v191[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v191[0];
        if ( v191[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)v192 )
      {
        v59 = ((char *)v40 - (char *)v191[0]) >> 4;
        if ( v59 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v60 = 1;
        if ( v59 )
          v60 = ((char *)v40 - (char *)v191[0]) >> 4;
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
        v165 = v40;
        v162 = (char *)v40 - (char *)v191[0];
        v159 = (const __m128i *)v191[0];
        v63 = (__m128i *)operator new(v62 * 16);
        v64 = (__m128i *)v159;
        *(__m128i *)((char *)v63 + v162) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v165 == v159 )
        {
          v68 = (char *)v63;
        }
        else
        {
          v65 = v63;
          v66 = v159;
          do
          {
            v67 = _mm_loadu_si128(v66++);
            ++v65;
            v65[-1] = v67;
          }
          while ( v165 != v66 );
          v68 = &v63->m128i_i8[(char *)v165 - (char *)v159];
        }
        v69 = v68 + 16;
        if ( v159 )
        {
          v160 = (char *)v63;
          operator delete(v64, v192 - (char *)v64);
          v63 = (__m128i *)v160;
        }
        v191[0] = v63;
        v191[1] = v69;
        v192 = v63[v62].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v191[1] = (char *)v191[1] + 16;
      }
      v41 = (__int64)v193;
      v184 = 0u;
      v182 = (__int64)v193;
      v183 = 0;
      if ( !v195.m128i_i64[0] )
      {
        v43 = v191[1];
        v44 = v191[0];
LABEL_81:
        v139.m128i_i64[0] = 0;
        v185 = v41;
        v187 = 0u;
        v186 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0])(&v183, &v194, 2);
      v41 = v182;
      v42 = _mm_load_si128(&v195);
      v190 = 0u;
      v43 = v191[1];
      v184 = v42;
      v44 = v191[0];
      v188 = v182;
      v189 = 0;
      if ( !v195.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v195.m128i_i64[0])(&v189, &v183, 2);
      v139 = _mm_loadu_si128(&v184);
      v187 = 0u;
      v190 = v139;
      v139.m128i_i64[0] = 0;
      v185 = v188;
      v186 = 0;
      if ( v184.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v184.m128i_i64[0])(&v186, &v189, 2);
        v139 = _mm_loadu_si128(&v190);
        v187 = v139;
        if ( v139.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v139.m128i_i64[0])(&v189, &v189, 3);
      }
LABEL_48:
      sub_2DA300((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v185);
      if ( v187.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
      if ( v184.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v184.m128i_i64[0])(&v183, &v183, 3);
      v28 = (__int64 *)v191[0];
      if ( v191[0] == v191[1] )
        break;
LABEL_28:
      v24 = v28[1];
      v25 = *v28;
      v26 = 8 * v24;
      if ( !v180 )
        std::__throw_bad_function_call();
    }
    while ( !v181(v179, v178[3 * *v28 + 2] + 56 * v24, v27 + v178[v148 + 2]) );
    if ( a3 )
    {
      v99 = (void *)a1[12];
      LODWORD(v170) = 0;
      v150 = v99;
      sub_2CDC90(a1 + 11, (int *)&v170);
      v100 = (__int64 *)dest;
      v101 = (__int64 *)((char *)dest + 16 * v167);
      v102 = 4LL * (_QWORD)v150;
      if ( dest == v101 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v100 + 2] + 56 * v100[1] + 48) = v150;
        v103 = (_DWORD *)(v102 + a1[11]);
        v104 = 1 << *v100;
        if ( (*v103 & v104) != 0 )
          break;
        v100 += 2;
        *v103 |= v104;
        if ( v101 == v100 )
          goto LABEL_55;
      }
      switch_dbctx();
      v105 = 0;
      v106 = v150;
      v107 = a1[3 * *v100 + 3];
      if ( v107 )
      {
        v144 = 2 * *v100;
        v140 = *v100;
        v105 = qalloc_or_throw(56 * v107, v102, *v100, v144);
        v115 = 0;
        v106 = v150;
        v116 = v105 + 16;
        v117 = v144 + v140;
        v145 = &a1[v144 + v140];
        v151 = (char *)(-16 - v105);
        do
        {
          v142 = v106;
          v141 = v116;
          v118 = v145[2];
          *(_QWORD *)(v116 - 16) = off_4E1370;
          v119 = &v151[v116 + v118];
          v120 = *((_DWORD *)v119 + 2);
          *(_QWORD *)v116 = 0;
          *(_OWORD *)(v116 + 8) = 0;
          *(_DWORD *)(v116 - 8) = v120;
          sub_2AE320((_QWORD *)v116, (__int64)(v119 + 16), v117, (__int64)&v151[v116]);
          ++v115;
          v106 = v142;
          *(_QWORD *)(v141 + 24) = *((_QWORD *)v119 + 5);
          v121 = *((_QWORD *)v119 + 6);
          v116 = v141 + 56;
          *(_QWORD *)(v141 - 16) = off_4E2C38;
          *(_QWORD *)(v141 + 32) = v121;
        }
        while ( v107 != v115 );
      }
      v108 = (char *)dest;
      v109 = (char *)dest + 16 * v167;
      if ( v109 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v108 == *v100 )
          {
            v110 = *((_QWORD *)v108 + 1);
            v111 = v100[1];
            if ( v110 != v111 && *(void **)(v105 + 56 * v110 + 48) == v106 )
              break;
          }
          v108 += 16;
          if ( v109 == v108 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v170, (const char *)&unk_418793);
        v112 = s1;
        if ( *((_QWORD *)&v170 + 1) )
          v112 = (const char *)v170;
        v113 = *((_QWORD *)v108 + 1);
        sub_81980((__int64)&v168, (const char *)&unk_418793);
        v114 = s1;
        if ( v169 )
          v114 = (const char *)v168;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v100, v114, v113, v112, v111);
        if ( v168 )
        {
          v169 = 0;
          qfree(v168);
        }
        if ( (_QWORD)v170 )
        {
          *((_QWORD *)&v170 + 1) = 0;
          qfree(v170);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(0x87Bu, *(double *)v139.m128i_i64);
LABEL_181:
      BUG();
    }
    v45 = v167;
    if ( (unsigned __int64)v167 <= 1 )
      goto LABEL_55;
    v70 = (__int64 *)dest;
    DWORD2(v170) = 0;
    v172 = (__int128 *)((char *)&v170 + 8);
    v171 = nullptr;
    v173 = (char *)&v170 + 8;
    v174 = 0;
    v149 = (char *)dest + 16 * v167;
    if ( v149 != dest )
    {
      v71 = (char *)dest;
      do
      {
        v168 = *(_QWORD *)(a1[3 * *(_QWORD *)v71 + 2] + 56LL * *((_QWORD *)v71 + 1) + 48);
        v72 = sub_2CDD40(&v170, (unsigned __int64 *)&v168);
        v73 = *(_QWORD *)v71;
        v71 += 16;
        *(_DWORD *)v72 |= 1 << v73;
      }
      while ( v149 != v71 );
      if ( v172 != (__int128 *)((char *)&v170 + 8) )
      {
        v74 = (__int64)v172;
        do
        {
          v75 = *(_DWORD *)(v74 + 40);
          v76 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v74 + 32));
          v74 = std::_Rb_tree_increment();
          if ( v76 != v75 )
          {
            v77 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v77, 0x30u);
            --v174;
          }
        }
        while ( (__int128 *)v74 != (__int128 *)((char *)&v170 + 8) );
      }
      v45 = v167;
      v70 = (__int64 *)dest;
      v78 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v167 != dest )
      {
        do
        {
          while ( 1 )
          {
            v80 = v78 + 2;
            if ( (_QWORD *)((char *)&v170 + 8) == sub_2AE200(
                                                    (__int64)&v170,
                                                    *(_QWORD *)(a1[3 * *v78 + 2] + 56 * v78[1] + 48)) )
              break;
            v45 = v167;
            v78 += 2;
            if ( v80 == &v70[2 * (_QWORD)v167] )
              goto LABEL_111;
          }
          v81 = v79 - (_QWORD)v78;
          if ( (v81 >> 4) - 2 >= 0 )
          {
            memmove(v78, v80, v81 - 16);
            v70 = (__int64 *)dest;
          }
          *(_QWORD *)&v167 = v167 - 1;
          v45 = v167;
        }
        while ( v78 != &v70[2 * (_QWORD)v167] );
      }
      goto LABEL_111;
    }
    while ( 2 )
    {
      v82 = 16 * v45;
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
      v45 = v167 - 1;
      v87 = a1[3 * v83 + 2] + 56 * v84;
      *(_QWORD *)&v167 = v167 - 1;
      v88 = *(_QWORD *)(v87 + 48);
      if ( v86 )
      {
        v89 = 0;
        v90 = *(_DWORD *)(a1[11] + 4 * v88);
        do
        {
          v91 = -1;
          if ( (v90 & (1 << v89)) != 0 )
            v91 = v88;
          *(&v188 + v89++) = v91;
        }
        while ( v89 != v86 );
      }
      if ( 16 * v45 )
      {
        do
        {
          v94 = *v85;
          v95 = a1[3 * *v85 + 2] + 56 * v85[1];
          v96 = *(_QWORD *)(v95 + 48);
          if ( *(&v188 + *v85) == -1 )
          {
            v97 = a1[11];
            *(&v188 + v94) = v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 48) = v88;
            *(_DWORD *)(4 * v88 + a1[11]) |= 1 << *v85;
            v93 = v85 + 2;
            v70 = (__int64 *)dest;
            v45 = v167;
            if ( v88 == *(_QWORD *)(v95 + 48) )
            {
LABEL_128:
              if ( (((char *)&v70[2 * v45] - (char *)v85) >> 4) - 2 >= 0 )
              {
                v98 = (__int64 *)memmove(v85, v93, (char *)&v70[2 * v45] - (char *)v85 - 16);
                v70 = (__int64 *)dest;
                v85 = v98;
                v45 = v167;
              }
              *(_QWORD *)&v167 = --v45;
              continue;
            }
          }
          else
          {
            v92 = v88 == v96;
            v93 = v85 + 2;
            v45 = v167;
            if ( v92 )
              goto LABEL_128;
          }
          v85 = (__int64 *)v93;
        }
        while ( v85 != &v70[2 * v45] );
      }
LABEL_111:
      if ( v45 )
        continue;
      break;
    }
    sub_2AE260((void **)v171);
LABEL_55:
    v23 = (__int64 *)v191[0];
  }
  while ( v191[1] != v191[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v167 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v194);
  if ( v191[0] )
    operator delete(v191[0], v192 - (char *)v191[0]);
  sub_66C50((__int64)v179);
  sub_66C50((__int64)v177);
  sub_66C50((__int64)v175);
  return v196 - __readfsqword(0x28u);
}

