__int64 __fastcall sub_21C60(unsigned int *a1, _QWORD *a2, size_t *a3, void *a4, _QWORD *a5, _QWORD *a6, __int64 *a7)
{
  size_t v7; // rdx
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rax
  unsigned int *v20; // r12
  __int64 v21; // r13
  unsigned int *v22; // r15
  char *v23; // rax
  _QWORD *v24; // rax
  char *v25; // r14
  unsigned int *v26; // r12
  const char *v27; // rsi
  const char *v28; // rdi
  int v29; // eax
  unsigned int *v30; // rcx
  __int64 v31; // rax
  unsigned int *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 *v35; // rsi
  unsigned __int64 v36; // rax
  unsigned int v37; // ebx
  const char *v39; // r8
  int v40; // eax
  const char *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  char *v45; // rax
  __int64 v46; // r13
  unsigned int *v47; // r15
  char *v48; // rax
  _QWORD *v49; // rax
  char *v50; // r14
  unsigned int *v51; // r12
  const char *v52; // rsi
  const char *v53; // rdi
  int v54; // eax
  unsigned int *v55; // rcx
  __int64 v56; // rax
  unsigned int *v57; // rcx
  __int64 v58; // rdx
  const char *v59; // r8
  int v60; // eax
  const char *v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // r13
  unsigned int *v66; // r15
  char *v67; // rax
  _QWORD *v68; // rax
  char *v69; // r14
  unsigned int *v70; // r12
  const char *v71; // rsi
  const char *v72; // rdi
  int v73; // eax
  unsigned int *v74; // rcx
  __int64 v75; // rax
  unsigned int *v76; // rcx
  __int64 v77; // rdx
  const char *v78; // r8
  int v79; // eax
  const char *v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // r13
  unsigned int *v85; // r15
  char *v86; // rax
  _QWORD *v87; // rax
  char *v88; // r14
  unsigned int *v89; // r12
  const char *v90; // rsi
  const char *v91; // rdi
  int v92; // eax
  unsigned int *v93; // rcx
  __int64 v94; // rax
  unsigned int *v95; // rcx
  __int64 v96; // rdx
  const char *v97; // r8
  int v98; // eax
  const char *v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rsi
  __int64 v102; // rax
  char *v103; // rax
  __int64 v104; // r15
  unsigned int *v105; // r14
  char *v106; // rax
  _QWORD *v107; // rax
  char *v108; // r13
  unsigned int *v109; // r12
  const char *v110; // rsi
  const char *v111; // rdi
  int v112; // eax
  unsigned int *v113; // rcx
  __int64 v114; // rax
  unsigned int *v115; // rcx
  __int64 v116; // rdx
  unsigned int *v117; // r12
  const char *v118; // r8
  int v119; // eax
  const char *v120; // rsi
  __int64 v121; // rbx
  __int64 *v122; // r12
  __int64 v123; // r13
  __int64 v124; // rdx
  __int64 v125; // r12
  __int64 v126; // r14
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // r12
  __int64 v130; // r14
  __int64 v131; // rax
  __int64 *v132; // rax
  __int64 *v133; // rax
  _QWORD *v135; // [rsp+10h] [rbp-180h]
  _QWORD *v136; // [rsp+10h] [rbp-180h]
  _QWORD *v137; // [rsp+10h] [rbp-180h]
  _QWORD *v138; // [rsp+10h] [rbp-180h]
  unsigned int *v139; // [rsp+18h] [rbp-178h]
  unsigned int *v140; // [rsp+18h] [rbp-178h]
  unsigned int *v141; // [rsp+18h] [rbp-178h]
  unsigned int *v142; // [rsp+18h] [rbp-178h]
  __int64 v146; // [rsp+48h] [rbp-148h]
  __int64 v147; // [rsp+48h] [rbp-148h]
  __int64 v148; // [rsp+48h] [rbp-148h]
  __int64 v149; // [rsp+48h] [rbp-148h]
  _QWORD *v150; // [rsp+48h] [rbp-148h]
  size_t n; // [rsp+58h] [rbp-138h]
  char *v152; // [rsp+68h] [rbp-128h]
  char *v153; // [rsp+68h] [rbp-128h]
  char *v154; // [rsp+68h] [rbp-128h]
  char *v155; // [rsp+68h] [rbp-128h]
  unsigned int *v156; // [rsp+68h] [rbp-128h]
  size_t v157; // [rsp+70h] [rbp-120h]
  __int64 v158; // [rsp+70h] [rbp-120h]
  char *v159; // [rsp+78h] [rbp-118h]
  unsigned int *v162; // [rsp+88h] [rbp-108h]
  unsigned int *v163; // [rsp+88h] [rbp-108h]
  unsigned int *v164; // [rsp+88h] [rbp-108h]
  unsigned int *v165; // [rsp+88h] [rbp-108h]
  unsigned int *v166; // [rsp+88h] [rbp-108h]
  __int64 v167; // [rsp+98h] [rbp-F8h] BYREF
  __int64 v168; // [rsp+A0h] [rbp-F0h] BYREF
  size_t v169; // [rsp+A8h] [rbp-E8h] BYREF
  size_t v170; // [rsp+B0h] [rbp-E0h] BYREF
  unsigned __int64 v171; // [rsp+B8h] [rbp-D8h] BYREF
  __int64 v172; // [rsp+C0h] [rbp-D0h] BYREF
  __int128 v173; // [rsp+C8h] [rbp-C8h]
  __int64 v174; // [rsp+E0h] [rbp-B0h] BYREF
  __int128 v175; // [rsp+E8h] [rbp-A8h]
  char *s2; // [rsp+100h] [rbp-90h] BYREF
  __int128 v177; // [rsp+108h] [rbp-88h]
  __int64 *v178; // [rsp+120h] [rbp-70h] BYREF
  __int128 v179; // [rsp+128h] [rbp-68h]
  __int64 v180; // [rsp+138h] [rbp-58h]
  __int64 v181; // [rsp+140h] [rbp-50h]
  __int128 v182; // [rsp+148h] [rbp-48h]
  unsigned __int64 v183; // [rsp+158h] [rbp-38h]

  v183 = __readfsqword(0x28u);
  if ( *((_QWORD *)a1 + 259) == -1 )
  {
    v37 = 0;
    sub_15ED0(a7);
    return v37;
  }
  v180 = 0;
  v181 = 0;
  v179 = 0;
  v182 = 0;
  v178 = (__int64 *)qvector_reserve();
  memset(v178, 0, 0x28u);
  *(_QWORD *)&v179 = 40;
  if ( a3 )
  {
    v7 = 8;
    v8 = v178;
    n = *a3;
    v9 = 40;
    if ( *((_QWORD *)&v179 + 1) > 0x2Fu )
      goto LABEL_4;
  }
  else
  {
    if ( *((_QWORD *)&v179 + 1) > 0x2Fu )
    {
      v178[5] = 0;
      v10 = v178;
      *(_QWORD *)&v179 = 48;
      v178[5] = 0;
LABEL_31:
      LOBYTE(v172) = 0;
      v13 = *((_QWORD *)&v179 + 1);
      v11 = 48;
      v12 = 56;
      n = 0;
      if ( &v172 < v10 )
        goto LABEL_32;
      goto LABEL_49;
    }
    n = 0;
  }
  v178 = (__int64 *)qvector_reserve();
  v8 = v178;
  v9 = v179;
  v7 = 48 - v179;
LABEL_4:
  memset((char *)v8 + v9, 0, v7);
  v10 = v178;
  *(_QWORD *)&v179 = 48;
  v178[5] = n;
  if ( !n )
    goto LABEL_31;
  sub_1A5B0((__int64 *)&v178, a4, n);
  v11 = v179;
  LOBYTE(v172) = 0;
  v12 = v179 + 8;
  if ( (unsigned __int64)v179 < 0xFFFFFFFFFFFFFFF8LL )
  {
    v10 = v178;
    v13 = *((_QWORD *)&v179 + 1);
    if ( &v172 < v178 )
    {
      if ( *((_QWORD *)&v179 + 1) >= v12 )
        goto LABEL_36;
      goto LABEL_254;
    }
LABEL_49:
    if ( &v172 < (__int64 *)((char *)v10 + v13) )
    {
      if ( v13 < v12 )
      {
        v133 = (__int64 *)qvector_reserve();
        v11 = v179;
        v178 = v133;
        v10 = v133;
        if ( (unsigned __int64)v179 >= v12 )
          goto LABEL_39;
        goto LABEL_52;
      }
      if ( v11 < v12 )
      {
LABEL_52:
        v34 = a2;
        while ( 1 )
        {
          *((_BYTE *)v10 + v11++) = 0;
          if ( v11 == v12 )
            break;
          v10 = v178;
        }
LABEL_38:
        a2 = v34;
LABEL_39:
        v14 = v12 + 8;
        *(_QWORD *)&v179 = v12;
        LOBYTE(v174) = 0;
        if ( v12 + 8 < v12 )
        {
          v35 = v178;
          v36 = *((_QWORD *)&v179 + 1);
          v14 = 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)&v179 = 0x7FFFFFFFFFFFFFFFLL;
          LOBYTE(s2) = 0;
          if ( &s2 < (char **)v178 )
          {
            v16 = 0x8000000000000003LL;
            if ( *((_QWORD *)&v179 + 1) > 0x8000000000000002LL )
              goto LABEL_44;
            goto LABEL_256;
          }
          v16 = 0x8000000000000003LL;
LABEL_233:
          if ( &s2 < (char **)((char *)v35 + v36) )
          {
            if ( v36 < v16 )
            {
              v178 = (__int64 *)qvector_reserve();
              v14 = v179;
            }
            if ( v14 < v16 )
            {
              do
                *((_BYTE *)v178 + v14++) = 0;
              while ( v14 != v16 );
            }
            goto LABEL_14;
          }
LABEL_250:
          if ( v36 >= v16 )
          {
LABEL_251:
            if ( v14 >= v16 )
              goto LABEL_14;
            v35 = v178;
LABEL_44:
            while ( 1 )
            {
              *((_BYTE *)v35 + v14++) = (_BYTE)s2;
              if ( v14 == v16 )
                break;
              v35 = v178;
            }
            goto LABEL_14;
          }
LABEL_256:
          v178 = (__int64 *)qvector_reserve();
          v14 = v179;
          goto LABEL_251;
        }
        v10 = v178;
        v13 = *((_QWORD *)&v179 + 1);
LABEL_245:
        if ( &v174 < v10 )
          goto LABEL_246;
        goto LABEL_59;
      }
LABEL_261:
      *(_QWORD *)&v179 = v12;
      v14 = v12 + 8;
      LOBYTE(v174) = 0;
      goto LABEL_245;
    }
LABEL_32:
    if ( v13 >= v12 )
    {
      if ( v11 >= v12 )
        goto LABEL_261;
LABEL_36:
      while ( 1 )
      {
        *((_BYTE *)v10 + v11++) = v172;
        if ( v11 == v12 )
          break;
        v10 = v178;
      }
      v34 = a2;
      goto LABEL_38;
    }
LABEL_254:
    v132 = (__int64 *)qvector_reserve();
    v11 = v179;
    v178 = v132;
    v10 = v132;
    if ( (unsigned __int64)v179 >= v12 )
      goto LABEL_39;
    goto LABEL_36;
  }
  v10 = v178;
  v13 = *((_QWORD *)&v179 + 1);
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)&v179 = 0x7FFFFFFFFFFFFFFFLL;
  LOBYTE(v174) = 0;
  if ( &v174 >= v178 )
  {
    v14 = 0x8000000000000007LL;
LABEL_59:
    if ( &v174 < (__int64 *)((char *)v10 + v13) )
    {
      if ( v13 < v14 )
      {
        v178 = (__int64 *)qvector_reserve();
        v12 = v179;
      }
      v15 = a2;
      if ( v12 < v14 )
      {
        do
          *((_BYTE *)v178 + v12++) = 0;
        while ( v12 != v14 );
        goto LABEL_11;
      }
      goto LABEL_12;
    }
LABEL_246:
    if ( v13 >= v14 )
      goto LABEL_247;
    goto LABEL_257;
  }
  v14 = 0x8000000000000007LL;
  if ( *((_QWORD *)&v179 + 1) > 0x8000000000000006LL )
    goto LABEL_8;
