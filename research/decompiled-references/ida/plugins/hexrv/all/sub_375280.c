unsigned __int64 __fastcall sub_375280(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __m128i *v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __m128i *v18; // rax
  unsigned __int64 *v19; // rbp
  __int32 v20; // r15d
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // edx
  unsigned int v29; // eax
  __int64 v30; // r15
  unsigned __int64 *v31; // r12
  int v32; // eax
  unsigned __int64 v33; // r13
  __int64 *v34; // r12
  __int64 v35; // rax
  __int64 *v36; // rbx
  __int64 v37; // rdx
  __int64 *v38; // rdi
  __int64 *v39; // rdi
  __int64 *v40; // rbx
  __int64 *v41; // rdi
  __int64 *v42; // rdi
  __int64 v43; // rax
  int v45; // eax
  bool v46; // al
  __int64 v47; // rcx
  _QWORD *v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int32 *v51; // rsi
  __int64 v52; // rcx
  __int32 *v53; // rdx
  __int32 *v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rax
  bool v57; // dl
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  int v60; // r15d
  __int64 v61; // rdx
  int v62; // eax
  char *v63; // rdi
  char *v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 *v67; // rsi
  __int64 v68; // rdx
  int v69; // ecx
  __int64 v70; // rdx
  int v71; // r10d
  int v72; // r10d
  __int64 v73; // r15
  _DWORD *v74; // rsi
  __int64 v75; // rdx
  _DWORD *v76; // rcx
  _DWORD *v77; // rax
  int v78; // eax
  unsigned int v79; // eax
  unsigned __int64 *v80; // rdx
  __int64 v81; // rdx
  int v82; // eax
  char *v83; // rdi
  char *v84; // rdx
  unsigned __int64 *v85; // rax
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rsi
  __int64 v88; // rdx
  _DWORD *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  unsigned __int64 *v94; // rsi
  unsigned __int64 v95; // rcx
  __int64 v96; // rdx
  unsigned __int64 *v97; // rdi
  unsigned __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rdx
  char v101; // [rsp+4h] [rbp-194h]
  int v102; // [rsp+4h] [rbp-194h]
  unsigned __int64 v103; // [rsp+8h] [rbp-190h]
  __int64 v104; // [rsp+10h] [rbp-188h]
  int v105; // [rsp+18h] [rbp-180h]
  bool v106; // [rsp+18h] [rbp-180h]
  __int64 *v107; // [rsp+20h] [rbp-178h]
  __int64 v108; // [rsp+20h] [rbp-178h]
  __int64 v109; // [rsp+28h] [rbp-170h]
  unsigned __int64 v110; // [rsp+30h] [rbp-168h]
  bool v111; // [rsp+38h] [rbp-160h]
  __int64 v112; // [rsp+38h] [rbp-160h]
  int v113; // [rsp+40h] [rbp-158h]
  _QWORD *v114; // [rsp+50h] [rbp-148h]
  __int64 v115; // [rsp+58h] [rbp-140h]
  __m128i v116; // [rsp+60h] [rbp-138h] BYREF
  __int64 v117; // [rsp+70h] [rbp-128h] BYREF
  __int64 v118; // [rsp+78h] [rbp-120h]
  __int64 v119; // [rsp+80h] [rbp-118h] BYREF
  __int128 v120; // [rsp+88h] [rbp-110h]
  __m128i v121; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 *v122; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v123; // [rsp+B8h] [rbp-E0h]
  char v124; // [rsp+C8h] [rbp-D0h]
  int v125; // [rsp+CCh] [rbp-CCh]
  char v126[8]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-C0h]
  __int64 v128; // [rsp+E0h] [rbp-B8h]
  __int64 v129; // [rsp+F0h] [rbp-A8h]
  __int64 v130; // [rsp+F8h] [rbp-A0h]
  __int64 v131; // [rsp+128h] [rbp-70h]
  __int64 v132; // [rsp+130h] [rbp-68h]
  __int64 v133; // [rsp+140h] [rbp-58h]
  __int64 v134; // [rsp+148h] [rbp-50h]
  unsigned __int64 v135; // [rsp+158h] [rbp-40h]

  v6 = a2;
  v135 = __readfsqword(0x28u);
  v7 = *(_QWORD **)(a1 + 936);
  if ( (unsigned __int8)sub_19B210(v7) )
  {
    if ( *(int *)(a1 + 68) > 0 || (*(_BYTE *)(a1 + 4) & 0x20) != 0 )
    {
      if ( !under_debugger )
        sub_37DDE0(52038);
LABEL_278:
      BUG();
    }
    v8 = *(_QWORD **)(a1 + 944);
    if ( *(_BYTE *)(*(_QWORD *)(*v8 + 1496LL) + 148LL) )
    {
      v9 = v8[1];
      v10 = v8[3];
      if ( v9 <= v10 )
        v10 = v9;
      v103 = v10;
    }
    else
    {
      v103 = -1;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
    if ( a2 <= 0x10 )
    {
      v55 = getinf();
      sub_CCBF0((__int64)v126, *(_QWORD *)(a1 + 1496), v55);
    }
    else
    {
      sub_CCBF0((__int64)v126, *(_QWORD *)(a1 + 1496), a2);
    }
    v110 = v11;
    v6 = 64;
    v114 = v7 + 3;
    goto LABEL_11;
  }
  v48 = *(_QWORD **)(a1 + 944);
  if ( !*(_BYTE *)(*(_QWORD *)(*v48 + 1496LL) + 148LL) )
  {
    if ( a2 > 0x10 )
    {
      sub_CCBF0((__int64)v126, *(_QWORD *)(a1 + 1496), a2);
      v110 = -1;
LABEL_128:
      v114 = nullptr;
      v103 = v110;
      goto LABEL_11;
    }
    v110 = -1;
LABEL_224:
    v6 = getinf();
    sub_CCBF0((__int64)v126, *(_QWORD *)(a1 + 1496), v6);
    goto LABEL_128;
  }
  v49 = v48[1];
  v50 = v48[3];
  if ( v49 <= v50 )
    v50 = v49;
  v110 = v50;
  if ( a2 <= 0x10 )
    goto LABEL_224;
  sub_CCBF0((__int64)v126, *(_QWORD *)(a1 + 1496), a2);
  v114 = nullptr;
  v103 = v110;
LABEL_11:
  v12 = (__m128i *)sub_364C10((__int64)v126, a1, v6);
  if ( a3 )
  {
    if ( !*(_QWORD *)(a1 + 464) )
      goto LABEL_21;
    v13 = 0;
    while ( 1 )
    {
      v14 = sub_138DC0((_QWORD *)a1, v13);
      if ( *(_DWORD *)v14 == 2 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        v16 = *(_DWORD **)v15;
        v17 = *(_QWORD *)v15 + 24LL * *(_QWORD *)(v15 + 8);
        if ( *(_QWORD *)v15 == v17 )
        {
LABEL_20:
          sub_7DB00((__int64 *)(a1 + 456), v13);
LABEL_21:
          v117 = 0;
          v118 = 0;
          v119 = 0;
          v120 = 0;
          if ( (*(_BYTE *)a1 & 8) == 0 )
          {
            v101 = 0;
            goto LABEL_23;
          }
LABEL_99:
          v113 = -1;
          v31 = nullptr;
          v109 = 0;
          v30 = *(_QWORD *)(a1 + 144);
          v105 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
LABEL_100:
          if ( !v114 )
          {
            v19 = v31;
            goto LABEL_102;
          }
LABEL_52:
          if ( v30 < v110 )
            sub_368940(a1, (v30 + v105 - 1) & -v105, v110, -1, v113 == 1);
          v19 = v31;
          goto LABEL_55;
        }
        while ( (unsigned int)(*v16 - 3) > 1 )
        {
          v16 += 6;
          if ( (_DWORD *)v17 == v16 )
            goto LABEL_20;
        }
      }
      else if ( (unsigned int)(*(_DWORD *)v14 - 3) > 1 )
      {
        goto LABEL_20;
      }
      if ( ++v13 >= *(_QWORD *)(a1 + 464) )
        goto LABEL_21;
    }
  }
  if ( *(_QWORD *)(a1 + 456) )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree();
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  if ( (*(_BYTE *)a1 & 8) != 0 )
    goto LABEL_99;
  v101 = 1;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 1 )
  {
    v56 = *(int *)(a1 + 480);
    if ( (_DWORD)v56 != -1 )
      v101 = sub_364B80(*(_QWORD *)(a1 + 432) + 104 * v56) ^ 1;
  }
