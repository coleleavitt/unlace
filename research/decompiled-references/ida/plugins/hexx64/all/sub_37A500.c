unsigned __int64 __fastcall sub_37A500(__int64 a1, unsigned int a2, char a3, double a4, __m128 a5)
{
  unsigned int v8; // ebx
  _QWORD *v9; // r15
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  __m128i *v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __m128i *v20; // rax
  unsigned __int64 *v21; // rbp
  __int32 v22; // r15d
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rdx
  _DWORD *v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // r15
  unsigned __int64 *v33; // r12
  int v34; // eax
  unsigned __int64 v35; // r13
  __int64 *v36; // r12
  __int64 v37; // rax
  __int64 *v38; // rbx
  __int64 v39; // rdx
  __int64 *v40; // rdi
  __int64 *v41; // rdi
  __int64 v42; // rbx
  __int64 *v43; // rdi
  __int64 *v44; // rdi
  __int64 v45; // rax
  int v47; // eax
  bool v48; // al
  __int64 v49; // rcx
  __int64 v50; // rdi
  _QWORD *v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int32 *v56; // rdx
  __int32 *v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rax
  bool v60; // dl
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rdx
  int v65; // r15d
  __int64 v66; // rdx
  int v67; // eax
  char *v68; // rdi
  char *v69; // rax
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 *v72; // rsi
  __int64 v73; // rdx
  int v74; // ecx
  __int64 v75; // rdx
  int v76; // r10d
  int v77; // r10d
  __int64 v78; // r15
  __int64 v79; // rsi
  __int64 v80; // rdx
  _DWORD *v81; // rcx
  _DWORD *v82; // rax
  unsigned __int64 v83; // rdx
  int v84; // eax
  unsigned int v85; // eax
  unsigned __int64 *v86; // rdx
  __int64 v87; // rdx
  int v88; // eax
  char *v89; // rdi
  char *v90; // rdx
  unsigned __int64 *v91; // rax
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rsi
  __int64 v94; // rdx
  _DWORD *v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  unsigned __int64 *v100; // rsi
  unsigned __int64 v101; // rcx
  __int64 v102; // rdx
  unsigned __int64 *v103; // rdi
  unsigned __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rdx
  char v107; // [rsp+4h] [rbp-194h]
  int v108; // [rsp+4h] [rbp-194h]
  unsigned __int64 v109; // [rsp+8h] [rbp-190h]
  __int64 v110; // [rsp+10h] [rbp-188h]
  int v111; // [rsp+18h] [rbp-180h]
  bool v112; // [rsp+18h] [rbp-180h]
  unsigned __int64 *v113; // [rsp+20h] [rbp-178h]
  __int64 v114; // [rsp+20h] [rbp-178h]
  __int64 v115; // [rsp+28h] [rbp-170h]
  unsigned __int64 v116; // [rsp+30h] [rbp-168h]
  bool v117; // [rsp+38h] [rbp-160h]
  __int64 v118; // [rsp+38h] [rbp-160h]
  int v119; // [rsp+40h] [rbp-158h]
  _QWORD *v120; // [rsp+50h] [rbp-148h]
  __int64 v121; // [rsp+58h] [rbp-140h]
  __m128i v122; // [rsp+60h] [rbp-138h] BYREF
  __int64 v123; // [rsp+70h] [rbp-128h] BYREF
  __int64 v124; // [rsp+78h] [rbp-120h]
  __int64 v125; // [rsp+80h] [rbp-118h] BYREF
  __int128 v126; // [rsp+88h] [rbp-110h]
  __m128i v127; // [rsp+A0h] [rbp-F8h] BYREF
  unsigned __int64 *v128; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v129; // [rsp+B8h] [rbp-E0h]
  char v130; // [rsp+C8h] [rbp-D0h]
  int v131; // [rsp+CCh] [rbp-CCh]
  char v132[8]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v133; // [rsp+D8h] [rbp-C0h]
  __int64 v134; // [rsp+E0h] [rbp-B8h]
  __int64 v135; // [rsp+F0h] [rbp-A8h]
  __int64 v136; // [rsp+F8h] [rbp-A0h]
  __int64 v137; // [rsp+128h] [rbp-70h]
  __int64 v138; // [rsp+130h] [rbp-68h]
  __int64 v139; // [rsp+140h] [rbp-58h]
  __int64 v140; // [rsp+148h] [rbp-50h]
  unsigned __int64 v141; // [rsp+158h] [rbp-40h]

  v8 = a2;
  v141 = __readfsqword(0x28u);
  v9 = *(_QWORD **)(a1 + 936);
  if ( (unsigned __int8)sub_19F810(v9) )
  {
    if ( *(int *)(a1 + 68) > 0 || (*(_BYTE *)(a1 + 4) & 0x20) != 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCB46u, a4);
LABEL_278:
      BUG();
    }
    v10 = *(_QWORD **)(a1 + 944);
    if ( *(_BYTE *)(*(_QWORD *)(*v10 + 1496LL) + 148LL) )
    {
      v11 = v10[1];
      v12 = v10[3];
      if ( v11 <= v12 )
        v12 = v11;
      v109 = v12;
    }
    else
    {
      v109 = -1;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
    if ( a2 <= 0x10 )
    {
      v58 = getinf();
      sub_D10B0((__int64)v132, *(_QWORD *)(a1 + 1496), v58);
    }
    else
    {
      sub_D10B0((__int64)v132, *(_QWORD *)(a1 + 1496), a2);
    }
    v116 = v13;
    v8 = 64;
    v120 = v9 + 3;
    goto LABEL_11;
  }
  v51 = *(_QWORD **)(a1 + 944);
  if ( !*(_BYTE *)(*(_QWORD *)(*v51 + 1496LL) + 148LL) )
  {
    if ( a2 > 0x10 )
    {
      sub_D10B0((__int64)v132, *(_QWORD *)(a1 + 1496), a2);
      v116 = -1;
LABEL_128:
      v120 = nullptr;
      v109 = v116;
      goto LABEL_11;
    }
    v116 = -1;
LABEL_224:
    v8 = getinf();
    sub_D10B0((__int64)v132, *(_QWORD *)(a1 + 1496), v8);
    goto LABEL_128;
  }
  v52 = v51[1];
  v53 = v51[3];
  if ( v52 <= v53 )
    v53 = v52;
  v116 = v53;
  if ( a2 <= 0x10 )
    goto LABEL_224;
  sub_D10B0((__int64)v132, *(_QWORD *)(a1 + 1496), a2);
  v120 = nullptr;
  v109 = v116;
LABEL_11:
  v14 = (__m128i *)sub_369E90((__int64)v132, a1, v8);
  if ( a3 )
  {
    if ( !*(_QWORD *)(a1 + 464) )
      goto LABEL_21;
    v15 = 0;
    while ( 1 )
    {
      v16 = sub_13D280((_QWORD *)a1, v15, a4);
      if ( *(_DWORD *)v16 == 2 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        v18 = *(_DWORD **)v17;
        v19 = *(_QWORD *)v17 + 24LL * *(_QWORD *)(v17 + 8);
        if ( *(_QWORD *)v17 == v19 )
        {
LABEL_20:
          sub_81FC0((__int64 *)(a1 + 456), v15);
LABEL_21:
          v123 = 0;
          v124 = 0;
          v125 = 0;
          v126 = 0;
          if ( (*(_BYTE *)a1 & 8) == 0 )
          {
            v107 = 0;
            goto LABEL_23;
          }
LABEL_99:
          v119 = -1;
          v33 = nullptr;
          v115 = 0;
          v32 = *(_QWORD *)(a1 + 144);
          v111 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
LABEL_100:
          if ( !v120 )
          {
            v21 = v33;
            goto LABEL_102;
          }
LABEL_52:
          if ( v32 < v116 )
            sub_36DBC0(a1, (v32 + v111 - 1) & -v111, v116, -1, v119 == 1, 0.0, a5);
          v21 = v33;
          goto LABEL_55;
        }
        while ( (unsigned int)(*v18 - 3) > 1 )
        {
          v18 += 6;
          if ( (_DWORD *)v19 == v18 )
            goto LABEL_20;
        }
      }
      else if ( (unsigned int)(*(_DWORD *)v16 - 3) > 1 )
      {
        goto LABEL_20;
      }
      if ( ++v15 >= *(_QWORD *)(a1 + 464) )
        goto LABEL_21;
    }
  }
  v50 = *(_QWORD *)(a1 + 456);
  if ( v50 )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree(v50);
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  if ( (*(_BYTE *)a1 & 8) != 0 )
    goto LABEL_99;
  v107 = 1;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 1 )
  {
    v59 = *(int *)(a1 + 480);
    if ( (_DWORD)v59 != -1 )
      v107 = sub_369E00(*(_QWORD *)(a1 + 432) + 104 * v59, 0.0) ^ 1;
  }