LABEL_257:
  v178 = (__int64 *)qvector_reserve();
  v12 = v179;
LABEL_247:
  v10 = v178;
  if ( v12 < v14 )
  {
LABEL_8:
    v15 = a2;
    while ( 1 )
    {
      *((_BYTE *)v10 + v12++) = v174;
      if ( v12 == v14 )
        break;
      v10 = v178;
    }
LABEL_11:
    a2 = v15;
  }
LABEL_12:
  v16 = v14 + 4;
  *(_QWORD *)&v179 = v14;
  LOBYTE(s2) = 0;
  if ( v14 + 4 >= v14 )
  {
    v35 = v178;
    v36 = *((_QWORD *)&v179 + 1);
    if ( &s2 < (char **)v178 )
      goto LABEL_250;
    goto LABEL_233;
  }
  v16 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
  *(_QWORD *)&v179 = v16;
  v172 = 0;
  v173 = 0;
  v174 = 0;
  v169 = n + 48;
  v170 = n + 56;
  v171 = 0x8000000000000000LL;
  v17 = (int)a1[294];
  v175 = 0;
  v167 = 40;
  v168 = 48;
  v157 = *(int *)(qword_9AD30 + 144 * v17 + 128);
  v172 = qvector_reserve();
  v18 = 32 * v173 + v172;
  *(_QWORD *)(v18 + 8) = 0;
  *(_OWORD *)(v18 + 16) = 0;
  v146 = v18;
  *(_QWORD *)&v173 = v173 + 1;
  s2 = nullptr;
  v177 = 0;
  v19 = (char *)qvector_reserve();
  s2 = v19;
  v20 = a1 + 312;
  *(_QWORD *)&v177 = 4;
  *(_WORD *)v19 = 25458;
  v19[2] = 120;
  s2[3] = 0;
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_71;
  v21 = v177;
  v22 = a1 + 312;
  v23 = (char *)src;
  v139 = a1 + 312;
  if ( (_QWORD)v177 )
    v23 = s2;
  v152 = v23;
  v24 = a2;
  v162 = *((unsigned int **)a1 + 157);
  v25 = s2;
  v135 = v24;
  while ( 1 )
  {
    v26 = v162;
    v31 = *((_QWORD *)v162 + 5);
    if ( !v21 )
      break;
    if ( v31 )
      goto LABEL_28;
    v26 = v162;
    v27 = v25;
    v28 = src;
LABEL_20:
    v29 = strcmp(v28, v27);
    v30 = *((unsigned int **)v162 + 2);
    v162 = *((unsigned int **)v162 + 3);
    if ( v29 >= 0 )
    {
      v162 = v30;
      v22 = v26;
    }
    if ( !v162 )
    {
      v20 = v139;
      v39 = v25;
      a2 = v135;
      goto LABEL_66;
    }
  }
  v32 = v162;
  if ( v31 )
  {
LABEL_27:
    v162 = v32;
    v26 = v32;
LABEL_28:
    v27 = v152;
    v28 = *((const char **)v162 + 4);
    goto LABEL_20;
  }
  while ( 1 )
  {
    v33 = *((_QWORD *)v32 + 2);
    v22 = v32;
    if ( !v33 )
      break;
    v32 = *((unsigned int **)v32 + 2);
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_27;
  }
  v20 = v139;
  v39 = v25;
  v22 = v32;
  a2 = v135;