LABEL_23:
  v109 = *(_QWORD *)(a1 + 440);
  if ( !v109 )
  {
    if ( !v114 )
    {
      v30 = *(_QWORD *)(a1 + 144);
      v19 = nullptr;
      v113 = -1;
      v105 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
      goto LABEL_102;
    }
    v113 = -1;
    v30 = *(_QWORD *)(a1 + 144);
    v105 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    goto LABEL_248;
  }
  v18 = nullptr;
  v109 = 0;
  if ( v114 )
    v18 = v12;
  v113 = -1;
  v19 = nullptr;
  v20 = 0;
  v107 = (__int64 *)v18;
  v21 = 0;
  do
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(a1 + 432) + 104 * v21;
      if ( *(_DWORD *)v22 == 2 )
        break;
      if ( (unsigned int)(*(_DWORD *)v22 - 3) > 1 )
        goto LABEL_91;
      if ( !a3 )
        goto LABEL_36;
LABEL_29:
      v21 = ++v20;
      if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 440) )
        goto LABEL_48;
    }
    v23 = *(_QWORD *)(v22 + 8);
    v24 = *(_DWORD **)v23;
    v25 = *(_QWORD *)v23 + 24LL * *(_QWORD *)(v23 + 8);
    if ( *(_QWORD *)v23 == v25 )
    {
LABEL_91:
      v12 = &v116;
      v45 = sub_1BEE80((_DWORD *)v22);
      if ( v45 == -1 )
        goto LABEL_94;
      if ( v45 >= v110 )
        goto LABEL_94;
      v104 = v45;
      v12 = &v116;
      v46 = sub_224090(a1, v22);
      v47 = v104;
      if ( !v46 )
        goto LABEL_94;
      v106 = 0;
      goto LABEL_121;
    }
    while ( 1 )
    {
      LODWORD(v12) = *v24;
      if ( (unsigned int)(*v24 - 3) <= 1 )
        break;
      v24 += 6;
      if ( (_DWORD *)v25 == v24 )
        goto LABEL_91;
    }
    if ( a3 )
      goto LABEL_29;
