__int64 __fastcall sub_C9730(__m128i *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( (a1[1].m128i_i16[2] & 0x9000) != 0 || (a3 = a1[2].m128i_u32[0], (_DWORD)a3) )
    sub_C9690((__int64)a1, (__int64)a2, a3, a4, a5, a6);
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2] = _mm_loadu_si128(a2 + 2);
  a1[3].m128i_i64[0] = a2[3].m128i_i64[0];
  a2[2].m128i_i32[0] = 0;
  a2[1].m128i_i16[2] = 1;
  return 1;
}
