__int64 __fastcall sub_573C0(__int64 a1, const char *a2, double a3, __m128i a4, __m128 a5)
{
  __int64 v6; // r13
  size_t v7; // rax
  size_t v8; // r12
  __int64 v9; // rdx
  bool v10; // al
  __int64 v11; // rdi
  __int64 v13; // r15
  const char *v14; // rsi
  unsigned __int64 v15; // r12
  const char *v16; // r15
  void *v17; // rax
  void *v18; // rdi
  size_t v19; // r14
  __int64 v20; // r15
  const char *v21; // r14
  size_t v22; // rax
  size_t v23; // r15
  void *v24; // rdi
  size_t v25; // r12
  __int64 i; // r14
  __int64 v27; // r15
  const char *v28; // rsi
  __int64 j; // r14
  const char *v30; // rsi
  __int64 v31; // rax
  char *v32; // rax
  __int64 v33; // r15
  unsigned __int64 *v34; // rax
  size_t v35; // r12
  const char *v36; // rax
  __m128i *v37; // r12
  size_t v38; // rax
  size_t v39; // r13
  size_t v40; // r15
  unsigned __int64 *v41; // rax
  __int128 v42; // kr00_16
  __int64 v43; // r13
  int v44; // eax
  __int64 v45; // r14
  _BYTE *v46; // r15
  _QWORD *v47; // r14
  const char *v48; // r15
  size_t v49; // rax
  size_t v50; // r14
  void *v51; // rdi
  size_t v52; // r12
  __int64 v53; // r12
  __int64 v54; // rax
  int v55; // edx
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // r14
  const char *v59; // rsi
  unsigned int v60; // eax
  __int64 v61; // rcx
  unsigned __int64 v62; // r10
  __int64 v63; // rax
  bool v64; // cf
  _QWORD *v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r14
  size_t v68; // r12
  size_t v69; // rax
  size_t v70; // r14
  void *v71; // rdi
  size_t v72; // r12
  __int64 v73; // r14
  _QWORD *v74; // r12
  __int64 v75; // r15
  int v76; // eax
  bool v77; // zf
  const char *v78; // rcx
  _QWORD *v79; // rax
  unsigned __int64 v80; // rsi
  _QWORD *v81; // rdi
  __int64 v82; // rax
  unsigned int v83; // eax
  unsigned __int64 v84; // rdx
  size_t v85; // rax
  size_t v86; // r12
  const void *v87; // r14
  _QWORD *v88; // r14
  _DWORD *v89; // rax
  _QWORD *v90; // r14
  __int64 v91; // rax
  const __m128i *v92; // rax
  __m128i *v93; // r12
  __m128i v94; // xmm0
  const __m128i *v95; // r14
  unsigned __int64 *v96; // rdi
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  int v99; // eax
  const void *v100; // r13
  size_t v101; // rax
  size_t v102; // r14
  size_t v103; // r12
  __int64 v104; // [rsp+8h] [rbp-10D8h]
  __int64 v105; // [rsp+10h] [rbp-10D0h]
  __int64 v106; // [rsp+18h] [rbp-10C8h]
  unsigned __int64 v107; // [rsp+18h] [rbp-10C8h]
  unsigned __int64 *v108; // [rsp+20h] [rbp-10C0h]
  _QWORD *v109; // [rsp+20h] [rbp-10C0h]
  size_t n; // [rsp+28h] [rbp-10B8h]
  size_t na; // [rsp+28h] [rbp-10B8h]
  size_t nb; // [rsp+28h] [rbp-10B8h]
  int v113; // [rsp+34h] [rbp-10ACh] BYREF
  __int64 v114; // [rsp+38h] [rbp-10A8h] BYREF
  void *dest; // [rsp+40h] [rbp-10A0h] BYREF
  __int128 v116; // [rsp+48h] [rbp-1098h]
  void *v117; // [rsp+60h] [rbp-1080h] BYREF
  __int128 v118; // [rsp+68h] [rbp-1078h]
  __m128i *v119; // [rsp+80h] [rbp-1060h] BYREF
  __int128 v120; // [rsp+88h] [rbp-1058h]
  char v121[4104]; // [rsp+A0h] [rbp-1040h] BYREF
  unsigned __int64 v122; // [rsp+10A8h] [rbp-38h]

  v122 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 136) = 4096;
  dest = nullptr;
  v117 = nullptr;
  v116 = 0;
  v118 = 0;
  LODWORD(v6) = sub_4F2D0(a1, a2, nullptr, 0, (__int64 *)(a1 + 192), 1, 0.0, *(double *)a4.m128i_i64);
  if ( (_DWORD)v6 )
  {
    if ( !a2 )
      goto LABEL_4;
    v7 = strlen(a2);
    v8 = v7;
    if ( !v7 )
      goto LABEL_4;
    v18 = dest;
    v19 = v7 + 1;
    if ( *((_QWORD *)&v116 + 1) < v7 + 1 )
    {
      dest = (void *)qvector_reserve();
      v18 = dest;
    }
    *(_QWORD *)&v116 = v19;
    memmove(v18, a2, v8);
    *((_BYTE *)dest + v8) = 0;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(a1 + 80);
  v10 = *(_WORD *)(*(_QWORD *)(a1 + 192) + 104LL) == 523;
  *(_BYTE *)(a1 + 57) = v10;
  *(_BYTE *)(v9 + 27) = v10;
  if ( (unsigned int)sub_5BED0(*(_QWORD *)(a1 + 80)) )
  {
    v11 = *(_QWORD *)(a1 + 80);
    if ( *(_BYTE *)(v11 + 24) )
    {
      sub_59110(v11);
      sub_4E340(a1);
    }
    LODWORD(v6) = 36;
    goto LABEL_10;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 192) + 792LL) |= 4u;
  sub_58F10(*(_QWORD *)(a1 + 80), a2);
  *(_DWORD *)(a1 + 136) = 0;
  v6 = *(_QWORD *)(a1 + 80);
  v13 = *(_QWORD *)(v6 + 152);
  if ( 24LL * *(_QWORD *)(v6 + 160) )
  {
    do
    {
      v14 = s1;
      if ( *(_QWORD *)(v13 + 8) )
        v14 = *(const char **)v13;
      LODWORD(v6) = sub_4F2D0(a1, v14, nullptr, 0, nullptr, 0, 0.0, *(double *)a4.m128i_i64);
      if ( (_DWORD)v6 )
      {
        if ( (void **)v13 != &dest )
        {
          v15 = *(_QWORD *)(v13 + 8);
          if ( v15 < 2 )
            goto LABEL_4;
          v16 = *(const char **)v13;
          v17 = dest;
          if ( *((_QWORD *)&v116 + 1) < v15 )
          {
            v17 = (void *)qvector_reserve();
            dest = v17;
          }
          *(_QWORD *)&v116 = v15;
          memmove(v17, v16, v15 - 1);
          *((char *)dest + v15 - 1) = 0;
        }
        goto LABEL_5;
      }
      v6 = *(_QWORD *)(a1 + 80);
      v13 += 24;
    }
    while ( v13 != *(_QWORD *)(v6 + 152) + 24LL * *(_QWORD *)(v6 + 160) );
  }
  *(_DWORD *)(a1 + 136) = 1792;
  v20 = *(_QWORD *)(v6 + 176);
  if ( 24LL * *(_QWORD *)(v6 + 184) )
  {
    do
    {
      v21 = s1;
      if ( *(_QWORD *)(v20 + 8) )
        v21 = *(const char **)v20;
      LODWORD(v6) = sub_4F2D0(a1, v21, nullptr, 0, nullptr, 0, 0.0, *(double *)a4.m128i_i64);
      if ( (_DWORD)v6 )
      {
        if ( !v21 )
          goto LABEL_4;
        v22 = strlen(v21);
        v23 = v22;
        if ( !v22 )
          goto LABEL_4;
        v24 = dest;
        v25 = v22 + 1;
        if ( *((_QWORD *)&v116 + 1) < v22 + 1 )
        {
          dest = (void *)qvector_reserve();
          v24 = dest;
        }
        *(_QWORD *)&v116 = v25;
        memmove(v24, v21, v23);
        *((_BYTE *)dest + v23) = 0;
        goto LABEL_5;
      }
      v6 = *(_QWORD *)(a1 + 80);
      v20 += 24;
    }
    while ( v20 != *(_QWORD *)(v6 + 176) + 24LL * *(_QWORD *)(v6 + 184) );
  }
  v104 = *(_QWORD *)(a1 + 128);
  n = a1 + 96;
  while ( 1 )
  {
    for ( i = *(_QWORD *)(a1 + 112); i != n; i = std::_Rb_tree_increment() )
    {
      v27 = *(_QWORD *)(i + 56);
      v28 = s1;
      if ( *(_QWORD *)(v27 + 836) )
        v28 = *(const char **)(v27 + 828);
      if ( (*(_DWORD *)(v27 + 792) & 0x108) == 0x100 )
      {
        LODWORD(v6) = sub_5BE10(v6, v28, *(_QWORD *)(i + 56));
        if ( (_DWORD)v6 )
        {
          sub_59110(*(_QWORD *)(a1 + 80));
          sub_4D220(a1);
          goto LABEL_5;
        }
        *(_DWORD *)(v27 + 792) |= 0x18u;
        v6 = *(_QWORD *)(a1 + 80);
      }
    }
    for ( j = *(_QWORD *)(v6 + 360); j != v6 + 344; j = std::_Rb_tree_increment() )
    {
      if ( *(_DWORD *)(j + 88) == 1 )
      {
        v30 = s1;
        if ( *(_QWORD *)(j + 104) )
          v30 = *(const char **)(j + 96);
        if ( (unsigned int)sub_4FEA0(a1, v30, &v114, &v113, 0.0, *(double *)a4.m128i_i64) )
        {
          if ( !*(_QWORD *)(j + 104) )
            goto LABEL_63;
          v6 = *(_QWORD *)(j + 96);
          v32 = strchr((const char *)v6, 46);
          if ( !v32 )
            goto LABEL_198;
          na = (size_t)&v32[-v6];
          if ( &v32[-v6] == (char *)-1LL )
            goto LABEL_198;
          v33 = 0;
          v34 = nullptr;
          v119 = nullptr;
          v120 = 0;
          v35 = na + 1;
          if ( na )
          {
            v119 = (__m128i *)qvector_reserve();
            *(_QWORD *)&v120 = na + 1;
            memmove(v119, (const void *)v6, na);
            v119->m128i_i8[na] = 0;
            v34 = (unsigned __int64 *)v119;
            v33 = *((_QWORD *)&v120 + 1);
            na = v120;
          }
          v119 = nullptr;
          v120 = 0;
          if ( dest )
          {
            v108 = v34;
            *(_QWORD *)&v116 = 0;
            qfree();
            *((_QWORD *)&v116 + 1) = v33;
            dest = v108;
            *(_QWORD *)&v116 = na;
            if ( v119 )
            {
              *(_QWORD *)&v120 = 0;
              qfree();
            }
          }
          else
          {
            dest = v34;
            *((_QWORD *)&v116 + 1) = v33;
            *(_QWORD *)&v116 = na;
          }
          v36 = s1;
          if ( *(_QWORD *)(j + 104) )
            v36 = *(const char **)(j + 96);
          v119 = nullptr;
          v120 = 0;
          v37 = (__m128i *)&v36[v35];
          if ( v37 )
          {
            v38 = strlen(v37->m128i_i8);
            v39 = v38 + 1;
            v40 = v38;
            v41 = (unsigned __int64 *)qvector_reserve();
            *(_QWORD *)&v120 = v39;
            v119 = (__m128i *)v41;
            memmove(v41, v37, v40);
            v119->m128i_i8[v40] = 0;
            v37 = v119;
            v42 = v120;
          }
          else
          {
            v42 = 0u;
          }
          v119 = nullptr;
          v120 = 0;
          if ( v117 )
          {
            *(_QWORD *)&v118 = 0;
            qfree();
            v117 = v37;
            v118 = v42;
            if ( v119 )
            {
              *(_QWORD *)&v120 = 0;
              qfree();
            }
          }
          else
          {
            v117 = v37;
            v118 = v42;
          }
LABEL_43:
          sub_4E340(a1);
          LODWORD(v6) = 29;
          goto LABEL_10;
        }
        v6 = *(_QWORD *)(a1 + 80);
      }
    }
    v31 = *(_QWORD *)(a1 + 128);
    if ( v104 == v31 )
      break;
LABEL_61:
    v104 = v31;
  }
  v106 = *(_QWORD *)(a1 + 112);
  if ( v106 == n )
    goto LABEL_189;
  while ( 1 )
  {
    v43 = *(_QWORD *)(v106 + 56);
    v44 = *(_DWORD *)(v43 + 792);
    if ( (v44 & 0x108) == 0 )
    {
      v45 = *(_QWORD *)(v43 + 684);
      *(_DWORD *)(v43 + 792) = v44 | 8;
      if ( v43 + 668 != v45 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v45 + 40) )
          {
            v46 = *(_BYTE **)(v45 + 32);
            if ( *v46 )
            {
              if ( (unsigned int)sub_4F840(
                                   a1,
                                   *(_QWORD *)(v43 + 820),
                                   *(const char **)(v45 + 32),
                                   &v119,
                                   nullptr,
                                   0,
                                   0.0,
                                   *(double *)a4.m128i_i64) )
                break;
            }
          }
          v45 = std::_Rb_tree_increment();
          if ( v43 + 668 == v45 )
            goto LABEL_89;
        }
        if ( &dest != (void **)(v43 + 828) )
        {
          v66 = *(_QWORD *)(v43 + 836);
          v67 = v66;
          if ( v66 && (v68 = v66 - 1, v66 != 1) )
          {
            v100 = *(const void **)(v43 + 828);
            if ( *((_QWORD *)&v116 + 1) < v66 )
              dest = (void *)qvector_reserve();
            *(_QWORD *)&v116 = v67;
            memmove(dest, v100, v68);
            *((char *)dest + v67 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v116 = 0;
          }
        }
        if ( v46 && (v69 = strlen(v46), (v70 = v69) != 0) )
        {
          v71 = v117;
          v72 = v69 + 1;
          if ( *((_QWORD *)&v118 + 1) < v69 + 1 )
          {
            v117 = (void *)qvector_reserve();
            v71 = v117;
          }
          *(_QWORD *)&v118 = v72;
          memmove(v71, v46, v70);
          *((_BYTE *)v117 + v70) = 0;
        }
        else
        {
          *(_QWORD *)&v118 = 0;
        }
        goto LABEL_43;
      }