LABEL_66:
  v40 = -1;
  if ( v20 != v22 )
  {
    if ( *((_QWORD *)v22 + 5) )
    {
      v41 = *((const char **)v22 + 4);
      if ( !v21 )
        v39 = src;
LABEL_70:
      if ( strcmp(v39, v41) < 0 )
      {
LABEL_71:
        v40 = -1;
        goto LABEL_72;
      }
    }
    else
    {
      v41 = src;
      if ( v21 )
        goto LABEL_70;
    }
    v40 = v22[14];
  }
LABEL_72:
  *(_DWORD *)v146 = v40;
  if ( s2 )
  {
    *(_QWORD *)&v177 = 0;
    qfree();
  }
  *(_DWORD *)(v146 + 4) = 1;
  if ( v157 )
    sub_1A5B0((__int64 *)(v146 + 8), &v167, v157);
  v42 = v173;
  v43 = v172;
  if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v173 + 1) )
  {
    v172 = qvector_reserve();
    v42 = v173;
    v43 = v172;
  }
  v44 = v43 + 32 * v42;
  *(_QWORD *)(v44 + 8) = 0;
  *(_OWORD *)(v44 + 16) = 0;
  v147 = v44;
  *(_QWORD *)&v173 = v173 + 1;
  s2 = nullptr;
  v177 = 0;
  v45 = (char *)qvector_reserve();
  s2 = v45;
  *(_QWORD *)&v177 = 4;
  *(_WORD *)v45 = 25714;
  v45[2] = 120;
  s2[3] = 0;
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_101;
  v46 = v177;
  v47 = v20;
  v48 = (char *)src;
  v140 = v20;
  if ( (_QWORD)v177 )
    v48 = s2;
  v153 = v48;
  v49 = a2;
  v163 = *((unsigned int **)a1 + 157);
  v50 = s2;
  v136 = v49;
  while ( 2 )
  {
    v51 = v163;
    v56 = *((_QWORD *)v163 + 5);
    if ( v46 )
    {
      if ( !v56 )
      {
        v51 = v163;
        v52 = v50;
        v53 = src;
        goto LABEL_84;
      }
LABEL_92:
      v52 = v153;
      v53 = *((const char **)v163 + 4);
LABEL_84:
      v54 = strcmp(v53, v52);
      v55 = *((unsigned int **)v163 + 2);
      v163 = *((unsigned int **)v163 + 3);
      if ( v54 >= 0 )
      {
        v163 = v55;
        v47 = v51;
      }
      if ( !v163 )
      {
        v20 = v140;
        v59 = v50;
        a2 = v136;
        goto LABEL_96;
      }
      continue;
    }
    break;
  }
  v57 = v163;
  if ( v56 )
  {
LABEL_91:
    v163 = v57;
    v51 = v57;
    goto LABEL_92;
  }
  while ( 1 )
  {
    v58 = *((_QWORD *)v57 + 2);
    v47 = v57;
    if ( !v58 )
      break;
    v57 = *((unsigned int **)v57 + 2);
    if ( *(_QWORD *)(v58 + 40) )
      goto LABEL_91;
  }
  v20 = v140;
  v59 = v50;
  v47 = v57;
  a2 = v136;