LABEL_36:
    if ( !v101 )
      goto LABEL_94;
    if ( *(_DWORD *)(v22 + 92) )
      goto LABEL_94;
    v121.m128i_i64[1] = a1;
    v121.m128i_i64[0] = (__int64)&off_4B8B60;
    v12 = &v116;
    v122 = v107;
    if ( (unsigned int)for_all_arglocs() )
      goto LABEL_94;
    v12 = &v116;
    v26 = sub_1BEE80((_DWORD *)v22);
    if ( v26 == -1 )
      goto LABEL_42;
    if ( v26 >= v110 )
    {
      if ( *(_QWORD *)(a1 + 144) > v26 )
        goto LABEL_94;
LABEL_42:
      v111 = 0;
      goto LABEL_43;
    }
    v112 = v26;
    v106 = sub_224090(a1, v22);
    v47 = v112;
    if ( !v106 )
    {
      if ( v112 < *(_QWORD *)(a1 + 144) )
        goto LABEL_94;
      goto LABEL_42;
    }
LABEL_121:
    v12 = &v116;
    v121.m128i_i64[0] = v47;
    v115 = v47;
    v121.m128i_i32[2] = v20;
    v116.m128i_i64[0] = (__int64)v19;
    v116.m128i_i64[1] = v109;
    sub_374FC0(&v116, &v121);
    v19 = (unsigned __int64 *)v116.m128i_i64[0];
    v111 = v57;
    v109 = v116.m128i_i64[1];
    if ( !v57 )
    {
      if ( !(unsigned __int8)sub_1E9E60((unsigned __int8 *)a1) )
      {
        if ( !under_debugger )
          sub_37DDE0(50213);
        goto LABEL_278;
      }
      if ( !v106 || v115 < *(_QWORD *)(a1 + 144) )
      {
LABEL_94:
        v27 = *(_DWORD *)(v22 + 24);
LABEL_95:
        BYTE1(v27) &= 0x7Eu;
        *(_DWORD *)(v22 + 24) = v27 | 0x100000;
        goto LABEL_29;
      }
      goto LABEL_43;
    }
    if ( sub_118680(*(_DWORD *)(v22 + 88)) )
    {
      if ( v113 != -1 )
      {
        if ( !v106 || v115 < *(_QWORD *)(a1 + 144) )
          goto LABEL_134;
LABEL_234:
        v111 = v106;
        goto LABEL_43;
      }
      v28 = *(_DWORD *)(v22 + 24);
      if ( (v28 & 0x80000) != 0 )
      {
        if ( !v106 || v115 < *(_QWORD *)(a1 + 144) )
          goto LABEL_47;
        goto LABEL_234;
      }
      if ( (get_tinfo_property() & 0xF) == 9 )
      {
        if ( !v106 || *(_QWORD *)(a1 + 144) > v115 )
        {
          v113 = 1;
          v28 = *(_DWORD *)(v22 + 24);
          goto LABEL_47;
        }
        v113 = 1;
        v111 = v106;
        goto LABEL_43;
      }
      if ( !v106 || v115 < *(_QWORD *)(a1 + 144) )
        goto LABEL_253;
    }
    else if ( !v106 || *(_QWORD *)(a1 + 144) > v115 )
    {
LABEL_253:
      v113 = 0;
      v28 = *(_DWORD *)(v22 + 24);
      goto LABEL_47;
    }
    v113 = 0;
