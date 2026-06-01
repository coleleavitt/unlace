__int64 __fastcall sub_8F90(__int64 a1)
{
  __int64 eah; // rax
  __m128i si128; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0

  *(_QWORD *)(a1 + 16) = get_ph();
  *(_QWORD *)(a1 + 24) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_D920);
  *(_QWORD *)(a1 + 32) = eah;
  *(__m128i *)(a1 + 104) = si128;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  v3 = _mm_load_si128((const __m128i *)&xmmword_D930);
  *(_QWORD *)a1 = off_FAD8;
  *(_QWORD *)(a1 + 128) = &off_FA70;
  *(__m128i *)(a1 + 224) = v3;
  v4 = _mm_load_si128((const __m128i *)&xmmword_D940);
  *(_QWORD *)(a1 + 216) = a1 + 120;
  *(__m128i *)(a1 + 240) = v4;
  v5 = _mm_load_si128((const __m128i *)&xmmword_D950);
  *(_QWORD *)(a1 + 2984) = 0x100C05030F010007LL;
  *(_QWORD *)(a1 + 3000) = sub_83E0;
  *(_QWORD *)(a1 + 120) = -1;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 272) = 10;
  *(_DWORD *)(a1 + 2992) = 0;
  *(_BYTE *)(a1 + 2996) = 0;
  *(_QWORD *)(a1 + 3008) = 0;
  *(__m128i *)(a1 + 256) = v5;
  *(__m128i *)(a1 + 280) = _mm_load_si128((const __m128i *)&off_FC80);
  v7 = _mm_load_si128((const __m128i *)&off_FC90);
  *(_QWORD *)(a1 + 360) = &dword_0;
  *(__m128i *)(a1 + 296) = v7;
  v8 = _mm_load_si128((const __m128i *)&off_FCA0);
  *(_QWORD *)(a1 + 448) = &dword_0;
  *(__m128i *)(a1 + 312) = v8;
  *(__m128i *)(a1 + 328) = _mm_load_si128((const __m128i *)&off_FCB0);
  *(__m128i *)(a1 + 344) = _mm_load_si128((const __m128i *)off_FCC0);
  *(__m128i *)(a1 + 368) = _mm_load_si128((const __m128i *)off_FC20);
  *(__m128i *)(a1 + 384) = _mm_load_si128((const __m128i *)off_FC30);
  *(__m128i *)(a1 + 400) = _mm_load_si128((const __m128i *)off_FC40);
  *(__m128i *)(a1 + 416) = _mm_load_si128((const __m128i *)off_FC50);
  *(__m128i *)(a1 + 432) = _mm_load_si128((const __m128i *)off_FC60);
  *(__m128i *)(a1 + 456) = _mm_load_si128((const __m128i *)&off_10BA0);
  *(__m128i *)(a1 + 472) = _mm_load_si128((const __m128i *)&off_10BB0);
  *(__m128i *)(a1 + 488) = _mm_load_si128((const __m128i *)&off_10BC0);
  *(__m128i *)(a1 + 504) = _mm_load_si128((const __m128i *)off_10BD0);
  *(__m128i *)(a1 + 520) = _mm_load_si128((const __m128i *)&off_10BE0);
  *(__m128i *)(a1 + 536) = _mm_load_si128((const __m128i *)off_10BF0);
  *(__m128i *)(a1 + 552) = _mm_load_si128((const __m128i *)&off_10C00);
  *(__m128i *)(a1 + 568) = _mm_load_si128((const __m128i *)&off_10C10);
  *(__m128i *)(a1 + 584) = _mm_load_si128((const __m128i *)off_10C20);
  *(__m128i *)(a1 + 600) = _mm_load_si128((const __m128i *)&off_10C30);
  *(_QWORD *)(a1 + 616) = off_112E0;
  *(_QWORD *)(a1 + 2976) = *(_QWORD *)algn_11C18;
  qmemcpy(
    (void *)((a1 + 624) & 0xFFFFFFFFFFFFFFF8LL),
    (char *)&off_112E0 - (a1 + 616 - ((a1 + 624) & 0xFFFFFFFFFFFFFFF8LL)),
    8LL * (((_DWORD)a1 + 616 - (((_DWORD)a1 + 624) & 0xFFFFFFF8) + 2368) >> 3));
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) = a1 + 616;
  return a1 + 616;
}

