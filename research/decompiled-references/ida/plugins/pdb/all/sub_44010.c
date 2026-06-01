__int64 __fastcall sub_44010(__int64 a1, __int64 a2, double a3, double a4, double a5)
{
  __int64 v5; // rbp
  __int64 *v6; // rbx
  unsigned __int64 v7; // r12
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  _QWORD *std_dirtree; // r13
  char *v12; // r12
  __m128i si128; // xmm0
  const char *v14; // rsi
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // r13d
  char v20; // r12
  char v21; // r12
  size_t v22; // r14
  unsigned __int64 v23; // rax
  unsigned int v24; // r15d
  _QWORD *v25; // rax
  const char *v26; // rsi
  _QWORD *v27; // rbx
  const char *v28; // rsi
  int v30; // r12d
  char *v31; // rax
  const void *v32; // rsi
  unsigned __int64 v33; // r12
  char *v34; // r13
  char *v35; // rax
  signed __int64 v36; // rdx
  char *v37; // rax
  __int64 v38; // rsi
  int v39; // r15d
  __int64 v40; // rdx
  char *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rbp
  char *v44; // rax
  __int64 v45; // r13
  unsigned __int64 v46; // r15
  char *v47; // r13
  unsigned __int64 v48; // r14
  const char *v49; // rax
  const char *v50; // r12
  size_t v51; // rax
  size_t v52; // r13
  char *v53; // rax
  int v54; // r12d
  const void *v55; // r14
  void *v56; // rax
  __int64 v57; // r8
  __int64 v58; // rdx
  void *v59; // rdi
  size_t v60; // r15
  unsigned __int64 v61; // rdx
  _QWORD *v62; // r15
  _QWORD *v63; // r13
  int v64; // r12d
  const char *v65; // rsi
  unsigned __int8 v66; // al
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // eax
  __int64 v72; // r14
  __int64 v73; // rdx
  unsigned __int64 v74; // r13
  size_t v75; // r15
  unsigned __int64 v76; // r15
  const void *v77; // r13
  void *v78; // rdi
  char v79; // r14
  const void *v80; // r8
  void *v81; // rdi
  void *v82; // rax
  const void *v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rax
  int c[4]; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v87; // [rsp+20h] [rbp-118h]
  __int64 v88; // [rsp+28h] [rbp-110h]
  __int64 *v89; // [rsp+30h] [rbp-108h]
  char v90; // [rsp+3Fh] [rbp-F9h]
  __int64 v91; // [rsp+48h] [rbp-F0h] BYREF
  char *v92; // [rsp+50h] [rbp-E8h]
  __m128i v93; // [rsp+58h] [rbp-E0h]
  char *v94; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v95; // [rsp+70h] [rbp-C8h]
  unsigned int v96; // [rsp+80h] [rbp-B8h]
  bool v97; // [rsp+84h] [rbp-B4h]
  char *s; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v99; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v100; // [rsp+A8h] [rbp-90h]
  int v101; // [rsp+B0h] [rbp-88h]
  __int128 v102; // [rsp+B8h] [rbp-80h]
  __int128 v103; // [rsp+C8h] [rbp-70h]
  char v104; // [rsp+D8h] [rbp-60h]
  __int64 v105; // [rsp+E0h] [rbp-58h]
  __int128 v106; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v107; // [rsp+F8h] [rbp-40h]

  v5 = a1;
  v107 = __readfsqword(0x28u);
  v6 = (__int64 *)a2;
  v90 = is_database_flag(1);
  set_database_flag(1, 0);
  v91 = -1;
  if ( (*(_BYTE *)(a2 + 112) & 8) == 0 )
    netnode_check(&v91, "$ pdb", 0, 1);
  sub_421C0(a1);
  if ( a2 + 72 != a1 + 120 )
  {
    v7 = *(_QWORD *)(a1 + 128);
    if ( v7 > 1 )
    {
      v55 = *(const void **)(a1 + 120);
      v56 = *(void **)(a2 + 72);
      if ( *(_QWORD *)(a2 + 88) < v7 )
      {
        v56 = (void *)qvector_reserve(a2 + 72, *(_QWORD *)(a2 + 72), *(_QWORD *)(a1 + 128), 1);
        *(_QWORD *)(a2 + 72) = v56;
      }
      *(_QWORD *)(a2 + 80) = v7;
      memmove(v56, v55, v7 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 72) + v7 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 80) = 0;
    }
  }
  v8 = *(_DWORD *)(a1 + 456);
  v9 = *(_DWORD *)(a2 + 112);
  v10 = debug & 0x400000;
  if ( v8 == 1 )
  {
    if ( (v9 & 8) != 0 )
      goto LABEL_8;
  }
  else if ( v8 != 2 )
  {
LABEL_8:
    if ( v10 )
    {
      sub_29350();
      v9 = *(_DWORD *)(a2 + 112);
    }
    BYTE1(v9) &= ~1u;
    goto LABEL_11;
  }
  if ( v10 )
  {
    sub_29350();
    v9 = *(_DWORD *)(a2 + 112);
  }
  BYTE1(v9) |= 1u;
