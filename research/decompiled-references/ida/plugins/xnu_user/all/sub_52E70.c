__int64 __fastcall sub_52E70(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rbx
  int *v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  const char *v9; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rbp
  int v13; // eax
  _QWORD *v14; // rbx
  char *v15; // r15
  __int64 v16; // r12
  __int64 v17; // r14
  char *v18; // rsi
  char *v19; // rdi
  _QWORD *v20; // rbp
  const char *v21; // rsi
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // edi
  __int64 v28; // r14
  const char *v29; // rdi
  const char *v30; // rsi
  int v31; // eax
  size_t v32; // r12
  void *v33; // r14
  __m128i v34; // xmm0
  __int64 v35; // rax
  _DWORD *v36; // rax
  bool v37; // zf
  int v38; // eax
  __int64 v39; // rcx
  int v40; // edx
  char *v42; // rbx
  char *v43; // r15
  __int64 v44; // r12
  char *v45; // r14
  char *v46; // rsi
  char *v47; // rdi
  char *v48; // rbp
  const char *v49; // rsi
  int v50; // eax
  char *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  const char *v54; // rdi
  const char *v55; // rsi
  __int64 v56; // rax
  char *v57; // rbx
  char *v58; // r15
  __int64 v59; // r12
  char *v60; // r14
  char *v61; // rsi
  char *v62; // rdi
  char *v63; // rbp
  const char *v64; // rsi
  int v65; // eax
  char *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  const char *v69; // rdi
  const char *v70; // rsi
  const char *v71; // rdi
  const char *v72; // rsi
  int v73; // eax
  _QWORD *v74; // rbx
  char *v75; // r15
  __int64 v76; // r12
  char *v77; // rsi
  char *v78; // rdi
  _QWORD *v79; // rbp
  const char *v80; // rsi
  int v81; // eax
  _QWORD *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  _QWORD *v85; // r15
  char *v86; // rbx
  __int64 v87; // r12
  __int64 v88; // r14
  char *v89; // rsi
  char *v90; // rdi
  _QWORD *v91; // rbp
  const char *v92; // rsi
  int v93; // eax
  _QWORD *v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rcx
  char *v97; // rax
  _QWORD *v98; // rbx
  char *v99; // r15
  __int64 v100; // r12
  __int64 v101; // r14
  char *v102; // rsi
  char *v103; // rdi
  _QWORD *v104; // rbp
  const char *v105; // rsi
  int v106; // eax
  _QWORD *v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  int v110; // eax
  const char *v111; // rdi
  const char *v112; // rsi
  const char *v113; // rdi
  const char *v114; // rsi
  int v115; // eax
  _QWORD *v116; // r15
  char *v117; // rbx
  __int64 v118; // r12
  __int64 v119; // r14
  char *v120; // rsi
  char *v121; // rdi
  _QWORD *v122; // rbp
  const char *v123; // rsi
  int v124; // eax
  _QWORD *v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  int v128; // eax
  const char *v129; // rdi
  const char *v130; // rsi
  __m128i v131; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int8 v132; // [rsp+17h] [rbp-71h]
  char *v133; // [rsp+18h] [rbp-70h]
  char *p_s2; // [rsp+20h] [rbp-68h]
  char *s1; // [rsp+28h] [rbp-60h]
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __int128 v137; // [rsp+38h] [rbp-50h]
  unsigned __int64 v138; // [rsp+48h] [rbp-40h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 672);
  v3 = *(int *)(a1 + 680);
  v138 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 780) = -1;
  *(_DWORD *)(a1 + 788) = -1;
  v5 = (int *)(v2 + 8);
  if ( !v3 )
    goto LABEL_31;
  do
  {
    v6 = *v5;
    if ( (*v5 & 4) != 0 )
    {
      *(_DWORD *)(a1 + 780) = v1;
      v6 = *v5;
    }
    if ( (v6 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 784) = v1;
      v6 = *v5;
    }
    if ( (v6 & 8) != 0 )
      *(_DWORD *)(a1 + 788) = v1;
    ++v1;
    v5 += 8;
  }
  while ( v1 != v3 );
  if ( *(int *)(a1 + 780) >= 0 )
  {
    if ( *(int *)(a1 + 784) >= 0 )
      goto LABEL_33;
  }
  else
  {
LABEL_31:
    v26 = sub_4C210(v2, v3, *(const char **)(a1 + 872), "sp", 4, "stack pointer");
    v27 = *(_DWORD *)(a1 + 784);
    *(_DWORD *)(a1 + 780) = v26;
    if ( v27 >= 0 )
    {
      if ( *(int *)(a1 + 780) >= 0 )
        goto LABEL_33;
LABEL_53:
      v9 = "SP";
      goto LABEL_14;
    }
  }
  v7 = sub_4C210(v2, v3, *(const char **)(a1 + 872), "pc", 2, "instruction pointer");
  v8 = *(_DWORD *)(a1 + 780);
  *(_DWORD *)(a1 + 784) = v7;
  if ( v8 < 0 )
    goto LABEL_53;
  if ( v7 == -1 )
  {
    v9 = "PC";
LABEL_14:
    sub_14020(
      (__int64)"AUTOHIDE REGISTRY\n%s.cfg: bad register map (missing %s register)",
      *(const char **)(a1 + 872),
      v9);
    v132 = 0;
    goto LABEL_15;
  }
