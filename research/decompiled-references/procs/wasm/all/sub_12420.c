__int64 __fastcall sub_12420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __m128i si128; // xmm0

  if ( (_DWORD)a2 != 89 )
    return 0;
  v6 = qalloc_or_throw(584, a2, a3, a4, a5);
  *(_QWORD *)(v6 + 16) = get_ph();
  *(_QWORD *)(v6 + 24) = get_ash();
  *(_QWORD *)(v6 + 32) = get_eah();
  *(_QWORD *)v6 = off_25B00;
  *(_OWORD *)(v6 + 40) = 0;
  *(_OWORD *)(v6 + 56) = 0;
  *(_OWORD *)(v6 + 72) = 0;
  *(_OWORD *)(v6 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1E080);
  *(_WORD *)(v6 + 120) = 7;
  *(_QWORD *)(v6 + 160) = v6 + 144;
  *(_QWORD *)(v6 + 168) = v6 + 144;
  *(__m128i *)(v6 + 104) = si128;
  *(_QWORD *)(v6 + 8) = 0;
  *(_BYTE *)(v6 + 122) = 0;
  *(_QWORD *)(v6 + 128) = -1;
  *(_DWORD *)(v6 + 144) = 0;
  *(_QWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 176) = 0;
  *(_QWORD *)(v6 + 184) = 0;
  *(_QWORD *)(v6 + 208) = 0;
  *(_QWORD *)(v6 + 232) = 0;
  *(_QWORD *)(v6 + 256) = 0;
  *(_QWORD *)(v6 + 280) = 0;
  *(_QWORD *)(v6 + 304) = 0;
  *(_DWORD *)(v6 + 328) = 0;
  *(_BYTE *)(v6 + 336) = 1;
  *(_DWORD *)(v6 + 352) = 0;
  *(_OWORD *)(v6 + 192) = 0;
  *(_OWORD *)(v6 + 216) = 0;
  *(_OWORD *)(v6 + 240) = 0;
  *(_OWORD *)(v6 + 264) = 0;
  *(_OWORD *)(v6 + 288) = 0;
  *(_OWORD *)(v6 + 312) = 0;
  *(_QWORD *)(v6 + 360) = 0;
  *(_QWORD *)(v6 + 368) = v6 + 352;
  *(_QWORD *)(v6 + 376) = v6 + 352;
  *(_QWORD *)(v6 + 416) = v6 + 400;
  *(_QWORD *)(v6 + 424) = v6 + 400;
  *(_QWORD *)(v6 + 464) = v6 + 448;
  *(_QWORD *)(v6 + 472) = v6 + 448;
  *(_QWORD *)(v6 + 512) = v6 + 496;
  *(_QWORD *)(v6 + 520) = v6 + 496;
  *(_QWORD *)(v6 + 384) = 0;
  *(_DWORD *)(v6 + 400) = 0;
  *(_QWORD *)(v6 + 408) = 0;
  *(_QWORD *)(v6 + 432) = 0;
  *(_DWORD *)(v6 + 448) = 0;
  *(_QWORD *)(v6 + 456) = 0;
  *(_QWORD *)(v6 + 480) = 0;
  *(_DWORD *)(v6 + 496) = 0;
  *(_QWORD *)(v6 + 504) = 0;
  *(_QWORD *)(v6 + 528) = 0;
  *(_DWORD *)(v6 + 544) = 0;
  *(_QWORD *)(v6 + 552) = 0;
  *(_QWORD *)(v6 + 560) = v6 + 544;
  *(_QWORD *)(v6 + 568) = v6 + 544;
  *(_QWORD *)(v6 + 576) = 0;
  return set_module_data(&unk_262C4, v6);
}
