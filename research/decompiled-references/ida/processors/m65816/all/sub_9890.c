__int64 __fastcall sub_9890(__int64 a1)
{
  __int64 eah; // rax
  __m128i si128; // xmm0
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 result; // rax
  __m128i v6; // xmm0

  *(_QWORD *)(a1 + 16) = get_ph();
  *(_QWORD *)(a1 + 24) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = eah;
  *(_QWORD *)a1 = &off_10CB8;
  *(_QWORD *)(a1 + 216) = a1 + 120;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_DC90);
  *(_QWORD *)(a1 + 120) = -1;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 128) = &off_10C50;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 224) = &off_10CE0;
  *(_QWORD *)(a1 + 240) = a1;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_BYTE *)(a1 + 264) = 0;
  *(__m128i *)(a1 + 104) = si128;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  v3 = operator new(0x30u);
  *(_QWORD *)v3 = 0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_DC80);
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_QWORD *)(a1 + 248) = v3;
  *(__m128i *)(v3 + 12) = v4;
  *(_OWORD *)(v3 + 32) = 0;
  result = operator new(0x30u);
  v6 = _mm_load_si128((const __m128i *)&xmmword_DC80);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = 0;
  *(__m128i *)(result + 12) = v6;
  *(_DWORD *)(result + 28) = 0;
  *(_QWORD *)(a1 + 256) = result;
  *(_OWORD *)(result + 32) = 0;
  return result;
}