LABEL_43:
    v12 = &v121;
    v121 = 0u;
    v122 = nullptr;
    v123 = 0;
    sub_1BED00(v22, a1, (__int64)&v121, 0);
    if ( !(unsigned __int8)sub_60400(&v121, &v117) )
    {
      v12 = (__m128i *)&v122;
      if ( !(unsigned __int8)sub_313370((unsigned __int64 **)&v122, (__int64)&v119) )
      {
        v51 = *(__int32 **)(a1 + 456);
        v52 = *(_QWORD *)(a1 + 464);
        v53 = &v51[v52];
        if ( v51 != v53 )
        {
          v54 = *(__int32 **)(a1 + 456);
          while ( *v54 != v20 )
          {
            if ( v53 == ++v54 )
              goto LABEL_129;
          }
          if ( v53 != v54 )
            sub_364BF0();
        }
LABEL_129:
        if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v52 + 1) )
        {
          v99 = qvector_reserve();
          v100 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v99;
          v53 = (__int32 *)(v99 + 4 * v100);
        }
        *v53 = v20;
        ++*(_QWORD *)(a1 + 464);
        sub_5FF00(&v117, v121.m128i_i64);
        sub_311BB0(&v119, &v122);
        if ( v122 )
        {
          *(_QWORD *)&v123 = 0;
          qfree();
          qfree();
          v28 = *(_DWORD *)(v22 + 24);
          goto LABEL_47;
        }
        qfree();
LABEL_134:
        v28 = *(_DWORD *)(v22 + 24);
        goto LABEL_47;
      }
    }
    if ( v122 )
    {
      *(_QWORD *)&v123 = 0;
      qfree();
    }
    qfree();
    v27 = *(_DWORD *)(v22 + 24);
    v28 = v27;
    if ( !v111 )
      goto LABEL_95;
LABEL_47:
    ++v20;
    v29 = v28 & 0xFFEFFFFF;
    BYTE1(v29) = BYTE1(v28) | 1;
    *(_DWORD *)(v22 + 24) = v29;
    v21 = v20;
  }
  while ( (unsigned __int64)v20 < *(_QWORD *)(a1 + 440) );
