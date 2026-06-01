unsigned __int64 __fastcall sub_2E5BA0(_QWORD *a1, const __m128i *a2, char a3)
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
  void *v98; // r8
  __int64 *v99; // r14
  __int64 *v100; // rdi
  __int64 v101; // rsi
  _DWORD *v102; // rdx
  int v103; // eax
  __int64 v104; // rbp
  void *v105; // r8
  __int64 v106; // r12
  char *v107; // rbx
  char *v108; // rcx
  __int64 v109; // rax
  __int64 v110; // r13
  const char *v111; // r15
  __int64 v112; // rbx
  const char *v113; // rax
  __int64 v114; // r13
  __int64 m128i_i64; // rax
  __int64 v116; // rdx
  __int64 v117; // rbx
  char *v118; // rbx
  char v119; // si
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
  __m128i *v133; // r13
  __int64 v134; // r14
  const __m128i *v135; // rdi
  __int64 v136; // rax
  __m128i *v137; // rdx
  __m128i v138; // xmm0
  __int64 v139; // [rsp+0h] [rbp-268h]
  __m128i *v140; // [rsp+0h] [rbp-268h]
  void *v141; // [rsp+8h] [rbp-260h]
  __int64 v143; // [rsp+10h] [rbp-258h]
  _QWORD *v144; // [rsp+10h] [rbp-258h]
  void *v145; // [rsp+18h] [rbp-250h]
  void *v146; // [rsp+18h] [rbp-250h]
  __int64 v147; // [rsp+18h] [rbp-250h]
  char *v148; // [rsp+18h] [rbp-250h]
  void *v149; // [rsp+18h] [rbp-250h]
  char *v150; // [rsp+18h] [rbp-250h]
  const __m128i *v151; // [rsp+18h] [rbp-250h]
  char *v152; // [rsp+18h] [rbp-250h]
  __m128i *v154; // [rsp+30h] [rbp-238h]
  void *v155; // [rsp+30h] [rbp-238h]
  void *v156; // [rsp+30h] [rbp-238h]
  __m128i *v157; // [rsp+30h] [rbp-238h]
  const __m128i *v158; // [rsp+30h] [rbp-238h]
  char *v159; // [rsp+30h] [rbp-238h]
  unsigned __int64 v160; // [rsp+38h] [rbp-230h]
  signed __int64 v161; // [rsp+38h] [rbp-230h]
  signed __int64 v162; // [rsp+38h] [rbp-230h]
  unsigned __int64 v163; // [rsp+40h] [rbp-228h]
  const __m128i *v164; // [rsp+40h] [rbp-228h]
  void *dest; // [rsp+60h] [rbp-208h] BYREF
  __int128 v166; // [rsp+68h] [rbp-200h]
  __int64 v167; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v168; // [rsp+88h] [rbp-1E0h]
  __int128 v169; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v170; // [rsp+B0h] [rbp-1B8h]
  _OWORD *v171; // [rsp+B8h] [rbp-1B0h]
  char *v172; // [rsp+C0h] [rbp-1A8h]
  __int64 v173; // [rsp+C8h] [rbp-1A0h]
  __m128i v174[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD *v175; // [rsp+F0h] [rbp-178h]
  __m128i v176[2]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD *v177; // [rsp+120h] [rbp-148h]
  _BYTE v178[16]; // [rsp+128h] [rbp-140h] BYREF
  __int64 v179; // [rsp+138h] [rbp-130h]
  unsigned int (__fastcall *v180)(_BYTE *, __int64, __int64); // [rsp+140h] [rbp-128h]
  _QWORD *v181; // [rsp+150h] [rbp-118h] BYREF
  __m128i v182; // [rsp+158h] [rbp-110h] BYREF
  __m128i v183; // [rsp+168h] [rbp-100h] BYREF
  _QWORD *v184; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v185; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v186; // [rsp+198h] [rbp-D0h] BYREF
  _QWORD *v187; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i v188; // [rsp+1B8h] [rbp-B0h] BYREF
  __m128i v189; // [rsp+1C8h] [rbp-A0h] BYREF
  void *v190[2]; // [rsp+1E0h] [rbp-88h] BYREF
  char *v191; // [rsp+1F0h] [rbp-78h]
  _QWORD *v192; // [rsp+1F8h] [rbp-70h]
  __m128i v193; // [rsp+200h] [rbp-68h] BYREF
  __m128i v194; // [rsp+210h] [rbp-58h] BYREF
  unsigned __int64 v195; // [rsp+228h] [rbp-40h]

  v195 = __readfsqword(0x28u);
  sub_2CDF20((__int64)v174, a2);
  v175 = a1;
  sub_2CDF20((__int64)v176, a2);
  v177 = a1;
  sub_2CDF20((__int64)v178, a2);
  v4 = 0;
  v5 = a1 + 2;
  while ( v4 < a1[1] )
  {
    switch_dbctx();
    sub_2CDF20((__int64)&v181, v174);
    v6 = *v5;
    v7 = 96 * v5[1];
    v145 = (void *)(*v5 + v7);
    sub_2CDF20((__int64)&v184, (const __m128i *)&v181);
    sub_2CDF20((__int64)v190, (const __m128i *)&v184);
    sub_2CDF20((__int64)&v187, (const __m128i *)v190);
    sub_66C50((__int64)v190);
    if ( v145 != (void *)v6 )
    {
      sub_2CDF20((__int64)v190, (const __m128i *)&v187);
      v8 = -2;
      v9 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 5);
      if ( v9 )
      {
        _BitScanReverse64(&v10, v9);
        v8 = 2LL * (int)v10;
      }
      sub_2E5420(v6, (__int64)v145, v8, (const __m128i *)v190);
      sub_66C50((__int64)v190);
      sub_2CDF20((__int64)v190, (const __m128i *)&v187);
      sub_2DCF60(v6, (__int64)v145, (const __m128i *)v190);
      sub_66C50((__int64)v190);
    }
    ++v4;
    v5 += 3;
    sub_66C50((__int64)&v187);
    sub_66C50((__int64)&v184);
    sub_66C50((__int64)&v181);
  }
  v170 = nullptr;
  v191 = nullptr;
  v192 = v175;
  v169 = 0;
  *(_OWORD *)v190 = 0;
  sub_2CDF20((__int64)&v193, v176);
  v181 = v192;
  sub_2CDF20((__int64)&v182, &v193);
  v11 = v190[1];
  v12 = v190[0];
  v187 = v181;
  sub_2CDF20((__int64)&v188, &v182);
  v184 = v187;
  sub_2CDF20((__int64)&v185, &v188);
  v13 = v11 - v12;
  sub_66C50((__int64)&v188);
  if ( v13 > 16 )
  {
    v14 = v13 >> 4;
    for ( i = ((v13 >> 4) - 2) / 2; ; --i )
    {
      v16 = *(_QWORD *)&v12[16 * i];
      v17 = *(_QWORD *)&v12[16 * i + 8];
      v189 = 0u;
      v188 = 0;
      v187 = v184;
      if ( v186.m128i_i64[0] )
      {
        v146 = (void *)v17;
        ((void (__fastcall *)(__m128i *, __int128 *, __int64))v186.m128i_i64[0])(&v188, &v185, 2);
        v17 = (unsigned __int64)v146;
        v189 = _mm_loadu_si128(&v186);
      }
      sub_2D9CF0((__int64)v12, i, v14, v16, v17, (__int64)&v187);
      if ( v189.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
      if ( !i )
        break;
    }
  }
  v18 = 0;
  sub_66C50((__int64)&v185);
  sub_66C50((__int64)&v182);
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
      v20 = (const __m128i *)v190[1];
      if ( v190[1] == v191 )
      {
        v121 = ((char *)v190[1] - (char *)v190[0]) >> 4;
        if ( v121 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v122 = 1;
        if ( v121 )
          v122 = ((char *)v190[1] - (char *)v190[0]) >> 4;
        v56 = __CFADD__(v122, v121);
        v123 = v122 + v121;
        if ( v56 )
        {
          v124 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v123 > 0x7FFFFFFFFFFFFFFLL )
            v123 = 0x7FFFFFFFFFFFFFFLL;
          v124 = 16 * v123;
        }
        v162 = (char *)v190[1] - (char *)v190[0];
        v151 = (const __m128i *)v190[0];
        v125 = operator new(v124);
        v126 = (__m128i *)v151;
        v127 = (char *)v125;
        v128 = (unsigned __int64 *)(v125 + v162);
        *v128 = v18;
        v128[1] = 0;
        if ( v20 != v151 )
        {
          v129 = v151;
          v130 = v125 + (char *)v20 - (char *)v151;
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
        if ( v151 )
        {
          v152 = v127;
          operator delete(v126, v191 - (char *)v126);
          v127 = v152;
        }
        v190[0] = v127;
        v190[1] = v132;
        v191 = &v127[v124];
      }
      else
      {
        *(_QWORD *)v190[1] = v18;
        v20->m128i_i64[1] = 0;
        v190[1] = (char *)v190[1] + 16;
      }
      v181 = v192;
      sub_2CDF20((__int64)&v182, &v193);
      v21 = v190[1];
      v22 = v190[0];
      v187 = v181;
      sub_2CDF20((__int64)&v188, &v182);
      v184 = v187;
      sub_2CDF20((__int64)&v185, &v188);
      sub_66C50((__int64)&v188);
      sub_2D9BB0((__int64)v22, ((v21 - v22) >> 4) - 1, 0, *((_QWORD *)v21 - 2), *((_QWORD *)v21 - 1), (__int64)&v184);
      ++v18;
      sub_66C50((__int64)&v185);
      sub_66C50((__int64)&v182);
      v19 = a1[1];
    }
    while ( v18 < v19 );
LABEL_22:
    dest = nullptr;
    v138.m128i_i64[0] = 0;
    v166 = 0;
    if ( v19 )
    {
      v133 = (__m128i *)qvector_reserve((__int64)&dest, 0, v19, 16);
      v134 = *((_QWORD *)&v166 + 1);
      *((_QWORD *)&v166 + 1) = 0;
      v135 = (const __m128i *)dest;
      v136 = v166 - 1;
      if ( (__int64)v166 - 1 >= 0 )
      {
        v137 = v133;
        do
        {
          v138 = _mm_loadu_si128(v135);
          ++v137;
          ++v135;
          v137[-1] = v138;
          v56 = v136-- == 0;
        }
        while ( !v56 );
        v135 = (const __m128i *)dest;
      }
      qfree((__int64)v135);
      dest = v133;
      *((_QWORD *)&v166 + 1) = v134;
    }
  }
  else
  {
    dest = nullptr;
    v138.m128i_i64[0] = 0;
    v166 = 0;
  }
  if ( a3 && a1[12] )
  {
    if ( !under_debugger )
      sub_383060(0x7A9u, *(double *)v138.m128i_i64);
    goto LABEL_181;
  }
  v23 = (__int64 *)v190[0];
  if ( v190[0] == v190[1] )
    goto LABEL_56;
  do
  {
    *(_QWORD *)&v166 = 0;
    v24 = v23[1];
    v25 = *v23;
    v26 = 2 * v24;
    v147 = 3 * *v23;
    v27 = 96 * v24;
    do
    {
      if ( a3 )
        goto LABEL_33;
      v29 = *(_QWORD *)(a1[3 * v25 + 2] + 32 * (v24 + v26) + 88);
      if ( v29 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0x87Au, *(double *)v138.m128i_i64);
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a1[11] + 4 * v29) != (1 << a1[1]) - 1 )
      {
LABEL_33:
        v30 = v166;
        if ( *((_QWORD *)&v166 + 1) < (unsigned __int64)(v166 + 1) )
        {
          v155 = *((void **)&v166 + 1);
          v31 = (__m128i *)qvector_reserve((__int64)&dest, 0, v166 + 1, 16);
          v51 = *((void **)&v166 + 1);
          v52 = (const __m128i *)dest;
          *((_QWORD *)&v166 + 1) = v155;
          v53 = v166 - 1;
          if ( (__int64)v166 - 1 >= 0 )
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
          v156 = v51;
          qfree((__int64)v52);
          v30 = v166;
          dest = v31;
          *((_QWORD *)&v166 + 1) = v156;
        }
        else
        {
          v31 = (__m128i *)dest;
        }
        m128i_i8 = v31[v30].m128i_i8;
        *(_QWORD *)m128i_i8 = v25;
        *((_QWORD *)m128i_i8 + 1) = v24;
        *(_QWORD *)&v166 = v166 + 1;
      }
      v33 = (const __m128i *)v190[0];
      v138.m128i_i64[0] = 0;
      v34 = *(_QWORD *)v190[0];
      v35 = *((_QWORD *)v190[0] + 1);
      v181 = v192;
      v183 = 0u;
      v182 = 0;
      if ( !v194.m128i_i64[0] )
      {
        v36 = (__m128i *)v190[1];
        if ( (char *)v190[1] - (char *)v190[0] <= 16 )
          goto LABEL_40;
        v47 = v192;
        goto LABEL_63;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0])(&v182, &v193, 2);
      v36 = (__m128i *)v190[1];
      v33 = (const __m128i *)v190[0];
      v138 = _mm_load_si128(&v194);
      v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0];
      v183 = v138;
      if ( (char *)v190[1] - (char *)v190[0] > 16 )
      {
        v47 = v181;
        v189 = 0u;
        v187 = v181;
        v188 = 0;
        if ( v194.m128i_i64[0] )
        {
          v157 = (__m128i *)v190[1];
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0])(&v188, &v182, 2);
          v57 = _mm_loadu_si128(&v183);
          v186 = 0u;
          v36 = v157;
          v189 = v57;
          v184 = v187;
          v185 = 0;
          if ( v183.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __m128i *, __int64))v183.m128i_i64[0])(&v185, &v188, 2);
            v58 = _mm_loadu_si128(&v189);
            v36 = v157;
            v186 = v58;
            if ( v58.m128i_i64[0] )
            {
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128i_i64[0])(&v188, &v188, 3);
              v36 = v157;
            }
          }
          goto LABEL_64;
        }
