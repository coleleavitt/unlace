__int64 __fastcall sub_108C40(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6,
        double a7,
        char a8,
        __int64 *a9,
        __int64 *a10)
{
  unsigned __int8 v13; // si
  unsigned __int8 v14; // al
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 *v25; // rsi
  const __m128i *v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // rdi
  __m128i *v29; // r13
  unsigned __int64 v30; // r12
  __m128i v31; // xmm0
  unsigned __int64 v32; // r12
  void *v33; // rbp
  __int64 v34; // rdx
  __int64 j; // rcx
  _QWORD *v36; // rdi
  unsigned __int64 v37; // rsi
  const void **v38; // r14
  unsigned __int8 v39; // al
  unsigned int v40; // ecx
  unsigned int v42; // r12d
  int v43; // eax
  __int64 v44; // rdx
  int v45; // r13d
  __int64 i; // rax
  __int64 v47; // rbp
  int v48; // ebx
  _DWORD *v49; // rax
  unsigned __int8 v50; // al
  __int64 v51; // rsi
  _QWORD *v52; // rbx
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // r9
  __int64 v56; // r11
  _DWORD *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int32 v60; // ebx
  _DWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  void *v65; // rbx
  __int64 v66; // rax
  size_t v67; // rbp
  int v68; // eax
  __int64 v69; // r14
  __int64 *v70; // rax
  void *v71; // rbx
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  _QWORD *v74; // rbx
  int v75; // esi
  int v76; // ecx
  __int64 v77; // r14
  int v78; // ecx
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rdx
  _QWORD *v83; // rax
  _QWORD *v84; // rbp
  __int64 v85; // rax
  __int64 v86; // rbp
  __int64 v87; // r14
  __int8 v88; // si
  __int64 v89; // rax
  int v90; // esi
  __int64 v91; // rbp
  unsigned __int64 *v92; // r13
  unsigned int v93; // edx
  _QWORD *v94; // rax
  unsigned __int8 v95; // cl
  unsigned int v96; // edx
  _QWORD *v97; // r14
  __int64 v98; // rax
  unsigned __int8 v99; // dl
  _DWORD **v100; // rbp
  __int8 v101; // si
  __int64 v102; // rdx
  __int64 v103; // rdx
  unsigned __int64 v104; // rdi
  unsigned __int64 v105; // r10
  _DWORD *v106; // rdi
  __int64 v107; // rax
  int *v108; // rbp
  int *k; // r13
  __int64 v110; // r14
  int v111; // ebx
  _DWORD *v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // r8
  unsigned __int64 v115; // rax
  __int8 v116; // si
  __int64 v117; // rax
  __int64 v118; // rdx
  unsigned __int64 *v119; // [rsp+8h] [rbp-160h]
  _QWORD *v120; // [rsp+8h] [rbp-160h]
  __int64 v121; // [rsp+8h] [rbp-160h]
  int v122; // [rsp+8h] [rbp-160h]
  unsigned __int64 *v123; // [rsp+8h] [rbp-160h]
  _QWORD *v124; // [rsp+8h] [rbp-160h]
  __int64 v126; // [rsp+18h] [rbp-150h]
  _QWORD *v127; // [rsp+18h] [rbp-150h]
  _QWORD *v128; // [rsp+18h] [rbp-150h]
  int v129; // [rsp+18h] [rbp-150h]
  int v130; // [rsp+18h] [rbp-150h]
  __int64 v131; // [rsp+18h] [rbp-150h]
  __int64 v132; // [rsp+20h] [rbp-148h]
  __int64 v133; // [rsp+20h] [rbp-148h]
  __int8 v134; // [rsp+30h] [rbp-138h]
  __int64 v135; // [rsp+30h] [rbp-138h]
  __int64 v136; // [rsp+38h] [rbp-130h]
  int v137; // [rsp+44h] [rbp-124h]
  unsigned __int8 v138; // [rsp+44h] [rbp-124h]
  _QWORD *v139; // [rsp+48h] [rbp-120h]
  _BYTE *v140; // [rsp+48h] [rbp-120h]
  __int64 v141; // [rsp+50h] [rbp-118h]
  __int8 v142; // [rsp+50h] [rbp-118h]
  void *src; // [rsp+58h] [rbp-110h]
  _DWORD *v144; // [rsp+68h] [rbp-100h]
  __m128i v145; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v146; // [rsp+80h] [rbp-E8h]
  unsigned int v147; // [rsp+84h] [rbp-E4h]
  __int64 v148; // [rsp+88h] [rbp-E0h]
  int v149; // [rsp+90h] [rbp-D8h]
  char v150; // [rsp+96h] [rbp-D2h]
  char v151; // [rsp+97h] [rbp-D1h]
  _QWORD *v152; // [rsp+98h] [rbp-D0h]
  __int64 v153; // [rsp+A0h] [rbp-C8h]
  int v154; // [rsp+A8h] [rbp-C0h]
  int v155; // [rsp+ACh] [rbp-BCh]
  __int64 v156; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int8 v157; // [rsp+B8h] [rbp-B0h]
  void **v158; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v159; // [rsp+C8h] [rbp-A0h]
  unsigned __int64 *v160; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v161; // [rsp+D8h] [rbp-90h]
  __int64 v162; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v163; // [rsp+F8h] [rbp-70h]
  __m128i v164; // [rsp+108h] [rbp-60h]
  unsigned __int64 v165; // [rsp+118h] [rbp-50h]
  char v166; // [rsp+120h] [rbp-48h]
  unsigned __int64 v167; // [rsp+128h] [rbp-40h]

  v145.m128i_i64[1] = a4;
  v152 = a5;
  v167 = __readfsqword(0x28u);
  v144 = *(_DWORD **)(a4 + 1504);
  if ( a1 != (__m128i *)(*a5 + 24LL * a1[1].m128i_i32[0]) )
  {
    if ( !under_debugger )
      sub_383060(0xC72Cu, a7);
    goto LABEL_202;
  }
  if ( *(_BYTE *)(a3 + 8) != *(_BYTE *)(a2 + 32) )
  {
    if ( !under_debugger )
      sub_383060(0xCAB3u, a7);
    goto LABEL_202;
  }
  sub_1045E0((unsigned __int64 *)a1, (__int64)v144);
  v13 = *(_BYTE *)(a2 + 32);
  v14 = *(_BYTE *)(a3 + 8);
  v134 = v13;
  if ( v13 < v14 || v14 < v13 )
LABEL_182:
    sub_101D50(a7);
  v15 = *(_QWORD *)(a2 + 24);
  v16 = *(_QWORD *)a3;
  v136 = v15;
  if ( v15 < *(_QWORD *)a3 )
  {
    v154 = -1;
  }
  else
  {
    if ( v15 > v16 )
    {
      v18 = v15 + *(int *)(a2 + 40);
      v19 = v16 + *(int *)(a3 + 12);
      v141 = v19;
      if ( v18 < v19 || v18 <= v19 )
      {
        v134 = *(_BYTE *)(a3 + 8);
        v136 = *(_QWORD *)a3;
        LOBYTE(v146) = v134;
        v154 = 1;
        goto LABEL_15;
      }
      v116 = v134;
      v136 = *(_QWORD *)a3;
      v134 = *(_BYTE *)(a3 + 8);
      LOBYTE(v146) = v116;
      v141 = v18;
      v154 = 1;
      goto LABEL_181;
    }
    v154 = 0;
  }
  v141 = *(_QWORD *)a3 + *(int *)(a3 + 12);
  v17 = v15 + *(int *)(a2 + 40);
  if ( *(_QWORD *)a3 < v15 )
  {
    if ( v141 < v17 )
    {
      v141 = v15 + *(int *)(a2 + 40);
      LOBYTE(v146) = v13;
      goto LABEL_15;
    }
  }
  else if ( v141 <= v17 )
  {
    if ( !under_debugger )
      sub_383060(0xCB04u, a7);
    goto LABEL_202;
  }
  LOBYTE(v146) = v14;
LABEL_181:
  if ( (_BYTE)v146 != v134 )
    goto LABEL_182;
LABEL_15:
  v153 = v141 - v136;
  v137 = v141 - v136;
  if ( v134 == 1 )
  {
    if ( (a8 & 1) == 0 && (int)sub_1338F0(v144, nullptr, v136, 0x7FFFFFFFu) < (int)v153
      || (unsigned __int8)sub_64A60((_QWORD *)(v145.m128i_i64[1] + 296), v136, v137)
      && !(unsigned __int8)sub_64A10((_QWORD *)(v145.m128i_i64[1] + 296), v136, v137) )
    {
      goto LABEL_56;
    }
    v68 = v144[17];
    if ( v68 > (int)v136 )
    {
      if ( v68 <= (int)v141 - 1 )
      {
        if ( !under_debugger )
          sub_383060(0xCAFAu, a7);
        goto LABEL_202;
      }
      v69 = (*(unsigned int (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v144 + 184LL))(v144, (unsigned int)v136);
      v129 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v144 + 32LL))(v144, v69);
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v144 + 264LL))(v144, (unsigned int)v69) )
      {
        v21 = (int)v69;
        if ( !v129 )
          goto LABEL_56;
        if ( (int)v136 < (unsigned __int64)(int)v69 )
          goto LABEL_56;
        v21 = v129 + (__int64)(int)v69 - 1;
        if ( v21 < (int)v136 + (__int64)(int)v153 - 1 )
          goto LABEL_56;
      }
      else
      {
        v42 = v69 + v129;
        if ( (int)v141 > (int)v69 + v129 )
        {
          while ( 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v144 + 264LL))(v144, v42) )
              goto LABEL_56;
            v43 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v144 + 32LL))(v144, v42);
            if ( v43 <= 0 )
              break;
            v42 += v43;
            if ( (int)v141 <= (int)v42 )
              goto LABEL_100;
          }
          if ( !under_debugger )
            sub_383060(0xCAFBu, a7);
          goto LABEL_202;
        }
      }
    }
