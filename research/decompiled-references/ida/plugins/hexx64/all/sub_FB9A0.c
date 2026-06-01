__int64 __fastcall sub_FB9A0(const __m128i *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v8; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  int v12; // ecx
  int v13; // eax
  unsigned __int64 v14; // rax
  __m128i *v15; // r12
  __int64 v16; // r13
  _OWORD *v17; // rax
  int v18; // edx
  char *v19; // rax
  unsigned int v20; // esi
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int8 *v25; // rdi
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  const __m128i *v30; // rdi
  __int64 v31; // rdx
  unsigned __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r13
  int v37; // r14d
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r13
  int v42; // eax
  int *v43; // r12
  int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // r8
  int v48; // edx
  _DWORD *v49; // rcx
  _DWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int32 v53; // edx
  __int64 v54; // rcx
  int v55; // r14d
  int v56; // ebp
  __int64 v57; // rax
  int v58; // r12d
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // r12
  __int64 v61; // rbp
  __int64 v62; // r12
  unsigned __int64 v63; // rbp
  unsigned __int64 v64; // rax
  int v65; // ecx
  __int64 *v66; // r13
  __m128i *v67; // rdx
  __int64 v68; // rcx
  int v69; // r13d
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // r13
  __int64 v75; // rax
  int v76; // r13d
  __int64 v77; // rax
  int v78; // eax
  unsigned int v79; // r8d
  int v80; // ecx
  char v81; // al
  __int64 v82; // rax
  bool v83; // zf
  __int32 v84; // r8d
  __int32 v85; // r12d
  int v86; // r8d
  int v87; // ecx
  char v88; // al
  __int64 v89; // r12
  __int64 v90; // r8
  _DWORD *v91; // rcx
  _DWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  int **v95; // rax
  __int64 v96; // rdx
  _DWORD *v97; // rax
  __int64 v98; // rsi
  _DWORD *v99; // rdx
  __m128i *v100; // rbp
  unsigned __int64 v101; // rax
  _OWORD *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rsi
  _QWORD *v105; // r13
  __int64 v106; // rdi
  __int64 v107; // rdx
  int *v108; // rax
  int *v109; // r12
  __int64 v110; // r8
  __int64 *v111; // r14
  unsigned __int64 v112; // rsi
  int v113; // r12d
  unsigned __int64 v114; // rbp
  int v115; // r12d
  unsigned __int64 v116; // r13
  unsigned __int64 *v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rbp
  unsigned __int64 *v120; // rdx
  __int64 v121; // rax
  __m128i v122; // xmm0
  __int64 v123; // rcx
  __int64 *v124; // r12
  __int64 v125; // rax
  __int64 *v126; // rdi
  __int64 *v127; // rdi
  __int64 v128; // rax
  int v129; // r13d
  __int64 v130; // r12
  _QWORD *v131; // r14
  __int64 v132; // rdi
  int v133; // eax
  __int64 v134; // rdx
  int v135; // ecx
  _QWORD *v136; // r12
  __int64 v137; // rdi
  char v138; // al
  unsigned __int64 v139; // rdx
  int v140; // ebp
  __int64 v141; // rax
  __int32 v142; // r8d
  unsigned int v143; // r8d
  unsigned __int32 v144; // edx
  char v145; // cl
  unsigned __int64 *v146; // rax
  __int64 v147; // rax
  char v148; // cl
  __int64 v149; // rax
  __m128i v150; // xmm0
  char v151; // al
  unsigned int v152; // eax
  _QWORD *v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rax
  int v156; // esi
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rax
  __m128i v162; // xmm0
  char v163; // al
  int v164; // eax
  unsigned int v165; // eax
  int *v166; // r13
  int *i; // rbp
  int v168; // r14d
  int *v169; // r13
  int *j; // rbp
  int v171; // r14d
  int v172; // eax
  __int64 v173; // rax
  __int64 v174; // rax
  int v175; // eax
  __int32 v176; // eax
  __int64 v177; // rax
  __int32 v178; // r12d
  unsigned __int32 v179; // edx
  char v180; // al
  int v181; // eax
  __int64 v182; // rax
  char v183; // al
  __int64 v184; // rcx
  __int32 v185; // eax
  unsigned __int32 v186; // eax
  unsigned __int32 v187; // eax
  __int32 v188; // eax
  int v189; // eax
  int v190; // eax
  __int32 v191; // eax
  int v192; // eax
  __m128i v193; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 *v194; // [rsp+10h] [rbp-E8h]
  __int64 v195; // [rsp+18h] [rbp-E0h]
  __int64 *v196; // [rsp+20h] [rbp-D8h]
  int v197; // [rsp+2Ch] [rbp-CCh]
  __int64 v198; // [rsp+30h] [rbp-C8h]
  char v199; // [rsp+3Bh] [rbp-BDh]
  int v200; // [rsp+3Ch] [rbp-BCh]
  __int64 v201; // [rsp+40h] [rbp-B8h]
  __int64 v202; // [rsp+48h] [rbp-B0h]
  __int64 v203; // [rsp+50h] [rbp-A8h]
  int v204; // [rsp+58h] [rbp-A0h]
  unsigned int v205; // [rsp+5Ch] [rbp-9Ch]
  int v206; // [rsp+60h] [rbp-98h]
  int v207; // [rsp+64h] [rbp-94h]
  unsigned __int64 v208; // [rsp+68h] [rbp-90h] BYREF
  __int64 v209[2]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v210; // [rsp+80h] [rbp-78h] BYREF
  __int64 v211; // [rsp+88h] [rbp-70h]
  _BYTE v212[24]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v213; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v214; // [rsp+B8h] [rbp-40h]

  v214 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v8 = a1[9].m128i_i64[0];
  v10 = a1[2].m128i_i64[0];
  v198 = *(_QWORD *)(v8 + 112);
  if ( (unsigned __int8)sub_120560(v10, nullptr) )
    return 0;
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_DWORD *)(v11 + 20);
  v13 = v12;
  v200 = v12;
  LOBYTE(v13) = v12 & 0x7F;
  if ( v13 == 96 )
    return 0;
  if ( v12 == 80 )
    return 0;
  if ( *(_DWORD *)(v11 + 284) )
    return 0;
  v197 = *(_DWORD *)(v11 + 280) & 4;
  if ( v197 )
  {
    if ( (v12 & 0xFFFFFFF0) != 0xD0 && (v12 & 0xFFFFFFF0) != 0x40 )
      return 0;
  }
  if ( sub_2B7C10(a1->m128i_i64[1]) )
    return 0;
  v14 = *(_QWORD *)v11;
  v199 = 0;
  if ( v14 != -1 )
  {
    if ( (v200 & 0xFFFFFFF0) != 0x40 && (v200 & 0xFFFFFFF0) != 0xD0 )
    {
      v15 = (__m128i *)a1[3].m128i_i64[0];
      v16 = *(_QWORD *)(v11 + 32);
      v210 = v14;
      *(_QWORD *)v212 = &v210;
      v17 = sub_FB6C0(v15, &v210, (__int64 **)v212);
      v18 = *((_DWORD *)v17 + 14);
      v19 = (char *)v17 + 24;
      if ( (int)v16 >= v18 )
      {
        if ( v18 != -1 && !v15[1].m128i_i8[0] )
          goto LABEL_17;
      }
      else
      {
        v15[1].m128i_i8[0] = 1;
      }
      *((_DWORD *)v19 + 8) = v16;
LABEL_17:
      v199 = 1;
      goto LABEL_18;
    }
    v199 = 0;
  }
