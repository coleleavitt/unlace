__int64 __fastcall sub_370720(__int64 a1, unsigned int a2, char a3, double a4, __m128 a5)
{
  __int64 v7; // rsi
  char v9; // al
  char v10; // r12
  unsigned int v11; // r12d
  int v13; // r14d
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rdx
  char v18; // r13
  __int64 v19; // rax
  int v20; // r14d
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  __int64 *v23; // rdi
  _DWORD *v24; // rax
  _DWORD *v25; // rdx
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rsi
  int v29; // r13d
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // r9
  int *v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r10
  size_t v36; // rax
  __int64 v37; // rax
  int v38; // eax
  int v39; // r14d
  __int64 v40; // rdi
  int v41; // r12d
  __int64 v42; // rcx
  __int64 v43; // r10
  __int64 v44; // r8
  __int64 v45; // r13
  int v46; // r14d
  __int64 v47; // rdx
  int v48; // r12d
  _DWORD *v49; // rdx
  __int64 v50; // rsi
  bool v51; // al
  __int64 v52; // rdx
  _DWORD *v53; // rax
  __int64 v54; // rsi
  int v55; // eax
  char *v56; // rdx
  char *v57; // rax
  char *i; // rdi
  unsigned __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // r10
  unsigned __int64 v62; // rax
  __int64 v63; // r9
  bool v64; // cf
  __int64 v65; // r8
  __int64 v66; // rcx
  _DWORD *v67; // r13
  _QWORD *v68; // rdx
  _QWORD *v69; // rax
  __int64 v70; // r12
  __int64 v71; // rdi
  __int64 v72; // rax
  _DWORD *v73; // rdx
  int v74; // eax
  int v75; // r8d
  int v76; // r9d
  int v77; // ecx
  int v78; // edx
  __int64 v79; // rax
  _DWORD *v80; // rdi
  bool v81; // di
  int v82; // esi
  __int64 v83; // r10
  __int64 v84; // rdx
  _QWORD *v85; // rdi
  unsigned __int64 v86; // rsi
  char *v87; // rdi
  char *v88; // rax
  __int64 v89; // rax
  int v90; // [rsp+0h] [rbp-238h]
  __int64 v91; // [rsp+0h] [rbp-238h]
  __int64 v92; // [rsp+0h] [rbp-238h]
  __int64 v93; // [rsp+10h] [rbp-228h]
  char *v94; // [rsp+10h] [rbp-228h]
  int v95; // [rsp+10h] [rbp-228h]
  __int64 v96; // [rsp+10h] [rbp-228h]
  __int64 v97; // [rsp+10h] [rbp-228h]
  __int64 v98; // [rsp+10h] [rbp-228h]
  __int64 v99; // [rsp+10h] [rbp-228h]
  __int64 v100; // [rsp+10h] [rbp-228h]
  char v101; // [rsp+18h] [rbp-220h]
  __int64 v102; // [rsp+18h] [rbp-220h]
  __int64 v103; // [rsp+18h] [rbp-220h]
  __int64 v104; // [rsp+18h] [rbp-220h]
  __int64 v105; // [rsp+18h] [rbp-220h]
  __int64 v106; // [rsp+18h] [rbp-220h]
  __int64 v107; // [rsp+20h] [rbp-218h]
  __int64 v108; // [rsp+20h] [rbp-218h]
  __int64 v109; // [rsp+20h] [rbp-218h]
  __int64 v110; // [rsp+20h] [rbp-218h]
  __int64 v111; // [rsp+20h] [rbp-218h]
  bool v112; // [rsp+28h] [rbp-210h]
  __int64 v113; // [rsp+28h] [rbp-210h]
  __int64 v114; // [rsp+30h] [rbp-208h]
  _QWORD *v115; // [rsp+30h] [rbp-208h]
  __int64 v116; // [rsp+30h] [rbp-208h]
  __int64 v117; // [rsp+48h] [rbp-1F0h]
  char v118; // [rsp+53h] [rbp-1E5h]
  int v119; // [rsp+54h] [rbp-1E4h]
  _QWORD *v120; // [rsp+58h] [rbp-1E0h]
  int v121; // [rsp+6Ch] [rbp-1CCh] BYREF
  int *v122; // [rsp+70h] [rbp-1C8h] BYREF
  __int128 v123; // [rsp+78h] [rbp-1C0h]
  __int64 v124; // [rsp+90h] [rbp-1A8h] BYREF
  __int128 v125; // [rsp+98h] [rbp-1A0h]
  __int64 v126; // [rsp+B0h] [rbp-188h]
  __int128 v127; // [rsp+B8h] [rbp-180h]
  __int64 v128; // [rsp+C8h] [rbp-170h]
  __int64 v129; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-160h]
  __int64 v131; // [rsp+E0h] [rbp-158h]
  __int64 v132; // [rsp+F0h] [rbp-148h]
  __int64 v133; // [rsp+F8h] [rbp-140h]
  __int64 v134; // [rsp+128h] [rbp-110h]
  __int64 v135; // [rsp+130h] [rbp-108h]
  __int64 v136; // [rsp+140h] [rbp-F8h]
  __int64 v137; // [rsp+148h] [rbp-F0h]
  __int64 v138[4]; // [rsp+158h] [rbp-E0h] BYREF
  _QWORD v139[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v140; // [rsp+188h] [rbp-B0h]
  __int128 v141; // [rsp+190h] [rbp-A8h]
  _DWORD *v142; // [rsp+1A0h] [rbp-98h]
  __int128 v143; // [rsp+1A8h] [rbp-90h]
  __int64 v144; // [rsp+1B8h] [rbp-80h]
  __int128 v145; // [rsp+1C0h] [rbp-78h]
  _QWORD *v146; // [rsp+1D0h] [rbp-68h]
  __int64 v147; // [rsp+1D8h] [rbp-60h]
  __int64 v148; // [rsp+1E0h] [rbp-58h]
  _DWORD *v149; // [rsp+1E8h] [rbp-50h]
  char v150; // [rsp+1F0h] [rbp-48h]
  unsigned __int64 v151; // [rsp+1F8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 1496);
  v151 = __readfsqword(0x28u);
  sub_D10B0((__int64)&v129, v7, 0x10u);
  memset(v138, 0, sizeof(v138));
  v139[0] = 0;
  v139[1] = 0;
  v140 = nullptr;
  v142 = nullptr;
  v144 = 0;
  v146 = nullptr;
  v147 = 0;
  v148 = 0;
  v141 = 0;
  v143 = 0;
  v145 = 0;
  v149 = (_DWORD *)sub_369E90((__int64)&v129, a1, a2);
  v9 = sub_D81C0((__int64)v149, v138, a1, (__m128)0LL, a5);
  v150 = v9;
  if ( a2 != v149[18] )
    goto LABEL_6;
  v10 = a3 & 2;
  if ( !v9 || (v90 = HIDWORD(v148)) != 0 )
  {
    if ( *(_BYTE *)(a1 + 320) != 1 && (a3 & 2) == 0 )
      sub_D4FA0(v149, a1, (_QWORD *)(a1 + 456), 0, 0.0);
    goto LABEL_6;
  }
  v13 = *(_QWORD *)(a1 + 464) - 1;
  v93 = *(_QWORD *)(a1 + 464);
  v121 = v13;
  if ( v13 >= 0 )
  {
    do
    {
      v14 = sub_13D280((_QWORD *)a1, v13, 0.0);
      if ( *(_DWORD *)v14 == 2 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        v16 = *(_DWORD **)v15;
        v17 = *(_QWORD *)v15 + 24LL * *(_QWORD *)(v15 + 8);
        if ( v16 == (_DWORD *)v17 )
          break;
        while ( *v16 != 1 )
        {
          v16 += 6;
          if ( (_DWORD *)v17 == v16 )
            goto LABEL_25;
        }
      }
      else if ( *(_DWORD *)v14 != 1 )
      {
        break;
      }
      v121 = --v13;
    }
    while ( v13 != -1 );
  }
LABEL_25:
  v18 = (a3 & 1) == 0;
  if ( !sub_36F7C0(a1, &v129, &v121, 1, v18, 0.0) )
    goto LABEL_6;
  if ( *v149 == 5 )
  {
    v75 = v143;
    v76 = v141;
    if ( (int)v141 > 0 && (int)v143 > 0 )
    {
      v77 = 0;
      v78 = 1;
      v79 = 0;
      do
      {
        v82 = v142[v79];
        if ( v82 != -1 )
        {
          if ( (v79 & 1) == 0 && v75 > v78 && v82 == v142[v78] )
          {
            if ( v77 % 2 == 1 )
            {
              v83 = v77++;
              v140[v83] = v82;
            }
            if ( v76 == v77 )
              break;
          }
          v80 = &v140[v77];
          if ( *v80 != -1 && v82 != *v80 )
          {
            if ( !under_debugger )
              sub_383060(0xCCC7u, 0.0);
            goto LABEL_176;
          }
          *v80 = v82;
          ++v77;
        }
        v81 = v78 < v75;
        ++v79;
        ++v78;
      }
      while ( v76 > v77 && v81 );
    }
  }
  v101 = sub_36A080((_QWORD *)a1, &v129, 0.0);
  v112 = sub_36F7C0(a1, &v129, &v121, 0, v18, 0.0);
  if ( !v112 )
  {
LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  v19 = *(_QWORD *)(a1 + 464);
  if ( (_DWORD)v19 != (_DWORD)v93 )
  {
    if ( !(unsigned __int8)sub_64880(v138) && !(unsigned __int8)sub_D81C0((__int64)v149, v138, a1, (__m128)0LL, a5) )
    {
      if ( !under_debugger )
        sub_383060(0xCB81u, 0.0);
      goto LABEL_176;
    }
    v19 = *(_QWORD *)(a1 + 464);
  }
  v20 = 0;
  v21 = 0;
  v122 = nullptr;
  v124 = 0;
  v123 = 0;
  v125 = 0;
  if ( !v19 )
    goto LABEL_86;
  do
  {
    v22 = sub_13D280((_QWORD *)a1, v20, 0.0);
    if ( *(_DWORD *)v22 == 2 )
    {
      v52 = *(_QWORD *)(v22 + 8);
      v53 = *(_DWORD **)v52;
      v54 = *(_QWORD *)v52 + 24LL * *(_QWORD *)(v52 + 8);
      if ( *(_QWORD *)v52 == v54 )
        goto LABEL_47;
      while ( (unsigned int)(*v53 - 3) > 1 )
      {
        v53 += 6;
        if ( (_DWORD *)v54 == v53 )
          goto LABEL_47;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)v22 - 3) > 1 )
    {
      goto LABEL_47;
    }
    v23 = (__int64 *)&v122;
    if ( ((*v149 - 3) & 0xFFFFFFFD) != 0 )
    {
      v24 = v140;
      v25 = &v140[v141];
      if ( v140 != v25 )
      {
        while ( v20 != *v24 )
        {
          if ( v25 == ++v24 )
          {
            v23 = (__int64 *)&v122;
            goto LABEL_44;
          }
        }
        if ( v25 != v24 )
        {
          v26 = v142;
          v27 = &v142[v143];
          if ( v142 != v27 )
          {
            while ( v20 != *v26 )
            {
              if ( v27 == ++v26 )
                goto LABEL_117;
            }
            if ( v26 != v27 )
            {
              v23 = &v124;
              goto LABEL_44;
            }
          }
        }
      }
LABEL_117:
      v23 = (__int64 *)&v122;
    }
LABEL_44:
    v28 = *v23;
    v29 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 4 * v21);
    v30 = v23[1];
    if ( v23[2] < (unsigned __int64)(v30 + 1) )
    {
      v28 = qvector_reserve((__int64)v23, v28, v30 + 1, 4);
      *v23 = v28;
      v30 = v23[1];
    }
    *(_DWORD *)(v28 + 4 * v30) = v29;
    ++v23[1];
LABEL_47:
    v21 = ++v20;
  }
  while ( (unsigned __int64)v20 < *(_QWORD *)(a1 + 464) );
  v31 = 4 * v125;
  v32 = (4 * (__int64)v125) >> 2;
  if ( !v32 )
  {
LABEL_86:
    v38 = sub_D4530((__int64)v149, (_QWORD *)(a1 + 432), (__int64 *)&v122);
    goto LABEL_54;
  }
  v33 = v122;
  v34 = v124;
  v35 = 4 * v123;
  v36 = 0;
  if ( *((_QWORD *)&v123 + 1) < (unsigned __int64)(v123 + v32) )
  {
    v116 = (4 * (__int64)v125) >> 2;
    v110 = 4 * v123;
    v98 = v124;
    v122 = (int *)qvector_reserve((__int64)&v122, (__int64)v122, v123 + v32, 4);
    v33 = v122;
    v35 = v110;
    v32 = v116;
    v34 = v98;
    v36 = 4 * v123 - v110;
  }
  v114 = v32;
  v107 = v34;
  v94 = (char *)v33 + v35;
  memmove(&v94[v31], v94, v36);
  v37 = 0;
  if ( v31 )
  {
    do
    {
      *(_DWORD *)&v94[v37] = *(_DWORD *)(v107 + v37);
      v37 += 4;
    }
    while ( v31 != v37 );
  }
  *(_QWORD *)&v123 = v114 + v123;
  v38 = sub_D4530((__int64)v149, (_QWORD *)(a1 + 432), (__int64 *)&v122);
