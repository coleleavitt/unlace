__int64 __fastcall sub_139E10(__int128 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // r10
  int **v14; // r13
  char v15; // si
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // r12
  bool v19; // r11
  int v20; // ecx
  __int64 v21; // rax
  char *v22; // rax
  char v23; // dl
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  int *v26; // r12
  __int64 v27; // r15
  unsigned __int64 *v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _DWORD *v32; // r9
  __int64 v33; // r10
  int v34; // r8d
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // r13
  char *v46; // rbx
  char *v47; // rdx
  int v48; // eax
  int v49; // eax
  int *v50; // r12
  __int64 i; // r13
  _DWORD *v52; // rcx
  int v53; // r15d
  _DWORD *v54; // rax
  unsigned __int64 v55; // rdx
  _QWORD *v56; // rcx
  char *v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  unsigned int *v60; // rbx
  unsigned int *v61; // rax
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // r8
  _DWORD *v65; // rcx
  _DWORD *v66; // rax
  _DWORD *v67; // rdx
  _DWORD *v68; // rax
  _DWORD *v69; // rax
  __int64 v70; // rdi
  int *v71; // rcx
  __int64 v72; // r8
  __int64 *v73; // rsi
  __int64 v74; // r9
  __int64 *v75; // r15
  char v76; // al
  _QWORD *v77; // rdx
  unsigned int *v78; // rbx
  unsigned int *v79; // r13
  unsigned int *v80; // rbx
  unsigned int *v81; // r15
  __int64 v82; // rax
  __int64 v83; // r15
  size_t v84; // r14
  _QWORD *v85; // rbx
  _DWORD *v86; // rdx
  char v87; // r15
  __int64 v88; // r14
  int v89; // r13d
  __int64 v90; // rax
  char *v91; // rax
  char v92; // r12
  unsigned __int64 v93; // r14
  __int64 v94; // rax
  _DWORD *v95; // r13
  __int64 v96; // r14
  _DWORD *v97; // rax
  _QWORD *v98; // r12
  _QWORD *v99; // rax
  __int64 v100; // r12
  unsigned __int64 v101; // r13
  __int64 v102; // rdx
  __int64 v103; // rax
  _QWORD *v104; // rdi
  __int64 v105; // r12
  __int64 *v106; // rsi
  __int64 *v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r14
  __int64 *v113; // rax
  __int64 v114; // rax
  __int64 v115; // r12
  unsigned int *v116; // r13
  __int64 *v117; // rbx
  __int64 v118; // rsi
  int v119; // eax
  unsigned int *v120; // rcx
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rdx
  int v125; // eax
  _DWORD **v126; // [rsp+8h] [rbp-278h]
  _QWORD *v127; // [rsp+10h] [rbp-270h]
  char v128; // [rsp+2Eh] [rbp-252h]
  unsigned __int8 v129; // [rsp+2Fh] [rbp-251h]
  __int64 v130; // [rsp+30h] [rbp-250h]
  unsigned int *v131; // [rsp+30h] [rbp-250h]
  __int64 v132; // [rsp+30h] [rbp-250h]
  __int64 v133; // [rsp+38h] [rbp-248h]
  unsigned int *v134; // [rsp+40h] [rbp-240h]
  _DWORD *v135; // [rsp+40h] [rbp-240h]
  unsigned __int64 v136; // [rsp+40h] [rbp-240h]
  int v137; // [rsp+48h] [rbp-238h]
  unsigned __int64 v138; // [rsp+48h] [rbp-238h]
  size_t na; // [rsp+50h] [rbp-230h]
  size_t nb; // [rsp+50h] [rbp-230h]
  unsigned int nc; // [rsp+50h] [rbp-230h]
  bool n; // [rsp+50h] [rbp-230h]
  __int64 nd; // [rsp+50h] [rbp-230h]
  __int64 v144; // [rsp+58h] [rbp-228h]
  __int64 v145; // [rsp+60h] [rbp-220h]
  int v146; // [rsp+68h] [rbp-218h]
  int v147; // [rsp+68h] [rbp-218h]
  int v148; // [rsp+68h] [rbp-218h]
  unsigned int v149; // [rsp+68h] [rbp-218h]
  __int64 *v150; // [rsp+68h] [rbp-218h]
  unsigned int *v151; // [rsp+68h] [rbp-218h]
  __int64 v152; // [rsp+70h] [rbp-210h]
  __int128 v153; // [rsp+78h] [rbp-208h]
  _DWORD *v154; // [rsp+90h] [rbp-1F0h]
  __int128 v155; // [rsp+98h] [rbp-1E8h]
  __int64 v156[2]; // [rsp+B0h] [rbp-1D0h] BYREF
  void *v157; // [rsp+C0h] [rbp-1C0h]
  __int128 v158; // [rsp+C8h] [rbp-1B8h]
  __int64 v159[2]; // [rsp+E0h] [rbp-1A0h] BYREF
  void *src; // [rsp+F0h] [rbp-190h] BYREF
  __int128 v161; // [rsp+F8h] [rbp-188h]
  __int64 v162[2]; // [rsp+110h] [rbp-170h] BYREF
  void *v163; // [rsp+120h] [rbp-160h] BYREF
  __int128 v164; // [rsp+128h] [rbp-158h]
  __int64 v165; // [rsp+140h] [rbp-140h] BYREF
  __int128 v166; // [rsp+148h] [rbp-138h] BYREF
  __int128 v167; // [rsp+158h] [rbp-128h]
  unsigned __int64 v168; // [rsp+168h] [rbp-118h]
  char v169; // [rsp+170h] [rbp-110h]
  _QWORD v170[3]; // [rsp+180h] [rbp-100h] BYREF
  char v171; // [rsp+198h] [rbp-E8h]
  __int64 v172; // [rsp+1A0h] [rbp-E0h]
  char v173; // [rsp+1A8h] [rbp-D8h]
  __int64 (__fastcall **v174)(); // [rsp+1B0h] [rbp-D0h] BYREF
  __int64 v175; // [rsp+1B8h] [rbp-C8h]
  __int64 v176; // [rsp+1C0h] [rbp-C0h]
  __int64 v177; // [rsp+1C8h] [rbp-B8h]
  __int64 v178; // [rsp+1D0h] [rbp-B0h]
  char v179; // [rsp+1D8h] [rbp-A8h]
  unsigned __int8 *v180; // [rsp+1E0h] [rbp-A0h]
  unsigned __int8 *v181; // [rsp+1E8h] [rbp-98h]
  _QWORD *v182; // [rsp+1F0h] [rbp-90h]
  __int64 v183; // [rsp+1F8h] [rbp-88h] BYREF
  __int128 v184; // [rsp+200h] [rbp-80h]
  __int64 v185; // [rsp+210h] [rbp-70h]
  __int128 v186; // [rsp+218h] [rbp-68h]
  char *v187; // [rsp+228h] [rbp-58h]
  __int64 v188; // [rsp+230h] [rbp-50h]
  char v189; // [rsp+238h] [rbp-48h]
  unsigned __int64 v190; // [rsp+248h] [rbp-38h]

  v145 = a1;
  v190 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 14 || *(_BYTE *)a3 != 1 || *(_DWORD *)(a3 + 4) != *(_DWORD *)(a2 + 4) )
  {
    if ( !under_debugger )
      sub_37DDE0(50435);
LABEL_240:
    BUG();
  }
  if ( (**(_DWORD **)(a1 + 64) & 0x100000) != 0 )
    return 0;
  v6 = *((_QWORD *)&a1 + 1);
  v129 = sub_11A870(a2);
  if ( v129 )
    return 0;
  v170[1] = 0;
  v170[0] = off_4B0618;
  v174 = off_4B05F0;
  v182 = v170;
  v170[2] = 0;
  v176 = a1;
  v7 = *(_QWORD *)(a1 + 64);
  v171 = 0;
  v172 = 0;
  v173 = 0;
  v177 = 0;
  v178 = 0;
  v179 = 0;
  v180 = (unsigned __int8 *)a2;
  v181 = (unsigned __int8 *)a3;
  v183 = 0;
  v185 = 0;
  v187 = nullptr;
  v188 = 0;
  v175 = v7;
  v184 = 0;
  v186 = 0;
  sub_1302C0(&v183, a2);
  v189 = 0;
  v152 = 0;
  v153 = 0;
  v8 = sub_62D60(*(_QWORD **)(a1 + 64));
  v133 = sub_10C420(v8, 0);
  if ( !v133 )
  {
    if ( !under_debugger )
      sub_37DDE0(50446);
    goto LABEL_240;
  }
  ++*(_DWORD *)(v133 + 24);
  v9 = sub_62D60(*(_QWORD **)(a1 + 64));
  v144 = sub_10BE80(v9, 0);
  if ( !v144 )
  {
    if ( !under_debugger )
      sub_37DDE0(50446);
    goto LABEL_240;
  }
  ++*(_DWORD *)(v144 + 24);
  v146 = *(_DWORD *)(a1 + 72);
  v10 = *(_QWORD *)v133;
  sub_120CC0(*((_QWORD *)&a1 + 1) + 64LL, (unsigned __int8 *)a3);
  v156[0] = 0;
  *((_QWORD *)&a1 + 1) = v156;
  v156[1] = 0;
  v157 = nullptr;
  v158 = 0;
  sub_11F9E0(a1, a2, 1u, 0xFFFF0000);
  if ( (unsigned int)sub_125790((_QWORD *)a1, v156, *(_QWORD *)(v6 + 8), 0, (__int64)v170) )
    goto LABEL_56;
  v11 = (__int64 *)(v10 + 24LL * v146);
  v130 = *v11;
  if ( !*v11 )
    goto LABEL_49;
  if ( !v11[1] )
    goto LABEL_49;
  v12 = *(_QWORD *)(v130 + 8);
  if ( v12 == v130 )
    goto LABEL_49;
  do
  {
    v13 = *(_QWORD *)(v12 + 32);
    v14 = (int **)(v12 + 24);
    if ( !v13 )
      goto LABEL_80;
    v15 = *(_BYTE *)(v12 + 56);
    if ( v15 == 1 )
    {
      v16 = *(int *)(v12 + 48);
      goto LABEL_17;
    }
    if ( v15 != 5 )
    {
      if ( !under_debugger )
        sub_37DDE0(51893);
      goto LABEL_240;
    }
    v16 = *(_QWORD *)(v12 + 48);
LABEL_17:
    v17 = *(int *)(v12 + 64);
    if ( !(_QWORD)v184 )
      goto LABEL_80;
    v18 = v16 + v17 - 1;
    v19 = v17 != 0;
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      v22 = (char *)(v183 + 16 * v21);
      v23 = *v22;
      if ( *v22 == 1 )
      {
        v24 = *((int *)v22 + 2);
        goto LABEL_23;
      }
      if ( v23 == 5 )
        break;
LABEL_20:
      v21 = ++v20;
      if ( v20 >= (unsigned __int64)v184 )
        goto LABEL_80;
    }
    v24 = *(_QWORD *)(*((_QWORD *)v22 + 1) + 8LL);
