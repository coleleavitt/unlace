__int64 __fastcall sub_77A0(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0
  __m128i v5; // xmm0

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
  si128 = _mm_load_si128((const __m128i *)&xmmword_A170);
  *(_QWORD *)v3 = off_CC00;
  *(__m128i *)(v3 + 104) = si128;
  v5 = _mm_load_si128((const __m128i *)&xmmword_A180);
  *(_QWORD *)(v3 + 140) = 0x500000004LL;
  *(_QWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 120) = 0;
  *(_DWORD *)(v3 + 148) = 0;
  *(_DWORD *)(v3 + 152) = 5;
  *(__m128i *)(v3 + 124) = v5;
  return v3;
}

