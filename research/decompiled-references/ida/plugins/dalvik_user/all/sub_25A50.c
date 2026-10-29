_QWORD *__fastcall sub_25A50(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // r14
  _QWORD *v8; // r12
  unsigned __int64 v9; // r15
  __m128i v10; // xmm0
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rax

  v4 = a2;
  v5 = operator new(0x48u);
  v6 = _mm_loadu_si128((const __m128i *)a3);
  v7 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0;
  v8 = (_QWORD *)v5;
  v9 = v6.m128i_i64[0];
  *(__m128i *)(v5 + 32) = v6;
  v10 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  *(_QWORD *)(v5 + 48) = v7;
  *(__m128i *)(v5 + 56) = v10;
  *(_OWORD *)(a3 + 24) = 0;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v12 = a1[4];
      v4 = nullptr;
      if ( *(_QWORD *)(v12 + 32) < v9 )
        goto LABEL_6;
    }
LABEL_5:
    v4 = sub_16AC0((__int64)a1, v9);
    goto LABEL_6;
  }
  v11 = a2[4];
  if ( v9 >= v11 )
  {
    if ( v11 >= v9 )
      goto LABEL_9;
    if ( (_QWORD *)a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_9;
    }
    v15 = std::_Rb_tree_increment();
    v12 = v15;
    if ( v9 < *(_QWORD *)(v15 + 32) )
    {
      if ( !a2[3] )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_9;
      }
      v4 = (_QWORD *)v15;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v12 = (__int64)a2;
  if ( (_QWORD *)a1[3] == a2 )
    goto LABEL_6;
  v13 = std::_Rb_tree_decrement();
  v12 = v13;
  if ( *(_QWORD *)(v13 + 32) >= v9 )
    goto LABEL_5;
  if ( *(_QWORD *)(v13 + 24) )
    v12 = (__int64)a2;
  else
    v4 = nullptr;
LABEL_6:
  if ( v12 )
  {
LABEL_7:
    v4 = v8;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_9:
  if ( v8 )
  {
    if ( v7 )
    {
      v8[7] = 0;
      qfree();
    }
    operator delete(v8, 0x48u);
  }
  return v4;
}

