__int64 __fastcall sub_171440(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v5; // r13
  __m128i v6; // xmm0
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 *v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r9
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rsi
  _QWORD *v25; // rdi
  __int64 v26; // r10
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 i; // rax
  __int64 *v30; // rsi
  __int64 *v31; // r13
  __int64 v32; // r14
  __int64 *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r14
  char v37; // al
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // r13
  int v43; // r14d
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r13
  __int64 v61; // rsi
  int v62; // eax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // r13
  __int64 v68; // rcx
  __int64 v69; // r14
  __int64 v70; // r13
  int v71; // eax
  __int64 v72; // rax
  unsigned __int64 *v73; // [rsp+0h] [rbp-170h]
  __int64 v74; // [rsp+8h] [rbp-168h]
  int v75; // [rsp+14h] [rbp-15Ch]
  __int64 v76; // [rsp+18h] [rbp-158h]
  bool v77; // [rsp+28h] [rbp-148h]
  __int64 v78; // [rsp+30h] [rbp-140h]
  __int64 na; // [rsp+38h] [rbp-138h]
  unsigned __int64 *n; // [rsp+38h] [rbp-138h]
  __int64 v81; // [rsp+40h] [rbp-130h]
  size_t v82; // [rsp+50h] [rbp-120h]
  char v83; // [rsp+50h] [rbp-120h]
  unsigned __int8 v84; // [rsp+50h] [rbp-120h]
  size_t v85; // [rsp+50h] [rbp-120h]
  size_t v86; // [rsp+50h] [rbp-120h]
  __int64 v87; // [rsp+50h] [rbp-120h]
  __int64 *v88; // [rsp+58h] [rbp-118h]
  _DWORD *v89; // [rsp+68h] [rbp-108h] BYREF
  __m128i v90; // [rsp+70h] [rbp-100h] BYREF
  __int64 v91[2]; // [rsp+80h] [rbp-F0h] BYREF
  void *src; // [rsp+90h] [rbp-E0h] BYREF
  __int128 v93; // [rsp+98h] [rbp-D8h]
  __int64 v94; // [rsp+B0h] [rbp-C0h] BYREF
  __int128 v95; // [rsp+B8h] [rbp-B8h] BYREF
  __int128 v96; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 v97; // [rsp+D8h] [rbp-98h]
  char v98; // [rsp+E0h] [rbp-90h]
  _QWORD v99[5]; // [rsp+F0h] [rbp-80h] BYREF
  char v100; // [rsp+118h] [rbp-58h]
  _QWORD v101[10]; // [rsp+11Ch] [rbp-54h]

  *(_QWORD *)((char *)&v101[3] + 4) = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 0;
  if ( *(_DWORD *)v3 != 42 )
    return 0;
  if ( *(_BYTE *)(v3 + 32) != 4 )
    return 0;
  if ( (*(_BYTE *)(a1 + 25) & 0x10) != 0 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
  if ( !*(_DWORD *)(v5 + 52) )
    return 0;
  v99[0] = &off_4DDDC8;
  memset(&v99[1], 0, 32);
  v100 = 0;
  v101[0] = 0xFFFFFFFF00000000LL;
  if ( (unsigned int)sub_11E9B0(v3 + 32, (__int64)v99, 0, 0, a2) || SLODWORD(v101[0]) <= 1 )
    return 0;
  v6 = 0;
  v91[0] = 0;
  v7 = 0;
  v91[1] = 0;
  src = nullptr;
  v93 = 0;
  do
  {
    v94 = 0;
    *(_QWORD *)&v95 = 0;
    sub_63E80(&v94, *((_DWORD *)v101 + v7 + 1), 1, 0.0);
    *((_QWORD *)&v95 + 1) = 0;
    v96 = 0;
    sub_64280(v91, &v94, 0.0);
    sub_316CB0((__int64 *)&src, (__int64 **)&v95 + 1, v8, v9);
    if ( *((_QWORD *)&v95 + 1) )
    {
      *(_QWORD *)&v96 = 0;
      qfree(*((__int64 *)&v95 + 1));
    }
    qfree(v94);
    ++v7;
  }
  while ( SLODWORD(v101[0]) > v7 );
  v76 = sub_129150(a1, v91, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), 0, 0, 0, 0.0, (__m128)0LL, 0x101u);
  if ( v76 )
  {
    v90 = 0u;
    v89 = (_DWORD *)(a1 + 72);
    v14 = sub_1711A0(&v90, (int *)(a1 + 72), &v89);
    v15 = v90.m128i_i64[1];
    v88 = (__int64 *)v90.m128i_i64[0];
    v14[4] = v76;
  }
  else
  {
    v74 = sub_110340(v5, 0, v10, v11, v12, v13, 0.0, (__m128)0LL);
    if ( !v74 )
    {
      if ( !under_debugger )
        sub_383060(0xC50Eu, 0.0);
      goto LABEL_141;
    }
    ++*(_DWORD *)(v74 + 24);
    v73 = (unsigned __int64 *)(*(_QWORD *)v74 + 24LL * *(int *)(a1 + 72));
    if ( SLODWORD(v101[0]) <= 0 )
    {
      v15 = 0;
      sub_104E10(v74, 0.0);
      v88 = nullptr;
      goto LABEL_35;
    }
    v15 = 0;
    v88 = nullptr;
    v75 = 0;
    do
    {
      v94 = 0;
      v41 = *((int *)v101 + v75 + 1);
      BYTE8(v96) = 1;
      v98 = 1;
      *(_QWORD *)&v96 = v41;
      v95 = 0;
      v97 = 0xFFFFFFFF00000001LL;
      v42 = sub_104DF0(v73, (__int64)&v94);
      if ( v94 )
      {
        *(_QWORD *)&v95 = 0;
        qfree(v94);
      }
      if ( !v42 )
      {
LABEL_86:
        sub_104E10(v74, 0.0);
        v37 = 0;
        goto LABEL_54;
      }
      v43 = 0;
      v44 = 0;
      if ( v42[1] )
      {
LABEL_77:
        v50 = *(unsigned int *)(*v42 + 4 * v44);
        LODWORD(v89) = v50;
        if ( !(_DWORD)v50 )
          goto LABEL_86;
        if ( !v88 )
          goto LABEL_73;
        v45 = *v88 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v45 )
          goto LABEL_76;
        if ( (*(_BYTE *)(*v88 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_73;
        while ( 1 )
        {
          if ( (int)v50 < *(_DWORD *)(v45 + 24) )
          {
            v45 = *(_QWORD *)(v45 + 8);
          }
          else
          {
            if ( (int)v50 <= *(_DWORD *)(v45 + 24) )
            {
              if ( v88 == (__int64 *)v45 )
              {
LABEL_73:
                v46 = *(_QWORD *)(a1 + 64);
                if ( (unsigned int)v50 >= *(_DWORD *)(v46 + 64) )
                  sub_167AF0(0.0);
                v47 = *(_QWORD *)(*(_QWORD *)(v46 + 528) + 8 * v50);
                v48 = sub_129150(v47, v91, *(_QWORD *)(v47 + 56), 0, 0, 0, 0.0, (__m128)0LL, 0x101u);
                if ( v48 )
                {
                  v85 = v48;
                  v90.m128i_i64[1] = v15;
                  v94 = (__int64)&v89;
                  v90.m128i_i64[0] = (__int64)v88;
                  v49 = sub_1711A0(&v90, (int *)&v89, (_DWORD **)&v94);
                  v15 = v90.m128i_i64[1];
                  v88 = (__int64 *)v90.m128i_i64[0];
                  v49[4] = v85;
                  goto LABEL_76;
                }
                if ( !under_debugger )
                  sub_383060(0xC9E2u, 0.0);
LABEL_141:
                BUG();
              }
LABEL_76:
              v44 = ++v43;
              if ( (unsigned __int64)v43 >= v42[1] )
                break;
              goto LABEL_77;
            }
            v45 = *(_QWORD *)(v45 + 16);
          }
          if ( (*(_BYTE *)v45 & 2) != 0 )
            goto LABEL_73;
        }
      }
      ++v75;
    }
    while ( SLODWORD(v101[0]) > v75 );
    sub_104E10(v74, 0.0);
  }
  if ( v88 )
  {
    if ( v15 )
    {
      v16 = v88[1];
      while ( v88 != (__int64 *)v16 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        v18 = *(unsigned int *)(v16 + 24);
        if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
          sub_167AF0(0.0);
        v19 = *(_QWORD *)(v17 + 528);
        v20 = *(_QWORD *)(v16 + 32);
        v21 = (_QWORD *)(v17 + 1008);
        v22 = *(_QWORD **)(v17 + 1016);
        v23 = *(_QWORD *)(v19 + 8 * v18);
        v24 = *(_QWORD *)(v20 + 24);
        if ( v22 )
        {
          v25 = v21;
          do
          {
            while ( 1 )
            {
              v26 = v22[2];
              v27 = v22[3];
              if ( v22[4] < v24 )
                break;
              v25 = v22;
              v22 = (_QWORD *)v22[2];
              if ( !v26 )
                goto LABEL_24;
            }
            v22 = (_QWORD *)v22[3];
          }
          while ( v27 );
LABEL_24:
          if ( v21 != v25 && v24 >= v25[4] )
            goto LABEL_53;
        }
        sub_127A20((__int64)&v94, v23, v20, 0, v23, v20, 0.0, (__m128)0LL);
        if ( !(unsigned __int8)sub_64780(&v94, v91)
          && !(unsigned __int8)sub_318470((unsigned __int64 **)&v95 + 1, (__int64)&src) )
        {
          if ( *((_QWORD *)&v95 + 1) )
          {
            *(_QWORD *)&v96 = 0;
            qfree(*((__int64 *)&v95 + 1));
          }
          qfree(v94);
          goto LABEL_53;
        }
        if ( *((_QWORD *)&v95 + 1) )
        {
          *(_QWORD *)&v96 = 0;
          qfree(*((__int64 *)&v95 + 1));
        }
        qfree(v94);
        if ( (*(_QWORD *)v16 & 2) == 0 )
        {
          v28 = *(_QWORD *)(v16 + 16);
          if ( (*(_BYTE *)v28 & 2) != 0 )
          {
            v38 = (_QWORD *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL);
            v39 = *v38;
            if ( (*v38 & 2) != 0 || v38[2] != v16 )
            {
LABEL_61:
              v16 = (unsigned __int64)v38;
            }
            else
            {
              while ( 1 )
              {
                v16 = v39 & 0xFFFFFFFFFFFFFFFCLL;
                v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v39 & 2) != 0 )
                  break;
                v40 = v38;
                v38 = (_QWORD *)v16;
                if ( *(_QWORD **)(v16 + 16) != v40 )
                  goto LABEL_61;
              }
            }
          }
          else
          {
            for ( i = *(_QWORD *)(v28 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
              v28 = i;
            v16 = v28;
          }
        }
      }
    }
  }
LABEL_35:
  v94 = 0;
  *(_QWORD *)&v95 = 0;
  sub_63E80(&v94, 5, 1, 0.0);
  v30 = &v94;
  sub_648D0(v91, (const void **)&v94, 0.0);
  qfree(v94);
  if ( v88 )
  {
    if ( v15 )
    {
      v31 = (__int64 *)v88[1];
      while ( v88 != v31 )
      {
        v34 = *(_QWORD *)(a1 + 64);
        v35 = *((unsigned int *)v31 + 6);
        if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 64) )
          sub_167AF0(0.0);
        v36 = *(_QWORD *)(*(_QWORD *)(v34 + 528) + 8 * v35);
        v82 = *(_QWORD *)(v31[4] + 8);
        sub_64000(&v94, (__int64)v91, 0.0);
        *((_QWORD *)&v95 + 1) = 0;
        v96 = 0;
        if ( (_QWORD)v93 )
        {
          v81 = v93;
          na = 16 * v93;
          *((_QWORD *)&v95 + 1) = qalloc_or_throw(16 * v93, (__int64)v91, 16 * v93, v93);
          *((_QWORD *)&v96 + 1) = v81;
          memcpy(*((void **)&v95 + 1), src, na);
          *(_QWORD *)&v96 = v81;
        }
        v30 = &v94;
        v32 = sub_A9D90(v36, (unsigned __int64 **)&v94, v82, 0, 1u);
        if ( *((_QWORD *)&v95 + 1) )
        {
          *(_QWORD *)&v96 = 0;
          qfree(*((__int64 *)&v95 + 1));
        }
        qfree(v94);
        if ( v32 )
          goto LABEL_53;
        if ( (*v31 & 2) == 0 )
        {
          v33 = (__int64 *)v31[2];
          if ( (*(_BYTE *)v33 & 2) != 0 )
          {
            v51 = (__int64 *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
            v52 = *v51;
            if ( (*v51 & 2) == 0 )
            {
              v30 = v88;
              while ( (__int64 *)v51[2] == v31 )
              {
                v31 = v51;
                v53 = v52 & 0xFFFFFFFFFFFFFFFCLL;
                v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v52 & 2) != 0 )
                {
                  v31 = (__int64 *)v53;
                  goto LABEL_45;
                }
                v51 = (__int64 *)v53;
              }
            }
            v31 = v51;
          }
          else
          {
            do
            {
              v31 = v33;
              v33 = (__int64 *)v33[1];
            }
            while ( (*(_BYTE *)v33 & 2) == 0 );
          }
        }
LABEL_45:
        ;
      }
    }
  }
  if ( v76 )
    goto LABEL_95;
  v67 = *(_QWORD *)(a1 + 48);
  sub_64000(&v94, (__int64)v91, 0.0);
  v69 = v93;
  v6 = 0;
  *((_QWORD *)&v95 + 1) = 0;
  v96 = 0;
  if ( (_QWORD)v93 )
  {
    v87 = 16 * v93;
    *((_QWORD *)&v95 + 1) = qalloc_or_throw(16 * v93, 0, 16 * v93, v68);
    *((_QWORD *)&v96 + 1) = v69;
    memcpy(*((void **)&v95 + 1), src, v87);
    *(_QWORD *)&v96 = v69;
  }
  v30 = &v94;
  v70 = sub_A9D90(a1, (unsigned __int64 **)&v94, v67, 0, 1u);
  if ( *((_QWORD *)&v95 + 1) )
  {
    *(_QWORD *)&v96 = 0;
    qfree(*((__int64 *)&v95 + 1));
  }
  qfree(v94);
  if ( !v70 )
  {
LABEL_95:
    *(_QWORD *)&v95 = 5;
    v94 = 0x100000001LL;
    v54 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v54 + 32) == 4 )
    {
      v77 = **(_DWORD **)(v54 + 40) == 6;
      n = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
      if ( !v88 )
      {
LABEL_116:
        if ( v77 )
        {
          sub_1207E0((char *)&v94, n, 6, *(_QWORD *)(v54 + 24), 1, v6);
          v54 = *(_QWORD *)(a1 + 56);
        }
        goto LABEL_118;
      }
    }
    else
    {
      if ( !v88 )
      {
LABEL_118:
        sub_11CA10((char *)(v54 + 32), (char *)&v94);
        v66 = *(_QWORD *)(a1 + 64);
        if ( !v76 )
        {
          v71 = *(_DWORD *)(a1 + 24);
          BYTE1(v71) &= ~2u;
          LOBYTE(v71) = v71 | 0x80;
          *(_DWORD *)(a1 + 24) = v71;
          v72 = *(_QWORD *)(v66 + 784);
          if ( v72 )
          {
            *(_DWORD *)(v72 + 48) = 63;
            v66 = *(_QWORD *)(a1 + 64);
          }
        }
        *(_DWORD *)(a1 + 24) |= 0x1000u;
        sub_66FA0(v66, 1);
        sub_11CDA0((__int64)&v94);
        v37 = 1;
        goto LABEL_54;
      }
      v77 = 0;
      n = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    if ( v15 )
    {
      v55 = v88[1];
      if ( v88 != (__int64 *)v55 )
      {
        do
        {
          v57 = *(_QWORD *)(a1 + 64);
          v58 = *(unsigned int *)(v55 + 24);
          if ( (unsigned int)v58 >= *(_DWORD *)(v57 + 64) )
            sub_167AF0(*(double *)v6.m128i_i64);
          v59 = *(_QWORD *)(v57 + 528);
          v78 = *(_QWORD *)(v59 + 8 * v58);
          v86 = *(_QWORD *)(v55 + 32);
          v60 = j__qalloc_or_throw(80, (__int64)v30, v59, v55 + 24);
          v61 = *(_QWORD *)(v86 + 24);
          *(_QWORD *)(v60 + 40) = 0;
          *(_QWORD *)(v60 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v60 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v60 + 56) = 0;
          *(_QWORD *)(v60 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v60 + 72) = 0;
          sub_330970(v60, v61);
          *(_DWORD *)v60 = 4;
          sub_125180((unsigned __int8 *)(v60 + 32), (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL));
          if ( v77 )
            sub_1207E0((char *)(v60 + 32), n, 6, *(_QWORD *)(v60 + 24), 1, v6);
          sub_125180((unsigned __int8 *)(v60 + 64), (unsigned __int8 *)&v94);
          sub_15BC70((unsigned int *)v60, (unsigned __int8 *)n, 0, 0, nullptr, nullptr, v6, (__m128)0LL, 0);
          v30 = (__int64 *)v60;
          sub_A3160(v78, (_QWORD *)v60, v86, *(double *)v6.m128i_i64);
          v62 = *(_DWORD *)(v78 + 24);
          BYTE1(v62) &= ~2u;
          LOBYTE(v62) = v62 | 0x80;
          *(_DWORD *)(v78 + 24) = v62;
          if ( (*(_QWORD *)v55 & 2) == 0 )
          {
            v56 = *(_QWORD *)(v55 + 16);
            if ( (*(_BYTE *)v56 & 2) != 0 )
            {
              v63 = (_QWORD *)(*(_QWORD *)v55 & 0xFFFFFFFFFFFFFFFCLL);
              v64 = *v63;
              if ( (*v63 & 2) == 0 )
              {
                v30 = v88;
                v65 = (_QWORD *)v55;
                while ( v65 == (_QWORD *)v63[2] )
                {
                  v65 = v63;
                  v55 = v64 & 0xFFFFFFFFFFFFFFFCLL;
                  v64 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v64 & 2) != 0 )
                    goto LABEL_102;
                  v63 = (_QWORD *)v55;
                }
              }
              v55 = (unsigned __int64)v63;
            }
            else
            {
              do
              {
                v55 = v56;
                v56 = *(_QWORD *)(v56 + 8);
              }
              while ( (*(_BYTE *)v56 & 2) == 0 );
            }
          }
LABEL_102:
          ;
        }
        while ( v88 != (__int64 *)v55 );
        v54 = *(_QWORD *)(a1 + 56);
      }
    }
    goto LABEL_116;
  }
LABEL_53:
  v37 = 0;
LABEL_54:
  if ( src )
  {
    v83 = v37;
    *(_QWORD *)&v93 = 0;
    qfree((__int64)src);
    v37 = v83;
  }
  v84 = v37;
  qfree(v91[0]);
  v90.m128i_i64[1] = v15;
  v90.m128i_i64[0] = (__int64)v88;
  sub_1708A0(v90.m128i_i64);
  return v84;
}