LABEL_54:
  v39 = v38;
  v118 = (v10 & 2) != 0;
  if ( v38 > 0 )
  {
    sub_36F520((_QWORD *)a1, &v122, 0.0);
    v101 = *(_BYTE *)(a1 + 320);
    if ( v101 )
      goto LABEL_134;
LABEL_140:
    v101 = v112;
    goto LABEL_141;
  }
  if ( v38 )
  {
    v101 = *(_BYTE *)(a1 + 320);
    if ( !v101 )
      goto LABEL_141;
    goto LABEL_138;
  }
  if ( v101 || (_QWORD)v125 )
  {
    sub_36F520((_QWORD *)a1, &v122, 0.0);
    v101 = *(_BYTE *)(a1 + 320);
    if ( v101 )
      goto LABEL_59;
    goto LABEL_140;
  }
  if ( *(_BYTE *)(a1 + 320) )
    goto LABEL_59;
LABEL_141:
  if ( (unsigned __int8)sub_D4FA0(v149, a1, &v122, v118, 0.0) != 1 || v39 < 0 )
    goto LABEL_138;
  if ( !v39 )
    goto LABEL_59;
LABEL_134:
  if ( ((*(_BYTE *)(a1 + 4) & 0x30) != 0 || a2 == 128) && *(char *)(sub_13D280((_QWORD *)a1, 0, 0.0) + 25) >= 0 )
  {
    *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
    if ( a2 == 128 )
    {
LABEL_138:
      v11 = 0;
      goto LABEL_113;
    }
  }
