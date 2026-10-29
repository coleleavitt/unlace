__m128i *__fastcall sub_41540(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __m128i v5; // xmm0
  __m128i *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rdx

  v3 = operator new(0x48u);
  v4 = a2->m128i_i64[0];
  v5 = _mm_loadu_si128(a2 + 1);
  v6 = (__m128i *)v3;
  *(_QWORD *)(v3 + 32) = a2->m128i_i64[0];
  v7 = a2->m128i_i64[1];
  v6[3] = v5;
  v6[2].m128i_i64[1] = v7;
  LOWORD(v7) = a2[2].m128i_i16[0];
  a2->m128i_i64[1] = 0;
  a2[1] = 0;
  v8 = *(_QWORD **)(a1 + 16);
  v6[4].m128i_i16[0] = v7;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)v8[3];
      if ( v4 < v8[4] )
        v9 = (_QWORD *)v8[2];
      if ( !v9 )
        break;
      v8 = v9;
    }
  }
  std::_Rb_tree_insert_and_rebalance();
  ++*(_QWORD *)(a1 + 40);
  return v6;
}

