unsigned __int64 __fastcall sub_2FF620(_QWORD *a1, const __m128i *a2, char a3)
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
  _QWORD *v41; // rax
  __m128i v42; // xmm0
  _BYTE *v43; // r14
  _BYTE *v44; // r13
  __int64 v45; // rax
  _QWORD *v47; // rdx
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
  __int64 v99; // r13
  __int64 *v100; // r14
  __int64 *v101; // rsi
  _DWORD *v102; // rdi
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rsi
  __int64 v107; // rbp
  __int64 v108; // r12
  void *v109; // rax
  char *v110; // rbx
  char *v111; // rdx
  __int64 v112; // rax
  __int64 v113; // r12
  const char *v114; // r15
  __int64 v115; // rbx
  const char *v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  _QWORD *v120; // r12
  __int64 v121; // rbx
  __int64 v122; // rsi
  signed __int64 v123; // rax
  signed __int64 v124; // rsi
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // r13
  __int64 v127; // rax
  __m128i *v128; // rcx
  char *v129; // r8
  unsigned __int64 *v130; // rdx
  const __m128i *v131; // rsi
  __int64 v132; // rdx
  __m128i v133; // xmm0
  void *v134; // r14
  __m128i *v135; // r13
  __int64 v136; // r14
  const __m128i *v137; // rdi
  __int64 v138; // rax
  __m128i *v139; // rdx
  __m128i v140; // xmm0
  _QWORD *v141; // [rsp+0h] [rbp-268h]
  __int64 v142; // [rsp+8h] [rbp-260h]
  __int64 v144; // [rsp+10h] [rbp-258h]
  const __m128i *v145; // [rsp+18h] [rbp-250h]
  void *v146; // [rsp+18h] [rbp-250h]
  __int64 v147; // [rsp+18h] [rbp-250h]
  char *v148; // [rsp+18h] [rbp-250h]
  void *v149; // [rsp+18h] [rbp-250h]
  const __m128i *v150; // [rsp+18h] [rbp-250h]
  char *v151; // [rsp+18h] [rbp-250h]
  __m128i *v153; // [rsp+30h] [rbp-238h]
  void *v154; // [rsp+30h] [rbp-238h]
  void *v155; // [rsp+30h] [rbp-238h]
  __m128i *v156; // [rsp+30h] [rbp-238h]
  const __m128i *v157; // [rsp+30h] [rbp-238h]
  char *v158; // [rsp+30h] [rbp-238h]
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
  sub_2D03A0((__int64)v173, a2);
  v174 = a1;
  sub_2D03A0((__int64)v175, a2);
  v176 = a1;
  sub_2D03A0((__int64)v177, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2D03A0((__int64)&v180, v173);
    v6 = *v5;
    v7 = 200 * v5[1];
    v145 = (const __m128i *)(*v5 + v7);
    sub_2D03A0((__int64)&v183, (const __m128i *)&v180);
    sub_2D03A0((__int64)v189, (const __m128i *)&v183);
    sub_2D03A0((__int64)&v186, (const __m128i *)v189);
    sub_66C50((__int64)v189);
    if ( v145 != (const __m128i *)v6 )
    {
      sub_2D03A0((__int64)v189, (const __m128i *)&v186);
      v8 = -2;
      v9 = 0x8F5C28F5C28F5C29LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2FEDD0(v6, v145, v8, (const __m128i *)v189);
      sub_66C50((__int64)v189);
      sub_2D03A0((__int64)v189, (const __m128i *)&v186);
      sub_2E0BA0(v6, (__int64)v145, (const __m128i *)v189);
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
  sub_2D03A0((__int64)&v192, v175);
  v180 = v191;
  sub_2D03A0((__int64)&v181, &v192);
  v11 = v189[1];
  v12 = v189[0];
  v186 = v180;
  sub_2D03A0((__int64)&v187, &v181);
  v183 = v186;
  sub_2D03A0((__int64)&v184, &v187);
  v13 = v11 - v12;
  sub_66C50((__int64)&v187);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v188 = 0u;
      v187 = 0;
      v186 = v183;
      if ( v185.m128i_i64[0] )
      {
        v146 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v185.m128i_i64[0])(&v187, &v184, 2);
        v17 = (unsigned __int64)v146;
        v188 = _mm_loadu_si128(&v185);
      }
      sub_2DBAE0((__int64)v12, i, v14, v16, v17, (__int64)&v186);
      if ( v188.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v184);
  sub_66C50((__int64)&v181);
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
      v20 = (const __m128i *)v189[1];
      if ( v189[1] == v190 )
      {
        v123 = ((char *)v189[1] - (char *)v189[0]) >> 4;
        if ( v123 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v124 = 1;
        if ( v123 )
          v124 = ((char *)v189[1] - (char *)v189[0]) >> 4;
        v56 = __CFADD__(v124, v123);
        v125 = v124 + v123;
        if ( v56 )
        {
          v126 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v125 > 0x7FFFFFFFFFFFFFFLL )
            v125 = 0x7FFFFFFFFFFFFFFLL;
          v126 = 16 * v125;
        }
        v161 = (char *)v189[1] - (char *)v189[0];
        v150 = (const __m128i *)v189[0];
        v127 = operator new(v126);
        v128 = (__m128i *)v150;
        v129 = (char *)v127;
        v130 = (unsigned __int64 *)(v127 + v161);
        *v130 = v18;
        v130[1] = 0;
        if ( v20 != v150 )
        {
          v131 = v150;
          v132 = v127 + (char *)v20 - (char *)v150;
          do
          {
            v133 = _mm_loadu_si128(v131);
            v127 += 16;
            ++v131;
            *(__m128i *)(v127 - 16) = v133;
          }
          while ( v127 != v132 );
        }
        v134 = (void *)(v127 + 16);
        if ( v150 )
        {
          v151 = v129;
          operator delete(v128, v190 - (char *)v128);
          v129 = v151;
        }
        v189[0] = v129;
        v189[1] = v134;
        v190 = &v129[v126];
      }
      else
      {
        *(_QWORD *)v189[1] = v18;
        v20->m128i_i64[1] = 0;
        v189[1] = (char *)v189[1] + 16;
      }
      v180 = v191;
      sub_2D03A0((__int64)&v181, &v192);
      v21 = v189[1];
      v22 = v189[0];
      v186 = v180;
      sub_2D03A0((__int64)&v187, &v181);
      v183 = v186;
      sub_2D03A0((__int64)&v184, &v187);
      sub_66C50((__int64)&v187);
      sub_2DB980((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v183);
      ++v18;
      sub_66C50((__int64)&v184);
      sub_66C50((__int64)&v181);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v140.m128i_i64[0] = 0;
    v165 = 0;
    if ( v19 )
    {
      v135 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
      v136 = *((_QWORD *)&v165 + 1);
      *((_QWORD *)&v165 + 1) = 0;
      v137 = (const __m128i *)dest;
      v138 = v165 - 1;
      if ( (__int64)v165 - 1 >= 0 )
      {
        v139 = v135;
        do
        {
          v140 = _mm_loadu_si128(v137);
          ++v139;
          ++v137;
          v139[-1] = v140;
          v56 = v138-- == 0;
        }
        while ( !v56 );
        v137 = (const __m128i *)dest;
      }
      qfree((__int64)v137);
      dest = v135;
      *((_QWORD *)&v165 + 1) = v136;
    }
  }
  else
  {
    dest = nullptr;
    v140.m128i_i64[0] = 0;
    v165 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(0x7A9u, *(double *)v140.m128i_i64);
    goto LABEL_181;
  }
  v23 = (__int64 *)v189[0];
  if ( v189[0] == v189[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v165 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 4 * v24;
    v147 = 3 * *v23;
    v27 = 200 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 40 * (v24 + v26) + 192);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0x87Au, *(double *)v140.m128i_i64);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v165;
        if ( *((_QWORD *)&v165 + 1) < (unsigned __int64)(v165 + 1) )
        {
          v154 = *((void **)&v165 + 1);
          v31 = (__m128i *)qvector_reserve((__int64)&dest, 0, v165 + 1, 16);
          v51 = *((void **)&v165 + 1);
          v52 = (const __m128i *)dest;
          *((_QWORD *)&v165 + 1) = v154;
          v53 = v165 - 1;
          if ( (__int64)v165 - 1 >= 0 )
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
          v155 = v51;
          qfree((__int64)v52);
          v30 = v165;
          dest = v31;
          *((_QWORD *)&v165 + 1) = v155;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        m128i_i8 = v31[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v165 = v165 + 1;
      }
      v33 = (const __m128i *)v189[0];
      v140.m128i_i64[0] = 0;
      v34 = *(_QWORD *)v189[0];
      v35 = *((_QWORD *)v189[0] + 1);
      v180 = v191;
      v182 = 0u;
      v181 = 0;
      if ( !v193.m128i_i64[0] )
      {
        v36 = (__m128i *)v189[1];
        if ( (char *)v189[1] - (char *)v189[0] <= 16 )
          goto LABEL_40;
        v47 = v191;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v181, &v192, 2);
      v36 = (__m128i *)v189[1];
      v33 = (const __m128i *)v189[0];
      v140 = _mm_load_si128(&v193);
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0];
      v182 = v140;
      if ( (char *)v189[1] - (char *)v189[0] > 16 )
      {
        v47 = v180;
        v188 = 0u;
        v186 = v180;
        v187 = 0;
        if ( v193.m128i_i64[0] )
        {
          v156 = (__m128i *)v189[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v187, &v181, 2);
          v57 = _mm_loadu_si128(&v182);
          v185 = 0u;
          v36 = v156;
          v188 = v57;
          v183 = v186;
          v184 = 0;
          if ( v182.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v182.m128i_i64[0])(&v184, &v187, 2);
            v58 = _mm_loadu_si128(&v188);
            v36 = v156;
            v185 = v58;
            if ( v58.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128i_i64[0])(&v187, &v187, 3);
              v36 = v156;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v183 = v47;
        v185 = 0u;
        v184 = 0;
LABEL_64:
        v48 = v36[-1].m128i_u64[0];
        v49 = v36 - 1;
        v50 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v140.m128i_i64[0] = 0;
        v188 = 0u;
        v186 = v183;
        v187 = 0;
        if ( v185.m128i_i64[0] )
        {
          v162 = v50;
          v159 = v48;
          v153 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v185.m128i_i64[0])(&v187, &v184, 2);
          v140 = _mm_loadu_si128(&v185);
          v50 = v162;
          v48 = v159;
          v49 = v153;
          v188 = v140;
        }
        sub_2DBAE0((__int64)v33, 0, v49 - v33, v48, v50, (__int64)&v186);
        if ( v188.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v188.m128i_i64[0])(&v187, &v187, 3);
        if ( v185.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0];
      }
      if ( v37 )
        v37(&v181, &v181, 3);
LABEL_40:
      v38 = (__m128i *)v189[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v189[1] - 16);
      v189[1] = (char *)v189[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v189[0];
        if ( v189[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)v190 )
      {
        v59 = ((char *)v40 - (char *)v189[0]) >> 4;
        if ( v59 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v60 = 1;
        if ( v59 )
          v60 = ((char *)v40 - (char *)v189[0]) >> 4;
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
        v163 = v40;
        v160 = (char *)v40 - (char *)v189[0];
        v157 = (const __m128i *)v189[0];
        v63 = (__m128i *)operator new(v62 * 16);
        v64 = (__m128i *)v157;
        *(__m128i *)((char *)v63 + v160) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v163 == v157 )
        {
          v68 = (char *)v63;
        }
        else
        {
          v65 = v63;
          v66 = v157;
          do
          {
            v67 = _mm_loadu_si128(v66++);
            ++v65;
            v65[-1] = v67;
          }
          while ( v163 != v66 );
          v68 = &v63->m128i_i8[(char *)v163 - (char *)v157];
        }
        v69 = v68 + 16;
        if ( v157 )
        {
          v158 = (char *)v63;
          operator delete(v64, v190 - (char *)v64);
          v63 = (__m128i *)v158;
        }
        v189[0] = v63;
        v189[1] = v69;
        v190 = v63[v62].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v189[1] = (char *)v189[1] + 16;
      }
      v41 = v191;
      v182 = 0u;
      v180 = v191;
      v181 = 0;
      if ( !v193.m128i_i64[0] )
      {
        v43 = v189[1];
        v44 = v189[0];
LABEL_81:
        v140.m128i_i64[0] = 0;
        v183 = v41;
        v185 = 0u;
        v184 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v181, &v192, 2);
      v41 = v180;
      v42 = _mm_load_si128(&v193);
      v188 = 0u;
      v43 = v189[1];
      v182 = v42;
      v44 = v189[0];
      v186 = v180;
      v187 = 0;
      if ( !v193.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v193.m128i_i64[0])(&v187, &v181, 2);
      v140 = _mm_loadu_si128(&v182);
      v185 = 0u;
      v188 = v140;
      v140.m128i_i64[0] = 0;
      v183 = v186;
      v184 = 0;
      if ( v182.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v182.m128i_i64[0])(&v184, &v187, 2);
        v140 = _mm_loadu_si128(&v188);
        v185 = v140;
        if ( v140.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v140.m128i_i64[0])(&v187, &v187, 3);
      }
LABEL_48:
      sub_2DB980((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v183);
      if ( v185.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v185.m128i_i64[0])(&v184, &v184, 3);
      if ( v182.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v182.m128i_i64[0])(&v181, &v181, 3);
      v28 = (__int64 *)v189[0];
      if ( v189[0] == v189[1] )
        break;
LABEL_28:
      v24 = v28[1];
      v25 = *v28;
      v26 = 4 * v24;
      if ( !v178 )
        std::__throw_bad_function_call();
    }
    while ( !v179(v177, v176[3 * *v28 + 2] + 200 * v24, v27 + v176[v147 + 2]) );
    if ( a3 )
    {
      v99 = a1[12];
      LODWORD(v168) = 0;
      sub_2CDC90(a1 + 11, (int *)&v168);
      v100 = (__int64 *)dest;
      v101 = (__int64 *)((char *)dest + 16 * v165);
      if ( dest == v101 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v100 + 2] + 200 * v100[1] + 192) = v99;
        v102 = (_DWORD *)(4 * v99 + a1[11]);
        v103 = 1 << *v100;
        if ( (*v102 & v103) != 0 )
          break;
        v100 += 2;
        *v102 |= v103;
        if ( v101 == v100 )
          goto LABEL_55;
      }
      switch_dbctx();
      v106 = *v100;
      v107 = 0;
      v108 = 2 * *v100;
      v109 = (void *)a1[3 * *v100 + 3];
      v149 = v109;
      if ( v109 )
      {
        v117 = qalloc_or_throw(200LL * (_QWORD)v109, v106, v104, v105);
        v107 = v117;
        v118 = 0;
        v119 = 0;
        v120 = &a1[v106 + v108];
        do
        {
          v121 = v120[2] + v118;
          v144 = v119;
          v142 = v118;
          v141 = (_QWORD *)v117;
          sub_2CE520(v117, v121);
          v122 = *(_QWORD *)(v121 + 192);
          *v141 = off_4E2D28;
          v117 = (__int64)(v141 + 25);
          v141[24] = v122;
          v119 = v144 + 1;
          v118 = v142 + 200;
        }
        while ( v149 != (void *)(v144 + 1) );
      }
      v110 = (char *)dest;
      v111 = (char *)dest + 16 * v165;
      if ( v111 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v110 == *v100 )
          {
            v112 = *((_QWORD *)v110 + 1);
            v113 = v100[1];
            if ( v112 != v113 && *(_QWORD *)(v107 + 200 * v112 + 192) == v99 )
              break;
          }
          v110 += 16;
          if ( v111 == v110 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v168, (const char *)&unk_418793);
        v114 = s1;
        if ( *((_QWORD *)&v168 + 1) )
          v114 = (const char *)v168;
        v115 = *((_QWORD *)v110 + 1);
        sub_81980((__int64)&v166, (const char *)&unk_418793);
        v116 = s1;
        if ( v167 )
          v116 = (const char *)v166;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v100, v116, v115, v114, v113);
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
LABEL_151:
      if ( !under_debugger )
        sub_383060(0x87Bu, *(double *)v140.m128i_i64);