LABEL_59:
  if ( !sub_36F620(*(_QWORD *)(a1 + 1504), a2, 0.0) || !v147 )
    goto LABEL_111;
  if ( v101 && !(unsigned __int8)sub_D81C0((__int64)v149, v138, a1, (__m128)0LL, a5) )
  {
    if ( !under_debugger )
      sub_383060(0xCBF4u, 0.0);
    goto LABEL_176;
  }
  v40 = *(_QWORD *)(a1 + 1504);
  v41 = *(_DWORD *)(v40 + 80);
  if ( sub_36F620(v40, v149[18], 0.0) )
  {
    v126 = 32;
    v128 = 0;
    v127 = 0;
    get_stkarg_area_info();
    v42 = *(_QWORD *)(a1 + 144) + v127 - *(int *)(a1 + 120);
  }
  else
  {
    v42 = -1;
  }
  v120 = v146;
  if ( !v146 )
    goto LABEL_104;
  if ( !v147 )
    goto LABEL_104;
  v115 = (_QWORD *)v146[1];
  if ( v146 == v115 )
    goto LABEL_104;
  v43 = v41 - 1;
  v44 = -v41;
  while ( 2 )
  {
    v45 = v115[3];
    v46 = *((_DWORD *)v115 + 8);
    v117 = *(_QWORD *)(a1 + 432) + 104LL * v46;
    v119 = *(_DWORD *)(v117 + 88);
    v47 = *(int *)(*(_QWORD *)(a1 + 456) + 4LL * v90);
    if ( (_DWORD)v47 == v46 )
      goto LABEL_99;
    v48 = v90 + 1;
    while ( 2 )
    {
      v90 = v48 - 1;
      if ( v42 > v45 )
      {
        if ( !under_debugger )
          sub_383060(0xCB35u, 0.0);
        goto LABEL_176;
      }
      if ( *v149 == 2 )
      {
        v113 = v44;
        v108 = v43;
        v102 = v42;
        v95 = v47;
        v51 = sub_64930(v139, v90);
        v47 = v95;
        v42 = v102;
        v43 = v108;
        v44 = v113;
        if ( v51 )
        {
          v90 = v48;
          v47 = *(int *)(*(_QWORD *)(a1 + 456) + 4LL * v48);
LABEL_73:
          ++v48;
          if ( v46 == (_DWORD)v47 )
            goto LABEL_99;
          continue;
        }
      }
      break;
    }
    v49 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v47);
    v50 = (int)v49[22];
    if ( (v44 & (v42 + v43 + v50)) <= v45 )
    {
      v90 = v48;
      v47 = *(int *)(*(_QWORD *)(a1 + 456) + 4LL * v48);
      v42 = v44 & (v42 + v43 + v50);
      goto LABEL_73;
    }
    if ( *v49 == 1 )
    {
      if ( !under_debugger )
        sub_383060(0xCB36u, 0.0);
      goto LABEL_176;
    }
    v55 = *(_DWORD *)(v117 + 24);
    if ( (v55 & 0x80000) == 0 || (_DWORD)v50 != *(_DWORD *)(v117 + 88) )
    {
      if ( (v44 & (v45 ^ v42)) != 0 )
      {
        if ( !under_debugger )
          sub_383060(0xCB37u, 0.0);
      }
      else
      {
        v56 = *(char **)(a1 + 456);
        v57 = &v56[4 * *(_QWORD *)(a1 + 464)];
        for ( i = v56; v57 != i; i += 4 )
        {
          if ( *(_DWORD *)i == v46 )
            break;
        }
        if ( v90 < (i - v56) >> 2 )
        {
          v103 = v90;
          v96 = v44;
          v91 = v43;
          memmove(i, i + 4, v57 - i - 4);
          v59 = *(_QWORD *)(a1 + 464);
          v60 = *(_QWORD *)(a1 + 456);
          v61 = v91;
          v62 = v59 - 1;
          v63 = 4 * v103;
          v64 = *(_QWORD *)(a1 + 472) < v59;
          v65 = v96;
          *(_QWORD *)(a1 + 464) = v59 - 1;
          if ( v64 )
          {
            v106 = v96;
            v100 = v91;
            v92 = v63;
            v89 = qvector_reserve(a1 + 456, v60, v59, 4);
            *(_QWORD *)(a1 + 456) = v89;
            v60 = v89;
            v65 = v106;
            v62 = *(_QWORD *)(a1 + 464);
            v61 = v100;
            v63 = v92;
          }
          v66 = v45 + v61;
          v67 = (_DWORD *)(v60 + v63);
          v109 = v61;
          v104 = v65;
          v97 = v65 & (v119 + v66);
          memmove((void *)(v60 + v63 + 4), (const void *)(v60 + v63), 4 * v62 - v63);
          *v67 = v46;
          v42 = v97;
          v44 = v104;
          v43 = v109;
          v90 = v48;
          ++*(_QWORD *)(a1 + 464);
          goto LABEL_99;
        }
        if ( !under_debugger )
          sub_383060(0xCB38u, 0.0);
      }
LABEL_176:
      BUG();
    }
    BYTE1(v55) &= 0x7Eu;
    *(_DWORD *)(v117 + 24) = v55 | 0x100000;
    v87 = *(char **)(a1 + 456);
    v88 = &v87[4 * *(_QWORD *)(a1 + 464)];
    if ( v87 != v88 )
    {
      while ( v46 != *(_DWORD *)v87 )
      {
        v87 += 4;
        if ( v88 == v87 )
          goto LABEL_99;
      }
      if ( v87 != v88 )
      {
        v111 = v44;
        v105 = v43;
        v99 = v42;
        memmove(v87, v87 + 4, v88 - v87 - 4);
        v42 = v99;
        v43 = v105;
        --*(_QWORD *)(a1 + 464);
        v44 = v111;
      }
    }
