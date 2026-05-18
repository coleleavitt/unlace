const char *__fastcall sub_C0F10(_QWORD *a1, const char *a2, void ***a3)
{
  __int64 v5; // rbx
  void **v6; // rax
  __m128i v7; // xmm0
  void *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  const char *v15; // rbp
  const char *v17; // rsi
  const char *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // [rsp+0h] [rbp-38h]

  v5 = operator new(0x50u);
  v6 = *a3;
  v7 = _mm_loadu_si128((const __m128i *)(*a3 + 1));
  v8 = **a3;
  *v6 = nullptr;
  *(__m128i *)(v5 + 40) = v7;
  *(_OWORD *)(v6 + 1) = 0;
  *(_QWORD *)(v5 + 32) = v8;
  *(_QWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 64) = 0;
  v11 = sub_C0D50(a1, a2, v5 + 32, v9, v10);
  if ( v12 )
  {
    v13 = 1;
    v14 = a1 + 1;
    if ( !v11 && (_QWORD *)v12 != v14 )
    {
      v17 = s1;
      if ( *(_QWORD *)(v12 + 40) )
        v17 = *(const char **)(v12 + 32);
      v18 = s1;
      if ( *(_QWORD *)(v5 + 40) )
        v18 = *(const char **)(v5 + 32);
      v20 = v12;
      v19 = strcmp(v18, v17);
      v14 = a1 + 1;
      v12 = v20;
      v13 = v19 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v13, v5, v12, v14);
    ++a1[5];
    return (const char *)v5;
  }
  v15 = v11;
  if ( !v5 )
    return v15;
  if ( v8 )
  {
    *(_QWORD *)(v5 + 40) = 0;
    j__free(v8);
  }
  operator delete((void *)v5, 0x50u);
  return v15;
}
