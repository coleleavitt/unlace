__m128i *__fastcall sub_1F510(_QWORD *a1, const __m128i *a2)
{
  __m128i *v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __m128i *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __m128i *v9; // rax
  __m128i v10; // xmm0
  __m128i *v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  _QWORD *m128i_i64; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __m128i *v19; // rax
  __m128i v20; // xmm0
  bool v21; // zf
  unsigned __int64 v22; // r15

  v3 = (__m128i *)a1[2];
  v4 = a2->m128i_i64[0];
  v5 = a2->m128i_u64[1];
  if ( !v3 )
  {
LABEL_27:
    v19 = (__m128i *)operator new(0x38u);
    v20 = _mm_loadu_si128(a2);
    v21 = a1[5] == 0;
    v19[3].m128i_i32[0] = 0;
    v6 = v19;
    v19[2] = v20;
    v22 = v19[2].m128i_u64[1];
    if ( !v21 )
    {
      m128i_i64 = (_QWORD *)a1[4];
      v17 = 0;
      if ( m128i_i64[4] == v20.m128i_i64[0] )
      {
        if ( m128i_i64[5] < v22 )
          goto LABEL_17;
      }
      else if ( m128i_i64[4] < v20.m128i_i64[0] )
      {
        goto LABEL_17;
      }
    }
    v17 = (__int64)sub_177D0((__int64)a1, v20.m128i_u64[0], v22);
    goto LABEL_17;
  }
  v6 = (__m128i *)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v7 = v3[2].m128i_u64[0];
      if ( v4 == v7 )
        break;
      if ( v7 >= v4 )
        goto LABEL_7;
LABEL_4:
      v3 = (__m128i *)v3[1].m128i_i64[1];
      if ( !v3 )
        goto LABEL_8;
    }
    if ( v3[2].m128i_i64[1] < v5 )
      goto LABEL_4;
LABEL_7:
    v6 = v3;
    v3 = (__m128i *)v3[1].m128i_i64[0];
  }
  while ( v3 );
LABEL_8:
  if ( a1 + 1 == (_QWORD *)v6 )
    goto LABEL_27;
  v8 = v6[2].m128i_u64[0];
  if ( v8 == v4 )
  {
    if ( v5 >= v6[2].m128i_i64[1] )
      return v6 + 3;
LABEL_11:
    v9 = (__m128i *)operator new(0x38u);
    v10 = _mm_loadu_si128(a2);
    v9[3].m128i_i32[0] = 0;
    v11 = v9;
    v9[2] = v10;
    v12 = v6[2].m128i_u64[0];
    v13 = v9[2].m128i_u64[1];
    v14 = v6[2].m128i_u64[1];
    if ( v10.m128i_i64[0] == v12 )
    {
      if ( v14 == v13 )
        goto LABEL_37;
      if ( v13 < v14 )
      {
LABEL_13:
        if ( (__m128i *)a1[3] != v6 )
        {
          m128i_i64 = (_QWORD *)std::_Rb_tree_decrement();
          v16 = m128i_i64[4];
          if ( v10.m128i_i64[0] == v16 )
          {
            if ( m128i_i64[5] >= v13 )
              goto LABEL_16;
          }
          else if ( v16 >= v10.m128i_i64[0] )
          {
LABEL_16:
            v6 = v11;
            v17 = (__int64)sub_177D0((__int64)a1, v10.m128i_u64[0], v13);
LABEL_17:
            if ( m128i_i64 )
            {
LABEL_18:
              std::_Rb_tree_insert_and_rebalance();
              ++a1[5];
              return v6 + 3;
            }
            v11 = v6;
            v6 = (__m128i *)v17;
            goto LABEL_37;
          }
          v17 = m128i_i64[3];
          if ( !v17 )
          {
            v6 = v11;
            goto LABEL_17;
          }
        }
        m128i_i64 = v6->m128i_i64;
        v17 = (__int64)v6;
        v6 = v11;
        goto LABEL_17;
      }
      if ( (__m128i *)a1[4] == v6 )
      {
LABEL_34:
        if ( v6 )
        {
          v6 = v11;
          goto LABEL_18;
        }
LABEL_37:
        if ( v11 )
          operator delete(v11, 0x38u);
        return v6 + 3;
      }
    }
    else
    {
      if ( v10.m128i_i64[0] < v12 )
        goto LABEL_13;
      if ( (__m128i *)a1[4] == v6 )
      {
        if ( v6 )
        {
          v6 = v9;
          goto LABEL_18;
        }
        goto LABEL_37;
      }
    }
    v17 = std::_Rb_tree_increment();
    if ( v10.m128i_i64[0] == *(_QWORD *)(v17 + 32) )
    {
      if ( v13 >= *(_QWORD *)(v17 + 40) )
        goto LABEL_16;
    }
    else if ( v10.m128i_i64[0] >= *(_QWORD *)(v17 + 32) )
    {
      goto LABEL_16;
    }
    if ( v6[1].m128i_i64[1] )
    {
      v6 = v11;
      m128i_i64 = (_QWORD *)v17;
      goto LABEL_17;
    }
    goto LABEL_34;
  }
  if ( v4 < v8 )
    goto LABEL_11;
  return v6 + 3;
}