LABEL_23:
  v115 = *(_QWORD *)(a1 + 440);
  if ( !v115 )
  {
    if ( !v120 )
    {
      v32 = *(_QWORD *)(a1 + 144);
      v21 = nullptr;
      v119 = -1;
      v111 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
      goto LABEL_102;
    }
    v119 = -1;
    v32 = *(_QWORD *)(a1 + 144);
    v111 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    goto LABEL_248;
  }
  v20 = nullptr;
  v115 = 0;
  if ( v120 )
    v20 = v14;
  v119 = -1;
  v21 = nullptr;
  v22 = 0;
  v113 = (unsigned __int64 *)v20;
  v23 = 0;
  do
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)(a1 + 432) + 104 * v23;
      if ( *(_DWORD *)v24 == 2 )
        break;
      if ( (unsigned int)(*(_DWORD *)v24 - 3) > 1 )
        goto LABEL_91;
      if ( !a3 )
        goto LABEL_36;
LABEL_29:
      v23 = ++v22;
      if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 440) )
        goto LABEL_48;
    }
    v25 = *(_QWORD *)(v24 + 8);
    v26 = *(_DWORD **)v25;
    v27 = *(_QWORD *)v25 + 24LL * *(_QWORD *)(v25 + 8);
    if ( *(_QWORD *)v25 == v27 )
    {
LABEL_91:
      v14 = &v122;
      v47 = sub_1C3500((_DWORD *)v24, 0.0);
      if ( v47 == -1 )
        goto LABEL_94;
      if ( v47 >= v116 )
        goto LABEL_94;
      v110 = v47;
      v14 = &v122;
      v48 = sub_228C90(a1, v24, 0.0);
      v49 = v110;
      if ( !v48 )
        goto LABEL_94;
      v112 = 0;
      goto LABEL_121;
    }
    while ( 1 )
    {
      LODWORD(v14) = *v26;
      if ( (unsigned int)(*v26 - 3) <= 1 )
        break;
      v26 += 6;
      if ( (_DWORD *)v27 == v26 )
        goto LABEL_91;
    }
    if ( a3 )
      goto LABEL_29;
