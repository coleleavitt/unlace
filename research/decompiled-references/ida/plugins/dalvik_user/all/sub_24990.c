__int64 *__fastcall sub_24990(_QWORD *a1, __int64 *a2, const __m128i *a3)
{
  __int64 *v4; // rbp
  __m128i *v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  __m128i si128; // xmm0
  __int64 *v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r13
  _QWORD *v16; // rbx
  __int64 v18; // rax
  __m128i v19; // [rsp+0h] [rbp-58h] BYREF
  __m128i v20[4]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a2;
  v5 = (__m128i *)operator new(0x40u);
  v6 = a3->m128i_i64[1];
  v7 = a3->m128i_i64[0];
  si128 = _mm_loadu_si128(a3 + 1);
  a3->m128i_i64[1] = 0;
  v9 = (__int64 *)v5;
  a3[1] = 0;
  v5[2].m128i_i64[0] = v7;
  v5[2].m128i_i64[1] = v6;
  v5[3] = si128;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v11 = a1[4];
      v4 = nullptr;
      if ( *(_QWORD *)(v11 + 32) < v7 )
        goto LABEL_6;
    }
LABEL_5:
    v19 = si128;
    v13 = sub_16C40((__int64)a1, v7);
    si128.m128i_i64[0] = _mm_load_si128(&v19).m128i_u64[0];
    v4 = v13;
    goto LABEL_6;
  }
  v10 = a2[4];
  if ( v7 >= v10 )
  {
    v19.m128i_i64[0] = a2[4];
    if ( v10 >= v7 )
      goto LABEL_9;
    if ( (__int64 *)a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_9;
    }
    v20[0] = si128;
    v18 = std::_Rb_tree_increment();
    si128 = _mm_load_si128(v20);
    v11 = v18;
    if ( v7 < *(_QWORD *)(v18 + 32) )
    {
      if ( !a2[3] )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_9;
      }
      v4 = (__int64 *)v18;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v11 = (__int64)a2;
  if ( (__int64 *)a1[3] == a2 )
    goto LABEL_6;
  v19 = si128;
  v12 = std::_Rb_tree_decrement();
  si128 = _mm_load_si128(&v19);
  v11 = v12;
  if ( *(_QWORD *)(v12 + 32) >= v7 )
    goto LABEL_5;
  if ( *(_QWORD *)(v12 + 24) )
    v11 = (__int64)a2;
  else
    v4 = nullptr;
LABEL_6:
  if ( v11 )
  {
LABEL_7:
    v4 = v9;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_9:
  if ( v9 )
  {
    if ( v6 )
    {
      if ( si128.m128i_i64[0] )
      {
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = (_QWORD *)(v14 + v6);
          if ( v16[8] )
          {
            v16[9] = 0;
            qfree();
          }
          if ( v16[5] )
          {
            v16[6] = 0;
            qfree();
          }
          if ( v16[2] )
          {
            v16[3] = 0;
            qfree();
          }
          ++v15;
          v6 = v9[5];
          v14 += 112;
        }
        while ( si128.m128i_i64[0] != v15 );
      }
      v9[6] = 0;
      qfree();
    }
    operator delete(v9, 0x40u);
  }
  return v4;
}

