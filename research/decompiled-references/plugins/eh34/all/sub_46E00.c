__int64 *__fastcall sub_46E00(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbp
  _QWORD *v20; // r15
  void (__fastcall *hexdsp)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v22)(__int64, _QWORD *, __int64); // rax
  __int64 v23; // rdi
  __int64 v25; // rdi
  __int64 v26; // rbp
  _QWORD *v27; // rbx
  void (__fastcall *v28)(__int64, _QWORD *, __int64 **); // rax
  void (__fastcall *v29)(__int64, _QWORD *, char *); // rax
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rbp
  unsigned int v33; // ebx
  int v34; // eax
  __int64 v35; // r15
  unsigned int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // r13
  void (__fastcall *v40)(__int64, __int64, _QWORD); // rax
  __int64 v41; // rsi
  __int64 *v42; // r13
  void (__fastcall *v43)(__int64, __int64 *, _QWORD); // rax
  __int64 *v44; // rdi
  __int64 *v45; // rbx
  __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // r12
  void (__fastcall *v49)(__int64, __int64 *, __int64, __int64); // rax
  unsigned int v50; // r12d
  void (__fastcall *v51)(__int64, __int64 **, __int64, __int64); // rax
  __int64 *v52; // r15
  unsigned __int8 (__fastcall *v53)(__int64, __int64, __int64 *); // rax
  __int64 v54; // rax
  void (__fastcall *v55)(__int64, __int64 *, _QWORD); // rax
  __int64 (__fastcall *v56)(__int64, __int64 *, _QWORD); // rax
  __int64 *v57; // rsi
  int j; // ebx
  __int64 (__fastcall *v59)(__int64, __int64 *, _QWORD); // rax
  __int64 v60; // rax
  __int64 *v61; // rsi
  unsigned __int64 *v62; // rdi
  __int64 k; // rax
  __int64 v64; // rbp
  __int64 v65; // rbx
  __int64 v66; // rbp
  __int64 v67; // r12
  __int64 v68; // rbx
  __int64 (__fastcall *v69)(__int64, __int64, _QWORD); // rax
  _QWORD *v70; // rsi
  int m; // eax
  __int64 (__fastcall *v72)(__int64, __int64, _QWORD); // rax
  int v73; // r14d
  __int64 **v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbp
  __int64 (__fastcall *v78)(__int64, __int64, _QWORD); // rax
  int n; // eax
  __int64 (__fastcall *v80)(__int64, __int64, _QWORD); // rax
  int v81; // r14d
  __int64 **v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // r12
  __int64 v88; // rbp
  __int64 v89; // rax
  _QWORD *v90; // rbx
  __int64 v92; // r13
  void (__fastcall *v93)(__int64, __int64, _QWORD); // rax
  __int64 v94; // rsi
  __int64 v95; // r13
  void (__fastcall *v96)(__int64, __int64, _QWORD); // rax
  __int64 v97; // rsi
  __int64 *v98; // r13
  void (__fastcall *v99)(__int64, __int64 *, _QWORD); // rax
  __int64 v100; // r13
  void (__fastcall *v101)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v102; // r15
  unsigned __int8 (__fastcall *v103)(__int64, __int64, __int64); // rax
  __int64 v104; // rax
  __int64 v105; // r13
  void (__fastcall *v106)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v107; // r15
  unsigned __int8 (__fastcall *v108)(__int64, __int64, __int64); // rax
  __int64 v109; // rcx
  int v110; // edx
  void (__fastcall *v111)(__int64, __int64 *, _QWORD); // rax
  __int64 v112; // r13
  void (__fastcall *v113)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v114; // r15
  unsigned __int8 (__fastcall *v115)(__int64, __int64, __int64); // rax
  __int64 v116; // rax
  void (__fastcall *v117)(__int64, __int64 *, _QWORD); // rax
  __int64 *v118; // [rsp+0h] [rbp-110h]
  __int64 *i; // [rsp+0h] [rbp-110h]
  int v120; // [rsp+8h] [rbp-108h]
  __int64 v121; // [rsp+10h] [rbp-100h]
  unsigned int v122; // [rsp+10h] [rbp-100h]
  __int64 v123; // [rsp+10h] [rbp-100h]
  unsigned int v124; // [rsp+10h] [rbp-100h]
  unsigned int v125; // [rsp+10h] [rbp-100h]
  int v126; // [rsp+10h] [rbp-100h]
  _QWORD *v127; // [rsp+18h] [rbp-F8h]
  __int64 v128; // [rsp+20h] [rbp-F0h]
  __int64 v130; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v131; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v132; // [rsp+48h] [rbp-C8h] BYREF
  __int64 v133; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v134; // [rsp+58h] [rbp-B8h] BYREF
  __int64 v135; // [rsp+60h] [rbp-B0h]
  __int64 v136; // [rsp+68h] [rbp-A8h] BYREF
  __int128 v137; // [rsp+70h] [rbp-A0h]
  __int64 v138; // [rsp+88h] [rbp-88h] BYREF
  __int128 v139; // [rsp+90h] [rbp-80h]
  __int64 *v140; // [rsp+A8h] [rbp-68h] BYREF
  __int128 v141; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v142; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v143; // [rsp+D0h] [rbp-40h]

  v3 = a2[66];
  v4 = *(_QWORD *)(a3 + 40);
  v118 = a2;
  v143 = __readfsqword(0x28u);
  v120 = v3;
  *a1 = 0;
  v128 = (int)v3;
  *(_OWORD *)(a1 + 1) = 0;
  if ( (_DWORD)v3 )
  {
    v6 = qvector_reserve(a1, 0, (int)v3, 8);
    *a1 = v6;
    v7 = v6;
    v8 = a1[1];
    if ( v8 < (int)v3 )
    {
      *(_QWORD *)(v7 + 8 * v8) = v4;
      v9 = v8 + 1;
      if ( v9 < (int)v3 )
      {
        do
          *(_QWORD *)(*a1 + 8 * v9++) = v4;
        while ( (int)v3 != v9 );
      }
    }
    v137 = 0;
    a1[1] = (int)v3;
    v136 = 0;
    v10 = qvector_reserve(&v136, 0, (int)v3, 16);
    v136 = v10;
    if ( (unsigned __int64)v137 < (int)v3 )
    {
      v11 = v137 + 1;
      v12 = 16 * v137 + v10;
      *(_QWORD *)v12 = v4;
      *(_DWORD *)(v12 + 8) = v3;
      if ( v11 < (int)v3 )
      {
        do
        {
          v13 = v11++;
          v14 = v136 + 16 * v13;
          *(_QWORD *)v14 = v4;
          *(_DWORD *)(v14 + 8) = v3;
        }
        while ( (int)v3 != v11 );
      }
    }
    a2 = nullptr;
    v15 = &v138;
    v138 = 0;
    *(_QWORD *)&v137 = (int)v3;
    v140 = nullptr;
    v141 = 0u;
    v142 = 0;
    v139 = 0;
    v16 = qvector_reserve(&v138, 0, (int)v3, 32);
    v17 = *((_QWORD *)&v139 + 1);
    *((_QWORD *)&v139 + 1) = 0;
    v18 = v138;
    v121 = v17;
    v19 = v139 - 1;
    if ( (__int64)v139 - 1 >= 0 )
    {
      v20 = (_QWORD *)v16;
      do
      {
        *v20 = 0;
        v20[1] = 0;
        hexdsp = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(v15, a2);
        hexdsp(203, v20, v18);
        v20[2] = 0;
        v20[3] = 0;
        v22 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(203, v20 + 2);
        a2 = v20 + 2;
        v22(203, v20 + 2, v18 + 16);
        v23 = *(_QWORD *)(v18 + 16);
        v20 += 4;
        v18 += 32;
        qfree(v23);
        v15 = *(__int64 **)(v18 - 32);
        qfree(v15);
      }
      while ( v19-- != 0 );
      v18 = v138;
    }
    v25 = v18;
    qfree(v18);
    v26 = v139;
    v138 = v16;
    *((_QWORD *)&v139 + 1) = v121;
    if ( (unsigned __int64)v139 < (int)v3 )
    {
      while ( 1 )
      {
        v27 = (_QWORD *)(v16 + 32 * v26);
        *v27 = 0;
        v27[1] = 0;
        v28 = (void (__fastcall *)(__int64, _QWORD *, __int64 **))get_hexdsp(v25, a2);
        v28(203, v27, &v140);
        v27[2] = 0;
        v27[3] = 0;
        v29 = (void (__fastcall *)(__int64, _QWORD *, char *))get_hexdsp(203, v27);
        a2 = v27 + 2;
        v25 = 203;
        v29(203, v27 + 2, (char *)&v141 + 8);
        if ( (int)v3 == ++v26 )
          break;
        v16 = v138;
      }
    }
    *(_QWORD *)&v139 = (int)v3;
    qfree(*((_QWORD *)&v141 + 1));
    v30 = (__int64)v140;
    qfree(v140);
    v134 = 0;
    v135 = 0;
    if ( (int)v3 > 0 )
    {
      v31 = 0;
      v32 = 0;
      v33 = 0;
      while ( 1 )
      {
        v35 = v32 + v118[65];
        v36 = *(_DWORD *)(v35 + 8);
        if ( v36 > 2 )
          break;
        if ( v36 )
        {
          v34 = *(_DWORD *)(v35 + 32);
          if ( v34 == 1 )
          {
            v112 = *(_QWORD *)(v35 + 24);
            v113 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(v30, a2);
            v113(418, &v130, a3, v112);
            v114 = v130;
            v115 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(418, &v130);
            a2 = (__int64 *)(a3 + 8);
            v30 = 384;
            if ( v115(384, a3 + 8, v114) )
            {
              v116 = v31 + v136;
              if ( *(int *)(v31 + v136 + 8) > 0 )
              {
                *(_QWORD *)v116 = v112;
                *(_DWORD *)(v116 + 8) = 0;
              }
              v117 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(384, a2);
              a2 = &v134;
              v30 = 205;
              v117(205, &v134, v33);
            }
            goto LABEL_21;
          }
          if ( !v34 )
          {
            v92 = v138 + 2 * v31 + 16;
            v124 = *(_DWORD *)(v35 + 24);
            v93 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v30, a2);
            v94 = v92;
            v93(205, v92, v124);
            v42 = (__int64 *)(v138 + 32LL * *(int *)(v35 + 24));
            v43 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(205, v94);
            goto LABEL_29;
          }
        }
LABEL_21:
        ++v33;
        v32 += 56;
        v31 += 16;
        if ( v120 == v33 )
          goto LABEL_31;
      }
      if ( v36 != 3 )
        goto LABEL_21;
      v37 = *(_DWORD *)(v35 + 32);
      if ( v37 == 1 )
      {
        v105 = *(_QWORD *)(v35 + 24);
        v126 = ***(_DWORD ***)(v35 + 16);
        v106 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(v30, a2);
        v106(418, &v131, a3, v105);
        v107 = v131;
        v108 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(418, &v131);
        a2 = (__int64 *)(a3 + 8);
        v30 = 384;
        if ( v108(384, a3 + 8, v107) )
        {
          v109 = v31 + v136;
          v110 = 2 * ((unsigned int)(v126 - 2) <= 1);
          if ( *(_DWORD *)(v31 + v136 + 8) > v110 )
          {
            *(_QWORD *)v109 = v105;
            *(_DWORD *)(v109 + 8) = v110;
          }
          if ( (unsigned int)(v126 - 2) > 1 )
          {
            v111 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(384, a2);
            a2 = &v134;
            v30 = 205;
            v111(205, &v134, v33);
          }
        }
      }
      else
      {
        if ( v37 )
        {
          v38 = *(_DWORD *)(v35 + 48);
          if ( v38 == 1 )
            goto LABEL_83;
          goto LABEL_27;
        }
        v95 = v138 + 2 * v31 + 16;
        v125 = *(_DWORD *)(v35 + 24);
        v96 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v30, a2);
        v97 = v95;
        v96(205, v95, v125);
        v98 = (__int64 *)(v138 + 32LL * *(int *)(v35 + 24));
        v99 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(205, v97);
        a2 = v98;
        v30 = 205;
        v99(205, v98, v33);
      }
      v35 = v32 + v118[65];
      v38 = *(_DWORD *)(v35 + 48);
      if ( v38 == 1 )
      {
LABEL_83:
        v100 = *(_QWORD *)(v35 + 40);
        v101 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(v30, a2);
        v101(418, &v132, a3, v100);
        v102 = v132;
        v103 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(418, &v132);
        a2 = (__int64 *)(a3 + 8);
        v30 = 384;
        if ( v103(384, a3 + 8, v102) )
        {
          v104 = v31 + v136;
          if ( *(int *)(v31 + v136 + 8) > 1 )
          {
            *(_QWORD *)v104 = v100;
            *(_DWORD *)(v104 + 8) = 1;
          }
        }
        goto LABEL_21;
      }
