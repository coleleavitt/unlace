unsigned __int64 __fastcall sub_21AAA0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // rax
  char v6; // bl
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 tinfo_size; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  int v14; // eax
  int v15; // ebp
  __int64 v16; // rax
  _QWORD *v17; // rbx
  unsigned __int64 *v18; // r15
  __int64 v19; // r13
  __int64 v20; // rax
  signed __int64 *v21; // rsi
  _QWORD *v22; // rax
  signed __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // r11
  unsigned __int64 v32; // rsi
  char v33; // r13
  signed __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  signed __int64 i; // rax
  int v38; // eax
  __int64 v39; // rdi
  __int64 v40; // rbp
  signed __int64 v41; // rax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  bool v46; // r13
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // r15
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  _QWORD *v58; // r13
  _QWORD *v59; // rax
  __int64 v60; // rdi
  _QWORD *v61; // r10
  unsigned __int64 v62; // r13
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // r13
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rbp
  char v68; // r14
  signed __int64 *v69; // rax
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rbp
  bool j; // si
  __int64 v74; // rcx
  bool v75; // zf
  unsigned __int64 v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // r9
  bool v79; // bp
  int v80; // edx
  int *v81; // r15
  unsigned __int64 *v82; // r14
  _QWORD *v83; // rax
  unsigned __int8 v84; // al
  __int64 v85; // r15
  __int64 v86; // r14
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rsi
  unsigned __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rax
  const __m128i *v93; // rcx
  __int64 v94; // rax
  __m128i v95; // xmm0
  _QWORD *v97; // rax
  __int64 v98; // rdx
  _QWORD *v99; // rt1
  unsigned __int64 k; // rax
  unsigned __int64 v101; // rsi
  unsigned __int64 v102; // rsi
  __int64 v103; // rax
  unsigned __int64 v104; // r14
  __int64 v105; // rdi
  unsigned int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rdi
  bool v109; // bp
  unsigned __int64 v110; // rax
  int v111; // ecx
  int v112; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v113; // [rsp+0h] [rbp-E8h]
  __int64 v114; // [rsp+0h] [rbp-E8h]
  __int64 v115; // [rsp+0h] [rbp-E8h]
  __int64 v116; // [rsp+8h] [rbp-E0h]
  _QWORD *v117; // [rsp+8h] [rbp-E0h]
  __int64 v118; // [rsp+8h] [rbp-E0h]
  _QWORD *v119; // [rsp+8h] [rbp-E0h]
  __int64 v120; // [rsp+18h] [rbp-D0h]
  unsigned __int64 *v121; // [rsp+18h] [rbp-D0h]
  __int64 v122; // [rsp+20h] [rbp-C8h]
  _QWORD *v123; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v124; // [rsp+28h] [rbp-C0h]
  __int64 v125; // [rsp+30h] [rbp-B8h]
  char v126; // [rsp+3Fh] [rbp-A9h]
  __int64 v127; // [rsp+40h] [rbp-A8h]
  signed __int64 v128; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v129; // [rsp+50h] [rbp-98h] BYREF
  __int128 v130; // [rsp+58h] [rbp-90h]
  signed __int64 v131; // [rsp+70h] [rbp-78h] BYREF
  __int128 v132; // [rsp+78h] [rbp-70h]
  __int64 v133; // [rsp+88h] [rbp-60h]
  char v134; // [rsp+90h] [rbp-58h]
  int v135; // [rsp+98h] [rbp-50h]
  int v136; // [rsp+9Ch] [rbp-4Ch]
  char v137; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v138; // [rsp+A8h] [rbp-40h]

  v138 = __readfsqword(0x28u);
  v1 = *a1;
  if ( !*(_BYTE *)(*(_QWORD *)(*a1 + 1496LL) + 148LL) )
    return v138 - __readfsqword(0x28u);
  v2 = *(int *)(v1 + 480);
  if ( (_DWORD)v2 != -1 )
  {
    v6 = sub_1BF120(
           *(_QWORD *)(v1 + 432) + 104 * v2,
           (__int64 *)&v129,
           &v131,
           *(_DWORD *)(*(_QWORD *)(v1 + 432) + 104 * v2 + 88));
    if ( v6 )
    {
      v7 = v129;
      v8 = v131;
      v9 = a1[1];
      v10 = v129 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      a1[1] = v10;
      if ( v7 >= v8 )
      {
        if ( v9 == v10 )
          v6 = a1[2] != 0;
      }
      else
      {
        v6 = v9 != v10;
        v10 += v8 - v7;
      }
      a1[2] = v10 - v7;
      tinfo_size = get_tinfo_size();
      v12 = a1[2];
      if ( tinfo_size != v12 )
      {
        clear_tinfo_t();
        v12 = a1[2];
      }
      v13 = (_DWORD *)*a1;
      v14 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      a1[3] = (v12 + a1[1] + v14 - 1) & -v14;
      if ( v6 )
        *v13 |= 0x8000000u;
      return v138 - __readfsqword(0x28u);
    }
  }
  if ( (*((_BYTE *)a1 + 68) & 2) != 0 )
    return v138 - __readfsqword(0x28u);
  v4 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(*a1 + 1496LL) + 148LL) != 2 || *(_BYTE *)(v4 + 320) )
    return v138 - __readfsqword(0x28u);
  v15 = *(_DWORD *)(*(_QWORD *)(v4 + 1504) + 80LL);
  v16 = sub_10C6E0(*(_QWORD *)(v4 + 784), 0);
  v17 = (_QWORD *)v16;
  if ( !v16 )
  {
    if ( !under_debugger )
      sub_37E160(50446);
LABEL_192:
    BUG();
  }
  ++*(_DWORD *)(v16 + 24);
  v18 = *(unsigned __int64 **)v16;
  v19 = *(_QWORD *)(*a1 + 144LL);
  v20 = *(_QWORD *)(*a1 + 672LL);
  v131 = 0;
  v134 = 5;
  v135 = v20;
  v21 = &v131;
  v133 = v19;
  v136 = -1;
  v137 = 1;
  v132 = 0;
  v22 = sub_FFFA0(v18, (__int64)&v131);
  v24 = v131;
  v25 = (unsigned __int64)v22;
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree();
  }
  v26 = v15;
  while ( *v18 != v25 )
  {
    if ( *(_BYTE *)(v25 + 56) == 5 )
    {
      if ( *(_QWORD *)(v25 + 32) )
      {
        if ( *(_QWORD *)(v25 + 32) > 1u
          || (v21 = *(signed __int64 **)(v25 + 24),
              v23 = (unsigned int)(*(_DWORD *)(*a1 + 64LL) - 1),
              *(_DWORD *)v21 != (_DWORD)v23) )
        {
          if ( *(_BYTE *)(v25 + 56) != 5 )
            sub_2174C0(v24, v21, v23, v26);
          v27 = *(_QWORD *)(v25 + 48);
          v21 = (signed __int64 *)*a1;
          v28 = *(int *)(v25 + 64);
          if ( !((v27 - *(_QWORD *)(*a1 + 144LL)) % v26)
            || (v23 = v27 + (int)v28, v24 = v27 + v15 - 1, v23 > (v24 & -v15)) )
          {
            v24 = 1;
            if ( (int)v28 > 0 )
              v24 = *(int *)(v25 + 64);
            v29 = (v24 + v27 + *(_DWORD *)(v21[188] + 80) - 1) & -*(_DWORD *)(v21[188] + 80);
            v30 = a1[3];
            if ( v30 < v29 )
              v30 = (v24 + v27 + *(_DWORD *)(v21[188] + 80) - 1) & -*(_DWORD *)(v21[188] + 80);
            a1[3] = v30;
            v23 = a1[1];
            if ( v23 < v29 && !*((_BYTE *)v21 + 320) )
            {
              v31 = a1[2];
              v32 = v29 & -*(_DWORD *)(v21[188] + 80);
              v33 = v23 != v32;
              if ( v29 < v23 + v31 )
              {
                v34 = v23 + v31 + v32 - v29;
              }
              else
              {
                v33 |= v31 != 0;
                v34 = v32;
              }
              a1[1] = v32;
              a1[2] = v34 - v29;
              v120 = v26;
              v116 = v27;
              v112 = v28;
              v35 = get_tinfo_size();
              v24 = a1[2];
              v28 = v112;
              v27 = v116;
              v26 = v120;
              if ( v35 != v24 )
              {
                clear_tinfo_t();
                v24 = a1[2];
                v26 = v120;
                v27 = v116;
                v28 = v112;
              }
              v23 = *a1;
              v36 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
              v21 = (signed __int64 *)(v24 + a1[1] + v36 - 1);
              a1[3] = (unsigned __int64)v21 & -v36;
              if ( v33 )
                *(_DWORD *)v23 |= 0x8000000u;
            }
            v19 = v28 + v27;
          }
        }
      }
    }
    if ( (*(_QWORD *)v25 & 2) == 0 )
    {
      v23 = *(_QWORD *)(v25 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        v69 = (signed __int64 *)(*(_QWORD *)v25 & 0xFFFFFFFFFFFFFFFCLL);
        v23 = *v69;
        if ( (*v69 & 2) != 0 || v25 != v69[2] )
        {
LABEL_77:
          v25 = (unsigned __int64)v69;
        }
        else
        {
          while ( 1 )
          {
            v25 = v23 & 0xFFFFFFFFFFFFFFFCLL;
            v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v23 & 2) != 0 )
              break;
            v21 = v69;
            v69 = (signed __int64 *)v25;
            if ( v21 != *(signed __int64 **)(v25 + 16) )
              goto LABEL_77;
          }
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v23 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v23 = i;
        v25 = v23;
      }
    }
  }
  v126 = sub_219EE0(a1);
  if ( !v126 )
    goto LABEL_75;
  v38 = v15 - 1;
  v39 = *a1;
  v40 = -v15;
  v41 = v40 & (v19 + v38);
  v124 = v41;
  v42 = v41;
  if ( a1[1] != -1 )
  {
    v43 = sub_1F0BE0(v39, v41);
    v44 = a1[1];
    v45 = a1[2];
    v46 = v126;
    if ( v43 < v42 )
      v43 = v42;
    v47 = v44 + v45 - v43;
    if ( v43 >= v44 + v45 )
      v47 = 0;
    v48 = v43 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
    a1[1] = v48;
    if ( v44 == v48 )
      v46 = v45 != 0 && v47 == 0;
    a1[2] = v47 + v48 - v43;
    v49 = get_tinfo_size();
    v50 = a1[2];
    if ( v49 != v50 )
    {
      clear_tinfo_t();
      v50 = a1[2];
    }
    v39 = *a1;
    v51 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
    a1[3] = (v50 + a1[1] + v51 - 1) & -v51;
    if ( v46 )
    {
      *(_DWORD *)v39 |= 0x8000000u;
      v39 = *a1;
    }
  }
  v125 = sub_10C140(*(_QWORD *)(v39 + 784), 0);
  if ( !v125 )
  {
    if ( !under_debugger )
      sub_37E160(50446);
    goto LABEL_192;
  }
  ++*(_DWORD *)(v125 + 24);
  v127 = sub_1D0DF0(*a1);
  v52 = a1[1];
  v53 = a1[2];
  v54 = 3LL * *(int *)(v127 + 72);
  v55 = *(_QWORD *)v125;
  v131 = 0;
  v133 = v52;
  v132 = 0;
  v121 = (unsigned __int64 *)(v55 + 8 * v54);
  v134 = 5;
  v135 = v53;
  v136 = -1;
  v137 = 1;
  v58 = sub_FFFA0(v121, (__int64)&v131);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree();
  }
  v59 = v58;
  if ( v58 == (_QWORD *)*v121 )
    goto LABEL_66;
  v60 = (__int64)v121;
  while ( 1 )
  {
    v61 = v59 + 3;
    if ( *((_BYTE *)v59 + 56) != 5 )
      sub_2174C0(v121, v124, v56, v57);
    v62 = v40 & v59[6];
    a1[1] = v62;
    if ( v62 >= v124 )
      break;
    v56 = *v59;
    if ( (*v59 & 2) == 0 )
    {
      v57 = v59[2];
      if ( (*(_BYTE *)v57 & 2) != 0 )
      {
        v56 &= 0xFFFFFFFFFFFFFFFCLL;
        v57 = *(_QWORD *)v56;
        if ( (*(_QWORD *)v56 & 2) == 0 )
        {
          while ( *(_QWORD **)(v56 + 16) == v59 )
          {
            v59 = (_QWORD *)v56;
            v70 = v57 & 0xFFFFFFFFFFFFFFFCLL;
            v57 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v57 & 2) != 0 )
            {
              v59 = (_QWORD *)v70;
              goto LABEL_65;
            }
            v56 = v70;
          }
        }
        v59 = (_QWORD *)v56;
      }
      else
      {
        do
        {
          v59 = (_QWORD *)v57;
          v57 = *(_QWORD *)(v57 + 8);
        }
        while ( (*(_BYTE *)v57 & 2) == 0 );
      }
    }
