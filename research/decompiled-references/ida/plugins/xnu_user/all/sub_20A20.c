__int64 __fastcall sub_20A20(unsigned int *a1, __int64 a2, const void *a3, size_t a4, __int64 *a5)
{
  __int64 v5; // r13
  __int64 v8; // rax
  size_t v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  char *v13; // rax
  __int64 v14; // r12
  char *v15; // rax
  unsigned int *v16; // r15
  char *v17; // rax
  char *v18; // r14
  unsigned int *v19; // r13
  const char *v20; // rsi
  const char *v21; // rdi
  int v22; // eax
  unsigned int *v23; // rcx
  __int64 v24; // rax
  unsigned int *v25; // rcx
  __int64 v26; // rdx
  const char *v27; // r8
  int v28; // eax
  const char *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // r12
  char *v35; // rax
  unsigned int *v36; // r15
  char *v37; // rax
  char *v38; // r14
  unsigned int *v39; // r13
  const char *v40; // rsi
  const char *v41; // rdi
  int v42; // eax
  unsigned int *v43; // rcx
  __int64 v44; // rax
  unsigned int *v45; // rcx
  __int64 v46; // rdx
  const char *v47; // r8
  int v48; // eax
  const char *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r12
  char *v54; // rax
  unsigned int *v55; // r15
  char *v56; // rax
  char *v57; // r14
  unsigned int *v58; // r13
  const char *v59; // rsi
  const char *v60; // rdi
  int v61; // eax
  unsigned int *v62; // rcx
  __int64 v63; // rax
  unsigned int *v64; // rcx
  __int64 v65; // rdx
  const char *v66; // r8
  int v67; // eax
  const char *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rax
  char *v72; // rax
  __int64 v73; // r12
  char *v74; // rax
  unsigned int *v75; // r13
  unsigned int *v76; // r15
  char *v77; // r14
  unsigned int *v78; // rbx
  const char *v79; // rdi
  const char *v80; // rsi
  int v81; // eax
  unsigned int *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  const char *v85; // r8
  int v86; // eax
  const char *v87; // rsi
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rbx
  __int64 v92; // r14
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rbx
  __int64 v96; // r14
  __int64 v97; // rax
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // r12
  char **v101; // rsi
  unsigned int *v102; // r14
  size_t v103; // [rsp+0h] [rbp-150h]
  char *s1; // [rsp+10h] [rbp-140h]
  char *s1a; // [rsp+10h] [rbp-140h]
  char *s1b; // [rsp+10h] [rbp-140h]
  size_t v107; // [rsp+18h] [rbp-138h]
  size_t v108; // [rsp+18h] [rbp-138h]
  size_t v109; // [rsp+18h] [rbp-138h]
  __int64 v110; // [rsp+18h] [rbp-138h]
  char *v112; // [rsp+38h] [rbp-118h]
  char *v113; // [rsp+38h] [rbp-118h]
  char *v114; // [rsp+38h] [rbp-118h]
  unsigned int *v115; // [rsp+40h] [rbp-110h]
  char *v117; // [rsp+50h] [rbp-100h]
  unsigned int *v118; // [rsp+50h] [rbp-100h]
  char *v119; // [rsp+50h] [rbp-100h]
  unsigned int *v120; // [rsp+50h] [rbp-100h]
  char *v121; // [rsp+50h] [rbp-100h]
  unsigned int *v122; // [rsp+50h] [rbp-100h]
  char *v123; // [rsp+50h] [rbp-100h]
  __int64 v124; // [rsp+58h] [rbp-F8h] BYREF
  __int64 v125; // [rsp+68h] [rbp-E8h] BYREF
  size_t v126; // [rsp+70h] [rbp-E0h] BYREF
  unsigned __int64 v127; // [rsp+78h] [rbp-D8h] BYREF
  __int64 v128; // [rsp+80h] [rbp-D0h] BYREF
  __int128 v129; // [rsp+88h] [rbp-C8h]
  __int64 v130; // [rsp+A0h] [rbp-B0h] BYREF
  __int128 v131; // [rsp+A8h] [rbp-A8h]
  char *s2; // [rsp+C0h] [rbp-90h] BYREF
  __int128 v133; // [rsp+C8h] [rbp-88h]
  char **v134; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v135; // [rsp+E8h] [rbp-68h]
  __int64 v136; // [rsp+F8h] [rbp-58h]
  __int64 v137; // [rsp+100h] [rbp-50h]
  __int128 v138; // [rsp+108h] [rbp-48h]
  unsigned __int64 v139; // [rsp+118h] [rbp-38h]

  v5 = *((_QWORD *)a1 + 258);
  v124 = a2;
  v139 = __readfsqword(0x28u);
  if ( v5 == -1 )
  {
    sub_15ED0(a5);
    return v5;
  }
  v8 = (int)a1[294];
  v134 = nullptr;
  v136 = 0;
  v135 = 0;
  v137 = 0;
  v9 = *(int *)(qword_9AD30 + 144 * v8 + 128);
  v128 = 0;
  v130 = 0;
  v138 = 0;
  v129 = 0;
  v131 = 0;
  v134 = (char **)qvector_reserve();
  memset(v134, 0, 0x20u);
  *(_QWORD *)&v135 = 32;
  if ( a4 )
    sub_1A5B0((__int64 *)&v134, a3, a4);
  LOBYTE(s2) = 0;
  if ( !v9 )
    goto LABEL_5;
  v99 = v135;
  v100 = v135 + v9;
  if ( !__CFADD__((_QWORD)v135, v9) )
  {
    v101 = v134;
    if ( &s2 < v134 )
    {
      if ( *((_QWORD *)&v135 + 1) >= v100 )
        goto LABEL_165;
    }
    else
    {
      if ( &s2 < (char **)((char *)v134 + *((_QWORD *)&v135 + 1)) )
      {
        if ( *((_QWORD *)&v135 + 1) >= v100 )
          goto LABEL_146;
        goto LABEL_176;
      }
      if ( *((_QWORD *)&v135 + 1) >= v100 )
        goto LABEL_178;
    }
LABEL_163:
    v134 = (char **)qvector_reserve();
    v99 = v135;
LABEL_178:
    v101 = v134;
    if ( v99 >= v100 )
      goto LABEL_150;
LABEL_165:
    while ( 1 )
    {
      *((_BYTE *)v101 + v99++) = (_BYTE)s2;
      if ( v100 == v99 )
        break;
      v101 = v134;
    }
    goto LABEL_150;
  }
  if ( (__int64)v135 < 0 )
  {
    *(_QWORD *)&v135 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_5;
  }
  v100 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_QWORD)v135 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_5;
  v101 = v134;
  if ( &s2 < v134 )
  {
    if ( *((_QWORD *)&v135 + 1) > 0x7FFFFFFFFFFFFFFEuLL )
      goto LABEL_165;
    goto LABEL_163;
  }
  if ( &s2 >= (char **)((char *)v134 + *((_QWORD *)&v135 + 1)) )
  {
    if ( *((_QWORD *)&v135 + 1) > 0x7FFFFFFFFFFFFFFEuLL )
      goto LABEL_165;
    goto LABEL_163;
  }
  if ( *((_QWORD *)&v135 + 1) > 0x7FFFFFFFFFFFFFFEuLL )
  {
LABEL_149:
    while ( 1 )
    {
      *((_BYTE *)v101 + v99++) = 0;
      if ( v99 == v100 )
        break;
      v101 = v134;
    }
    goto LABEL_150;
  }
