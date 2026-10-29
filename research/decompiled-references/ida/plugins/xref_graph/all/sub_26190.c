_QWORD *__fastcall sub_26190(
        const __m128i *a1,
        const __m128i *a2,
        _QWORD *a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  const __m128i *v11; // rbx
  __m128i *v12; // rsi
  __m128i *v13; // rax
  _QWORD *v14; // rdx
  __m128i *v15; // r15
  _BOOL4 v16; // ebp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  _QWORD *v21; // [rsp+8h] [rbp-50h]

  if ( a1 != a2 )
  {
    v11 = a1;
    do
    {
      while ( *a8 == v11[2].m128i_i64[0] )
      {
        v17 = a8[1];
        v18 = v11[2].m128i_u64[1];
        if ( v17 < v18 || v18 < v17 )
          break;
        ++*a7;
        v11 = (const __m128i *)std::_Rb_tree_increment(v11);
        if ( v11 == a2 )
          return a3;
      }
      v12 = a4;
      v20 = v11[2].m128i_u64[0];
      v13 = (__m128i *)sub_26040(a3, a4, v11[2].m128i_i64);
      v15 = v13;
      if ( v14 )
      {
        v16 = 1;
        if ( !v13 && v14 != a3 + 1 && v20 >= v14[4] )
        {
          v16 = 0;
          if ( v20 == v14[4] )
            v16 = v11[2].m128i_i64[1] < v14[5];
        }
        v21 = v14;
        v15 = (__m128i *)operator new(0x38u);
        v15[2] = _mm_loadu_si128(v11 + 2);
        v12 = v15;
        v15[3].m128i_i64[0] = v11[3].m128i_i64[0];
        std::_Rb_tree_insert_and_rebalance(v16, v15, v21, a3 + 1);
        ++a3[5];
      }
      a4 = (__m128i *)std::_Rb_tree_increment(v15, v12);
      v11 = (const __m128i *)std::_Rb_tree_increment(v11);
    }
    while ( v11 != a2 );
  }
  return a3;
}

