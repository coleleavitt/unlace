__int64 __fastcall sub_1808B0(
        __int64 *a1,
        size_t a2,
        int a3,
        unsigned int *a4,
        int a5,
        _QWORD *a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 *a12,
        int a13,
        _BYTE *a14)
{
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int *v16; // rbx
  __int64 *v17; // r12
  unsigned __int8 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // xmm0
  void *v27; // r12
  __int64 v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 (*v31)(); // rax
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __m128i si128; // xmm0
  __int64 v37; // r9
  __int64 v38; // rsi
  int v39; // eax
  unsigned int v40; // edx
  bool v41; // al
  _QWORD *v42; // rsi
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // r12
  char v50; // r12
  __int64 v51; // rax
  size_t v52; // rcx
  __int64 *v53; // r12
  __int64 v54; // rcx
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int64 *v57; // rdi
  __int64 *v58; // rdi
  __int64 *v59; // rdi
  __int64 v60; // r14
  int v61; // eax
  __int64 v62; // r12
  __int64 v63; // rdi
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rbx
  int v68; // eax
  __int64 v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // r9d
  __int64 v75; // r12
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  int v79; // r9d
  int v80; // r8d
  int v81; // r9d
  __int64 v82; // rdx
  unsigned __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // [rsp+8h] [rbp-3A8h]
  __int64 v89; // [rsp+10h] [rbp-3A0h]
  char v90; // [rsp+2Fh] [rbp-381h]
  __m128i v91; // [rsp+30h] [rbp-380h] BYREF
  __int64 v92; // [rsp+40h] [rbp-370h]
  unsigned __int8 *v93; // [rsp+48h] [rbp-368h]
  _BYTE *v94; // [rsp+50h] [rbp-360h]
  __int64 v95; // [rsp+58h] [rbp-358h]
  __int64 v96; // [rsp+60h] [rbp-350h]
  _QWORD *v97; // [rsp+68h] [rbp-348h]
  size_t n; // [rsp+70h] [rbp-340h]
  __int64 *v99; // [rsp+78h] [rbp-338h]
  __int64 v100; // [rsp+80h] [rbp-330h]
  __int64 *v101; // [rsp+88h] [rbp-328h]
  __int64 v102; // [rsp+90h] [rbp-320h]
  __int64 *v103; // [rsp+98h] [rbp-318h]
  __m128i v104; // [rsp+A0h] [rbp-310h] BYREF
  unsigned int *v105; // [rsp+B0h] [rbp-300h]
  __int64 v106; // [rsp+B8h] [rbp-2F8h]
  size_t v107; // [rsp+C0h] [rbp-2F0h]
  __int64 *v108; // [rsp+C8h] [rbp-2E8h]
  __int64 v109; // [rsp+D8h] [rbp-2D8h] BYREF
  __int64 v110[2]; // [rsp+E0h] [rbp-2D0h] BYREF
  __int64 *v111; // [rsp+F0h] [rbp-2C0h] BYREF
  __m128 v112; // [rsp+F8h] [rbp-2B8h]
  __int64 v113[2]; // [rsp+110h] [rbp-2A0h] BYREF
  __int64 v114; // [rsp+120h] [rbp-290h] BYREF
  __int128 v115; // [rsp+128h] [rbp-288h]
  __int64 v116[2]; // [rsp+140h] [rbp-270h] BYREF
  void *src; // [rsp+150h] [rbp-260h] BYREF
  __m128 v118; // [rsp+158h] [rbp-258h]
  __int64 v119[2]; // [rsp+170h] [rbp-240h] BYREF
  void *v120; // [rsp+180h] [rbp-230h] BYREF
  __int64 v121; // [rsp+188h] [rbp-228h]
  __int64 v122[2]; // [rsp+1A0h] [rbp-210h] BYREF
  void *v123; // [rsp+1B0h] [rbp-200h] BYREF
  __int128 v124; // [rsp+1B8h] [rbp-1F8h]
  __int64 (__fastcall **v125)(); // [rsp+1D0h] [rbp-1E0h] BYREF
  __int64 v126; // [rsp+1D8h] [rbp-1D8h]
  __int64 v127; // [rsp+1E0h] [rbp-1D0h] BYREF
  __int128 v128; // [rsp+1E8h] [rbp-1C8h]
  char v129; // [rsp+1F8h] [rbp-1B8h]
  unsigned int *v130; // [rsp+200h] [rbp-1B0h]
  __m128i v131; // [rsp+210h] [rbp-1A0h] BYREF
  __int64 v132; // [rsp+220h] [rbp-190h]
  __m128i v133; // [rsp+228h] [rbp-188h] BYREF
  __int64 v134; // [rsp+250h] [rbp-160h]
  _BYTE v135[32]; // [rsp+258h] [rbp-158h] BYREF
  _BYTE v136[16]; // [rsp+278h] [rbp-138h] BYREF
  _BYTE v137[16]; // [rsp+288h] [rbp-128h] BYREF
  _BYTE v138[16]; // [rsp+298h] [rbp-118h] BYREF
  __int64 v139; // [rsp+2A8h] [rbp-108h]
  __int64 v140; // [rsp+2B8h] [rbp-F8h]
  __int64 v141; // [rsp+2C0h] [rbp-F0h]
  __int64 v142; // [rsp+2D0h] [rbp-E0h]
  __int64 v143; // [rsp+2E0h] [rbp-D0h]
  __int64 v144; // [rsp+2E8h] [rbp-C8h]
  __int64 v145; // [rsp+2F8h] [rbp-B8h]
  __int64 v146; // [rsp+308h] [rbp-A8h]
  __int64 v147; // [rsp+310h] [rbp-A0h]
  __int64 v148; // [rsp+320h] [rbp-90h]
  __int64 v149; // [rsp+330h] [rbp-80h]
  __int64 v150; // [rsp+338h] [rbp-78h]
  __int128 v151; // [rsp+350h] [rbp-60h]
  char v152; // [rsp+36Dh] [rbp-43h]
  char v153; // [rsp+36Eh] [rbp-42h]
  char v154; // [rsp+373h] [rbp-3Dh]
  unsigned __int64 v155; // [rsp+378h] [rbp-38h]

  LODWORD(v101) = a3;
  v103 = a1;
  v95 = a10;
  v107 = a2;
  v96 = a11;
  v105 = a4;
  v99 = a12;
  LODWORD(v100) = a5;
  v97 = a6;
  v94 = a14;
  v155 = __readfsqword(0x28u);
  v14 = *(_QWORD *)(a1[5] + 528);
  v102 = *(_QWORD *)(v14 + 8LL * a3);
  v15 = *(_QWORD *)(v14 + 8LL * a5);
  n = a5;
  v110[0] = 0;
  v16 = *(unsigned int **)(v15 + 56);
  v106 = v15;
  v110[1] = 0;
  v111 = nullptr;
  v113[0] = 0;
  v113[1] = 0;
  v114 = 0;
  v112 = 0;
  v115 = 0;
  if ( !v16 )
  {
    LODWORD(v108) = 0;
    goto LABEL_21;
  }
  v108 = v113;
  while ( 1 )
  {
    sub_127A20((__int64)&v131, v106, (__int64)v16, 8449, a5, (int)a6, 0.0, a8);
    sub_648D0(v110, (const void **)&v131, 0.0);
    v17 = (__int64 *)v132;
    v132 = 0;
    a8 = (__m128)_mm_loadu_si128(&v133);
    v133 = 0;
    if ( v111 )
    {
      v104 = (__m128i)a8;
      v112.m128_u64[0] = 0;
      qfree((__int64)v111);
      a8 = (__m128)_mm_load_si128(&v104);
      v111 = v17;
      v112 = a8;
      if ( v132 )
      {
        v133.m128i_i64[0] = 0;
        qfree(v132);
      }
    }
    else
    {
      v111 = v17;
      v112 = a8;
    }
    qfree(v131.m128i_i64[0]);
    if ( (unsigned __int8)sub_64780(v110, (_QWORD *)v107)
      || (unsigned __int8)sub_318470((unsigned __int64 **)&v111, v107 + 16) )
    {
      break;
    }
    sub_64280(v108, v110, 0.0);
    sub_316CB0(&v114, &v111, v24, v25);
    v16 = *((unsigned int **)v16 + 2);
    if ( !v16 )
      goto LABEL_17;
  }
  if ( v105 == v16 )
  {
    sub_3311F0((_QWORD *)v103[5], *((_QWORD *)v105 + 3), 0x13u);
    goto LABEL_17;
  }
  v18 = 0;
  if ( (*((_BYTE *)v16 + 65) & 8) != 0 )
  {
    v19 = *((unsigned __int8 *)v16 + 64);
    if ( (unsigned __int8)v19 <= 9u )
    {
      v20 = 610;
      v18 = _bittest64(&v20, v19);
    }
  }
  v21 = *v16;
  if ( (_DWORD)v21 != 61 )
  {
    if ( sub_32ED70(v21) )
    {
      LODWORD(v108) = v16[1] & 0x20000;
      if ( !(_DWORD)v108 )
        goto LABEL_13;
    }
LABEL_17:
    LODWORD(v108) = 0;
    goto LABEL_18;
  }
  LODWORD(v108) = v16[1] & 0x20000;
  if ( (_DWORD)v108 )
    goto LABEL_17;
LABEL_13:
  v22 = *v105;
  if ( *v105 == 62 || *v16 == 61 && v22 != 4 && (v22 != 67 || v105[17] != v105[9]) )
    goto LABEL_17;
  if ( *((_BYTE *)v16 + 64) == 8 && !v16[17] )
    goto LABEL_17;
  v93 = (unsigned __int8 *)(v16 + 16);
  if ( sub_330E90(v106, (__int64)(v16 + 16)) )
    goto LABEL_17;
  v116[0] = 0;
  v26 = 0;
  v116[1] = 0;
  src = nullptr;
  v118 = 0;
  if ( *v16 != 4
    || (v29 = v103[5], v30 = *(_QWORD *)(v29 + 920), v31 = *(__int64 (**)())(*(_QWORD *)v30 + 32LL), v31 == sub_7A3D0)
    || (v104.m128i_i64[0] = (__int64)v116,
        v32 = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, _QWORD))v31)(v30, v29, v16 + 8, 0, 0),
        v104.m128i_i64[0] = (__int64)v116,
        v32 != 2) )
  {
    v104.m128i_i64[0] = (__int64)v116;
    sub_124680((__int64)&v131, v106, (__int64)v16, 1, 0.0, a8);
    v104.m128i_i64[0] = (__int64)v116;
    sub_648D0(v116, (const void **)&v131, 0.0);
    v26 = 0;
    v27 = (void *)v132;
    v132 = 0;
    a8 = (__m128)_mm_loadu_si128(&v133);
    v133 = 0;
    if ( src )
    {
      v91 = (__m128i)a8;
      v118.m128_u64[0] = 0;
      qfree((__int64)src);
      a8 = (__m128)_mm_load_si128(&v91);
      src = v27;
      v118 = a8;
      if ( v132 )
      {
        v133.m128i_i64[0] = 0;
        qfree(v132);
      }
    }
    else
    {
      src = v27;
      v118 = a8;
    }
    qfree(v131.m128i_i64[0]);
  }
  v28 = *(_QWORD *)(v103[5] + 1504);
  if ( !(unsigned __int8)sub_64780((_QWORD *)(v28 + 104), v104.m128i_i64[0]) )
  {
    v90 = sub_318470((unsigned __int64 **)(v28 + 120), (__int64)&src);
    if ( !v90 )
    {
      v91.m128i_i64[0] = (__int64)v119;
      sub_127A20((__int64)v119, v106, (__int64)v16, 1, v33, v34, *(double *)v26.m128i_i64, a8);
      LOBYTE(v92) = sub_172FB0(v16);
      if ( (_BYTE)v92 )
      {
        if ( (*(_BYTE *)(v102 + 25) & 8) == 0
          || (*(_BYTE *)(v106 + 25) & 8) == 0
          || a13 == 1
          || !(unsigned __int8)sub_178230(
                                 v106,
                                 *((_QWORD *)v16 + 1),
                                 v91.m128i_i64[0],
                                 (_QWORD *)(*v97 + 24 * n),
                                 v100,
                                 (unsigned int)v101,
                                 v26)
          || !sub_178D90(v103, v100, (int)v101) )
        {
          goto LABEL_80;
        }
        v125 = nullptr;
        v126 = 0;
        v127 = 0;
        v128 = 0;
        v35 = qvector_reserve((__int64)&v127, 0, 1, 16);
        si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
        v127 = v35;
        *(__m128i *)(v35 + 16 * v128) = si128;
        *(_QWORD *)&v128 = v128 + 1;
        v37 = *((_QWORD *)v16 + 1);
        v131.m128i_i64[0] = (__int64)&off_4DDFA0;
        v131.m128i_i64[1] = 0;
        v132 = 0;
        v133 = 0u;
        if ( (unsigned int)sub_179EC0(
                             v103,
                             v131.m128i_i64,
                             (__int64)&v125,
                             v100,
                             (unsigned int)v101,
                             v37,
                             *(double *)si128.m128i_i64,
                             (__int64)v105,
                             2,
                             1u) )
          goto LABEL_134;
        v38 = v91.m128i_i64[0];
        v92 = *((_QWORD *)v16 + 1);
        sub_64000(v131.m128i_i64, v91.m128i_i64[0], *(double *)si128.m128i_i64);
        v26 = 0;
        v132 = 0;
        v133 = 0;
        if ( v121 )
        {
          v89 = v121;
          v88 = 16 * v121;
          v132 = qalloc_or_throw(16 * v121, v38, 16 * v121, v121);
          v133.m128i_i64[1] = v89;
          memcpy((void *)v132, v120, v88);
          v133.m128i_i64[0] = v89;
        }
        LOBYTE(v92) = sub_178A70(v103, v131.m128i_i64, v100, (unsigned int)v101, v92, (__int64)v105, 0.0);
        if ( v132 )
        {
          v133.m128i_i64[0] = 0;
          qfree(v132);
        }
        qfree(v131.m128i_i64[0]);
        if ( !(_BYTE)v92 )
        {
LABEL_134:
          if ( v127 )
          {
            *(_QWORD *)&v128 = 0;
            qfree(v127);
          }
          qfree((__int64)v125);
          goto LABEL_80;
        }
        sub_93B40((__int64 *)&v125);
      }
      if ( ((unsigned __int8)sub_318470((unsigned __int64 **)&v120, v103[5] + 232)
         || (unsigned __int8)sub_318470((unsigned __int64 **)&src, v103[5] + 232))
        && (unsigned __int8)sub_178F10(
                              v103,
                              v100,
                              *((_QWORD *)v16 + 1),
                              (int)v101,
                              (__int64)v105,
                              *(double *)v26.m128i_i64) )
      {
        goto LABEL_80;
      }
      v39 = *v16;
      if ( *v16 != 4 )
      {
        if ( v39 != 67 )
        {
          v40 = v39 - 8;
          v41 = 1;
          if ( v40 <= 1 )
            goto LABEL_69;
          goto LABEL_131;
        }
        if ( v16[17] != v16[9] )
        {
LABEL_131:
          v41 = 0;
          if ( *((_BYTE *)v16 + 64) == 8 )
          {
            if ( (_BYTE)v92 )
              goto LABEL_89;
            v41 = *(_DWORD *)(*((_QWORD *)v16 + 9) + 284LL) == 5;
LABEL_71:
            if ( *((_BYTE *)v16 + 32) != 4 && *((_BYTE *)v16 + 48) != 4 && v41 )
            {
              LOBYTE(v92) = 0;
              goto LABEL_75;
            }
            if ( a13 == 1 )
              goto LABEL_80;
            v90 = sub_178230(
                    v106,
                    *((_QWORD *)v16 + 1),
                    v91.m128i_i64[0],
                    (_QWORD *)(*v97 + 24 * n),
                    v100,
                    (unsigned int)v101,
                    v26);
            LOBYTE(v92) = 1;
            if ( !v90 )
            {
LABEL_75:
              v42 = (_QWORD *)v107;
              v43 = (_QWORD *)v91.m128i_i64[0];
              ++*(_DWORD *)(v103[5] + 888);
              if ( !(unsigned __int8)sub_64820(v43, v42)
                || !(unsigned __int8)sub_317F40((__int64 *)(v107 + 16), (__int64)&v120) )
              {
                v46 = *v16;
                if ( *v16 != 4 )
                {
                  if ( v46 == 67 )
                  {
                    if ( v16[9] != v16[17]
                      && (*((_BYTE *)v16 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v16 + 9) + 284LL) != 5) )
                    {
                      goto LABEL_80;
                    }
                  }
                  else if ( *((_BYTE *)v16 + 64) != 8 || (v44 = *((_QWORD *)v16 + 9), *(_DWORD *)(v44 + 284) != 5) )
                  {
                    if ( v46 != 9 )
                      goto LABEL_80;
                    sub_123A40((__int64)&v125, v93, v44, v45);
                    if ( (unsigned __int8)sub_127850((__int64)&v125, (unsigned __int64 *)v28, v16[17] - v16[9], 0, v26) )
                    {
                      v26.m128i_i64[0] = 0;
                      v131 = 0u;
                      v132 = 0;
                      v133 = 0;
                      sub_127FE0(v106, v131.m128i_i64, (__int64)&v125, 1, v80, v81, 0.0, a8);
                      if ( (unsigned __int8)sub_A2310(&v131, (_QWORD *)v107) )
                      {
                        sub_93B40(v131.m128i_i64);
                        sub_11CDA0((__int64)&v125);
                        goto LABEL_93;
                      }
                      sub_93B40(v131.m128i_i64);
                    }
                    sub_11CDA0((__int64)&v125);
                    goto LABEL_80;
                  }
                }
              }
LABEL_93:
              v107 = (size_t)v16;
              if ( v90 )
                v107 = *((_QWORD *)v16 + 1);
              v47 = v104.m128i_i64[0];
              sub_64000(v131.m128i_i64, v104.m128i_i64[0], *(double *)v26.m128i_i64);
              v49 = v118.m128_u64[0];
              v26.m128i_i64[0] = 0;
              v132 = 0;
              v133 = 0;
              if ( v118.m128_u64[0] )
              {
                n = 16 * v118.m128_u64[0];
                v132 = qalloc_or_throw(16 * v118.m128_u64[0], v47, 16 * v118.m128_u64[0], v48);
                v133.m128i_i64[1] = v49;
                memcpy((void *)v132, src, n);
                v133.m128i_i64[0] = v49;
              }
              v50 = sub_178A70(v103, v131.m128i_i64, v100, (unsigned int)v101, v107, (__int64)v105, 0.0);
              if ( v132 )
              {
                v133.m128i_i64[0] = 0;
                qfree(v132);
              }
              qfree(v131.m128i_i64[0]);
              if ( !v50 )
                goto LABEL_80;
              if ( *v16 == 61 )
              {
                v67 = v102;
                if ( sub_A4680(v102, (__int64)v105, v91.m128i_i64[0], (__m128i)0LL, a8) )
                {
                  v68 = *(_DWORD *)(v67 + 24);
                  BYTE1(v68) &= ~2u;
                  LOBYTE(v68) = v68 | 0x80;
                  *(_DWORD *)(v67 + 24) = v68;
LABEL_141:
                  LODWORD(v108) = 1;
                  goto LABEL_80;
                }
                goto LABEL_80;
              }
              v131.m128i_i64[0] = 0;
              v132 = 0;
              v131.m128i_i64[1] = v95;
              v133.m128i_i64[0] = 0;
              if ( (*(_BYTE *)(*(_QWORD *)(v106 + 480) + 607LL) & 2) != 0 )
                goto LABEL_124;
              LOBYTE(v101) = sub_17D770(v106, v16, &v131);
              if ( v131.m128i_i64[0] )
                sub_104E10(v131.m128i_i64[0], 0.0);
              v51 = v132;
              if ( !v132 )
              {
LABEL_123:
                if ( !(_BYTE)v101 )
                {
LABEL_124:
                  if ( v90 )
                  {
                    v60 = v106;
                    sub_A33C0(v106, (__int64)v16);
                    v61 = *(_DWORD *)(v60 + 24);
                    v62 = v102;
                    BYTE1(v61) &= ~2u;
                    v63 = v102;
                    LOBYTE(v61) = v61 | 0x80;
                    *(_DWORD *)(v60 + 24) = v61;
                    v64 = *(_DWORD *)(v63 + 24);
                    LODWORD(v108) = v64;
                    BYTE1(v64) &= ~2u;
                    LOBYTE(v64) = v64 | 0x80;
                    *(_DWORD *)(v63 + 24) = v64;
                    sub_A3160(v63, v16, *((_QWORD *)v105 + 2), *(double *)v26.m128i_i64);
                    sub_A2520(v60, "moved insn from");
                    sub_A2520(v62, "moved insn to");
                    *v94 = 1;
                    v65 = sub_330DE0(v60);
                    v66 = v103[5];
                    if ( v65 != 1
                      || (v82 = *(_QWORD *)(v106 + 56), *(_DWORD *)v82 != 55)
                      || *(_BYTE *)(v82 + 32) != 7
                      || (v83 = 0, v84 = v106, !*(_QWORD *)(v106 + 352)) )
                    {
                      LODWORD(v108) = 1;
                      *(_DWORD *)(v66 + 4) &= ~8u;
                      *(_DWORD *)(v102 + 24) |= 0x40u;
LABEL_127:
                      if ( v18 )
                        sub_175220((unsigned __int8 *)v105 + 64);
                      goto LABEL_80;
                    }
                    do
                    {
                      v85 = *(unsigned int *)(*(_QWORD *)(v84 + 344) + 4 * v83);
                      if ( (unsigned int)v85 >= *(_DWORD *)(v66 + 64) )
                        sub_1733C0(*(double *)v26.m128i_i64);
                      ++v83;
                      v86 = *(_QWORD *)(*(_QWORD *)(v66 + 528) + 8 * v85);
                      v87 = *(_DWORD *)(v86 + 24);
                      BYTE1(v87) &= ~2u;
                      LOBYTE(v87) = v87 | 0x80;
                      *(_DWORD *)(v86 + 24) = v87;
                      v66 = v103[5];
                    }
                    while ( v83 < *(_QWORD *)(v84 + 352) );
                    *(_DWORD *)(v66 + 4) &= ~8u;
                    LODWORD(v107) = 1;
LABEL_197:
                    *(_DWORD *)(v102 + 24) |= 0x40u;
                    if ( !v90 && sub_A9D90(v106, (unsigned __int64 **)v91.m128i_i64[0], *((_QWORD *)v16 + 1), 0, 0) )
                      *(_DWORD *)(v106 + 24) |= 0x80u;
                    LODWORD(v108) = v107;
                    goto LABEL_127;
                  }
                  v69 = v96;
                  v101 = v122;
                  v70 = v96;
                  sub_64000(v122, v96, *(double *)v26.m128i_i64);
                  v75 = *(_QWORD *)(v69 + 24);
                  v123 = nullptr;
                  v124 = 0;
                  if ( v75 )
                  {
                    v107 = 16 * v75;
                    v123 = (void *)qalloc_or_throw(16 * v75, v70, 16 * v75, v72);
                    *((_QWORD *)&v124 + 1) = v75;
                    memcpy(v123, *(const void **)(v96 + 16), v107);
                    *(_QWORD *)&v124 = v75;
                  }
                  sub_64640(v101, v99, v71, v72, v73, v74);
                  v107 = (size_t)&v123;
                  sub_317C60((__int64 *)&v123, (__int64)(v99 + 2));
                  sub_64640(v101, v113, v76, v77, v78, v79);
                  sub_317C60((__int64 *)v107, (__int64)&v114);
                  sub_1752C0(
                    (__int64)&v131,
                    (__int64)v101,
                    (__int64)v16,
                    v105,
                    v106,
                    v102,
                    0.0,
                    a8,
                    0,
                    0,
                    v104.m128i_i64[0]);
                  LODWORD(v107) = sub_175BD0((__int64)&v131, (__int64)v105, (__m128i)0LL);
                  if ( (unsigned int)(v107 + 4) <= 1 )
                  {
                    if ( (_DWORD)v107 != -3 )
                    {
                      LODWORD(v107) = -4;
                      goto LABEL_156;
                    }
                  }
                  else
                  {
                    if ( (int)v107 <= 0 )
                    {
                      if ( !(_DWORD)v107 )
                      {
                        if ( v152 )
                          LODWORD(v107) = -2;
                        if ( v153 )
                          LODWORD(v107) = -1;
                      }
LABEL_156:
                      v131.m128i_i64[0] = (__int64)off_4DDE40;
                      if ( v154 && !v153 )
                        sub_11D890(v134, (__int64)v135);
                      v134 = 0;
                      v151 = 0;
                      if ( v149 )
                      {
                        v150 = 0;
                        qfree(v149);
                      }
                      qfree(v148);
                      if ( v146 )
                      {
                        v147 = 0;
                        qfree(v146);
                      }
                      qfree(v145);
                      if ( v143 )
                      {
                        v144 = 0;
                        qfree(v143);
                      }
                      qfree(v142);
                      if ( v140 )
                      {
                        v141 = 0;
                        qfree(v140);
                      }
                      qfree(v139);
                      sub_11CDA0((__int64)v138);
                      sub_11CDA0((__int64)v137);
                      sub_11CDA0((__int64)v136);
                      if ( v123 )
                      {
                        *(_QWORD *)&v124 = 0;
                        qfree((__int64)v123);
                      }
                      qfree(v122[0]);
                      if ( !(_DWORD)v107 )
                        goto LABEL_80;
                      *(_DWORD *)(v103[5] + 4) &= ~8u;
                      if ( (int)v107 > 0 )
                        goto LABEL_197;
                      if ( (_DWORD)v107 != -1 && (_DWORD)v107 != -4 )
                      {
                        LODWORD(v108) = v107;
                        goto LABEL_80;
                      }
                      goto LABEL_141;
                    }
                    if ( sub_173990(v16, v105, v107, 128) )
                    {
                      if ( (unsigned int)sub_167810(v102, v105, 0xCu, (__m128i)0LL, a8, a9)
                        || !(_BYTE)v92
                        || *v16 == 14
                        && (v100 = v103[5], sub_11C8A0((__int64)v16, &v109))
                        && (*(_BYTE *)v109 != 4 || (unsigned int)(**(_DWORD **)(v109 + 8) - 8) <= 2)
                        && (v127 = 0,
                            v128 = 0u,
                            v129 = 0,
                            v125 = &off_4DDFF0,
                            v130 = v16,
                            v126 = v100,
                            (unsigned int)sub_11E900(v105, (__int64)&v125)) )
                      {
                        v154 = 0;
                        goto LABEL_156;
                      }
                    }
                  }
                  LODWORD(v107) = 0;
                  goto LABEL_156;
                }
LABEL_80:
                if ( v120 )
                {
                  v121 = 0;
                  qfree((__int64)v120);
                }
                qfree(v119[0]);
                goto LABEL_41;
              }
              v52 = *(_QWORD *)v132;
              v107 = *(_QWORD *)v132;
              if ( !v133.m128i_i64[0] )
              {
                *(_QWORD *)v132 = v52 & 3 | v132 & 0xFFFFFFFFFFFFFFFCLL;
                v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v132, (__m128i)(unsigned __int64)v132);
                *(__m128i *)(v132 + 8) = v26;
                *(_QWORD *)v132 &= ~1uLL;
                *(_QWORD *)v132 |= 2uLL;
LABEL_121:
                if ( v132 )
                  qfree(v132);
                goto LABEL_123;
              }
              v53 = (__int64 *)(v107 & 0xFFFFFFFFFFFFFFFCLL);
              v54 = *(_QWORD *)(v107 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v54 & 2) != 0 )
              {
LABEL_120:
                *(_QWORD *)v51 = v51 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v51 & 3LL;
                v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v132, (__m128i)(unsigned __int64)v132);
                *(__m128i *)(v132 + 8) = v26;
                *(_QWORD *)v132 &= ~1uLL;
                *(_QWORD *)v132 |= 2uLL;
                v133.m128i_i64[0] = 0;
                goto LABEL_121;
              }
              v55 = (__int64 *)v53[1];
              v56 = *v55;
              if ( (*v55 & 2) != 0 )
              {
                v59 = (__int64 *)v53[2];
                if ( (*(_BYTE *)v59 & 2) != 0 )
                  goto LABEL_207;
                goto LABEL_115;
              }
              v57 = (__int64 *)v55[1];
              if ( (*(_BYTE *)v57 & 2) != 0 )
              {
                v58 = (__int64 *)v55[2];
                if ( (*(_BYTE *)v58 & 2) != 0 )
                {
LABEL_209:
                  *v55 = v56 | 2;
LABEL_112:
                  if ( v55 )
                    qfree((__int64)v55);
                  v59 = (__int64 *)v53[2];
                  if ( (*(_BYTE *)v59 & 2) != 0 )
                  {
LABEL_116:
                    v54 = *v53;
                    if ( (*v53 & 2) != 0 )
                    {
LABEL_117:
                      if ( v107 > 3 )
                        qfree((__int64)v53);
                      v51 = v132;
                      goto LABEL_120;
                    }
LABEL_207:
                    *v53 = v54 | 2;
                    goto LABEL_117;
                  }
LABEL_115:
                  sub_1735A0(v59);
                  goto LABEL_116;
                }
              }
              else
              {
                v100 = v53[1];
                sub_1735A0(v57);
                v55 = (__int64 *)v100;
                v58 = *(__int64 **)(v100 + 16);
                if ( (*(_BYTE *)v58 & 2) != 0 )
                  goto LABEL_111;
              }
              v100 = (__int64)v55;
              sub_1735A0(v58);
              v55 = (__int64 *)v100;
LABEL_111:
              v56 = *v55;
              if ( (*v55 & 2) != 0 )
                goto LABEL_112;
              goto LABEL_209;
            }
            if ( ((unsigned __int8)sub_64780(v104.m128i_i64[0], v91.m128i_i64[0])
               || (unsigned __int8)sub_318470((unsigned __int64 **)&src, (__int64)&v120))
              && !sub_178D90(v103, v100, (int)v101) )
            {
              goto LABEL_80;
            }
LABEL_89:
            if ( (unsigned __int8)sub_64780(v99, v110) )
              goto LABEL_80;
            LOBYTE(v92) = sub_318470((unsigned __int64 **)v99 + 2, (__int64)&v111);
            if ( (_BYTE)v92 )
              goto LABEL_80;
            v90 = 1;
            goto LABEL_75;
          }
LABEL_69:
          if ( (_BYTE)v92 )
            goto LABEL_89;
          if ( *((_BYTE *)v16 + 64) == 1 && v16[18] <= 7 )
          {
            v90 = 0;
            goto LABEL_75;
          }
          goto LABEL_71;
        }
      }
      v41 = 1;
      goto LABEL_69;
    }
  }
LABEL_41:
  if ( src )
  {
    v118.m128_u64[0] = 0;
    qfree((__int64)src);
  }
  qfree(v116[0]);
LABEL_18:
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
  v16 = (unsigned int *)v113[0];
LABEL_21:
  qfree((__int64)v16);
  if ( v111 )
  {
    v112.m128_u64[0] = 0;
    qfree((__int64)v111);
  }
  qfree(v110[0]);
  return (unsigned int)v108;
}