LABEL_63:
        v184 = v47;
        v186 = 0u;
        v185 = 0;
LABEL_64:
        v48 = v36[-1].m128i_u64[0];
        v49 = v36 - 1;
        v50 = v36[-1].m128i_u64[1];
        v36[-1] = _mm_loadu_si128(v33);
        v138.m128i_i64[0] = 0;
        v189 = 0u;
        v187 = v184;
        v188 = 0;
        if ( v186.m128i_i64[0] )
        {
          v163 = v50;
          v160 = v48;
          v154 = v36 - 1;
          ((void (__fastcall *)(__m128i *, __int128 *, __int64))v186.m128i_i64[0])(&v188, &v185, 2);
          v138 = _mm_loadu_si128(&v186);
          v50 = v163;
          v48 = v160;
          v49 = v154;
          v189 = v138;
        }
        sub_2D9CF0((__int64)v33, 0, v49 - v33, v48, v50, (__int64)&v187);
        if ( v189.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v189.m128i_i64[0])(&v188, &v188, 3);
        if ( v186.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
        v37 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v183.m128i_i64[0];
      }
      if ( v37 )
        v37(&v182, &v182, 3);
LABEL_40:
      v38 = (__m128i *)v190[1];
      v39 = v35 + 1;
      v40 = (const __m128i *)((char *)v190[1] - 16);
      v190[1] = (char *)v190[1] - 16;
      if ( v39 >= a1[3 * v34 + 3] )
      {
        v28 = (__int64 *)v190[0];
        if ( v190[0] == v40 )
          break;
        goto LABEL_28;
      }
      if ( v40 == (const __m128i *)v191 )
      {
        v59 = ((char *)v40 - (char *)v190[0]) >> 4;
        if ( v59 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v60 = 1;
        if ( v59 )
          v60 = ((char *)v40 - (char *)v190[0]) >> 4;
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
        v164 = v40;
        v161 = (char *)v40 - (char *)v190[0];
        v158 = (const __m128i *)v190[0];
        v63 = (__m128i *)operator new(v62 * 16);
        v64 = (__m128i *)v158;
        *(__m128i *)((char *)v63 + v161) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        if ( v164 == v158 )
        {
          v68 = (char *)v63;
        }
        else
        {
          v65 = v63;
          v66 = v158;
          do
          {
            v67 = _mm_loadu_si128(v66++);
            ++v65;
            v65[-1] = v67;
          }
          while ( v164 != v66 );
          v68 = &v63->m128i_i8[(char *)v164 - (char *)v158];
        }
        v69 = v68 + 16;
        if ( v158 )
        {
          v159 = (char *)v63;
          operator delete(v64, v191 - (char *)v64);
          v63 = (__m128i *)v159;
        }
        v190[0] = v63;
        v190[1] = v69;
        v191 = v63[v62].m128i_i8;
      }
      else
      {
        v38[-1] = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v39);
        v190[1] = (char *)v190[1] + 16;
      }
      v41 = v192;
      v183 = 0u;
      v181 = v192;
      v182 = 0;
      if ( !v194.m128i_i64[0] )
      {
        v43 = v190[1];
        v44 = v190[0];
LABEL_81:
        v138.m128i_i64[0] = 0;
        v184 = v41;
        v186 = 0u;
        v185 = 0;
        goto LABEL_48;
      }
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0])(&v182, &v193, 2);
      v41 = v181;
      v42 = _mm_load_si128(&v194);
      v189 = 0u;
      v43 = v190[1];
      v183 = v42;
      v44 = v190[0];
      v187 = v181;
      v188 = 0;
      if ( !v194.m128i_i64[0] )
        goto LABEL_81;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v194.m128i_i64[0])(&v188, &v182, 2);
      v138 = _mm_loadu_si128(&v183);
      v186 = 0u;
      v189 = v138;
      v138.m128i_i64[0] = 0;
      v184 = v187;
      v185 = 0;
      if ( v183.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, __m128i *, __int64))v183.m128i_i64[0])(&v185, &v188, 2);
        v138 = _mm_loadu_si128(&v189);
        v186 = v138;
        if ( v138.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v138.m128i_i64[0])(&v188, &v188, 3);
      }
