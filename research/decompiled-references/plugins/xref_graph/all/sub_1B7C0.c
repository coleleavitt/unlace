__m128i *__fastcall sub_1B7C0(_QWORD *a1, const __m128i *a2)
{
  __m128i *v2; // r14
  __m128i *v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  char v6; // cl
  __m128i *v7; // rax
  __m128i *v8; // r12
  __int64 v10; // rax
  _BOOL4 v11; // [rsp+Ch] [rbp-3Ch]

  v2 = (__m128i *)(a1 + 1);
  v3 = (__m128i *)a1[2];
  v4 = a2->m128i_i64[0];
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = v3[2].m128i_u64[0];
      v6 = 0;
      v7 = (__m128i *)v3[1].m128i_i64[1];
      if ( v4 < v5 )
      {
        v7 = (__m128i *)v3[1].m128i_i64[0];
        v6 = 1;
      }
      if ( !v7 )
        break;
      v3 = v7;
    }
    v8 = v3;
    if ( v6 )
    {
      if ( (__m128i *)a1[3] == v3 )
        goto LABEL_9;
      v10 = std::_Rb_tree_decrement(v3, v3[1].m128i_i64[0]);
      v5 = *(_QWORD *)(v10 + 32);
      v8 = (__m128i *)v10;
    }
    if ( v5 >= v4 )
      return v8;
LABEL_9:
    v11 = 1;
    if ( v2 != v3 )
      v11 = v4 < v3[2].m128i_i64[0];
    goto LABEL_11;
  }
  if ( v2 == (__m128i *)a1[3] || (v8 = (__m128i *)std::_Rb_tree_decrement(a1 + 1, a2), v8[2].m128i_i64[0] < v4) )
  {
    v11 = 1;
    v3 = (__m128i *)(a1 + 1);
LABEL_11:
    v8 = (__m128i *)operator new(0x30u);
    v8[2] = _mm_loadu_si128(a2);
    std::_Rb_tree_insert_and_rebalance(v11, v8, v3, v2);
    ++a1[5];
  }
  return v8;
}
