__int64 __fastcall sub_12C50(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(184);
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_QWORD *)v3 = &off_290E0;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_21440);
  *(_QWORD *)(v3 + 144) = off_290B8;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)(v3 + 160) = v3;
  *(_WORD *)(v3 + 168) = 31;
  *(_QWORD *)(v3 + 176) = -1;
  *(_OWORD *)(v3 + 120) = -1;
  return set_module_data(&dword_2A524, v3);
}

