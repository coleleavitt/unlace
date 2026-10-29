unsigned __int64 __fastcall sub_21F320(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rax
  char v13; // bl
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 tinfo_size; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ebp
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __m128i v26; // xmm0
  unsigned __int64 *v27; // r15
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // r10
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  __int64 v39; // r11
  unsigned __int64 v40; // rsi
  char v41; // r13
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdi
  _DWORD *v45; // rdx
  int v46; // eax
  unsigned __int64 v47; // rdx
  unsigned __int64 i; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r9d
  int v53; // eax
  __int64 v54; // rdi
  __int64 v55; // rbp
  signed __int64 v56; // rax
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  bool v61; // r13
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __m128i v68; // xmm0
  __int64 v69; // r15
  __int64 v70; // r14
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // r13
  _QWORD *v75; // rax
  _QWORD *v76; // r10
  unsigned __int64 v77; // r13
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r13
  __m128i *v81; // rdx
  __m128i *v82; // rbp
  __m128i *v83; // rdx
  __int64 v84; // rcx
  char v85; // r14
  __int64 v86; // rdi
  _QWORD *v87; // rax
  __int64 v88; // rdx
  _QWORD *v89; // rsi
  __int64 *v90; // rdx
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rbp
  bool j; // si
  __int64 v95; // rcx
  bool v96; // zf
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  unsigned __int64 v99; // r9
  bool v100; // bp
  int v101; // edx
  int *v102; // r15
  unsigned __int64 *v103; // r14
  _QWORD *v104; // rax
  unsigned __int8 v105; // al
  __int64 v106; // r15
  __int64 v107; // r14
  __int64 v108; // rax
  __int64 v109; // rsi
  __int64 v110; // rsi
  unsigned __int64 v111; // rdx
  __int64 v112; // rdi
  __int64 v113; // rdx
  __int64 v114; // rax
  const __m128i *v115; // rcx
  __int64 v116; // rax
  _QWORD *v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // rt1
  unsigned __int64 k; // rax
  unsigned __int64 v122; // rsi
  unsigned __int64 v123; // rsi
  __int64 v124; // rax
  unsigned __int64 v125; // r14
  unsigned int v126; // eax
  bool v127; // bp
  unsigned __int64 v128; // rax
  int v129; // ecx
  int v130; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v131; // [rsp+0h] [rbp-E8h]
  __int64 v132; // [rsp+0h] [rbp-E8h]
  __int64 v133; // [rsp+0h] [rbp-E8h]
  __int64 v134; // [rsp+8h] [rbp-E0h]
  _QWORD *v135; // [rsp+8h] [rbp-E0h]
  __int64 v136; // [rsp+8h] [rbp-E0h]
  _QWORD *v137; // [rsp+8h] [rbp-E0h]
  __int64 v138; // [rsp+18h] [rbp-D0h]
  unsigned __int64 *v139; // [rsp+18h] [rbp-D0h]
  __int64 v140; // [rsp+20h] [rbp-C8h]
  _QWORD *v141; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v142; // [rsp+28h] [rbp-C0h]
  __int64 v143; // [rsp+30h] [rbp-B8h]
  char v144; // [rsp+3Fh] [rbp-A9h]
  __int64 v145; // [rsp+40h] [rbp-A8h]
  signed __int64 v146; // [rsp+48h] [rbp-A0h]
  __int64 v147; // [rsp+50h] [rbp-98h] BYREF
  __int128 v148; // [rsp+58h] [rbp-90h]
  signed __int64 v149; // [rsp+70h] [rbp-78h] BYREF
  __int128 v150; // [rsp+78h] [rbp-70h]
  __int64 v151; // [rsp+88h] [rbp-60h]
  char v152; // [rsp+90h] [rbp-58h]
  int v153; // [rsp+98h] [rbp-50h]
  int v154; // [rsp+9Ch] [rbp-4Ch]
  char v155; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v156; // [rsp+A8h] [rbp-40h]

  v156 = __readfsqword(0x28u);
  v8 = *a1;
  if ( !*(_BYTE *)(*(_QWORD *)(*a1 + 1496LL) + 148LL) )
    return v156 - __readfsqword(0x28u);
  v9 = *(int *)(v8 + 480);
  if ( (_DWORD)v9 != -1 )
  {
    v13 = sub_1C34E0(
            *(_QWORD *)(v8 + 432) + 104 * v9,
            &v147,
            &v149,
            *(_DWORD *)(*(_QWORD *)(v8 + 432) + 104 * v9 + 88),
            a2);
    if ( v13 )
    {
      v14 = v147;
      v15 = v149;
      v16 = a1[1];
      v17 = v147 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      a1[1] = v17;
      if ( v14 >= v15 )
      {
        if ( v16 == v17 )
          v13 = a1[2] != 0;
      }
      else
      {
        v13 = v16 != v17;
        v17 += v15 - v14;
      }
      a1[2] = v17 - v14;
      tinfo_size = get_tinfo_size();
      v19 = a1[2];
      if ( tinfo_size != v19 )
      {
        clear_tinfo_t();
        v19 = a1[2];
      }
      v20 = (_DWORD *)*a1;
      v21 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      a1[3] = (v19 + a1[1] + v21 - 1) & -v21;
      if ( v13 )
        *v20 |= 0x8000000u;
      return v156 - __readfsqword(0x28u);
    }
  }
  if ( (*((_BYTE *)a1 + 68) & 2) != 0 )
    return v156 - __readfsqword(0x28u);
  v11 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(*a1 + 1496LL) + 148LL) != 2 || *(_BYTE *)(v11 + 320) )
    return v156 - __readfsqword(0x28u);
  v22 = *(_QWORD *)(v11 + 1504);
  v23 = *(_DWORD *)(v22 + 80);
  v24 = sub_1108E0(*(_QWORD *)(v11 + 784), 0, v22, a6, a7, a8, a2, a3);
  v25 = (_QWORD *)v24;
  if ( !v24 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, a2);