LABEL_89:
      v47 = *(_QWORD **)(v43 + 636);
      v109 = (_QWORD *)(v43 + 636);
      if ( (_QWORD *)(v43 + 636) != v47 )
        break;
    }
LABEL_82:
    v106 = std::_Rb_tree_increment();
    if ( v106 == n )
    {
      v31 = *(_QWORD *)(a1 + 128);
      if ( v104 != v31 )
      {
        v6 = *(_QWORD *)(a1 + 80);
        goto LABEL_61;
      }
      v53 = *(_QWORD *)(a1 + 112);
      if ( v53 != n )
      {
        do
        {
          v54 = *(_QWORD *)(v53 + 56);
          v119 = (__m128i *)v54;
          v55 = *(_DWORD *)(v54 + 792);
          if ( (v55 & 1) == 0 && (v55 & 0x100) != 0 )
          {
            if ( (unsigned int)sub_4E860(a1, *(_QWORD *)(v54 + 820), (__int64 *)&v119) )
              goto LABEL_136;
            v119[49].m128i_i32[2] = v119[49].m128i_i32[2] & 0xFFFFFEFC | 3;
          }
          v53 = std::_Rb_tree_increment();
        }
        while ( v53 != n );
        v56 = *(_QWORD *)(a1 + 112);
        if ( v56 != n )
        {
          do
          {
            v57 = *(_QWORD *)(v56 + 56);
            if ( (*(_BYTE *)(v57 + 792) & 1) == 0 )
            {
              if ( (unsigned int)sub_4FAB0(
                                   a1,
                                   *(_QWORD *)(v56 + 56),
                                   (__int64)&dest,
                                   (__int64 *)&v117,
                                   0.0,
                                   *(double *)a4.m128i_i64) )
              {
LABEL_28:
                sub_4E340(a1);
                LODWORD(v6) = 27;
                goto LABEL_10;
              }
              *(_DWORD *)(v57 + 792) |= 1u;
            }
            v56 = std::_Rb_tree_increment();
          }
          while ( v56 != n );
          v58 = *(_QWORD *)a1;
          if ( 40LL * *(_QWORD *)(a1 + 8) )
            goto LABEL_117;
          v73 = *(_QWORD *)(a1 + 112);
          LODWORD(v6) = 0;
          if ( v73 == v56 )
          {
LABEL_158:
            v82 = *(_QWORD *)(a1 + 192);
            v114 = 0;
            v83 = (*(_DWORD *)(v82 + 176) + 4095) & 0xFFFFF000;
            if ( v83 )
            {
              v84 = v83;
            }
            else
            {
              v84 = 0x100000;
              v83 = 0x100000;
            }
            *(_DWORD *)(a1 + 256) = v83;
            LODWORD(v6) = sub_3C370(*(_QWORD *)(a1 + 64), (double *)&v114, v84, 128, 1u, 0, 0, (__int64 *)&v119, 0);
            if ( (_DWORD)v6 )
            {
              sub_4D220(a1);
              goto LABEL_5;
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8256LL) = v114;
            *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8264LL) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8256LL)
                                                       + *(unsigned int *)(a1 + 256);
            *(_BYTE *)(*(_QWORD *)(a1 + 72) + 8329LL) = 6;
            v88 = *(_QWORD **)(a1 + 72);
            if ( v88[1039] <= 4u )
              v88[1037] = qvector_reserve();
            v89 = (_DWORD *)v88[1037];
            v88[1038] = 5;
            *v89 = 1096040772;
            *(_BYTE *)(v88[1037] + 4LL) = 0;
            v90 = *(_QWORD **)(a1 + 72);
            if ( v90[1036] <= 5u )
              v90[1034] = qvector_reserve();
            v91 = v90[1034];
            v90[1035] = 6;
            *(_DWORD *)v91 = 1128354899;
            *(_BYTE *)(v91 + 4) = 75;
            *(_BYTE *)(v90[1034] + 5LL) = 0;
            *(_BYTE *)(*(_QWORD *)(a1 + 72) + 8328LL) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64));
            *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8248LL) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8264LL) - 64LL;
            v92 = *(const __m128i **)(a1 + 72);
            v93 = v119;
            v94 = _mm_loadu_si128(v92 + 516);
            v95 = v92;
            v96 = (unsigned __int64 *)&v119[3];
            v119[2] = v94;
            if ( v96 != (unsigned __int64 *)&v92[517] )
            {
              v97 = v92[517].m128i_u64[1];
              if ( v97 > 1 )
                sub_4E400((__int64)v96, (const void *)v95[517].m128i_i64[0], v97 - 1);
              else
                v93[3].m128i_i64[1] = 0;
            }
            if ( &v93[4].m128i_u64[1] != &v95[518].m128i_u64[1] )
            {
              v98 = v95[519].m128i_u64[0];
              if ( v98 > 1 )
                sub_4E400((__int64)&v93[4].m128i_i64[1], (const void *)v95[518].m128i_i64[1], v98 - 1);
              else
                v93[5].m128i_i64[0] = 0;
            }
            v93[6].m128i_i64[0] = v95[520].m128i_i64[0];
            v93[6].m128i_i8[8] = v95[520].m128i_i8[8];
            v93[6].m128i_i8[9] = v95[520].m128i_i8[9];
            v119[7].m128i_i32[0] |= 0x104u;
            if ( *(_BYTE *)(a1 + 57) )
              v99 = sub_53980(a1, *(double *)v94.m128i_i64, a4, a5);
            else
              v99 = sub_4FF80(a1, *(double *)v94.m128i_i64, a4, a5);
            LODWORD(v6) = v99;
            if ( v99 )
