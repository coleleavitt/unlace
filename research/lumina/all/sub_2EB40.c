__int64 __fastcall sub_2EB40(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 v6; // rax

  v3 = *a2;
  if ( (unsigned __int64)a2[2] <= 0x3E )
  {
    v6 = sub_1987B0(a2, v3, 63, 1);
    *a2 = v6;
    v3 = v6;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6930);
  a2[1] = 63;
  *(__m128i *)v3 = si128;
  *(__m128i *)(v3 + 16) = _mm_load_si128((const __m128i *)&xmmword_1B6940);
  *(__m128i *)(v3 + 32) = _mm_load_si128((const __m128i *)&xmmword_1B6950);
  *(__m128i *)(v3 + 46) = _mm_load_si128((const __m128i *)&xmmword_1B6960);
  result = *a2;
  *(_BYTE *)(*a2 + 62) = 0;
  return result;
}
