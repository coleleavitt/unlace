__int64 __fastcall sub_AF00(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0
  _WORD *v5; // rax

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(5608);
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_210D0);
  *(_QWORD *)v3 = off_255C8;
  *(__m128i *)(v3 + 104) = si128;
  *(_OWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 184) = 0;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 176) = 0;
  *(_QWORD *)(v3 + 200) = 0;
  *(_QWORD *)(v3 + 208) = 0;
  *(_QWORD *)(v3 + 216) = -1;
  *(_OWORD *)(v3 + 160) = 0;
  memset((void *)(v3 + 352), 0, 0x1310u);
  *(_OWORD *)(v3 + 5240) = -1;
  v5 = (_WORD *)(v3 + 5280);
  *(_DWORD *)(v3 + 5232) = 0;
  *(_QWORD *)(v3 + 5256) = -1;
  *(_QWORD *)(v3 + 5264) = 0;
  *(_QWORD *)(v3 + 5272) = 0;
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
  while ( (_WORD *)(v3 + 5600) != v5 );
  *(_QWORD *)(v3 + 5600) = 0;
  return v3;
}