LABEL_65:
    if ( (_QWORD *)*v121 == v59 )
      goto LABEL_66;
  }
  v71 = *v121;
  if ( (_QWORD *)*v121 == v59 )
  {
LABEL_66:
    v63 = *a1;
    v64 = a1[1];
    if ( v64 < *(_QWORD *)(*a1 + 168LL) )
    {
      v109 = v126;
      v110 = v124 & -*(_DWORD *)(*(_QWORD *)(v63 + 1504) + 80LL);
      a1[1] = v110;
      if ( v64 == v110 )
        v109 = a1[2] != 0;
      a1[2] = v110 - v124;
      if ( get_tinfo_size() != a1[2] )
        clear_tinfo_t();
      v63 = *a1;
      v65 = a1[2];
      v111 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      v64 = a1[1];
      a1[3] = (v111 - 1 + v64 + v65) & -v111;
      if ( !v109 )
        goto LABEL_68;
      *(_DWORD *)v63 |= 0x8000000u;
      v63 = *a1;
      v64 = a1[1];
    }
    v65 = a1[2];
    goto LABEL_68;
  }
  v72 = (unsigned __int64)v59;
  v128 = v52 + v53;
  for ( j = v124 < v62; ; j = 0 )
  {
    v74 = v72 + 24;
    if ( *(_BYTE *)(v72 + 56) != 5 || v128 <= *(_QWORD *)(v72 + 48) )
      goto LABEL_96;
    if ( *(_QWORD *)(v72 + 32) != 1 || **(_DWORD **)v74 )
      break;
    k = v72;
    if ( (*(_QWORD *)v72 & 2) == 0 )
    {
      v101 = *(_QWORD *)(v72 + 16);
      if ( (*(_BYTE *)v101 & 2) != 0 )
      {
        v102 = v72;
        for ( k = *(_QWORD *)v72 & 0xFFFFFFFFFFFFFFFCLL;
              (*(_QWORD *)k & 2) == 0 && *(_QWORD *)(k + 16) == v102;
              k = *(_QWORD *)k & 0xFFFFFFFFFFFFFFFCLL )
        {
          v102 = k;
        }
      }
      else
      {
        do
        {
          k = v101;
          v101 = *(_QWORD *)(v101 + 8);
        }
        while ( (*(_BYTE *)v101 & 2) == 0 );
      }
    }
    if ( k == v71 )
      goto LABEL_96;
    v104 = k + 24;
    if ( *(_BYTE *)(k + 56) != 5 || v128 <= *(_QWORD *)(k + 48) || *(_QWORD *)(k + 32) == 1 && !**(_DWORD **)(k + 24) )
      goto LABEL_96;
    v105 = *(unsigned int *)(k + 64);
    v119 = v61;
    v106 = round_down_power2();
    v74 = v72 + 24;
    v61 = v119;
    if ( *(_BYTE *)(v104 + 32) != 5 )
      sub_2174C0(v105, v106, v107, v74);
    v108 = *(_QWORD *)(v104 + 24);
    if ( v108 % v106 )
      goto LABEL_96;
    if ( *(_BYTE *)(v72 + 56) != 5 )
      sub_2174C0(v108, v106, 0, v74);
    v71 = *(_QWORD *)(v72 + 48) % (__int64)v106;
    if ( !v71 )
      goto LABEL_96;
    v60 = v108 - *(_QWORD *)(v72 + 48);
    if ( v106 <= v60 )
      goto LABEL_96;
LABEL_116:
    if ( *(_BYTE *)(v74 + 32) != 5
      || (v84 = *((_BYTE *)v61 + 32), v84 > 5u)
      || v84 >= 5u && *(_QWORD *)(v74 + 24) < v61[3] )
    {
      if ( !under_debugger )
        sub_37E160(52852);
      goto LABEL_192;
    }
    v85 = *(_QWORD *)(v74 + 24);
    v86 = *(int *)(v74 + 40);
    v62 = v86 + v85;
    if ( *(_BYTE *)(v74 + 32) != 5 )
      sub_2174C0(v60, 5, v71, v74);
    v87 = a1[6];
    if ( a1[7] < (unsigned __int64)(v87 + 1) )
    {
      v123 = v61;
      v118 = a1[7];
      v88 = qvector_reserve();
      v60 = a1[5];
      v91 = v88;
      v115 = a1[7];
      v92 = a1[6];
      a1[7] = v118;
      v93 = (const __m128i *)v60;
      v94 = v92 - 1;
      if ( v94 >= 0 )
      {
        do
        {
          v95 = _mm_loadu_si128(v93);
          v91 += 16;
          ++v93;
          *(__m128i *)(v91 - 16) = v95;
        }
        while ( v94-- != 0 );
        v60 = a1[5];
      }
      qfree();
      v61 = v123;
      a1[7] = v115;
      v87 = a1[6];
      a1[5] = v88;
    }
    else
    {
      v88 = a1[5];
    }
    v89 = 16 * v87 + v88;
    *(_QWORD *)v89 = v85;
    *(_BYTE *)(v89 + 8) = 5;
    *(_DWORD *)(v89 + 12) = v86;
    ++a1[6];
    if ( (*(_QWORD *)v72 & 2) == 0 )
    {
      v90 = *(_QWORD *)(v72 + 16);
      if ( (*(_BYTE *)v90 & 2) != 0 )
      {
        v97 = (_QWORD *)(*(_QWORD *)v72 & 0xFFFFFFFFFFFFFFFCLL);
        v98 = *v97;
        if ( (*v97 & 2) == 0 )
        {
          while ( v97[2] == v72 )
          {
            v72 = v98 & 0xFFFFFFFFFFFFFFFCLL;
            v98 = *(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v98 & 2) != 0 )
              goto LABEL_126;
            v99 = v97;
            v97 = (_QWORD *)v72;
            v72 = (unsigned __int64)v99;
          }
        }
        v72 = (unsigned __int64)v97;
      }
      else
      {
        do
        {
          v72 = v90;
          v90 = *(_QWORD *)(v90 + 8);
        }
        while ( (*(_BYTE *)v90 & 2) == 0 );
      }
    }
