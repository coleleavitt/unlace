__int64 __fastcall sub_13E2D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // r12
  int v28; // r8d
  int *v29; // r9
  __int64 *v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // r10
  int **v33; // r13
  char v34; // si
  unsigned __int64 v35; // r15
  __int64 v36; // rdx
  unsigned __int64 v37; // r12
  bool v38; // r11
  int v39; // ecx
  __int64 v40; // rax
  char *v41; // rax
  char v42; // dl
  __int64 v43; // rax
  int *v44; // r12
  __int64 v45; // r15
  unsigned __int64 *v46; // rdi
  __int64 v47; // rax
  int **v48; // rax
  int *v49; // rdx
  __int64 v50; // r10
  int *v51; // rcx
  int *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  _QWORD *v56; // r13
  char *v57; // rbx
  char *v58; // rdx
  int v59; // eax
  int v60; // eax
  int *v61; // r12
  __int64 i; // r13
  unsigned int *v63; // rcx
  unsigned int v64; // r15d
  unsigned int *v65; // rax
  unsigned __int64 v66; // rdx
  _QWORD *v67; // rcx
  char *v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  unsigned int *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int *v74; // rax
  int v75; // r9d
  __int64 v76; // rdx
  __int64 v77; // r8
  _DWORD *v78; // rcx
  _DWORD *v79; // rax
  _DWORD *v80; // rdx
  _DWORD *v81; // rax
  _DWORD *v82; // rax
  int *v83; // rcx
  __int64 v84; // r15
  char v85; // al
  _QWORD *v86; // rdx
  unsigned int *v87; // rbx
  unsigned int *v88; // r13
  __int64 v89; // rbx
  unsigned int *v90; // r15
  __int64 v91; // rax
  __int64 v92; // r15
  size_t v93; // r14
  _QWORD *v94; // rbx
  unsigned int *v95; // rdx
  char v96; // r15
  __int64 v97; // r14
  int v98; // r13d
  __int64 v99; // rax
  char *v100; // rax
  char v101; // r12
  unsigned __int64 v102; // r14
  __int64 v103; // rax
  _DWORD *v104; // r13
  __int64 v105; // r14
  unsigned int *v106; // rax
  _QWORD *v107; // r12
  _QWORD *v108; // rax
  __int64 v109; // r12
  unsigned __int64 v110; // r13
  __int64 v111; // rdx
  __int64 v112; // rax
  _QWORD *v113; // rdi
  __int64 v114; // r12
  __int64 v115; // rcx
  __int64 v116; // r14
  __int64 v117; // rax
  __int64 v118; // r12
  __int64 v119; // r13
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rbx
  __int64 v123; // rsi
  int v124; // eax
  unsigned int *v125; // rcx
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rdx
  int v130; // eax
  _DWORD **v131; // [rsp+8h] [rbp-278h]
  _QWORD *v132; // [rsp+10h] [rbp-270h]
  char v133; // [rsp+2Eh] [rbp-252h]
  unsigned __int8 v134; // [rsp+2Fh] [rbp-251h]
  __int64 v135; // [rsp+30h] [rbp-250h]
  unsigned int *v136; // [rsp+30h] [rbp-250h]
  __int64 v137; // [rsp+30h] [rbp-250h]
  __int64 v138; // [rsp+38h] [rbp-248h]
  unsigned int *v139; // [rsp+40h] [rbp-240h]
  int *v140; // [rsp+40h] [rbp-240h]
  unsigned __int64 v141; // [rsp+40h] [rbp-240h]
  int v142; // [rsp+48h] [rbp-238h]
  unsigned __int64 v143; // [rsp+48h] [rbp-238h]
  size_t na; // [rsp+50h] [rbp-230h]
  size_t nb; // [rsp+50h] [rbp-230h]
  unsigned int nc; // [rsp+50h] [rbp-230h]
  bool n; // [rsp+50h] [rbp-230h]
  __int64 nd; // [rsp+50h] [rbp-230h]
  __int64 v149; // [rsp+58h] [rbp-228h]
  int v151; // [rsp+68h] [rbp-218h]
  int v152; // [rsp+68h] [rbp-218h]
  int v153; // [rsp+68h] [rbp-218h]
  unsigned int v154; // [rsp+68h] [rbp-218h]
  __int64 v155; // [rsp+68h] [rbp-218h]
  unsigned int *v156; // [rsp+68h] [rbp-218h]
  unsigned int *v157; // [rsp+70h] [rbp-210h] BYREF
  __int128 v158; // [rsp+78h] [rbp-208h]
  _DWORD *v159; // [rsp+90h] [rbp-1F0h] BYREF
  __int128 v160; // [rsp+98h] [rbp-1E8h]
  __int64 v161[2]; // [rsp+B0h] [rbp-1D0h] BYREF
  void *v162; // [rsp+C0h] [rbp-1C0h]
  __int128 v163; // [rsp+C8h] [rbp-1B8h]
  __int64 v164[2]; // [rsp+E0h] [rbp-1A0h] BYREF
  void *src; // [rsp+F0h] [rbp-190h] BYREF
  __int128 v166; // [rsp+F8h] [rbp-188h]
  __int64 v167[2]; // [rsp+110h] [rbp-170h] BYREF
  void *v168; // [rsp+120h] [rbp-160h] BYREF
  __int128 v169; // [rsp+128h] [rbp-158h]
  __int64 v170; // [rsp+140h] [rbp-140h] BYREF
  __int128 v171; // [rsp+148h] [rbp-138h] BYREF
  __int128 v172; // [rsp+158h] [rbp-128h]
  unsigned __int64 v173; // [rsp+168h] [rbp-118h]
  char v174; // [rsp+170h] [rbp-110h]
  _QWORD v175[3]; // [rsp+180h] [rbp-100h] BYREF
  char v176; // [rsp+198h] [rbp-E8h]
  __int64 v177; // [rsp+1A0h] [rbp-E0h]
  char v178; // [rsp+1A8h] [rbp-D8h]
  __int64 (__fastcall **v179)(); // [rsp+1B0h] [rbp-D0h] BYREF
  __int64 v180; // [rsp+1B8h] [rbp-C8h]
  __int64 v181; // [rsp+1C0h] [rbp-C0h]
  __int64 v182; // [rsp+1C8h] [rbp-B8h]
  __int64 v183; // [rsp+1D0h] [rbp-B0h]
  char v184; // [rsp+1D8h] [rbp-A8h]
  unsigned __int8 *v185; // [rsp+1E0h] [rbp-A0h]
  unsigned __int8 *v186; // [rsp+1E8h] [rbp-98h]
  _QWORD *v187; // [rsp+1F0h] [rbp-90h]
  __int64 v188; // [rsp+1F8h] [rbp-88h] BYREF
  __int128 v189; // [rsp+200h] [rbp-80h]
  int *v190; // [rsp+210h] [rbp-70h] BYREF
  __int128 v191; // [rsp+218h] [rbp-68h]
  char *v192; // [rsp+228h] [rbp-58h]
  __int64 v193; // [rsp+230h] [rbp-50h]
  char v194; // [rsp+238h] [rbp-48h]
  unsigned __int64 v195; // [rsp+248h] [rbp-38h]

  v195 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 14 || *(_BYTE *)a4 != 1 || *(_DWORD *)(a4 + 4) != *(_DWORD *)(a3 + 4) )
  {
    if ( !under_debugger )
      sub_383060(0xC503u, a5);
LABEL_240:
    BUG();
  }
  if ( (**(_DWORD **)(a1 + 64) & 0x100000) != 0 )
    return 0;
  v134 = sub_11ED30(a3, a5);
  if ( v134 )
    return 0;
  v175[1] = 0;
  v175[0] = off_4DDB98;
  v179 = off_4DDB70;
  v187 = v175;
  v175[2] = 0;
  v181 = a1;
  v11 = *(_QWORD *)(a1 + 64);
  v176 = 0;
  v177 = 0;
  v178 = 0;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v185 = (unsigned __int8 *)a3;
  v186 = (unsigned __int8 *)a4;
  v188 = 0;
  v190 = nullptr;
  v192 = nullptr;
  v193 = 0;
  v180 = v11;
  v189 = 0;
  v191 = 0;
  sub_134780(&v188, a3, v9, v10, 0.0);
  v194 = 0;
  v157 = nullptr;
  v12 = *(_QWORD **)(a1 + 64);
  v158 = 0;
  v15 = sub_670E0(v12, a3, v13, v14);
  v138 = sub_1108E0(v15, 0, v16, v17, v18, v19, 0.0, a6);
  if ( !v138 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
    goto LABEL_240;
  }
  ++*(_DWORD *)(v138 + 24);
  v22 = sub_670E0(*(_QWORD **)(a1 + 64), 0, v20, v21);
  v149 = sub_110340(v22, 0, v23, v24, v25, v26, 0.0, a6);
  if ( !v149 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
    goto LABEL_240;
  }
  ++*(_DWORD *)(v149 + 24);
  v151 = *(_DWORD *)(a1 + 72);
  v27 = *(_QWORD *)v138;
  sub_125180((unsigned __int8 *)(a2 + 64), (unsigned __int8 *)a4);
  v161[0] = 0;
  v161[1] = 0;
  v162 = nullptr;
  v163 = 0;
  sub_123EA0(a1, v161, a3, 1, 0xFFFF0000, 0.0);
  if ( (unsigned int)sub_129C50((_QWORD *)a1, v161, *(_QWORD *)(a2 + 8), 0, (__int64)v175, 0.0, a6) )
    goto LABEL_56;
  v30 = (__int64 *)(v27 + 24LL * v151);
  v135 = *v30;
  if ( !*v30 )
    goto LABEL_49;
  if ( !v30[1] )
    goto LABEL_49;
  v31 = *(_QWORD *)(v135 + 8);
  if ( v31 == v135 )
    goto LABEL_49;
  do
  {
    v32 = *(_QWORD *)(v31 + 32);
    v33 = (int **)(v31 + 24);
    if ( !v32 )
      goto LABEL_80;
    v34 = *(_BYTE *)(v31 + 56);
    if ( v34 == 1 )
    {
      v35 = *(int *)(v31 + 48);
      goto LABEL_17;
    }
    if ( v34 != 5 )
    {
      if ( !under_debugger )
        sub_383060(0xCAB5u, 0.0);
      goto LABEL_240;
    }
    v35 = *(_QWORD *)(v31 + 48);
LABEL_17:
    v36 = *(int *)(v31 + 64);
    if ( !(_QWORD)v189 )
      goto LABEL_80;
    v28 = v188;
    v37 = v35 + v36 - 1;
    v38 = v36 != 0;
    v39 = 0;
    v40 = 0;
    while ( 1 )
    {
      v41 = (char *)(v188 + 16 * v40);
      v42 = *v41;
      if ( *v41 == 1 )
      {
        v29 = (int *)*((int *)v41 + 2);
        goto LABEL_23;
      }
      if ( v42 == 5 )
        break;
LABEL_20:
      v40 = ++v39;
      if ( v39 >= (unsigned __int64)v189 )
        goto LABEL_80;
    }
    v29 = *(int **)(*((_QWORD *)v41 + 1) + 8LL);
LABEL_23:
    if ( v34 != v42 )
      goto LABEL_20;
    v43 = *((int *)v41 + 1);
    if ( !v43 || !v38 || v37 < (unsigned __int64)v29 || (unsigned __int64)v29 + v43 - 1 < v35 )
      goto LABEL_20;
    if ( (int *)v35 != v29 || v39 == -2 )
      goto LABEL_56;
    v44 = *v33;
    v45 = (__int64)&(*v33)[v32];
    if ( *v33 != (int *)v45 )
    {
      while ( 1 )
      {
        a6 = 0;
        v46 = (unsigned __int64 *)(*(_QWORD *)v149 + 24LL * *v44);
        v47 = *(_QWORD *)(v31 + 48);
        BYTE8(v172) = v34;
        v170 = 0;
        *(_QWORD *)&v172 = v47;
        v174 = 1;
        v173 = 0xFFFFFFFF00000001LL;
        v171 = 0;
        v48 = (int **)sub_104DF0(v46, (__int64)&v170);
        if ( v170 )
        {
          na = (size_t)v48;
          *(_QWORD *)&v171 = 0;
          qfree(v170);
          v48 = (int **)na;
        }
        if ( !v48 )
          goto LABEL_56;
        v49 = v48[1];
        if ( !v49 )
          goto LABEL_56;
        v29 = *v48;
        v50 = (__int64)&(*v48)[(_QWORD)v49];
        if ( *v48 != (int *)v50 )
        {
          do
          {
            v28 = *v29;
            if ( !*v29 )
              goto LABEL_56;
            if ( v28 != *(_DWORD *)(v181 + 72) )
            {
              v51 = &v190[v191];
              if ( v190 == v51 )
                goto LABEL_69;
              v52 = v190;
              while ( v28 != *v52 )
              {
                if ( v51 == ++v52 )
                  goto LABEL_69;
              }
              if ( v51 == v52 )
              {
LABEL_69:
                if ( *((_QWORD *)&v191 + 1) < (unsigned __int64)(v191 + 1) )
                {
                  v140 = v29;
                  v142 = *v29;
                  nb = v50;
                  v190 = (int *)qvector_reserve((__int64)&v190, (__int64)v190, v191 + 1, 4);
                  v29 = v140;
                  v28 = v142;
                  v50 = nb;
                  v51 = &v190[v191];
                }
                *v51 = v28;
                *(_QWORD *)&v191 = v191 + 1;
              }
            }
            ++v29;
          }
          while ( (int *)v50 != v29 );
        }
        if ( (int *)v45 == ++v44 )
          break;
        v34 = *(_BYTE *)(v31 + 56);
      }
      v61 = *v33;
      for ( i = (__int64)&(*v33)[*(_QWORD *)(v31 + 32)]; (int *)i != v61; ++v61 )
      {
        v63 = &v157[v158];
        v64 = *v61;
        if ( v157 == v63 )
        {
LABEL_85:
          if ( *((_QWORD *)&v158 + 1) < (unsigned __int64)(v158 + 1) )
          {
            v157 = (unsigned int *)qvector_reserve((__int64)&v157, (__int64)v157, v158 + 1, 4);
            v63 = &v157[v158];
          }
          *v63 = v64;
          *(_QWORD *)&v158 = v158 + 1;
        }
        else
        {
          v65 = v157;
          while ( *v61 != *v65 )
          {
            if ( v63 == ++v65 )
            {
              v64 = *v61;
              goto LABEL_85;
            }
          }
          v64 = *v61;
          if ( v63 == v65 )
            goto LABEL_85;
        }
      }
    }
LABEL_80:
    if ( (*(_QWORD *)v31 & 2) == 0 )
    {
      v66 = *(_QWORD *)(v31 + 16);
      if ( (*(_BYTE *)v66 & 2) != 0 )
      {
        v53 = (_QWORD *)(*(_QWORD *)v31 & 0xFFFFFFFFFFFFFFFCLL);
        v54 = *v53;
        if ( (*v53 & 2) != 0 || v53[2] != v31 )
        {
LABEL_47:
          v31 = (unsigned __int64)v53;
        }
        else
        {
          while ( 1 )
          {
            v31 = v54 & 0xFFFFFFFFFFFFFFFCLL;
            v54 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v54 & 2) != 0 )
              break;
            v67 = v53;
            v53 = (_QWORD *)v31;
            if ( *(_QWORD **)(v31 + 16) != v67 )
              goto LABEL_47;
          }
        }
      }
      else
      {
        do
        {
          v31 = v66;
          v66 = *(_QWORD *)(v66 + 8);
        }
        while ( (*(_BYTE *)v66 & 2) == 0 );
      }
    }
  }
  while ( v135 != v31 );
