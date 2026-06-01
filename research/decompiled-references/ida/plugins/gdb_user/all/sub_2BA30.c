_QWORD *__fastcall sub_2BA30(__int64 a1, const char **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  size_t v7; // r15
  _QWORD *v8; // rbx
  void *v10; // rax
  const char *v11; // rsi
  const char *v12; // rsi
  const char *v13; // rdi

  v4 = sub_2B8E0(a1, (__int64)a2);
  if ( !v5 )
    return v4;
  if ( !v4 && v5 != a1 + 8 )
  {
    v12 = s;
    if ( *(_QWORD *)(v5 + 40) )
      v12 = *(const char **)(v5 + 32);
    v13 = s;
    if ( a2[1] )
      v13 = *a2;
    strcmp(v13, v12);
  }
  v6 = operator new(0x38u);
  v7 = (size_t)a2[1];
  *(_QWORD *)(v6 + 32) = 0;
  v8 = (_QWORD *)v6;
  *(_OWORD *)(v6 + 40) = 0;
  if ( v7 )
  {
    v10 = (void *)qalloc_or_throw();
    v8[4] = v10;
    v11 = *a2;
    v8[6] = v7;
    memcpy(v10, v11, v7);
    v8[5] = v7;
  }
  std::_Rb_tree_insert_and_rebalance();
  ++*(_QWORD *)(a1 + 40);
  return v8;
}