LABEL_11:
  *(_DWORD *)(a2 + 112) = v9;
  v92 = nullptr;
  v94 = nullptr;
  v93 = 0;
  v95 = 0;
  v94 = (char *)qvector_reserve(&v94, 0, 5, 1);
  *(_QWORD *)&v95 = 5;
  strcpy(v94, "/pdb");
  v96 = 0;
  std_dirtree = (_QWORD *)get_std_dirtree(0);
  s = nullptr;
  v99 = 0;
  dirtree_getcwd(&s, *std_dirtree);
  v12 = s;
  s = nullptr;
  si128 = _mm_loadu_si128(&v99);
  v99 = 0;
  if ( v92 )
  {
    *(__m128i *)c = si128;
    v93.m128i_i64[0] = 0;
    qfree(v92);
    si128 = _mm_load_si128((const __m128i *)c);
    v92 = v12;
    v93 = si128;
    if ( s )
    {
      v99.m128i_i64[0] = 0;
      qfree(s);
    }
  }
  else
  {
    v92 = v12;
    v93 = si128;
  }
  v14 = "/pdb";
  v97 = (unsigned __int8)dirtree_mkdir(*std_dirtree, "/pdb") == 0;
  dirtree_chdir(*std_dirtree, "/pdb");
  if ( *(_DWORD *)(a1 + 448) != 2 && (v6[14] & 8) == 0 )
  {
LABEL_77:
    sub_244A0();
    v54 = sub_43EB0(v5, v6, *(double *)si128.m128i_i64, 0.0, a5);
    if ( (unsigned __int64)v6[4] <= 1 )
    {
      v76 = v6[1];
      if ( v76 < 2 )
      {
        v6[4] = 0;
      }
      else
      {
        v77 = (const void *)*v6;
        v78 = (void *)v6[3];
        if ( v6[5] < v76 )
        {
          v85 = qvector_reserve(v6 + 3, v6[3], v6[1], 1);
          v6[3] = v85;
          v78 = (void *)v85;
        }
        v6[4] = v76;
        memmove(v78, v77, v76 - 1);
        *(_BYTE *)(v6[3] + v76 - 1) = 0;
      }
    }
    if ( v54 >= 0 )
      goto LABEL_79;
    if ( (v6[14] & 1) != 0 )
      sub_244A0();
    else
      sub_299B0();
    goto LABEL_29;
  }
  sub_244A0();
  while ( 1 )
  {
    si128.m128i_i64[0] = 0;
    v99.m128i_i64[0] = (__int64)v6;
    v99.m128i_i64[1] = 0xFFFFFFFFLL;
    v100 = -1;
    v101 = -1;
    s = (char *)&off_B2C38;
    v104 = 0;
    v105 = 0;
    v102 = 0;
    v103 = 0;
    v106 = 0;
    v19 = sub_545E0((unsigned int)&s, (_DWORD)v14, v15, v16, v17, v18);
    if ( v19 )
      break;
    v30 = sub_43C20(v5, (__int64)&s, 0.0, 0.0, a5);
    sub_52F60(&s);
    if ( !v30 )
    {
      if ( (unsigned __int64)v6[4] > 1 )
        goto LABEL_79;
      v74 = v6[1];
      if ( !v74 || (v75 = v74 - 1, v74 == 1) )
      {
        v6[4] = 0;
        goto LABEL_79;
      }
      v79 = 1;
      goto LABEL_132;
    }
    if ( (v6[14] & 8) != 0 && v30 != 1 )
      goto LABEL_28;
LABEL_24:
    v22 = v6[4];
    si128.m128i_i64[0] = 0;
    s = nullptr;
    v99 = 0;
    if ( v22 )
    {
      v31 = (char *)qalloc_or_throw(v22);
      v32 = (const void *)v6[3];
      v33 = v22 - 1;
      s = v31;
      v99.m128i_i64[1] = v22;
      memcpy(v31, v32, v22);
      v99.m128i_i64[0] = v22;
      v34 = s;
      if ( (int)v22 - 1 > 80 )
      {
        v35 = strchr(s, 92);
        if ( !v35 || (v36 = v35 - v34, c[0] = 92, v35 - v34 == -1) )
        {
          v53 = strchr(v34, 47);
          if ( !v53 )
            goto LABEL_25;
          v36 = v53 - v34;
          if ( v53 - v34 == -1 )
            goto LABEL_25;
          c[0] = 47;
        }
        v88 = v36;
        v37 = strrchr(v34, c[0]);
        v38 = (int)v22 - 1;
        v89 = v6;
        v39 = c[0];
        v40 = v88;
        v41 = v34;
        v88 = v5;
        v42 = v37 - v34;
        if ( !v37 )
          v42 = -1;
        *(_QWORD *)c = v42;
        v43 = v38 - v42;
        v87 = v38 - v42 - 1;
        do
        {
          while ( 1 )
          {
            v45 = v40 + 1;
            if ( v33 >= v40 + 1 )
              break;
            v40 = -1;
            if ( (unsigned __int64)(v43 - 1) > 0x4F )
              goto LABEL_57;
          }
          while ( 1 )
          {
            v44 = strchr(&v41[v45], v39);
            if ( v44 )
              break;
            if ( v87 > 0x4F )
              goto LABEL_57;
            v45 = 0;
          }
          v40 = v44 - v41;
        }
        while ( (unsigned __int64)(v44 - v41 + v43) <= 0x4F );
LABEL_57:
        v46 = v45;
        v5 = v88;
        v47 = v41;
        v6 = v89;
        if ( v46 < *(_QWORD *)c )
        {
          if ( v46 >= v33 )
          {
            v57 = v22 + 3;
            v58 = v22 + 4;
            if ( v99.m128i_i64[1] >= v22 + 4 )
            {
              v99.m128i_i64[0] = v22 + 4;
              v47[v22 + 3] = 0;
              goto LABEL_91;
            }
          }
          else
          {
            v48 = v46;
            if ( *(_QWORD *)c < v33 )
            {
              v48 = v33 - *(_QWORD *)c + v46;
              memmove(&v47[v46], &v47[*(_QWORD *)c], v33 - *(_QWORD *)c);
              v47 = s;
            }
            if ( v99.m128i_i64[1] < v48 + 1 )
            {
              s = (char *)qvector_reserve(&s, v47, v48 + 1, 1);
              v47 = s;
            }
            v99.m128i_i64[0] = v48 + 1;
            v47[v48] = 0;
            v33 = v99.m128i_i64[0];
            v47 = s;
            if ( v99.m128i_i64[0] )
            {
              v58 = v99.m128i_i64[0] + 4;
              v57 = v99.m128i_i64[0] + 3;
              v33 = v99.m128i_i64[0] - 1;
              if ( v99.m128i_i64[1] >= (unsigned __int64)(v99.m128i_i64[0] + 4) )
              {
LABEL_99:
                v99.m128i_i64[0] = v58;
                v47[v57] = 0;
                if ( v46 < v33 )
                {
                  v61 = v33;
                  v33 = v46;
                  memmove(&s[v46 + 4], &s[v46], v61 - v46);
                }
                goto LABEL_91;
              }
            }
            else
            {
              if ( v99.m128i_i64[1] > 4uLL )
              {
                v99.m128i_i64[0] = 5;
                s[4] = 0;
LABEL_91:
                *(_DWORD *)&s[v33] = 774778414;
                goto LABEL_25;
              }
              v58 = 5;
              v57 = 4;
            }
          }
          v87 = v57;
          *(_QWORD *)c = v58;
          s = (char *)qvector_reserve(&s, v47, v58, 1);
          v57 = v87;
          v47 = s;
          v58 = *(_QWORD *)c;
          goto LABEL_99;
        }
      }
    }
LABEL_25:
    if ( (unsigned int)sub_29C90() != 1 || (v14 = "*.pdb", v49 = (const char *)sub_29D70(), (v50 = v49) == nullptr) )
    {
      if ( s )
      {
        v99.m128i_i64[0] = 0;
        qfree(s);
      }
LABEL_28:
      if ( (unsigned __int64)v6[4] > 1 )
        goto LABEL_29;
      v74 = v6[1];
      if ( !v74 || (v75 = v74 - 1, v74 == 1) )
      {
        v6[4] = 0;
        goto LABEL_29;
      }
      v79 = 0;
LABEL_132:
      v80 = (const void *)*v6;
      v81 = (void *)v6[3];
      v21 = 0;
      if ( v6[5] < v74 )
        goto LABEL_133;
      v6[4] = v74;
      memmove(v81, v80, v75);
      *(_BYTE *)(v6[3] + v75) = 0;
      goto LABEL_134;
    }
    v51 = strlen(v49);
    v52 = v51;
    if ( v51 )
    {
      v59 = (void *)*v6;
      v60 = v51 + 1;
      if ( v6[2] < v51 + 1 )
      {
        v84 = qvector_reserve(v6, *v6, v51 + 1, 1);
        *v6 = v84;
        v59 = (void *)v84;
      }
      v6[1] = v60;
      LODWORD(v14) = (_DWORD)v50;
      memmove(v59, v50, v52);
      *(_BYTE *)(*v6 + v52) = 0;
    }
    else
    {
      v6[1] = 0;
    }
    if ( s )
    {
      v99.m128i_i64[0] = 0;
      qfree(s);
    }
  }
  v20 = v104;
  if ( !*(_BYTE *)(v5 + 452) && (unsigned __int64)v103 > 1 )
    sub_299B0();
  sub_52F60(&s);
  if ( (v6[14] & 8) != 0 && v19 != 1 )
    goto LABEL_28;
  v21 = *(_BYTE *)(v5 + 452) & v20;
  if ( !v21 )
    goto LABEL_24;
  sub_244A0();
  if ( (unsigned __int64)v6[4] > 1 )
    goto LABEL_77;
  v74 = v6[1];
  if ( !v74 || (v75 = v74 - 1, v74 == 1) )
  {
    v6[4] = 0;
    goto LABEL_77;
  }
  v80 = (const void *)*v6;
  v81 = (void *)v6[3];
  if ( v6[5] >= v74 )
  {
    v6[4] = v74;
    memmove(v81, v80, v74 - 1);
    *(_BYTE *)(v6[3] + v74 - 1) = 0;
    goto LABEL_77;
  }
  v79 = 0;