LABEL_23:
    if ( v15 != v23 )
      goto LABEL_20;
    v25 = *((int *)v22 + 1);
    if ( !v25 || !v19 || v18 < v24 || v24 + v25 - 1 < v16 )
      goto LABEL_20;
    if ( v16 != v24 || v20 == -2 )
      goto LABEL_56;
    v26 = *v14;
    v27 = (__int64)&(*v14)[v13];
    if ( *v14 != (int *)v27 )
    {
      while ( 1 )
      {
        v28 = (unsigned __int64 *)(*(_QWORD *)v144 + 24LL * *v26);
        v29 = *(_QWORD *)(v12 + 48);
        BYTE8(v167) = v15;
        v165 = 0;
        *(_QWORD *)&v167 = v29;
        v169 = 1;
        v168 = 0xFFFFFFFF00000001LL;
        v166 = 0;
        v30 = sub_100930(v28, (__int64)&v165);
        if ( v165 )
        {
          na = (size_t)v30;
          *(_QWORD *)&v166 = 0;
          qfree();
          v30 = (_QWORD *)na;
        }
        if ( !v30 )
          goto LABEL_56;
        v31 = v30[1];
        if ( !v31 )
          goto LABEL_56;
        v32 = (_DWORD *)*v30;
        v33 = *v30 + 4 * v31;
        if ( *v30 != v33 )
        {
          do
          {
            v34 = *v32;
            if ( !*v32 )
              goto LABEL_56;
            if ( v34 != *(_DWORD *)(v176 + 72) )
            {
              v35 = (_DWORD *)(v185 + 4 * v186);
              if ( (_DWORD *)v185 == v35 )
                goto LABEL_69;
              v36 = (_DWORD *)v185;
              while ( v34 != *v36 )
              {
                if ( v35 == ++v36 )
                  goto LABEL_69;
              }
              if ( v35 == v36 )
              {
LABEL_69:
                if ( *((_QWORD *)&v186 + 1) < (unsigned __int64)(v186 + 1) )
                {
                  v135 = v32;
                  v137 = *v32;
                  nb = v33;
                  v185 = qvector_reserve();
                  v32 = v135;
                  v34 = v137;
                  v33 = nb;
                  v35 = (_DWORD *)(v185 + 4 * v186);
                }
                *v35 = v34;
                *(_QWORD *)&v186 = v186 + 1;
              }
            }
            ++v32;
          }
          while ( (_DWORD *)v33 != v32 );
        }
        if ( (int *)v27 == ++v26 )
          break;
        v15 = *(_BYTE *)(v12 + 56);
      }
      v50 = *v14;
      for ( i = (__int64)&(*v14)[*(_QWORD *)(v12 + 32)]; (int *)i != v50; ++v50 )
      {
        v52 = (_DWORD *)(v152 + 4 * v153);
        v53 = *v50;
        if ( (_DWORD *)v152 == v52 )
        {
LABEL_85:
          if ( *((_QWORD *)&v153 + 1) < (unsigned __int64)(v153 + 1) )
          {
            v152 = qvector_reserve();
            v52 = (_DWORD *)(v152 + 4 * v153);
          }
          *v52 = v53;
          *(_QWORD *)&v153 = v153 + 1;
        }
        else
        {
          v54 = (_DWORD *)v152;
          while ( *v50 != *v54 )
          {
            if ( v52 == ++v54 )
            {
              v53 = *v50;
              goto LABEL_85;
            }
          }
          v53 = *v50;
          if ( v52 == v54 )
            goto LABEL_85;
        }
      }
    }
