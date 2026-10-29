__int64 (__fastcall **__fastcall sub_29820(__int64 a1, __int64 a2, int a3))()
{
  __m128i si128; // xmm0

  *(_QWORD *)(a1 + 8) = a2;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_77440);
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 40;
  *(_QWORD *)(a1 + 64) = a1 + 40;
  *(__m128i *)(a1 + 72) = si128;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = 8;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_8C258;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 104) = -1;
  *(_OWORD *)(a1 + 88) = -1;
  return &off_8C258;
}

