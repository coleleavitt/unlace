unsigned __int64 __fastcall sub_10EC70(__int64 a1, __int64 a2, int a3, unsigned int a4, double a5, __m128 a6)
{
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  *(_QWORD *)a1 = &off_4DD278;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 316) = a4;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 312) = a3;
  *(_QWORD *)(a1 + 320) = a2;
  *(_QWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  if ( (a4 & 0x40) != 0 )
  {
    sub_316BB0((__int64 *)(a1 + 328), (__m128i *)(a2 + 568), 0.0, a6);
    sub_317C60((__int64 *)(a1 + 328), a2 + 184);
  }
  sub_1056B0(a1, 0.0, a6);
  return sub_10E8D0(a1, a4, v7, v8, (__m128i)0LL);
}