LABEL_33:
  v132 = 1;
LABEL_15:
  v10 = *(int *)(a1 + 1176);
  v11 = (_QWORD *)(qword_9AC50 + 120LL * *(_QWORD *)(qword_9AC10 + 8 * v10));
  *(_QWORD *)(a1 + 920) = v11[5];
  *(_QWORD *)(a1 + 928) = v11[6];
  *(_QWORD *)(a1 + 936) = v11[7];
  *(_QWORD *)(a1 + 944) = v11[8];
  *(_QWORD *)(a1 + 952) = v11[9];
  v12 = qword_9AD30 + 144 * v10;
  v13 = *(_DWORD *)(v12 + 120);
  if ( !v13 )
  {
    p_s2 = (char *)&s2;
    s2 = nullptr;
    v137 = 0;
    s2 = (char *)qvector_reserve();
    *(_QWORD *)&v137 = 3;
    strcpy(s2, "cs");
    v42 = *(char **)(a1 + 1256);
    v133 = (char *)(a1 + 1248);
    v43 = s2;
    if ( !v42 )
      goto LABEL_73;
    v44 = v137;
    v45 = v133;
    v46 = (char *)src;
    s1 = (char *)src;
    if ( (_QWORD)v137 )
      v46 = s2;
    v131.m128i_i64[0] = (__int64)v46;
    while ( 1 )
    {
      v52 = *((_QWORD *)v42 + 5);
      if ( !v44 )
        break;
      if ( v52 )
        goto LABEL_67;
      v47 = s1;
      v48 = v42;
      v49 = v43;
LABEL_60:
      v50 = strcmp(v47, v49);
      v51 = *((char **)v42 + 2);
      v42 = *((char **)v42 + 3);
      if ( v50 >= 0 )
      {
        v45 = v48;
        v42 = v51;
      }
      if ( !v42 )
        goto LABEL_69;
    }
    if ( !v52 )
    {
      while ( 1 )
      {
        v53 = *((_QWORD *)v42 + 2);
        if ( !v53 )
          break;
        v45 = v42;
        v42 = *((char **)v42 + 2);
        if ( *(_QWORD *)(v53 + 40) )
          goto LABEL_67;
      }
      v45 = v42;
LABEL_69:
      if ( v133 == v45 )
        goto LABEL_73;
      if ( !*((_QWORD *)v45 + 5) )
      {
        v54 = v43;
        v55 = src;
        if ( v44 )
          goto LABEL_72;
        goto LABEL_129;
      }
      v54 = src;
      v55 = *((const char **)v45 + 4);
      if ( v44 )
        v54 = v43;
LABEL_72:
      if ( strcmp(v54, v55) < 0 )
      {
LABEL_73:
        *(_DWORD *)(a1 + 1184) = -1;
        if ( v43 )
          goto LABEL_74;
      }
      else
      {
LABEL_129:
        *(_DWORD *)(a1 + 1184) = *((_DWORD *)v45 + 14);
        if ( v43 )
        {
LABEL_74:
          *(_QWORD *)&v137 = 0;
          qfree();
        }
      }
      v137 = 0;
      s2 = nullptr;
      v56 = qvector_reserve();
      s2 = (char *)v56;
      *(_QWORD *)&v137 = 7;
      *(_DWORD *)v56 = 1634494053;
      *(_WORD *)(v56 + 4) = 29543;
      s2[6] = 0;
      v57 = *(char **)(a1 + 1256);
      v58 = s2;
      if ( !v57 )
        goto LABEL_95;
      v59 = v137;
      v60 = v133;
      v61 = (char *)src;
      p_s2 = (char *)src;
      if ( (_QWORD)v137 )
        v61 = s2;
      v131.m128i_i64[0] = (__int64)v61;
      while ( 2 )
      {
        v67 = *((_QWORD *)v57 + 5);
        if ( v59 )
        {
          if ( v67 )
            goto LABEL_88;
          v62 = p_s2;
          v63 = v57;
          v64 = v58;
        }
        else
        {
          if ( !v67 )
          {
            while ( 1 )
            {
              v68 = *((_QWORD *)v57 + 2);
              if ( !v68 )
                break;
              v60 = v57;
              v57 = *((char **)v57 + 2);
              if ( *(_QWORD *)(v68 + 40) )
                goto LABEL_88;
            }
            v60 = v57;
LABEL_90:
            if ( v133 == v60 )
              goto LABEL_95;
            if ( *((_QWORD *)v60 + 5) )
            {
              v69 = src;
              v70 = *((const char **)v60 + 4);
              if ( v59 )
                v69 = v58;
LABEL_94:
              if ( strcmp(v69, v70) < 0 )
              {
LABEL_95:
                *(_DWORD *)(a1 + 1188) = -1;
                if ( v58 )
                  goto LABEL_207;
                goto LABEL_43;
              }
            }
            else
            {
              v69 = v58;
              v70 = src;
              if ( v59 )
                goto LABEL_94;
            }
            *(_DWORD *)(a1 + 1188) = *((_DWORD *)v60 + 14);
            if ( v58 )
              goto LABEL_207;
            goto LABEL_43;
          }
LABEL_88:
          v62 = *((char **)v57 + 4);
          v64 = (const char *)v131.m128i_i64[0];
          v63 = v57;
        }
        v65 = strcmp(v62, v64);
        v66 = *((char **)v57 + 2);
        v57 = *((char **)v57 + 3);
        if ( v65 >= 0 )
        {
          v60 = v63;
          v57 = v66;
        }
        if ( !v57 )
          goto LABEL_90;
        continue;
      }
    }
LABEL_67:
    v47 = *((char **)v42 + 4);
    v49 = (const char *)v131.m128i_i64[0];
    v48 = v42;
    goto LABEL_60;
  }
  if ( v13 != 13 )
    goto LABEL_44;
  p_s2 = (char *)&s2;
  s2 = nullptr;
  v137 = 0;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v137 = 3;
  strcpy(s2, "lr");
  v14 = *(_QWORD **)(a1 + 1256);
  v131.m128i_i64[0] = a1 + 1248;
  v15 = s2;
  if ( !v14 )
    goto LABEL_103;
  v16 = v137;
  v17 = v131.m128i_i64[0];
  v18 = (char *)src;
  s1 = (char *)src;
  if ( (_QWORD)v137 )
    v18 = s2;
  v133 = v18;
  while ( 1 )
  {
    v24 = v14[5];
    if ( !v16 )
      break;
    if ( v24 )
      goto LABEL_30;
    v19 = s1;
    v20 = v14;
    v21 = v15;
LABEL_23:
    v22 = strcmp(v19, v21);
    v23 = (_QWORD *)v14[2];
    v14 = (_QWORD *)v14[3];
    if ( v22 >= 0 )
    {
      v17 = (__int64)v20;
      v14 = v23;
    }
    if ( !v14 )
      goto LABEL_98;
  }
  if ( v24 )
  {
LABEL_30:
    v19 = (char *)v14[4];
    v21 = v133;
    v20 = v14;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v25 = v14[2];
    if ( !v25 )
      break;
    v17 = (__int64)v14;
    v14 = (_QWORD *)v14[2];
    if ( *(_QWORD *)(v25 + 40) )
      goto LABEL_30;
  }
  v17 = (__int64)v14;