LABEL_49:
  v164[0] = 0;
  v164[1] = 0;
  src = nullptr;
  v166 = 0;
  sub_127FE0(v181, v164, (__int64)v185, 0, v28, (int)v29, 0.0, a6);
  v136 = (unsigned int *)&v190[v191];
  if ( v190 == (int *)v136 )
    goto LABEL_139;
  v139 = (unsigned int *)v190;
  do
  {
    v55 = *v139;
    if ( (unsigned int)v55 >= *(_DWORD *)(v180 + 64) )
      sub_1346B0(0.0);
    v56 = *(_QWORD **)(*(_QWORD *)(v180 + 528) + 8 * v55);
    if ( !(unsigned __int8)sub_64820(v164, v56 + 25) || !(unsigned __int8)sub_317F40(v56 + 27, (__int64)&src) )
      goto LABEL_53;
    v71 = (unsigned int *)v56[7];
    sub_64000(v167, (__int64)v164, 0.0);
    v168 = nullptr;
    v169 = 0;
    if ( (_QWORD)v166 )
    {
      v92 = v166;
      v93 = 16 * v166;
      v168 = (void *)qalloc_or_throw(16 * v166, (__int64)v164, v72, v73);
      *((_QWORD *)&v169 + 1) = v92;
      memcpy(v168, src, v93);
      *(_QWORD *)&v169 = v92;
    }
    v159 = nullptr;
    v160 = 0;
    do
    {
      v172 = 0;
      v170 = 0;
      v171 = 0u;
      v74 = (unsigned int *)sub_129150((__int64)v56, v167, (__int64)v71, 0, (__int64)&v170, 0, 0.0, a6, 0x101u);
      v71 = v74;
      if ( !v74 )
      {
        if ( !under_debugger )
          sub_383060(0xCE53u, 0.0);
        goto LABEL_240;
      }
      if ( v74 == (unsigned int *)v56[7] && sub_32ED40(*v74, 0)
        || !(unsigned __int8)sub_64820(&v170, v167)
        || !(unsigned __int8)sub_317F40((__int64 *)&v168, (__int64)&v171 + 8) )
      {
        if ( *((_QWORD *)&v171 + 1) )
        {
          *(_QWORD *)&v172 = 0;
          qfree(*((__int64 *)&v171 + 1));
        }
        qfree(v170);
LABEL_110:
        if ( v159 )
        {
          *(_QWORD *)&v160 = 0;
          qfree((__int64)v159);
        }
        if ( v168 )
        {
          *(_QWORD *)&v169 = 0;
          qfree((__int64)v168);
        }
        qfree(v167[0]);
LABEL_53:
        if ( src )
        {
          *(_QWORD *)&v166 = 0;
          qfree((__int64)src);
        }
        qfree(v164[0]);
        goto LABEL_56;
      }
      v76 = v160;
      v77 = *v71;
      v78 = &v159[v160];
      if ( v159 == v78 )
        goto LABEL_149;
      v79 = v159;
      while ( (_DWORD)v77 != *v79 )
      {
        if ( v78 == ++v79 )
          goto LABEL_149;
      }
      if ( v79 == v78 )
      {
LABEL_149:
        v76 = v160 + 1;
        if ( *((_QWORD *)&v160 + 1) < (unsigned __int64)(v160 + 1) )
        {
          nc = *v71;
          v91 = qvector_reserve((__int64)&v159, (__int64)v159, v76, 4);
          v76 = v160;
          v159 = (_DWORD *)v91;
          v77 = nc;
          v78 = (_DWORD *)(v91 + 4 * v160);
        }
        *v78 = v77;
        *(_QWORD *)&v160 = v160 + 1;
      }
      sub_64640(v167, &v170, v76, (__int64)v78, v77, v75);
      sub_317C60((__int64 *)&v168, (__int64)&v171 + 8);
      if ( *((_QWORD *)&v171 + 1) )
      {
        *(_QWORD *)&v172 = 0;
        qfree(*((__int64 *)&v171 + 1));
      }
      qfree(v170);
    }
    while ( !(unsigned __int8)sub_64880(v167) || (_QWORD)v169 );
    v80 = &v159[v160];
    v81 = v159;
    if ( v159 != v80 )
    {
      while ( *v81 != 12 )
      {
        if ( v80 == ++v81 )
          goto LABEL_134;
      }
      if ( v81 != v80 )
      {
        v82 = v159;
        while ( *v82 != 13 )
        {
          if ( v80 == ++v82 )
            goto LABEL_134;
        }
        if ( v82 != v80 )
          goto LABEL_110;
      }
    }
LABEL_134:
    if ( v159 )
    {
      *(_QWORD *)&v160 = 0;
      qfree((__int64)v159);
    }
    if ( v168 )
    {
      *(_QWORD *)&v169 = 0;
      qfree((__int64)v168);
    }
    qfree(v167[0]);
    ++v139;
  }
  while ( v136 != v139 );