LABEL_36:
    if ( !v107 )
      goto LABEL_94;
    if ( *(_DWORD *)(v24 + 92) )
      goto LABEL_94;
    v127.m128i_i64[1] = a1;
    v127.m128i_i64[0] = (__int64)&off_4E6140;
    v14 = &v122;
    v128 = v113;
    if ( (unsigned int)for_all_arglocs() )
      goto LABEL_94;
    v14 = &v122;
    v28 = sub_1C3500((_DWORD *)v24, 0.0);
    if ( v28 == -1 )
      goto LABEL_42;
    if ( v28 >= v116 )
    {
      if ( *(_QWORD *)(a1 + 144) > v28 )
        goto LABEL_94;
LABEL_42:
      v117 = 0;
      goto LABEL_43;
    }
    v118 = v28;
    v112 = sub_228C90(a1, v24, 0.0);
    v49 = v118;
    if ( !v112 )
    {
      if ( v118 < *(_QWORD *)(a1 + 144) )
        goto LABEL_94;
      goto LABEL_42;
    }
LABEL_121:
    v14 = &v122;
    v127.m128i_i64[0] = v49;
    v121 = v49;
    v127.m128i_i32[2] = v22;
    v122.m128i_i64[0] = (__int64)v21;
    v122.m128i_i64[1] = v115;
    sub_37A240(&v122, &v127);
    v21 = (unsigned __int64 *)v122.m128i_i64[0];
    v117 = v60;
    v115 = v122.m128i_i64[1];
    if ( !v60 )
    {
      if ( !(unsigned __int8)sub_1EEA60((unsigned __int8 *)a1) )
      {
        if ( !under_debugger )
          sub_383060(0xC425u, 0.0);
        goto LABEL_278;
      }
      if ( !v112 || v121 < *(_QWORD *)(a1 + 144) )
      {
LABEL_94:
        v29 = *(_DWORD *)(v24 + 24);
LABEL_95:
        BYTE1(v29) &= 0x7Eu;
        *(_DWORD *)(v24 + 24) = v29 | 0x100000;
        goto LABEL_29;
      }
      goto LABEL_43;
    }
    if ( sub_11CB40(*(_DWORD *)(v24 + 88)) )
    {
      if ( v119 != -1 )
      {
        if ( !v112 || v121 < *(_QWORD *)(a1 + 144) )
          goto LABEL_134;
LABEL_234:
        v117 = v112;
        goto LABEL_43;
      }
      v30 = *(_DWORD *)(v24 + 24);
      if ( (v30 & 0x80000) != 0 )
      {
        if ( !v112 || v121 < *(_QWORD *)(a1 + 144) )
          goto LABEL_47;
        goto LABEL_234;
      }
      if ( (get_tinfo_property() & 0xF) == 9 )
      {
        if ( !v112 || *(_QWORD *)(a1 + 144) > v121 )
        {
          v119 = 1;
          v30 = *(_DWORD *)(v24 + 24);
          goto LABEL_47;
        }
        v119 = 1;
        v117 = v112;
        goto LABEL_43;
      }
      if ( !v112 || v121 < *(_QWORD *)(a1 + 144) )
        goto LABEL_253;
    }
    else if ( !v112 || *(_QWORD *)(a1 + 144) > v121 )
    {
LABEL_253:
      v119 = 0;
      v30 = *(_DWORD *)(v24 + 24);
      goto LABEL_47;
    }
    v119 = 0;
