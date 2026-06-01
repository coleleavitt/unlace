__int64 __fastcall sub_59AB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // r14
  const char *v8; // rsi
  _QWORD *v9; // rbp
  const char *v10; // rdi
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 result; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  size_t v20; // r14
  __int64 v21; // rbp
  _QWORD *v22; // rax
  __int64 v23; // rdx
  const char *v24; // rsi
  const char *v25; // rdi
  void *v26; // rax
  const char *v27; // rsi
  const void *v28; // r12
  void *v29; // rax
  _QWORD *v30; // [rsp+8h] [rbp-50h]

  v5 = a1 + 43;
  v6 = (_QWORD *)a1[44];
  v30 = a1 + 43;
  if ( !v6 )
  {
    v5 = a1 + 43;
    goto LABEL_24;
  }
  v7 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v13 = v6[5];
    if ( !v7 )
      break;
    v8 = *(const char **)a2;
    v9 = v6;
    v10 = s1;
    if ( v13 )
      goto LABEL_4;
LABEL_5:
    v11 = strcmp(v10, v8);
    v12 = (_QWORD *)v6[2];
    v6 = (_QWORD *)v6[3];
    if ( v11 >= 0 )
    {
      v5 = v9;
      v6 = v12;
    }
    if ( !v6 )
      goto LABEL_14;
  }
  if ( v13 )
  {
LABEL_12:
    v8 = s1;
LABEL_4:
    v10 = (const char *)v6[4];
    v9 = v6;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v14 = v6[2];
    if ( !v14 )
      break;
    v5 = v6;
    v6 = (_QWORD *)v6[2];
    if ( *(_QWORD *)(v14 + 40) )
      goto LABEL_12;
  }
  v5 = v6;
LABEL_14:
  if ( v30 == v5 )
    goto LABEL_24;
  if ( v5[5] )
  {
    v15 = (const char *)v5[4];
    v16 = s1;
    if ( v7 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v16, v15) >= 0 )
      goto LABEL_19;
LABEL_24:
    v19 = operator new(0x78u);
    v20 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v19 + 32) = 0;
    v21 = v19;
    *(_OWORD *)(v19 + 40) = 0;
    if ( v20 )
    {
      v26 = (void *)qalloc_or_throw();
      *(_QWORD *)(v21 + 32) = v26;
      v27 = *(const char **)a2;
      *(_QWORD *)(v21 + 48) = v20;
      memcpy(v26, v27, v20);
      *(_QWORD *)(v21 + 40) = v20;
    }
    *(_QWORD *)(v21 + 56) = 0xFFFF;
    *(_QWORD *)(v21 + 64) = 0;
    *(_QWORD *)(v21 + 72) = 0;
    *(_QWORD *)(v21 + 80) = 0;
    *(_QWORD *)(v21 + 88) = 0;
    *(_QWORD *)(v21 + 96) = 0;
    *(_OWORD *)(v21 + 104) = 0;
    v22 = sub_598F0(a1 + 42, v5, v21 + 32);
    v5 = v22;
    if ( v23 )
    {
      if ( v30 != (_QWORD *)v23 && !v22 )
      {
        v24 = s1;
        if ( *(_QWORD *)(v23 + 40) )
          v24 = *(const char **)(v23 + 32);
        v25 = s1;
        if ( *(_QWORD *)(v21 + 40) )
          v25 = *(const char **)(v21 + 32);
        strcmp(v25, v24);
      }
      v5 = (_QWORD *)v21;
      std::_Rb_tree_insert_and_rebalance();
      ++a1[47];
    }
    else if ( v21 )
    {
      if ( *(_QWORD *)(v21 + 32) )
      {
        *(_QWORD *)(v21 + 40) = 0;
        qfree();
      }
      operator delete((void *)v21, 0x78u);
    }
    goto LABEL_19;
  }
  v15 = s1;
  if ( v7 )
  {
LABEL_17:
    v16 = *(const char **)a2;
    goto LABEL_18;
  }
LABEL_19:
  *((_WORD *)v5 + 28) = *(_WORD *)a3;
  v5[8] = *(_QWORD *)(a3 + 8);
  *((_DWORD *)v5 + 18) = *(_DWORD *)(a3 + 16);
  v5[10] = *(_QWORD *)(a3 + 24);
  *((_DWORD *)v5 + 22) = *(_DWORD *)(a3 + 32);
  result = a3 + 40;
  if ( v5 + 12 != (_QWORD *)(a3 + 40) )
  {
    v18 = *(_QWORD *)(a3 + 48);
    if ( v18 > 1 )
    {
      v28 = *(const void **)(a3 + 40);
      v29 = (void *)v5[12];
      if ( v5[14] < v18 )
      {
        v29 = (void *)qvector_reserve();
        v5[12] = v29;
      }
      v5[13] = v18;
      memmove(v29, v28, v18 - 1);
      result = v5[12];
      *(_BYTE *)(result + v18 - 1) = 0;
    }
    else
    {
      v5[13] = 0;
    }
  }
  return result;
}