LABEL_18:
  v20 = *(_DWORD *)(v11 + 20);
  if ( a1[8].m128i_i32[2] != v20 )
    sub_D1010((__int64)a1[4].m128i_i64, v20);
  v21 = a1[5].m128i_u64[0];
  v22 = a1[16].m128i_u64[0];
  *(_DWORD *)v212 = -1;
  if ( v21 >= v22 )
  {
    if ( v22 >= v21 )
      goto LABEL_29;
    v23 = a1[15].m128i_u64[1];
    v24 = a1[16].m128i_u64[1];
    v25 = &a1[15].m128i_i8[8];
    if ( (unsigned __int64)v212 < v23 || (unsigned __int64)v212 >= v23 + 4 * v24 )
    {
      if ( v24 >= v21
        || (v174 = qvector_reserve((__int64)v25, v23, v21, 4),
            a1[15].m128i_i64[1] = v174,
            v23 = v174,
            v22 = a1[16].m128i_u64[0],
            v22 < v21) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v23 + 4 * v22++) = -1;
          if ( v21 == v22 )
            break;
          v23 = a1[15].m128i_u64[1];
        }
      }
    }
    else if ( v24 >= v21
           || (v177 = qvector_reserve((__int64)v25, v23, v21, 4),
               a1[15].m128i_i64[1] = v177,
               v23 = v177,
               v22 = a1[16].m128i_u64[0],
               v22 < v21) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v23 + 4 * v22++) = -1;
        if ( v21 == v22 )
          break;
        v23 = a1[15].m128i_u64[1];
      }
    }
  }
  a1[16].m128i_i64[0] = v21;
LABEL_29:
  v26 = a1[6].m128i_u64[1];
  v27 = a1[17].m128i_u64[1];
  *(_DWORD *)v212 = -1;
  if ( v26 >= v27 )
  {
    if ( v27 >= v26 )
      goto LABEL_38;
    v28 = a1[17].m128i_u64[0];
    v29 = a1[18].m128i_u64[0];
    v30 = a1 + 17;
    if ( (unsigned __int64)v212 < v28 || (unsigned __int64)v212 >= v28 + 4 * v29 )
    {
      if ( v29 >= v26
        || (v173 = qvector_reserve((__int64)v30, v28, v26, 4),
            a1[17].m128i_i64[0] = v173,
            v28 = v173,
            v27 = a1[17].m128i_u64[1],
            v27 < v26) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v28 + 4 * v27++) = -1;
          if ( v26 == v27 )
            break;
          v28 = a1[17].m128i_u64[0];
        }
      }
    }
    else if ( v29 >= v26
           || (v182 = qvector_reserve((__int64)v30, v28, v26, 4),
               a1[17].m128i_i64[0] = v182,
               v28 = v182,
               v27 = a1[17].m128i_u64[1],
               v27 < v26) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v28 + 4 * v27++) = -1;
        if ( v26 == v27 )
          break;
        v28 = a1[17].m128i_u64[0];
      }
    }
  }
  a1[17].m128i_i64[1] = v26;
LABEL_38:
  v31 = a1[20].m128i_i64[0];
  a1[13].m128i_i64[0] = 0;
  v193.m128i_i64[1] = (__int64)a1[20].m128i_i64;
  if ( !v31 )
  {
LABEL_214:
    a1[20].m128i_i64[1] = 0;
    goto LABEL_41;
  }
  v32 = *(_QWORD *)v31;
  if ( a1[20].m128i_i64[1] )
  {
    v124 = (__int64 *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
    v125 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v125 & 2) != 0 )
    {
LABEL_213:
      *(_QWORD *)v31 = v32 & 3 | v31 & 0xFFFFFFFFFFFFFFFCLL;
      v128 = a1[20].m128i_i64[0];
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v128, (__m128i)(unsigned __int64)v128);
      *(__m128 *)(v128 + 8) = a3;
      *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
      goto LABEL_214;
    }
    v126 = (__int64 *)v124[1];
    if ( (*(_BYTE *)v126 & 2) != 0 )
    {
      v127 = (__int64 *)v124[2];
      if ( (*(_BYTE *)v127 & 2) != 0 )
        goto LABEL_318;
    }
    else
    {
      sub_F56D0(v126);
      v127 = (__int64 *)v124[2];
      if ( (*(_BYTE *)v127 & 2) != 0 )
        goto LABEL_209;
    }
    sub_F56D0(v127);
LABEL_209:
    v125 = *v124;
    if ( (*v124 & 2) != 0 )
    {
LABEL_210:
      if ( v32 > 3 )
        qfree(v32 & 0xFFFFFFFFFFFFFFFCLL);
      v31 = a1[20].m128i_i64[0];
      v32 = *(_QWORD *)v31;
      goto LABEL_213;
    }
LABEL_318:
    *v124 = v125 | 2;
    goto LABEL_210;
  }
  *(_QWORD *)v31 = *(_QWORD *)v31 & 3LL | v31 & 0xFFFFFFFFFFFFFFFCLL;
  v33 = a1[20].m128i_i64[0];
  a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
  *(__m128 *)(v33 + 8) = a3;
  *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
  *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
LABEL_41:
  v34 = a1[18].m128i_i64[1];
  if ( v34 )
  {
    a1[19].m128i_i64[0] = 0;
    qfree(v34);
    a1[18].m128i_i64[1] = 0;
    a1[19].m128i_i64[1] = 0;
  }
  v35 = *(_QWORD *)(v11 + 32);
  LODWORD(v36) = v35;
  if ( !v35 )
    goto LABEL_63;
  v37 = 0;
  v38 = 0;