LABEL_100:
    v14 = *(_BYTE *)(a3 + 8);
  }
  if ( v14 == 5 )
  {
    v20 = *(_QWORD *)a3;
    v21 = *(unsigned int *)(a3 + 12);
    if ( *(int *)(v145.m128i_i64[1] + 116) > 0 )
    {
      v22 = *(_QWORD *)(v145.m128i_i64[1] + 136);
      if ( v22 != v20 && v22 >= v20 && (_DWORD)v21 && (int)v21 + v20 - 1 >= v22 )
        goto LABEL_56;
    }
    v23 = *(_QWORD *)(v145.m128i_i64[1] + 144);
    if ( v23 != v20 && v23 >= v20 && (_DWORD)v21 && (int)v21 + v20 - 1 >= v23 )
      goto LABEL_56;
    if ( (unsigned __int8)sub_228B40(v145.m128i_i64[1], v20, v21, 0) )
      goto LABEL_56;
  }
  v24.m128i_i64[0] = 0;
  v162 = 0;
  v166 = 1;
  v164.m128i_i64[0] = v136;
  v163 = 0;
  v164.m128i_i8[8] = v134;
  v165 = 0xFFFFFFFF00000001LL;
  v25 = &v162;
  v26 = (const __m128i *)sub_1041A0((unsigned __int64 *)a1, (__int64)&v162);
  v28 = (__int64 *)a1->m128i_i64[0];
  v29 = (__m128i *)v26;
  if ( (const __m128i *)a1->m128i_i64[0] != v26 )
  {
    v30 = (unsigned __int64)&v26[1].m128i_u64[1];
    if ( v26[3].m128i_i8[8] == v134 && v26[3].m128i_i64[0] == v136 )
      goto LABEL_38;
    if ( !v26[2].m128i_i64[0] )
    {
      v162 = 0;
      v163 = 0;
      v31 = _mm_loadu_si128(v26 + 3);
      v165 = 0xFFFFFFFF00000001LL;
      v166 = 1;
      v164 = v31;
      v25 = sub_102B40(v28, (__int64)&v162);
      if ( v28 != v25 )
        sub_107EB0((unsigned __int64 **)a1, v25);
      goto LABEL_32;
    }
LABEL_56:
    v158 = nullptr;
    v159 = 0;
    sub_32F770((__int64 *)(a2 + 24), &v158, v21);
    v162 = 0;
    v163.m128i_i64[0] = 0;
    sub_32F770((__int64 *)a3, &v162, v44);
    sub_1EFA10(v144, a9, (__int64)&v158, *(_DWORD *)(a2 + 40), &v162, *(_DWORD *)(a3 + 12));
    sub_106EE0(v145.m128i_i64[1], a2, v152, a6);
    cleanup_argloc();
    cleanup_argloc();
    return 0;
  }
