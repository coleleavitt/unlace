void __fastcall sub_1BFD0(__int64 a1)
{
  __m128i si128; // xmm0

  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(__m128i *)a1 = si128;
}

