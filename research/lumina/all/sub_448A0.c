__int64 __fastcall sub_448A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __m128i si128; // xmm0
  __int64 v6; // rax

  v3 = a2[2];
  if ( a2[4] <= 0x4Du )
  {
    v6 = sub_1987B0(a2 + 2, v3, 78, 1);
    a2[2] = v6;
    v3 = v6;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6B70);
  a2[3] = 78;
  *(__m128i *)v3 = si128;
  *(__m128i *)(v3 + 16) = _mm_load_si128((const __m128i *)&xmmword_1B6B80);
  *(__m128i *)(v3 + 32) = _mm_load_si128((const __m128i *)&xmmword_1B6B90);
  *(__m128i *)(v3 + 48) = _mm_load_si128((const __m128i *)&xmmword_1B6BA0);
  *(__m128i *)(v3 + 61) = _mm_load_si128((const __m128i *)&xmmword_1B6BB0);
  *(_BYTE *)(a2[2] + 77LL) = 0;
  return 0;
}
