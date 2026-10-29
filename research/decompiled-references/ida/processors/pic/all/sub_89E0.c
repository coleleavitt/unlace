__int64 __fastcall sub_89E0(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __m128i si128; // xmm0

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw();
  *(_QWORD *)(v3 + 16) = get_ph();
  *(_QWORD *)(v3 + 24) = get_ash();
  *(_QWORD *)(v3 + 32) = get_eah();
  *(_QWORD *)v3 = off_117E0;
  *(_QWORD *)(v3 + 208) = v3 + 224;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_DEE0);
  *(_QWORD *)(v3 + 120) = &off_11778;
  *(_WORD *)(v3 + 244) = 1;
  *(__m128i *)(v3 + 104) = si128;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)(v3 + 176) = 0;
  *(_DWORD *)(v3 + 200) = 0;
  *(_QWORD *)(v3 + 216) = v3;
  *(_DWORD *)(v3 + 240) = 0;
  *(_BYTE *)(v3 + 246) = 0;
  *(_QWORD *)(v3 + 248) = "pic12.cfg";
  *(_WORD *)(v3 + 256) = 0;
  *(_QWORD *)(v3 + 264) = 0;
  *(_OWORD *)(v3 + 136) = 0;
  *(_OWORD *)(v3 + 160) = 0;
  *(_OWORD *)(v3 + 184) = 0;
  *(_OWORD *)(v3 + 224) = -1;
  *(_OWORD *)(v3 + 272) = 0;
  return set_module_data();
}

