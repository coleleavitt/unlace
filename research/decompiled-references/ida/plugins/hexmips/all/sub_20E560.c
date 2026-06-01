__int64 __fastcall sub_20E560(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rbp
  char *v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rbx
  size_t v12; // r12
  char *v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // rbx
  const char *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-80h]

  v4 = *(_QWORD *)(a4 + 72);
  if ( !*(_QWORD *)(v4 + 32) )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)v5 != 10 )
    return 0;
  if ( **(_BYTE **)(v5 + 8) != 6 )
    return 0;
  if ( get_ea_name() <= 0 )
    return 0;
  v7 = *(_QWORD *)(a2 + 8);
  if ( !v7 )
    return 0;
  if ( (unsigned __int64)(v7 - 1) <= 5 )
    return 0;
  v8 = *(char **)a2;
  if ( strncmp(*(const char **)a2, "RTYPE_", 6u) )
    return 0;
  v9 = 1;
  v10 = 0;
  if ( v7 != 7 )
  {
    v9 = v7 - 6;
    memmove(v8, v8 + 6, v7 - 7);
    v8 = *(char **)a2;
    v10 = v7 - 7;
  }
  if ( *(_QWORD *)(a2 + 16) < v9 )
  {
    v22 = v10;
    v18 = qvector_reserve();
    v10 = v22;
    *(_QWORD *)a2 = v18;
    v8 = (char *)v18;
  }
  *(_QWORD *)(a2 + 8) = v9;
  v8[v10] = 0;
  if ( *(_QWORD *)(a2 + 8) <= 1u )
    return 0;
  if ( *(_QWORD *)a2 )
  {
    get_idati();
    create_tinfo();
  }
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 )
  {
    v12 = v11 - 1;
    v13 = *(char **)a2;
    if ( (unsigned __int64)(v11 - 1) <= 7 || strncmp(*(const char **)a2, "runtime_", 8u) )
    {
LABEL_19:
      v14 = v11 + 1;
      v15 = v11 + 2;
      if ( *(_QWORD *)(a2 + 16) >= v15 )
        goto LABEL_20;
      goto LABEL_26;
    }
    v19 = 1;
    v20 = 0;
    if ( v11 != 9 )
    {
      v20 = v11 - 9;
      v19 = v11 - 8;
      memmove(v13, v13 + 8, v11 - 9);
      v13 = *(char **)a2;
    }
    if ( *(_QWORD *)(a2 + 16) < v19 )
    {
      v21 = qvector_reserve();
      *(_QWORD *)a2 = v21;
      v13 = (char *)v21;
    }
    *(_QWORD *)(a2 + 8) = v19;
    v13[v20] = 0;
    v11 = *(_QWORD *)(a2 + 8);
    if ( v11 )
    {
      v13 = *(char **)a2;
      v12 = v11 - 1;
      goto LABEL_19;
    }
  }
  v16 = *(const char **)a2;
  if ( *(_QWORD *)(a2 + 16) <= 2u )
  {
    v15 = 3;
    v14 = 2;
    v12 = 0;
LABEL_26:
    v17 = qvector_reserve();
    *(_QWORD *)a2 = v17;
    v13 = (char *)v17;
LABEL_20:
    *(_QWORD *)(a2 + 8) = v15;
    v13[v14] = 0;
    if ( v12 )
      memmove((void *)(*(_QWORD *)a2 + 2LL), *(const void **)a2, v12);
    goto LABEL_22;
  }
  *(_QWORD *)(a2 + 8) = 3;
  *((_BYTE *)v16 + 2) = 0;
LABEL_22:
  **(_WORD **)a2 = 24432;
  return 1;
}