LABEL_136:
              LODWORD(v6) = 1;
            else
              *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8240LL) = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 592LL)
                                                         + *(unsigned int *)(*(_QWORD *)(a1 + 192) + 120LL);
            goto LABEL_10;
          }
LABEL_141:
          v74 = (_QWORD *)(a1 + 208);
          while ( 2 )
          {
            v75 = *(_QWORD *)(v73 + 56);
            v76 = *(_DWORD *)(v75 + 792);
            if ( (v76 & 0x20) == 0 )
            {
              v77 = *(_QWORD *)(v75 + 836) == 0;
              v78 = s1;
              *(_DWORD *)(v75 + 792) = v76 | 0x20;
              if ( !v77 )
                v78 = *(const char **)(v75 + 828);
              LODWORD(v6) = sub_4D2E0(
                              a1,
                              *(_QWORD *)(v75 + 820),
                              (unsigned __int64 *)(v75 + 612),
                              v78,
                              0,
                              0.0,
                              *(double *)a4.m128i_i64,
                              *(double *)a5.m128_u64);
              if ( (_DWORD)v6 )
              {
                if ( &dest == (void **)(v75 + 852) )
                  goto LABEL_5;
                v85 = *(_QWORD *)(v75 + 860);
                nb = v85;
                if ( v85 )
                {
                  v86 = v85 - 1;
                  if ( v85 != 1 )
                  {
                    v87 = *(const void **)(v75 + 852);
                    if ( *((_QWORD *)&v116 + 1) < v85 )
                      dest = (void *)qvector_reserve();
                    *(_QWORD *)&v116 = nb;
                    memmove(dest, v87, v86);
                    *((char *)dest + nb - 1) = 0;
                    goto LABEL_5;
                  }
                }
LABEL_4:
                *(_QWORD *)&v116 = 0;
                goto LABEL_5;
              }
              v79 = *(_QWORD **)(a1 + 216);
              if ( !v79 )
              {
                v81 = (_QWORD *)(a1 + 208);
                goto LABEL_154;
              }
              v80 = *(_QWORD *)(v75 + 820);
              v81 = (_QWORD *)(a1 + 208);
              do
              {
                if ( v79[4] >= v80 )
                {
                  v81 = v79;
                  v79 = (_QWORD *)v79[2];
                }
                else
                {
                  v79 = (_QWORD *)v79[3];
                }
              }
              while ( v79 );
              if ( v81 == v74 || v80 < v81[4] )
              {
LABEL_154:
                v119 = (__m128i *)(v75 + 820);
                v81 = sub_4A990((_QWORD *)(a1 + 200), v81, (unsigned __int64 **)&v119);
              }
              v81[5] = v75;
            }
            v73 = std::_Rb_tree_increment();
            if ( v73 == n )
            {
              if ( (_DWORD)v6 )
                goto LABEL_5;
              goto LABEL_158;
            }
            continue;
          }
        }
      }
