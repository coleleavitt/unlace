__int64 __fastcall sub_4000(__int64 a1)
{
  __int64 eah; // rax
  __int64 ash; // rax
  _QWORD *v3; // rax
  __m128i si128; // xmm1

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = off_14CB8;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = off_14CE8;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  ash = get_ash();
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 152) = -1;
  *(_QWORD *)(a1 + 160) = ash;
  v3 = (_QWORD *)(a1 + 168);
  *(_OWORD *)(a1 + 128) = 0;
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != (_QWORD *)(a1 + 360) );
  si128 = _mm_load_si128((const __m128i *)&xmmword_11030);
  *(_BYTE *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(__m128i *)(a1 + 368) = si128;
  *(_OWORD *)(a1 + 392) = 0;
  memset((void *)(a1 + 408), 0, 0x80u);
  return hook_event_listener();
}