LABEL_176:
  v134 = (char **)qvector_reserve();
  v99 = v135;
LABEL_146:
  v101 = v134;
  if ( v99 < v100 )
    goto LABEL_149;
LABEL_150:
  *(_QWORD *)&v135 = v100;
LABEL_5:
  v10 = v129;
  v125 = 32;
  v126 = a4 + 32;
  v11 = v128;
  v127 = 0x8000000000000000LL;
  if ( *((_QWORD *)&v129 + 1) < (unsigned __int64)(v129 + 1) )
  {
    v128 = qvector_reserve();
    v10 = v129;
    v11 = v128;
  }
  v12 = v11 + 32 * v10;
  *(_QWORD *)(v12 + 8) = 0;
  *(_OWORD *)(v12 + 16) = 0;
  v117 = (char *)v12;
  *(_QWORD *)&v129 = v129 + 1;
  s2 = nullptr;
  v133 = 0;
  v13 = (char *)qvector_reserve();
  s2 = v13;
  *(_QWORD *)&v133 = 4;
  *(_WORD *)v13 = 25458;
  v13[2] = 120;
  s2[3] = 0;
  v115 = a1 + 312;
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_28;
  v14 = v133;
  v107 = v9;
  v15 = (char *)src;
  v16 = a1 + 312;
  if ( (_QWORD)v133 )
    v15 = s2;
  v112 = v15;
  v17 = v117;
  v118 = *((unsigned int **)a1 + 157);
  v18 = s2;
  s1 = v17;
  while ( 1 )
  {
    v19 = v118;
    v24 = *((_QWORD *)v118 + 5);
    if ( !v14 )
      break;
    if ( v24 )
      goto LABEL_21;
    v19 = v118;
    v20 = v18;
    v21 = src;
LABEL_13:
    v22 = strcmp(v21, v20);
    v23 = *((unsigned int **)v118 + 2);
    v118 = *((unsigned int **)v118 + 3);
    if ( v22 >= 0 )
    {
      v118 = v23;
      v16 = v19;
    }
    if ( !v118 )
    {
      v9 = v107;
      v27 = v18;
      v117 = s1;
      goto LABEL_23;
    }
  }
  v25 = v118;
  if ( v24 )
  {
LABEL_20:
    v118 = v25;
    v19 = v25;
LABEL_21:
    v20 = v112;
    v21 = *((const char **)v118 + 4);
    goto LABEL_13;
  }
  while ( 1 )
  {
    v26 = *((_QWORD *)v25 + 2);
    v16 = v25;
    if ( !v26 )
      break;
    v25 = *((unsigned int **)v25 + 2);
    if ( *(_QWORD *)(v26 + 40) )
      goto LABEL_20;
  }
  v9 = v107;
  v27 = v18;
  v16 = v25;
  v117 = s1;