LABEL_96:
  v60 = -1;
  if ( v20 != v47 )
  {
    if ( *((_QWORD *)v47 + 5) )
    {
      v61 = *((const char **)v47 + 4);
      if ( !v46 )
        v59 = src;
LABEL_100:
      if ( strcmp(v59, v61) < 0 )
      {
LABEL_101:
        v60 = -1;
        goto LABEL_102;
      }
    }
    else
    {
      v61 = src;
      if ( v46 )
        goto LABEL_100;
    }
    v60 = v47[14];
  }
LABEL_102:
  *(_DWORD *)v147 = v60;
  if ( s2 )
  {
    *(_QWORD *)&v177 = 0;
    qfree();
  }
  *(_DWORD *)(v147 + 4) = 1;
  if ( v157 )
    sub_1A5B0((__int64 *)(v147 + 8), &v168, v157);
  v62 = v173;
  v63 = v172;
  if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v173 + 1) )
  {
    v172 = qvector_reserve();
    v62 = v173;
    v63 = v172;
  }
  v64 = v63 + 32 * v62;
  *(_QWORD *)(v64 + 8) = 0;
  *(_OWORD *)(v64 + 16) = 0;
  v148 = v64;
  *(_QWORD *)&v173 = v173 + 1;
  s2 = nullptr;
  v177 = 0;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v177 = 3;
  strcpy(s2, "r8");
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_131;
  v65 = v177;
  v66 = v20;
  v67 = (char *)src;
  v141 = v20;
  if ( (_QWORD)v177 )
    v67 = s2;
  v154 = v67;
  v68 = a2;
  v164 = *((unsigned int **)a1 + 157);
  v69 = s2;
  v137 = v68;
  while ( 2 )
  {
    v70 = v164;
    v75 = *((_QWORD *)v164 + 5);
    if ( v65 )
    {
      if ( !v75 )
      {
        v70 = v164;
        v71 = v69;
        v72 = src;
        goto LABEL_114;
      }
LABEL_122:
      v71 = v154;
      v72 = *((const char **)v164 + 4);
LABEL_114:
      v73 = strcmp(v72, v71);
      v74 = *((unsigned int **)v164 + 2);
      v164 = *((unsigned int **)v164 + 3);
      if ( v73 >= 0 )
      {
        v164 = v74;
        v66 = v70;
      }
      if ( !v164 )
      {
        v20 = v141;
        v78 = v69;
        a2 = v137;
        goto LABEL_126;
      }
      continue;
    }
    break;
  }
  v76 = v164;
  if ( v75 )
  {
LABEL_121:
    v164 = v76;
    v70 = v76;
    goto LABEL_122;
  }
  while ( 1 )
  {
    v77 = *((_QWORD *)v76 + 2);
    v66 = v76;
    if ( !v77 )
      break;
    v76 = *((unsigned int **)v76 + 2);
    if ( *(_QWORD *)(v77 + 40) )
      goto LABEL_121;
  }
  v20 = v141;
  v78 = v69;
  v66 = v76;
  a2 = v137;