LABEL_181:
      BUG();
    }
    v45 = v165;
    if ( (unsigned __int64)v165 <= 1 )
      goto LABEL_55;
    v70 = (__int64 *)dest;
    DWORD2(v168) = 0;
    v170 = (__int128 *)((char *)&v168 + 8);
    v169 = nullptr;
    v171 = (char *)&v168 + 8;
    v172 = 0;
    v148 = (char *)dest + 16 * v165;
    if ( v148 != dest )
    {
      v71 = (char *)dest;
      do
      {
        v166 = *(_QWORD *)(a1[3 * *(_QWORD *)v71 + 2] + 200LL * *((_QWORD *)v71 + 1) + 192);
        v72 = sub_2CDD40(&v168, (unsigned __int64 *)&v166);
        v73 = *(_QWORD *)v71;
        v71 += 16;
        *(_DWORD *)v72 |= 1 << v73;
      }
      while ( v148 != v71 );
      if ( v170 != (__int128 *)((char *)&v168 + 8) )
      {
        v74 = (__int64)v170;
        do
        {
          v75 = *(_DWORD *)(v74 + 40);
          v76 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v74 + 32));
          v74 = std::_Rb_tree_increment();
          if ( v76 != v75 )
          {
            v77 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v77, 0x30u);
            --v172;
          }
        }
        while ( (__int128 *)v74 != (__int128 *)((char *)&v168 + 8) );
      }
      v45 = v165;
      v70 = (__int64 *)dest;
      v78 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v165 != dest )
      {
        do
        {
          while ( 1 )
          {
            v80 = v78 + 2;
            if ( (_QWORD *)((char *)&v168 + 8) == sub_2AE200(
                                                    (__int64)&v168,
                                                    *(_QWORD *)(a1[3 * *v78 + 2] + 200 * v78[1] + 192)) )
              break;
            v45 = v165;
            v78 += 2;
            if ( v80 == &v70[2 * (_QWORD)v165] )
              goto LABEL_111;
          }
          v81 = v79 - (_QWORD)v78;
          if ( (v81 >> 4) - 2 >= 0 )
          {
            memmove(v78, v80, v81 - 16);
            v70 = (__int64 *)dest;
          }
          *(_QWORD *)&v165 = v165 - 1;
          v45 = v165;
        }
        while ( v78 != &v70[2 * (_QWORD)v165] );
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
      v45 = v165 - 1;
      v87 = a1[3 * v83 + 2] + 200 * v84;
      *(_QWORD *)&v165 = v165 - 1;
      v88 = *(_QWORD *)(v87 + 192);
      if ( v86 )
      {
        v89 = 0;
        v90 = *(_DWORD *)(a1[11] + 4 * v88);
        do
        {
          v91 = -1;
          if ( (v90 & (1 << v89)) != 0 )
            v91 = v88;
          (&v186)[v89++] = (_QWORD *)v91;
        }
        while ( v89 != v86 );
      }
      if ( 16 * v45 )
      {
        do
        {
          v94 = *v85;
          v95 = a1[3 * *v85 + 2] + 200 * v85[1];
          v96 = *(_QWORD *)(v95 + 192);
          if ( (&v186)[*v85] == (_QWORD *)-1LL )
          {
            v97 = a1[11];
            (&v186)[v94] = (_QWORD *)v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 192) = v88;
            *(_DWORD *)(4 * v88 + a1[11]) |= 1 << *v85;
            v93 = v85 + 2;
            v70 = (__int64 *)dest;
            v45 = v165;
            if ( v88 == *(_QWORD *)(v95 + 192) )
            {
LABEL_128:
              if ( (((char *)&v70[2 * v45] - (char *)v85) >> 4) - 2 >= 0 )
              {
                v98 = (__int64 *)memmove(v85, v93, (char *)&v70[2 * v45] - (char *)v85 - 16);
                v70 = (__int64 *)dest;
                v85 = v98;
                v45 = v165;
              }
              *(_QWORD *)&v165 = --v45;
              continue;
            }
          }
          else
          {
            v92 = v88 == v96;
            v93 = v85 + 2;
            v45 = v165;
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
    sub_2AE260((void **)v169);
LABEL_55:
    v23 = (__int64 *)v189[0];
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

