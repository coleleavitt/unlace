__int64 __fastcall sub_A840(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0
  _WORD *v5; // rax

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw();
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_QWORD *)v3 = &off_12690;
  *(_QWORD *)(v3 + 216) = v3 + 120;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_F7A0);
  *(_QWORD *)(v3 + 128) = &off_12628;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 160) = 0;
  *(_QWORD *)(v3 + 184) = 0;
  *(_DWORD *)(v3 + 208) = 0;
  *(_QWORD *)(v3 + 224) = v3;
  *(_QWORD *)(v3 + 232) = -1;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = -1;
  *(_DWORD *)(v3 + 264) = 0;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 240) = 0xFFFFFFFF00004000LL;
  v5 = (_WORD *)(v3 + 272);
  *(_OWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 168) = 0;
  *(_OWORD *)(v3 + 192) = 0;
  do
  {
    *v5 = 0;
    v5 += 20;
    *(v5 - 19) = 0;
    *(v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *(v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( (_WORD *)(v3 + 672) != v5 );
  *(_QWORD *)(v3 + 272) = 0;
  *(_QWORD *)(v3 + 664) = 0;
  memset(
    (void *)((v3 + 280) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v3 + 272 - (((_DWORD)v3 + 280) & 0xFFFFFFF8) + 400) >> 3));
  *(_BYTE *)(v3 + 680) = 0;
  *(_QWORD *)(v3 + 672) = 0;
  return set_module_data();
}

