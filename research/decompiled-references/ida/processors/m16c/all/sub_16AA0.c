__int64 __fastcall sub_16AA0(__int64 a1, int a2)
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
  *(_QWORD *)v3 = off_2B5C0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1BA40);
  *(_QWORD *)(v3 + 216) = v3 + 120;
  *(_QWORD *)(v3 + 128) = &off_2B558;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 160) = 0;
  *(_QWORD *)(v3 + 184) = 0;
  *(_DWORD *)(v3 + 208) = 0;
  *(_QWORD *)(v3 + 224) = v3;
  *(_OWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 168) = 0;
  *(_OWORD *)(v3 + 192) = 0;
  memset((void *)(v3 + 232), 0, 0x1000u);
  *(_DWORD *)(v3 + 4328) = 0;
  *(_QWORD *)(v3 + 4332) = -1;
  *(_DWORD *)(v3 + 4360) = -1;
  *(_DWORD *)(v3 + 4368) = 0;
  *(_WORD *)(v3 + 4372) = 0;
  *(_OWORD *)(v3 + 4344) = 0;
  return set_module_data();
}