LABEL_126:
    v71 = *v121;
    if ( v72 == *v121 )
      goto LABEL_96;
  }
  if ( j && *(_QWORD *)(v72 + 32) == 1 && **(_DWORD **)v74 == 1 )
    goto LABEL_96;
  v81 = *(int **)v74;
  v122 = *(_QWORD *)(v72 + 24) + 4LL * *(_QWORD *)(v72 + 32);
  if ( *(_QWORD *)v74 == v122 )
    goto LABEL_116;
  while ( 1 )
  {
    v117 = v61;
    v114 = v74;
    v82 = (unsigned __int64 *)(*v17 + 24LL * *v81);
    v60 = (__int64)v82;
    v83 = sub_FFFA0(v82, v74);
    v74 = v114;
    v61 = v117;
    if ( v83 != (_QWORD *)*v82 && v83[4] != 1 )
      break;
    if ( (int *)v122 == ++v81 )
      goto LABEL_116;
  }
LABEL_96:
  v75 = *(_QWORD *)(*a1 + 168LL) == v62;
  if ( *(_QWORD *)(*a1 + 168LL) <= (signed __int64)v62 )
  {
    v62 = v128;
    if ( !v75 )
    {
      if ( !under_debugger )
        sub_37E160(52906);
      goto LABEL_192;
    }
  }
  v76 = a1[1];
  if ( v76 == -1 || v62 < v76 )
  {
    if ( !under_debugger )
      sub_37E160(52877);
    goto LABEL_192;
  }
  v77 = v76 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
  if ( v76 >= v62 )
  {
    a1[1] = v77;
    if ( v76 == v77 )
      v79 = a1[2] != 0;
    else
      v79 = v126;
    v78 = 0;
  }
  else
  {
    a1[1] = v77;
    v78 = v62 - v76;
    v79 = v76 != v77;
  }
  a1[2] = v78 + v77 - v76;
  if ( get_tinfo_size() != a1[2] )
    clear_tinfo_t();
  v63 = *a1;
  v65 = a1[2];
  v80 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
  a1[3] = (v80 - 1 + v65 + a1[1]) & -v80;
  if ( v79 )
  {
    *(_DWORD *)v63 |= 0x8000000u;
    v63 = *a1;
    v65 = a1[2];
  }
  if ( a1[2] )
  {
    v64 = a1[1];
  }
  else
  {
    a1[1] = v124;
    v64 = v124;
  }
