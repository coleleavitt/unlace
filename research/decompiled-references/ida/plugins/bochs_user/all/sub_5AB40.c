__int64 __fastcall sub_5AB40(_QWORD *a1, _QWORD *a2, __int64 **a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  const char *v13; // rsi
  const char *v14; // rdi

  v5 = operator new(0x50u);
  v6 = *a3;
  v7 = _mm_loadu_si128((const __m128i *)(*a3 + 1));
  v8 = **a3;
  *v6 = 0;
  *(__m128i *)(v5 + 40) = v7;
  *(_OWORD *)(v6 + 1) = 0;
  *(_QWORD *)(v5 + 32) = v8;
  *(_QWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 64) = 0;
  v9 = sub_5A0F0(a1, a2, v5 + 32);
  if ( v10 )
  {
    if ( !v9 && (_QWORD *)v10 != a1 + 1 )
    {
      v13 = s1;
      if ( *(_QWORD *)(v10 + 40) )
        v13 = *(const char **)(v10 + 32);
      v14 = s1;
      if ( *(_QWORD *)(v5 + 40) )
        v14 = *(const char **)(v5 + 32);
      strcasecmp(v14, v13);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v5;
  }
  v11 = v9;
  if ( !v5 )
    return v11;
  if ( v8 )
  {
    *(_QWORD *)(v5 + 40) = 0;
    qfree();
  }
  operator delete((void *)v5, 0x50u);
  return v11;
}

