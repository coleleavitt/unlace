__int64 __fastcall sub_11CE0(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _WORD *v4; // rdx
  __m128i si128; // xmm0
  _WORD *v6; // rax

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw();
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_QWORD *)v3 = off_1B600;
  v4 = (_WORD *)(v3 + 352);
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_17BF0);
  *(_QWORD *)(v3 + 216) = v3 + 120;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 160) = 0;
  *(_QWORD *)(v3 + 184) = 0;
  *(_DWORD *)(v3 + 208) = 0;
  *(_QWORD *)(v3 + 128) = &off_1B598;
  *(_QWORD *)(v3 + 224) = v3;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = -1;
  *(_DWORD *)(v3 + 264) = 0;
  *(_OWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 168) = 0;
  *(_OWORD *)(v3 + 192) = 0;
  *(_OWORD *)(v3 + 232) = -1;
  do
  {
    v6 = v4 - 40;
    do
    {
      *v6 = 0;
      v6 += 20;
      *(v6 - 19) = 0;
      *(v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *(v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *((_QWORD *)v6 - 2) = 0;
    }
    while ( v4 != v6 );
    v4 += 40;
  }
  while ( (_WORD *)(v3 + 672) != v4 );
  *(_QWORD *)(v3 + 272) = 0;
  *(_QWORD *)(v3 + 584) = 0;
  memset(
    (void *)((v3 + 280) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v3 + 272 - (((_DWORD)v3 + 280) & 0xFFFFFFF8) + 320) >> 3));
  *(_DWORD *)(v3 + 600) = -1;
  *(_BYTE *)(v3 + 604) = 0;
  *(_QWORD *)(v3 + 592) = 0x1000000010000LL;
  return set_module_data();
}

