__int64 (__fastcall **__fastcall sub_F880(__int64 a1, __int64 a2, __int64 a3))()
{
  __m128i si128; // xmm0

  *(_QWORD *)(a1 + 16) = a3;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BE50);
  *(_QWORD *)(a1 + 8) = a2;
  *(__m128i *)(a1 + 24) = si128;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)a1 = off_875D8;
  *(_DWORD *)(a1 + 344) = -1073479678;
  *(_QWORD *)(a1 + 40) = 0x3400000037LL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  return off_875D8;
}