LABEL_45:
  v39 = 80 * v38;
  v40 = v39 + *(_QWORD *)(v11 + 24);
  v41 = v39;
  v42 = *(_DWORD *)(v40 + 56);
  v43 = (int *)(v40 + 56);
  if ( v42 != 2 )
  {
    if ( v42 != 1 )
      goto LABEL_47;
LABEL_194:
    v193.m128i_i64[0] = *((_QWORD *)v43 + 1);
    sub_64190(&a1[12].m128i_i64[1], v37, *(double *)a3.m128_u64);
    v117 = (unsigned __int64 *)a1[20].m128i_i64[0];
    if ( !v117 )
    {
      v161 = qalloc();
      v162 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v161, (__m128i)(unsigned __int64)v161);
      if ( !v161 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      a4 = 0;
      *(_QWORD *)(v161 + 32) = 0;
      *(_OWORD *)(v161 + 16) = 0;
      *(__m128i *)(v161 + 8) = v162;
      *(_QWORD *)v161 = v161 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[20].m128i_i64[0] = v161;
      *(_QWORD *)v161 = v161 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v161 & 3LL;
      *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                (__m128i)a1[20].m128i_u64[0],
                                                (__m128i)a1[20].m128i_u64[0]);
      *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
      v117 = (unsigned __int64 *)a1[20].m128i_i64[0];
LABEL_196:
      v194 = v117;
      v118 = qalloc();
      v119 = v118;
      if ( !v118 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v120 = v194;
      *(_QWORD *)(v118 + 32) = 0;
      *(_OWORD *)v118 = 0;
      *(_OWORD *)(v118 + 16) = 0;
      v121 = v193.m128i_i64[0];
      *(_QWORD *)v119 = (unsigned __int64)v120 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v119 + 24) = v121;
      v122 = _mm_loadl_epi64(a1 + 20);
      *(_QWORD *)v119 = (unsigned __int64)v120 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v119 + 8) = _mm_unpacklo_epi64(v122, v122);
      if ( v120 != (unsigned __int64 *)a1[20].m128i_i64[0] )
      {
        v120[1] = v119;
        v123 = a1[20].m128i_i64[0];
        if ( v120 == *(unsigned __int64 **)(v123 + 8) )
          goto LABEL_277;
        goto LABEL_199;
      }
      goto LABEL_312;
    }
    if ( !a1[20].m128i_i64[1] )
      goto LABEL_196;
    if ( (*(_BYTE *)(*v117 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
      v145 = 1;
LABEL_273:
      LOBYTE(v195) = v145;
      v194 = v117;
      v147 = qalloc();
      v119 = v147;
      if ( !v147 )
      {
        v6 = __cxa_allocate_exception(8u);
        *v6 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v6,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v120 = v194;
      v148 = v195;
      *(_QWORD *)(v147 + 32) = 0;
      *(_OWORD *)v147 = 0;
      *(_OWORD *)(v147 + 16) = 0;
      v149 = v193.m128i_i64[0];
      *(_QWORD *)v119 = (unsigned __int64)v120 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v119 + 24) = v149;
      v150 = _mm_loadl_epi64(a1 + 20);
      *(_QWORD *)v119 = (unsigned __int64)v120 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v119 + 8) = _mm_unpacklo_epi64(v150, v150);
      if ( (unsigned __int64 *)a1[20].m128i_i64[0] != v120 )
      {
        if ( v148 )
        {
          v120[1] = v119;
          v123 = a1[20].m128i_i64[0];
          if ( *(unsigned __int64 **)(v123 + 8) == v120 )
LABEL_277:
            *(_QWORD *)(v123 + 8) = v119;
        }
        else
        {
          v120[2] = v119;
          v184 = a1[20].m128i_i64[0];
          if ( *(unsigned __int64 **)(v184 + 16) == v120 )
            *(_QWORD *)(v184 + 16) = v119;
        }
LABEL_199:
        sub_D7DE0((_QWORD *)v193.m128i_i64[1], (__int64 *)v119);
LABEL_200:
        ++a1[20].m128i_i64[1];
        goto LABEL_201;
      }
LABEL_312:
      *v120 = v119 & 0xFFFFFFFFFFFFFFFCLL | *v120 & 3;
      *(_QWORD *)(a1[20].m128i_i64[0] + 8) = v119;
      *(_QWORD *)(a1[20].m128i_i64[0] + 16) = v119;
      v160 = *(_QWORD *)v119 & 2LL;
      *(_QWORD *)v119 &= ~1uLL;
      *(_QWORD *)v119 = v160 | a1[20].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_200;
    }
    v117 = (unsigned __int64 *)(*v117 & 0xFFFFFFFFFFFFFFFCLL);
    v145 = 1;
    while ( 1 )
    {
      if ( v193.m128i_i64[0] >= (__int64)v117[3] )
      {
        if ( v193.m128i_i64[0] <= (__int64)v117[3] )
        {
          if ( !v117 )
            goto LABEL_273;
          v119 = (__int64)v117;
LABEL_201:
          *(_DWORD *)(v119 + 32) = v37;
          a3 = (__m128)_mm_unpacklo_epi64(
                         _mm_loadl_epi64(&v193),
                         (__m128i)(unsigned __int64)*(int *)(*(_QWORD *)(v11 + 24) + v41 + 4));
          *(__m128 *)v212 = a3;
          sub_316BB0(&a1[18].m128i_i64[1], (__m128i *)v212, *(double *)a3.m128_u64, a4);
LABEL_61:
          if ( ((*v43 - 2) & 0xFFFFFFFD) == 0 )
LABEL_156:
            sub_64190(&a1[13].m128i_i64[1], v37, *(double *)a3.m128_u64);
          v35 = *(_QWORD *)(v11 + 32);
          v38 = ++v37;
          LODWORD(v36) = v35;
          if ( v37 >= v35 )
            goto LABEL_63;
          goto LABEL_45;
        }
        v146 = (unsigned __int64 *)v117[2];
        v145 = 0;
      }
      else
      {
        v146 = (unsigned __int64 *)v117[1];
        v145 = 1;
      }
      if ( (*(_BYTE *)v146 & 2) != 0 )
        goto LABEL_273;
      v117 = v146;
    }
  }
  v95 = *(int ***)(v40 + 64);
  if ( v95[1] != (int *)&byte_1 )
    goto LABEL_152;
  v43 = *v95;
  v42 = **v95;
  if ( v42 == 1 )
    goto LABEL_194;
  if ( v42 != 2 )
  {
LABEL_47:
    if ( (unsigned int)(v42 - 3) <= 1 )
      goto LABEL_48;
    goto LABEL_159;
  }
