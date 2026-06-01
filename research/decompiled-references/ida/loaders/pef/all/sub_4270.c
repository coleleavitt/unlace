unsigned __int64 __fastcall sub_4270(unsigned __int64 *a1)
{
  const char *v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int *v9; // rax
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rbx
  int *v13; // rax
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  const char *v18; // rcx
  const char *v19; // r8
  __int64 v20; // rbx
  __int8 *v21; // rdx
  unsigned __int32 v22; // esi
  unsigned __int32 v23; // r9d
  __int64 v24; // r8
  unsigned __int32 v25; // r10d
  unsigned int v26; // r14d
  __int64 v27; // rdi
  __m128i v28; // xmm2
  unsigned int v29; // r12d
  unsigned __int32 v30; // r11d
  __m128i v31; // xmm1
  __int8 *v32; // r13
  unsigned int v33; // ebx
  unsigned int v34; // ecx
  unsigned __int64 v35; // rdi
  __int64 v36; // r8
  int v37; // r13d
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char *v41; // r15
  char *v42; // rbx
  __int64 v43; // r12
  __int8 *v44; // rbp
  __int64 v45; // rcx
  unsigned __int64 v46; // r12
  __int64 v47; // r11
  const __m128i *v48; // r14
  __int8 *v49; // rcx
  unsigned int i; // ecx
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // edx
  unsigned int v54; // esi
  __m128i v55; // xmm0
  __int64 v56; // rsi
  unsigned int j; // edx
  __int64 v58; // rax
  unsigned int *v59; // rax
  __m128i v60; // xmm1
  unsigned __int32 v61; // ecx
  unsigned int k; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // ecx
  int v66; // eax
  int v67; // ebx
  __int64 v68; // rbx
  __int64 v69; // r8
  unsigned __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // rdx
  unsigned __int64 v73; // rbx
  unsigned int v74; // ebx
  unsigned int v75; // r14d
  unsigned int v76; // r12d
  int v77; // r15d
  int v78; // ebp
  __int64 v79; // rdx
  int v80; // ecx
  __int64 v81; // rcx
  __int64 v82; // kr10_8
  int v83; // r15d
  __int64 v84; // rdx
  unsigned int *v85; // rsi
  unsigned __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r10
  unsigned __int32 v89; // eax
  unsigned __int64 v90; // rsi
  unsigned __int64 v91; // rcx
  __int16 v92; // dx
  __int64 v93; // rdx
  unsigned int v94; // r12d
  int v95; // r15d
  int v96; // r15d
  int v97; // r15d
  int v98; // r15d
  int v99; // r15d
  int v100; // r15d
  __int64 v101; // rcx
  __int64 v102; // rcx
  unsigned int v103; // edx
  unsigned __int64 v104; // r14
  __int64 v105; // rax
  int v106; // ebx
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 free_chunk; // rbp
  __int64 v110; // rsi
  unsigned int m; // ebx
  __int64 v112; // rdx
  unsigned int *v113; // r13
  __int64 v114; // rcx
  bool v115; // cf
  const char *v116; // rcx
  const char *v117; // rax
  __int64 v118; // r12
  unsigned int v119; // r12d
  __int64 v120; // r13
  unsigned int v121; // r14d
  int v122; // ebx
  unsigned __int64 v123; // rsi
  unsigned int v124; // ebx
  __int64 dword; // rsi
  __int64 v126; // rcx
  char v127; // [rsp+0h] [rbp-578h]
  void *src; // [rsp+8h] [rbp-570h]
  unsigned __int8 srca; // [rsp+8h] [rbp-570h]
  __int8 *srcb; // [rsp+8h] [rbp-570h]
  unsigned int srcc; // [rsp+8h] [rbp-570h]
  __int8 *v132; // [rsp+10h] [rbp-568h]
  unsigned __int64 v133; // [rsp+10h] [rbp-568h]
  __int64 v134; // [rsp+18h] [rbp-560h]
  int v135; // [rsp+20h] [rbp-558h]
  int v136; // [rsp+24h] [rbp-554h]
  unsigned int v137; // [rsp+28h] [rbp-550h]
  unsigned int v138; // [rsp+2Ch] [rbp-54Ch]
  char v139; // [rsp+3Fh] [rbp-539h] BYREF
  __int64 v140; // [rsp+40h] [rbp-538h] BYREF
  __int128 v141; // [rsp+48h] [rbp-530h]
  const __m128i *v142; // [rsp+60h] [rbp-518h] BYREF
  __int128 v143; // [rsp+68h] [rbp-510h]
  _OWORD v144[8]; // [rsp+80h] [rbp-4F8h] BYREF
  unsigned int v145; // [rsp+100h] [rbp-478h] BYREF
  char s1[24]; // [rsp+108h] [rbp-470h] BYREF
  unsigned __int16 v147; // [rsp+120h] [rbp-458h]
  _BYTE v148[1032]; // [rsp+130h] [rbp-448h] BYREF
  unsigned __int64 v149; // [rsp+538h] [rbp-40h]

  v149 = __readfsqword(0x28u);
  qword_81E8 = -1;
  netnode_check(&qword_81E0, "$ toc", 0, 1);
  qlseek(a1, 0, 0);
  lread(a1, &v145, 40);
  sub_2520(&v145);
  if ( !strncmp(s1, "pwpc", 4u) )
  {
    v2 = "ppc";
  }
  else
  {
    v2 = "68000";
    if ( strncmp(s1, "m68k", 4u) )
      goto LABEL_5;
  }
  set_processor_type(v2, 1);
  if ( *(_DWORD *)(((__int64 (*)(void))get_ph)() + 4) == 15 )
  {
    v144[0] = 0;
    set_compiler(v144, 4, "aix");
  }
LABEL_5:
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  v140 = 0;
  v141 = 0;
  if ( !v147 )
    return v149 - __readfsqword(0x28u);
  v4 = v147;
  v140 = qvector_reserve(&v140, 0, v147, 28);
  memset((void *)(v140 + 28 * v141), 0, 28 * (v4 - v141));
  *(_QWORD *)&v141 = v4;
  lread(a1, v140, 28 * v4);
  v5 = v140;
  if ( (_QWORD)v141 )
  {
    LODWORD(v6) = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = (unsigned int *)(28 * v8 + v5);
      *v9 = _byteswap_ulong(*v9);
      v9[1] = _byteswap_ulong(v9[1]);
      v9[2] = _byteswap_ulong(v9[2]);
      v9[3] = _byteswap_ulong(v9[3]);
      v9[4] = _byteswap_ulong(v9[4]);
      v9[5] = _byteswap_ulong(v9[5]);
      v5 = v140;
      if ( *(_BYTE *)(v140 + 28 * v8 + 24) == 4 )
        v7 = v140 + 28 * v8;
      v6 = (unsigned int)(v6 + 1);
      v8 = (int)v6;
    }
    while ( (int)v6 < (unsigned __int64)v141 );
    if ( (_QWORD)v141 )
    {
      v10 = 0;
      v11 = 0;
      src = (void *)(28 * (int)v141 + 40);
      while ( 1 )
      {
        v12 = 28 * v11;
        v13 = (int *)(28 * v11 + v5);
        v14 = *v13;
        if ( (_DWORD)v14 == -1 )
        {
          v148[0] = 0;
          v15 = nullptr;
        }
        else
        {
          qlseek(a1, (char *)src + v14, 0);
          v6 = (__int64)v148;
          lread(a1, v148, 1024);
          v148[1023] = 0;
          v15 = v148;
          v13 = (int *)(v12 + v140);
        }
        switch ( *((_BYTE *)v13 + 24) )
        {
          case 0:
          case 6:
            sub_2D60(v10, a1, (__int64)v13, (__int64)v15, (__int64)"CODE", 0);
            goto LABEL_19;
          case 1:
            v19 = "BSS";
            if ( v13[3] )
              v19 = "DATA";
            sub_2D60(v10, a1, (__int64)v13, (__int64)v15, (__int64)v19, 0);
            goto LABEL_19;
          case 2:
            sub_2D60(v10, a1, (__int64)v13, (__int64)v15, (__int64)"DATA", 1);
            goto LABEL_19;
          case 3:
            sub_2D60(v10, a1, (__int64)v13, (__int64)v15, (__int64)"CONST", 0);
LABEL_19:
            if ( !v10 )
              create_filename_cmt();
            v16 = v12 + v140;
            v17 = *(_BYTE *)(v12 + v140 + 25);
            switch ( v17 )
            {
              case 4u:
                v18 = "Shared between all processes";
                break;
              case 5u:
                v18 = "Shared between all processes but protected";
                break;
              case 1u:
                v18 = "Shared within process";
                break;
              default:
                qsnprintf(v148, 1024, "Unknown code %d", v17);
                v18 = v148;
                v16 = v140 + v12;
                break;
            }
            v6 = 1;
            sub_27F0(*(unsigned int *)(v16 + 4), 1u, (__int64)"Segment share type: %s\n", v18);
            goto LABEL_26;
          case 4:
          case 5:
          case 7:
          case 8:
LABEL_26:
            v11 = ++v10;
            if ( v10 < (unsigned __int64)v141 )
              goto LABEL_27;
            goto LABEL_35;
          default:
            sub_28B0((__int64)"Unknown section type", v6, v14);
            v11 = ++v10;
            if ( v10 >= (unsigned __int64)v141 )
              goto LABEL_35;
LABEL_27:
            v5 = v140;
            break;
        }
      }
    }
LABEL_35:
    if ( !v7 )
    {
LABEL_60:
      v5 = v140;
      goto LABEL_61;
    }
    v142 = nullptr;
    v143 = 0;
    v20 = *(unsigned int *)(v7 + 16);
    if ( *(_DWORD *)(v7 + 16) )
    {
      v142 = (const __m128i *)qvector_reserve(&v142, 0, *(unsigned int *)(v7 + 16), 1);
      memset(&v142->m128i_i8[v143], 0, v20 - v143);
      *(_QWORD *)&v143 = v20;
    }
    qlseek(a1, *(unsigned int *)(v7 + 20), 0);
    lread(a1, v142, v143);
    memset(v144, 0, 0x78u);
    if ( (unsigned __int64)v143 > 0x37 )
    {
      v21 = &v142->m128i_i8[v143];
      v144[0] = _mm_loadu_si128(v142);
      v144[1] = _mm_loadu_si128(v142 + 1);
      v22 = _byteswap_ulong(v144[0]);
      v23 = _byteswap_ulong(DWORD2(v144[0]));
      v144[2] = _mm_loadu_si128(v142 + 2);
      v24 = v142[3].m128i_i64[0];
      v25 = _byteswap_ulong(v144[1]);
      v26 = _byteswap_ulong(v144[2]);
      v27 = _byteswap_ulong(DWORD2(v144[1]));
      v28 = _mm_cvtsi32_si128(_byteswap_ulong(HIDWORD(v144[1])));
      v29 = _byteswap_ulong(DWORD1(v144[2]));
      v30 = _byteswap_ulong(HIDWORD(v24));
      *(_QWORD *)&v144[0] = __PAIR64__(_byteswap_ulong(DWORD1(v144[0])), v22);
      *((_QWORD *)&v144[0] + 1) = __PAIR64__(_byteswap_ulong(HIDWORD(v144[0])), v23);
      v31 = _mm_cvtsi32_si128(_byteswap_ulong(HIDWORD(v144[2])));
      v32 = &v142[3].m128i_i8[24 * (unsigned int)v27 + 8];
      *(__m128i *)((char *)&v144[1] + 4) = _mm_unpacklo_epi64(
                                             _mm_unpacklo_epi32(
                                               _mm_cvtsi32_si128(_byteswap_ulong(DWORD1(v144[1]))),
                                               _mm_cvtsi32_si128(v27)),
                                             _mm_unpacklo_epi32(v28, _mm_cvtsi32_si128(v26)));
      v33 = _byteswap_ulong(DWORD2(v144[2]));
      v34 = _byteswap_ulong(v24);
      LODWORD(v144[1]) = v25;
      DWORD1(v144[3]) = v30;
      *(__m128i *)((char *)&v144[2] + 4) = _mm_unpacklo_epi64(
                                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v33)),
                                             _mm_unpacklo_epi32(v31, _mm_cvtsi32_si128(v34)));
      if ( v32 >= &v142[3].m128i_i8[8] && &v142->m128i_i8[(unsigned __int64)v143] >= v32 && v21 >= &v142[3].m128i_i8[8] )
      {
        v41 = &v32[4 * _mm_cvtsi128_si32(v28)];
        if ( v21 >= v41 && v41 >= v32 )
        {
          v42 = &v142->m128i_i8[v33];
          if ( v21 >= &v41[12 * v26] && &v41[12 * v26] >= v41 && v42 >= (char *)v142 )
          {
            v132 = &v142->m128i_i8[v29];
            srca = (v21 >= v132) & (!__CFADD__(v142, v29) && v21 >= v42);
            if ( srca )
            {
              v43 = (unsigned int)(1 << v34);
              v44 = &v142->m128i_i8[_mm_cvtsi128_si32(v31)];
              v45 = v30;
              v46 = (unsigned __int64)&v44[4 * v43];
              v47 = 4LL * v30;
              v48 = (const __m128i *)(v46 + v47);
              if ( v45 )
              {
                if ( v48 < v142 )
                  goto LABEL_41;
                v49 = &v48->m128i_i8[2 * v45 + 2 * v47];
                srca = v49 >= (__int8 *)v48;
              }
              else
              {
                if ( v48 < v142 )
                  goto LABEL_41;
                v49 = (__int8 *)(v46 + v47);
              }
              if ( (((unsigned __int64)v48 >= v46
                  && v46 >= (unsigned __int64)v142
                  && (unsigned __int64)v21 >= v46
                  && v21 >= (__int8 *)v48)
                  & srca) != 0
                && v21 >= v49 )
              {
                srcb = &v142[3].m128i_i8[8];
                if ( (unsigned __int64)v141 >= (int)(v25 + 1)
                  && (unsigned __int64)v141 >= (int)(v23 + 1)
                  && (unsigned __int64)v141 >= (int)(v22 + 1) )
                {
                  *((_QWORD *)&v144[3] + 1) = qcalloc(v27, 24);
                  memmove(*((void **)&v144[3] + 1), srcb, 24LL * DWORD2(v144[1]));
                  *((_QWORD *)&v144[4] + 1) = qcalloc(LODWORD(v144[2]), 12);
                  memmove(*((void **)&v144[4] + 1), v41, 12LL * LODWORD(v144[2]));
                  *(_QWORD *)&v144[7] = qcalloc(DWORD1(v144[3]), 10);
                  memmove(*(void **)&v144[7], v48, 10LL * DWORD1(v144[3]));
                  *(_QWORD *)&v144[4] = qcalloc(HIDWORD(v144[1]), 4);
                  memmove(*(void **)&v144[4], v32, 4LL * HIDWORD(v144[1]));
                  for ( i = 0; i < DWORD2(v144[1]); *(__m128i *)v52 = v55 )
                  {
                    v51 = (int)i++;
                    v52 = *((_QWORD *)&v144[3] + 1) + 24 * v51;
                    v53 = *(_DWORD *)v52;
                    v54 = *(_DWORD *)(v52 + 4);
                    *(_WORD *)(v52 + 22) = __ROL2__(*(_WORD *)(v52 + 22), 8);
                    v55 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(
                              _mm_cvtsi32_si128(_byteswap_ulong(v53)),
                              _mm_cvtsi32_si128(_byteswap_ulong(v54))),
                            _mm_unpacklo_epi32(
                              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v52 + 8))),
                              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v52 + 12)))));
                    *(_DWORD *)(v52 + 16) = _byteswap_ulong(*(_DWORD *)(v52 + 16));
                  }
                  v56 = LODWORD(v144[2]);
                  for ( j = 0; j < LODWORD(v144[2]); v59[2] = v61 )
                  {
                    v58 = (int)j++;
                    v59 = (unsigned int *)(*((_QWORD *)&v144[4] + 1) + 12 * v58);
                    v60 = _mm_cvtsi32_si128(*v59);
                    v59[1] = _byteswap_ulong(v59[1]);
                    v61 = _byteswap_ulong(v59[2]);
                    *v59 = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi16(v60, 8u), _mm_slli_epi16(v60, 8u)));
                  }
                  for ( k = 0; k < DWORD1(v144[3]); *(_DWORD *)(v64 + 4) = _byteswap_ulong(*(_DWORD *)(v64 + 4)) )
                  {
                    v63 = (int)k++;
                    v64 = *(_QWORD *)&v144[7] + 10 * v63;
                    v65 = *(_DWORD *)v64;
                    *(_WORD *)(v64 + 8) = __ROL2__(*(_WORD *)(v64 + 8), 8);
                    *(_DWORD *)v64 = _byteswap_ulong(v65);
                  }
                  *(_QWORD *)&v144[5] = v42;
                  *(_QWORD *)&v144[6] = v44;
                  *((_QWORD *)&v144[5] + 1) = v132;
                  v66 = HIDWORD(v144[1]);
                  *((_QWORD *)&v144[6] + 1) = v46;
                  if ( HIDWORD(v144[1]) )
                    goto LABEL_186;
                  while ( LODWORD(v144[0]) == -1 )
                  {
                    if ( DWORD2(v144[0]) == -1 )
                      goto LABEL_86;
                    v106 = *(_DWORD *)(v140 + 32);
                    v68 = (unsigned int)get_dword((unsigned int)(HIDWORD(v144[0])
                                                               + *(_DWORD *)(v140 + 28LL * SDWORD2(v144[0]) + 4)
                                                               + 4))
                        + v106;
                    qword_81E8 = v68;
                    if ( *(_DWORD *)(((__int64 (*)(void))get_ph)() + 4) == 15 )
                      goto LABEL_85;
                    v66 = sub_2590();
LABEL_186:
                    v107 = (unsigned int)(4 * v66);
                    v108 = getinf(20);
                    free_chunk = find_free_chunk(v108, v107, 15);
                    set_selector(v141 + 1, 0);
                    v110 = free_chunk;
                    if ( !(unsigned __int8)add_segm(v141 + 1, free_chunk, free_chunk + v107, "IMPORT", "XTRN", 0) )
                      sub_2C60(0);
                    for ( m = 0; m < DWORD2(v144[1]); ++m )
                    {
                      v112 = 3LL * (int)m;
                      v113 = (unsigned int *)(*((_QWORD *)&v144[3] + 1) + 24LL * (int)m);
                      v114 = *v113;
                      v115 = __CFADD__(*(_QWORD *)&v144[5], v114);
                      v116 = (const char *)(*(_QWORD *)&v144[5] + v114);
                      if ( v115 || (v112 = (__int64)v142->m128i_i64 + v143, v116 >= &v142->m128i_i8[v143]) )
LABEL_203:
                        sub_2C60((__int64)"Bad loader data", v110, v112, v116);
                      v117 = v116;
                      while ( *v117 )
                      {
                        if ( (const char *)v112 == ++v117 )
                          goto LABEL_203;
                      }
                      v110 = 1;
                      v118 = free_chunk + 4 * v113[4];
                      sub_27F0(v118, 1u, (__int64)"Imports from library %s", v116);
                      if ( (v113[5] & 0x40) != 0 )
                      {
                        v110 = 1;
                        sub_27F0(v118, 1u, (__int64)"Library is weak");
                      }
                    }
                    v56 = 4;
                    setinf(9, 4);
                    if ( HIDWORD(v144[1]) )
                    {
                      v119 = 0;
                      do
                      {
                        v120 = (int)v119;
                        v121 = *(_DWORD *)(*(_QWORD *)&v144[4] + 4LL * (int)v119);
                        v122 = free_chunk + 4 * v119;
                        v123 = *(_QWORD *)&v144[5] + (_byteswap_ulong(v121) & 0xFFFFFF);
                        if ( v123 >= (unsigned __int64)((unsigned __int64)v142->m128i_u64 + v143) || !v123 )
                          sub_2C60((__int64)"Bad loader data");
                        set_name(free_chunk + (int)(4 * v119), v123, 1024);
                        if ( (v121 & 0x80u) != 0 )
                          make_name_weak(free_chunk + (int)(4 * v119));
                        create_data(free_chunk + (int)(4 * v119), 0x20000000, 4, -1);
                        v56 = 0;
                        put_dword(free_chunk + (int)(4 * v119++), 0);
                        *(_DWORD *)(*(_QWORD *)&v144[4] + 4 * v120) = v122;
                      }
                      while ( v119 < HIDWORD(v144[1]) );
                    }
                  }
                  v67 = *(_DWORD *)(v140 + 32);
                  v35 = (unsigned int)(DWORD1(v144[0]) + *(_DWORD *)(v140 + 28LL * SLODWORD(v144[0]) + 4) + 4);
                  v68 = (unsigned int)get_dword(v35) + v67;
                  qword_81E8 = v68;
                  if ( *(_DWORD *)(((__int64 (*)(void))get_ph)() + 4) != 15 )
                  {
                    sub_2590();
LABEL_213:
                    sub_2D30(v35, v56, v79, v126, v69);
                  }
