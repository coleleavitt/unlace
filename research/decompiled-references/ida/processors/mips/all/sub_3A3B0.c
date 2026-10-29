__int64 __fastcall sub_3A3B0(unsigned int a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm2

  if ( a1 <= 0xA )
  {
    if ( ((1LL << a1) & 0x355) != 0 )
      return 0;
    if ( ((1LL << a1) & 0x4AA) != 0 )
      return 1;
  }
  if ( under_debugger )
    BUG();
  interr(10081);
  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(632);
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  si128 = _mm_load_si128((const __m128i *)&xmmword_595E0);
  *(_OWORD *)(v3 + 40) = 0;
  *(_QWORD *)v3 = &off_73328;
  *(_QWORD *)(v3 + 128) = off_73300;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 352) = -1;
  *(_QWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 120) = 6;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 144) = v3;
  *(_QWORD *)(v3 + 152) = -1;
  *(_QWORD *)(v3 + 160) = 0;
  *(_DWORD *)(v3 + 184) = 0;
  *(_WORD *)(v3 + 188) = 117;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)(v3 + 264) = 0;
  *(_QWORD *)(v3 + 288) = 0;
  *(_BYTE *)(v3 + 312) = 0;
  *(_QWORD *)(v3 + 320) = 0;
  *(_DWORD *)(v3 + 344) = 0;
  *(__m128i *)(v3 + 104) = si128;
  *(_OWORD *)(v3 + 168) = 0;
  *(_OWORD *)(v3 + 192) = 0;
  *(_OWORD *)(v3 + 208) = 0;
  *(_OWORD *)(v3 + 224) = 0;
  *(_OWORD *)(v3 + 240) = 0;
  *(_OWORD *)(v3 + 272) = 0;
  *(_OWORD *)(v3 + 296) = 0;
  *(_OWORD *)(v3 + 328) = 0;
  *(__m128i *)(v3 + 368) = si128;
  *(_OWORD *)(v3 + 392) = -1;
  *(_DWORD *)(v3 + 384) = -1;
  *(_BYTE *)(v3 + 388) = 0;
  *(_QWORD *)(v3 + 592) = -1;
  *(_DWORD *)(v3 + 600) = -1;
  *(_WORD *)(v3 + 604) = -1;
  *(_DWORD *)(v3 + 608) = -1;
  *(_OWORD *)(v3 + 576) = -1;
  *(_OWORD *)(v3 + 616) = 0;
  return set_module_data(&dword_75804, v3);
}

