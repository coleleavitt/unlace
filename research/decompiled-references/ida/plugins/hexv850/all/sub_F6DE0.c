__int64 __fastcall sub_F6DE0(const __m128i *a1, __int64 a2)
{
  _QWORD *exception; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v6; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // rax
  __m128i *v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned int v18; // esi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r13
  int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r13
  int v36; // eax
  int *v37; // r12
  int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r8
  int v42; // edx
  _DWORD *v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // rcx
  int v49; // r14d
  int v50; // ebp
  __int64 v51; // rax
  int v52; // r12d
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // r12
  __int64 v55; // rbp
  __int64 v56; // r12
  __int64 v57; // rbp
  unsigned __int64 v58; // rax
  __int64 *v59; // r13
  int v60; // r13d
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // r13
  __int64 v66; // rax
  int v67; // eax
  int v68; // r13d
  __int64 v69; // rdi
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rcx
  char v75; // al
  __int64 v76; // rax
  bool v77; // zf
  __int64 v78; // rsi
  __int32 v79; // r8d
  __int64 v80; // rdx
  __int32 v81; // r12d
  int v82; // r8d
  int v83; // ecx
  char v84; // al
  __int64 v85; // r12
  __int64 v86; // r8
  _DWORD *v87; // rcx
  _DWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  int **v91; // rax
  __int64 v92; // rdx
  _DWORD *v93; // rax
  __int64 v94; // rsi
  _DWORD *v95; // rdx
  __m128i *v96; // rbp
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  __int64 v99; // rcx
  int *v100; // rsi
  _QWORD *v101; // r13
  __int64 v102; // rdx
  int *v103; // rax
  int *v104; // r12
  __int64 v105; // r8
  __int64 *v106; // r14
  unsigned __int64 v107; // rsi
  int v108; // r12d
  unsigned __int64 v109; // rbp
  int v110; // r12d
  unsigned __int64 v111; // r13
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned __int64 *v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rbp
  unsigned __int64 *v117; // rdx
  __int64 v118; // rax
  __m128i v119; // xmm0
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 *v122; // r12
  __int64 v123; // rax
  __int64 *v124; // rdi
  __int64 *v125; // rdi
  int v126; // r13d
  __int64 v127; // r12
  _QWORD *v128; // r14
  int v129; // eax
  __int64 v130; // rdx
  _QWORD *v131; // r12
  __int64 v132; // rdi
  char v133; // al
  unsigned __int64 v134; // rdx
  int v135; // ebp
  __int64 v136; // rax
  __int64 v137; // rax
  unsigned int v138; // r8d
  __int64 v139; // rsi
  unsigned int *v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // r8
  char v143; // al
  __int64 v144; // rdx
  unsigned __int64 *v145; // rax
  __int64 v146; // rax
  char v147; // cl
  __int64 v148; // rax
  __m128i v149; // xmm0
  char v150; // al
  unsigned int v151; // eax
  _QWORD *v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rax
  int v155; // esi
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rax
  __m128i v160; // xmm0
  char v161; // al
  int v162; // eax
  unsigned int v163; // eax
  int *v164; // r13
  int *i; // rbp
  int v166; // r14d
  int *v167; // r13
  int *j; // rbp
  int v169; // r14d
  int v170; // eax
  __int64 v171; // rax
  __int64 v172; // rax
  int v173; // eax
  __int32 v174; // eax
  __int64 v175; // rax
  __int32 v176; // r12d
  __int64 v177; // rsi
  __int64 v178; // rdx
  char v179; // al
  int v180; // eax
  __int64 v181; // rax
  char v182; // al
  __int64 v183; // rcx
  __int32 v184; // eax
  int v185; // eax
  int v186; // eax
  __int32 v187; // eax
  int v188; // eax
  int v189; // eax
  __int32 v190; // eax
  int v191; // eax
  __m128i v192; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 *v193; // [rsp+10h] [rbp-E8h]
  __int64 v194; // [rsp+18h] [rbp-E0h]
  __int64 *v195; // [rsp+20h] [rbp-D8h]
  int v196; // [rsp+2Ch] [rbp-CCh]
  __int64 v197; // [rsp+30h] [rbp-C8h]
  char v198; // [rsp+3Bh] [rbp-BDh]
  int v199; // [rsp+3Ch] [rbp-BCh]
  __int64 v200; // [rsp+40h] [rbp-B8h]
  __int64 v201; // [rsp+48h] [rbp-B0h]
  __int64 v202; // [rsp+50h] [rbp-A8h]
  int v203; // [rsp+58h] [rbp-A0h]
  unsigned int v204; // [rsp+5Ch] [rbp-9Ch]
  int v205; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v206; // [rsp+64h] [rbp-94h] BYREF
  unsigned __int64 v207; // [rsp+68h] [rbp-90h] BYREF
  __int64 v208[2]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v209; // [rsp+80h] [rbp-78h] BYREF
  __int64 v210; // [rsp+88h] [rbp-70h]
  _BYTE v211[24]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v212; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v213; // [rsp+B8h] [rbp-40h]

  v213 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v6 = a1[9].m128i_i64[0];
  v8 = a1[2].m128i_i64[0];
  v197 = *(_QWORD *)(v6 + 112);
  if ( (unsigned __int8)sub_11B9A0(v8, 0) )
    return 0;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_DWORD *)(v9 + 20);
  v11 = v10;
  v199 = v10;
  LOBYTE(v11) = v10 & 0x7F;
  if ( v11 == 96 )
    return 0;
  if ( v10 == 80 )
    return 0;
  if ( *(_DWORD *)(v9 + 284) )
    return 0;
  v196 = *(_DWORD *)(v9 + 280) & 4;
  if ( v196 )
  {
    if ( (v10 & 0xFFFFFFF0) != 0xD0 && (v10 & 0xFFFFFFF0) != 0x40 )
      return 0;
  }
  if ( (unsigned __int8)sub_2B2850(a1->m128i_i64[1], *(_QWORD *)(a1[2].m128i_i64[0] + 24)) )
    return 0;
  v12 = *(_QWORD *)v9;
  v198 = 0;
  if ( v12 != -1 )
  {
    if ( (v199 & 0xFFFFFFF0) != 0x40 && (v199 & 0xFFFFFFF0) != 0xD0 )
    {
      v13 = (__m128i *)a1[3].m128i_i64[0];
      v14 = *(_QWORD *)(v9 + 32);
      v209 = v12;
      *(_QWORD *)v211 = &v209;
      v15 = sub_F6B00(v13, &v209, (__int64 **)v211);
      v16 = *(_DWORD *)(v15 + 56);
      v17 = v15 + 24;
      if ( (int)v14 >= v16 )
      {
        if ( v16 != -1 && !v13[1].m128i_i8[0] )
          goto LABEL_17;
      }
      else
      {
        v13[1].m128i_i8[0] = 1;
      }
      *(_DWORD *)(v17 + 32) = v14;
LABEL_17:
      v198 = 1;
      goto LABEL_18;
    }
    v198 = 0;
  }
