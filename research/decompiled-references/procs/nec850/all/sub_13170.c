__int64 __fastcall sub_13170(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(272);
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_OWORD *)(v3 + 40) = 0;
  *(_QWORD *)v3 = &off_2CE88;
  *(_QWORD *)(v3 + 128) = &off_2CE60;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23BD0);
  *(_WORD *)(v3 + 184) = 1;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 144) = v3;
  *(_DWORD *)(v3 + 188) = 0;
  *(_QWORD *)(v3 + 192) = 0;
  *(_WORD *)(v3 + 256) = -1;
  *(_QWORD *)(v3 + 260) = 0x2FFFFFFFFLL;
  *(_BYTE *)(v3 + 268) = 0;
  *(_OWORD *)(v3 + 152) = -1;
  *(_OWORD *)(v3 + 168) = -1;
  return set_module_data(&dword_2E630, v3);
}