LABEL_48:
  if ( v114 )
  {
    v30 = *(_QWORD *)(a1 + 144);
    v105 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    if ( v19 )
    {
      if ( !v109 )
        goto LABEL_51;
      v31 = (unsigned __int64 *)v19[1];
      if ( v19 == v31 )
        goto LABEL_52;
LABEL_167:
      v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
           & (*(_QWORD *)(a1 + 664) + *(_QWORD *)(a1 + 672) - *(_QWORD *)(a1 + 1440));
      v69 = 0;
      while ( 1 )
      {
        v70 = v31[3];
        v71 = *((_DWORD *)v31 + 8);
        if ( v70 >= v103 )
        {
          LODWORD(v12) = 1;
LABEL_196:
          v81 = *(_QWORD *)(a1 + 432) + 104LL * v71;
          v82 = *(_DWORD *)(v81 + 24);
          BYTE1(v82) &= 0x7Eu;
          *(_DWORD *)(v81 + 24) = v82 | 0x100000;
          v83 = *(char **)(a1 + 456);
          v84 = &v83[4 * *(_QWORD *)(a1 + 464)];
          if ( v83 != v84 )
          {
            while ( v71 != *(_DWORD *)v83 )
            {
              v83 += 4;
              if ( v84 == v83 )
                goto LABEL_202;
            }
            if ( v84 != v83 )
            {
              memmove(v83, v83 + 4, v84 - v83 - 4);
              --*(_QWORD *)(a1 + 464);
            }
          }
LABEL_202:
          v69 = (int)v12;
          goto LABEL_190;
        }
        LOBYTE(v12) = v108 <= v70 && v70 != v30;
        if ( (_BYTE)v12 )
          goto LABEL_196;
        LODWORD(v12) = v69;
        if ( (unsigned __int8)v69 | (v70 < v30) )
          goto LABEL_196;
        v102 = *((_DWORD *)v31 + 8);
        sub_368940(a1, v30, v70, v71, v113 == 1);
        v72 = v102;
        v73 = *(_QWORD *)(a1 + 432) + 104LL * v102;
        if ( *(_DWORD *)v73 == 2 )
        {
          v88 = *(_QWORD *)(v73 + 8);
          v89 = *(_DWORD **)v88;
          v90 = *(_QWORD *)v88 + 24LL * *(_QWORD *)(v88 + 8);
          if ( *(_QWORD *)v88 == v90 )
          {
LABEL_173:
            v74 = *(_DWORD **)(a1 + 456);
            v75 = *(_QWORD *)(a1 + 464);
            v76 = &v74[v75];
            if ( v74 != v76 )
            {
              v77 = *(_DWORD **)(a1 + 456);
              while ( v102 != *v77 )
              {
                if ( v76 == ++v77 )
                  goto LABEL_180;
              }
              if ( v76 != v77 )
              {
                if ( !under_debugger )
                  sub_37DDE0(51603);
                goto LABEL_278;
              }
            }
LABEL_180:
            if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v75 + 1) )
            {
              v91 = qvector_reserve();
              v92 = *(_QWORD *)(a1 + 464);
              *(_QWORD *)(a1 + 456) = v91;
              v72 = v102;
              v76 = (_DWORD *)(v91 + 4 * v92);
            }
            *v76 = v72;
            ++*(_QWORD *)(a1 + 464);
            goto LABEL_183;
          }
          while ( (unsigned int)(*v89 - 3) > 1 )
          {
            v89 += 6;
            if ( (_DWORD *)v90 == v89 )
              goto LABEL_173;
          }
        }
        else if ( (unsigned int)(*(_DWORD *)v73 - 3) > 1 )
        {
          goto LABEL_173;
        }
LABEL_183:
        v12 = &v116;
        v78 = sub_1BEF40((_DWORD *)v73, *(_DWORD *)(v73 + 88));
        v30 = v78;
        if ( v78 <= 0 )
        {
          if ( !under_debugger )
            sub_37DDE0(51583);
          goto LABEL_278;
        }
        v79 = *(_DWORD *)(a1 + 72);
        if ( v79 <= 0x10 )
          v79 = getinf();
        if ( v79 == 176 || v79 == 256 || (v12 = &v116, v69 = getinf_flag(), (_BYTE)v69) )
          v69 = 0;
        else
          v30 = (v105 - 1 + v30) & -v105;
LABEL_190:
        if ( (*v31 & 2) != 0 )
          goto LABEL_193;
        v80 = (unsigned __int64 *)v31[2];
        if ( (*(_BYTE *)v80 & 2) == 0 )
        {
          do
          {
            v31 = v80;
            v80 = (unsigned __int64 *)v80[1];
          }
          while ( (*(_BYTE *)v80 & 2) == 0 );
LABEL_193:
          if ( v31 == v19 )
            goto LABEL_100;
          continue;
        }
        v85 = (unsigned __int64 *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
        v86 = *v85;
        if ( (*v85 & 2) != 0 )
        {
LABEL_205:
          v31 = v85;
          if ( v85 == v19 )
            goto LABEL_100;
        }
        else
        {
          while ( 1 )
          {
            if ( (unsigned __int64 *)v85[2] != v31 )
              goto LABEL_205;
            v31 = v85;
            v87 = v86 & 0xFFFFFFFFFFFFFFFCLL;
            v86 = *(_QWORD *)(v86 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v86 & 2) != 0 )
              break;
            v85 = (unsigned __int64 *)v87;
          }
          v31 = (unsigned __int64 *)v87;
          if ( (unsigned __int64 *)v87 == v19 )
            goto LABEL_100;
        }
      }
    }
