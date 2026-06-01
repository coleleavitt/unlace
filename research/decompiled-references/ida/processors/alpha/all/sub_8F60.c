__int64 __fastcall sub_8F60(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw();
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_QWORD *)v3 = off_114F8;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_DEC0);
  *(_QWORD *)(v3 + 128) = &off_114D0;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 144) = v3;
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)(v3 + 176) = 0;
  *(_QWORD *)(v3 + 200) = -1;
  *(_QWORD *)(v3 + 208) = 0;
  *(_WORD *)(v3 + 216) = 2;
  *(_DWORD *)(v3 + 220) = 0;
  *(_OWORD *)(v3 + 160) = 0;
  *(_OWORD *)(v3 + 184) = 0;
  return set_module_data();
}

