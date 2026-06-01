__int64 (__fastcall *__fastcall sub_118D0(
        __int64 a1))(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 eah; // rax
  __m128i si128; // xmm1
  __m128i v3; // xmm0

  *(_QWORD *)(a1 + 16) = get_ph();
  *(_QWORD *)(a1 + 24) = get_ash();
  eah = get_eah();
  si128 = _mm_load_si128((const __m128i *)&xmmword_13CD0);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = eah;
  *(_QWORD *)a1 = off_17F70;
  *(_WORD *)(a1 + 160) = 2;
  *(_QWORD *)(a1 + 184) = "LO10";
  *(_QWORD *)(a1 + 192) = 0xD0400000006LL;
  *(_QWORD *)(a1 + 224) = sub_FDA0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  v3 = _mm_load_si128((const __m128i *)&xmmword_13CC0);
  *(_QWORD *)(a1 + 240) = "HI22";
  *(_QWORD *)(a1 + 248) = 0xA200400000006LL;
  *(__m128i *)(a1 + 104) = v3;
  *(_QWORD *)(a1 + 120) = -1;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 292) = 0;
  *(_BYTE *)(a1 + 300) = 0;
  *(_DWORD *)(a1 + 200) = 64;
  *(_DWORD *)(a1 + 232) = 56;
  *(_DWORD *)(a1 + 256) = 64;
  *(_QWORD *)(a1 + 264) = sub_FE40;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(__m128i *)(a1 + 164) = si128;
  *(_OWORD *)(a1 + 208) = 0;
  return sub_FE40;
}