LABEL_126:
  v79 = -1;
  if ( v20 != v66 )
  {
    if ( *((_QWORD *)v66 + 5) )
    {
      v80 = *((const char **)v66 + 4);
      if ( !v65 )
        v78 = src;
LABEL_130:
      if ( strcmp(v78, v80) < 0 )
      {
LABEL_131:
        v79 = -1;
        goto LABEL_132;
      }
    }
    else
    {
      v80 = src;
      if ( v65 )
        goto LABEL_130;
    }
    v79 = v66[14];
  }
LABEL_132:
  *(_DWORD *)v148 = v79;
  if ( s2 )
  {
    *(_QWORD *)&v177 = 0;
    qfree();
  }
  *(_DWORD *)(v148 + 4) = 1;
  if ( v157 )
    sub_1A5B0((__int64 *)(v148 + 8), &v169, v157);
  v81 = v173;
  v82 = v172;
  if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v173 + 1) )
  {
    v172 = qvector_reserve();
    v81 = v173;
    v82 = v172;
  }
  v83 = v82 + 32 * v81;
  *(_QWORD *)(v83 + 8) = 0;
  *(_OWORD *)(v83 + 16) = 0;
  v149 = v83;
  *(_QWORD *)&v173 = v173 + 1;
  s2 = nullptr;
  v177 = 0;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v177 = 3;
  strcpy(s2, "r9");
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_161;
  v84 = v177;
  v85 = v20;
  v86 = (char *)src;
  v142 = v20;
  if ( (_QWORD)v177 )
    v86 = s2;
  v155 = v86;
  v87 = a2;
  v165 = *((unsigned int **)a1 + 157);
  v88 = s2;
  v138 = v87;
  while ( 2 )
  {
    v89 = v165;
    v94 = *((_QWORD *)v165 + 5);
    if ( v84 )
    {
      if ( !v94 )
      {
        v89 = v165;
        v90 = v88;
        v91 = src;
        goto LABEL_144;
      }
LABEL_152:
      v90 = v155;
      v91 = *((const char **)v165 + 4);
LABEL_144:
      v92 = strcmp(v91, v90);
      v93 = *((unsigned int **)v165 + 2);
      v165 = *((unsigned int **)v165 + 3);
      if ( v92 >= 0 )
      {
        v165 = v93;
        v85 = v89;
      }
      if ( !v165 )
      {
        v20 = v142;
        v97 = v88;
        a2 = v138;
        goto LABEL_156;
      }
      continue;
    }
    break;
  }
  v95 = v165;
  if ( v94 )
  {
LABEL_151:
    v165 = v95;
    v89 = v95;
    goto LABEL_152;
  }
  while ( 1 )
  {
    v96 = *((_QWORD *)v95 + 2);
    v85 = v95;
    if ( !v96 )
      break;
    v95 = *((unsigned int **)v95 + 2);
    if ( *(_QWORD *)(v96 + 40) )
      goto LABEL_151;
  }
  v20 = v142;
  v97 = v88;
  v85 = v95;
  a2 = v138;
