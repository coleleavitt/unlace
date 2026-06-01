__int64 __fastcall sub_90090(__int64 a1, const char *a2, __m128i *a3)
{
  const __m128i *v4; // rbx
  const __m128i *v5; // r12

  if ( !*(_BYTE *)(a1 + 440) )
    sub_8FDF0(a1);
  v4 = *(const __m128i **)(a1 + 224);
  v5 = (const __m128i *)((char *)v4 + 72 * *(_QWORD *)(a1 + 232));
  if ( v5 == v4 )
    return 0;
  while ( strncmp(&v4->m128i_i8[8], a2, 0x10u) )
  {
    v4 = (const __m128i *)((char *)v4 + 72);
    if ( v5 == v4 )
      return 0;
  }
  if ( a3 )
  {
    *a3 = _mm_loadu_si128(v4);
    a3[1] = _mm_loadu_si128(v4 + 1);
    a3[2] = _mm_loadu_si128(v4 + 2);
    a3[3] = _mm_loadu_si128(v4 + 3);
    a3[4].m128i_i64[0] = v4[4].m128i_i64[0];
  }
  return 1;
}