LABEL_80:
    if ( (*(_QWORD *)v12 & 2) == 0 )
    {
      v55 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)v55 & 2) != 0 )
      {
        v37 = (_QWORD *)(*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL);
        v38 = *v37;
        if ( (*v37 & 2) != 0 || v37[2] != v12 )
        {
LABEL_47:
          v12 = (unsigned __int64)v37;
        }
        else
        {
          while ( 1 )
          {
            v12 = v38 & 0xFFFFFFFFFFFFFFFCLL;
            v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v38 & 2) != 0 )
              break;
            v56 = v37;
            v37 = (_QWORD *)v12;
            if ( *(_QWORD **)(v12 + 16) != v56 )
              goto LABEL_47;
          }
        }
      }
      else
      {
        do
        {
          v12 = v55;
          v55 = *(_QWORD *)(v55 + 8);
        }
        while ( (*(_BYTE *)v55 & 2) == 0 );
      }
    }
  }
  while ( v130 != v12 );
LABEL_49:
  v39 = v176;
  v40 = v159;
  v159[0] = 0;
  v159[1] = 0;
  src = nullptr;
  v161 = 0;
  sub_123B20(v176, v159, (__int64)v180, 0);
  v131 = (unsigned int *)(v185 + 4 * v186);
  if ( (unsigned int *)v185 == v131 )
    goto LABEL_139;
  v134 = (unsigned int *)v185;
  do
  {
    v44 = *v134;
    if ( (unsigned int)v44 >= *(_DWORD *)(v175 + 64) )
      sub_1301F0(v39, v40, v175, v41, v42, v43);
    v45 = *(_QWORD *)(*(_QWORD *)(v175 + 528) + 8 * v44);
    if ( !(unsigned __int8)sub_604A0(v159, (_QWORD *)(v45 + 200)) || !(unsigned __int8)sub_312E40(v45 + 216, &src) )
      goto LABEL_53;
    v60 = *(unsigned int **)(v45 + 56);
    sub_5FC80(v162, (__int64)v159);
    v163 = nullptr;
    v164 = 0;
    if ( (_QWORD)v161 )
    {
      v83 = v161;
      v84 = 16 * v161;
      v163 = (void *)qalloc_or_throw();
      *((_QWORD *)&v164 + 1) = v83;
      memcpy(v163, src, v84);
      *(_QWORD *)&v164 = v83;
    }
    v154 = nullptr;
    v155 = 0;
    do
    {
      v167 = 0;
      v165 = 0;
      v166 = 0u;
      v61 = (unsigned int *)sub_124C90(v45, v162, (__int64)v60, 0, &v165, 0, 0x101u);
      v60 = v61;
      if ( !v61 )
      {
        if ( !under_debugger )
          sub_37DDE0(52819);
        goto LABEL_240;
      }
      if ( v61 == *(unsigned int **)(v45 + 56) && (unsigned __int8)sub_329A80(*v61, 0)
        || !(unsigned __int8)sub_604A0(&v165, v162)
        || !(unsigned __int8)sub_312E40(&v163, (char *)&v166 + 8) )
      {
        if ( *((_QWORD *)&v166 + 1) )
        {
          *(_QWORD *)&v167 = 0;
          qfree();
        }
        qfree();
LABEL_110:
        if ( v154 )
          qfree();
        if ( v163 )
        {
          *(_QWORD *)&v164 = 0;
          qfree();
        }
        qfree();
LABEL_53:
        if ( src )
        {
          *(_QWORD *)&v161 = 0;
          qfree();
        }
        qfree();
        goto LABEL_56;
      }
      v63 = v155;
      v64 = *v60;
      v65 = &v154[v155];
      if ( v154 == v65 )
        goto LABEL_149;
      v66 = v154;
      while ( (_DWORD)v64 != *v66 )
      {
        if ( v65 == ++v66 )
          goto LABEL_149;
      }
      if ( v66 == v65 )
      {
LABEL_149:
        v63 = v155 + 1;
        if ( *((_QWORD *)&v155 + 1) < (unsigned __int64)(v155 + 1) )
        {
          nc = *v60;
          v82 = qvector_reserve();
          v63 = v155;
          v154 = (_DWORD *)v82;
          v64 = nc;
          v65 = (_DWORD *)(v82 + 4 * v155);
        }
        *v65 = v64;
        *(_QWORD *)&v155 = v155 + 1;
      }
      sub_602C0(v162, &v165, v63, (__int64)v65, v64, v62);
      v40 = (__int64 *)&v166 + 1;
      sub_312B60(&v163, (char *)&v166 + 8);
      if ( *((_QWORD *)&v166 + 1) )
      {
        *(_QWORD *)&v167 = 0;
        qfree();
      }
      qfree();
    }
    while ( !(unsigned __int8)sub_60500(v162) || (_QWORD)v164 );
    v67 = &v154[v155];
    v68 = v154;
    if ( v154 != v67 )
    {
      while ( *v68 != 12 )
      {
        if ( v67 == ++v68 )
          goto LABEL_134;
      }
      if ( v68 != v67 )
      {
        v69 = v154;
        while ( *v69 != 13 )
        {
          if ( v67 == ++v69 )
            goto LABEL_134;
        }
        if ( v69 != v67 )
          goto LABEL_110;
      }
    }
LABEL_134:
    if ( v154 )
      qfree();
    if ( v163 )
    {
      *(_QWORD *)&v164 = 0;
      qfree();
    }
    v39 = v162[0];
    qfree();
    ++v134;
  }
  while ( v131 != v134 );
