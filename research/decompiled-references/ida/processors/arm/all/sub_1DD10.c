unsigned __int8 __fastcall sub_1DD10(int a1, int a2)
{
  int v2; // edx
  _OWORD v4[4]; // [rsp+0h] [rbp-58h]
  unsigned __int64 v5; // [rsp+48h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4[0] = _mm_load_si128((const __m128i *)&xmmword_894F0);
  v4[1] = _mm_load_si128((const __m128i *)&xmmword_89500);
  v4[2] = _mm_load_si128((const __m128i *)&xmmword_89510);
  v4[3] = _mm_load_si128((const __m128i *)&xmmword_89520);
  v2 = *((_DWORD *)v4 + a1);
  return _bittest(&v2, 3 - a2);
}
