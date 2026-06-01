__int64 __fastcall sub_8690(__int64 a1)
{
  __int64 eah; // rax
  __m128i si128; // xmm0
  int v3; // eax
  __int64 v4; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm0

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 112) = -1;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = off_2E028;
  *(_QWORD *)(a1 + 128) = 4294967294LL;
  *(_QWORD *)(a1 + 576) = &off_2DFD8;
  *(_QWORD *)(a1 + 600) = &off_2E000;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_25090);
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 568) = -1;
  *(_BYTE *)(a1 + 572) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = a1;
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = a1;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(__m128i *)(a1 + 96) = si128;
  *(__m128i *)(a1 + 136) = si128;
  memset(
    (void *)((a1 + 160) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 160) & 0xFFFFFFF8) + 296) >> 3));
  sub_80F0(a1);
  set_module_data(&dword_2F624, a1);
  sub_112B0(a1);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
  if ( v3 )
  {
    if ( v3 == 13 )
    {
      v4 = operator new(0xF8u);
      sub_225C0(v4, a1);
    }
    else
    {
      v4 = operator new(0x48u);
      *(_QWORD *)(v4 + 8) = a1;
      *(_QWORD *)(v4 + 48) = 0;
      *(_QWORD *)v4 = off_2EC88;
      *(_QWORD *)(v4 + 56) = 0;
      *(_BYTE *)(v4 + 64) = 0;
      *(_OWORD *)(v4 + 16) = 0;
      *(_OWORD *)(v4 + 32) = -1;
    }
  }
  else
  {
    v6 = operator new(0x48u);
    v7 = _mm_load_si128((const __m128i *)&xmmword_250A0);
    *(_QWORD *)(v6 + 8) = a1;
    v4 = v6;
    *(_QWORD *)(v6 + 48) = 0;
    *(__m128i *)(v6 + 16) = v7;
    *(_QWORD *)(v6 + 56) = 0;
    *(_BYTE *)(v6 + 64) = 0;
    *(_OWORD *)(v6 + 32) = -1;
    *(_QWORD *)v6 = off_2ECD0;
  }
  *(_QWORD *)(a1 + 624) = v4;
  sub_7FF0(0x5Du, 0x45485F5041525345LL, v4);
  hook_event_listener(3, a1 + 576, a1, 0);
  return hook_event_listener(0, a1 + 600, a1, 0);
}

