unsigned __int64 __fastcall sub_6590(unsigned __int64 a1, __int64 a2)
{
  __int64 eah; // rax
  __m128i si128; // xmm1
  __m128i v5[3]; // [rsp+0h] [rbp-38h] BYREF

  v5[0] = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  *(_QWORD *)(a1 + 8) = get_ph(a1, a2);
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  si128 = _mm_load_si128(v5);
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = off_28A20;
  *(_QWORD *)(a1 + 104) = off_28A50;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 120) = off_289F8;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(__m128i *)(a1 + 136) = si128;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  install_srclang_parser(&unk_29300);
  hook_event_listener(1, a1 + 104, a1, 0);
  hook_event_listener(0, a1 + 120, a1, 0);
  return sub_6230(a1 + 144);
}