LABEL_18:
  v18 = *(_DWORD *)(v9 + 20);
  if ( a1[8].m128i_i32[2] != v18 )
    sub_CC450((__int64)a1[4].m128i_i64, v18);
  v19 = a1[5].m128i_u64[0];
  v20 = a1[16].m128i_u64[0];
  *(_DWORD *)v211 = -1;
  if ( v19 >= v20 )
  {
    if ( v20 >= v19 )
      goto LABEL_29;
    v21 = a1[15].m128i_u64[1];
    v22 = a1[16].m128i_u64[1];
    if ( (unsigned __int64)v211 < v21 || (unsigned __int64)v211 >= v21 + 4 * v22 )
    {
      if ( v22 >= v19
        || (v172 = qvector_reserve(), a1[15].m128i_i64[1] = v172, v21 = v172, v20 = a1[16].m128i_u64[0], v20 < v19) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v21 + 4 * v20++) = -1;
          if ( v19 == v20 )
            break;
          v21 = a1[15].m128i_u64[1];
        }
      }
    }
    else if ( v22 >= v19
           || (v175 = qvector_reserve(), a1[15].m128i_i64[1] = v175, v21 = v175, v20 = a1[16].m128i_u64[0], v20 < v19) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v21 + 4 * v20++) = -1;
        if ( v19 == v20 )
          break;
        v21 = a1[15].m128i_u64[1];
      }
    }
  }
  a1[16].m128i_i64[0] = v19;
LABEL_29:
  v23 = a1[6].m128i_u64[1];
  v24 = a1[17].m128i_u64[1];
  *(_DWORD *)v211 = -1;
  if ( v23 >= v24 )
  {
    if ( v24 >= v23 )
      goto LABEL_38;
    v25 = a1[17].m128i_u64[0];
    v26 = a1[18].m128i_u64[0];
    if ( (unsigned __int64)v211 < v25 || (unsigned __int64)v211 >= v25 + 4 * v26 )
    {
      if ( v26 >= v23
        || (v171 = qvector_reserve(), a1[17].m128i_i64[0] = v171, v25 = v171, v24 = a1[17].m128i_u64[1], v24 < v23) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v25 + 4 * v24++) = -1;
          if ( v23 == v24 )
            break;
          v25 = a1[17].m128i_u64[0];
        }
      }
    }
    else if ( v26 >= v23
           || (v181 = qvector_reserve(), a1[17].m128i_i64[0] = v181, v25 = v181, v24 = a1[17].m128i_u64[1], v24 < v23) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v25 + 4 * v24++) = -1;
        if ( v23 == v24 )
          break;
        v25 = a1[17].m128i_u64[0];
      }
    }
  }
  a1[17].m128i_i64[1] = v23;
LABEL_38:
  v27 = a1[20].m128i_u64[0];
  a1[13].m128i_i64[0] = 0;
  v192.m128i_i64[1] = (__int64)a1[20].m128i_i64;
  if ( !v27 )
  {
LABEL_214:
    a1[20].m128i_i64[1] = 0;
    goto LABEL_41;
  }
  v28 = *(_QWORD *)v27;
  if ( a1[20].m128i_i64[1] )
  {
    v122 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
    v123 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v123 & 2) != 0 )
    {
LABEL_213:
      *(_QWORD *)v27 = v28 & 3 | v27 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                (__m128i)a1[20].m128i_u64[0],
                                                (__m128i)a1[20].m128i_u64[0]);
      *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
      goto LABEL_214;
    }
    v124 = (__int64 *)v122[1];
    if ( (*(_BYTE *)v124 & 2) != 0 )
    {
      v125 = (__int64 *)v122[2];
      if ( (*(_BYTE *)v125 & 2) != 0 )
        goto LABEL_319;
    }
    else
    {
      sub_F0B10(v124);
      v125 = (__int64 *)v122[2];
      if ( (*(_BYTE *)v125 & 2) != 0 )
        goto LABEL_209;
    }
    sub_F0B10(v125);
LABEL_209:
    v123 = *v122;
    if ( (*v122 & 2) != 0 )
    {
LABEL_210:
      if ( v28 > 3 )
        qfree();
      v27 = a1[20].m128i_u64[0];
      v28 = *(_QWORD *)v27;
      goto LABEL_213;
    }
LABEL_319:
    *v122 = v123 | 2;
    goto LABEL_210;
  }
  *(_QWORD *)v27 = *(_QWORD *)v27 & 3LL | v27 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1[20].m128i_u64[0], (__m128i)a1[20].m128i_u64[0]);
  *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
  *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
LABEL_41:
  if ( a1[18].m128i_i64[1] )
  {
    a1[19].m128i_i64[0] = 0;
    qfree();
    a1[18].m128i_i64[1] = 0;
    a1[19].m128i_i64[1] = 0;
  }
  v29 = *(_QWORD *)(v9 + 32);
  LODWORD(v30) = v29;
  if ( !v29 )
    goto LABEL_63;
  v31 = 0;
  v32 = 0;
LABEL_45:
  v33 = 80 * v32;
  v34 = v33 + *(_QWORD *)(v9 + 24);
  v35 = v33;
  v36 = *(_DWORD *)(v34 + 56);
  v37 = (int *)(v34 + 56);
  if ( v36 != 2 )
  {
    if ( v36 != 1 )
      goto LABEL_47;
LABEL_194:
    v192.m128i_i64[0] = *((_QWORD *)v37 + 1);
    sub_5F710(&a1[12].m128i_i64[1], v31);
    v114 = (unsigned __int64 *)a1[20].m128i_i64[0];
    if ( !v114 )
    {
      v159 = qalloc();
      v160 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v159, (__m128i)(unsigned __int64)v159);
      if ( !v159 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v159 + 32) = 0;
      *(_OWORD *)(v159 + 16) = 0;
      *(__m128i *)(v159 + 8) = v160;
      *(_QWORD *)v159 = v159 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[20].m128i_i64[0] = v159;
      *(_QWORD *)v159 = v159 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v159 & 3LL;
      *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                (__m128i)a1[20].m128i_u64[0],
                                                (__m128i)a1[20].m128i_u64[0]);
      *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
      v114 = (unsigned __int64 *)a1[20].m128i_i64[0];