LABEL_133:
  *(_QWORD *)c = v80;
  v82 = (void *)qvector_reserve(v6 + 3, v81, v74, 1);
  v6[3] = (__int64)v82;
  v83 = *(const void **)c;
  v6[4] = v74;
  memmove(v82, v83, v75);
  *(_BYTE *)(v6[3] + v75) = 0;
  if ( v21 )
    goto LABEL_77;
LABEL_134:
  if ( !v79 )
  {
LABEL_29:
    v23 = 0;
    v24 = 0;
    goto LABEL_30;
  }
LABEL_79:
  if ( (v6[14] & 0x10) == 0 )
  {
    v23 = 1;
    v24 = 1;
    goto LABEL_30;
  }
  sub_29760();
  v62 = *(_QWORD **)(v5 + 496);
  v63 = (_QWORD *)(v5 + 480);
  v64 = 0;
  if ( v62 == (_QWORD *)(v5 + 480) )
  {
LABEL_120:
    v24 = 1;
    goto LABEL_121;
  }
  while ( 2 )
  {
    v71 = *((_DWORD *)v6 + 28);
    v72 = v62[4];
    if ( (v71 & 8) != 0 )
    {
      v65 = &byte_4;
      if ( (get_flags_ex(v62[4], 4) & 0x4000) == 0 )
      {
        v71 = *((_DWORD *)v6 + 28);
        goto LABEL_111;
      }
    }
    else
    {
LABEL_111:
      v73 = v62[6];
      v65 = src;
      if ( (v71 & 1) != 0 )
      {
        if ( v73 )
          v65 = (const char *)v62[5];
        v66 = set_debug_name(v72, v65);
      }
      else
      {
        if ( v73 )
          v65 = (const char *)v62[5];
        v66 = set_name(v72, v65, "netnode_check");
      }
      v64 += v66;
    }
    if ( __ROR4__(-858993459 * v64 + 429496728, 1) > 0x19999998u || !(unsigned __int8)callui(27) )
    {
      v62 = (_QWORD *)std::_Rb_tree_increment(v62, v65, v67, v68, v69, v70, *(double *)si128.m128i_i64, 0.0, a5);
      if ( v62 == v63 )
        goto LABEL_120;
      continue;
    }
    break;
  }
  v24 = 0;
LABEL_121:
  callui(24);
  sub_272C0(*(_QWORD **)(v5 + 488));
  *(_QWORD *)(v5 + 496) = v63;
  *(_QWORD *)(v5 + 488) = 0;
  *(_QWORD *)(v5 + 504) = v63;
  *(_QWORD *)(v5 + 512) = 0;
  sub_244A0();
  v23 = (unsigned __int8)v24;
LABEL_30:
  s = (char *)v23;
  netnode_supset(v91, 0, &s, 8, 65);
  if ( v90 )
    set_database_flag(1, 1);
  v25 = (_QWORD *)get_std_dirtree(v96);
  v26 = src;
  v27 = v25;
  if ( v93.m128i_i64[0] )
    v26 = v92;
  dirtree_chdir(*v25, v26);
  if ( v97 )
  {
    v28 = src;
    if ( (_QWORD)v95 )
      v28 = v94;
    dirtree_rmdir(*v27, v28);
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree(v94);
  }
  if ( v92 )
  {
    v93.m128i_i64[0] = 0;
    qfree(v92);
  }
  return v24;
}

