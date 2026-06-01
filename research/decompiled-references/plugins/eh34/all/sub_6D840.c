__m128i *__fastcall sub_6D840(_QWORD *a1, const __m128i *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __m128i *v5; // r15
  __m128i *v6; // rbx
  unsigned __int64 v7; // rbp
  __m128i *v8; // rax
  __m128i *v9; // r14
  _BOOL4 v11; // r8d
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _BOOL4 v16; // [rsp+Ch] [rbp-3Ch]

  v5 = (__m128i *)(a1 + 1);
  v6 = (__m128i *)a1[2];
  if ( !v6 )
  {
    if ( (__m128i *)a1[3] == v5 )
    {
      v9 = (__m128i *)(a1 + 1);
      v11 = 1;
LABEL_15:
      v16 = v11;
      v6 = (__m128i *)operator new(0x30u);
      v6[2] = _mm_loadu_si128(a2);
      std::_Rb_tree_insert_and_rebalance(v16, v6, v9, v5);
      ++a1[5];
      return v6;
    }
    v7 = a2->m128i_i64[0];
    v6 = (__m128i *)(a1 + 1);
    goto LABEL_17;
  }
  v7 = a2->m128i_i64[0];
  while ( 1 )
  {
    a3 = v6[2].m128i_u64[0];
    if ( a3 >= v7 && (v7 != a3 || a2->m128i_i64[1] < (unsigned __int64)v6[2].m128i_i64[1]) )
      break;
    v8 = (__m128i *)v6[1].m128i_i64[1];
    a4 = 0;
    if ( !v8 )
      goto LABEL_9;
LABEL_5:
    v6 = v8;
  }
  v8 = (__m128i *)v6[1].m128i_i64[0];
  a4 = 1;
  if ( v8 )
    goto LABEL_5;
LABEL_9:
  v9 = v6;
  if ( (_BYTE)a4 )
  {
    if ( (__m128i *)a1[3] == v6 )
      goto LABEL_14;
LABEL_17:
    v9 = v6;
    v12 = std::_Rb_tree_decrement(v6, a2, a3, a4, a5);
    a3 = *(_QWORD *)(v12 + 32);
    v6 = (__m128i *)v12;
  }
  if ( v7 >= a3 && (a3 != v7 || v6[2].m128i_i64[1] < (unsigned __int64)a2->m128i_i64[1]) )
  {
LABEL_14:
    v11 = 1;
    if ( v5 != v9 )
    {
      v13 = v9[2].m128i_u64[0];
      v11 = 0;
      if ( v13 >= v7 )
      {
        v11 = 1;
        if ( v7 == v13 )
        {
          v14 = a2->m128i_u64[1];
          v15 = v9[2].m128i_u64[1];
          v11 = 0;
          if ( v15 >= v14 )
            v11 = v14 < v15;
        }
      }
    }
    goto LABEL_15;
  }
  return v6;
}
