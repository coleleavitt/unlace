__int64 __fastcall sub_5EA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __m128i si128; // xmm0

  *(_QWORD *)a1 = &off_12B58;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = -1;
  v3 = operator new(0x50u);
  *(_QWORD *)(a1 + 48) = -1;
  *(_QWORD *)v3 = a1;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(a1 + 40) = v3;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 85) = 0;
  *(_OWORD *)(v3 + 16) = 0;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 64) = 0;
  *(_OWORD *)(a1 + 93) = 0;
  *(_OWORD *)(a1 + 57) = 0;
  *(_OWORD *)(a1 + 109) = -1;
  *(_OWORD *)(a1 + 69) = 0;
  *(_OWORD *)(a1 + 125) = -1;
  v4 = qalloc_or_throw(24);
  *(_QWORD *)v4 = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)(a1 + 141) = v4;
  *(_WORD *)(a1 + 165) = 0;
  *(__m128i *)(a1 + 149) = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80008000), 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_10090);
  *(_DWORD *)(a1 + 381) = 0;
  *(__m128i *)(a1 + 167) = si128;
  *(_QWORD *)(a1 + 259) = 0;
  *(_QWORD *)(a1 + 267) = -1;
  *(_QWORD *)(a1 + 275) = 0;
  *(_QWORD *)(a1 + 373) = 0;
  memset(
    (void *)((a1 + 283) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 283) & 0xFFFFFFF8) + 381) >> 3));
  *(_OWORD *)(a1 + 231) = 0;
  *(_OWORD *)(a1 + 183) = 0;
  *(_OWORD *)(a1 + 199) = 0;
  *(_OWORD *)(a1 + 215) = 0;
  *(_OWORD *)(a1 + 243) = 0;
  return 0;
}