LABEL_139:
  if ( src )
  {
    *(_QWORD *)&v161 = 0;
    qfree();
  }
  v70 = v159[0];
  qfree();
  v73 = (__int64 *)v186;
  v74 = v185 + 4 * v186;
  if ( v74 == v185 )
  {
    v78 = (unsigned int *)v152;
    v102 = v153;
    v79 = (unsigned int *)(v152 + 4 * v153);
    if ( v79 == (unsigned int *)v152 )
      goto LABEL_218;
    while ( 1 )
    {
LABEL_204:
      v105 = *v78;
      if ( *(_DWORD *)(*(_QWORD *)(v145 + 64) + 64LL) - 1 == (_DWORD)v105 )
      {
        v129 = 1;
      }
      else
      {
        if ( v171 )
          v189 = 1;
        v106 = v156;
        v107 = &v165;
        sub_5FC80(&v165, (__int64)v156);
        v112 = v158;
        *((_QWORD *)&v166 + 1) = 0;
        v167 = 0;
        if ( (_QWORD)v158 )
        {
          nd = 16 * v158;
          v113 = (__int64 *)qalloc_or_throw();
          v106 = (__int64 *)v157;
          v107 = v113;
          *((_QWORD *)&v166 + 1) = v113;
          *((_QWORD *)&v167 + 1) = v112;
          memcpy(v113, v157, nd);
          *(_QWORD *)&v167 = v112;
        }
        v103 = *(_QWORD *)(v145 + 64);
        if ( (unsigned int)v105 >= *(_DWORD *)(v103 + 64) )
          sub_1301F0(v107, v106, v108, v109, v110, v111);
        v73 = &v165;
        v104 = *(_QWORD **)(*(_QWORD *)(v103 + 528) + 8 * v105);
        if ( (unsigned int)sub_125790(v104, &v165, v104[6], 0, (__int64)v170) )
        {
          sub_8F680((__int64)&v165);
LABEL_56:
          if ( v187 )
          {
            if ( v188 )
            {
              v46 = *((char **)v187 + 1);
              while ( v187 != v46 )
              {
                sub_118550(*((char **)v46 + 3), v46 + 32);
                if ( (*(_QWORD *)v46 & 2) == 0 )
                {
                  v47 = *((char **)v46 + 2);
                  if ( (*v47 & 2) != 0 )
                  {
                    v57 = (char *)(*(_QWORD *)v46 & 0xFFFFFFFFFFFFFFFCLL);
                    v58 = *(_QWORD *)v57;
                    if ( (*(_QWORD *)v57 & 2) == 0 )
                    {
                      while ( v46 == *((char **)v57 + 2) )
                      {
                        v46 = v57;
                        v59 = v58 & 0xFFFFFFFFFFFFFFFCLL;
                        v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v58 & 2) != 0 )
                        {
                          v46 = (char *)v59;
                          goto LABEL_62;
                        }
                        v57 = (char *)v59;
                      }
                    }
                    v46 = v57;
                  }
                  else
                  {
                    do
                    {
                      v46 = v47;
                      v47 = *((char **)v47 + 1);
                    }
                    while ( (*v47 & 2) == 0 );
                  }
                }
LABEL_62:
                ;
              }
            }
          }
          v48 = 0;
          goto LABEL_64;
        }
        if ( *((_QWORD *)&v166 + 1) )
        {
          *(_QWORD *)&v167 = 0;
          qfree();
        }
        v70 = v165;
        qfree();
      }
      if ( v79 == ++v78 )
      {
        v80 = (unsigned int *)v185;
        v81 = (unsigned int *)(v185 + 4 * v186);
        if ( (unsigned int *)v185 != v81 )
          goto LABEL_212;
        goto LABEL_217;
      }
    }
  }
  v71 = (int *)v185;
  v75 = (__int64 *)v186;
  v74 = v185;
  v76 = 1;
  while ( 2 )
  {
    v77 = (_QWORD *)(*(_QWORD *)v133 + 24LL * *v71);
    v127 = (_QWORD *)*v77;
    if ( *v77 )
    {
      if ( v77[1] )
      {
        v85 = *(_QWORD **)(*v77 + 8LL);
        if ( (_QWORD *)*v77 != v85 )
        {
          v128 = v76;
          v150 = v75;
          v70 = v184;
          v72 = v183;
          v86 = (_DWORD *)(v152 + 4 * v153);
          while ( 1 )
          {
            v132 = v85[4];
            if ( !v132 )
              goto LABEL_184;
            v87 = *((_BYTE *)v85 + 56);
            if ( v87 == 1 )
            {
              v138 = *((int *)v85 + 12);
            }
            else
            {
              if ( v87 != 5 )
              {
                if ( !under_debugger )
                  sub_37DDE0(51893);
                goto LABEL_240;
              }
              v138 = v85[6];
            }
            v88 = *((int *)v85 + 16);
            if ( !(_QWORD)v184 )
              goto LABEL_184;
            v126 = (_DWORD **)(v85 + 3);
            n = v88 != 0;
            v89 = 0;
            v136 = v138 + v88 - 1;
            v90 = 0;
            while ( 1 )
            {
              v91 = (char *)(v183 + 16 * v90);
              v92 = *v91;
              if ( *v91 == 1 )
                break;
              if ( v92 == 5 )
              {
                v93 = *(_QWORD *)(*((_QWORD *)v91 + 1) + 8LL);
                goto LABEL_166;
              }
LABEL_163:
              v90 = ++v89;
              if ( v89 >= (unsigned __int64)v184 )
                goto LABEL_184;
            }
            v93 = *((int *)v91 + 2);
LABEL_166:
            if ( v87 != v92 )
              goto LABEL_163;
            v94 = *((int *)v91 + 1);
            if ( !v94 || !n || v136 < v93 || v93 + v94 - 1 < v138 )
              goto LABEL_163;
            v75 = v150;
            if ( v138 != v93 )
              goto LABEL_172;
            if ( v89 == -2 )
            {
LABEL_173:
              v76 = 0;
              break;
            }
            v95 = *v126;
            v96 = (__int64)&(*v126)[v132];
            if ( (_DWORD *)v96 != *v126 )
            {
              v75 = v150;
              while ( (_DWORD *)v152 != v86 )
              {
                v97 = (_DWORD *)v152;
                while ( *v95 != *v97 )
                {
                  if ( v86 == ++v97 )
                    goto LABEL_173;
                }
                if ( (_DWORD *)v96 == ++v95 )
                  goto LABEL_183;
              }
              goto LABEL_173;
            }
LABEL_183:
            if ( !v128 )
            {
LABEL_172:
              v75 = v150;
              goto LABEL_173;
            }
LABEL_184:
            if ( (*v85 & 2) == 0 )
            {
              v98 = (_QWORD *)v85[2];
              if ( (*(_BYTE *)v98 & 2) != 0 )
              {
                v99 = (_QWORD *)(*v85 & 0xFFFFFFFFFFFFFFFCLL);
                v100 = *v99;
                if ( (*v99 & 2) == 0 )
                {
                  while ( (_QWORD *)v99[2] == v85 )
                  {
                    v85 = v99;
                    v101 = v100 & 0xFFFFFFFFFFFFFFFCLL;
                    v100 = *(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v100 & 2) != 0 )
                    {
                      v85 = (_QWORD *)v101;
                      goto LABEL_187;
                    }
                    v99 = (_QWORD *)v101;
                  }
                }
                v85 = v99;
              }
              else
              {
                do
                {
                  v85 = v98;
                  v98 = (_QWORD *)v98[1];
                }
                while ( (*(_BYTE *)v98 & 2) == 0 );
              }
            }
LABEL_187:
            if ( v127 == v85 )
            {
              v76 = v128;
              v75 = v150;
              break;
            }
          }
        }
      }
    }
    if ( (int *)(v185 + 4 * v186) != ++v71 )
      continue;
    break;
  }
  v73 = v75;
  if ( !v76 )
    goto LABEL_56;
  v78 = (unsigned int *)v152;
  v79 = (unsigned int *)(v152 + 4 * v153);
  if ( (unsigned int *)v152 != v79 )
    goto LABEL_204;
  v80 = (unsigned int *)v185;
  v81 = (unsigned int *)(v185 + 4LL * (_QWORD)v75);