LABEL_43:
    v14 = &v127;
    v127 = 0u;
    v128 = nullptr;
    v129 = 0;
    sub_1C3380(v24, a1, (__int64)&v127, 0, 0.0, a5);
    if ( !(unsigned __int8)sub_64780(&v127, &v123) )
    {
      v14 = (__m128i *)&v128;
      if ( !(unsigned __int8)sub_318470(&v128, (__int64)&v125) )
      {
        v54 = *(_QWORD *)(a1 + 456);
        v55 = *(_QWORD *)(a1 + 464);
        v56 = (__int32 *)(v54 + 4 * v55);
        if ( (__int32 *)v54 != v56 )
        {
          v57 = *(__int32 **)(a1 + 456);
          while ( *v57 != v22 )
          {
            if ( v56 == ++v57 )
              goto LABEL_129;
          }
          if ( v56 != v57 )
            sub_369E70(0.0);
        }
LABEL_129:
        if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v55 + 1) )
        {
          v105 = qvector_reserve(a1 + 456, v54, v55 + 1, 4);
          v106 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v105;
          v56 = (__int32 *)(v105 + 4 * v106);
        }
        *v56 = v22;
        ++*(_QWORD *)(a1 + 464);
        sub_64280(&v123, v127.m128i_i64, 0.0);
        sub_316CB0(&v125, (const void **)&v128, v61, v62);
        if ( v128 )
        {
          *(_QWORD *)&v129 = 0;
          qfree((__int64)v128);
          qfree(v127.m128i_i64[0]);
          v30 = *(_DWORD *)(v24 + 24);
          goto LABEL_47;
        }
        qfree(v127.m128i_i64[0]);