LABEL_191:
    BUG();
  }
  ++*(_DWORD *)(v24 + 24);
  v26.m128i_i64[0] = 0;
  v27 = *(unsigned __int64 **)v24;
  v28 = *(_QWORD *)(*a1 + 144LL);
  v29 = *(_QWORD *)(*a1 + 672LL);
  v149 = 0;
  v152 = 5;
  v153 = v29;
  v151 = v28;
  v154 = -1;
  v155 = 1;
  v150 = 0;
  v30 = (unsigned __int64)sub_1041A0(v27, (__int64)&v149);
  if ( v149 )
  {
    *(_QWORD *)&v150 = 0;
    qfree(v149);
  }
  v31 = v23;
  while ( *v27 != v30 )
  {
    if ( *(_BYTE *)(v30 + 56) == 5
      && *(_QWORD *)(v30 + 32)
      && (*(_QWORD *)(v30 + 32) > 1u || **(_DWORD **)(v30 + 24) != *(_DWORD *)(*a1 + 64LL) - 1) )
    {
      if ( *(_BYTE *)(v30 + 56) != 5 )
        sub_21BD40(0.0);
      v32 = *(_QWORD *)(v30 + 48);
      v33 = *a1;
      v34 = *(int *)(v30 + 64);
      if ( !((v32 - *(_QWORD *)(*a1 + 144LL)) % v31) || v32 + (int)v34 > ((v32 + v23 - 1) & -v23) )
      {
        v35 = 1;
        if ( (int)v34 > 0 )
          v35 = *(int *)(v30 + 64);
        v36 = (v35 + v32 + *(_DWORD *)(*(_QWORD *)(v33 + 1504) + 80LL) - 1)
            & -*(_DWORD *)(*(_QWORD *)(v33 + 1504) + 80LL);
        v37 = a1[3];
        if ( v37 < v36 )
          v37 = (v35 + v32 + *(_DWORD *)(*(_QWORD *)(v33 + 1504) + 80LL) - 1)
              & -*(_DWORD *)(*(_QWORD *)(v33 + 1504) + 80LL);
        a1[3] = v37;
        v38 = a1[1];
        if ( v38 < v36 && !*(_BYTE *)(v33 + 320) )
        {
          v39 = a1[2];
          v40 = v36 & -*(_DWORD *)(*(_QWORD *)(v33 + 1504) + 80LL);
          v41 = v38 != v40;
          if ( v36 < v38 + v39 )
          {
            v42 = v38 + v39 + v40 - v36;
          }
          else
          {
            v41 |= v39 != 0;
            v42 = v40;
          }
          a1[1] = v40;
          a1[2] = v42 - v36;
          v138 = v31;
          v134 = v32;
          v130 = v34;
          v43 = get_tinfo_size();
          v44 = a1[2];
          v34 = v130;
          v32 = v134;
          v31 = v138;
          if ( v43 != v44 )
          {
            clear_tinfo_t();
            v44 = a1[2];
            v31 = v138;
            v32 = v134;
            v34 = v130;
          }
          v45 = (_DWORD *)*a1;
          v46 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
          a1[3] = (v44 + a1[1] + v46 - 1) & -v46;
          if ( v41 )
            *v45 |= 0x8000000u;
        }
        v28 = v34 + v32;
      }
    }
    if ( (*(_QWORD *)v30 & 2) == 0 )
    {
      v47 = *(_QWORD *)(v30 + 16);
      if ( (*(_BYTE *)v47 & 2) != 0 )
      {
        v87 = (_QWORD *)(*(_QWORD *)v30 & 0xFFFFFFFFFFFFFFFCLL);
        v88 = *v87;
        if ( (*v87 & 2) != 0 || v30 != v87[2] )
        {
LABEL_76:
          v30 = (unsigned __int64)v87;
        }
        else
        {
          while ( 1 )
          {
            v30 = v88 & 0xFFFFFFFFFFFFFFFCLL;
            v88 = *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v88 & 2) != 0 )
              break;
            v89 = v87;
            v87 = (_QWORD *)v30;
            if ( v89 != *(_QWORD **)(v30 + 16) )
              goto LABEL_76;
          }
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v47 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v47 = i;
        v30 = v47;
      }
    }
  }
  v144 = sub_21E760(a1, 0.0);
  if ( !v144 )
    goto LABEL_74;
  v53 = v23 - 1;
  v54 = *a1;
  v55 = -v23;
  v56 = v55 & (v28 + v53);
  v142 = v56;
  v57 = v56;
  if ( a1[1] != -1 )
  {
    v58 = sub_1F5460(v54, v56, 0.0, a3);
    v59 = a1[1];
    v60 = a1[2];
    v61 = v144;
    if ( v58 < v57 )
      v58 = v57;
    v62 = v59 + v60 - v58;
    if ( v58 >= v59 + v60 )
      v62 = 0;
    v63 = v58 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
    a1[1] = v63;
    if ( v59 == v63 )
      v61 = v60 != 0 && v62 == 0;
    a1[2] = v62 + v63 - v58;
    v64 = get_tinfo_size();
    v50 = a1[2];
    if ( v64 != v50 )
    {
      clear_tinfo_t();
      v50 = a1[2];
    }
    v54 = *a1;
    v65 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
    v49 = v50 + a1[1] + v65 - 1;
    a1[3] = v49 & -v65;
    if ( v61 )
    {
      *(_DWORD *)v54 |= 0x8000000u;
      v54 = *a1;
    }
  }
  v143 = sub_110340(*(_QWORD *)(v54 + 784), 0, v49, v50, v51, v52, 0.0, a3);
  if ( !v143 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
    goto LABEL_191;
  }
  ++*(_DWORD *)(v143 + 24);
  v145 = sub_1D5170(*a1, 0, v66, v67, 0.0);
  v68.m128i_i64[0] = 0;
  v69 = a1[1];
  v70 = a1[2];
  v71 = 3LL * *(int *)(v145 + 72);
  v72 = *(_QWORD *)v143;
  v149 = 0;
  v151 = v69;
  v150 = 0;
  v139 = (unsigned __int64 *)(v72 + 8 * v71);
  v152 = 5;
  v153 = v70;
  v154 = -1;
  v155 = 1;
  v74 = sub_1041A0(v139, (__int64)&v149);
  if ( v149 )
  {
    *(_QWORD *)&v150 = 0;
    qfree(v149);
  }
  v75 = v74;
  if ( v74 == (_QWORD *)*v139 )
    goto LABEL_65;
  while ( 1 )
  {
    v76 = v75 + 3;
    if ( *((_BYTE *)v75 + 56) != 5 )
      sub_21BD40(0.0);
    v77 = v55 & v75[6];
    a1[1] = v77;
    if ( v77 >= v142 )
      break;
    if ( (*v75 & 2) == 0 )
    {
      v73 = v75[2];
      if ( (*(_BYTE *)v73 & 2) != 0 )
      {
        v90 = (__int64 *)(*v75 & 0xFFFFFFFFFFFFFFFCLL);
        v73 = *v90;
        if ( (*v90 & 2) == 0 )
        {
          while ( (_QWORD *)v90[2] == v75 )
          {
            v75 = v90;
            v91 = v73 & 0xFFFFFFFFFFFFFFFCLL;
            v73 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v73 & 2) != 0 )
            {
              v75 = (_QWORD *)v91;
              goto LABEL_64;
            }
            v90 = (__int64 *)v91;
          }
        }
        v75 = v90;
      }
      else
      {
        do
        {
          v75 = (_QWORD *)v73;
          v73 = *(_QWORD *)(v73 + 8);
        }
        while ( (*(_BYTE *)v73 & 2) == 0 );
      }
    }