LABEL_48:
      sub_2D9BB0((__int64)v44, ((v43 - v44) >> 4) - 1, 0, *((_QWORD *)v43 - 2), *((_QWORD *)v43 - 1), (__int64)&v184);
      if ( v186.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v186.m128i_i64[0])(&v185, &v185, 3);
      if ( v183.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v183.m128i_i64[0])(&v182, &v182, 3);
      v28 = (__int64 *)v190[0];
      if ( v190[0] == v190[1] )
        break;
LABEL_28:
      v24 = v28[1];
      v25 = *v28;
      v26 = 2 * v24;
      if ( !v179 )
        std::__throw_bad_function_call();
    }
    while ( !v180(v178, v177[3 * *v28 + 2] + 96 * v24, v27 + v177[v147 + 2]) );
    if ( a3 )
    {
      v98 = (void *)a1[12];
      LODWORD(v169) = 0;
      v149 = v98;
      sub_2CDC90(a1 + 11, (int *)&v169);
      v99 = (__int64 *)dest;
      v100 = (__int64 *)((char *)dest + 16 * v166);
      v101 = 4LL * (_QWORD)v149;
      if ( dest == v100 )
        goto LABEL_55;
      while ( 1 )
      {
        *(_QWORD *)(a1[3 * *v99 + 2] + 96 * v99[1] + 88) = v149;
        v102 = (_DWORD *)(v101 + a1[11]);
        v103 = 1 << *v99;
        if ( (*v102 & v103) != 0 )
          break;
        v99 += 2;
        *v102 |= v103;
        if ( v100 == v99 )
          goto LABEL_55;
      }
      switch_dbctx();
      v104 = 0;
      v105 = v149;
      v106 = a1[3 * *v99 + 3];
      if ( v106 )
      {
        v143 = 2 * *v99;
        v139 = *v99;
        v104 = qalloc_or_throw(96 * v106, v101, *v99, v143);
        v114 = 0;
        v105 = v149;
        m128i_i64 = v104 + 32;
        v116 = v143 + v139;
        v144 = &a1[v143 + v139];
        v150 = (char *)(-32 - v104);
        do
        {
          v141 = v105;
          v140 = (__m128i *)m128i_i64;
          v117 = v144[2];
          *(_QWORD *)(m128i_i64 - 32) = off_4E12A8;
          v118 = &v150[m128i_i64 + v117];
          *(__m128i *)(m128i_i64 - 24) = _mm_loadu_si128((const __m128i *)(v118 + 8));
          *(_DWORD *)(m128i_i64 - 8) = *((_DWORD *)v118 + 6);
          *(_WORD *)(m128i_i64 - 4) = *((_WORD *)v118 + 14);
          *(_BYTE *)(m128i_i64 - 2) = v118[30];
          v119 = v118[31];
          *(_QWORD *)m128i_i64 = 0;
          *(_BYTE *)(m128i_i64 - 1) = v119;
          *(_OWORD *)(m128i_i64 + 8) = 0;
          sub_2AE320((_QWORD *)m128i_i64, (__int64)(v118 + 32), v116, (__int64)&v150[m128i_i64]);
          ++v114;
          v105 = v141;
          v140[1].m128i_i64[1] = *((_QWORD *)v118 + 7);
          v138 = _mm_loadu_si128((const __m128i *)v118 + 4);
          m128i_i64 = (__int64)v140[6].m128i_i64;
          v120 = *((_DWORD *)v118 + 20);
          v140[-2].m128i_i64[0] = (__int64)off_4E2BE8;
          v140[2] = v138;
          v140[3].m128i_i32[0] = v120;
          v140[3].m128i_i64[1] = *((_QWORD *)v118 + 11);
        }
        while ( v106 != v114 );
      }
      v107 = (char *)dest;
      v108 = (char *)dest + 16 * v166;
      if ( v108 != dest )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)v107 == *v99 )
          {
            v109 = *((_QWORD *)v107 + 1);
            v110 = v99[1];
            if ( v109 != v110 && *(void **)(v104 + 96 * v109 + 88) == v105 )
              break;
          }
          v107 += 16;
          if ( v108 == v107 )
            goto LABEL_151;
        }
        sub_81980((__int64)&v169, (const char *)&unk_418793);
        v111 = s1;
        if ( *((_QWORD *)&v169 + 1) )
          v111 = (const char *)v169;
        v112 = *((_QWORD *)v107 + 1);
        sub_81980((__int64)&v167, (const char *)&unk_418793);
        v113 = s1;
        if ( v168 )
          v113 = (const char *)v167;
        sub_6D0A0((__int64)"dups for k=%zu:\n%s (%zu)\n%s (%zu)\n", *v99, v113, v112, v111, v110);
        if ( v167 )
        {
          v168 = 0;
          qfree(v167);
        }
        if ( (_QWORD)v169 )
        {
          *((_QWORD *)&v169 + 1) = 0;
          qfree(v169);
        }
      }