LABEL_134:
        v30 = *(_DWORD *)(v24 + 24);
        goto LABEL_47;
      }
    }
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      qfree((__int64)v128);
    }
    qfree(v127.m128i_i64[0]);
    v29 = *(_DWORD *)(v24 + 24);
    v30 = v29;
    if ( !v117 )
      goto LABEL_95;
LABEL_47:
    ++v22;
    v31 = v30 & 0xFFEFFFFF;
    BYTE1(v31) = BYTE1(v30) | 1;
    *(_DWORD *)(v24 + 24) = v31;
    v23 = v22;
  }
  while ( (unsigned __int64)v22 < *(_QWORD *)(a1 + 440) );
LABEL_48:
  if ( v120 )
  {
    v32 = *(_QWORD *)(a1 + 144);
    v111 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    if ( v21 )
    {
      if ( !v115 )
        goto LABEL_51;
      v33 = (unsigned __int64 *)v21[1];
      if ( v21 == v33 )
        goto LABEL_52;
LABEL_167:
      v114 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
           & (*(_QWORD *)(a1 + 664) + *(_QWORD *)(a1 + 672) - *(_QWORD *)(a1 + 1440));
      v74 = 0;
      while ( 1 )
      {
        v75 = v33[3];
        v76 = *((_DWORD *)v33 + 8);
        if ( v75 >= v109 )
        {
          LODWORD(v14) = 1;
LABEL_196:
          v87 = *(_QWORD *)(a1 + 432) + 104LL * v76;
          v88 = *(_DWORD *)(v87 + 24);
          BYTE1(v88) &= 0x7Eu;
          *(_DWORD *)(v87 + 24) = v88 | 0x100000;
          v89 = *(char **)(a1 + 456);
          v90 = &v89[4 * *(_QWORD *)(a1 + 464)];
          if ( v89 != v90 )
          {
            while ( v76 != *(_DWORD *)v89 )
            {
              v89 += 4;
              if ( v90 == v89 )
                goto LABEL_202;
            }
            if ( v90 != v89 )
            {
              memmove(v89, v89 + 4, v90 - v89 - 4);
              --*(_QWORD *)(a1 + 464);
            }
          }
LABEL_202:
          v74 = (int)v14;
          goto LABEL_190;
        }
        LOBYTE(v14) = v114 <= v75 && v75 != v32;
        if ( (_BYTE)v14 )
          goto LABEL_196;
        LODWORD(v14) = v74;
        if ( (unsigned __int8)v74 | (v75 < v32) )
          goto LABEL_196;
        v108 = *((_DWORD *)v33 + 8);
        sub_36DBC0(a1, v32, v75, v76, v119 == 1, 0.0, a5);
        v77 = v108;
        v78 = *(_QWORD *)(a1 + 432) + 104LL * v108;
        if ( *(_DWORD *)v78 == 2 )
        {
          v94 = *(_QWORD *)(v78 + 8);
          v95 = *(_DWORD **)v94;
          v96 = *(_QWORD *)v94 + 24LL * *(_QWORD *)(v94 + 8);
          if ( *(_QWORD *)v94 == v96 )
          {
LABEL_173:
            v79 = *(_QWORD *)(a1 + 456);
            v80 = *(_QWORD *)(a1 + 464);
            v81 = (_DWORD *)(v79 + 4 * v80);
            if ( (_DWORD *)v79 != v81 )
            {
              v82 = *(_DWORD **)(a1 + 456);
              while ( v108 != *v82 )
              {
                if ( v81 == ++v82 )
                  goto LABEL_180;
              }
              if ( v81 != v82 )
              {
                if ( !under_debugger )
                  sub_383060(0xC993u, 0.0);
                goto LABEL_278;
              }
            }
LABEL_180:
            v83 = v80 + 1;
            if ( *(_QWORD *)(a1 + 472) < v83 )
            {
              v97 = qvector_reserve(a1 + 456, v79, v83, 4);
              v98 = *(_QWORD *)(a1 + 464);
              *(_QWORD *)(a1 + 456) = v97;
              v77 = v108;
              v81 = (_DWORD *)(v97 + 4 * v98);
            }
            *v81 = v77;
            ++*(_QWORD *)(a1 + 464);
            goto LABEL_183;
          }
          while ( (unsigned int)(*v95 - 3) > 1 )
          {
            v95 += 6;
            if ( (_DWORD *)v96 == v95 )
              goto LABEL_173;
          }
        }
        else if ( (unsigned int)(*(_DWORD *)v78 - 3) > 1 )
        {
          goto LABEL_173;
        }
LABEL_183:
        v14 = &v122;
        v84 = sub_1C35C0((_DWORD *)v78, *(_DWORD *)(v78 + 88), 0.0);
        v32 = v84;
        if ( v84 <= 0 )
        {
          if ( !under_debugger )
            sub_383060(0xC97Fu, 0.0);
          goto LABEL_278;
        }
        v85 = *(_DWORD *)(a1 + 72);
        if ( v85 <= 0x10 )
          v85 = getinf();
        if ( v85 == 176 || v85 == 256 || (v14 = &v122, v74 = getinf_flag(), (_BYTE)v74) )
          v74 = 0;
        else
          v32 = (v111 - 1 + v32) & -v111;
LABEL_190:
        if ( (*v33 & 2) != 0 )
          goto LABEL_193;
        v86 = (unsigned __int64 *)v33[2];
        if ( (*(_BYTE *)v86 & 2) == 0 )
        {
          do
          {
            v33 = v86;
            v86 = (unsigned __int64 *)v86[1];
          }
          while ( (*(_BYTE *)v86 & 2) == 0 );
LABEL_193:
          if ( v33 == v21 )
            goto LABEL_100;
          continue;
        }
        v91 = (unsigned __int64 *)(*v33 & 0xFFFFFFFFFFFFFFFCLL);
        v92 = *v91;
        if ( (*v91 & 2) != 0 )
        {
LABEL_205:
          v33 = v91;
          if ( v91 == v21 )
            goto LABEL_100;
        }
        else
        {
          while ( 1 )
          {
            if ( (unsigned __int64 *)v91[2] != v33 )
              goto LABEL_205;
            v33 = v91;
            v93 = v92 & 0xFFFFFFFFFFFFFFFCLL;
            v92 = *(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v92 & 2) != 0 )
              break;
            v91 = (unsigned __int64 *)v93;
          }
          v33 = (unsigned __int64 *)v93;
          if ( (unsigned __int64 *)v93 == v21 )
            goto LABEL_100;
        }
      }
    }
