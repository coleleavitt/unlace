__int64 __fastcall sub_6BBC0(const __m128i *a1)
{
  unsigned int v1; // edx
  __m128i *v3; // rax

  v1 = 0;
  if ( (a1[3].m128i_i8[0] & 0xF) == 0xE
    && a1[2].m128i_i16[4] == 23
    && a1[3].m128i_i8[9] == 1
    && a1[3].m128i_i16[7] == 15
    && a1[6].m128i_i8[1] == 1 )
  {
    v3 = (__m128i *)a1[54].m128i_i64[0];
    *v3 = _mm_loadu_si128(a1 + 6);
    v3[1] = _mm_loadu_si128(a1 + 7);
    v3[2].m128i_i32[0] = a1[8].m128i_i32[0];
    return 1;
  }
  return v1;
}
