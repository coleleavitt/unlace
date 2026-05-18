__int64 __fastcall sub_2ECB0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 v6; // rax

  v3 = *a2;
  if ( (unsigned __int64)a2[2] <= 0x57 )
  {
    v6 = sub_1987B0(a2, v3, 88, 1);
    *a2 = v6;
    v3 = v6;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6970);
  a2[1] = 88;
  *(__m128i *)v3 = si128;
  *(__m128i *)(v3 + 16) = _mm_load_si128((const __m128i *)&xmmword_1B6A00);
  *(__m128i *)(v3 + 32) = _mm_load_si128((const __m128i *)&xmmword_1B6A10);
  *(__m128i *)(v3 + 48) = _mm_load_si128((const __m128i *)&xmmword_1B6A20);
  *(__m128i *)(v3 + 64) = _mm_load_si128((const __m128i *)&xmmword_1B6A30);
  *(_QWORD *)(v3 + 79) = 0x3F203D207475706ELL;
  result = *a2;
  *(_BYTE *)(*a2 + 87) = 0;
  return result;
}