LABEL_189:
      v58 = *(_QWORD *)a1;
      if ( !(40LL * *(_QWORD *)(a1 + 8)) )
        goto LABEL_158;
      do
      {
LABEL_117:
        v59 = s1;
        if ( *(_QWORD *)(v58 + 16) )
          v59 = *(const char **)(v58 + 8);
        v60 = sub_4FEA0(a1, v59, (__int64 *)&v119, &v114, 0.0, *(double *)a4.m128i_i64);
        v6 = v60;
        if ( v60 )
        {
          v73 = *(_QWORD *)(a1 + 112);
          if ( n == v73 )
            goto LABEL_5;
          goto LABEL_141;
        }
        v61 = *(_QWORD *)(*(_QWORD *)v58 + 612LL);
        v62 = v61 + *(_QWORD *)(*(_QWORD *)v58 + 620LL);
        if ( (*(_DWORD *)debug & 0x10000) != 0 )
        {
          v105 = *(_QWORD *)(*(_QWORD *)v58 + 612LL);
          v107 = v61 + *(_QWORD *)(*(_QWORD *)v58 + 620LL);
          sub_E960((__int64)"%x: fixing @ %a\n", *(_DWORD *)(v58 + 32), 0.0);
          v61 = v105;
          v62 = v107;
        }
        v63 = *(unsigned int *)(v58 + 32);
        v64 = __CFADD__(v61, v63);
        v65 = (_QWORD *)(v61 + v63);
        if ( v64 || (unsigned __int64)v65 >= v62 )
        {
          if ( under_debugger )
            BUG();
          interr();
LABEL_198:
          if ( v6 )
          {
            v101 = strlen((const char *)v6);
            v102 = v101;
            if ( v101 )
            {
              v103 = v101 + 1;
              if ( *((_QWORD *)&v116 + 1) < v101 + 1 )
                dest = (void *)qvector_reserve();
              *(_QWORD *)&v116 = v103;
              memmove(dest, (const void *)v6, v102);
              *((_BYTE *)dest + v102) = 0;
              *(_QWORD *)&v118 = 0;
              goto LABEL_43;
            }
          }
LABEL_63:
          *(_QWORD *)&v116 = 0;
          *(_QWORD *)&v118 = 0;
          goto LABEL_43;
        }
        if ( *(_BYTE *)(a1 + 57) )
          *v65 = (char *)v119 + (unsigned int)v114;
        else
          *(_DWORD *)v65 += (_DWORD)v119 + v114;
        v58 += 40;
      }
      while ( v58 != *(_QWORD *)a1 + 40LL * *(_QWORD *)(a1 + 8) );
      v73 = *(_QWORD *)(a1 + 112);
      if ( v73 == n )
        goto LABEL_158;
      goto LABEL_141;
    }
  }
  while ( 1 )
  {
    v48 = s1;
    if ( v47[3] )
      v48 = (const char *)v47[2];
    LODWORD(v6) = sub_4F2D0(a1, v48, nullptr, 0, nullptr, 0, 0.0, *(double *)a4.m128i_i64);
    if ( (_DWORD)v6 )
      break;
    v47 = (_QWORD *)*v47;
    if ( v109 == v47 )
      goto LABEL_82;
  }
  if ( !v48 )
    goto LABEL_4;
  v49 = strlen(v48);
  v50 = v49;
  if ( !v49 )
    goto LABEL_4;
  v51 = dest;
  v52 = v49 + 1;
  if ( *((_QWORD *)&v116 + 1) < v49 + 1 )
  {
    dest = (void *)qvector_reserve();
    v51 = dest;
  }
  *(_QWORD *)&v116 = v52;
  memmove(v51, v48, v50);
  *((_BYTE *)dest + v50) = 0;
LABEL_5:
  switch ( (int)v6 )
  {
    case 9:
    case 17:
    case 25:
    case 26:
    case 32:
    case 34:
    case 37:
    case 39:
    case 40:
      sub_4E340(a1);
      break;
    case 27:
      goto LABEL_28;
    case 28:
      sub_4E340(a1);
      sub_58E50(*(_QWORD *)(a1 + 80), 2, v121, 4096);
      sub_4E340(a1);
      break;
    case 29:
      goto LABEL_43;
    default:
      break;
  }
LABEL_10:
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    qfree();
  }
  if ( dest )
  {
    *(_QWORD *)&v116 = 0;
    qfree();
  }
  return (unsigned int)v6;
}