LABEL_98:
  if ( v131.m128i_i64[0] == v17 )
    goto LABEL_103;
  if ( *(_QWORD *)(v17 + 40) )
  {
    v71 = src;
    v72 = *(const char **)(v17 + 32);
    if ( v16 )
      v71 = v15;
LABEL_102:
    if ( strcmp(v71, v72) < 0 )
    {
LABEL_103:
      *(_DWORD *)(a1 + 1192) = -1;
      if ( v15 )
        goto LABEL_104;
      goto LABEL_148;
    }
  }
  else
  {
    v71 = v15;
    v72 = src;
    if ( v16 )
      goto LABEL_102;
  }
  v73 = *(_DWORD *)(v17 + 56);
  *(_DWORD *)(a1 + 1192) = v73;
  if ( v15 )
  {
LABEL_104:
    *(_QWORD *)&v137 = 0;
    qfree();
    v73 = *(_DWORD *)(a1 + 1192);
  }
  if ( v73 != -1 )
    goto LABEL_106;
LABEL_148:
  v137 = 0;
  s2 = nullptr;
  v97 = (char *)qvector_reserve();
  s2 = v97;
  *(_QWORD *)&v137 = 4;
  *(_WORD *)v97 = 13176;
  v97[2] = 48;
  s2[3] = 0;
  v98 = *(_QWORD **)(a1 + 1256);
  v99 = s2;
  if ( !v98 )
    goto LABEL_168;
  v100 = v137;
  v101 = v131.m128i_i64[0];
  v102 = (char *)src;
  s1 = (char *)src;
  if ( (_QWORD)v137 )
    v102 = s2;
  v133 = v102;
  while ( 2 )
  {
    v108 = v98[5];
    if ( v100 )
    {
      if ( !v108 )
      {
        v103 = s1;
        v104 = v98;
        v105 = v99;
        goto LABEL_154;
      }
LABEL_161:
      v103 = (char *)v98[4];
      v105 = v133;
      v104 = v98;
LABEL_154:
      v106 = strcmp(v103, v105);
      v107 = (_QWORD *)v98[2];
      v98 = (_QWORD *)v98[3];
      if ( v106 >= 0 )
      {
        v101 = (__int64)v104;
        v98 = v107;
      }
      if ( !v98 )
        goto LABEL_163;
      continue;
    }
    break;
  }
  if ( v108 )
    goto LABEL_161;
  while ( 1 )
  {
    v109 = v98[2];
    if ( !v109 )
      break;
    v101 = (__int64)v98;
    v98 = (_QWORD *)v98[2];
    if ( *(_QWORD *)(v109 + 40) )
      goto LABEL_161;
  }
  v101 = (__int64)v98;