LABEL_23:
  v28 = -1;
  if ( v115 != v16 )
  {
    if ( *((_QWORD *)v16 + 5) )
    {
      v29 = *((const char **)v16 + 4);
      if ( !v14 )
        v27 = src;
LABEL_27:
      if ( strcmp(v27, v29) < 0 )
      {
LABEL_28:
        v28 = -1;
        goto LABEL_29;
      }
    }
    else
    {
      v29 = src;
      if ( v14 )
        goto LABEL_27;
    }
    v28 = v16[14];
  }
LABEL_29:
  *(_DWORD *)v117 = v28;
  if ( s2 )
  {
    *(_QWORD *)&v133 = 0;
    qfree();
  }
  *((_DWORD *)v117 + 1) = 0;
  if ( v9 )
    sub_1A5B0((__int64 *)v117 + 1, &v124, v9);
  v30 = v129;
  v31 = v128;
  if ( *((_QWORD *)&v129 + 1) < (unsigned __int64)(v129 + 1) )
  {
    v128 = qvector_reserve();
    v30 = v129;
    v31 = v128;
  }
  v32 = v31 + 32 * v30;
  *(_QWORD *)(v32 + 8) = 0;
  *(_OWORD *)(v32 + 16) = 0;
  *(_QWORD *)&v129 = v129 + 1;
  v119 = (char *)v32;
  s2 = nullptr;
  v133 = 0;
  v33 = (char *)qvector_reserve();
  s2 = v33;
  *(_QWORD *)&v133 = 4;
  *(_WORD *)v33 = 25714;
  v33[2] = 120;
  s2[3] = 0;
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_56;
  v34 = v133;
  v108 = v9;
  v35 = (char *)src;
  v36 = a1 + 312;
  if ( (_QWORD)v133 )
    v35 = s2;
  v113 = v35;
  v37 = v119;
  v120 = *((unsigned int **)a1 + 157);
  v38 = s2;
  s1a = v37;
  while ( 2 )
  {
    v39 = v120;
    v44 = *((_QWORD *)v120 + 5);
    if ( v34 )
    {
      if ( !v44 )
      {
        v39 = v120;
        v40 = v38;
        v41 = src;
        goto LABEL_41;
      }
LABEL_49:
      v40 = v113;
      v41 = *((const char **)v120 + 4);
LABEL_41:
      v42 = strcmp(v41, v40);
      v43 = *((unsigned int **)v120 + 2);
      v120 = *((unsigned int **)v120 + 3);
      if ( v42 >= 0 )
      {
        v120 = v43;
        v36 = v39;
      }
      if ( !v120 )
      {
        v9 = v108;
        v47 = v38;
        v119 = s1a;
        goto LABEL_51;
      }
      continue;
    }
    break;
  }
  v45 = v120;
  if ( v44 )
  {
LABEL_48:
    v120 = v45;
    v39 = v45;
    goto LABEL_49;
  }
  while ( 1 )
  {
    v46 = *((_QWORD *)v45 + 2);
    v36 = v45;
    if ( !v46 )
      break;
    v45 = *((unsigned int **)v45 + 2);
    if ( *(_QWORD *)(v46 + 40) )
      goto LABEL_48;
  }
  v9 = v108;
  v47 = v38;
  v36 = v45;
  v119 = s1a;
