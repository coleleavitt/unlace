__int64 __fastcall sub_56E50(int a1, int *a2, _QWORD *a3, int a4, int a5)
{
  int *v5; // r12
  _QWORD *v6; // rbp
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  const char **v12; // r8
  __int64 v13; // rcx
  const char **v14; // r15
  const char **v15; // r14
  __int64 v16; // rcx
  int v17; // r8d
  const char *v18; // rdx
  int v19; // r8d
  int *v20; // r12
  const char *v21; // rax
  int v22; // r8d
  int v23; // ecx
  const char *v24; // r15
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rbx
  bool v29; // al
  __int64 v30; // r13
  __int64 v31; // r12
  unsigned __int64 v32; // rbp
  const char *v33; // rdi
  __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // r15
  __int64 v37; // r13
  __int64 v38; // rbx
  __int64 v39; // rbp
  const char *v40; // r12
  int v41; // eax
  __int64 v42; // rax
  int v43; // r8d
  int *v44; // r13
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // r8d
  int *v48; // r12
  int v49; // eax
  unsigned __int64 v50; // [rsp+8h] [rbp-70h]
  int *v51; // [rsp+8h] [rbp-70h]
  _QWORD *v52; // [rsp+10h] [rbp-68h]
  unsigned __int64 v53; // [rsp+18h] [rbp-60h]
  __int64 v54; // [rsp+20h] [rbp-58h]
  _QWORD *v55; // [rsp+28h] [rbp-50h]
  int *v57; // [rsp+38h] [rbp-40h]

  v5 = a2;
  v6 = a3;
  v7 = a1;
  sub_70460(a1, (unsigned int)"GDB: parsing target info\n", (_DWORD)a3, a4, a5);
  if ( v6[1] > 1u )
  {
    sub_70460(a1, (unsigned int)"GDB: detecting target by architecture name '%s'\n", *v6, v9, v10);
    v44 = (int *)sub_56D40((__int64)&unk_9AD00, (__int64)v6);
    v45 = v6[1];
    if ( v44 == &dword_9AD08 )
    {
      if ( v45 )
        sub_70460(a1, (unsigned int)"GDB:  architecture '%s' %sfound\n", *v6, (unsigned int)"not ", v43);
      else
        sub_70460(a1, (unsigned int)"GDB:  architecture '%s' %sfound\n", (unsigned int)src, (unsigned int)"not ", v43);
    }
    else
    {
      if ( v45 )
        sub_70460(a1, (unsigned int)"GDB:  architecture '%s' %sfound\n", *v6, (unsigned int)&unk_7D386, v43);
      else
        sub_70460(
          a1,
          (unsigned int)"GDB:  architecture '%s' %sfound\n",
          (unsigned int)src,
          (unsigned int)&unk_7D386,
          v43);
      sub_540B0(a1, a2, v44 + 14, v46, v47);
    }
  }
  if ( *a2 < 0 )
  {
    v42 = v6[10];
    v12 = (const char **)v6[9];
    LODWORD(v13) = 144 * v42;
    v14 = &v12[18 * v42];
    if ( v12 == v14 )
      goto LABEL_20;
  }
  else if ( a2[1] < 0 )
  {
    v12 = (const char **)v6[9];
    v13 = 144LL * v6[10];
    v14 = (const char **)((char *)v12 + v13);
    if ( (const char **)((char *)v12 + v13) == v12 )
      goto LABEL_20;
  }
  else
  {
    if ( a2[2] >= 0 )
      return 1;
    v12 = (const char **)v6[9];
    v13 = 144LL * v6[10];
    v14 = (const char **)((char *)v12 + v13);
    if ( (const char **)((char *)v12 + v13) == v12 )
      goto LABEL_19;
  }
  v15 = v12;
  do
  {
    while ( 1 )
    {
      v18 = src;
      if ( v15[1] )
        v18 = *v15;
      sub_70460(a1, (unsigned int)"GDB: detecting target by feature name '%s'\n", (_DWORD)v18, v13, (_DWORD)v12);
      v20 = (int *)sub_56D40((__int64)&unk_9ACC0, (__int64)v15);
      v21 = v15[1];
      if ( v20 != &dword_9ACC8 )
      {
        if ( v21 )
          sub_70460(a1, (unsigned int)"GDB:  feature '%s' %sfound\n", (unsigned int)*v15, (unsigned int)&unk_7D386, v19);
        else
          sub_70460(a1, (unsigned int)"GDB:  feature '%s' %sfound\n", (unsigned int)src, (unsigned int)&unk_7D386, v19);
        sub_540B0(a1, a2, v20 + 14, v16, v17);
        goto LABEL_11;
      }
      if ( !v21 )
        break;
      sub_70460(a1, (unsigned int)"GDB:  feature '%s' %sfound\n", (unsigned int)*v15, (unsigned int)"not ", v19);
LABEL_11:
      v15 += 18;
      if ( v14 == v15 )
        goto LABEL_17;
    }
    v15 += 18;
    sub_70460(a1, (unsigned int)"GDB:  feature '%s' %sfound\n", (unsigned int)src, (unsigned int)"not ", v19);
  }
  while ( v14 != v15 );
LABEL_17:
  v5 = a2;
  if ( *a2 >= 0 && a2[1] >= 0 )
  {
LABEL_19:
    LODWORD(v13) = v5[2];
    if ( (int)v13 >= 0 )
      return 1;
  }
LABEL_20:
  sub_70460(a1, (unsigned int)"GDB: detecting target by unique register\n", v8, v13, (_DWORD)v12);
  v23 = qword_9AC98;
  v54 = qword_9AC98;
  if ( (int *)qword_9AC98 != &dword_9AC88 )
  {
    v57 = v5;
    do
    {
      v24 = src;
      if ( *(_QWORD *)(v54 + 40) )
        v24 = *(const char **)(v54 + 32);
      v25 = v6[10];
      if ( !v25 )
        goto LABEL_56;
      v53 = v6[10];
      v26 = 0;
      v55 = v6;
      v27 = (_QWORD *)(v6[9] + 24LL);
      do
      {
        v28 = v27[1];
        v29 = 1;
        v30 = 0;
        if ( v28 )
        {
          v50 = v26;
          v31 = *v27;
          v32 = 0;
          v52 = v27;
          while ( 1 )
          {
            v30 = v31;
            v33 = src;
            if ( *(_QWORD *)(v31 + 8) )
              v33 = *(const char **)v31;
            if ( !strcmp(v33, v24) )
            {
              v29 = v31 == 0;
              ++v32;
              v31 += 136;
              if ( v32 >= v28 )
              {
LABEL_34:
                v26 = v50;
                v27 = v52;
                break;
              }
            }
            else
            {
              ++v32;
              v29 = 1;
              v30 = 0;
              v31 += 136;
              if ( v32 >= v28 )
                goto LABEL_34;
            }
            if ( !v29 )
              goto LABEL_34;
          }
        }
        ++v26;
        v27 += 18;
      }
      while ( v26 < v53 && v29 );
      v6 = v55;
      if ( v30 )
      {
        sub_70460(a1, (unsigned int)"GDB:  unique register '%s' %sfound\n", (_DWORD)v24, (unsigned int)&unk_7D386, v25);
        sub_540B0(a1, v57, (int *)(v54 + 56), v34, v35);
      }
      else
      {
LABEL_56:
        sub_70460(a1, (unsigned int)"GDB:  unique register '%s' %sfound\n", (_DWORD)v24, (unsigned int)"not ", v25);
      }
      v54 = std::_Rb_tree_increment();
    }
    while ( (int *)v54 != &dword_9AC88 );
    v7 = a1;
    v5 = v57;
  }
  if ( *v5 < 0 )
  {
    sub_70460(v7, (unsigned int)"GDB: failed to find architecture by using target info\n", *v5, v23, v22);
    return 0;
  }
  if ( v5[1] >= 0 )
    return 1;
  v36 = v6[9];
  v37 = v36 + 144LL * v6[10];
  if ( v36 == v37 )
    return 1;
  v51 = v5;
  while ( 1 )
  {
    v38 = *(_QWORD *)(v36 + 24);
    v39 = v38 + 136LL * *(_QWORD *)(v36 + 32);
    if ( v38 != v39 )
      break;
LABEL_52:
    v36 += 144;
    if ( v37 == v36 )
      return 1;
  }
  while ( 2 )
  {
    if ( !*(_QWORD *)(v38 + 48)
      || (v40 = *(const char **)(v38 + 40), strcmp(v40, "code_ptr")) && strcmp(v40, "data_ptr") )
    {
LABEL_51:
      v38 += 136;
      if ( v39 == v38 )
        goto LABEL_52;
      continue;
    }
    break;
  }
  v41 = *(_DWORD *)(v38 + 24);
  if ( v41 != 64 )
  {
    if ( v41 == 32 )
    {
      v48 = v51;
      v49 = 0;
      goto LABEL_71;
    }
    goto LABEL_51;
  }
  v48 = v51;
  v49 = 1;
LABEL_71:
  v48[1] = v49;
  return 1;
}

