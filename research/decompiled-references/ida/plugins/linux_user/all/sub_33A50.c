__int64 __fastcall sub_33A50(__int64 a1)
{
  __m128i si128; // xmm0
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 i; // r12
  _QWORD *v17; // rbp

  si128 = _mm_load_si128((const __m128i *)&xmmword_3AD40);
  *(_QWORD *)a1 = off_45838;
  *(_QWORD *)(a1 + 24) = -1;
  *(_DWORD *)(a1 + 32) = 8;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  *(__m128i *)(a1 + 8) = si128;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v3 = operator new(0x40u);
  v4 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 120) = v3;
  v5 = (__int64 *)(v3 + ((4 * v4 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v6 = operator new(0x1F8u);
  *v5 = v6;
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  *(__m128i *)(a1 + 136) = v7;
  *(__m128i *)(a1 + 168) = v7;
  *(_QWORD *)(a1 + 208) = -1;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v6 + 504), (__m128i)(unsigned __int64)v5);
  *(_QWORD *)(a1 + 200) = 0xFFFFFFFFLL;
  *(__m128i *)(a1 + 152) = v8;
  *(_QWORD *)(a1 + 272) = 0x800000028LL;
  *(__m128i *)(a1 + 184) = v8;
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 344;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 408) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 392;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  *(_QWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  v9 = _mm_load_si128((const __m128i *)&xmmword_3AD80);
  *(_QWORD *)(a1 + 536) = a1 + 520;
  *(_QWORD *)(a1 + 544) = a1 + 520;
  *(_DWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_DWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = a1 + 616;
  *(_QWORD *)(a1 + 640) = a1 + 616;
  *(_QWORD *)(a1 + 648) = 0;
  *(_DWORD *)(a1 + 656) = -1;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  *(_DWORD *)(a1 + 768) = 1;
  *(_BYTE *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 0;
  *(_OWORD *)(a1 + 480) = 0;
  *(_OWORD *)(a1 + 496) = 0;
  *(_OWORD *)(a1 + 568) = 0;
  *(_OWORD *)(a1 + 592) = 0;
  *(_OWORD *)(a1 + 664) = 0;
  *(_OWORD *)(a1 + 680) = 0;
  *(_OWORD *)(a1 + 704) = 0;
  *(_OWORD *)(a1 + 728) = 0;
  *(_OWORD *)(a1 + 752) = 0;
  *(__m128i *)(a1 + 776) = v9;
  *(_OWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_DWORD *)(a1 + 856) = -1;
  *(_WORD *)(a1 + 860) = 0;
  *(_OWORD *)(a1 + 840) = 0;
  v10 = qvector_reserve();
  *(_QWORD *)(a1 + 280) = v10;
  *(_QWORD *)(a1 + 288) = 10;
  *(_QWORD *)v10 = 0x454E494645444E55LL;
  *(_BYTE *)(v10 + 8) = 68;
  *(_BYTE *)(*(_QWORD *)(a1 + 280) + 9LL) = 0;
  result = sub_B950(a1 + 280);
  if ( *(_BYTE *)(a1 + 36) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = 4;
    if ( (_DWORD)result == 8 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      v13 = 8;
    }
    *(_QWORD *)(a1 + 24) = v12;
    *(_DWORD *)(a1 + 32) = v13;
  }
  v14 = *(_QWORD *)(a1 + 312);
  *(_DWORD *)(a1 + 276) = result;
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 320);
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = (_QWORD *)(v14 + (i << 6));
        if ( v17[5] )
        {
          v17[6] = 0;
          qfree();
        }
        if ( v17[1] )
        {
          v17[2] = 0;
          qfree();
        }
        v14 = *(_QWORD *)(a1 + 312);
      }
    }
    *(_QWORD *)(a1 + 320) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 328) = 0;
  }
  return result;
}