LABEL_51:
  v48 = -1;
  if ( v115 != v36 )
  {
    if ( *((_QWORD *)v36 + 5) )
    {
      v49 = *((const char **)v36 + 4);
      if ( !v34 )
        v47 = src;
LABEL_55:
      if ( strcmp(v47, v49) < 0 )
      {
LABEL_56:
        v48 = -1;
        goto LABEL_57;
      }
    }
    else
    {
      v49 = src;
      if ( v34 )
        goto LABEL_55;
    }
    v48 = v36[14];
  }
LABEL_57:
  *(_DWORD *)v119 = v48;
  if ( s2 )
  {
    *(_QWORD *)&v133 = 0;
    qfree();
  }
  *((_DWORD *)v119 + 1) = 1;
  if ( v9 )
    sub_1A5B0((__int64 *)v119 + 1, &v125, v9);
  v50 = v129;
  v51 = v128;
  if ( *((_QWORD *)&v129 + 1) < (unsigned __int64)(v129 + 1) )
  {
    v128 = qvector_reserve();
    v50 = v129;
    v51 = v128;
  }
  v52 = v51 + 32 * v50;
  *(_QWORD *)(v52 + 8) = 0;
  *(_OWORD *)(v52 + 16) = 0;
  *(_QWORD *)&v129 = v129 + 1;
  v121 = (char *)v52;
  s2 = nullptr;
  v133 = 0;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v133 = 3;
  strcpy(s2, "r8");
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_84;
  v53 = v133;
  v109 = v9;
  v54 = (char *)src;
  v55 = a1 + 312;
  if ( (_QWORD)v133 )
    v54 = s2;
  v114 = v54;
  v56 = v121;
  v122 = *((unsigned int **)a1 + 157);
  v57 = s2;
  s1b = v56;
  while ( 2 )
  {
    v58 = v122;
    v63 = *((_QWORD *)v122 + 5);
    if ( v53 )
    {
      if ( !v63 )
      {
        v58 = v122;
        v59 = v57;
        v60 = src;
        goto LABEL_69;
      }
LABEL_77:
      v59 = v114;
      v60 = *((const char **)v122 + 4);
LABEL_69:
      v61 = strcmp(v60, v59);
      v62 = *((unsigned int **)v122 + 2);
      v122 = *((unsigned int **)v122 + 3);
      if ( v61 >= 0 )
      {
        v122 = v62;
        v55 = v58;
      }
      if ( !v122 )
      {
        v9 = v109;
        v66 = v57;
        v121 = s1b;
        goto LABEL_79;
      }
      continue;
    }
    break;
  }
  v64 = v122;
  if ( v63 )
  {
LABEL_76:
    v122 = v64;
    v58 = v64;
    goto LABEL_77;
  }
  while ( 1 )
  {
    v65 = *((_QWORD *)v64 + 2);
    v55 = v64;
    if ( !v65 )
      break;
    v64 = *((unsigned int **)v64 + 2);
    if ( *(_QWORD *)(v65 + 40) )
      goto LABEL_76;
  }
  v9 = v109;
  v66 = v57;
  v55 = v64;
  v121 = s1b;
LABEL_79:
  v67 = -1;
  if ( v115 != v55 )
  {
    if ( *((_QWORD *)v55 + 5) )
    {
      v68 = *((const char **)v55 + 4);
      if ( !v53 )
        v66 = src;
LABEL_83:
      if ( strcmp(v66, v68) < 0 )
      {
LABEL_84:
        v67 = -1;
        goto LABEL_85;
      }
    }
    else
    {
      v68 = src;
      if ( v53 )
        goto LABEL_83;
    }
    v67 = v55[14];
  }