LABEL_212:
  v151 = v80;
  do
  {
    v114 = *v151;
    if ( (unsigned int)v114 >= *(_DWORD *)(v175 + 64) )
      sub_1301F0(v70, v73, v175, v71, v72, v74);
    v115 = *(_QWORD *)(*(_QWORD *)(v175 + 528) + 8 * v114);
    v116 = *(unsigned int **)(v115 + 56);
    if ( (unsigned __int8)sub_329A80(*v116, 0) )
      v116 = *((unsigned int **)v116 + 2);
    v117 = (__int64 *)j__qalloc_or_throw();
    v118 = *(_QWORD *)(*(_QWORD *)(v115 + 56) + 24LL);
    v117[4] = 0xFFFFFFFF00000000LL;
    v117[5] = 0;
    v117[6] = 0xFFFFFFFF00000000LL;
    v117[7] = 0;
    v117[8] = 0xFFFFFFFF00000000LL;
    v117[9] = 0;
    sub_32B5A0(v117, v118);
    *(_DWORD *)v117 = 4;
    sub_120CC0((__int64)(v117 + 4), v180);
    sub_120CC0((__int64)(v117 + 8), v181);
    v73 = v117;
    v70 = v115;
    sub_9ECA0(v115, v117, (__int64)v116);
    v119 = *(_DWORD *)(v115 + 24);
    ++v151;
    BYTE1(v119) &= ~2u;
    LOBYTE(v119) = v119 | 0x80;
    *(_DWORD *)(v115 + 24) = v119;
  }
  while ( v81 != v151 );