LABEL_27:
      if ( !v38 )
      {
        v39 = v138 + 2 * v31 + 16;
        v122 = *(_DWORD *)(v35 + 40);
        v40 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v30, a2);
        v41 = v39;
        v40(205, v39, v122);
        v42 = (__int64 *)(v138 + 32LL * *(int *)(v35 + 40));
        v43 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(205, v41);
LABEL_29:
        a2 = v42;
        v30 = 205;
        v43(205, v42, v33);
        goto LABEL_21;
      }
      goto LABEL_21;
    }
  }
  else
  {
    v136 = 0;
    v138 = 0;
    v134 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
  }
LABEL_31:
  v44 = &v133;
  v127 = v118 + 11;
  v123 = v118[13];
  if ( (__int64 *)v123 != v118 + 11 )
  {
    do
    {
      v45 = *(__int64 **)(v123 + 40);
      for ( i = &v45[5 * *(_QWORD *)(v123 + 48)]; i != v45; v45 += 5 )
      {
        v46 = *v45;
        v47 = *(_QWORD *)(v45[1] + 8);
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 32);
          if ( v48 != -1 )
          {
            v49 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(v44, a2);
            a2 = &v133;
            v44 = (__int64 *)(&off_1A0 + 2);
            v49(418, &v133, a3, v48);
            v46 = v133;
            if ( v133 == -1 )
              v46 = v48;
          }
        }
        v50 = *((_DWORD *)v45 + 8);
        v51 = (void (__fastcall *)(__int64, __int64 **, __int64, __int64))get_hexdsp(v44, a2);
        v51(418, &v140, a3, v46);
        v52 = v140;
        v53 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64 *))get_hexdsp(418, &v140);
        a2 = (__int64 *)(a3 + 8);
        v44 = &qword_180;
        if ( v53(384, a3 + 8, v52) )
        {
          v54 = v136 + 16LL * (int)v50;
          if ( *(int *)(v54 + 8) > 0 )
          {
            *(_QWORD *)v54 = v46;
            *(_DWORD *)(v54 + 8) = 0;
          }
          v55 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(384, a2);
          a2 = &v134;
          v44 = &qword_C8 + 5;
          v55(205, &v134, v50);
        }
      }
      v44 = (__int64 *)v123;
      v123 = std::_Rb_tree_increment(v123);
    }
    while ( (_QWORD *)v123 != v127 );
  }
  v140 = nullptr;
  v141 = 0;
  v56 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v44, a2);
  v57 = &v134;
  for ( j = v56(227, &v134, 0); (_DWORD)v135 != j; j = v59(227, &v134, (unsigned int)(j + 1)) )
  {
    v60 = v141;
    v61 = v140;
    LODWORD(v133) = j;
    v62 = (unsigned __int64 *)(v141 + 1);
    if ( &v133 < v140 || &v133 >= (__int64 *)((char *)v140 + 4 * *((_QWORD *)&v141 + 1)) )
    {
      if ( *((_QWORD *)&v141 + 1) < (unsigned __int64)v62 )
      {
LABEL_50:
        v62 = (unsigned __int64 *)&v140;
        v140 = (__int64 *)qvector_reserve(&v140, v140, v141 + 1, 4);
        v61 = v140;
        v60 = v141;
      }
    }
    else if ( *((_QWORD *)&v141 + 1) < (unsigned __int64)v62 )
    {
      goto LABEL_50;
    }
    *((_DWORD *)v61 + v60) = j;
    *(_QWORD *)&v141 = v141 + 1;
    v59 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v62, v61);
    v57 = &v134;
  }
  for ( k = v141; (_QWORD)v141; k = v141 )
  {
    v64 = *((int *)v140 + k - 1);
    *(_QWORD *)&v141 = k - 1;
    v65 = v64;
    v66 = 16 * v64;
    v67 = v66 + v136;
    v68 = v138 + 32 * v65;
    v69 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(227, v57);
    v70 = (_QWORD *)v68;
    for ( m = v69(227, v68, 0); ; m = v72(227, v68, (unsigned int)(v73 + 1)) )
    {
      v73 = m;
      if ( *(_DWORD *)(v68 + 8) == m )
        break;
      v74 = (__int64 **)*(unsigned int *)(v67 + 8);
      v75 = v136 + 16LL * m;
      if ( *(_DWORD *)(v75 + 8) > (int)v74 + 1 )
      {
        *(_DWORD *)(v75 + 8) = (_DWORD)v74 + 1;
        *(_QWORD *)v75 = *(_QWORD *)v67;
        v76 = v141;
        v70 = v140;
        if ( *((_QWORD *)&v141 + 1) < (unsigned __int64)(v141 + 1) )
        {
          v74 = &v140;
          v140 = (__int64 *)qvector_reserve(&v140, v140, v141 + 1, 4);
          v70 = v140;
          v76 = v141;
        }
        *((_DWORD *)v70 + v76) = v73;
        *(_QWORD *)&v141 = v141 + 1;
      }
      v72 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v74, v70);
      v70 = (_QWORD *)v68;
    }
    v77 = v136 + v66;
    v78 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(227, v70);
    v57 = (__int64 *)(v68 + 16);
    for ( n = v78(227, v68 + 16, 0); ; n = v80(227, v68 + 16, (unsigned int)(v81 + 1)) )
    {
      v81 = n;
      if ( *(_DWORD *)(v68 + 24) == n )
        break;
      v82 = (__int64 **)*(unsigned int *)(v77 + 8);
      v83 = v136 + 16LL * n;
      if ( *(_DWORD *)(v83 + 8) > (int)v82 + 1 )
      {
        *(_DWORD *)(v83 + 8) = (_DWORD)v82 + 1;
        *(_QWORD *)v83 = *(_QWORD *)v77;
        v84 = v141;
        v57 = v140;
        if ( *((_QWORD *)&v141 + 1) < (unsigned __int64)(v141 + 1) )
        {
          v82 = &v140;
          v140 = (__int64 *)qvector_reserve(&v140, v140, v141 + 1, 4);
          v57 = v140;
          v84 = v141;
        }
        *((_DWORD *)v57 + v84) = v81;
        *(_QWORD *)&v141 = v141 + 1;
      }
      v80 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v82, v57);
      v57 = (__int64 *)(v68 + 16);
    }
  }
  v85 = 0;
  if ( v128 )
  {
    do
    {
      *(_QWORD *)(*a1 + 8 * v85) = *(_QWORD *)(v136 + 16 * v85);
      ++v85;
    }
    while ( v128 != v85 );
  }
  if ( v140 )
  {
    *(_QWORD *)&v141 = 0;
    qfree(v140);
  }
  qfree(v134);
  v86 = v138;
  if ( v138 )
  {
    v87 = v139;
    if ( (_QWORD)v139 )
    {
      v88 = 0;
      do
      {
        v89 = v88++;
        v90 = (_QWORD *)(v86 + 32 * v89);
        qfree(v90[2]);
        qfree(*v90);
        v86 = v138;
      }
      while ( v87 != v88 );
    }
    *(_QWORD *)&v139 = 0;
    qfree(v86);
  }
  if ( v136 )
  {
    *(_QWORD *)&v137 = 0;
    qfree(v136);
  }
  return a1;
}