LABEL_156:
  v98 = -1;
  if ( v20 != v85 )
  {
    if ( *((_QWORD *)v85 + 5) )
    {
      v99 = *((const char **)v85 + 4);
      if ( !v84 )
        v97 = src;
LABEL_160:
      if ( strcmp(v97, v99) < 0 )
      {
LABEL_161:
        v98 = -1;
        goto LABEL_162;
      }
    }
    else
    {
      v99 = src;
      if ( v84 )
        goto LABEL_160;
    }
    v98 = v85[14];
  }
LABEL_162:
  *(_DWORD *)v149 = v98;
  if ( s2 )
  {
    *(_QWORD *)&v177 = 0;
    qfree();
  }
  *(_DWORD *)(v149 + 4) = 1;
  if ( v157 )
    sub_1A5B0((__int64 *)(v149 + 8), &v170, v157);
  v100 = v175;
  v101 = v174;
  if ( *((_QWORD *)&v175 + 1) < (unsigned __int64)(v175 + 1) )
  {
    v174 = qvector_reserve();
    v100 = v175;
    v101 = v174;
  }
  v102 = v101 + 32 * v100;
  *(_QWORD *)(v102 + 8) = 0;
  *(_OWORD *)(v102 + 16) = 0;
  v158 = v102;
  *(_QWORD *)&v175 = v175 + 1;
  s2 = nullptr;
  v177 = 0;
  v103 = (char *)qvector_reserve();
  s2 = v103;
  *(_QWORD *)&v177 = 4;
  *(_WORD *)v103 = 24946;
  v103[2] = 120;
  s2[3] = 0;
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_191;
  v104 = v177;
  v105 = v20;
  v106 = (char *)src;
  v156 = v20;
  if ( (_QWORD)v177 )
    v106 = s2;
  v159 = v106;
  v107 = a2;
  v166 = *((unsigned int **)a1 + 157);
  v108 = s2;
  v150 = v107;
  while ( 2 )
  {
    v109 = v166;
    v114 = *((_QWORD *)v166 + 5);
    if ( v104 )
    {
      if ( !v114 )
      {
        v109 = v166;
        v110 = v108;
        v111 = src;
        goto LABEL_174;
      }
LABEL_182:
      v110 = v159;
      v111 = *((const char **)v166 + 4);
LABEL_174:
      v112 = strcmp(v111, v110);
      v113 = *((unsigned int **)v166 + 2);
      v166 = *((unsigned int **)v166 + 3);
      if ( v112 >= 0 )
      {
        v166 = v113;
        v105 = v109;
      }
      if ( !v166 )
      {
        v117 = v156;
        v118 = v108;
        a2 = v150;
        goto LABEL_186;
      }
      continue;
    }
    break;
  }
  v115 = v166;
  if ( v114 )
  {
LABEL_181:
    v166 = v115;
    v109 = v115;
    goto LABEL_182;
  }
  while ( 1 )
  {
    v116 = *((_QWORD *)v115 + 2);
    v105 = v115;
    if ( !v116 )
      break;
    v115 = *((unsigned int **)v115 + 2);
    if ( *(_QWORD *)(v116 + 40) )
      goto LABEL_181;
  }
  v117 = v156;
  v118 = v108;
  v105 = v115;
  a2 = v150;