LABEL_68:
  v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v63 + 1440) + v64);
  v129 = 0;
  v67 = v66;
  v130 = 0;
  v113 = v66 + v65 - 1;
  if ( v113 >= v66 )
  {
    v129 = qvector_reserve();
    *(__m128i *)(v129 + 16 * v130) = _mm_unpacklo_epi64((__m128i)v67, (__m128i)v65);
    *(_QWORD *)&v130 = v130 + 1;
  }
  v68 = sub_313340(v127 + 176, &v129);
  if ( v68 )
  {
    if ( v129 )
      goto LABEL_72;
    goto LABEL_146;
  }
  v131 = 0;
  v132 = 0;
  if ( v113 >= v67 )
  {
    v131 = qvector_reserve();
    *(__m128i *)(v131 + 16 * v132) = _mm_unpacklo_epi64((__m128i)v67, (__m128i)v65);
    *(_QWORD *)&v132 = v132 + 1;
  }
  v68 = sub_313340(v127 + 136, &v131);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree();
  }
  if ( v129 )
  {
LABEL_72:
    *(_QWORD *)&v130 = 0;
    qfree();
  }
  if ( v68 )
  {
LABEL_146:
    v103 = *(_QWORD *)(*a1 + 784LL);
    if ( v103 )
      *(_DWORD *)(v103 + 48) = 63;
  }
  sub_100C10(v125);
LABEL_75:
  *((_DWORD *)a1 + 17) |= 2u;
  sub_100C10((__int64)v17);
  return v138 - __readfsqword(0x28u);
}