LABEL_248:
    v33 = nullptr;
    goto LABEL_52;
  }
  if ( *(_DWORD *)(a1 + 68) )
    goto LABEL_164;
  if ( !v115 )
  {
    v32 = *(_QWORD *)(a1 + 144);
    v111 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    goto LABEL_102;
  }
  v63 = *v21;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          if ( (v63 & 2) == 0 )
          {
LABEL_139:
            v64 = v21[1];
            if ( (*(_BYTE *)v64 & 2) != 0 )
            {
              v64 = v63 & 0xFFFFFFFFFFFFFFFCLL;
              v99 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v99 & 2) == 0 )
              {
                v100 = v21;
                do
                {
                  if ( *(unsigned __int64 **)(v64 + 8) != v100 )
                    break;
                  v100 = (unsigned __int64 *)v64;
                  v101 = v99 & 0xFFFFFFFFFFFFFFFCLL;
                  v99 = *(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFFCLL);
                  v64 = v101;
                }
                while ( (v99 & 2) == 0 );
              }
            }
            else
            {
              while ( (**(_BYTE **)(v64 + 16) & 2) == 0 )
                v64 = *(_QWORD *)(v64 + 16);
            }
            goto LABEL_141;
          }
LABEL_160:
          v64 = v21[2];
LABEL_141:
          v65 = *(_DWORD *)(v64 + 32);
          v14 = &v122;
          v127.m128i_i64[1] = 0;
          v128 = nullptr;
          v129 = 0u;
          v130 = 0;
          v127.m128i_i64[0] = (__int64)&off_4E6168;
          v131 = v65;
          if ( (unsigned int)sub_11FBB0(a1, (__int64)&v127)
            || (v66 = *(_QWORD *)(a1 + 432) + 104LL * v65, v67 = *(_DWORD *)(v66 + 24), (v67 & 0x8000) != 0) )
          {
            v32 = *(_QWORD *)(a1 + 144);
            v111 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
            if ( v21 )
              goto LABEL_166;
            goto LABEL_102;
          }
          BYTE1(v67) &= 0x7Eu;
          *(_DWORD *)(v66 + 24) = v67 | 0x100000;
          v68 = *(char **)(a1 + 456);
          v69 = &v68[4 * *(_QWORD *)(a1 + 464)];
          if ( v68 != v69 )
          {
            while ( v65 != *(_DWORD *)v68 )
            {
              v68 += 4;
              if ( v69 == v68 )
                goto LABEL_149;
            }
            if ( v69 != v68 )
            {
              memmove(v68, v68 + 4, v69 - v68 - 4);
              --*(_QWORD *)(a1 + 464);
            }
          }
