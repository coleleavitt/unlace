__m128i *__fastcall sub_41530(_QWORD *a1, __int64 a2)
{
  __m128i *v3; // rbx
  __int64 v4; // r13
  const char *v5; // rsi
  __m128i *v6; // rbp
  const char *v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rax
  size_t v15; // r13
  __int64 v16; // rax
  __m128i v17; // xmm0
  void *v19; // rax
  const char *v20; // rsi
  const char *v21; // rsi
  const char *v22; // rdi
  __m128i *v23; // [rsp+0h] [rbp-48h]

  v3 = (__m128i *)a1[2];
  v23 = (__m128i *)(a1 + 1);
  if ( !v3 )
  {
    v6 = (__m128i *)(a1 + 1);
    v3 = (__m128i *)a1[3];
    if ( v23 != v3 )
      goto LABEL_19;
    goto LABEL_23;
  }
  v4 = *(_QWORD *)(a2 + 8);
  do
  {
    v10 = v3[2].m128i_i64[1];
    if ( v10 )
    {
      v5 = (const char *)v3[2].m128i_i64[0];
      v6 = v3;
      v7 = &s1;
      if ( !v4 )
        goto LABEL_5;
LABEL_4:
      v7 = *(const char **)a2;
      v6 = v3;
      goto LABEL_5;
    }
    v5 = &s1;
    if ( v4 )
      goto LABEL_4;
    v6 = (__m128i *)v3[1].m128i_i64[1];
    if ( !v6 )
    {
LABEL_14:
      if ( !*(_QWORD *)(a2 + 8) )
        return v3;
      v12 = *(const char **)a2;
      v6 = v3;
      v13 = &s1;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v10 = v6[2].m128i_i64[1];
      if ( v10 )
        break;
      v3 = v6;
      v6 = (__m128i *)v6[1].m128i_i64[1];
      if ( !v6 )
        goto LABEL_14;
    }
    v5 = (const char *)v6[2].m128i_i64[0];
    v7 = &s1;
LABEL_5:
    v8 = strcmp(v7, v5);
    v3 = (__m128i *)v6[1].m128i_i64[1];
    if ( v8 < 0 )
      v3 = (__m128i *)v6[1].m128i_i64[0];
    v9 = (v8 >> 31) & 1;
  }
  while ( v3 );
  if ( !(_BYTE)v9 )
  {
    v3 = v6;
    if ( *(_QWORD *)(a2 + 8) )
      goto LABEL_20;
    goto LABEL_29;
  }
  v3 = (__m128i *)a1[3];
  if ( v6 == v3 )
    goto LABEL_23;
LABEL_19:
  v3 = v6;
  v11 = std::_Rb_tree_decrement();
  v10 = *(_QWORD *)(v11 + 40);
  v6 = (__m128i *)v11;
  if ( !*(_QWORD *)(a2 + 8) )
  {
LABEL_29:
    v12 = &s1;
    if ( v10 )
    {
LABEL_21:
      v13 = (const char *)v6[2].m128i_i64[0];
      goto LABEL_22;
    }
    return v6;
  }
LABEL_20:
  v12 = *(const char **)a2;
  v13 = &s1;
  if ( v10 )
    goto LABEL_21;
LABEL_22:
  if ( strcmp(v13, v12) < 0 )
  {
LABEL_23:
    if ( v23 != v3 )
    {
      v21 = &s1;
      if ( v3[2].m128i_i64[1] )
        v21 = (const char *)v3[2].m128i_i64[0];
      v22 = &s1;
      if ( *(_QWORD *)(a2 + 8) )
        v22 = *(const char **)a2;
      strcmp(v22, v21);
    }
    v14 = operator new(0x50u);
    v15 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v14 + 32) = 0;
    v6 = (__m128i *)v14;
    *(_OWORD *)(v14 + 40) = 0;
    if ( v15 )
    {
      v19 = (void *)qalloc_or_throw();
      v6[2].m128i_i64[0] = (__int64)v19;
      v20 = *(const char **)a2;
      v6[3].m128i_i64[0] = v15;
      memcpy(v19, v20, v15);
      v6[2].m128i_i64[1] = v15;
    }
    v16 = *(_QWORD *)(a2 + 24);
    v17 = _mm_loadu_si128((const __m128i *)(a2 + 32));
    *(_QWORD *)(a2 + 24) = 0;
    v6[3].m128i_i64[1] = v16;
    v6[4] = v17;
    *(_OWORD *)(a2 + 32) = 0;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
  }
  return v6;
}