LABEL_152:
  v96 = *((_QWORD *)v43 + 1);
  v97 = *(_DWORD **)v96;
  v98 = *(_QWORD *)v96 + 24LL * *(_QWORD *)(v96 + 8);
  if ( *(_QWORD *)v96 == v98 )
  {
LABEL_159:
    if ( !under_debugger )
      sub_383060(0xCBA6u, *(double *)a3.m128_u64);
LABEL_468:
    BUG();
  }
  v99 = *(_DWORD **)v96;
  do
  {
    if ( *v99 == 1 )
      goto LABEL_156;
    v99 += 6;
  }
  while ( (_DWORD *)v98 != v99 );
  while ( (unsigned int)(*v97 - 3) > 1 )
  {
    v97 += 6;
    if ( (_DWORD *)v98 == v97 )
      goto LABEL_159;
  }
LABEL_48:
  memset(v212, 0, sizeof(v212));
  if ( (unsigned __int8)sub_D2BA0((__int64)a1[4].m128i_i64, (__int64)v212, v43, *(unsigned int *)(v40 + 4), 1) )
  {
    v44 = 0;
    v45 = 0;
    if ( !*(_QWORD *)&v212[8] )
    {
LABEL_59:
      if ( *(_QWORD *)v212 )
      {
        *(_QWORD *)&v212[8] = 0;
        qfree(*(__int64 *)v212);
      }
      goto LABEL_61;
    }
    while ( 2 )
    {
      v46 = *(_QWORD *)v212;
      v47 = a1[4].m128i_i64[1];
      v48 = *(_DWORD *)(*(_QWORD *)v212 + 4 * v45);
      v49 = (_DWORD *)(v47 + 4 * a1[5].m128i_i64[0]);
      if ( (_DWORD *)v47 == v49 )
        goto LABEL_141;
      v50 = (_DWORD *)a1[4].m128i_i64[1];
      while ( v48 != *v50 )
      {
        if ( v49 == ++v50 )
          goto LABEL_141;
      }
      if ( v49 == v50 || (v51 = ((__int64)v50 - v47) >> 2, v52 = (int)v51, (_DWORD)v51 == -1) )
      {
LABEL_141:
        v90 = a1[6].m128i_i64[0];
        v91 = (_DWORD *)(v90 + 4 * a1[6].m128i_i64[1]);
        if ( (_DWORD *)v90 == v91 )
          goto LABEL_191;
        v92 = (_DWORD *)a1[6].m128i_i64[0];
        while ( v48 != *v92 )
        {
          if ( v91 == ++v92 )
            goto LABEL_191;
        }
        if ( v91 == v92 )
          goto LABEL_191;
        v93 = ((__int64)v92 - v90) >> 2;
        v52 = (int)v93;
        if ( (_DWORD)v93 == -1 )
          goto LABEL_191;
        v53 = a1[21].m128i_i32[0] + 1;
        if ( a1[4].m128i_i32[0] == 3 )
          goto LABEL_161;
        a1[21].m128i_i32[0] = v53;
        v94 = 4LL * (int)v93;
      }
      else
      {
        v53 = a1[21].m128i_i32[0] + 1;
        if ( a1[4].m128i_i32[0] != 3 )
        {
          v54 = a1[15].m128i_i64[1];
          a1[21].m128i_i32[0] = v53;
          *(_DWORD *)(v54 + 4LL * (int)v51) = v37;
          goto LABEL_58;
        }
LABEL_161:
        a1[21].m128i_i32[0] = v53;
        v94 = 4 * v52;
        *(_DWORD *)(a1[15].m128i_i64[1] + 4 * v52) = v37;
      }
      *(_DWORD *)(a1[17].m128i_i64[0] + v94) = v37;
LABEL_58:
      v45 = ++v44;
      if ( (unsigned __int64)v44 >= *(_QWORD *)&v212[8] )
        goto LABEL_59;
      continue;
    }
  }
  v46 = *(_QWORD *)v212;
LABEL_191:
  if ( v46 )
  {
    *(_QWORD *)&v212[8] = 0;
    qfree(v46);
  }
  v35 = *(_QWORD *)(v11 + 32);
  LODWORD(v36) = v35;
LABEL_63:
  LOBYTE(v194) = (v200 & 0xFFFFFFF0) == 64 || (v200 & 0xFFFFFFF0) == 208;
  if ( !(_BYTE)v194 )
  {
    v55 = 0;
LABEL_65:
    if ( !v199 && (*(_BYTE *)(v11 + 281) & 1) == 0 )
    {
      v56 = v35 - 1;
      v193.m128i_i64[0] = (__int64)v212;
      if ( v55 > (int)v35 - 1 )
      {
        v56 = v35;
        v36 = (int)v35;
      }
      else
      {
        while ( 1 )
        {
          v36 = v56;
          v57 = *(_QWORD *)(v11 + 24) + 80LL * v56;
          v211 = 0;
          v210 = -1;
          if ( *(_BYTE *)v57 == 1 )
          {
            v139 = *(int *)(v57 + 8);
            LOBYTE(v211) = 1;
            v210 = v139;
            v135 = *(_DWORD *)(v57 + 4);
            HIDWORD(v211) = v135;
          }
          else
          {
            if ( *(_BYTE *)v57 != 5 )
              goto LABEL_70;
            v134 = *(_QWORD *)(v57 + 8);
            LOBYTE(v211) = 5;
            v210 = *(_QWORD *)(v134 + 8);
            v135 = *(_DWORD *)(v57 + 4);
            HIDWORD(v211) = v135;
          }
          sub_32F640(v193.m128i_i64[0], (__int64)&v210, a1->m128i_i64[1], v135);
          v136 = (_QWORD *)a1[3].m128i_i64[1];
          if ( !(unsigned __int8)sub_64820(v193.m128i_i64[0], v136) )
            break;
          v138 = sub_317F40(v136 + 2, (__int64)&v212[16]);
          v137 = *(_QWORD *)&v212[16];
          if ( !v138 )
            goto LABEL_231;
          if ( *(_QWORD *)&v212[16] )
          {
            v213 = 0;
            qfree(*(__int64 *)&v212[16]);
          }
          qfree(*(__int64 *)v212);
          if ( v55 > v56 - 1 )
            goto LABEL_71;
          --v56;
        }
        v137 = *(_QWORD *)&v212[16];
LABEL_231:
        if ( v137 )
        {
          v213 = 0;
          qfree(v137);
        }
        qfree(*(__int64 *)v212);
LABEL_70:
        v36 = ++v56;
LABEL_71:
        v35 = *(_QWORD *)(v11 + 32);
      }
      if ( v35 != v36 )
      {
        v58 = v35 - v56;
        sub_82440((__int64 *)(v11 + 24), v36);
        if ( v56 < *(_DWORD *)(v11 + 8) )
          *(_DWORD *)(v11 + 8) = v56;
        a1[21].m128i_i32[2] += v58;
        v36 = *(_QWORD *)(v11 + 32);
      }
    }
    goto LABEL_76;
  }
  if ( !v199 || (v55 = 0, v197) )
  {
    v55 = *(_DWORD *)(v11 + 8);
    goto LABEL_65;
  }