LABEL_151:
      if ( !under_debugger )
        sub_383060(0x87Bu, *(double *)v138.m128i_i64);
LABEL_181:
      BUG();
    }
    v45 = v166;
    if ( (unsigned __int64)v166 <= 1 )
      goto LABEL_55;
    v70 = (__int64 *)dest;
    DWORD2(v169) = 0;
    v171 = (__int128 *)((char *)&v169 + 8);
    v170 = nullptr;
    v172 = (char *)&v169 + 8;
    v173 = 0;
    v148 = (char *)dest + 16 * v166;
    if ( v148 != dest )
    {
      v71 = (char *)dest;
      do
      {
        v167 = *(_QWORD *)(a1[3 * *(_QWORD *)v71 + 2] + 96LL * *((_QWORD *)v71 + 1) + 88);
        v72 = sub_2CDD40(&v169, (unsigned __int64 *)&v167);
        v73 = *(_QWORD *)v71;
        v71 += 16;
        *(_DWORD *)v72 |= 1 << v73;
      }
      while ( v148 != v71 );
      if ( v171 != (__int128 *)((char *)&v169 + 8) )
      {
        v74 = (__int64)v171;
        do
        {
          v75 = *(_DWORD *)(v74 + 40);
          v76 = *(_DWORD *)(a1[11] + 4LL * *(_QWORD *)(v74 + 32));
          v74 = std::_Rb_tree_increment();
          if ( v76 != v75 )
          {
            v77 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v77, 0x30u);
            --v173;
          }
        }
        while ( (__int128 *)v74 != (__int128 *)((char *)&v169 + 8) );
      }
      v45 = v166;
      v70 = (__int64 *)dest;
      v78 = (__int64 *)dest;
      if ( (char *)dest + 16 * (_QWORD)v166 != dest )
      {
        do
        {
          while ( 1 )
          {
            v80 = v78 + 2;
            if ( (_QWORD *)((char *)&v169 + 8) == sub_2AE200(
                                                    (__int64)&v169,
                                                    *(_QWORD *)(a1[3 * *v78 + 2] + 96 * v78[1] + 88)) )
              break;
            v45 = v166;
            v78 += 2;
            if ( v80 == &v70[2 * (_QWORD)v166] )
              goto LABEL_111;
          }
          v81 = v79 - (_QWORD)v78;
          if ( (v81 >> 4) - 2 >= 0 )
          {
            memmove(v78, v80, v81 - 16);
            v70 = (__int64 *)dest;
          }
          *(_QWORD *)&v166 = v166 - 1;
          v45 = v166;
        }
        while ( v78 != &v70[2 * (_QWORD)v166] );
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
      v45 = v166 - 1;
      v87 = *(_QWORD *)(a1[3 * v83 + 2] + 96 * v84 + 88);
      *(_QWORD *)&v166 = v166 - 1;
      if ( v86 )
      {
        v88 = 0;
        v89 = *(_DWORD *)(a1[11] + 4 * v87);
        do
        {
          v90 = -1;
          if ( (v89 & (1 << v88)) != 0 )
            v90 = v87;
          (&v187)[v88++] = (_QWORD *)v90;
        }
        while ( v88 != v86 );
      }
      if ( 16 * v45 )
      {
        do
        {
          v92 = *v85;
          v93 = a1[3 * *v85 + 2] + 96 * v85[1];
          v94 = *(_QWORD *)(v93 + 88);
          if ( (&v187)[*v85] == (_QWORD *)-1LL )
          {
            v95 = a1[11];
            (&v187)[v92] = (_QWORD *)v94;
            *(_DWORD *)(v95 + 4 * v94) &= ~(1 << v92);
            if ( !*(_DWORD *)(a1[11] + 4 * v94) )
              ++a1[14];
            *(_QWORD *)(v93 + 88) = v87;
            *(_DWORD *)(4 * v87 + a1[11]) |= 1 << *v85;
            v96 = *(_QWORD *)(v93 + 88);
            v91 = v85 + 2;
            v70 = (__int64 *)dest;
            v45 = v166;
            if ( v87 == v96 )
            {
LABEL_128:
              if ( (((char *)&v70[2 * v45] - (char *)v85) >> 4) - 2 >= 0 )
              {
                v97 = (__int64 *)memmove(v85, v91, (char *)&v70[2 * v45] - (char *)v85 - 16);
                v70 = (__int64 *)dest;
                v85 = v97;
                v45 = v166;
              }
              *(_QWORD *)&v166 = --v45;
              continue;
            }
          }
          else
          {
            v45 = v166;
            v91 = v85 + 2;
            if ( v87 == v94 )
              goto LABEL_128;
          }
          v85 = (__int64 *)v91;
        }
        while ( v85 != &v70[2 * v45] );
      }
LABEL_111:
      if ( v45 )
        continue;
      break;
    }
    sub_2AE260((void **)v170);
LABEL_55:
    v23 = (__int64 *)v190[0];
  }
  while ( v190[1] != v190[0] );
LABEL_56:
  if ( dest )
  {
    *(_QWORD *)&v166 = 0;
    qfree((__int64)dest);
  }
  sub_66C50((__int64)&v193);
  if ( v190[0] )
    operator delete(v190[0], v191 - (char *)v190[0]);
  sub_66C50((__int64)v178);
  sub_66C50((__int64)v176);
  sub_66C50((__int64)v174);
  return v195 - __readfsqword(0x28u);
}

