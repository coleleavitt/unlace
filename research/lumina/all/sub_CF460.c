void __fastcall sub_CF460(__m128i *a1)
{
  int v1; // r12d
  int v2; // ebp
  __m128i *v3; // rax
  __int64 v4; // rax
  const __m128i *v5; // rbx
  __m128i *v6; // rsi

  if ( a1[2].m128i_i32[2] <= 2 )
  {
    a1[2].m128i_i32[2] = 2;
LABEL_13:
    v6 = (__m128i *)a1[2].m128i_i64[0];
    if ( v6 != &a1[41] )
    {
      a1[41] = _mm_loadu_si128(v6);
      a1[42] = _mm_loadu_si128(v6 + 1);
      a1[43] = _mm_loadu_si128(v6 + 2);
      a1[44] = _mm_loadu_si128(v6 + 3);
      if ( v6 )
        sub_C9250((__int64)a1, v6);
      a1[2].m128i_i64[0] = (__int64)a1[41].m128i_i64;
    }
    return;
  }
  v1 = 2;
  v2 = 2;
  do
  {
    while ( 1 )
    {
      v4 = a1[2].m128i_i64[0];
      v5 = (const __m128i *)(v4 + 32LL * v2);
      if ( v5->m128i_i64[1] )
        break;
      if ( v5->m128i_i64[0] )
        sub_C9250((__int64)a1, v5->m128i_i64[0]);
      v5->m128i_i64[0] = 0;
      if ( a1[2].m128i_i32[2] <= ++v2 )
        goto LABEL_10;
    }
    if ( v1 < v2 )
    {
      v3 = (__m128i *)(32LL * v1 + v4);
      *v3 = _mm_loadu_si128(v5);
      v3[1] = _mm_loadu_si128(v5 + 1);
    }
    ++v1;
    ++v2;
  }
  while ( a1[2].m128i_i32[2] > v2 );
LABEL_10:
  a1[2].m128i_i32[2] = v1;
  if ( v1 <= 2 )
    goto LABEL_13;
}