LABEL_64:
    if ( (_QWORD *)*v139 == v75 )
      goto LABEL_65;
  }
  v92 = *v139;
  if ( (_QWORD *)*v139 == v75 )
  {
LABEL_65:
    v78 = *a1;
    v79 = a1[1];
    if ( v79 < *(_QWORD *)(*a1 + 168LL) )
    {
      v127 = v144;
      v128 = v142 & -*(_DWORD *)(*(_QWORD *)(v78 + 1504) + 80LL);
      a1[1] = v128;
      if ( v79 == v128 )
        v127 = a1[2] != 0;
      a1[2] = v128 - v142;
      if ( get_tinfo_size() != a1[2] )
        clear_tinfo_t();
      v78 = *a1;
      v80 = a1[2];
      v129 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      v79 = a1[1];
      v73 = (v129 - 1 + v79 + v80) & -v129;
      a1[3] = v73;
      if ( !v127 )
        goto LABEL_67;
      *(_DWORD *)v78 |= 0x8000000u;
      v78 = *a1;
      v79 = a1[1];
    }
    v80 = a1[2];
    goto LABEL_67;
  }
  v93 = (unsigned __int64)v75;
  v146 = v69 + v70;
  for ( j = v142 < v77; ; j = 0 )
  {
    v95 = v93 + 24;
    if ( *(_BYTE *)(v93 + 56) != 5 || v146 <= *(_QWORD *)(v93 + 48) )
      goto LABEL_95;
    if ( *(_QWORD *)(v93 + 32) != 1 || **(_DWORD **)v95 )
      break;
    k = v93;
    if ( (*(_QWORD *)v93 & 2) == 0 )
    {
      v122 = *(_QWORD *)(v93 + 16);
      if ( (*(_BYTE *)v122 & 2) != 0 )
      {
        v123 = v93;
        for ( k = *(_QWORD *)v93 & 0xFFFFFFFFFFFFFFFCLL;
              (*(_QWORD *)k & 2) == 0 && *(_QWORD *)(k + 16) == v123;
              k = *(_QWORD *)k & 0xFFFFFFFFFFFFFFFCLL )
        {
          v123 = k;
        }
      }
      else
      {
        do
        {
          k = v122;
          v122 = *(_QWORD *)(v122 + 8);
        }
        while ( (*(_BYTE *)v122 & 2) == 0 );
      }
    }
    if ( k == v92 )
      goto LABEL_95;
    v125 = k + 24;
    if ( *(_BYTE *)(k + 56) != 5 || v146 <= *(_QWORD *)(k + 48) || *(_QWORD *)(k + 32) == 1 && !**(_DWORD **)(k + 24) )
      goto LABEL_95;
    v137 = v76;
    v126 = round_down_power2();
    v95 = v93 + 24;
    v76 = v137;
    if ( *(_BYTE *)(v125 + 32) != 5 )
      sub_21BD40(*(double *)v68.m128i_i64);
    if ( *(_QWORD *)(v125 + 24) % (__int64)v126 )
      goto LABEL_95;
    if ( *(_BYTE *)(v93 + 56) != 5 )
      sub_21BD40(*(double *)v68.m128i_i64);
    if ( !(*(_QWORD *)(v93 + 48) % (__int64)v126) || v126 <= (__int64)(*(_QWORD *)(v125 + 24) - *(_QWORD *)(v93 + 48)) )
      goto LABEL_95;
LABEL_115:
    if ( *(_BYTE *)(v95 + 32) != 5
      || (v105 = *((_BYTE *)v76 + 32), v105 > 5u)
      || v105 >= 5u && *(_QWORD *)(v95 + 24) < v76[3] )
    {
      if ( !under_debugger )
        sub_383060(0xCE74u, *(double *)v68.m128i_i64);
      goto LABEL_191;
    }
    v106 = *(_QWORD *)(v95 + 24);
    v107 = *(int *)(v95 + 40);
    v77 = v107 + v106;
    if ( *(_BYTE *)(v95 + 32) != 5 )
      sub_21BD40(*(double *)v68.m128i_i64);
    v108 = a1[6];
    if ( a1[7] < (unsigned __int64)(v108 + 1) )
    {
      v141 = v76;
      v136 = a1[7];
      v109 = qvector_reserve((__int64)(a1 + 5), 0, v108 + 1, 16);
      v112 = a1[5];
      v113 = v109;
      v133 = a1[7];
      v114 = a1[6];
      a1[7] = v136;
      v115 = (const __m128i *)v112;
      v116 = v114 - 1;
      if ( v116 >= 0 )
      {
        do
        {
          v68 = _mm_loadu_si128(v115);
          v113 += 16;
          ++v115;
          *(__m128i *)(v113 - 16) = v68;
        }
        while ( v116-- != 0 );
        v112 = a1[5];
      }
      qfree(v112);
      v76 = v141;
      a1[7] = v133;
      v108 = a1[6];
      a1[5] = v109;
    }
    else
    {
      v109 = a1[5];
    }
    v110 = 16 * v108 + v109;
    *(_QWORD *)v110 = v106;
    *(_BYTE *)(v110 + 8) = 5;
    *(_DWORD *)(v110 + 12) = v107;
    ++a1[6];
    if ( (*(_QWORD *)v93 & 2) == 0 )
    {
      v111 = *(_QWORD *)(v93 + 16);
      if ( (*(_BYTE *)v111 & 2) != 0 )
      {
        v118 = (_QWORD *)(*(_QWORD *)v93 & 0xFFFFFFFFFFFFFFFCLL);
        v119 = *v118;
        if ( (*v118 & 2) == 0 )
        {
          while ( v118[2] == v93 )
          {
            v93 = v119 & 0xFFFFFFFFFFFFFFFCLL;
            v119 = *(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v119 & 2) != 0 )
              goto LABEL_125;
            v120 = v118;
            v118 = (_QWORD *)v93;
            v93 = (unsigned __int64)v120;
          }
        }
        v93 = (unsigned __int64)v118;
      }
      else
      {
        do
        {
          v93 = v111;
          v111 = *(_QWORD *)(v111 + 8);
        }
        while ( (*(_BYTE *)v111 & 2) == 0 );
      }
    }
