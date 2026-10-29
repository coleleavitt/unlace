__int16 __fastcall sub_CD380(__m128i *a1, const __m128i *a2, __int16 a3)
{
  __int64 v3; // rax

  if ( (a1[1].m128i_i16[2] & 0x9000) != 0 )
  {
    LOWORD(v3) = sub_CD3C0();
  }
  else
  {
    *a1 = _mm_loadu_si128(a2);
    v3 = a2[1].m128i_i64[0];
    a1[1].m128i_i64[0] = v3;
    if ( (a2[1].m128i_i8[5] & 0x20) == 0 )
    {
      LOWORD(v3) = a1[1].m128i_i16[2];
      BYTE1(v3) &= 0x8Fu;
      a1[1].m128i_i16[2] = v3 | a3;
    }
  }
  return v3;
}