LABEL_76:
  v209[0] = 0;
  v209[1] = 0;
  v196 = v209;
  sub_63E80(v209, 0, v36, *(double *)a3.m128_u64);
  v59 = *(_QWORD *)(v11 + 32);
  v60 = v55;
  if ( v55 >= v59 )
    goto LABEL_172;
  v193.m128i_i64[0] = (__int64)v212;
  while ( 1 )
  {
    v61 = *(_QWORD *)(v11 + 24);
    v211 = 0;
    v210 = -1;
    v62 = 80 * v60;
    v63 = v62 + v61;
    if ( *(_BYTE *)v63 == 1 )
    {
      v64 = *(int *)(v63 + 8);
      LOBYTE(v211) = 1;
      v210 = v64;
      v65 = *(_DWORD *)(v63 + 4);
      HIDWORD(v211) = v65;
    }
    else
    {
      if ( *(_BYTE *)v63 != 5 )
        goto LABEL_79;
      v75 = *(_QWORD *)(v63 + 8);
      LOBYTE(v211) = 5;
      v210 = *(_QWORD *)(v75 + 8);
      v65 = *(_DWORD *)(v63 + 4);
      HIDWORD(v211) = v65;
    }
    v193.m128i_i8[8] = *(_BYTE *)v63 & 0xFB;
    if ( v193.m128i_i8[8] != 1 )
    {
      if ( !under_debugger )
        sub_383060(0xCB3Eu, *(double *)a3.m128_u64);
      goto LABEL_468;
    }
    if ( (_BYTE)v194 && *(_DWORD *)(v11 + 8) > v55 )
      goto LABEL_79;
    sub_32F640(v193.m128i_i64[0], (__int64)&v210, a1->m128i_i64[1], v65);
    v66 = (__int64 *)a1[3].m128i_i64[1];
    sub_64700((__int64 *)v193.m128i_i64[0], v66);
    sub_3180C0((__int64 *)&v212[16], (__int64)(v66 + 2), v67, v68);
    if ( !(unsigned __int8)sub_64880(v193.m128i_i64[0]) || v213 )
    {
      if ( (unsigned __int8)sub_64880(v193.m128i_i64[0]) )
      {
        v70 = a1->m128i_i64[1];
        v193.m128i_i8[8] = 5;
        v71 = *(_QWORD *)(v70 + 1496);
        v72 = *(_QWORD *)(v70 + 1440);
        v73 = *(_QWORD *)(*(_QWORD *)(v71 + 24) + 16LL);
        v74 = v73 & (**(_QWORD **)&v212[16] - v72);
        v195 = v73
             & (*(_QWORD *)(*(_QWORD *)&v212[16] + 16 * v213 - 8)
              + *(_QWORD *)(*(_QWORD *)&v212[16] + 16 * v213 - 16)
              - v72);
      }
      else
      {
        LODWORD(v74) = sub_64960(v193.m128i_i64[0], 0);
        v195 = (int)(sub_64C00(v193.m128i_i64[0]) + 1);
        v71 = *(_QWORD *)(a1->m128i_i64[1] + 1496);
      }
      if ( sub_11CC50((unsigned __int8 *)v63, v71) )
      {
        if ( (_BYTE)v211 != v193.m128i_i8[8] )
          sub_F5300(*(double *)a3.m128_u64);
        v69 = v210 + HIDWORD(v211) - v195;
      }
      else
      {
        if ( (_BYTE)v211 != v193.m128i_i8[8] )
          sub_F5300(*(double *)a3.m128_u64);
        v69 = v74 - v210;
      }
    }
    else
    {
      v69 = *(_DWORD *)(v63 + 4);
    }
    if ( *(_QWORD *)&v212[16] )
    {
      v213 = 0;
      qfree(*(__int64 *)&v212[16]);
    }
    qfree(*(__int64 *)v212);
    if ( v69 < 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCB3Fu, *(double *)a3.m128_u64);
      goto LABEL_468;
    }
    if ( *(_DWORD *)(v63 + 4) == v69 )
      goto LABEL_79;
    if ( !v69 )
      break;
    if ( (get_tinfo_property() & 0x2F) == 0xD
      || (get_tinfo_property() & 0xF) == 9
      || (*(_BYTE *)(v11 + 281) & 1) != 0
      && *(_DWORD *)(v63 + 4) > *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL) )
    {
      goto LABEL_79;
    }
    v76 = round_up_power2();
    if ( *(_DWORD *)(v63 + 4) <= v76 )
      goto LABEL_79;
    v77 = *(_QWORD *)(a1->m128i_i64[1] + 1504);
    LODWORD(v195) = a1[8].m128i_i32[2];
    v193.m128i_i32[2] = *(_DWORD *)(v77 + 80);
    v78 = round_down_power2();
    v79 = v195;
    v80 = v78;
    if ( v78 > 1 )
    {
      while ( v76 % v80 )
      {
        v80 >>= 1;
        if ( v80 == 1 )
          goto LABEL_120;
      }
    }
    if ( (v80 & (v80 - 1)) != 0 )
      sub_F53F0();
LABEL_120:
    LODWORD(v195) = 2 * v193.m128i_i32[2];
    if ( 2 * v193.m128i_i32[2] >= v80 )
    {
      if ( v193.m128i_i32[2] <= v80 )
      {
        if ( v79 <= 0x10 )
          goto LABEL_335;
        goto LABEL_297;
      }
      if ( v79 > 0x10 )
        goto LABEL_123;
      goto LABEL_295;
    }
    if ( v79 > 0x10 )
    {
      if ( v79 == 176 || v79 == 256 )
      {
        v80 = v195;
        if ( v193.m128i_i32[2] <= (int)v195 )
          v80 = v193.m128i_i32[2];
        goto LABEL_127;
      }
      goto LABEL_291;
    }
    LODWORD(v202) = v80;
    LODWORD(v201) = v79;
    v172 = getinf();
    if ( v172 != 176 && v172 != 256 )
    {
      v79 = v201;
      v80 = v202;
LABEL_291:
      LODWORD(v202) = v80;
      LODWORD(v201) = v79;
      v151 = getinf_flag();
      v80 = v202;
      if ( v151 )
        goto LABEL_127;
      v80 = v195;
      if ( v193.m128i_i32[2] <= (int)v195 )
      {
        if ( (unsigned int)v201 > 0x10 )
        {
          v80 = v195;
LABEL_125:
          LODWORD(v201) = v80;
          v81 = getinf_flag();
          v80 = v201;
          if ( v81 )
            goto LABEL_127;
LABEL_126:
          v80 = v193.m128i_i32[2];
          goto LABEL_127;
        }
LABEL_334:
        v80 = v195;
LABEL_335:
        LODWORD(v201) = v80;
        v165 = getinf();
        v80 = v201;
        v79 = v165;
LABEL_297:
        if ( v79 != 176 && v79 != 256 )
          goto LABEL_125;
        goto LABEL_126;
      }
      if ( (unsigned int)v201 > 0x10 )
        goto LABEL_125;
      goto LABEL_294;
    }
    if ( v193.m128i_i32[2] <= (int)v195 )
      goto LABEL_334;