LABEL_217:
  v102 = v153;
  v78 = (unsigned int *)v152;
LABEL_218:
  v120 = &v78[v102];
  v121 = *(_DWORD *)(v145 + 24);
  BYTE1(v121) &= ~2u;
  LOBYTE(v121) = v121 | 0x80;
  for ( *(_DWORD *)(v145 + 24) = v121; v120 != v78; ++v78 )
  {
    v122 = *(_QWORD *)(v145 + 64);
    v123 = *v78;
    if ( (unsigned int)v123 >= *(_DWORD *)(v122 + 64) )
      sub_1301F0(v70, v145, v122, v120, v72, v74);
    v124 = *(_QWORD *)(*(_QWORD *)(v122 + 528) + 8 * v123);
    if ( *(_DWORD *)(v124 + 76) != 1 )
    {
      v125 = *(_DWORD *)(v124 + 24);
      BYTE1(v125) &= ~2u;
      LOBYTE(v125) = v125 | 0x80;
      *(_DWORD *)(v124 + 24) = v125;
    }
  }
  v48 = v129 + 1;
LABEL_64:
  if ( v157 )
  {
    v147 = v48;
    *(_QWORD *)&v158 = 0;
    qfree();
    v48 = v147;
  }
  v148 = v48;
  qfree();
  sub_100950(v144);
  sub_100950(v133);
  v49 = v148;
  if ( v152 )
  {
    qfree();
    v49 = v148;
  }
  v149 = v49;
  v170[0] = off_4B0618;
  sub_132180(&v174);
  return v149;
}

