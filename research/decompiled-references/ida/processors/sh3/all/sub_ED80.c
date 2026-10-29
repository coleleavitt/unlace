__int64 __fastcall sub_ED80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 eah; // rax
  __m128i si128; // xmm0
  __m128i v5; // xmm0

  *(_QWORD *)(a1 + 16) = get_ph(a1, a2, a3);
  *(_QWORD *)(a1 + 24) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = eah;
  *(_QWORD *)a1 = off_143D8;
  *(_QWORD *)(a1 + 208) = a1 + 248;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_11DE0);
  *(_QWORD *)(a1 + 120) = &off_14348;
  *(_QWORD *)(a1 + 224) = off_143B0;
  *(__m128i *)(a1 + 104) = si128;
  *(_WORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v5 = _mm_load_si128((const __m128i *)&xmmword_11DF0);
  *(_QWORD *)(a1 + 276) = 0x100000004LL;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 216) = a1;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = a1;
  *(_QWORD *)(a1 + 248) = -1;
  *(_DWORD *)(a1 + 3168) = 0;
  *(__m128i *)(a1 + 260) = v5;
  *(_QWORD *)(a1 + 288) = off_153C0;
  *(_QWORD *)(a1 + 3160) = *(_QWORD *)algn_15EF8;
  qmemcpy(
    (void *)((a1 + 296) & 0xFFFFFFFFFFFFFFF8LL),
    (char *)&off_153C0 - (a1 + 288 - ((a1 + 296) & 0xFFFFFFFFFFFFFFF8LL)),
    8LL * (((_DWORD)a1 + 288 - (((_DWORD)a1 + 296) & 0xFFFFFFF8) + 2880) >> 3));
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) = a1 + 288;
  return a1 + 288;
}

