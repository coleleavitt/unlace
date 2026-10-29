__int64 __fastcall sub_1A26F0(__int64 a1, __m128i **a2)
{
  __int64 result; // rax
  __m128i *v4; // rsi
  __m128i si128; // xmm0
  __m128i *v6; // rax

  if ( !*(_QWORD *)(a1 + 16) || (result = 1, !*(_QWORD *)(a1 + 96)) )
  {
    if ( a2 )
    {
      v4 = *a2;
      if ( (unsigned __int64)a2[2] <= 0x35 )
      {
        v6 = (__m128i *)sub_1987B0((__int64)a2, v4, 0x36u, 1u);
        *a2 = v6;
        v4 = v6;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B71D0);
      a2[1] = (__m128i *)&word_36;
      *v4 = si128;
      v4[1] = _mm_load_si128((const __m128i *)&xmmword_1B71E0);
      v4[2] = _mm_load_si128((const __m128i *)&xmmword_1B71F0);
      *(__int64 *)((char *)&v4[2].m128i_i64[1] + 5) = 0x646564616F6C2065LL;
      (*a2)[3].m128i_i8[5] = 0;
    }
    return 0;
  }
  return result;
}