LABEL_186:
  v119 = -1;
  if ( v117 != v105 )
  {
    if ( *((_QWORD *)v105 + 5) )
    {
      v120 = *((const char **)v105 + 4);
      if ( !v104 )
        v118 = src;
LABEL_190:
      if ( strcmp(v118, v120) < 0 )
      {
LABEL_191:
        v119 = -1;
        goto LABEL_192;
      }
    }
    else
    {
      v120 = src;
      if ( v104 )
        goto LABEL_190;
    }
    v119 = v105[14];
  }
LABEL_192:
  *(_DWORD *)v158 = v119;
  if ( s2 )
  {
    *(_QWORD *)&v177 = 0;
    qfree();
  }
  *(_DWORD *)(v158 + 4) = 0;
  sub_1A5B0((__int64 *)(v158 + 8), &v171, 8u);
  v121 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64, __int64 *, __int64 **, __int64 *, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 424LL))(
           a1,
           *((_QWORD *)a1 + 259),
           a1[341],
           40,
           &v172,
           &v178,
           &v174,
           a7,
           0,
           0);
  if ( v121 == -1 )
  {
LABEL_199:
    v37 = 0;
  }
  else
  {
    if ( a2 )
      *a2 = **(_QWORD **)(v174 + 8);
    v122 = v178;
    v123 = v179;
    if ( (*(__int64 (__fastcall **)(unsigned int *, __int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           v121,
           v178,
           v179,
           0) != v123 )
    {
      sub_15ED0(a7);
      goto LABEL_199;
    }
    if ( a3 )
      *a3 = *(__int64 *)((char *)v122 + v167);
    if ( v122 && n )
      memcpy(a4, (char *)v122 + v168, n);
    if ( a5 )
      *a5 = *(__int64 *)((char *)v122 + v169);
    if ( a6 )
      *a6 = *(__int64 *)((char *)v122 + v170);
    v37 = 1;
  }
  if ( (*(unsigned int (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, a1[341]) != 1 )
  {
    sub_15ED0(a7);
    v37 = 0;
  }
  v124 = v174;
  if ( v174 )
  {
    v125 = v175;
    if ( (_QWORD)v175 )
    {
      v126 = 0;
      do
      {
        v127 = v124 + 32 * v126;
        if ( *(_QWORD *)(v127 + 8) )
        {
          *(_QWORD *)(v127 + 16) = 0;
          qfree();
          v124 = v174;
        }
        ++v126;
      }
      while ( v125 != v126 );
    }
    *(_QWORD *)&v175 = 0;
    qfree();
  }
  v128 = v172;
  if ( v172 )
  {
    v129 = v173;
    if ( (_QWORD)v173 )
    {
      v130 = 0;
      do
      {
        v131 = v128 + 32 * v130;
        if ( *(_QWORD *)(v131 + 8) )
        {
          *(_QWORD *)(v131 + 16) = 0;
          qfree();
          v128 = v172;
        }
        ++v130;
      }
      while ( v129 != v130 );
    }
    *(_QWORD *)&v173 = 0;
    qfree();
  }
  if ( v181 )
  {
    *(_QWORD *)&v182 = 0;
    qfree();
  }
  if ( v178 )
  {
    *(_QWORD *)&v179 = 0;
    qfree();
  }
  return v37;
}

