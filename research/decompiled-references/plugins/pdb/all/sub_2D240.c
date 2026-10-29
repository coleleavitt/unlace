__int64 __fastcall sub_2D240(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rax
  unsigned int v3; // edx

  v2 = (const __m128i *)sub_2CEC0(*(__int64 **)(a1 + 16), 0x80000000LL, 0x80000000, 0x80000000LL);
  v3 = 1;
  if ( v2 )
  {
    v3 = 0;
    *a2 = _mm_loadu_si128(v2);
    a2[1].m128i_i64[0] = v2[1].m128i_i64[0];
  }
  return v3;
}