LABEL_196:
      v193 = v114;
      v115 = qalloc();
      v116 = v115;
      if ( !v115 )
      {
        v3 = __cxa_allocate_exception(8u);
        *v3 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v3,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v117 = v193;
      *(_QWORD *)(v115 + 32) = 0;
      *(_OWORD *)v115 = 0;
      *(_OWORD *)(v115 + 16) = 0;
      v118 = v192.m128i_i64[0];
      *(_QWORD *)v116 = (unsigned __int64)v117 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v116 + 24) = v118;
      v119 = _mm_loadl_epi64(a1 + 20);
      *(_QWORD *)v116 = (unsigned __int64)v117 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v116 + 8) = _mm_unpacklo_epi64(v119, v119);
      if ( v117 != (unsigned __int64 *)a1[20].m128i_i64[0] )
      {
        v117[1] = v116;
        v120 = a1[20].m128i_i64[0];
        if ( v117 == *(unsigned __int64 **)(v120 + 8) )
          goto LABEL_278;
        goto LABEL_199;
      }
      goto LABEL_313;
    }
    if ( !a1[20].m128i_i64[1] )
      goto LABEL_196;
    if ( (*(_BYTE *)(*v114 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
      LOBYTE(v121) = 1;
LABEL_274:
      LOBYTE(v194) = v121;
      v193 = v114;
      v146 = qalloc();
      v116 = v146;
      if ( !v146 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v117 = v193;
      v147 = v194;
      *(_QWORD *)(v146 + 32) = 0;
      *(_OWORD *)v146 = 0;
      *(_OWORD *)(v146 + 16) = 0;
      v148 = v192.m128i_i64[0];
      *(_QWORD *)v116 = (unsigned __int64)v117 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v116 + 24) = v148;
      v149 = _mm_loadl_epi64(a1 + 20);
      *(_QWORD *)v116 = (unsigned __int64)v117 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v116 + 8) = _mm_unpacklo_epi64(v149, v149);
      if ( (unsigned __int64 *)a1[20].m128i_i64[0] != v117 )
      {
        if ( v147 )
        {
          v117[1] = v116;
          v120 = a1[20].m128i_i64[0];
          if ( *(unsigned __int64 **)(v120 + 8) == v117 )
LABEL_278:
            *(_QWORD *)(v120 + 8) = v116;
        }
        else
        {
          v117[2] = v116;
          v183 = a1[20].m128i_i64[0];
          if ( *(unsigned __int64 **)(v183 + 16) == v117 )
            *(_QWORD *)(v183 + 16) = v116;
        }
LABEL_199:
        sub_D3220((_QWORD *)v192.m128i_i64[1], (__int64 *)v116);
LABEL_200:
        ++a1[20].m128i_i64[1];
        goto LABEL_201;
      }
LABEL_313:
      *v117 = v116 & 0xFFFFFFFFFFFFFFFCLL | *v117 & 3;
      *(_QWORD *)(a1[20].m128i_i64[0] + 8) = v116;
      *(_QWORD *)(a1[20].m128i_i64[0] + 16) = v116;
      v121 = *(_QWORD *)v116 & 2LL;
      *(_QWORD *)v116 &= ~1uLL;
      v114 = (unsigned __int64 *)(v121 | a1[20].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
      *(_QWORD *)v116 = v114;
      goto LABEL_200;
    }
    v114 = (unsigned __int64 *)(*v114 & 0xFFFFFFFFFFFFFFFCLL);
    v121 = 1;
    while ( 1 )
    {
      if ( v192.m128i_i64[0] >= (__int64)v114[3] )
      {
        if ( v192.m128i_i64[0] <= (__int64)v114[3] )
        {
          if ( !v114 )
            goto LABEL_274;
          v116 = (__int64)v114;
LABEL_201:
          *(_DWORD *)(v116 + 32) = v31;
          *(__m128i *)v211 = _mm_unpacklo_epi64(
                               _mm_loadl_epi64(&v192),
                               (__m128i)(unsigned __int64)*(int *)(*(_QWORD *)(v9 + 24) + v35 + 4));
          sub_3112F0(&a1[18].m128i_u64[1], v211, v114, v121, v112, v113);
LABEL_61:
          if ( ((*v37 - 2) & 0xFFFFFFFD) == 0 )
LABEL_156:
            sub_5F710(&a1[13].m128i_i64[1], v31);
          v29 = *(_QWORD *)(v9 + 32);
          v32 = ++v31;
          LODWORD(v30) = v29;
          if ( v31 >= v29 )
            goto LABEL_63;
          goto LABEL_45;
        }
        v145 = (unsigned __int64 *)v114[2];
        v121 = 0;
      }
      else
      {
        v145 = (unsigned __int64 *)v114[1];
        v121 = 1;
      }
      if ( (*(_BYTE *)v145 & 2) != 0 )
        goto LABEL_274;
      v114 = v145;
    }
  }
  v91 = *(int ***)(v34 + 64);
  if ( v91[1] != (int *)&byte_1 )
    goto LABEL_152;
  v37 = *v91;
  v36 = **v91;
  if ( v36 == 1 )
    goto LABEL_194;
  if ( v36 != 2 )
  {
LABEL_47:
    if ( (unsigned int)(v36 - 3) <= 1 )
      goto LABEL_48;
    goto LABEL_159;
  }
LABEL_152:
  v92 = *((_QWORD *)v37 + 1);
  v93 = *(_DWORD **)v92;
  v94 = *(_QWORD *)v92 + 24LL * *(_QWORD *)(v92 + 8);
  if ( *(_QWORD *)v92 == v94 )
  {
LABEL_159:
    if ( !under_debugger )
      sub_37CFE0(52134);
LABEL_469:
    BUG();
  }
  v95 = *(_DWORD **)v92;
  do
  {
    if ( *v95 == 1 )
      goto LABEL_156;
    v95 += 6;
  }
  while ( (_DWORD *)v94 != v95 );
  while ( (unsigned int)(*v93 - 3) > 1 )
  {
    v93 += 6;
    if ( (_DWORD *)v94 == v93 )
      goto LABEL_159;
  }
LABEL_48:
  memset(v211, 0, sizeof(v211));
  if ( (unsigned __int8)sub_CDFE0((__int64)a1[4].m128i_i64, (__int64 *)v211, v37, *(unsigned int *)(v34 + 4), 1) )
  {
    v38 = 0;
    v39 = 0;
    if ( !*(_QWORD *)&v211[8] )
    {
LABEL_59:
      if ( *(_QWORD *)v211 )
      {
        *(_QWORD *)&v211[8] = 0;
        qfree();
      }
      goto LABEL_61;
    }
    while ( 2 )
    {
      v40 = *(_QWORD *)v211;
      v41 = a1[4].m128i_i64[1];
      v42 = *(_DWORD *)(*(_QWORD *)v211 + 4 * v39);
      v43 = (_DWORD *)(v41 + 4 * a1[5].m128i_i64[0]);
      if ( (_DWORD *)v41 == v43 )
        goto LABEL_141;
      v44 = (_DWORD *)a1[4].m128i_i64[1];
      while ( v42 != *v44 )
      {
        if ( v43 == ++v44 )
          goto LABEL_141;
      }
      if ( v43 == v44 || (v45 = ((__int64)v44 - v41) >> 2, v46 = (int)v45, (_DWORD)v45 == -1) )
      {
LABEL_141:
        v86 = a1[6].m128i_i64[0];
        v87 = (_DWORD *)(v86 + 4 * a1[6].m128i_i64[1]);
        if ( (_DWORD *)v86 == v87 )
          goto LABEL_191;
        v88 = (_DWORD *)a1[6].m128i_i64[0];
        while ( v42 != *v88 )
        {
          if ( v87 == ++v88 )
            goto LABEL_191;
        }
        if ( v87 == v88 )
          goto LABEL_191;
        v89 = ((__int64)v88 - v86) >> 2;
        v46 = (int)v89;
        if ( (_DWORD)v89 == -1 )
          goto LABEL_191;
        v47 = a1[21].m128i_i32[0] + 1;
        if ( a1[4].m128i_i32[0] == 3 )
          goto LABEL_161;
        a1[21].m128i_i32[0] = v47;
        v90 = 4LL * (int)v89;
      }
      else
      {
        v47 = a1[21].m128i_i32[0] + 1;
        if ( a1[4].m128i_i32[0] != 3 )
        {
          v48 = a1[15].m128i_i64[1];
          a1[21].m128i_i32[0] = v47;
          *(_DWORD *)(v48 + 4LL * (int)v45) = v31;
          goto LABEL_58;
        }
LABEL_161:
        a1[21].m128i_i32[0] = v47;
        v90 = 4 * v46;
        *(_DWORD *)(a1[15].m128i_i64[1] + 4 * v46) = v31;
      }
      *(_DWORD *)(a1[17].m128i_i64[0] + v90) = v31;
LABEL_58:
      v39 = ++v38;
      if ( (unsigned __int64)v38 >= *(_QWORD *)&v211[8] )
        goto LABEL_59;
      continue;
    }
  }
  v40 = *(_QWORD *)v211;
LABEL_191:
  if ( v40 )
  {
    *(_QWORD *)&v211[8] = 0;
    qfree();
  }
  v29 = *(_QWORD *)(v9 + 32);
  LODWORD(v30) = v29;
LABEL_63:
  LOBYTE(v193) = (v199 & 0xFFFFFFF0) == 64 || (v199 & 0xFFFFFFF0) == 208;
  if ( !(_BYTE)v193 )
  {
    v49 = 0;
LABEL_65:
    if ( !v198 && (*(_BYTE *)(v9 + 281) & 1) == 0 )
    {
      v50 = v29 - 1;
      v192.m128i_i64[0] = (__int64)v211;
      if ( v49 > (int)v29 - 1 )
      {
        v50 = v29;
        v30 = (int)v29;
      }
      else
      {
        while ( 1 )
        {
          v30 = v50;
          v51 = *(_QWORD *)(v9 + 24) + 80LL * v50;
          v210 = 0;
          v209 = -1;
          if ( *(_BYTE *)v51 == 1 )
          {
            v134 = *(int *)(v51 + 8);
            LOBYTE(v210) = 1;
            v209 = v134;
            HIDWORD(v210) = *(_DWORD *)(v51 + 4);
          }
          else
          {
            if ( *(_BYTE *)v51 != 5 )
              goto LABEL_70;
            v130 = *(_QWORD *)(v51 + 8);
            LOBYTE(v210) = 5;
            v209 = *(_QWORD *)(v130 + 8);
            HIDWORD(v210) = *(_DWORD *)(v51 + 4);
          }
          sub_329AB0(v192.m128i_i64[0], &v209, a1->m128i_i64[1]);
          v131 = (_QWORD *)a1[3].m128i_i64[1];
          if ( !(unsigned __int8)sub_5FDA0(v192.m128i_i64[0], v131) )
            break;
          v133 = sub_312680(v131 + 2, &v211[16]);
          v132 = *(_QWORD *)&v211[16];
          if ( !v133 )
            goto LABEL_231;
          if ( *(_QWORD *)&v211[16] )
          {
            v212 = 0;
            qfree();
          }
          qfree();
          if ( v49 > v50 - 1 )
            goto LABEL_71;
          --v50;
        }
        v132 = *(_QWORD *)&v211[16];
LABEL_231:
        if ( v132 )
        {
          v212 = 0;
          qfree();
        }
        qfree();
LABEL_70:
        v30 = ++v50;
LABEL_71:
        v29 = *(_QWORD *)(v9 + 32);
      }
      if ( v29 != v30 )
      {
        v52 = v29 - v50;
        sub_7D880((__int64 *)(v9 + 24), v30);
        if ( v50 < *(_DWORD *)(v9 + 8) )
          *(_DWORD *)(v9 + 8) = v50;
        a1[21].m128i_i32[2] += v52;
        v30 = *(_QWORD *)(v9 + 32);
      }
    }
    goto LABEL_76;
  }
  if ( !v198 || (v49 = 0, v196) )
  {
    v49 = *(_DWORD *)(v9 + 8);
    goto LABEL_65;
  }
LABEL_76:
  v208[0] = 0;
  v208[1] = 0;
  v195 = v208;
  sub_5F400(v208, 0, v30);
  v53 = *(_QWORD *)(v9 + 32);
  v54 = v49;
  if ( v49 >= v53 )
    goto LABEL_172;
  v192.m128i_i64[0] = (__int64)v211;
  while ( 1 )
  {
    v55 = *(_QWORD *)(v9 + 24);
    v210 = 0;
    v209 = -1;
    v56 = 80 * v54;
    v57 = v56 + v55;
    if ( *(_BYTE *)v57 == 1 )
    {
      v58 = *(int *)(v57 + 8);
      LOBYTE(v210) = 1;
      v209 = v58;
      HIDWORD(v210) = *(_DWORD *)(v57 + 4);
    }
    else
    {
      if ( *(_BYTE *)v57 != 5 )
        goto LABEL_79;
      v66 = *(_QWORD *)(v57 + 8);
      LOBYTE(v210) = 5;
      v209 = *(_QWORD *)(v66 + 8);
      HIDWORD(v210) = *(_DWORD *)(v57 + 4);
    }
    v192.m128i_i8[8] = *(_BYTE *)v57 & 0xFB;
    if ( v192.m128i_i8[8] != 1 )
    {
      if ( !under_debugger )
        sub_37CFE0(52030);
      goto LABEL_469;
    }
    if ( (_BYTE)v193 && *(_DWORD *)(v9 + 8) > v49 )
      goto LABEL_79;
    sub_329AB0(v192.m128i_i64[0], &v209, a1->m128i_i64[1]);
    v59 = (__int64 *)a1[3].m128i_i64[1];
    sub_5FC80((__int64 *)v192.m128i_i64[0], v59);
    sub_312800(&v211[16], v59 + 2);
    if ( !(unsigned __int8)sub_5FE00(v192.m128i_i64[0]) || v212 )
    {
      if ( (unsigned __int8)sub_5FE00(v192.m128i_i64[0]) )
      {
        v61 = a1->m128i_i64[1];
        v192.m128i_i8[8] = 5;
        v62 = *(_QWORD *)(v61 + 1496);
        v63 = *(_QWORD *)(v61 + 1440);
        v64 = *(_QWORD *)(*(_QWORD *)(v62 + 24) + 16LL);
        v65 = v64 & (**(_QWORD **)&v211[16] - v63);
        v194 = v64
             & (*(_QWORD *)(*(_QWORD *)&v211[16] + 16 * v212 - 8)
              + *(_QWORD *)(*(_QWORD *)&v211[16] + 16 * v212 - 16)
              - v63);
      }
      else
      {
        LODWORD(v65) = sub_5FEE0(v192.m128i_i64[0], 0);
        v194 = (int)(sub_60180(v192.m128i_i64[0]) + 1);
        v62 = *(_QWORD *)(a1->m128i_i64[1] + 1496);
      }
      if ( (unsigned __int8)sub_118090(v57, v62, 0) )
      {
        if ( (_BYTE)v210 != v192.m128i_i8[8] )
          sub_F0740();
        v60 = v209 + HIDWORD(v210) - v194;
      }
      else
      {
        if ( (_BYTE)v210 != v192.m128i_i8[8] )
          sub_F0740();
        v60 = v65 - v209;
      }
    }
    else
    {
      v60 = *(_DWORD *)(v57 + 4);
    }
    if ( *(_QWORD *)&v211[16] )
    {
      v212 = 0;
      qfree();
    }
    qfree();
    if ( v60 < 0 )
    {
      if ( !under_debugger )
        sub_37CFE0(52031);
      goto LABEL_469;
    }
    if ( *(_DWORD *)(v57 + 4) == v60 )
      goto LABEL_79;
    if ( !v60 )
      break;
    if ( (get_tinfo_property() & 0x2F) == 0xD
      || (get_tinfo_property() & 0xF) == 9
      || (*(_BYTE *)(v9 + 281) & 1) != 0
      && *(_DWORD *)(v57 + 4) > *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL) )
    {
      goto LABEL_79;
    }
    v67 = round_up_power2();
    v68 = v67;
    if ( *(_DWORD *)(v57 + 4) <= v67 )
      goto LABEL_79;
    v69 = (unsigned int)v67;
    v70 = *(_QWORD *)(a1->m128i_i64[1] + 1504);
    LODWORD(v194) = a1[8].m128i_i32[2];
    v192.m128i_i32[2] = *(_DWORD *)(v70 + 80);
    v71 = round_down_power2();
    v73 = (unsigned int)v194;
    v74 = (unsigned int)v71;
    if ( v71 > 1 )
    {
      while ( 1 )
      {
        v72 = (unsigned int)(v68 >> 31);
        LODWORD(v72) = v68 % (int)v74;
        if ( !(v68 % (int)v74) )
          break;
        v74 = (unsigned int)((int)v74 >> 1);
        if ( (_DWORD)v74 == 1 )
          goto LABEL_120;
      }
    }
    if ( ((unsigned int)v74 & ((_DWORD)v74 - 1)) != 0 )
      sub_F0830(v69, 2, v72, v74, (unsigned int)v194);
LABEL_120:
    LODWORD(v194) = 2 * v192.m128i_i32[2];
    if ( 2 * v192.m128i_i32[2] >= (int)v74 )
    {
      if ( v192.m128i_i32[2] <= (int)v74 )
      {
        if ( (unsigned int)v73 <= 0x10 )
          goto LABEL_336;
        goto LABEL_298;
      }
      if ( (unsigned int)v73 > 0x10 )
        goto LABEL_123;
      goto LABEL_296;
    }
    if ( (unsigned int)v73 > 0x10 )
    {
      if ( (_DWORD)v73 == 176 || (_DWORD)v73 == 256 )
      {
        v74 = (unsigned int)v194;
        if ( v192.m128i_i32[2] <= (int)v194 )
          v74 = v192.m128i_u32[2];
        goto LABEL_127;
      }
      goto LABEL_292;
    }
    LODWORD(v201) = v74;
    LODWORD(v200) = v73;
    v170 = getinf();
    if ( v170 != 176 && v170 != 256 )
    {
      LODWORD(v73) = v200;
      LODWORD(v74) = v201;
LABEL_292:
      v69 = 67;
      LODWORD(v201) = v74;
      LODWORD(v200) = v73;
      v150 = getinf_flag();
      v74 = (unsigned int)v201;
      if ( v150 )
        goto LABEL_127;
      LODWORD(v74) = v194;
      if ( v192.m128i_i32[2] <= (int)v194 )
      {
        if ( (unsigned int)v200 > 0x10 )
        {
          LODWORD(v74) = v194;
LABEL_125:
          v69 = 67;
          LODWORD(v200) = v74;
          v75 = getinf_flag();
          v74 = (unsigned int)v200;
          if ( v75 )
            goto LABEL_127;
LABEL_126:
          v74 = v192.m128i_u32[2];
          goto LABEL_127;
        }
LABEL_335:
        LODWORD(v74) = v194;
LABEL_336:
        v69 = 99;
        LODWORD(v200) = v74;
        v163 = getinf();
        LODWORD(v74) = v200;
        v73 = v163;
LABEL_298:
        if ( (_DWORD)v73 != 176 && (_DWORD)v73 != 256 )
          goto LABEL_125;
        goto LABEL_126;
      }
      if ( (unsigned int)v200 > 0x10 )
        goto LABEL_125;
      goto LABEL_295;
    }
    if ( v192.m128i_i32[2] <= (int)v194 )
      goto LABEL_335;
LABEL_295:
    LODWORD(v74) = v194;
LABEL_296:
    v69 = 99;
    LODWORD(v200) = v74;
    v151 = getinf();
    v74 = (unsigned int)v200;
    v73 = v151;
LABEL_123:
    if ( (_DWORD)v73 != 176 && (_DWORD)v73 != 256 )
      goto LABEL_125;
LABEL_127:
    v76 = *(_QWORD *)(v9 + 24);
    v77 = *(_DWORD *)(v76 + v56 + 56) == 1;
    v201 = v76 + v56;
    if ( !v77 )
    {
      v78 = *(_QWORD *)(v76 + v56 + 24);
      LODWORD(v201) = v74;
      v79 = a1[8].m128i_i32[2];
      v205 = 0;
      LODWORD(v200) = v79;
      get_tinfo_size();
      v81 = v205;
      v82 = v200;
      v83 = v201;
      if ( (v205 & (v205 - 1)) != 0 )
        sub_F0830(&v205, v78, v80, (unsigned int)v201, (unsigned int)v200);
      if ( (int)v194 >= v205 )
      {
        if ( v192.m128i_i32[2] > v205 )
        {
          if ( (unsigned int)v200 > 0x10 )
          {
LABEL_132:
            if ( v82 != 176 && v82 != 256 )
            {
LABEL_134:
              LODWORD(v194) = v83;
              v84 = getinf_flag();
              v83 = v194;
              if ( !v84 )
                goto LABEL_136;
            }
LABEL_135:
            v192.m128i_i32[2] = v81;
            goto LABEL_136;
          }
LABEL_327:
          LODWORD(v194) = v83;
          v162 = getinf();
          v83 = v194;
          v82 = v162;
          goto LABEL_132;
        }
        if ( (unsigned int)v200 > 0x10 )
        {
LABEL_329:
          if ( v82 == 176 || v82 == 256 )
            goto LABEL_136;
          goto LABEL_331;
        }
LABEL_361:
        LODWORD(v194) = v83;
        v173 = getinf();
        v83 = v194;
        v82 = v173;
        goto LABEL_329;
      }
      if ( (unsigned int)v200 <= 0x10 )
      {
        v180 = getinf();
        v83 = v201;
        if ( v180 == 176 || v180 == 256 )
        {
          if ( v192.m128i_i32[2] > (int)v194 )
          {
LABEL_326:
            v81 = v194;
            goto LABEL_327;
          }
LABEL_360:
          v81 = v194;
          goto LABEL_361;
        }
        v82 = v200;
      }
      else if ( (_DWORD)v200 == 256 || (_DWORD)v200 == 176 )
      {
        v174 = v194;
        if ( v192.m128i_i32[2] <= (int)v194 )
          v174 = v192.m128i_i32[2];
        v192.m128i_i32[2] = v174;
LABEL_136:
        if ( v83 == v192.m128i_i32[2] )
          goto LABEL_137;
        goto LABEL_79;
      }
      LODWORD(v201) = v83;
      LODWORD(v200) = v82;
      v161 = getinf_flag();
      v83 = v201;
      if ( v161 )
        goto LABEL_135;
      v81 = v194;
      if ( v192.m128i_i32[2] > (int)v194 )
      {
        if ( (unsigned int)v200 > 0x10 )
          goto LABEL_134;
        goto LABEL_326;
      }
      if ( (unsigned int)v200 > 0x10 )
      {
        v81 = v194;
LABEL_331:
        LODWORD(v194) = v83;
        if ( !(unsigned __int8)getinf_flag() )
          v81 = v192.m128i_i32[2];
        v83 = v194;
        v192.m128i_i32[2] = v81;
        goto LABEL_136;
      }
      goto LABEL_360;
    }
    if ( !v49 || (v136 = 80LL * (v49 - 1) + v76, *(_DWORD *)(v136 + 56) != 1) )
    {
LABEL_248:
      v203 = v49 + 1;
      v54 = v49 + 1;
      if ( v54 == *(_QWORD *)(v9 + 32) )
        goto LABEL_137;
      v137 = *(_QWORD *)(v9 + 24) + 80LL * (v49 + 1);
      v77 = *(_DWORD *)(v137 + 56) == 1;
      v202 = *(_QWORD *)(v9 + 24) + 80 * v54;
      if ( !v77 )
        goto LABEL_137;
      v138 = a1[8].m128i_u32[2];
      v139 = *(_QWORD *)(v137 + 24);
      v140 = &v206;
      v206 = 0;
      v204 = v138;
      get_tinfo_size();
      v142 = v204;
      LODWORD(v200) = v206;
      if ( ((v206 - 1) & v206) != 0 )
        sub_F0830(&v206, v139, v141, v206, v204);
      if ( (int)v194 >= (int)v200 )
      {
LABEL_252:
        v139 = (unsigned int)v200;
        if ( v192.m128i_i32[2] > (int)v200 )
        {
          if ( (unsigned int)v142 > 0x10 )
          {
LABEL_254:
            if ( (_DWORD)v142 != 176 && (_DWORD)v142 != 256 )
            {
              v139 = 2;
              v140 = (unsigned int *)(&dword_40 + 3);
              v143 = getinf_flag();
              goto LABEL_257;
            }
            goto LABEL_259;
          }
LABEL_452:
          v140 = (_DWORD *)(&qword_60 + 3);
          v142 = (unsigned int)getinf();
          goto LABEL_254;
        }
        if ( (unsigned int)v142 > 0x10 )
        {
LABEL_400:
          if ( (_DWORD)v142 == 176 || (_DWORD)v142 == 256 )
            goto LABEL_258;
          v139 = 4;
          v140 = (unsigned int *)(&dword_40 + 3);
          v143 = getinf_flag();
LABEL_257:
          if ( !v143 )
LABEL_258:
            LODWORD(v200) = v192.m128i_i32[2];
LABEL_259:
          v144 = a1[8].m128i_u32[2];
          v201 = *(_QWORD *)(v201 + 64) + v68;
          if ( (((_DWORD)v200 - 1) & (unsigned int)v200) != 0 )
            sub_F0830(v140, v139, v144, (unsigned int)v200, v142);
          if ( (int)v194 >= (int)v200 )
          {
LABEL_261:
            if ( v192.m128i_i32[2] > (int)v200 )
            {
              if ( (unsigned int)v144 > 0x10 )
              {
LABEL_263:
                if ( (_DWORD)v144 == 176 || (_DWORD)v144 == 256 || (unsigned __int8)getinf_flag() )
                  goto LABEL_266;
                goto LABEL_267;
              }
LABEL_421:
              LODWORD(v144) = getinf();
              goto LABEL_263;
            }
            if ( (unsigned int)v144 > 0x10 )
            {
LABEL_415:
              if ( (_DWORD)v144 != 176 && (_DWORD)v144 != 256 )
              {
                v77 = (unsigned __int8)getinf_flag() == 0;
                v184 = v200;
                if ( v77 )
                  v184 = v192.m128i_i32[2];
                v192.m128i_i32[2] = v184;
              }
              goto LABEL_267;
            }
LABEL_424:
            LODWORD(v144) = getinf();
            goto LABEL_415;
          }
LABEL_408:
          if ( (unsigned int)v144 <= 0x10 )
          {
            v204 = v144;
            v191 = getinf();
            if ( v191 == 176 || v191 == 256 )
            {
              if ( v192.m128i_i32[2] > (int)v194 )
              {
                LODWORD(v200) = v194;
                goto LABEL_421;
              }
              LODWORD(v200) = v194;
              goto LABEL_424;
            }
            LODWORD(v144) = v204;
          }
          else if ( (_DWORD)v144 == 256 || (_DWORD)v144 == 176 )
          {
            v190 = v194;
            if ( v192.m128i_i32[2] <= (int)v194 )
              v190 = v192.m128i_i32[2];
            v192.m128i_i32[2] = v190;
            goto LABEL_267;
          }
          v204 = v144;
          if ( !(unsigned __int8)getinf_flag() )
          {
            LODWORD(v144) = v204;
            LODWORD(v200) = v194;
            goto LABEL_261;
          }
LABEL_266:
          v192.m128i_i32[2] = v200;
LABEL_267:
          if ( *(_QWORD *)(v202 + 64) != ((v201 + v192.m128i_i32[2] - 1) & -v192.m128i_i32[2]) )
          {
            v53 = *(_QWORD *)(v9 + 32);
            v49 = v203;
            goto LABEL_80;
          }
LABEL_137:
          if ( *(_DWORD *)(v57 + 56) != 2 )
            goto LABEL_138;
          if ( v68 <= 0 || (v152 = *(_QWORD **)(v57 + 64), (v153 = v152[1]) == 0) )
          {
            if ( !under_debugger )
              sub_37CFE0(52685);
            goto LABEL_469;
          }
          v154 = *v152 + 24 * v153 - 24;
          v155 = *(unsigned __int16 *)(v154 + 16);
          if ( v68 > v155 && v68 < v155 + *(unsigned __int16 *)(v154 + 18) )
          {
            *(_WORD *)(v154 + 18) = v68 - v155;
LABEL_138:
            v85 = v197;
            sub_1226F0(v57, v197, (unsigned int)v68, 0);
            v197 = v85;
            sub_3269C0(v192.m128i_i64[0], v85, (unsigned int)v68, 0);
            copy_tinfo_t();
            clear_tinfo_t();
            sub_1BF3C0(v197, v57 + 56, 0, (unsigned int)v68, *(unsigned int *)(v9 + 20));
            ++v49;
            ++a1[21].m128i_i32[2];
            v53 = *(_QWORD *)(v9 + 32);
            v54 = v49;
            goto LABEL_80;
          }
          goto LABEL_79;
        }
LABEL_449:
        v140 = (_DWORD *)(&qword_60 + 3);
        v142 = (unsigned int)getinf();
        goto LABEL_400;
      }
      if ( v204 <= 0x10 )
      {
        v188 = getinf();
        if ( v188 == 176 || v188 == 256 )
        {
          if ( v192.m128i_i32[2] > (int)v194 )
          {
            LODWORD(v200) = v194;
            goto LABEL_452;
          }
          LODWORD(v200) = v194;
          goto LABEL_449;
        }
        LODWORD(v142) = v204;
      }
      else if ( v204 == 256 || v204 == 176 )
      {
        v139 = v192.m128i_u32[2];
        v187 = v194;
        if ( v192.m128i_i32[2] <= (int)v194 )
          v187 = v192.m128i_i32[2];
        LODWORD(v200) = v187;
        goto LABEL_259;
      }
      v140 = (unsigned int *)(&dword_40 + 3);
      v204 = v142;
      if ( !(unsigned __int8)getinf_flag() )
      {
        v142 = v204;
        LODWORD(v200) = v194;
        goto LABEL_252;
      }
      LODWORD(v144) = a1[8].m128i_i32[2];
      v201 = *(_QWORD *)(v201 + 64) + v68;
      goto LABEL_408;
    }
    v176 = v74 - 1;
    v177 = *(_QWORD *)(v136 + 64) + *(int *)(v136 + 4);
    v200 = v177;
    v178 = a1[8].m128i_u32[2];
    if ( ((unsigned int)v74 & ((_DWORD)v74 - 1)) != 0 )
      sub_F0830(v69, v177, v178, v74, v73);
    if ( (int)v194 >= (int)v74 )
      goto LABEL_369;
    if ( (unsigned int)v178 > 0x10 )
    {
      if ( (_DWORD)v178 == 256 || (_DWORD)v178 == 176 )
      {
        LODWORD(v74) = v194;
        if ( v192.m128i_i32[2] <= (int)v194 )
          LODWORD(v74) = v192.m128i_i32[2];
        v176 = v74 - 1;
        goto LABEL_376;
      }
      goto LABEL_390;
    }
    LODWORD(v202) = a1[8].m128i_i32[2];
    v203 = v74;
    v189 = getinf();
    if ( v189 != 176 && v189 != 256 )
    {
      LODWORD(v74) = v203;
      LODWORD(v178) = v202;
LABEL_390:
      LODWORD(v202) = v178;
      v203 = v74;
      v182 = getinf_flag();
      LODWORD(v74) = v203;
      if ( v182 )
        goto LABEL_376;
      LODWORD(v178) = v202;
      LODWORD(v74) = v194;
LABEL_369:
      if ( v192.m128i_i32[2] <= (int)v74 )
      {
        if ( (unsigned int)v178 <= 0x10 )
        {
LABEL_437:
          v203 = v74;
          v185 = getinf();
          LODWORD(v74) = v203;
          LODWORD(v178) = v185;
        }
        v203 = v74;
        if ( (_DWORD)v178 == 176 || (_DWORD)v178 == 256 )
        {
LABEL_375:
          LODWORD(v74) = v192.m128i_i32[2];
          v176 = v192.m128i_i32[2] - 1;
          goto LABEL_376;
        }
        v179 = getinf_flag();
LABEL_374:
        LODWORD(v74) = v203;
        v176 = v203 - 1;
        if ( v179 )
          goto LABEL_376;
        goto LABEL_375;
      }
      if ( (unsigned int)v178 > 0x10 )
        goto LABEL_371;
      goto LABEL_440;
    }
    LODWORD(v74) = v194;
    if ( v192.m128i_i32[2] <= (int)v194 )
      goto LABEL_437;
    LODWORD(v74) = v194;
LABEL_440:
    v203 = v74;
    v186 = getinf();
    LODWORD(v74) = v203;
    LODWORD(v178) = v186;
LABEL_371:
    if ( (_DWORD)v178 != 176 && (_DWORD)v178 != 256 )
    {
      v203 = v74;
      v179 = getinf_flag();
      goto LABEL_374;
    }
    v176 = v74 - 1;
LABEL_376:
    if ( *(_QWORD *)(v201 + 64) == (-(int)v74 & (unsigned __int64)(v200 + v176)) )
      goto LABEL_248;
LABEL_79:
    ++v49;
    v53 = *(_QWORD *)(v9 + 32);
    v54 = v49;
LABEL_80:
    if ( v54 >= v53 )
      goto LABEL_172;
  }
  if ( (*(_BYTE *)(v9 + 281) & 1) != 0 && *(_DWORD *)(v9 + 8) <= v49 )
    goto LABEL_79;
  if ( v196 )
  {
    v53 = *(_QWORD *)(v9 + 32);
    v54 = v49 + 1;
    if ( v54 != v53 )
    {
      ++v49;
      goto LABEL_80;
    }
  }
  if ( v198 )
  {
    v96 = (__m128i *)a1[3].m128i_i64[0];
    v97 = *(_QWORD *)v9;
    *(_QWORD *)v211 = &v207;
    v207 = v97;
    v98 = sub_F6B00(v96, &v207, (__int64 **)v192.m128i_i64[0]);
    v99 = *(_QWORD *)(v98 + 40);
    v100 = *(int **)(v98 + 32);
    v101 = (_QWORD *)(v98 + 24);
    v102 = 4 * v99;
    v103 = &v100[v99];
    if ( 4 * v99 )
    {
      v104 = v100;
      while ( v49 <= *v104 )
      {
        if ( v49 == *v104 )
          goto LABEL_170;
        if ( ++v104 == v103 )
          goto LABEL_239;
      }
      v105 = (char *)v104 - (char *)v100;
      if ( v101[3] < (unsigned __int64)(v99 + 1) )
      {
        v192.m128i_i64[1] = (char *)v104 - (char *)v100;
        v158 = qvector_reserve();
        v101[1] = v158;
        v105 = v192.m128i_i64[1];
        v104 = (int *)(v192.m128i_i64[1] + v158);
        v102 = 4LL * v101[2];
      }
      memmove(v104 + 1, v104, v102 - v105);
      *v104 = v49;
      ++v101[2];
    }
    else
    {
LABEL_239:
      if ( v101[3] < (unsigned __int64)(v99 + 1) )
      {
        v156 = qvector_reserve();
        v157 = v101[2];
        v101[1] = v156;
        v103 = (int *)(v156 + 4 * v157);
      }
      *v103 = v49;
      ++v101[2];
    }
LABEL_170:
    v96[1].m128i_i8[0] = 1;
    goto LABEL_79;
  }
  if ( *(_DWORD *)(v57 + 56) != 1 && *(_DWORD *)(v9 + 8) > v49 || sub_F2020((__int64)a1, v9, v49) )
  {
    sub_5F8C0(v195, v49);
    goto LABEL_79;
  }
  sub_5F9C0(v195, v49, *(_DWORD *)(v9 + 32) - v49);
  v53 = *(_QWORD *)(v9 + 32);
