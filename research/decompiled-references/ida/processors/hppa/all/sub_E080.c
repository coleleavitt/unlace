__int64 __fastcall sub_E080(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw();
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_11B50);
  *(_QWORD *)v3 = off_16010;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 128) = 0;
  *(_WORD *)(v3 + 152) = 1;
  *(_DWORD *)(v3 + 156) = 0;
  *(_QWORD *)(v3 + 160) = -1;
  *(_QWORD *)(v3 + 168) = 0;
  *(_BYTE *)(v3 + 176) = 0;
  *(_QWORD *)(v3 + 184) = -1;
  *(_DWORD *)(v3 + 192) = -1;
  *(_OWORD *)(v3 + 136) = 0;
  return set_module_data();
}