LABEL_32:
  v32 = *(_QWORD *)(a2 + 8);
  v33 = nullptr;
  v162 = 0;
  v164.m128i_i64[0] = v136;
  v163 = 0;
  v164.m128i_i8[8] = v134;
  v165 = *(_QWORD *)(a2 + 40);
  v166 = *(_BYTE *)(a2 + 48);
  if ( v32 )
  {
    v33 = (void *)qalloc_or_throw(4 * v32, (__int64)v25, v21, v27);
    memcpy(v33, *(const void **)a2, 4 * v32);
    if ( v162 )
    {
      v163.m128i_i64[0] = 0;
      qfree(v162);
    }
  }
  v24 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
  v162 = (__int64)v33;
  v158 = (void **)&v162;
  v163 = v24;
  v29 = (__m128i *)sub_1078B0(a1, (__int64)&v162, (__int64 **)&v158);
  if ( v162 )
  {
    v163.m128i_i64[0] = 0;
    qfree(v162);
  }
  if ( a10 )
    sub_64190(a10, a1[1].m128i_i32[0], *(double *)v24.m128i_i64);
  v30 = (unsigned __int64)&v29[1].m128i_u64[1];
LABEL_38:
  v155 = *(_DWORD *)(v30 + 40);
  *(_DWORD *)(v30 + 40) = v153;
  v139 = sub_106CC0(v29);
  v36 = (_QWORD *)a1->m128i_i64[0];
  if ( v139 != (_QWORD *)a1->m128i_i64[0] )
  {
    v151 = 1;
    v149 = -1;
    v147 = 0;
    v150 = 0;
    v148 = -1;
    v145.m128i_i64[0] = 0;
    src = nullptr;
    while ( 1 )
    {
      v37 = (unsigned __int8)v146;
      v38 = (const void **)(v139 + 3);
      v39 = *((_BYTE *)v139 + 56);
      if ( v39 >= (unsigned __int8)v146 && ((unsigned __int8)v146 < v39 || v139[6] >= v141) )
        break;
      v45 = 0;
      for ( i = 0; (unsigned __int64)v45 < v139[4]; i = v45 )
      {
        v47 = *(_QWORD *)v30;
        v48 = *((_DWORD *)*v38 + i);
        v34 = *(_QWORD *)(v30 + 8);
        j = *(_QWORD *)v30 + 4 * v34;
        if ( *(_QWORD *)v30 == j )
          goto LABEL_73;
        v49 = *(_DWORD **)v30;
        while ( v48 != *v49 )
        {
          if ( (_DWORD *)j == ++v49 )
            goto LABEL_73;
        }
        if ( v49 == (_DWORD *)j )
        {
LABEL_73:
          v132 = *(_QWORD *)v30 + 4 * v34;
          v53 = *a6;
          v126 = *(_QWORD *)(v30 + 8);
          v162 = 0;
          HIDWORD(v165) = -1;
          v119 = (unsigned __int64 *)(v53 + 24LL * v48);
          v164.m128i_i64[0] = v136;
          v166 = 1;
          v164.m128i_i8[8] = v134;
          v163 = 0;
          LODWORD(v165) = v141 - v136;
          v54 = sub_1041A0(v119, (__int64)&v162);
          v55 = v54;
          if ( v54 != (_QWORD *)*v119 )
          {
            v56 = (__int64)(v54 + 3);
            if ( v54 != (_QWORD *)-24LL )
            {
              v57 = (_DWORD *)v132;
              v58 = v126 + 1;
              if ( *(_QWORD *)(v30 + 16) < (unsigned __int64)(v126 + 1) )
              {
                v127 = v54;
                v120 = v54 + 3;
                v62 = qvector_reserve(v30, v47, v58, 4);
                v63 = *(_QWORD *)(v30 + 8);
                v55 = v127;
                *(_QWORD *)v30 = v62;
                v56 = (__int64)v120;
                v57 = (_DWORD *)(v62 + 4 * v63);
              }
              *v57 = v48;
              ++*(_QWORD *)(v30 + 8);
              v59 = v55[3];
              j = *(_QWORD *)(v56 + 8);
              v60 = a1[1].m128i_i32[0];
              v34 = v59 + 4 * j;
              if ( v59 == v34 )
                goto LABEL_82;
              v61 = (_DWORD *)v55[3];
              while ( v60 != *v61 )
              {
                if ( (_DWORD *)v34 == ++v61 )
                  goto LABEL_82;
              }
              if ( (_DWORD *)v34 == v61 )
              {
LABEL_82:
                if ( *(_QWORD *)(v56 + 16) < (unsigned __int64)(j + 1) )
                {
                  v128 = v55;
                  v121 = v56;
                  v66 = qvector_reserve(v56, v59, j + 1, 4);
                  v56 = v121;
                  v128[3] = v66;
                  v34 = v66 + 4LL * *(_QWORD *)(v121 + 8);
                }
                *(_DWORD *)v34 = v60;
                ++*(_QWORD *)(v56 + 8);
              }
            }
          }
        }
        ++v45;
      }
      if ( (v139[9] & 4) != 0 )
        *(_BYTE *)(v30 + 48) |= 4u;
      v50 = *((_BYTE *)v139 + 56);
      v51 = (unsigned __int8)v146;
      if ( v50 >= (unsigned __int8)v146 )
      {
        if ( (unsigned __int8)v146 < v50 || (v51 = v141, v139[6] + *((int *)v139 + 16) > v141) )
        {
          v64 = v139[4];
          v65 = nullptr;
          v145.m128i_i64[0] = v64;
          if ( v64 )
          {
            v67 = 4 * v64;
            v65 = (void *)qalloc_or_throw(4 * v64, v51, v34, j);
            memcpy(v65, *v38, v67);
          }
          if ( src )
            qfree((__int64)src);
          src = v65;
          v148 = v139[6];
          v150 = *((_BYTE *)v139 + 56);
          v147 = *((_DWORD *)v139 + 16);
          v149 = *((_DWORD *)v139 + 17);
          v151 = *((_BYTE *)v139 + 72);
        }
      }
      v37 = (unsigned __int64)v139;
      v52 = sub_106CC0(v139);
      sub_107EB0((unsigned __int64 **)a1, v139);
      if ( a10 )
      {
        v37 = a1[1].m128i_u32[0];
        sub_64190(a10, v37, *(double *)v24.m128i_i64);
      }
      v36 = (_QWORD *)a1->m128i_i64[0];
      if ( (_QWORD *)a1->m128i_i64[0] == v52 )
        break;
      v139 = v52;
    }
    if ( v154 != 1 )
    {
LABEL_44:
      v138 = 0;
      if ( !v150 )
        goto LABEL_45;
      v71 = nullptr;
      v162 = 0;
      v164.m128i_i64[0] = v141;
      v163 = 0;
      v164.m128i_i8[8] = v146;
      v165 = __PAIR64__(v149, v147);
      v166 = v151;
      if ( v145.m128i_i64[0] )
      {
        v71 = (void *)qalloc_or_throw(4 * v145.m128i_i64[0], v37, v34, j);
        memcpy(v71, src, 4 * v145.m128i_i64[0]);
        if ( v162 )
        {
          v163.m128i_i64[0] = 0;
          qfree(v162);
        }
      }
      v72 = _mm_loadl_epi64(&v145);
      v162 = (__int64)v71;
      v73 = _mm_unpacklo_epi64(v72, v72);
      v158 = (void **)&v162;
      v163 = v73;
      v140 = sub_1078B0(a1, (__int64)&v162, (__int64 **)&v158);
      if ( v162 )
      {
        v163.m128i_i64[0] = 0;
        qfree(v162);
      }
      v74 = v140 + 24;
      if ( v150 != (_BYTE)v146 )
        sub_101D50(*(double *)v73.m128i_i64);
      v75 = v148;
      *((_DWORD *)v140 + 17) = -1;
      v76 = *((_DWORD *)v140 + 16);
      v140[72] &= ~2u;
      v77 = v145.m128i_i64[1];
      v78 = v76 - (v141 - v75);
      *((_DWORD *)v140 + 16) = v78;
      v79 = *(_QWORD *)(v77 + 1440);
      v158 = nullptr;
      v161 = 0;
      v159 = 0;
      v160 = nullptr;
      sub_32F540((__int64)(v140 + 48), v79, (__int64 *)&v158, v78);
      v80 = a1[1].m128i_u32[0];
      if ( (unsigned int)v80 >= *(_DWORD *)(v77 + 64) )
        sub_101D70(0.0);
      v81 = *(_QWORD *)(*(_QWORD *)(v145.m128i_i64[1] + 528) + 8 * v80);
      v82 = (_QWORD *)(v81 + 240);
      v83 = (_QWORD *)(v81 + 160);
      if ( (a8 & 2) == 0 )
        v82 = v83;
      v84 = v82;
      if ( (unsigned __int8)sub_64780(&v158, v82) )
      {
        v85 = *((_QWORD *)v140 + 4);
      }
      else
      {
        v138 = sub_318470(&v160, (__int64)(v84 + 2));
        v85 = *((_QWORD *)v140 + 4);
        v90 = v85 - 1;
        v122 = v85 - 1;
        if ( !v138 )
        {
          v135 = 4LL * (unsigned int)v90;
          if ( v90 >= 0 )
          {
            do
            {
              v91 = *((_QWORD *)v140 + 6);
              v130 = *(_DWORD *)(*v74 + v135);
              v92 = (unsigned __int64 *)(*a6 + 24LL * v130);
              v93 = *((_DWORD *)v140 + 16);
              v164.m128i_i8[8] = v140[56];
              v142 = v164.m128i_i8[8];
              v162 = 0;
              v165 = v93 | 0xFFFFFFFF00000000LL;
              v146 = v93;
              v164.m128i_i64[0] = v91;
              v166 = 1;
              v163 = 0;
              v94 = sub_1041A0(v92, (__int64)&v162);
              v95 = v142;
              v96 = v146;
              v97 = v94;
              if ( (_QWORD *)*v92 != v94 )
              {
                while ( 1 )
                {
                  v98 = v91 + (int)v96;
                  v99 = *((_BYTE *)v97 + 56);
                  v100 = (_DWORD **)(v97 + 3);
                  if ( v99 >= v95 && (v95 < v99 || v98 <= v97[6]) )
                    break;
                  if ( *(_BYTE *)(v30 + 32) != *((_BYTE *)v97 + 56)
                    || !*(_DWORD *)(v30 + 40)
                    || !*((_DWORD *)v97 + 16)
                    || (v104 = *(_QWORD *)(v30 + 24), v105 = v97[6], *(int *)(v30 + 40) + v104 - 1 < v105)
                    || *((int *)v97 + 16) + v105 - 1 < v104 )
                  {
                    v101 = *((_BYTE *)v97 + 56);
                    v102 = *((int *)v97 + 16);
                    v157 = v95;
                    v103 = v97[6] + v102;
                    v156 = v98;
                    v162 = v103;
                    v163.m128i_i8[0] = v101;
                    if ( !(unsigned __int8)sub_104440((unsigned __int64 *)a1, &v156, &v162, v130, 0.0) )
                    {
                      v106 = *v100;
                      v107 = v97[3] + 4LL * v97[4];
                      if ( *v100 != (_DWORD *)v107 )
                      {
                        while ( a1[1].m128i_i32[0] != *v106 )
                        {
                          if ( (_DWORD *)v107 == ++v106 )
                            goto LABEL_146;
                        }
                        if ( (_DWORD *)v107 != v106 )
                        {
                          memmove(v106, v106 + 1, v107 - (_QWORD)v106 - 4);
                          --v97[4];
                        }
                      }
                    }
                  }
LABEL_146:
                  v97 = sub_106CC0(v97);
                  if ( v97 == (_QWORD *)*v92 )
                    break;
                  v96 = *((_DWORD *)v140 + 16);
                  v91 = *((_QWORD *)v140 + 6);
                  v95 = v140[56];
                }
              }
              --v122;
              v135 -= 4;
            }
            while ( v122 != -1 );
          }
          sub_107EB0((unsigned __int64 **)a1, (__int64 *)v140);
          goto LABEL_131;
        }
      }
      v86 = (unsigned int)(v85 - 1);
      v87 = 4 * v86;
      if ( (int)v86 >= 0 )
      {
        do
        {
          v88 = v140[56];
          v89 = *(int *)(*v74 + v87);
          v162 = *((_QWORD *)v140 + 6) + *((int *)v140 + 16);
          v163.m128i_i8[0] = v88;
          if ( !(unsigned __int8)sub_104440(
                                   (unsigned __int64 *)(*a6 + 24 * v89),
                                   (__int64 *)v140 + 6,
                                   &v162,
                                   a1[1].m128i_i32[0],
                                   0.0) )
          {
            memmove(
              (void *)(v87 + *((_QWORD *)v140 + 3)),
              (const void *)(v87 + *((_QWORD *)v140 + 3) + 4),
              4LL * *((_QWORD *)v140 + 4) - 4 - v87);
            --*((_QWORD *)v140 + 4);
          }
          LODWORD(v86) = v86 - 1;
          v87 -= 4;
        }
        while ( (_DWORD)v86 != -1 );
      }
      v138 = sub_1048A0(v145.m128i_i64[1], v152, a6, a1[1].m128i_u32[0], (__int64)v74, 0);
LABEL_131:
      sub_93B40((__int64 *)&v158);
      goto LABEL_45;
    }
    goto LABEL_104;
  }
  if ( v154 == 1 )
  {
    v151 = 1;
    v147 = 0;
    v148 = -1;
    v150 = 0;
    v149 = -1;
    src = nullptr;
    v145.m128i_i64[0] = 0;
LABEL_104:
    v37 = (unsigned __int64)&v162;
    v162 = 0;
    v166 = 1;
    v164.m128i_i64[0] = v136;
    v163 = 0;
    v164.m128i_i8[8] = v134;
    v165 = 0xFFFFFFFF00000001LL;
    v34 = (__int64)sub_102B40(v36, (__int64)&v162);
    if ( (_QWORD *)v34 != v36 )
    {
      if ( v36 )
      {
        if ( !a1->m128i_i64[1] )
        {
LABEL_109:
          if ( (*(_QWORD *)v34 & 2) != 0 )
          {
            v70 = *(__int64 **)(v34 + 16);
          }
          else
          {
            j = *(_QWORD *)(v34 + 8);
            if ( (*(_BYTE *)j & 2) != 0 )
            {
              v70 = (__int64 *)(*(_QWORD *)v34 & 0xFFFFFFFFFFFFFFFCLL);
              for ( j = *v70; (j & 2) == 0; v70 = (__int64 *)v37 )
              {
                if ( v34 != v70[1] )
                  break;
                v34 = (__int64)v70;
                v37 = j & 0xFFFFFFFFFFFFFFFCLL;
                j = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFFCLL);
              }
            }
            else
            {
              do
              {
                v70 = (__int64 *)j;
                j = *(_QWORD *)(j + 16);
              }
              while ( (*(_BYTE *)j & 2) == 0 );
            }
          }
          v108 = (int *)v70[3];
          for ( k = &v108[v70[4]]; k != v108; ++v108 )
          {
            v110 = *(_QWORD *)v30;
            j = *(_QWORD *)(v30 + 8);
            v111 = *v108;
            v34 = *(_QWORD *)v30 + 4 * j;
            if ( *(_QWORD *)v30 == v34 )
              goto LABEL_169;
            v112 = *(_DWORD **)v30;
            while ( v111 != *v112 )
            {
              if ( (_DWORD *)v34 == ++v112 )
                goto LABEL_169;
            }
            if ( (_DWORD *)v34 == v112 )
            {
LABEL_169:
              v133 = *(_QWORD *)(v30 + 8);
              v131 = *(_QWORD *)v30 + 4 * j;
              v37 = v30;
              v123 = (unsigned __int64 *)(*a6 + 24LL * v111);
              v113 = sub_1041A0(v123, v30);
              if ( v113 != (_QWORD *)*v123 )
              {
                v114 = v113 + 3;
                if ( v113 != (_QWORD *)-24LL )
                {
                  v37 = v113[3];
                  v115 = v37 + 4LL * v113[4];
                  if ( v37 != v115 )
                  {
                    v34 = v131;
                    j = v133;
                    while ( a1[1].m128i_i32[0] != *(_DWORD *)v37 )
                    {
                      v37 += 4LL;
                      if ( v115 == v37 )
                        goto LABEL_167;
                    }
                    if ( v37 != v115 )
                    {
                      if ( *(_QWORD *)(v30 + 16) < (unsigned __int64)(v133 + 1) )
                      {
                        v37 = v110;
                        v124 = v114;
                        v117 = qvector_reserve(v30, v110, v133 + 1, 4);
                        v118 = *(_QWORD *)(v30 + 8);
                        v114 = v124;
                        *(_QWORD *)v30 = v117;
                        v34 = v117 + 4 * v118;
                      }
                      *(_DWORD *)v34 = v111;
                      ++*(_QWORD *)(v30 + 8);
                      if ( (v114[6] & 4) != 0 )
                        *(_BYTE *)(v30 + 48) |= 4u;
                    }
                  }
                }
              }
            }
LABEL_167:
            ;
          }
          goto LABEL_44;
        }
        v36 = (_QWORD *)v36[1];
      }
      if ( (_QWORD *)v34 == v36 )
        goto LABEL_44;
      goto LABEL_109;
    }
    if ( !under_debugger )
      sub_383060(0xCB43u, 0.0);
LABEL_202:
    BUG();
  }
  src = nullptr;
  v138 = 0;
LABEL_45:
  v40 = a1[1].m128i_u32[0];
  if ( v40 && v155 < (int)v153 )
    v138 |= sub_1048A0(v145.m128i_i64[1], v152, a6, v40, v30, v155);
  sub_106F70(v145.m128i_i64[1], v30, v152, a6);
  sub_1045E0((unsigned __int64 *)a1, (__int64)v144);
  if ( src )
    qfree((__int64)src);
  return (unsigned int)v138 + 1;
}