LABEL_139:
  if ( src )
  {
    *(_QWORD *)&v166 = 0;
    qfree((__int64)src);
  }
  qfree(v164[0]);
  if ( &v190[(_QWORD)v191] == v190 )
  {
    v87 = v157;
    v111 = v158;
    v88 = &v157[v158];
    if ( v88 == v157 )
      goto LABEL_218;
    while ( 1 )
    {
LABEL_204:
      v114 = *v87;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 == (_DWORD)v114 )
      {
        v134 = 1;
      }
      else
      {
        if ( v176 )
          v194 = 1;
        sub_64000(&v170, (__int64)v161, 0.0);
        v116 = v163;
        *((_QWORD *)&v171 + 1) = 0;
        v172 = 0;
        if ( (_QWORD)v163 )
        {
          nd = 16 * v163;
          *((_QWORD *)&v171 + 1) = qalloc_or_throw(16 * v163, (__int64)v161, 16 * v163, v115);
          *((_QWORD *)&v172 + 1) = v116;
          memcpy(*((void **)&v171 + 1), v162, nd);
          *(_QWORD *)&v172 = v116;
        }
        v112 = *(_QWORD *)(a1 + 64);
        if ( (unsigned int)v114 >= *(_DWORD *)(v112 + 64) )
          sub_1346B0(0.0);
        v113 = *(_QWORD **)(*(_QWORD *)(v112 + 528) + 8 * v114);
        if ( (unsigned int)sub_129C50(v113, &v170, v113[6], 0, (__int64)v175, 0.0, a6) )
        {
          sub_93B40(&v170);
LABEL_56:
          if ( v192 )
          {
            if ( v193 )
            {
              v57 = *((char **)v192 + 1);
              while ( v192 != v57 )
              {
                sub_11CA10(*((char **)v57 + 3), v57 + 32);
                if ( (*(_QWORD *)v57 & 2) == 0 )
                {
                  v58 = *((char **)v57 + 2);
                  if ( (*v58 & 2) != 0 )
                  {
                    v68 = (char *)(*(_QWORD *)v57 & 0xFFFFFFFFFFFFFFFCLL);
                    v69 = *(_QWORD *)v68;
                    if ( (*(_QWORD *)v68 & 2) == 0 )
                    {
                      while ( v57 == *((char **)v68 + 2) )
                      {
                        v57 = v68;
                        v70 = v69 & 0xFFFFFFFFFFFFFFFCLL;
                        v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v69 & 2) != 0 )
                        {
                          v57 = (char *)v70;
                          goto LABEL_62;
                        }
                        v68 = (char *)v70;
                      }
                    }
                    v57 = v68;
                  }
                  else
                  {
                    do
                    {
                      v57 = v58;
                      v58 = *((char **)v58 + 1);
                    }
                    while ( (*v58 & 2) == 0 );
                  }
                }
LABEL_62:
                ;
              }
            }
          }
          v59 = 0;
          goto LABEL_64;
        }
        if ( *((_QWORD *)&v171 + 1) )
        {
          *(_QWORD *)&v172 = 0;
          qfree(*((__int64 *)&v171 + 1));
        }
        qfree(v170);
      }
      if ( v88 == ++v87 )
      {
        v89 = (__int64)v190;
        v90 = (unsigned int *)&v190[v191];
        if ( v190 != (int *)v90 )
          goto LABEL_212;
        goto LABEL_217;
      }
    }
  }
  v83 = v190;
  v84 = v191;
  v85 = 1;
  while ( 2 )
  {
    v86 = (_QWORD *)(*(_QWORD *)v138 + 24LL * *v83);
    v132 = (_QWORD *)*v86;
    if ( *v86 )
    {
      if ( v86[1] )
      {
        v94 = *(_QWORD **)(*v86 + 8LL);
        if ( (_QWORD *)*v86 != v94 )
        {
          v133 = v85;
          v155 = v84;
          v95 = &v157[v158];
          while ( 1 )
          {
            v137 = v94[4];
            if ( !v137 )
              goto LABEL_184;
            v96 = *((_BYTE *)v94 + 56);
            if ( v96 == 1 )
            {
              v143 = *((int *)v94 + 12);
            }
            else
            {
              if ( v96 != 5 )
              {
                if ( !under_debugger )
                  sub_383060(0xCAB5u, 0.0);
                goto LABEL_240;
              }
              v143 = v94[6];
            }
            v97 = *((int *)v94 + 16);
            if ( !(_QWORD)v189 )
              goto LABEL_184;
            v131 = (_DWORD **)(v94 + 3);
            n = v97 != 0;
            v98 = 0;
            v141 = v143 + v97 - 1;
            v99 = 0;
            while ( 1 )
            {
              v100 = (char *)(v188 + 16 * v99);
              v101 = *v100;
              if ( *v100 == 1 )
                break;
              if ( v101 == 5 )
              {
                v102 = *(_QWORD *)(*((_QWORD *)v100 + 1) + 8LL);
                goto LABEL_166;
              }
LABEL_163:
              v99 = ++v98;
              if ( v98 >= (unsigned __int64)v189 )
                goto LABEL_184;
            }
            v102 = *((int *)v100 + 2);
LABEL_166:
            if ( v96 != v101 )
              goto LABEL_163;
            v103 = *((int *)v100 + 1);
            if ( !v103 || !n || v141 < v102 || v102 + v103 - 1 < v143 )
              goto LABEL_163;
            v84 = v155;
            if ( v143 != v102 )
              goto LABEL_172;
            if ( v98 == -2 )
            {
LABEL_173:
              v85 = 0;
              break;
            }
            v104 = *v131;
            v105 = (__int64)&(*v131)[v137];
            if ( (_DWORD *)v105 != *v131 )
            {
              v84 = v155;
              while ( v157 != v95 )
              {
                v106 = v157;
                while ( *v104 != *v106 )
                {
                  if ( v95 == ++v106 )
                    goto LABEL_173;
                }
                if ( (_DWORD *)v105 == ++v104 )
                  goto LABEL_183;
              }
              goto LABEL_173;
            }
LABEL_183:
            if ( !v133 )
            {
LABEL_172:
              v84 = v155;
              goto LABEL_173;
            }
LABEL_184:
            if ( (*v94 & 2) == 0 )
            {
              v107 = (_QWORD *)v94[2];
              if ( (*(_BYTE *)v107 & 2) != 0 )
              {
                v108 = (_QWORD *)(*v94 & 0xFFFFFFFFFFFFFFFCLL);
                v109 = *v108;
                if ( (*v108 & 2) == 0 )
                {
                  while ( (_QWORD *)v108[2] == v94 )
                  {
                    v94 = v108;
                    v110 = v109 & 0xFFFFFFFFFFFFFFFCLL;
                    v109 = *(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v109 & 2) != 0 )
                    {
                      v94 = (_QWORD *)v110;
                      goto LABEL_187;
                    }
                    v108 = (_QWORD *)v110;
                  }
                }
                v94 = v108;
              }
              else
              {
                do
                {
                  v94 = v107;
                  v107 = (_QWORD *)v107[1];
                }
                while ( (*(_BYTE *)v107 & 2) == 0 );
              }
            }
LABEL_187:
            if ( v132 == v94 )
            {
              v85 = v133;
              v84 = v155;
              break;
            }
          }
        }
      }
    }
    if ( &v190[(_QWORD)v191] != ++v83 )
      continue;
    break;
  }
  if ( !v85 )
    goto LABEL_56;
  v87 = v157;
  v88 = &v157[v158];
  if ( v157 != v88 )
    goto LABEL_204;
  v89 = (__int64)v190;
  v90 = (unsigned int *)&v190[v84];
