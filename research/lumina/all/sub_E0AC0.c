__int64 __fastcall sub_E0AC0(__m128i *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int16 v8; // dx

  if ( (a1[1].m128i_i16[2] & 0x9000) != 0 )
    sub_C93F0((__int64)a1, (__int64)a2, a3, a4, a5, a6);
  *a1 = _mm_loadu_si128(a2);
  v6 = a2[1].m128i_u64[0];
  a1[1].m128i_i64[0] = v6;
  v7 = HIDWORD(v6);
  LOBYTE(v8) = v7;
  HIBYTE(v8) = BYTE1(v7) & 0xEF;
  a1[1].m128i_i16[2] = v8;
  if ( (v7 & 0x12) == 0 || (a2[1].m128i_i8[5] & 0x20) != 0 )
    return 0;
  HIBYTE(v8) = BYTE1(v7) & 0xAF | 0x40;
  a1[1].m128i_i16[2] = v8;
  return sub_E0350((__int64)a1);
}
