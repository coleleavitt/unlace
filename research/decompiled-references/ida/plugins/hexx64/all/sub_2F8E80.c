unsigned __int64 __fastcall sub_2F8E80(_QWORD *a1, const __m128i *a2, char a3)
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
  __int64 v99; // r14
  __int64 v100; // rsi
  __int64 *v101; // r13
  __int64 *v102; // rdi
  _DWORD *v103; // rdx
  int v104; // eax
  __int64 v105; // rbp
  __int64 v106; // rax
  char *v107; // rbx
  char *v108; // rcx
  __int64 v109; // rax
  __int64 v110; // r12
  const char *v111; // r15
  __int64 v112; // rbx
  const char *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // r12
  __int64 v117; // rbx
  char *v118; // rbx
  __int64 v119; // rsi
  signed __int64 v120; // rax
  signed __int64 v121; // rsi
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // r13
  __int64 v124; // rax
  __m128i *v125; // rcx
  char *v126; // r8
  unsigned __int64 *v127; // rdx
  const __m128i *v128; // rsi
  __int64 v129; // rdx
  __m128i v130; // xmm0
  void *v131; // r14
  __m128i *v132; // r13
  __int64 v133; // r14
  const __m128i *v134; // rdi
  __int64 v135; // rax
  __m128i *v136; // rdx
  __m128i v137; // xmm0
  __int64 v138; // [rsp+0h] [rbp-268h]
  __int64 v139; // [rsp+8h] [rbp-260h]
  __int64 v141; // [rsp+10h] [rbp-258h]
  void *v142; // [rsp+18h] [rbp-250h]
  void *v143; // [rsp+18h] [rbp-250h]
  __int64 v144; // [rsp+18h] [rbp-250h]
  char *v145; // [rsp+18h] [rbp-250h]
  __int64 v146; // [rsp+18h] [rbp-250h]
  _QWORD *v147; // [rsp+18h] [rbp-250h]
  const __m128i *v148; // [rsp+18h] [rbp-250h]
  char *v149; // [rsp+18h] [rbp-250h]
  __m128i *v151; // [rsp+30h] [rbp-238h]
  void *v152; // [rsp+30h] [rbp-238h]
  void *v153; // [rsp+30h] [rbp-238h]
  __m128i *v154; // [rsp+30h] [rbp-238h]
  const __m128i *v155; // [rsp+30h] [rbp-238h]
  char *v156; // [rsp+30h] [rbp-238h]
  char *v157; // [rsp+30h] [rbp-238h]
  unsigned __int64 v158; // [rsp+38h] [rbp-230h]
  signed __int64 v159; // [rsp+38h] [rbp-230h]
  signed __int64 v160; // [rsp+38h] [rbp-230h]
  unsigned __int64 v161; // [rsp+40h] [rbp-228h]
  const __m128i *v162; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v164; // [rsp+68h] [rbp-200h]
  __int64 v165; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v166; // [rsp+88h] [rbp-1E0h]
  __int128 v167; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v168; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v169; // [rsp+B8h] [rbp-1B0h]
  char *v170; // [rsp+C0h] [rbp-1A8h]
  __int64 v171; // [rsp+C8h] [rbp-1A0h]
  __m128i v172[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v173; // [rsp+F0h] [rbp-178h]
  __m128i v174[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v175; // [rsp+120h] [rbp-148h]
  _BYTE v176[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v177; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v178)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v179; // [rsp+150h] [rbp-118h] BYREF
  __m128i v180; // [rsp+158h] [rbp-110h] BYREF
  __m128i v181; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v182; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v183; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v184; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v185; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v186; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v187; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v188[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v189; // [rsp+1F0h] [rbp-78h]
  _QWORD *v190; // [rsp+1F8h] [rbp-70h]
  __m128i v191; // [rsp+200h] [rbp-68h] BYREF
  __m128i v192; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v193; // [rsp+228h] [rbp-40h]

  v193 = __readfsqword(0x28u);
  sub_2CE280((__int64)v172, a2);
  v173 = a1;
  sub_2CE280((__int64)v174, a2);
  v175 = a1;
  sub_2CE280((__int64)v176, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CE280((__int64)&v179, v172);
    v6 = *v5;
    v7 = 72 * v5[1];
    v142 = (void *)(*v5 + v7);
    sub_2CE280((__int64)&v182, (const __m128i *)&v179);
    sub_2CE280((__int64)v188, (const __m128i *)&v182);
    sub_2CE280((__int64)&v185, (const __m128i *)v188);
    sub_66C50((__int64)v188);
    if ( v142 != (void *)v6 )
    {
      sub_2CE280((__int64)v188, (const __m128i *)&v185);
      v8 = -2;
      v9 = 0x8E38E38E38E38E39LL * (v7 >> 3);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2F89A0(v6, (__int64)v142, v8, (const __m128i *)v188);
      sub_66C50((__int64)v188);
      sub_2CE280((__int64)v188, (const __m128i *)&v185);
      sub_2DFF00(v6, (__int64)v142, (const __m128i *)v188);
      sub_66C50((__int64)v188);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v185);
    sub_66C50((__int64)&v182);
    sub_66C50((__int64)&v179);
  }
  v168 = nullptr;
  v189 = nullptr;
  v190 = v173;
  v167 = 0;
  *(_OWORD *)v188 = 0;
  sub_2CE280((__int64)&v191, v174);
  v179 = v190;
  sub_2CE280((__int64)&v180, &v191);
  v11 = v188[1];
  v12 = v188[0];
  v185 = v179;
  sub_2CE280((__int64)&v186, &v180);
  v182 = v185;
  sub_2CE280((__int64)&v183, &v186);
  v13 = v11 - v12;
  sub_66C50((__int64)&v186);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v187 = 0u;
      v186 = 0;
      v185 = v182;
      if ( v184.m128i_i64[0] )
      {
        v143 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v184.m128i_i64[0])(&v186, &v183, 2);
        v17 = (unsigned __int64)v143;
        v187 = _mm_loadu_si128(&v184);
      }
      sub_2DB340((__int64)v12, i, v14, v16, v17, (__int64)&v185);
      if ( v187.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v183);
  sub_66C50((__int64)&v180);
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
      v20 = (const __m128i *)v188[1];
      if ( v188[1] == v189 )
      {
        v120 = ((char *)v188[1] - (char *)v188[0]) >> 4;
        if ( v120 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v121 = 1;
        if ( v120 )
          v121 = ((char *)v188[1] - (char *)v188[0]) >> 4;
        v56 = __CFADD__(v121, v120);
        v122 = v121 + v120;
        if ( v56 )
        {
          v123 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v122 > 0x7FFFFFFFFFFFFFFLL )
            v122 = 0x7FFFFFFFFFFFFFFLL;
          v123 = 16 * v122;
        }
        v160 = (char *)v188[1] - (char *)v188[0];
        v148 = (const __m128i *)v188[0];
        v124 = operator new(v123);
        v125 = (__m128i *)v148;
        v126 = (char *)v124;
        v127 = (unsigned __int64 *)(v124 + v160);
        *v127 = v18;
        v127[1] = 0;
        if ( v20 != v148 )
        {
          v128 = v148;
          v129 = v124 + (char *)v20 - (char *)v148;
          do
          {
            v130 = _mm_loadu_si128(v128);
            v124 += 16;
            ++v128;
            *(__m128i *)(v124 - 16) = v130;
          }
          while ( v124 != v129 );
        }
        v131 = (void *)(v124 + 16);
        if ( v148 )
        {
          v149 = v126;
          operator delete(v125, v189 - (char *)v125);
          v126 = v149;
        }
        v188[0] = v126;
        v188[1] = v131;
        v189 = &v126[v123];
      }
      else
      {
        *(_QWORD *)v188[1] = v18;
        v20->m128i_i64[1] = 0;
        v188[1] = (char *)v188[1] + 16;
      }
      v179 = v190;
      sub_2CE280((__int64)&v180, &v191);
      v21 = v188[1];
      v22 = v188[0];
      v185 = v179;
      sub_2CE280((__int64)&v186, &v180);
      v182 = v185;
      sub_2CE280((__int64)&v183, &v186);
      sub_66C50((__int64)&v186);
      sub_2DB1F0((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v182);
      ++v18;
      sub_66C50((__int64)&v183);
      sub_66C50((__int64)&v180);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v137.m128i_i64[0] = 0;
    v164 = 0;
    if ( v19 )
    {
      v132 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
      v133 = *((_QWORD *)&v164 + 1);
      *((_QWORD *)&v164 + 1) = 0;
      v134 = (const __m128i *)dest;
      v135 = v164 - 1;
      if ( (__int64)v164 - 1 >= 0 )
      {
        v136 = v132;
        do
        {
          v137 = _mm_loadu_si128(v134);
          ++v136;
          ++v134;
          v136[-1] = v137;
          v56 = v135-- == 0;
        }
        while ( !v56 );
        v134 = (const __m128i *)dest;
      }
      qfree((__int64)v134);
      dest = v132;
      *((_QWORD *)&v164 + 1) = v133;
    }
  }
  else
  {
    dest = nullptr;
    v137.m128i_i64[0] = 0;
    v164 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(0x7A9u, *(double *)v137.m128i_i64);
    goto LABEL_181;
  }
  v23 = (__int64 *)v188[0];
  if ( v188[0] == v188[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v164 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 8 * v24;
    v144 = 3 * *v23;
    v27 = 72 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 8 * (v24 + v26) + 64);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0x87Au, *(double *)v137.m128i_i64);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v164;
        if ( *((_QWORD *)&v164 + 1) < (unsigned __int64)(v164 + 1) )
        {
          v152 = *((void **)&v164 + 1);
          v31 = (__m128i *)qvector_reserve((__int64)&dest, 0, v164 + 1, 16);
          v51 = *((void **)&v164 + 1);
          v52 = (const __m128i *)dest;
          *((_QWORD *)&v164 + 1) = v152;
          v53 = v164 - 1;
          if ( (__int64)v164 - 1 >= 0 )
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
          v153 = v51;
          qfree((__int64)v52);
          v30 = v164;
          dest = v31;
          *((_QWORD *)&v164 + 1) = v153;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        m128i_i8 = v31[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v164 = v164 + 1;
      }
      v33 = (const __m128i *)v188[0];
      v137.m128i_i64[0] = 0;
      v34 = *(_QWORD *)v188[0];
      v35 = *((_QWORD *)v188[0] + 1);
      v179 = v190;
      v181 = 0u;
      v180 = 0;
      if ( !v192.m128i_i64[0] )
      {
        v36 = (__m128i *)v188[1];
        if ( (char *)v188[1] - (char *)v188[0] <= 16 )
          goto LABEL_40;
        v47 = v190;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v180, &v191, 2);
      v36 = (__m128i *)v188[1];
      v33 = (const __m128i *)v188[0];
      v137 = _mm_load_si128(&v192);
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0];
      v181 = v137;
      if ( (char *)v188[1] - (char *)v188[0] > 16 )
      {
        v47 = v179;
        v187 = 0u;
        v185 = v179;
        v186 = 0;
        if ( v192.m128i_i64[0] )
        {
          v154 = (__m128i *)v188[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v186, &v180, 2);
          v57 = _mm_loadu_si128(&v181);
          v184 = 0u;
          v36 = v154;
          v187 = v57;
          v182 = v185;
          v183 = 0;
          if ( v181.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v181.m128i_i64[0])(&v183, &v186, 2);
            v58 = _mm_loadu_si128(&v187);
            v36 = v154;
            v184 = v58;
            if ( v58.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128i_i64[0])(&v186, &v186, 3);
              v36 = v154;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v182 = v47;
        v184 = 0u;
        v183 = 0;
LABEL_64:
        v48 = v36[-1].m128i_u64[0];
        v49 = v36 - 1;
        v50 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v137.m128i_i64[0] = 0;
        v187 = 0u;
        v185 = v182;
        v186 = 0;
        if ( v184.m128i_i64[0] )
        {
          v161 = v50;
          v158 = v48;
          v151 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v184.m128i_i64[0])(&v186, &v183, 2);
          v137 = _mm_loadu_si128(&v184);
          v50 = v161;
          v48 = v158;
          v49 = v151;
          v187 = v137;
        }
        sub_2DB340((__int64)v33, 0, v49 - v33, v48, v50, (__int64)&v185);
        if ( v187.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v187.m128i_i64[0])(&v186, &v186, 3);
        if ( v184.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v184.m128i_i64[0])(&v183, &v183, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0];
      }
      if ( v37 )
        v37(&v180, &v180, 3);
LABEL_40:
      v38 = (__m128i *)v188[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v188[1] - 16);
      v188[1] = (char *)v188[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v188[0];
        if ( v188[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)v189 )
      {
        v59 = ((char *)v40 - (char *)v188[0]) >> 4;
        if ( v59 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v60 = 1;
        if ( v59 )
          v60 = ((char *)v40 - (char *)v188[0]) >> 4;
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
        v162 = v40;
        v159 = (char *)v40 - (char *)v188[0];
        v155 = (const __m128i *)v188[0];
        v63 = (__m128i *)operator new(v62 * 16);
        v64 = (__m128i *)v155;
        *(__m128i *)((char *)v63 + v159) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v162 == v155 )
        {
          v68 = (char *)v63;
        }
        else
        {
          v65 = v63;
          v66 = v155;
          do
          {
            v67 = _mm_loadu_si128(v66++);
            ++v65;
            v65[-1] = v67;
          }
          while ( v162 != v66 );
          v68 = &v63->m128i_i8[(char *)v162 - (char *)v155];
        }
        v69 = v68 + 16;
        if ( v155 )
        {
          v156 = (char *)v63;
          operator delete(v64, v189 - (char *)v64);
          v63 = (__m128i *)v156;
        }
        v188[0] = v63;
        v188[1] = v69;
        v189 = v63[v62].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v188[1] = (char *)v188[1] + 16;
      }
      v41 = v190;
      v181 = 0u;
      v179 = v190;
      v180 = 0;
      if ( !v192.m128i_i64[0] )
      {
        v43 = v188[1];
        v44 = v188[0];
LABEL_81:
        v137.m128i_i64[0] = 0;
        v182 = v41;
        v184 = 0u;
        v183 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v180, &v191, 2);
      v41 = v179;
      v42 = _mm_load_si128(&v192);
      v187 = 0u;
      v43 = v188[1];
      v181 = v42;
      v44 = v188[0];
      v185 = v179;
      v186 = 0;
      if ( !v192.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v192.m128i_i64[0])(&v186, &v180, 2);
      v137 = _mm_loadu_si128(&v181);
      v184 = 0u;
      v187 = v137;
      v137.m128i_i64[0] = 0;
      v182 = v185;
      v183 = 0;
      if ( v181.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v181.m128i_i64[0])(&v183, &v186, 2);
        v137 = _mm_loadu_si128(&v187);
        v184 = v137;
        if ( v137.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v137.m128i_i64[0])(&v186, &v186, 3);
      }
LABEL_48:
      sub_2DB1F0((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v182);
      if ( v184.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v184.m128i_i64[0])(&v183, &v183, 3);
      if ( v181.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v181.m128i_i64[0])(&v180, &v180, 3);
      v28 = (__int64 *)v188[0];
      if ( v188[0] == v188[1] )
        break;
LABEL_28:
      v24 = v28[1];
      v25 = *v28;
      v26 = 8 * v24;
      if ( !v177 )
        std::__throw_bad_function_call();
    }
    while ( !v178(v176, v175[3 * *v28 + 2] + 72 * v24, v27 + v175[v144 + 2]) );
    if ( a3 )
    {
      v99 = a1[12];
      LODWORD(v167) = 0;
      sub_2CDC90(a1 + 11, (int *)&v167);
      v100 = 4 * v99;
      v101 = (__int64 *)dest;
      v102 = (__int64 *)((char *)dest + 16 * v164);
      if ( dest == v102 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v101 + 2] + 72 * v101[1] + 64) = v99;
        v103 = (_DWORD *)(v100 + a1[11]);
        v104 = 1 << *v101;
        if ( (*v103 & v104) != 0 )
          break;
        v101 += 2;
        *v103 |= v104;
        if ( v102 == v101 )
          goto LABEL_55;
      }
      switch_dbctx();
      v105 = 0;
      v106 = a1[3 * *v101 + 3];
      v139 = v106;
      if ( v106 )
      {
        v146 = 2 * *v101;
        v141 = *v101;
        v114 = qalloc_or_throw(72 * v106, v100, v146, *v101);
        v115 = v146;
        v105 = v114;
        v116 = v114 + 16;
        v138 = 0;
        v147 = &a1[v146 + v141];
        v157 = (char *)(-16 - v114);
        do
        {
          v117 = v147[2];
          *(_QWORD *)(v116 - 16) = off_4E14B0;
          v118 = &v157[v116 + v117];
          v119 = *((_QWORD *)v118 + 1);
          *(_QWORD *)v116 = 0;
          *(_OWORD *)(v116 + 8) = 0;
          *(_QWORD *)(v116 - 8) = v119;
          sub_2AE320((_QWORD *)v116, (__int64)(v118 + 16), v115, (__int64)&v157[v116]);
          *(_QWORD *)(v116 + 24) = 0;
          copy_tinfo_t();
          ++v138;
          v116 += 72;
          *(_QWORD *)(v116 - 40) = *((_QWORD *)v118 + 6);
          LODWORD(v119) = *((_DWORD *)v118 + 14);
          *(_QWORD *)(v116 - 88) = off_4E2CD8;
          *(_DWORD *)(v116 - 32) = v119;
          *(_QWORD *)(v116 - 24) = *((_QWORD *)v118 + 8);
        }
        while ( v139 != v138 );
      }
      v107 = (char *)dest;
      v108 = (char *)dest + 16 * v164;
      if ( v108 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v107 == *v101 )
          {
            v109 = *((_QWORD *)v107 + 1);
            v110 = v101[1];
            if ( v109 != v110 && *(_QWORD *)(v105 + 72 * v109 + 64) == v99 )
              break;
          }
          v107 += 16;
          if ( v108 == v107 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v167, (const char *)&unk_418793);
        v111 = s1;
        if ( *((_QWORD *)&v167 + 1) )
          v111 = (const char *)v167;
        v112 = *((_QWORD *)v107 + 1);
        sub_81980((__int64)&v165, (const char *)&unk_418793);
        v113 = s1;
        if ( v166 )
          v113 = (const char *)v165;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v101, v113, v112, v111, v110);
        if ( v165 )
        {
          v166 = 0;
          qfree(v165);
        }
        if ( (_QWORD)v167 )
        {
          *((_QWORD *)&v167 + 1) = 0;
          qfree(v167);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(0x87Bu, *(double *)v137.m128i_i64);
LABEL_181:
      BUG();
    }
    v45 = v164;
    if ( (unsigned __int64)v164 <= 1 )
      goto LABEL_55;
    v70 = (__int64 *)dest;
    DWORD2(v167) = 0;
    v169 = (__int128 *)((char *)&v167 + 8);
    v168 = nullptr;
    v170 = (char *)&v167 + 8;
    v171 = 0;
    v145 = (char *)dest + 16 * v164;
    if ( v145 != dest )
    {
      v71 = (char *)dest;
      do
      {
        v165 = *(_QWORD *)(a1[3 * *(_QWORD *)v71 + 2] + 72LL * *((_QWORD *)v71 + 1) + 64);
        v72 = sub_2CDD40(&v167, (unsigned __int64 *)&v165);
        v73 = *(_QWORD *)v71;
        v71 += 16;
        *(_DWORD *)v72 |= 1 << v73;
      }
      while ( v145 != v71 );
      if ( v169 != (__int128 *)((char *)&v167 + 8) )
      {
        v74 = (__int64)v169;
        do
        {
          v75 = *(_DWORD *)(v74 + 40);
          v76 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v74 + 32));
          v74 = std::_Rb_tree_increment();
          if ( v76 != v75 )
          {
            v77 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v77, 0x30u);
            --v171;
          }
        }
        while ( (__int128 *)v74 != (__int128 *)((char *)&v167 + 8) );
      }
      v45 = v164;
      v70 = (__int64 *)dest;
      v78 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v164 != dest )
      {
        do
        {
          while ( 1 )
          {
            v80 = v78 + 2;
            if ( (_QWORD *)((char *)&v167 + 8) == sub_2AE200(
                                                    (__int64)&v167,
                                                    *(_QWORD *)(a1[3 * *v78 + 2] + 72 * v78[1] + 64)) )
              break;
            v45 = v164;
            v78 += 2;
            if ( v80 == &v70[2 * (_QWORD)v164] )
              goto LABEL_111;
          }
          v81 = v79 - (_QWORD)v78;
          if ( (v81 >> 4) - 2 >= 0 )
          {
            memmove(v78, v80, v81 - 16);
            v70 = (__int64 *)dest;
          }
          *(_QWORD *)&v164 = v164 - 1;
          v45 = v164;
        }
        while ( v78 != &v70[2 * (_QWORD)v164] );
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
      v45 = v164 - 1;
      v87 = a1[3 * v83 + 2] + 72 * v84;
      *(_QWORD *)&v164 = v164 - 1;
      v88 = *(_QWORD *)(v87 + 64);
      if ( v86 )
      {
        v89 = 0;
        v90 = *(_DWORD *)(a1[11] + 4 * v88);
        do
        {
          v91 = -1;
          if ( (v90 & (1 << v89)) != 0 )
            v91 = v88;
          (&v185)[v89++] = (_QWORD *)v91;
        }
        while ( v89 != v86 );
      }
      if ( 16 * v45 )
      {
        do
        {
          v94 = *v85;
          v95 = a1[3 * *v85 + 2] + 72 * v85[1];
          v96 = *(_QWORD *)(v95 + 64);
          if ( (&v185)[*v85] == (_QWORD *)-1LL )
          {
            v97 = a1[11];
            (&v185)[v94] = (_QWORD *)v96;
            *(_DWORD *)(v97 + 4 * v96) &= ~(1 << v94);
            if ( !*(_DWORD *)(a1[11] + 4 * v96) )
              ++a1[14];
            *(_QWORD *)(v95 + 64) = v88;
            *(_DWORD *)(4 * v88 + a1[11]) |= 1 << *v85;
            v93 = v85 + 2;
            v70 = (__int64 *)dest;
            v45 = v164;
            if ( v88 == *(_QWORD *)(v95 + 64) )
            {
LABEL_128:
              if ( (((char *)&v70[2 * v45] - (char *)v85) >> 4) - 2 >= 0 )
              {
                v98 = (__int64 *)memmove(v85, v93, (char *)&v70[2 * v45] - (char *)v85 - 16);
                v70 = (__int64 *)dest;
                v85 = v98;
                v45 = v164;
              }
              *(_QWORD *)&v164 = --v45;
              continue;
            }
          }
          else
          {
            v92 = v88 == v96;
            v93 = v85 + 2;
            v45 = v164;
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
    sub_2AE260((void **)v168);
LABEL_55:
    v23 = (__int64 *)v188[0];
  }
  while ( v188[1] != v188[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v164 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v191);
  if ( v188[0] )
    operator delete(v188[0], v189 - (char *)v188[0]);
  sub_66C50((__int64)v176);
  sub_66C50((__int64)v174);
  sub_66C50((__int64)v172);
  return v193 - __readfsqword(0x28u);
}