LABEL_212:
  v156 = (unsigned int *)v89;
  do
  {
    v117 = *v156;
    if ( (unsigned int)v117 >= *(_DWORD *)(v180 + 64) )
      sub_1346B0(0.0);
    v118 = *(_QWORD *)(*(_QWORD *)(v180 + 528) + 8 * v117);
    v119 = *(_QWORD *)(v118 + 56);
    if ( sub_32ED40(*(_DWORD *)v119, 0) )
      v119 = *(_QWORD *)(v119 + 16);
    v122 = j__qalloc_or_throw(80, 0, v120, v121);
    v123 = *(_QWORD *)(*(_QWORD *)(v118 + 56) + 24LL);
    *(_QWORD *)(v122 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v122 + 40) = 0;
    *(_QWORD *)(v122 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v122 + 56) = 0;
    *(_QWORD *)(v122 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v122 + 72) = 0;
    sub_330970(v122, v123);
    *(_DWORD *)v122 = 4;
    sub_125180((unsigned __int8 *)(v122 + 32), v185);
    sub_125180((unsigned __int8 *)(v122 + 64), v186);
    sub_A3160(v118, (_QWORD *)v122, v119, 0.0);
    v124 = *(_DWORD *)(v118 + 24);
    ++v156;
    BYTE1(v124) &= ~2u;
    LOBYTE(v124) = v124 | 0x80;
    *(_DWORD *)(v118 + 24) = v124;
  }
  while ( v90 != v156 );