LABEL_125:
    v92 = *v139;
    if ( v93 == *v139 )
      goto LABEL_95;
  }
  if ( j && *(_QWORD *)(v93 + 32) == 1 && **(_DWORD **)v95 == 1 )
    goto LABEL_95;
  v102 = *(int **)v95;
  v140 = *(_QWORD *)(v93 + 24) + 4LL * *(_QWORD *)(v93 + 32);
  if ( *(_QWORD *)v95 == v140 )
    goto LABEL_115;
  while ( 1 )
  {
    v135 = v76;
    v132 = v95;
    v103 = (unsigned __int64 *)(*v25 + 24LL * *v102);
    v104 = sub_1041A0(v103, v95);
    v95 = v132;
    v76 = v135;
    if ( v104 != (_QWORD *)*v103 && v104[4] != 1 )
      break;
    if ( (int *)v140 == ++v102 )
      goto LABEL_115;
  }
LABEL_95:
  v96 = *(_QWORD *)(*a1 + 168LL) == v77;
  if ( *(_QWORD *)(*a1 + 168LL) <= (signed __int64)v77 )
  {
    v77 = v146;
    if ( !v96 )
    {
      if ( !under_debugger )
        sub_383060(0xCEAAu, *(double *)v68.m128i_i64);
      goto LABEL_191;
    }
  }
  v97 = a1[1];
  if ( v97 == -1 || v77 < v97 )
  {
    if ( !under_debugger )
      sub_383060(0xCE8Du, *(double *)v68.m128i_i64);
    goto LABEL_191;
  }
  v98 = v97 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
  if ( v97 >= v77 )
  {
    a1[1] = v98;
    if ( v97 == v98 )
      v100 = a1[2] != 0;
    else
      v100 = v144;
    v99 = 0;
  }
  else
  {
    a1[1] = v98;
    v99 = v77 - v97;
    v100 = v97 != v98;
  }
  a1[2] = v99 + v98 - v97;
  if ( get_tinfo_size() != a1[2] )
    clear_tinfo_t();
  v78 = *a1;
  v80 = a1[2];
  v101 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
  v73 = v101 - 1 + v80 + a1[1];
  a1[3] = v73 & -v101;
  if ( v100 )
  {
    *(_DWORD *)v78 |= 0x8000000u;
    v78 = *a1;
    v80 = a1[2];
  }
  if ( a1[2] )
  {
    v79 = a1[1];
  }
  else
  {
    a1[1] = v142;
    v79 = v142;
  }