LABEL_85:
  *(_DWORD *)v121 = v67;
  if ( s2 )
  {
    *(_QWORD *)&v133 = 0;
    qfree();
  }
  *((_DWORD *)v121 + 1) = 1;
  if ( v9 )
    sub_1A5B0((__int64 *)v121 + 1, &v126, v9);
  v69 = v131;
  v70 = v130;
  if ( *((_QWORD *)&v131 + 1) < (unsigned __int64)(v131 + 1) )
  {
    v130 = qvector_reserve();
    v69 = v131;
    v70 = v130;
  }
  v71 = v70 + 32 * v69;
  *(_QWORD *)(v71 + 8) = 0;
  *(_OWORD *)(v71 + 16) = 0;
  *(_QWORD *)&v131 = v131 + 1;
  v110 = v71;
  s2 = nullptr;
  v133 = 0;
  v72 = (char *)qvector_reserve();
  s2 = v72;
  *(_QWORD *)&v133 = 4;
  *(_WORD *)v72 = 24946;
  v72[2] = 120;
  s2[3] = 0;
  if ( !*((_QWORD *)a1 + 157) )
    goto LABEL_112;
  v73 = v133;
  v103 = v9;
  v74 = (char *)src;
  v75 = *((unsigned int **)a1 + 157);
  v76 = a1 + 312;
  v77 = s2;
  if ( (_QWORD)v133 )
    v74 = s2;
  v123 = v74;
  while ( 2 )
  {
    v83 = *((_QWORD *)v75 + 5);
    if ( v73 )
    {
      v78 = v75;
      if ( !v83 )
      {
        v79 = src;
        v80 = v77;
        goto LABEL_97;
      }
LABEL_105:
      v79 = *((const char **)v75 + 4);
      v80 = v123;
LABEL_97:
      v81 = strcmp(v79, v80);
      v82 = *((unsigned int **)v75 + 2);
      v75 = *((unsigned int **)v75 + 3);
      if ( v81 >= 0 )
      {
        v76 = v78;
        v75 = v82;
      }
      if ( !v75 )
      {
        v9 = v103;
        v85 = v77;
        goto LABEL_107;
      }
      continue;
    }
    break;
  }
  if ( v83 )
  {
LABEL_104:
    v78 = v75;
    goto LABEL_105;
  }
  while ( 1 )
  {
    v84 = *((_QWORD *)v75 + 2);
    if ( !v84 )
      break;
    v76 = v75;
    v75 = *((unsigned int **)v75 + 2);
    if ( *(_QWORD *)(v84 + 40) )
      goto LABEL_104;
  }
  v85 = v77;
  v102 = v75;
  v9 = v103;
  v76 = v102;
LABEL_107:
  v86 = -1;
  if ( v115 != v76 )
  {
    if ( *((_QWORD *)v76 + 5) )
    {
      v87 = *((const char **)v76 + 4);
      if ( !v73 )
        v85 = src;
LABEL_111:
      if ( strcmp(v85, v87) < 0 )
      {
LABEL_112:
        v86 = -1;
        goto LABEL_113;
      }
    }
    else
    {
      v87 = src;
      if ( v73 )
        goto LABEL_111;
    }
    v86 = v76[14];
  }
LABEL_113:
  *(_DWORD *)v110 = v86;
  if ( s2 )
  {
    *(_QWORD *)&v133 = 0;
    qfree();
  }
  *(_DWORD *)(v110 + 4) = 0;
  sub_1A5B0((__int64 *)(v110 + 8), &v127, 8u);
  v88 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64, __int64 *, char ***, __int64 *, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 424LL))(
          a1,
          *((_QWORD *)a1 + 258),
          a1[341],
          32,
          &v128,
          &v134,
          &v130,
          a5,
          0,
          0);
  if ( v88 != -1 )
  {
    v89 = **(_QWORD **)(v130 + 8);
    v127 = v89;
    if ( v89 )
    {
      sub_1F390(v89);
      sub_15ED0(a5);
    }
    else
    {
      s2 = nullptr;
      if ( v9 == (*(__int64 (__fastcall **)(unsigned int *, size_t, char **, size_t, _QWORD))(*(_QWORD *)a1 + 288LL))(
                   a1,
                   v126 + v88,
                   &s2,
                   v9,
                   0) )
      {
        v5 = (__int64)s2;
        goto LABEL_121;
      }
      sub_15ED0(a5);
    }
  }
  v5 = -1;
LABEL_121:
  if ( (*(unsigned int (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, a1[341]) != 1 )
  {
    sub_15ED0(a5);
    v5 = -1;
  }
  v90 = v130;
  if ( v130 )
  {
    if ( (_QWORD)v131 )
    {
      v91 = 0;
      v92 = v131;
      do
      {
        v93 = v90 + 32 * v91;
        if ( *(_QWORD *)(v93 + 8) )
        {
          *(_QWORD *)(v93 + 16) = 0;
          qfree();
          v90 = v130;
        }
        ++v91;
      }
      while ( v92 != v91 );
    }
    *(_QWORD *)&v131 = 0;
    qfree();
  }
  v94 = v128;
  if ( v128 )
  {
    if ( (_QWORD)v129 )
    {
      v95 = 0;
      v96 = v129;
      do
      {
        v97 = v94 + 32 * v95;
        if ( *(_QWORD *)(v97 + 8) )
        {
          *(_QWORD *)(v97 + 16) = 0;
          qfree();
          v94 = v128;
        }
        ++v95;
      }
      while ( v96 != v95 );
    }
    *(_QWORD *)&v129 = 0;
    qfree();
  }
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree();
  }
  if ( v134 )
  {
    *(_QWORD *)&v135 = 0;
    qfree();
  }
  return v5;
}

