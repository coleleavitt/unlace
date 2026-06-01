__int64 __fastcall sub_8100(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw();
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_QWORD *)v3 = off_C430;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_9F20);
  *(_QWORD *)(v3 + 120) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 132) = 0;
  *(__m128i *)(v3 + 104) = si128;
  return v3;
}

