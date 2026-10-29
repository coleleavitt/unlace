__int64 __fastcall sub_31F10(__m128i *a1)
{
  __int64 result; // rax
  const __m128i *v2; // rdx

  result = sub_31690((__int64)a1, (__m128i *)a1[57].m128i_i64, &a1[57].m128i_i32[2], 0);
  if ( (_BYTE)result )
  {
    if ( a1[2].m128i_i16[4] == 815 )
    {
      v2 = (const __m128i *)a1[54].m128i_i64[0];
      a1[58] = _mm_loadu_si128(v2);
      a1[59] = _mm_loadu_si128(v2 + 1);
      a1[60].m128i_i32[0] = v2[2].m128i_i32[0];
      a1[60].m128i_i64[1] = a1[2].m128i_i64[0];
    }
  }
  return result;
}