LABEL_294:
    v80 = v195;
LABEL_295:
    LODWORD(v201) = v80;
    v152 = getinf();
    v80 = v201;
    v79 = v152;
LABEL_123:
    if ( v79 != 176 && v79 != 256 )
      goto LABEL_125;
LABEL_127:
    v82 = *(_QWORD *)(v11 + 24);
    v83 = *(_DWORD *)(v82 + v62 + 56) == 1;
    v202 = v82 + v62;
    if ( !v83 )
    {
      LODWORD(v202) = v80;
      v84 = a1[8].m128i_i32[2];
      v206 = 0;
      LODWORD(v201) = v84;
      get_tinfo_size();
      v85 = v206;
      v86 = v201;
      v87 = v202;
      if ( (v206 & (v206 - 1)) != 0 )
        sub_F53F0();
      if ( (int)v195 >= v206 )
      {
        if ( v193.m128i_i32[2] > v206 )
        {
          if ( (unsigned int)v201 > 0x10 )
          {
LABEL_132:
            if ( v86 != 176 && v86 != 256 )
            {
LABEL_134:
              LODWORD(v195) = v87;
              v88 = getinf_flag();
              v87 = v195;
              if ( !v88 )
                goto LABEL_136;
            }
LABEL_135:
            v193.m128i_i32[2] = v85;
            goto LABEL_136;
          }
LABEL_326:
          LODWORD(v195) = v87;
          v164 = getinf();
          v87 = v195;
          v86 = v164;
          goto LABEL_132;
        }
        if ( (unsigned int)v201 > 0x10 )
        {
LABEL_328:
          if ( v86 == 176 || v86 == 256 )
            goto LABEL_136;
          goto LABEL_330;
        }
LABEL_360:
        LODWORD(v195) = v87;
        v175 = getinf();
        v87 = v195;
        v86 = v175;
        goto LABEL_328;
      }
      if ( (unsigned int)v201 <= 0x10 )
      {
        v181 = getinf();
        v87 = v202;
        if ( v181 == 176 || v181 == 256 )
        {
          if ( v193.m128i_i32[2] > (int)v195 )
          {
LABEL_325:
            v85 = v195;
            goto LABEL_326;
          }
LABEL_359:
          v85 = v195;
          goto LABEL_360;
        }
        v86 = v201;
      }
      else if ( (_DWORD)v201 == 256 || (_DWORD)v201 == 176 )
      {
        v176 = v195;
        if ( v193.m128i_i32[2] <= (int)v195 )
          v176 = v193.m128i_i32[2];
        v193.m128i_i32[2] = v176;
LABEL_136:
        if ( v87 == v193.m128i_i32[2] )
          goto LABEL_137;
        goto LABEL_79;
      }
      LODWORD(v202) = v87;
      LODWORD(v201) = v86;
      v163 = getinf_flag();
      v87 = v202;
      if ( v163 )
        goto LABEL_135;
      v85 = v195;
      if ( v193.m128i_i32[2] > (int)v195 )
      {
        if ( (unsigned int)v201 > 0x10 )
          goto LABEL_134;
        goto LABEL_325;
      }
      if ( (unsigned int)v201 > 0x10 )
      {
        v85 = v195;
LABEL_330:
        LODWORD(v195) = v87;
        if ( !(unsigned __int8)getinf_flag() )
          v85 = v193.m128i_i32[2];
        v87 = v195;
        v193.m128i_i32[2] = v85;
        goto LABEL_136;
      }
      goto LABEL_359;
    }
    if ( !v55 || (v141 = 80LL * (v55 - 1) + v82, *(_DWORD *)(v141 + 56) != 1) )
    {
LABEL_248:
      v204 = v55 + 1;
      v60 = v55 + 1;
      if ( v60 == *(_QWORD *)(v11 + 32) )
        goto LABEL_137;
      v83 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 80LL * (v55 + 1) + 56) == 1;
      v203 = *(_QWORD *)(v11 + 24) + 80 * v60;
      if ( !v83 )
        goto LABEL_137;
      v142 = a1[8].m128i_i32[2];
      v207 = 0;
      v205 = v142;
      get_tinfo_size();
      v143 = v205;
      LODWORD(v201) = v207;
      if ( ((v207 - 1) & v207) != 0 )
        sub_F53F0();
      if ( (int)v195 >= (int)v201 )
      {
LABEL_252:
        if ( v193.m128i_i32[2] > (int)v201 )
        {
          if ( v143 > 0x10 )
          {
LABEL_254:
            if ( v143 != 176 && v143 != 256 )
              goto LABEL_256;
            goto LABEL_258;
          }
LABEL_451:
          v143 = getinf();
          goto LABEL_254;
        }
        if ( v143 > 0x10 )
        {
LABEL_399:
          if ( v143 != 176 && v143 != 256 )
          {
LABEL_256:
            if ( (unsigned __int8)getinf_flag() )
              goto LABEL_258;
          }
          LODWORD(v201) = v193.m128i_i32[2];
LABEL_258:
          v144 = a1[8].m128i_u32[2];
          v202 = *(_QWORD *)(v202 + 64) + v76;
          if ( (((_DWORD)v201 - 1) & (unsigned int)v201) != 0 )
            sub_F53F0();
          if ( (int)v195 >= (int)v201 )
          {
LABEL_260:
            if ( v193.m128i_i32[2] > (int)v201 )
            {
              if ( v144 > 0x10 )
              {
LABEL_262:
                if ( v144 == 176 || v144 == 256 || (unsigned __int8)getinf_flag() )
                  goto LABEL_265;
                goto LABEL_266;
              }
LABEL_420:
              v144 = getinf();
              goto LABEL_262;
            }
            if ( v144 > 0x10 )
            {
LABEL_414:
              if ( v144 != 176 && v144 != 256 )
              {
                v83 = (unsigned __int8)getinf_flag() == 0;
                v185 = v201;
                if ( v83 )
                  v185 = v193.m128i_i32[2];
                v193.m128i_i32[2] = v185;
              }
              goto LABEL_266;
            }
LABEL_423:
            v144 = getinf();
            goto LABEL_414;
          }
LABEL_407:
          if ( v144 <= 0x10 )
          {
            v205 = v144;
            v192 = getinf();
            if ( v192 == 176 || v192 == 256 )
            {
              if ( v193.m128i_i32[2] > (int)v195 )
              {
                LODWORD(v201) = v195;
                goto LABEL_420;
              }
              LODWORD(v201) = v195;
              goto LABEL_423;
            }
            v144 = v205;
          }
          else if ( v144 == 256 || v144 == 176 )
          {
            v191 = v195;
            if ( v193.m128i_i32[2] <= (int)v195 )
              v191 = v193.m128i_i32[2];
            v193.m128i_i32[2] = v191;
            goto LABEL_266;
          }
          v205 = v144;
          if ( !(unsigned __int8)getinf_flag() )
          {
            v144 = v205;
            LODWORD(v201) = v195;
            goto LABEL_260;
          }
LABEL_265:
          v193.m128i_i32[2] = v201;
LABEL_266:
          if ( *(_QWORD *)(v203 + 64) != ((v202 + v193.m128i_i32[2] - 1) & -v193.m128i_i32[2]) )
          {
            v59 = *(_QWORD *)(v11 + 32);
            v55 = v204;
            goto LABEL_80;
          }
LABEL_137:
          if ( *(_DWORD *)(v63 + 56) != 2 )
            goto LABEL_138;
          if ( v76 <= 0 || (v153 = *(_QWORD **)(v63 + 64), (v154 = v153[1]) == 0) )
          {
            if ( !under_debugger )
              sub_383060(0xCDCDu, *(double *)a3.m128_u64);
            goto LABEL_468;
          }
          v155 = *v153 + 24 * v154 - 24;
          v156 = *(unsigned __int16 *)(v155 + 16);
          if ( v76 > v156 && v76 < v156 + *(unsigned __int16 *)(v155 + 18) )
          {
            *(_WORD *)(v155 + 18) = v76 - v156;
LABEL_138:
            v89 = v198;
            sub_1272B0(v63, v198, v76, 0);
            v198 = v89;
            sub_32C430((__int64 *)v193.m128i_i64[0], v89, v76, 0);
            copy_tinfo_t();
            clear_tinfo_t();
            sub_1C4140(v198, v63 + 56, nullptr, v76, *(_DWORD *)(v11 + 20));
            ++v55;
            ++a1[21].m128i_i32[2];
            v59 = *(_QWORD *)(v11 + 32);
            v60 = v55;
            goto LABEL_80;
          }
          goto LABEL_79;
        }
LABEL_448:
        v143 = getinf();
        goto LABEL_399;
      }
      if ( v205 <= 0x10 )
      {
        v189 = getinf();
        if ( v189 == 176 || v189 == 256 )
        {
          if ( v193.m128i_i32[2] > (int)v195 )
          {
            LODWORD(v201) = v195;
            goto LABEL_451;
          }
          LODWORD(v201) = v195;
          goto LABEL_448;
        }
        v143 = v205;
      }
      else if ( v205 == 256 || v205 == 176 )
      {
        v188 = v195;
        if ( v193.m128i_i32[2] <= (int)v195 )
          v188 = v193.m128i_i32[2];
        LODWORD(v201) = v188;
        goto LABEL_258;
      }
      v205 = v143;
      if ( !(unsigned __int8)getinf_flag() )
      {
        v143 = v205;
        LODWORD(v201) = v195;
        goto LABEL_252;
      }
      v144 = a1[8].m128i_u32[2];
      v202 = *(_QWORD *)(v202 + 64) + v76;
      goto LABEL_407;
    }
    v178 = v80 - 1;
    v201 = *(_QWORD *)(v141 + 64) + *(int *)(v141 + 4);
    v179 = a1[8].m128i_u32[2];
    if ( (v80 & (v80 - 1)) != 0 )
      sub_F53F0();
    if ( (int)v195 >= v80 )
      goto LABEL_368;
    if ( v179 > 0x10 )
    {
      if ( v179 == 256 || v179 == 176 )
      {
        v80 = v195;
        if ( v193.m128i_i32[2] <= (int)v195 )
          v80 = v193.m128i_i32[2];
        v178 = v80 - 1;
        goto LABEL_375;
      }
      goto LABEL_389;
    }
    LODWORD(v203) = a1[8].m128i_i32[2];
    v204 = v80;
    v190 = getinf();
    if ( v190 != 176 && v190 != 256 )
    {
      v80 = v204;
      v179 = v203;
LABEL_389:
      LODWORD(v203) = v179;
      v204 = v80;
      v183 = getinf_flag();
      v80 = v204;
      if ( v183 )
        goto LABEL_375;
      v179 = v203;
      v80 = v195;
LABEL_368:
      if ( v193.m128i_i32[2] <= v80 )
      {
        if ( v179 <= 0x10 )
        {
LABEL_436:
          v204 = v80;
          v186 = getinf();
          v80 = v204;
          v179 = v186;
        }
        v204 = v80;
        if ( v179 == 176 || v179 == 256 )
        {
LABEL_374:
          v80 = v193.m128i_i32[2];
          v178 = v193.m128i_i32[2] - 1;
          goto LABEL_375;
        }
        v180 = getinf_flag();
LABEL_373:
        v80 = v204;
        v178 = v204 - 1;
        if ( v180 )
          goto LABEL_375;
        goto LABEL_374;
      }
      if ( v179 > 0x10 )
        goto LABEL_370;
      goto LABEL_439;
    }
    v80 = v195;
    if ( v193.m128i_i32[2] <= (int)v195 )
      goto LABEL_436;
    v80 = v195;
