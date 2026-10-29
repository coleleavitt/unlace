void __fastcall sub_D0E60(__int64 **a1, __m128i **a2)
{
  __m128i *v3; // rsi
  __m128i *v4; // rax

  v3 = *a2;
  if ( v3 )
  {
    do
    {
      *a2 = (__m128i *)v3->m128i_i64[0];
      v4 = (__m128i *)v3->m128i_i64[1];
      *v4 = _mm_loadu_si128(v3 + 1);
      v4[1] = _mm_loadu_si128(v3 + 2);
      v4[2] = _mm_loadu_si128(v3 + 3);
      v4[3] = _mm_loadu_si128(v3 + 4);
      v4[4].m128i_i64[0] = v3[5].m128i_i64[0];
      sub_C9250(**a1, v3);
      v3 = *a2;
    }
    while ( *a2 );
  }
}
