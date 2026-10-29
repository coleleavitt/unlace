__int64 __fastcall sub_163B0(__int64 a1)
{
  __int64 eah; // rax
  __m128i si128; // xmm0

  *(_QWORD *)(a1 + 16) = get_ph();
  *(_QWORD *)(a1 + 24) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = eah;
  *(_QWORD *)a1 = off_29470;
  *(_QWORD *)(a1 + 5232) = a1 + 120;
  *(_QWORD *)(a1 + 5144) = &off_29408;
  *(_QWORD *)(a1 + 5248) = &off_293E0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1F650);
  *(_QWORD *)(a1 + 5272) = 0x700000000LL;
  *(_WORD *)(a1 + 5288) = 7;
  *(__m128i *)(a1 + 104) = si128;
  *(_QWORD *)(a1 + 120) = -1;
  *(_QWORD *)(a1 + 5120) = 0;
  *(_QWORD *)(a1 + 5152) = 0;
  *(_QWORD *)(a1 + 5176) = 0;
  *(_QWORD *)(a1 + 5200) = 0;
  *(_DWORD *)(a1 + 5224) = 0;
  *(_QWORD *)(a1 + 5240) = a1;
  *(_QWORD *)(a1 + 5256) = 0;
  *(_QWORD *)(a1 + 5264) = a1;
  *(_QWORD *)(a1 + 5280) = 0;
  *(_DWORD *)(a1 + 5292) = 0;
  *(_BYTE *)(a1 + 5296) = 0;
  *(_DWORD *)(a1 + 5312) = 0;
  *(_QWORD *)(a1 + 5320) = 0;
  *(_OWORD *)(a1 + 5128) = 0;
  *(_OWORD *)(a1 + 5160) = 0;
  *(_OWORD *)(a1 + 5184) = 0;
  *(_OWORD *)(a1 + 5208) = 0;
  *(_QWORD *)(a1 + 5328) = a1 + 5312;
  *(_QWORD *)(a1 + 5336) = a1 + 5312;
  *(_QWORD *)(a1 + 5344) = 0;
  *(_DWORD *)(a1 + 5352) = 0;
  *(_QWORD *)(a1 + 128) = off_2A4C0;
  *(_QWORD *)(a1 + 5112) = unk_2B838;
  qmemcpy(
    (void *)((a1 + 136) & 0xFFFFFFFFFFFFFFF8LL),
    (char *)&off_2A4C0 - (a1 + 128 - ((a1 + 136) & 0xFFFFFFFFFFFFFFF8LL)),
    8LL * (((_DWORD)a1 + 128 - (((_DWORD)a1 + 136) & 0xFFFFFFF8) + 4992) >> 3));
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) = a1 + 128;
  return a1 + 128;
}

