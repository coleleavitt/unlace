__int64 __fastcall sub_2BB0(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw();
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_QWORD *)v3 = &off_7418;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5520);
  *(_QWORD *)(v3 + 864) = &off_7440;
  *(_WORD *)(v3 + 904) = 0;
  *(_QWORD *)(v3 + 704) = v3 + 288;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 264) = 0;
  *(_QWORD *)(v3 + 720) = 0;
  *(_QWORD *)(v3 + 744) = 0;
  *(_QWORD *)(v3 + 768) = 0;
  *(_BYTE *)(v3 + 792) = 2;
  *(_QWORD *)(v3 + 816) = 0;
  *(_QWORD *)(v3 + 824) = 0;
  *(_QWORD *)(v3 + 848) = 0;
  *(_QWORD *)(v3 + 856) = 0;
  *(_QWORD *)(v3 + 872) = 0;
  *(_QWORD *)(v3 + 880) = v3;
  *(_QWORD *)(v3 + 888) = 0;
  *(_QWORD *)(v3 + 896) = 0;
  *(_QWORD *)(v3 + 712) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 272) = 0;
  *(_OWORD *)(v3 + 728) = 0;
  *(_OWORD *)(v3 + 752) = 0;
  *(_OWORD *)(v3 + 776) = 0;
  *(_OWORD *)(v3 + 800) = 0;
  *(_OWORD *)(v3 + 832) = 0;
  *(_QWORD *)(v3 + 120) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  memset(
    (void *)((v3 + 128) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v3 - (((_DWORD)v3 + 128) & 0xFFFFFFF8) + 264) >> 3));
  return v3;
}