LABEL_149:
          v63 = *v21;
          if ( (*v21 & 2) != 0 )
          {
            v71 = v21[2];
          }
          else
          {
            v70 = v21[1];
            if ( (*(_BYTE *)v70 & 2) != 0 )
            {
              v71 = v63 & 0xFFFFFFFFFFFFFFFCLL;
              v102 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v102 & 2) == 0 )
              {
                v103 = v21;
                do
                {
                  if ( v103 != *(unsigned __int64 **)(v71 + 8) )
                    break;
                  v103 = (unsigned __int64 *)v71;
                  v104 = v102 & 0xFFFFFFFFFFFFFFFCLL;
                  v102 = *(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFFCLL);
                  v71 = v104;
                }
                while ( (v102 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v71 = v70;
                v70 = *(_QWORD *)(v70 + 16);
              }
              while ( (*(_BYTE *)v70 & 2) == 0 );
            }
          }
          if ( !v21 )
            continue;
          break;
        }
        v72 = (__int64 *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v63 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_162;
        if ( (*(_BYTE *)(v63 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          continue;
        break;
      }
      v73 = *(_QWORD *)(v71 + 24);
      while ( 2 )
      {
        if ( v73 < v72[3] )
        {
          v72 = (__int64 *)v72[1];
          goto LABEL_158;
        }
        if ( v73 > v72[3] )
        {
          v72 = (__int64 *)v72[2];
LABEL_158:
          if ( (*(_BYTE *)v72 & 2) != 0 )
          {
            if ( (v63 & 2) == 0 )
              goto LABEL_139;
            goto LABEL_160;
          }
          continue;
        }
        break;
      }
      if ( v72 == (__int64 *)v21 )
        continue;
      break;
    }
LABEL_162:
    v122.m128i_i64[0] = (__int64)v21;
    v14 = &v122;
    v122.m128i_i64[1] = v115;
    sub_22F840((unsigned __int64 **)&v122, v72);
    v115 = v122.m128i_i64[1];
    v21 = (unsigned __int64 *)v122.m128i_i64[0];
    if ( v122.m128i_i64[1] )
    {
      v63 = *(_QWORD *)v122.m128i_i64[0];
      continue;
    }
    break;
  }
LABEL_164:
  v32 = *(_QWORD *)(a1 + 144);
  v111 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( v21 && v115 )
  {
LABEL_166:
    v33 = (unsigned __int64 *)v21[1];
    if ( v21 != v33 )
      goto LABEL_167;
  }
LABEL_102:
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 944) + 16LL) )
  {
LABEL_51:
    v33 = v21;
    goto LABEL_52;
  }