LABEL_248:
    v31 = nullptr;
    goto LABEL_52;
  }
  if ( *(_DWORD *)(a1 + 68) )
    goto LABEL_164;
  if ( !v109 )
  {
    v30 = *(_QWORD *)(a1 + 144);
    v105 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    goto LABEL_102;
  }
  v58 = *v19;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          if ( (v58 & 2) == 0 )
          {
LABEL_139:
            v59 = v19[1];
            if ( (*(_BYTE *)v59 & 2) != 0 )
            {
              v59 = v58 & 0xFFFFFFFFFFFFFFFCLL;
              v93 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v93 & 2) == 0 )
              {
                v94 = v19;
                do
                {
                  if ( *(unsigned __int64 **)(v59 + 8) != v94 )
                    break;
                  v94 = (unsigned __int64 *)v59;
                  v95 = v93 & 0xFFFFFFFFFFFFFFFCLL;
                  v93 = *(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFFCLL);
                  v59 = v95;
                }
                while ( (v93 & 2) == 0 );
              }
            }
            else
            {
              while ( (**(_BYTE **)(v59 + 16) & 2) == 0 )
                v59 = *(_QWORD *)(v59 + 16);
            }
            goto LABEL_141;
          }
LABEL_160:
          v59 = v19[2];
LABEL_141:
          v60 = *(_DWORD *)(v59 + 32);
          v12 = &v116;
          v121.m128i_i64[1] = 0;
          v122 = nullptr;
          v123 = 0u;
          v124 = 0;
          v121.m128i_i64[0] = (__int64)off_4B8B88;
          v125 = v60;
          if ( (unsigned int)sub_11B6F0(a1, (__int64)&v121)
            || (v61 = *(_QWORD *)(a1 + 432) + 104LL * v60, v62 = *(_DWORD *)(v61 + 24), (v62 & 0x8000) != 0) )
          {
            v30 = *(_QWORD *)(a1 + 144);
            v105 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
            if ( v19 )
              goto LABEL_166;
            goto LABEL_102;
          }
          BYTE1(v62) &= 0x7Eu;
          *(_DWORD *)(v61 + 24) = v62 | 0x100000;
          v63 = *(char **)(a1 + 456);
          v64 = &v63[4 * *(_QWORD *)(a1 + 464)];
          if ( v63 != v64 )
          {
            while ( v60 != *(_DWORD *)v63 )
            {
              v63 += 4;
              if ( v64 == v63 )
                goto LABEL_149;
            }
            if ( v64 != v63 )
            {
              memmove(v63, v63 + 4, v64 - v63 - 4);
              --*(_QWORD *)(a1 + 464);
            }
          }
LABEL_149:
          v58 = *v19;
          if ( (*v19 & 2) != 0 )
          {
            v66 = v19[2];
          }
          else
          {
            v65 = v19[1];
            if ( (*(_BYTE *)v65 & 2) != 0 )
            {
              v66 = v58 & 0xFFFFFFFFFFFFFFFCLL;
              v96 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v96 & 2) == 0 )
              {
                v97 = v19;
                do
                {
                  if ( v97 != *(unsigned __int64 **)(v66 + 8) )
                    break;
                  v97 = (unsigned __int64 *)v66;
                  v98 = v96 & 0xFFFFFFFFFFFFFFFCLL;
                  v96 = *(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFFCLL);
                  v66 = v98;
                }
                while ( (v96 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v66 = v65;
                v65 = *(_QWORD *)(v65 + 16);
              }
              while ( (*(_BYTE *)v65 & 2) == 0 );
            }
          }
          if ( !v19 )
            continue;
          break;
        }
        v67 = (__int64 *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v58 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_162;
        if ( (*(_BYTE *)(v58 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          continue;
        break;
      }
      v68 = *(_QWORD *)(v66 + 24);
      while ( 2 )
      {
        if ( v68 < v67[3] )
        {
          v67 = (__int64 *)v67[1];
          goto LABEL_158;
        }
        if ( v68 > v67[3] )
        {
          v67 = (__int64 *)v67[2];
LABEL_158:
          if ( (*(_BYTE *)v67 & 2) != 0 )
          {
            if ( (v58 & 2) == 0 )
              goto LABEL_139;
            goto LABEL_160;
          }
          continue;
        }
        break;
      }
      if ( v67 == (__int64 *)v19 )
        continue;
      break;
    }
LABEL_162:
    v116.m128i_i64[0] = (__int64)v19;
    v12 = &v116;
    v116.m128i_i64[1] = v109;
    sub_22AC40((unsigned __int64 **)&v116, v67);
    v109 = v116.m128i_i64[1];
    v19 = (unsigned __int64 *)v116.m128i_i64[0];
    if ( v116.m128i_i64[1] )
    {
      v58 = *(_QWORD *)v116.m128i_i64[0];
      continue;
    }
    break;
  }
LABEL_164:
  v30 = *(_QWORD *)(a1 + 144);
  v105 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( v19 && v109 )
  {
LABEL_166:
    v31 = (unsigned __int64 *)v19[1];
    if ( v19 != v31 )
      goto LABEL_167;
  }
LABEL_102:
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 944) + 16LL) )
  {
LABEL_51:
    v31 = v19;
    goto LABEL_52;
  }