LABEL_163:
  v110 = -1;
  if ( v101 != v131.m128i_i64[0] )
  {
    if ( *(_QWORD *)(v101 + 40) )
    {
      v111 = src;
      v112 = *(const char **)(v101 + 32);
      if ( v100 )
        v111 = v99;
LABEL_167:
      if ( strcmp(v111, v112) < 0 )
      {
LABEL_168:
        v110 = -1;
        goto LABEL_169;
      }
    }
    else
    {
      v111 = v99;
      v112 = src;
      if ( v100 )
        goto LABEL_167;
    }
    v110 = *(_DWORD *)(v101 + 56);
  }
LABEL_169:
  *(_DWORD *)(a1 + 1192) = v110;
  if ( v99 )
  {
    *(_QWORD *)&v137 = 0;
    qfree();
  }
LABEL_106:
  v137 = 0;
  s2 = nullptr;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v137 = 5;
  strcpy(s2, "cpsr");
  v74 = *(_QWORD **)(a1 + 1256);
  v75 = s2;
  if ( !v74 )
    goto LABEL_40;
  v76 = v137;
  v28 = v131.m128i_i64[0];
  v77 = (char *)src;
  s1 = (char *)src;
  if ( (_QWORD)v137 )
    v77 = s2;
  v133 = v77;
  while ( 2 )
  {
    v83 = v74[5];
    if ( v76 )
    {
      if ( !v83 )
      {
        v78 = s1;
        v79 = v74;
        v80 = v75;
        goto LABEL_112;
      }
LABEL_119:
      v78 = (char *)v74[4];
      v80 = v133;
      v79 = v74;
LABEL_112:
      v81 = strcmp(v78, v80);
      v82 = (_QWORD *)v74[2];
      v74 = (_QWORD *)v74[3];
      if ( v81 >= 0 )
      {
        v28 = (__int64)v79;
        v74 = v82;
      }
      if ( !v74 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  if ( v83 )
    goto LABEL_119;
  while ( 1 )
  {
    v84 = v74[2];
    if ( !v84 )
      break;
    v28 = (__int64)v74;
    v74 = (_QWORD *)v74[2];
    if ( *(_QWORD *)(v84 + 40) )
      goto LABEL_119;
  }
  v28 = (__int64)v74;
LABEL_35:
  if ( v28 == v131.m128i_i64[0] )
    goto LABEL_40;
  if ( *(_QWORD *)(v28 + 40) )
  {
    v29 = src;
    v30 = *(const char **)(v28 + 32);
    if ( v76 )
      v29 = v75;
LABEL_39:
    if ( strcmp(v29, v30) < 0 )
    {
LABEL_40:
      *(_DWORD *)(a1 + 1188) = -1;
      if ( v75 )
        goto LABEL_41;
      goto LABEL_131;
    }
  }
  else
  {
    v29 = v75;
    v30 = src;
    if ( v76 )
      goto LABEL_39;
  }
  v31 = *(_DWORD *)(v28 + 56);
  *(_DWORD *)(a1 + 1188) = v31;
  if ( v75 )
  {
LABEL_41:
    *(_QWORD *)&v137 = 0;
    qfree();
    v31 = *(_DWORD *)(a1 + 1188);
  }
  if ( v31 != -1 )
    goto LABEL_43;
LABEL_131:
  v137 = 0;
  s2 = nullptr;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v137 = 5;
  strcpy(s2, "xpsr");
  v85 = *(_QWORD **)(a1 + 1256);
  v86 = s2;
  if ( !v85 )
    goto LABEL_177;
  v87 = v137;
  v88 = v131.m128i_i64[0];
  v89 = (char *)src;
  s1 = (char *)src;
  if ( (_QWORD)v137 )
    v89 = s2;
  v133 = v89;
  while ( 2 )
  {
    v95 = v85[5];
    if ( v87 )
    {
      if ( !v95 )
      {
        v90 = s1;
        v91 = v85;
        v92 = v86;
        goto LABEL_137;
      }
LABEL_144:
      v90 = (char *)v85[4];
      v92 = v133;
      v91 = v85;
LABEL_137:
      v93 = strcmp(v90, v92);
      v94 = (_QWORD *)v85[2];
      v85 = (_QWORD *)v85[3];
      if ( v93 >= 0 )
      {
        v88 = (__int64)v91;
        v85 = v94;
      }
      if ( !v85 )
        goto LABEL_172;
      continue;
    }
    break;
  }
  if ( v95 )
    goto LABEL_144;
  while ( 1 )
  {
    v96 = v85[2];
    if ( !v96 )
      break;
    v88 = (__int64)v85;
    v85 = (_QWORD *)v85[2];
    if ( *(_QWORD *)(v96 + 40) )
      goto LABEL_144;
  }
  v88 = (__int64)v85;
LABEL_172:
  if ( v88 == v131.m128i_i64[0] )
    goto LABEL_177;
  if ( *(_QWORD *)(v88 + 40) )
  {
    v113 = src;
    v114 = *(const char **)(v88 + 32);
    if ( v87 )
      v113 = v86;
LABEL_176:
    if ( strcmp(v113, v114) < 0 )
    {
LABEL_177:
      *(_DWORD *)(a1 + 1188) = -1;
      if ( v86 )
        goto LABEL_178;
      goto LABEL_180;
    }
  }
  else
  {
    v113 = v86;
    v114 = src;
    if ( v87 )
      goto LABEL_176;
  }
  v115 = *(_DWORD *)(v88 + 56);
  *(_DWORD *)(a1 + 1188) = v115;
  if ( v86 )
  {
LABEL_178:
    *(_QWORD *)&v137 = 0;
    qfree();
    v115 = *(_DWORD *)(a1 + 1188);
  }
  if ( v115 != -1 )
  {
    v12 = qword_9AD30 + 144LL * *(int *)(a1 + 1176);
    goto LABEL_44;
  }
LABEL_180:
  v137 = 0;
  s2 = nullptr;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v137 = 5;
  strcpy(s2, "xPSR");
  v116 = *(_QWORD **)(a1 + 1256);
  v117 = s2;
  if ( !v116 )
    goto LABEL_205;
  v118 = v137;
  v119 = v131.m128i_i64[0];
  v120 = (char *)src;
  p_s2 = (char *)src;
  if ( (_QWORD)v137 )
    v120 = s2;
  v133 = v120;
  while ( 2 )
  {
    v126 = v116[5];
    if ( v118 )
    {
      if ( !v126 )
      {
        v121 = p_s2;
        v122 = v116;
        v123 = v117;
        goto LABEL_186;
      }
LABEL_193:
      v121 = (char *)v116[4];
      v123 = v133;
      v122 = v116;
LABEL_186:
      v124 = strcmp(v121, v123);
      v125 = (_QWORD *)v116[2];
      v116 = (_QWORD *)v116[3];
      if ( v124 >= 0 )
      {
        v119 = (__int64)v122;
        v116 = v125;
      }
      if ( !v116 )
        goto LABEL_200;
      continue;
    }
    break;
  }
  if ( v126 )
    goto LABEL_193;
  while ( 1 )
  {
    v127 = v116[2];
    if ( !v127 )
      break;
    v119 = (__int64)v116;
    v116 = (_QWORD *)v116[2];
    if ( *(_QWORD *)(v127 + 40) )
      goto LABEL_193;
  }
  v119 = (__int64)v116;
LABEL_200:
  v128 = -1;
  if ( v119 != v131.m128i_i64[0] )
  {
    if ( *(_QWORD *)(v119 + 40) )
    {
      v129 = src;
      v130 = *(const char **)(v119 + 32);
      if ( v118 )
        v129 = v117;
LABEL_204:
      if ( strcmp(v129, v130) < 0 )
      {
LABEL_205:
        v128 = -1;
        goto LABEL_206;
      }
    }
    else
    {
      v129 = v117;
      v130 = src;
      if ( v118 )
        goto LABEL_204;
    }
    v128 = *(_DWORD *)(v119 + 56);
  }
LABEL_206:
  *(_DWORD *)(a1 + 1188) = v128;
  if ( v117 )
  {
LABEL_207:
    *(_QWORD *)&v137 = 0;
    qfree();
  }
LABEL_43:
  v12 = qword_9AD30 + 144LL * *(int *)(a1 + 1176);
LABEL_44:
  v32 = *(_QWORD *)(v12 + 104);
  v33 = nullptr;
  v34 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
  if ( v32 )
  {
    v131 = v34;
    v33 = (void *)qalloc_or_throw();
    memcpy(v33, *(const void **)(v12 + 96), v32);
    v34 = _mm_load_si128(&v131);
  }
  if ( *(_QWORD *)(a1 + 488) )
  {
    *(_QWORD *)(a1 + 496) = 0;
    v131 = v34;
    qfree();
    v34 = _mm_load_si128(&v131);
  }
  v35 = *(int *)(a1 + 1176);
  *(_QWORD *)(a1 + 488) = v33;
  *(__m128i *)(a1 + 496) = v34;
  v36 = (_DWORD *)(qword_9AD30 + 144 * v35);
  *(_BYTE *)(a1 + 1180) = v36[33];
  *(_BYTE *)(a1 + 1180) &= 1u;
  v37 = *(_BYTE *)(a1 + 36) == 0;
  *(_DWORD *)(a1 + 304) = v36[31] > 0;
  v38 = v36[32];
  if ( !v37 )
  {
    v39 = *(_QWORD *)(a1 + 8);
    v40 = 4;
    if ( v38 == 8 )
    {
      v39 = *(_QWORD *)(a1 + 16);
      v40 = 8;
    }
    *(_QWORD *)(a1 + 24) = v39;
    *(_DWORD *)(a1 + 32) = v40;
  }
  *(_DWORD *)(a1 + 276) = v38;
  return v132;
}