LABEL_99:
    if ( (*v115 & 2) == 0 )
    {
      v68 = (_QWORD *)v115[2];
      if ( (*(_BYTE *)v68 & 2) != 0 )
      {
        v69 = (_QWORD *)(*v115 & 0xFFFFFFFFFFFFFFFCLL);
        v84 = *v69;
        if ( (*v69 & 2) == 0 )
        {
          v85 = v115;
          while ( v85 == (_QWORD *)v69[2] )
          {
            v85 = v69;
            v86 = v84 & 0xFFFFFFFFFFFFFFFCLL;
            v84 = *(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v84 & 2) != 0 )
            {
              v115 = (_QWORD *)v86;
              goto LABEL_103;
            }
            v69 = (_QWORD *)v86;
          }
        }
      }
      else
      {
        do
        {
          v69 = v68;
          v68 = (_QWORD *)v68[1];
        }
        while ( (*(_BYTE *)v68 & 2) == 0 );
      }
      v115 = v69;
    }
LABEL_103:
    if ( v120 != v115 )
      continue;
    break;
  }
LABEL_104:
  if ( (a2 & 0xFFFFFFF0) != 0x40 && (a2 & 0xFFFFFFF0) != 0xD0 )
  {
    LODWORD(v70) = *(_DWORD *)(a1 + 464) - 1;
    if ( (int)v70 >= 0 )
    {
      v70 = (unsigned int)v70;
      do
      {
        v73 = (_DWORD *)sub_13D280((_QWORD *)a1, v70, 0.0);
        v74 = v73[6];
        if ( (v74 & 0x80000) == 0 )
          break;
        if ( *v73 == 1 )
          break;
        BYTE1(v74) &= 0x7Eu;
        v73[6] = v74 | 0x100000;
        v71 = *(_QWORD *)(a1 + 456) + 4 * v70;
        v72 = *(_QWORD *)(a1 + 464) - v70--;
        memmove((void *)v71, (const void *)(v71 + 4), 4 * v72 - 4);
        --*(_QWORD *)(a1 + 464);
      }
      while ( (int)v70 >= 0 );
    }
  }
LABEL_111:
  v11 = *(unsigned __int8 *)(a1 + 320);
  if ( !(_BYTE)v11 )
    v11 = sub_D4FA0(v149, a1, &v122, v118, 0.0);
LABEL_113:
  if ( v124 )
  {
    *(_QWORD *)&v125 = 0;
    qfree(v124);
  }
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree((__int64)v122);
  }
LABEL_7:
  sub_1990E0(v138);
  if ( v136 )
  {
    v137 = 0;
    qfree(v136);
  }
  if ( v134 )
  {
    v135 = 0;
    qfree(v134);
  }
  if ( v132 )
  {
    v133 = 0;
    qfree(v132);
  }
  if ( v130 )
  {
    v131 = 0;
    qfree(v130);
  }
  return v11;
}

