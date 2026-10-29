__int64 __fastcall sub_4C100(int a1, int *a2, _QWORD *a3, int a4, int a5, int a6)
{
  int *v6; // r12
  _QWORD *v7; // rbp
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  const char **v14; // r8
  __int64 v15; // rcx
  const char **v16; // r15
  const char **v17; // r14
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  const char *v21; // rdx
  int v22; // r8d
  int v23; // r9d
  int *v24; // r12
  const char *v25; // rax
  int v26; // r8d
  int v27; // r9d
  int v28; // ecx
  const char *v29; // r15
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rcx
  unsigned __int64 v33; // rbx
  bool v34; // al
  __int64 v35; // r13
  __int64 v36; // r12
  unsigned __int64 v37; // rbp
  const char *v38; // rdi
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r15
  __int64 v43; // r13
  __int64 v44; // rbx
  __int64 v45; // rbp
  const char *v46; // r12
  int v47; // eax
  __int64 v48; // rax
  int v49; // r8d
  int v50; // r9d
  int *v51; // r13
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // r8d
  int v55; // r9d
  int *v56; // r12
  int v57; // eax
  unsigned __int64 v58; // [rsp+8h] [rbp-70h]
  int *v59; // [rsp+8h] [rbp-70h]
  _QWORD *v60; // [rsp+10h] [rbp-68h]
  unsigned __int64 v61; // [rsp+18h] [rbp-60h]
  __int64 v62; // [rsp+20h] [rbp-58h]
  _QWORD *v63; // [rsp+28h] [rbp-50h]
  int *v65; // [rsp+38h] [rbp-40h]

  v6 = a2;
  v7 = a3;
  v8 = a1;
  sub_65BB0(a1, (unsigned int)"GDB: parsing target info\n", (_DWORD)a3, a4, a5, a6);
  if ( v7[1] > 1u )
  {
    sub_65BB0(a1, (unsigned int)"GDB: detecting target by architecture name '%s'\n", *v7, v10, v11, v12);
    v51 = (int *)sub_4BFF0((__int64)&unk_8FB20, (__int64)v7);
    v52 = v7[1];
    if ( v51 == &dword_8FB28 )
    {
      if ( v52 )
        sub_65BB0(a1, (unsigned int)"GDB:  architecture '%s' %sfound\n", *v7, (unsigned int)"not ", v49, v50);
      else
        sub_65BB0(
          a1,
          (unsigned int)"GDB:  architecture '%s' %sfound\n",
          (unsigned int)s,
          (unsigned int)"not ",
          v49,
          v50);
    }
    else
    {
      if ( v52 )
        sub_65BB0(a1, (unsigned int)"GDB:  architecture '%s' %sfound\n", *v7, (unsigned int)&unk_71F21, v49, v50);
      else
        sub_65BB0(
          a1,
          (unsigned int)"GDB:  architecture '%s' %sfound\n",
          (unsigned int)s,
          (unsigned int)&unk_71F21,
          v49,
          v50);
      sub_493F0(a1, a2, v51 + 14, v53, v54, v55);
    }
  }
  if ( *a2 < 0 )
  {
    v48 = v7[10];
    v14 = (const char **)v7[9];
    LODWORD(v15) = 144 * v48;
    v16 = &v14[18 * v48];
    if ( v14 == v16 )
      goto LABEL_20;
  }
  else
  {
    v12 = a2[1];
    if ( v12 < 0 )
    {
      v14 = (const char **)v7[9];
      v15 = 144LL * v7[10];
      v16 = (const char **)((char *)v14 + v15);
      if ( (const char **)((char *)v14 + v15) == v14 )
        goto LABEL_20;
    }
    else
    {
      if ( a2[2] >= 0 )
        return 1;
      v14 = (const char **)v7[9];
      v15 = 144LL * v7[10];
      v16 = (const char **)((char *)v14 + v15);
      if ( (const char **)((char *)v14 + v15) == v14 )
        goto LABEL_19;
    }
  }
  v17 = v14;
  do
  {
    while ( 1 )
    {
      v21 = s;
      if ( v17[1] )
        v21 = *v17;
      sub_65BB0(a1, (unsigned int)"GDB: detecting target by feature name '%s'\n", (_DWORD)v21, v15, (_DWORD)v14, v12);
      v24 = (int *)sub_4BFF0((__int64)&unk_8FAE0, (__int64)v17);
      v25 = v17[1];
      if ( v24 != &dword_8FAE8 )
      {
        if ( v25 )
          sub_65BB0(
            a1,
            (unsigned int)"GDB:  feature '%s' %sfound\n",
            (unsigned int)*v17,
            (unsigned int)&unk_71F21,
            v22,
            v23);
        else
          sub_65BB0(
            a1,
            (unsigned int)"GDB:  feature '%s' %sfound\n",
            (unsigned int)s,
            (unsigned int)&unk_71F21,
            v22,
            v23);
        sub_493F0(a1, a2, v24 + 14, v18, v19, v20);
        goto LABEL_11;
      }
      if ( !v25 )
        break;
      sub_65BB0(a1, (unsigned int)"GDB:  feature '%s' %sfound\n", (unsigned int)*v17, (unsigned int)"not ", v22, v23);
LABEL_11:
      v17 += 18;
      if ( v16 == v17 )
        goto LABEL_17;
    }
    v17 += 18;
    sub_65BB0(a1, (unsigned int)"GDB:  feature '%s' %sfound\n", (unsigned int)s, (unsigned int)"not ", v22, v23);
  }
  while ( v16 != v17 );
LABEL_17:
  v6 = a2;
  if ( *a2 >= 0 && a2[1] >= 0 )
  {
LABEL_19:
    LODWORD(v15) = v6[2];
    if ( (int)v15 >= 0 )
      return 1;
  }
LABEL_20:
  sub_65BB0(a1, (unsigned int)"GDB: detecting target by unique register\n", v9, v15, (_DWORD)v14, v12);
  v28 = qword_8FAB8;
  v62 = qword_8FAB8;
  if ( (int *)qword_8FAB8 != &dword_8FAA8 )
  {
    v65 = v6;
    do
    {
      v29 = s;
      if ( *(_QWORD *)(v62 + 40) )
        v29 = *(const char **)(v62 + 32);
      v30 = v7[10];
      if ( !v30 )
        goto LABEL_56;
      v61 = v7[10];
      v31 = 0;
      v63 = v7;
      v32 = (_QWORD *)(v7[9] + 24LL);
      do
      {
        v33 = v32[1];
        v34 = 1;
        v35 = 0;
        if ( v33 )
        {
          v58 = v31;
          v36 = *v32;
          v37 = 0;
          v60 = v32;
          while ( 1 )
          {
            v35 = v36;
            v38 = s;
            if ( *(_QWORD *)(v36 + 8) )
              v38 = *(const char **)v36;
            if ( !strcmp(v38, v29) )
            {
              v34 = v36 == 0;
              ++v37;
              v36 += 136;
              if ( v37 >= v33 )
              {
LABEL_34:
                v31 = v58;
                v32 = v60;
                break;
              }
            }
            else
            {
              ++v37;
              v34 = 1;
              v35 = 0;
              v36 += 136;
              if ( v37 >= v33 )
                goto LABEL_34;
            }
            if ( !v34 )
              goto LABEL_34;
          }
        }
        ++v31;
        v32 += 18;
      }
      while ( v31 < v61 && v34 );
      v7 = v63;
      if ( v35 )
      {
        sub_65BB0(
          a1,
          (unsigned int)"GDB:  unique register '%s' %sfound\n",
          (_DWORD)v29,
          (unsigned int)&unk_71F21,
          v30,
          v27);
        sub_493F0(a1, v65, (int *)(v62 + 56), v39, v40, v41);
      }
      else
      {
LABEL_56:
        sub_65BB0(a1, (unsigned int)"GDB:  unique register '%s' %sfound\n", (_DWORD)v29, (unsigned int)"not ", v30, v27);
      }
      v62 = std::_Rb_tree_increment();
    }
    while ( (int *)v62 != &dword_8FAA8 );
    v8 = a1;
    v6 = v65;
  }
  if ( *v6 < 0 )
  {
    sub_65BB0(v8, (unsigned int)"GDB: failed to find architecture by using target info\n", *v6, v28, v26, v27);
    return 0;
  }
  if ( v6[1] >= 0 )
    return 1;
  v42 = v7[9];
  v43 = v42 + 144LL * v7[10];
  if ( v42 == v43 )
    return 1;
  v59 = v6;
  while ( 1 )
  {
    v44 = *(_QWORD *)(v42 + 24);
    v45 = v44 + 136LL * *(_QWORD *)(v42 + 32);
    if ( v44 != v45 )
      break;
LABEL_52:
    v42 += 144;
    if ( v43 == v42 )
      return 1;
  }
  while ( 2 )
  {
    if ( !*(_QWORD *)(v44 + 48)
      || (v46 = *(const char **)(v44 + 40), strcmp(v46, "code_ptr")) && strcmp(v46, "data_ptr") )
    {
LABEL_51:
      v44 += 136;
      if ( v45 == v44 )
        goto LABEL_52;
      continue;
    }
    break;
  }
  v47 = *(_DWORD *)(v44 + 24);
  if ( v47 != 64 )
  {
    if ( v47 == 32 )
    {
      v56 = v59;
      v57 = 0;
      goto LABEL_71;
    }
    goto LABEL_51;
  }
  v56 = v59;
  v57 = 1;
LABEL_71:
  v56[1] = v57;
  return 1;
}