LABEL_217:
  v111 = v158;
  v87 = v157;
LABEL_218:
  v125 = &v87[v111];
  v126 = *(_DWORD *)(a1 + 24);
  BYTE1(v126) &= ~2u;
  LOBYTE(v126) = v126 | 0x80;
  for ( *(_DWORD *)(a1 + 24) = v126; v125 != v87; ++v87 )
  {
    v127 = *(_QWORD *)(a1 + 64);
    v128 = *v87;
    if ( (unsigned int)v128 >= *(_DWORD *)(v127 + 64) )
      sub_1346B0(0.0);
    v129 = *(_QWORD *)(*(_QWORD *)(v127 + 528) + 8 * v128);
    if ( *(_DWORD *)(v129 + 76) != 1 )
    {
      v130 = *(_DWORD *)(v129 + 24);
      BYTE1(v130) &= ~2u;
      LOBYTE(v130) = v130 | 0x80;
      *(_DWORD *)(v129 + 24) = v130;
    }
  }
  v59 = v134 + 1;
LABEL_64:
  if ( v162 )
  {
    v152 = v59;
    *(_QWORD *)&v163 = 0;
    qfree((__int64)v162);
    v59 = v152;
  }
  v153 = v59;
  qfree(v161[0]);
  sub_104E10(v149, 0.0);
  sub_104E10(v138, 0.0);
  v60 = v153;
  if ( v157 )
  {
    *(_QWORD *)&v158 = 0;
    qfree((__int64)v157);
    v60 = v153;
  }
  v154 = v60;
  v175[0] = off_4DDB98;
  sub_136640(&v179);
  return v154;
}