LABEL_439:
    v204 = v80;
    v187 = getinf();
    v80 = v204;
    v179 = v187;
LABEL_370:
    if ( v179 != 176 && v179 != 256 )
    {
      v204 = v80;
      v180 = getinf_flag();
      goto LABEL_373;
    }
    v178 = v80 - 1;
LABEL_375:
    if ( *(_QWORD *)(v202 + 64) == (-v80 & (unsigned __int64)(v201 + v178)) )
      goto LABEL_248;
LABEL_79:
    ++v55;
    v59 = *(_QWORD *)(v11 + 32);
    v60 = v55;
LABEL_80:
    if ( v60 >= v59 )
      goto LABEL_172;
  }
  if ( (*(_BYTE *)(v11 + 281) & 1) != 0 && *(_DWORD *)(v11 + 8) <= v55 )
    goto LABEL_79;
  if ( v197 )
  {
    v59 = *(_QWORD *)(v11 + 32);
    v60 = v55 + 1;
    if ( v60 != v59 )
    {
      ++v55;
      goto LABEL_80;
    }
  }
  if ( v199 )
  {
    v100 = (__m128i *)a1[3].m128i_i64[0];
    v101 = *(_QWORD *)v11;
    *(_QWORD *)v212 = &v208;
    v208 = v101;
    v102 = sub_FB6C0(v100, &v208, (__int64 **)v193.m128i_i64[0]);
    v103 = *((_QWORD *)v102 + 5);
    v104 = *((_QWORD *)v102 + 4);
    v105 = (_QWORD *)v102 + 3;
    v106 = (__int64)(v102 + 2);
    v107 = 4 * v103;
    v108 = (int *)(v104 + 4 * v103);
    if ( 4 * v103 )
    {
      v109 = (int *)v104;
      while ( v55 <= *v109 )
      {
        if ( v55 == *v109 )
          goto LABEL_170;
        if ( ++v109 == v108 )
          goto LABEL_239;
      }
      v110 = (__int64)v109 - v104;
      if ( v105[3] < (unsigned __int64)(v103 + 1) )
      {
        v193.m128i_i64[1] = (__int64)v109 - v104;
        v159 = qvector_reserve(v106, v104, v103 + 1, 4);
        v105[1] = v159;
        v110 = v193.m128i_i64[1];
        v109 = (int *)(v193.m128i_i64[1] + v159);
        v107 = 4LL * v105[2];
      }
      memmove(v109 + 1, v109, v107 - v110);
      *v109 = v55;
      ++v105[2];
    }
    else
    {
LABEL_239:
      if ( v105[3] < (unsigned __int64)(v103 + 1) )
      {
        v157 = qvector_reserve(v106, v104, v103 + 1, 4);
        v158 = v105[2];
        v105[1] = v157;
        v108 = (int *)(v157 + 4 * v158);
      }
      *v108 = v55;
      ++v105[2];
    }
LABEL_170:
    v100[1].m128i_i8[0] = 1;
    goto LABEL_79;
  }
  if ( *(_DWORD *)(v63 + 56) != 1 && *(_DWORD *)(v11 + 8) > v55
    || sub_F6BE0((__int64)a1, v11, v55, *(double *)a3.m128_u64) )
  {
    sub_64340(v196, v55, *(double *)a3.m128_u64);
    goto LABEL_79;
  }
  sub_64440(v196, v55, *(_DWORD *)(v11 + 32) - v55, *(double *)a3.m128_u64);
  v59 = *(_QWORD *)(v11 + 32);