LABEL_85:
                  sub_2A50(0xBB9u, v68, 0);
LABEL_86:
                  v35 = (unsigned __int64)"IDA_NORELOC";
                  if ( !(unsigned __int8)qgetenv("IDA_NORELOC", 0) )
                  {
                    v35 = (unsigned __int64)"Processing relocation information... ";
                    sub_2980((__int64)"Processing relocation information... ");
                    if ( LODWORD(v144[2]) )
                    {
                      v138 = 0;
                      do
                      {
                        v56 = v141;
                        v70 = *(unsigned __int16 *)(*((_QWORD *)&v144[4] + 1) + 12LL * (int)v138);
                        v134 = *((_QWORD *)&v144[4] + 1) + 12LL * (int)v138;
                        if ( v70 >= (unsigned __int64)v141 )
                          ((void (__noreturn *)(void))sub_2D30)();
                        v35 = *((_QWORD *)&v144[4] + 1) + 12LL * (int)v138;
                        v71 = *(_DWORD *)(v140 + 28 * v70 + 4);
                        v72 = *(unsigned int *)(v134 + 8);
                        v137 = v71;
                        v73 = *((_QWORD *)&v144[5] + 1) + 2 * v72;
                        v133 = v73;
                        if ( v73 < (unsigned __int64)v142
                          || (v72 = *(unsigned int *)(v134 + 4),
                              v35 = v73 + 2 * v72,
                              LOBYTE(v69) = v35 >= v73,
                              LOBYTE(v35) = (unsigned __int64)((unsigned __int64)v142->m128i_u64 + v143) >= v35,
                              ((unsigned __int8)v35 & (unsigned __int8)v69) == 0)
                          || (unsigned __int64)((unsigned __int64)v142->m128i_u64 + v143) < v73 )
                        {
                          sub_2D30(v35, v141, v72, v140, v69);
                        }
                        v74 = 0;
                        srcc = *(_DWORD *)(v140 + 4);
                        if ( (_QWORD)v141 != 1 )
                          v74 = *(_DWORD *)(v140 + 32);
                        if ( (_DWORD)v72 )
                        {
                          v135 = -1;
                          v75 = v71;
                          v76 = 0;
                          v77 = 0;
                          while ( 2 )
                          {
                            v78 = v77 + 1;
                            v79 = *(unsigned __int16 *)(v133 + 2LL * v77);
                            LOWORD(v79) = __ROL2__(v79, 8);
                            HIWORD(v80) = WORD1(v79);
                            v69 = (unsigned int)v79;
                            LOWORD(v80) = (unsigned __int16)v79 >> 9;
                            LOWORD(v69) = v79 & 0x1FF;
                            LODWORD(v81) = v80 - 32;
                            v82 = (unsigned int)v81;
                            v81 = (unsigned __int16)v81;
                            switch ( (__int16)v81 )
                            {
                              case 0:
                                v100 = v75 + 4 * (unsigned __int16)v69 + 4;
                                do
                                {
                                  v56 = srcc;
                                  v35 = v75;
                                  sub_25B0(v75, srcc, 0);
                                  v75 += 4;
                                }
                                while ( v75 != v100 );
                                v77 = v78;
                                goto LABEL_108;
                              case 1:
                                v98 = v75 + 4 * (unsigned __int16)v69 + 4;
                                do
                                {
                                  v56 = v74;
                                  v35 = v75;
                                  sub_25B0(v75, v74, 0);
                                  v75 += 4;
                                }
                                while ( v75 != v98 );
                                v77 = v78;
                                goto LABEL_108;
                              case 2:
                                v99 = v75 + 12 * (unsigned __int16)v69 + 12;
                                do
                                {
                                  sub_25B0(v75, srcc, 0);
                                  v35 = v75 + 4;
                                  v56 = v74;
                                  sub_25B0(v35, v74, 0);
                                  v75 += 12;
                                }
                                while ( v75 != v99 );
                                v77 = v78;
                                goto LABEL_108;
                              case 3:
                                v95 = v75 + 8 * (unsigned __int16)v69 + 8;
                                do
                                {
                                  sub_25B0(v75, srcc, 0);
                                  v35 = v75 + 4;
                                  v56 = v74;
                                  sub_25B0(v35, v74, 0);
                                  v75 += 8;
                                }
                                while ( v75 != v95 );
                                v77 = v78;
                                goto LABEL_108;
                              case 4:
                                v97 = v75 + 8 * (unsigned __int16)v69 + 8;
                                do
                                {
                                  v56 = v74;
                                  v35 = v75;
                                  sub_25B0(v75, v74, 0);
                                  v75 += 8;
                                }
                                while ( v75 != v97 );
                                v77 = v78;
                                goto LABEL_108;
                              case 5:
                                if ( HIDWORD(v144[1]) < v76 + (unsigned __int16)(v69 + 1) )
                                  ((void (__noreturn *)(void))sub_2D30)();
                                v96 = v75 + 4 * (unsigned __int16)v69 + 4;
                                do
                                {
                                  v35 = v75;
                                  v56 = *(unsigned int *)(*(_QWORD *)&v144[4] + 4LL * v76);
                                  sub_25B0(v75, v56, 1);
                                  v75 += 4;
                                  ++v76;
                                }
                                while ( v75 != v96 );
                                v77 = v78;
                                goto LABEL_108;
                              case 16:
                                if ( (unsigned int)(unsigned __int16)v69 >= HIDWORD(v144[1]) )
                                  ((void (__noreturn *)(void))sub_2D30)();
                                v35 = v75;
                                v136 = v69;
                                v56 = *(unsigned int *)(*(_QWORD *)&v144[4] + 4LL * (unsigned __int16)v69);
                                sub_25B0(v75, v56, 1);
                                v75 += 4;
                                ++v77;
                                v69 = (unsigned int)(v136 + 1);
                                v76 = (unsigned __int16)(v136 + 1);
                                goto LABEL_108;
                              case 17:
                                v69 = (unsigned __int16)v69;
                                if ( (unsigned __int16)v69 >= (unsigned __int64)v141 )
                                  ((void (__noreturn *)(void))sub_2D30)();
                                ++v77;
                                srcc = *(_DWORD *)(v140 + 28LL * (unsigned __int16)v69 + 4);
                                goto LABEL_108;
                              case 18:
                                v69 = (unsigned __int16)v69;
                                if ( (unsigned __int16)v69 >= (unsigned __int64)v141 )
                                  ((void (__noreturn *)(void))sub_2D30)();
                                ++v77;
                                v74 = *(_DWORD *)(v140 + 28LL * (unsigned __int16)v69 + 4);
                                goto LABEL_108;
                              case 19:
                                if ( (unsigned __int16)v69 >= (unsigned __int64)v141 )
                                  ((void (__noreturn *)(void))sub_2D30)();
                                v35 = v75;
                                v56 = *(unsigned int *)(v140 + 28LL * (unsigned __int16)v69 + 4);
                                sub_25B0(v75, v56, 0);
                                v75 += 4;
                                ++v77;
                                goto LABEL_108;
                              case 32:
                              case 33:
                              case 34:
                              case 35:
                              case 36:
                              case 37:
                              case 38:
                              case 39:
                                ++v77;
                                v75 += (v79 & 0xFFF) + 1;
                                goto LABEL_108;
                              case 40:
                              case 41:
                              case 42:
                              case 43:
                              case 44:
                              case 45:
                              case 46:
                              case 47:
                                if ( v135 == -1 )
                                {
                                  v135 = (unsigned __int8)v79;
                                }
                                else if ( --v135 == -1 )
                                {
LABEL_104:
                                  v77 = v78;
                                  goto LABEL_108;
                                }
                                v77 = v77 - 1 - (BYTE1(v79) & 0xF);
LABEL_108:
                                if ( (unsigned int)v77 >= *(_DWORD *)(v134 + 4) )
                                  break;
                                continue;
                              case 48:
                              case 49:
                                v35 = v137;
                                v77 += 2;
                                v75 = (((_DWORD)v79 << 16) & 0x3FF0000
                                     | (unsigned __int16)__ROL2__(*(_WORD *)(v133 + 2LL * v78), 8))
                                    + v137;
                                goto LABEL_108;
                              case 50:
                              case 51:
                                v77 += 2;
                                v93 = ((_DWORD)v79 << 16) & 0x3FF0000;
                                v94 = v93 | (unsigned __int16)__ROL2__(*(_WORD *)(v133 + 2LL * v78), 8);
                                if ( v94 >= HIDWORD(v144[1]) )
                                  goto LABEL_208;
                                v35 = v75;
                                v56 = *(unsigned int *)(*(_QWORD *)&v144[4] + 4LL * v94);
                                sub_25B0(v75, v56, 1);
                                v75 += 4;
                                v76 = v94 + 1;
                                goto LABEL_108;
                              case 56:
                              case 57:
                                if ( v135 == -1 )
                                {
                                  v56 = ((_DWORD)v79 << 16) & 0x3F0000;
                                  v135 = v56 | (unsigned __int16)__ROL2__(*(_WORD *)(v133 + 2LL * v78), 8);
                                }
                                if ( --v135 == -1 )
                                  v77 += 2;
                                else
                                  v77 = v77 - 1 - (((unsigned __int16)v79 >> 6) & 0xF);
                                goto LABEL_108;
                              case 58:
                              case 59:
                                v77 += 2;
                                v56 = ((_DWORD)v79 << 16) & 0x3F0000;
                                v91 = (unsigned int)v56 | (unsigned __int16)__ROL2__(*(_WORD *)(v133 + 2LL * v78), 8);
                                if ( v91 >= (unsigned __int64)v141 )
                                  sub_2D30(v35, v56, v79, v91, v69);
                                v92 = ((unsigned __int16)v79 >> 6) & 0xF;
                                switch ( v92 )
                                {
                                  case 1:
                                    srcc = *(_DWORD *)(v140 + 28 * v91 + 4);
                                    break;
                                  case 2:
                                    v74 = *(_DWORD *)(v140 + 28 * v91 + 4);
                                    break;
                                  case 0:
                                    v35 = v75;
                                    v56 = *(unsigned int *)(v140 + 28 * v91 + 4);
                                    sub_25B0(v75, v56, 0);
                                    v75 += 4;
                                    break;
                                }
                                goto LABEL_108;
                              default:
                                v126 = v82;
                                if ( (unsigned __int16)v79 > 0x3FFFu )
                                  goto LABEL_213;
                                v83 = v79 & 0x3F;
                                v75 += 4 * ((unsigned __int16)v79 >> 6);
                                if ( (v79 & 0x3F) != 0 )
                                {
                                  do
                                  {
                                    v56 = v74;
                                    v35 = v75;
                                    --v83;
                                    sub_25B0(v75, v74, 0);
                                    v75 += 4;
                                  }
                                  while ( v83 );
                                }
                                goto LABEL_104;
                            }
                            break;
                          }
                        }
                        ++v138;
                      }
                      while ( v138 < LODWORD(v144[2]) );
                    }
                  }
                  v36 = DWORD1(v144[3]);
                  v37 = 0;
                  if ( DWORD1(v144[3]) )
                  {
                    while ( 1 )
                    {
                      v84 = 5LL * v37;
                      v85 = (unsigned int *)(*(_QWORD *)&v144[7] + 10LL * v37);
                      v86 = *((unsigned __int16 *)v85 + 4);
                      if ( (_WORD)v86 == 0xFFFD )
                        break;
                      if ( (_WORD)v86 != 0xFFFE )
                      {
                        LODWORD(v86) = (__int16)v86;
                        if ( v86 >= (unsigned __int64)v141 )
                          sub_2D30(v35, v85, v84, v37, v36);
                        v36 = *(_DWORD *)(v140 + 28 * v86 + 4) + v85[1];
                        goto LABEL_115;
                      }
                      v35 = (unsigned __int64)"Absolute symbols are not implemented";
                      sub_28B0((__int64)"Absolute symbols are not implemented");
LABEL_46:
                      if ( (unsigned int)++v37 >= DWORD1(v144[3]) )
                        goto LABEL_47;
                    }
                    v105 = v85[1];
                    if ( (unsigned int)v105 >= HIDWORD(v144[1]) )
                      sub_2D30(v35, v85, v84, v37, v36);
                    v36 = *(unsigned int *)(*(_QWORD *)&v144[4] + 4 * v105);
LABEL_115:
                    v87 = *v85;
                    v88 = *v85 & 0xFFFFFF;
                    v89 = _byteswap_ulong(*(_DWORD *)(*((_QWORD *)&v144[6] + 1) + 4LL * v37)) >> 16;
                    if ( v89 > 0x3FF )
                      v89 = 1023;
                    v90 = *(_QWORD *)&v144[5] + v88 + v89;
                    if ( v90 >= (unsigned __int64)((unsigned __int64)v142->m128i_u64 + v143) )
                      sub_2C60((__int64)"Bad loader data", v90, v87, &v142->m128i_i8[v143], v36);
                    v35 = (unsigned __int64)v148;
                    v56 = *(_QWORD *)&v144[5] + v88;
                    if ( v89 >= 8 )
                    {
                      v101 = v89 >> 3;
                      qmemcpy(v148, (const void *)v56, 8 * v101);
                      v56 += 8 * v101;
                      v35 = (unsigned __int64)&v148[8 * v101];
                    }
                    v102 = 0;
                    if ( (v89 & 4) != 0 )
                    {
                      *(_DWORD *)v35 = *(_DWORD *)v56;
                      v102 = 4;
                    }
                    if ( (v89 & 2) != 0 )
                    {
                      *(_WORD *)(v35 + v102) = *(_WORD *)(v56 + v102);
                      v102 += 2;
                    }
                    if ( (v89 & 1) != 0 )
                      *(_BYTE *)(v35 + v102) = *(_BYTE *)(v56 + v102);
                    v148[v89] = 0;
                    v103 = BYTE3(v87) & 0xF;
                    switch ( (char)v103 )
                    {
                      case 0:
                      case 4:
                        v35 = (unsigned int)v36;
                        add_entry(v35, v35, v148, 1, 1);
                        goto LABEL_46;
                      case 1:
                        v104 = (unsigned int)v36;
                        goto LABEL_170;
                      case 2:
                        v35 = (unsigned int)v36;
                        sub_2B10(v36, (__int64)v148, (unsigned __int8)v103, v102, v36, v89, v127);
                        goto LABEL_46;
                      case 3:
                        v104 = (unsigned int)v36;
                        v35 = (unsigned int)v36;
                        if ( (unsigned __int8)segtype((unsigned int)v36) != 3 || v104 >= qword_81E8 )
                          goto LABEL_169;
                        qword_81E8 = v104;
                        if ( *(_DWORD *)(get_ph(v35, v56) + 4) != 15 )
                        {
                          sub_2590();
LABEL_208:
                          sub_2D30(v35, v56, v93, v81, v69);
                        }
                        sub_2A50(0xBB9u, v104, 0);
LABEL_169:
                        v139 = 17;
                        netnode_supset(qword_81E0, v104, &v139, 1, 257);
LABEL_170:
                        v35 = v104;
                        set_name(v104, v148, 1024);
                        break;
                      default:
                        goto LABEL_46;
                    }
                    goto LABEL_46;
                  }
