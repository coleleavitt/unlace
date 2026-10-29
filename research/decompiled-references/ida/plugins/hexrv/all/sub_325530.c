__int64 __fastcall sub_325530(__int64 a1)
{
  __m128i si128; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0

  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE390);
  *(_QWORD *)a1 = 200;
  *(_QWORD *)(a1 + 88) = 64;
  *(__m128i *)(a1 + 8) = si128;
  v3 = _mm_load_si128((const __m128i *)&xmmword_3FE3A0);
  *(_QWORD *)(a1 + 96) = 0;
  *(__m128i *)(a1 + 24) = v3;
  v4 = _mm_load_si128((const __m128i *)&xmmword_3FE3B0);
  *(_QWORD *)(a1 + 120) = 0;
  *(__m128i *)(a1 + 72) = v4;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 16843010;
  *(_QWORD *)(a1 + 152) = 0x400000000LL;
  *(_DWORD *)(a1 + 192) = 32;
  *(_OWORD *)(a1 + 40) = -1;
  *(_OWORD *)(a1 + 56) = -1;
  *(_OWORD *)(a1 + 160) = -1;
  *(_OWORD *)(a1 + 176) = -1;
  return 0x400000000LL;
}