LABEL_172:
  v111 = v196;
  sub_643C0(v196, v59, *(double *)a3.m128_u64);
  v112 = 0;
  v113 = 0;
  if ( !(unsigned __int8)sub_64880(v111) )
  {
    v113 = sub_64C00(v196) + 1;
    v112 = v113;
  }
  v114 = *(_QWORD *)(v11 + 32);
  if ( v112 < v114 )
  {
    v140 = v114 - v113;
    sub_82440((__int64 *)(v11 + 24), v112);
    if ( v113 < *(_DWORD *)(v11 + 8) )
      *(_DWORD *)(v11 + 8) = v113;
    a1[21].m128i_i32[2] += v140;
  }
  if ( !v199 )
  {
    *(_OWORD *)v212 = 0u;
    if ( (*(_BYTE *)(v198 + 48) & 8) != 0
      && ((*(_DWORD *)(v11 + 20) - 112) & 0xFFFFFFDF) == 0
      && (unsigned __int8)sub_64880(&a1[13].m128i_i64[1]) )
    {
      v166 = (int *)a1[15].m128i_i64[1];
      for ( i = &v166[a1[16].m128i_i64[0]]; i != v166; ++v166 )
      {
        v168 = *v166;
        if ( *v166 != -1 )
        {
          if ( sub_64930(v196, v168) )
          {
LABEL_397:
            *(_QWORD *)&v212[8] = 0;
            goto LABEL_178;
          }
          sub_64190((__int64 *)v212, v168, *(double *)a3.m128_u64);
        }
      }
      v169 = (int *)a1[17].m128i_i64[0];
      for ( j = &v169[a1[17].m128i_i64[1]]; j != v169; ++v169 )
      {
        v171 = *v169;
        if ( *v169 != -1 )
        {
          if ( sub_64930(v196, v171) )
            goto LABEL_397;
          sub_64190((__int64 *)v212, v171, *(double *)a3.m128_u64);
        }
      }
      *(_DWORD *)(v11 + 20) = 48;
    }
LABEL_178:
    v115 = 0;
    if ( *(_QWORD *)(v11 + 32) )
    {
      do
      {
        if ( !sub_64930(v196, v115) && sub_F6BE0((__int64)a1, v11, v115, *(double *)a3.m128_u64) )
          sub_64190((__int64 *)v212, v115, *(double *)a3.m128_u64);
        ++v115;
        v116 = *(_QWORD *)(v11 + 32);
      }
      while ( v115 < v116 );
      v129 = v116 - 1;
      if ( v129 >= 0 )
      {
        v130 = 80LL * (unsigned int)v129;
        do
        {
          if ( sub_64930(v212, v129) )
          {
            v131 = (_QWORD *)(v130 + *(_QWORD *)(v11 + 24));
            cleanup_argloc();
            v132 = v131[4];
            if ( v132 )
            {
              v131[5] = 0;
              qfree(v132);
            }
            clear_tinfo_t();
            sub_11CDA0((__int64)v131);
            memmove(v131, v131 + 10, *(_QWORD *)(v11 + 24) + 80LL * *(_QWORD *)(v11 + 32) - (_QWORD)v131 - 80);
            v133 = *(_DWORD *)(v11 + 8);
            --*(_QWORD *)(v11 + 32);
            if ( v133 > v129 )
              *(_DWORD *)(v11 + 8) = v133 - 1;
            ++a1[21].m128i_i32[2];
          }
          --v129;
          v130 -= 80;
        }
        while ( v129 != -1 );
      }
    }
    qfree(*(__int64 *)v212);
  }
  if ( !*(_QWORD *)(v11 + 32) && (v200 == 128 || (_BYTE)v194) )
    *(_DWORD *)(v11 + 20) = 32;
  qfree(v209[0]);
  return 0;
}