LABEL_172:
  v106 = v195;
  sub_5F940(v195, v53);
  v107 = 0;
  v108 = 0;
  if ( !(unsigned __int8)sub_5FE00(v106) )
  {
    v108 = sub_60180(v195) + 1;
    v107 = v108;
  }
  v109 = *(_QWORD *)(v9 + 32);
  if ( v107 < v109 )
  {
    v135 = v109 - v108;
    sub_7D880((__int64 *)(v9 + 24), v107);
    if ( v108 < *(_DWORD *)(v9 + 8) )
      *(_DWORD *)(v9 + 8) = v108;
    a1[21].m128i_i32[2] += v135;
  }
  if ( !v198 )
  {
    *(_OWORD *)v211 = 0u;
    if ( (*(_BYTE *)(v197 + 48) & 8) != 0
      && ((*(_DWORD *)(v9 + 20) - 112) & 0xFFFFFFDF) == 0
      && (unsigned __int8)sub_5FE00(&a1[13].m128i_i64[1]) )
    {
      v164 = (int *)a1[15].m128i_i64[1];
      for ( i = &v164[a1[16].m128i_i64[0]]; i != v164; ++v164 )
      {
        v166 = *v164;
        if ( *v164 != -1 )
        {
          if ( sub_5FEB0(v195, v166) )
          {
LABEL_398:
            *(_QWORD *)&v211[8] = 0;
            goto LABEL_178;
          }
          sub_5F710((__int64 *)v211, v166);
        }
      }
      v167 = (int *)a1[17].m128i_i64[0];
      for ( j = &v167[a1[17].m128i_i64[1]]; j != v167; ++v167 )
      {
        v169 = *v167;
        if ( *v167 != -1 )
        {
          if ( sub_5FEB0(v195, v169) )
            goto LABEL_398;
          sub_5F710((__int64 *)v211, v169);
        }
      }
      *(_DWORD *)(v9 + 20) = 48;
    }
LABEL_178:
    v110 = 0;
    if ( *(_QWORD *)(v9 + 32) )
    {
      do
      {
        if ( !sub_5FEB0(v195, v110) && sub_F2020((__int64)a1, v9, v110) )
          sub_5F710((__int64 *)v211, v110);
        ++v110;
        v111 = *(_QWORD *)(v9 + 32);
      }
      while ( v110 < v111 );
      v126 = v111 - 1;
      if ( v126 >= 0 )
      {
        v127 = 80LL * (unsigned int)v126;
        do
        {
          if ( sub_5FEB0(v211, v126) )
          {
            v128 = (_QWORD *)(v127 + *(_QWORD *)(v9 + 24));
            cleanup_argloc();
            if ( v128[4] )
            {
              v128[5] = 0;
              qfree();
            }
            clear_tinfo_t();
            sub_1181E0(v128);
            memmove(v128, v128 + 10, *(_QWORD *)(v9 + 24) + 80LL * *(_QWORD *)(v9 + 32) - (_QWORD)v128 - 80);
            v129 = *(_DWORD *)(v9 + 8);
            --*(_QWORD *)(v9 + 32);
            if ( v129 > v126 )
              *(_DWORD *)(v9 + 8) = v129 - 1;
            ++a1[21].m128i_i32[2];
          }
          --v126;
          v127 -= 80;
        }
        while ( v126 != -1 );
      }
    }
    qfree();
  }
  if ( !*(_QWORD *)(v9 + 32) && (v199 == 128 || (_BYTE)v193) )
    *(_DWORD *)(v9 + 20) = 32;
  qfree();
  return 0;
}