LABEL_55:
  v32 = *(_DWORD *)(a1 + 68);
  if ( v32 > 0 )
    sub_368940(a1, v30, *(_QWORD *)(a1 + 144) + v32, *(_DWORD *)(a1 + 440), v113 == 1);
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree();
  }
  qfree();
  if ( !v19 )
    goto LABEL_80;
  if ( !v109 )
    goto LABEL_79;
  v33 = *v19;
  v34 = (__int64 *)(*v19 & 0xFFFFFFFFFFFFFFFCLL);
  v35 = *v34;
  if ( (*v34 & 2) != 0 )
    goto LABEL_79;
  v36 = (__int64 *)v34[1];
  v37 = *v36;
  if ( (*v36 & 2) != 0 )
  {
    v40 = (__int64 *)v34[2];
    if ( (*(_BYTE *)v40 & 2) == 0 )
      goto LABEL_70;
LABEL_255:
    *v34 = v35 | 2;
    goto LABEL_77;
  }
  v38 = (__int64 *)v36[1];
  if ( (*(_BYTE *)v38 & 2) != 0 )
  {
    v39 = (__int64 *)v36[2];
    if ( (*(_BYTE *)v39 & 2) == 0 )
    {
LABEL_65:
      sub_365190(v39);
      goto LABEL_66;
    }
    goto LABEL_264;
  }
  sub_365190(v38);
  v39 = (__int64 *)v36[2];
  if ( (*(_BYTE *)v39 & 2) == 0 )
    goto LABEL_65;
LABEL_66:
  v37 = *v36;
  if ( (*v36 & 2) == 0 )
LABEL_264:
    *v36 = v37 | 2;
  if ( v36 )
    qfree();
  v40 = (__int64 *)v34[2];
  if ( (*(_BYTE *)v40 & 2) == 0 )
  {
LABEL_70:
    v41 = (__int64 *)v40[1];
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
      v42 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v42 & 2) == 0 )
      {
LABEL_72:
        sub_365190(v42);
        goto LABEL_73;
      }
      v43 = *v40;
    }
    else
    {
      sub_365190(v41);
      v42 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v42 & 2) == 0 )
        goto LABEL_72;
LABEL_73:
      v43 = *v40;
      if ( (*v40 & 2) != 0 )
      {
LABEL_74:
        if ( v40 )
          qfree();
        goto LABEL_76;
      }
    }
    *v40 = v43 | 2;
    goto LABEL_74;
  }
LABEL_76:
  v35 = *v34;
  if ( (*v34 & 2) == 0 )
    goto LABEL_255;
LABEL_77:
  if ( v33 > 3 )
    qfree();
LABEL_79:
  qfree();
LABEL_80:
  if ( v133 )
  {
    v134 = 0;
    qfree();
  }
  if ( v131 )
  {
    v132 = 0;
    qfree();
  }
  if ( v129 )
  {
    v130 = 0;
    qfree();
  }
  if ( v127 )
  {
    v128 = 0;
    qfree();
  }
  return v135 - __readfsqword(0x28u);
}