LABEL_55:
  v34 = *(_DWORD *)(a1 + 68);
  if ( v34 > 0 )
    sub_36DBC0(a1, v32, *(_QWORD *)(a1 + 144) + v34, *(_DWORD *)(a1 + 440), v119 == 1, 0.0, a5);
  if ( v125 )
  {
    *(_QWORD *)&v126 = 0;
    qfree(v125);
  }
  qfree(v123);
  if ( !v21 )
    goto LABEL_80;
  if ( !v115 )
    goto LABEL_79;
  v35 = *v21;
  v36 = (__int64 *)(*v21 & 0xFFFFFFFFFFFFFFFCLL);
  v37 = *v36;
  if ( (*v36 & 2) != 0 )
    goto LABEL_79;
  v38 = (__int64 *)v36[1];
  v39 = *v38;
  if ( (*v38 & 2) != 0 )
  {
    v42 = v36[2];
    if ( (*(_BYTE *)v42 & 2) == 0 )
      goto LABEL_70;
LABEL_255:
    *v36 = v37 | 2;
    goto LABEL_77;
  }
  v40 = (__int64 *)v38[1];
  if ( (*(_BYTE *)v40 & 2) != 0 )
  {
    v41 = (__int64 *)v38[2];
    if ( (*(_BYTE *)v41 & 2) == 0 )
    {
LABEL_65:
      sub_36A410(v41);
      goto LABEL_66;
    }
    goto LABEL_264;
  }
  sub_36A410(v40);
  v41 = (__int64 *)v38[2];
  if ( (*(_BYTE *)v41 & 2) == 0 )
    goto LABEL_65;
LABEL_66:
  v39 = *v38;
  if ( (*v38 & 2) == 0 )
LABEL_264:
    *v38 = v39 | 2;
  if ( v38 )
    qfree((__int64)v38);
  v42 = v36[2];
  if ( (*(_BYTE *)v42 & 2) == 0 )
  {
LABEL_70:
    v43 = *(__int64 **)(v42 + 8);
    if ( (*(_BYTE *)v43 & 2) != 0 )
    {
      v44 = *(__int64 **)(v42 + 16);
      if ( (*(_BYTE *)v44 & 2) == 0 )
      {
LABEL_72:
        sub_36A410(v44);
        goto LABEL_73;
      }
      v45 = *(_QWORD *)v42;
    }
    else
    {
      sub_36A410(v43);
      v44 = *(__int64 **)(v42 + 16);
      if ( (*(_BYTE *)v44 & 2) == 0 )
        goto LABEL_72;
LABEL_73:
      v45 = *(_QWORD *)v42;
      if ( (*(_QWORD *)v42 & 2) != 0 )
      {
LABEL_74:
        if ( v42 )
          qfree(v42);
        goto LABEL_76;
      }
    }
    *(_QWORD *)v42 = v45 | 2;
    goto LABEL_74;
  }
LABEL_76:
  v37 = *v36;
  if ( (*v36 & 2) == 0 )
    goto LABEL_255;
LABEL_77:
  if ( v35 > 3 )
    qfree((__int64)v36);
LABEL_79:
  qfree((__int64)v21);
LABEL_80:
  if ( v139 )
  {
    v140 = 0;
    qfree(v139);
  }
  if ( v137 )
  {
    v138 = 0;
    qfree(v137);
  }
  if ( v135 )
  {
    v136 = 0;
    qfree(v135);
  }
  if ( v133 )
  {
    v134 = 0;
    qfree(v133);
  }
  return v141 - __readfsqword(0x28u);
}

