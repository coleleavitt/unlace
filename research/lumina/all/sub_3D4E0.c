const char *__fastcall sub_3D4E0(_QWORD *a1, const char *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rbx
  size_t v10; // r13
  const char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  const char *v15; // rbp
  void *v17; // rdi
  void *v18; // rax
  const char *v19; // rsi
  const char *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-38h]

  v5 = operator new(0x40u);
  v8 = *a3;
  *(_QWORD *)(v5 + 32) = 0;
  v9 = v5;
  *(_OWORD *)(v5 + 40) = 0;
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 )
  {
    v18 = (void *)sub_198760(*(_QWORD *)(v8 + 8));
    *(_QWORD *)(v9 + 32) = v18;
    *(_QWORD *)(v9 + 48) = v10;
    memcpy(v18, *(const void **)v8, v10);
    *(_QWORD *)(v9 + 40) = v10;
  }
  *(_DWORD *)(v9 + 56) = 0;
  v11 = sub_3D320(a1, a2, v9 + 32, v6, v7);
  if ( v12 )
  {
    v13 = 1;
    v14 = a1 + 1;
    if ( !v11 && (_QWORD *)v12 != v14 )
    {
      v19 = s1;
      if ( *(_QWORD *)(v12 + 40) )
        v19 = *(const char **)(v12 + 32);
      v20 = s1;
      if ( *(_QWORD *)(v9 + 40) )
        v20 = *(const char **)(v9 + 32);
      v22 = v12;
      v21 = strcmp(v20, v19);
      v14 = a1 + 1;
      v12 = v22;
      v13 = v21 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v13, v9, v12, v14);
    ++a1[5];
    return (const char *)v9;
  }
  v15 = v11;
  if ( !v9 )
    return v15;
  v17 = *(void **)(v9 + 32);
  if ( v17 )
  {
    *(_QWORD *)(v9 + 40) = 0;
    j__free(v17);
  }
  operator delete((void *)v9, 0x40u);
  return v15;
}
