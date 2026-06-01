const char *__fastcall sub_27970(_QWORD *a1, __int64 a2)
{
  const char *v3; // rbx
  const char *v4; // r15
  __int64 v5; // r13
  const char *v6; // rsi
  const char *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  const char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  size_t v19; // r13
  __int64 v20; // rbp
  const char *v21; // rax
  __int64 v22; // rdx
  const char *v23; // rsi
  const char *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rdi
  void *v28; // rax
  const char *v29; // rsi
  const char *v30; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  v3 = (const char *)(a1 + 1);
  v4 = (const char *)a1[2];
  v30 = (const char *)(a1 + 1);
  if ( !v4 )
  {
    v3 = (const char *)(a1 + 1);
    goto LABEL_21;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = *((_QWORD *)v4 + 5);
    if ( !v5 )
      break;
    v6 = *(const char **)a2;
    v7 = v4;
    v8 = src;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = *((const char **)v4 + 2);
    v4 = *((const char **)v4 + 3);
    if ( v9 >= 0 )
    {
      v3 = v7;
      v4 = v10;
    }
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v6 = src;
LABEL_4:
    v8 = *((const char **)v4 + 4);
    v7 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v4 + 2);
    if ( !v12 )
      break;
    v3 = v4;
    v4 = *((const char **)v4 + 2);
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v3 = v4;
LABEL_14:
  if ( v30 == v3 )
    goto LABEL_21;
  if ( *((_QWORD *)v3 + 5) )
  {
    v13 = *((const char **)v3 + 4);
    v14 = src;
    if ( v5 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v14, v13) >= 0 )
      return v3 + 56;
LABEL_21:
    v16 = operator new(0x50u);
    v19 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v16 + 32) = 0;
    v20 = v16;
    *(_OWORD *)(v16 + 40) = 0;
    if ( v19 )
    {
      v28 = (void *)qalloc_or_throw(v19);
      *(_QWORD *)(v20 + 32) = v28;
      v29 = *(const char **)a2;
      *(_QWORD *)(v20 + 48) = v19;
      memcpy(v28, v29, v19);
      *(_QWORD *)(v20 + 40) = v19;
    }
    *(_QWORD *)(v20 + 56) = 0;
    *(_OWORD *)(v20 + 64) = 0;
    v21 = sub_277B0(a1, v3, v20 + 32, v17, v18);
    v3 = v21;
    if ( v22 )
    {
      if ( v21 || v30 == (const char *)v22 )
      {
        v26 = 1;
      }
      else
      {
        v23 = src;
        if ( *(_QWORD *)(v22 + 40) )
          v23 = *(const char **)(v22 + 32);
        v24 = src;
        if ( *(_QWORD *)(v20 + 40) )
          v24 = *(const char **)(v20 + 32);
        v32 = v22;
        v25 = strcmp(v24, v23);
        v22 = v32;
        v26 = v25 >> 31;
      }
      v3 = (const char *)v20;
      std::_Rb_tree_insert_and_rebalance(v26, v20, v22, v30);
      ++a1[5];
    }
    else if ( v20 )
    {
      v27 = *(_QWORD *)(v20 + 32);
      if ( v27 )
      {
        *(_QWORD *)(v20 + 40) = 0;
        qfree(v27);
      }
      operator delete((void *)v20, 0x50u);
    }
    return v3 + 56;
  }
  v13 = src;
  if ( v5 )
  {
LABEL_17:
    v14 = *(const char **)a2;
    goto LABEL_18;
  }
  return v3 + 56;
}