LABEL_47:
                  sub_2980((__int64)"done.\n");
                  if ( SLODWORD(v144[0]) >= 0 && SLODWORD(v144[0]) < (unsigned __int64)v141 )
                  {
                    v124 = *(_DWORD *)(v140 + 28LL * SLODWORD(v144[0]) + 4) + DWORD1(v144[0]);
                    sub_2B10(v124, (__int64)"start", SLODWORD(v144[0]), v38, v39, v40, v127);
                    setinf(14, 0);
                    dword = (unsigned int)get_dword(v124);
                    setinf(15, dword);
                  }
                  if ( (SDWORD2(v144[0]) & 0x80000000) == 0 && SDWORD2(v144[0]) < (unsigned __int64)v141 )
                    sub_2B10(
                      *(_DWORD *)(v140 + 28LL * SDWORD2(v144[0]) + 4) + HIDWORD(v144[0]),
                      (__int64)"INIT_VECTOR",
                      SDWORD2(v144[0]),
                      v38,
                      v39,
                      v40,
                      v127);
                  if ( SLODWORD(v144[1]) >= 0 && SLODWORD(v144[1]) < (unsigned __int64)v141 )
                    sub_2B10(
                      *(_DWORD *)(v140 + 28LL * SLODWORD(v144[1]) + 4) + DWORD1(v144[1]),
                      (__int64)"TERM_VECTOR",
                      SLODWORD(v144[1]),
                      v140,
                      v39,
                      v40,
                      v127);
                  if ( qword_81E8 != -1 )
                    set_name(qword_81E8, "TOC", 0);
                  qfree(*((_QWORD *)&v144[3] + 1));
                  qfree(*((_QWORD *)&v144[4] + 1));
                  qfree(*(_QWORD *)&v144[7]);
                  qfree(*(_QWORD *)&v144[4]);
                  if ( v142 )
                  {
                    *(_QWORD *)&v143 = 0;
                    qfree(v142);
                  }
                  goto LABEL_60;
                }
              }
            }
          }
        }
      }
    }
LABEL_41:
    sub_2C60((__int64)"Bad loader data");
  }
LABEL_61:
  if ( v5 )
  {
    *(_QWORD *)&v141 = 0;
    qfree(v5);
  }
  return v149 - __readfsqword(0x28u);
}

