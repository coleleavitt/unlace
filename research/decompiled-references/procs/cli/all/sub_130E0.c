__int64 __fastcall sub_130E0(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(10400);
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_OWORD *)(v3 + 40) = 0;
  *(_QWORD *)v3 = &off_19AF8;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_155C0);
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 120) = &off_19AD0;
  *(_QWORD *)(v3 + 136) = v3;
  *(_QWORD *)(v3 + 144) = -1;
  *(__m128i *)(v3 + 104) = si128;
  memset((void *)(v3 + 152), 0, 0x2800u);
  *(_DWORD *)(v3 + 10392) = 0;
  *(_WORD *)(v3 + 10396) = 0;
  return v3;
}