LABEL_67:
  v26.m128i_i64[0] = 0;
  v81 = (__m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v78 + 1440) + v79));
  v147 = 0;
  v82 = v81;
  v148 = 0;
  v131 = (unsigned __int64)v81->m128i_u64 + v80 - 1;
  if ( v131 >= (unsigned __int64)v81 )
  {
    v147 = qvector_reserve((__int64)&v147, 0, 1, 16);
    v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v82, (__m128i)v80);
    v81 = (__m128i *)(16 * v148);
    *(__m128i *)(v147 + 16 * v148) = v26;
    *(_QWORD *)&v148 = v148 + 1;
  }
  v85 = sub_3180C0((__int64 *)(v145 + 176), (__int64)&v147, v81, v73);
  if ( v85 )
  {
    v86 = v147;
    if ( v147 )
      goto LABEL_71;
    goto LABEL_145;
  }
  v26.m128i_i64[0] = 0;
  v149 = 0;
  v150 = 0;
  if ( v131 >= (unsigned __int64)v82 )
  {
    v149 = qvector_reserve((__int64)&v149, 0, 1, 16);
    v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v82, (__m128i)v80);
    v83 = (__m128i *)(16 * v150);
    *(__m128i *)(v149 + 16 * v150) = v26;
    *(_QWORD *)&v150 = v150 + 1;
  }
  v85 = sub_3180C0((__int64 *)(v145 + 136), (__int64)&v149, v83, v84);
  if ( v149 )
  {
    *(_QWORD *)&v150 = 0;
    qfree(v149);
  }
  v86 = v147;
  if ( v147 )
  {
LABEL_71:
    *(_QWORD *)&v148 = 0;
    qfree(v86);
  }
  if ( v85 )
  {
LABEL_145:
    v124 = *(_QWORD *)(*a1 + 784LL);
    if ( v124 )
      *(_DWORD *)(v124 + 48) = 63;
  }
  sub_104E10(v143, *(double *)v26.m128i_i64);
LABEL_74:
  *((_DWORD *)a1 + 17) |= 2u;
  sub_104E10((__int64)v25, *(double *)v26.m128i_i64);
  return v156 - __readfsqword(0x28u);
}

