__int64 __fastcall sub_25F20(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 *v3; // rbp
  __int64 v4; // rax
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  __m128i v8; // xmm0

  *(_QWORD *)a1 = &unk_72AD8;
  sub_286A0(a1 + 1208);
  *(_QWORD *)(a1 + 2000) = 0;
  *(_QWORD *)(a1 + 2008) = 0;
  *(_DWORD *)(a1 + 2600) = 0;
  *(_DWORD *)(a1 + 2032) = 0;
  *(_QWORD *)(a1 + 2624) = 0;
  *(_QWORD *)(a1 + 2632) = 8;
  *(__m128i *)(a1 + 1984) = _mm_unpacklo_epi64(
                              (__m128i)(unsigned __int64)(a1 + 1984),
                              (__m128i)(unsigned __int64)(a1 + 1984));
  *(_OWORD *)(a1 + 2016) = 0;
  *(_OWORD *)(a1 + 2640) = 0;
  *(_OWORD *)(a1 + 2656) = 0;
  *(_OWORD *)(a1 + 2672) = 0;
  *(_OWORD *)(a1 + 2688) = 0;
  v1 = operator new(0x40u);
  v2 = *(_QWORD *)(a1 + 2632);
  *(_QWORD *)(a1 + 2624) = v1;
  v3 = (__int64 *)(v1 + ((4 * v2 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v4 = operator new(0x1F8u);
  *v3 = v4;
  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  v6 = (__m128i)(unsigned __int64)(v4 + 504);
  v8 = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)v3);
  *(_QWORD *)(a1 + 1200) = 0;
  *(_WORD *)(a1 + 2608) = 0;
  *(_QWORD *)(a1 + 2616) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(__m128i *)(a1 + 2640) = v5;
  *(__m128i *)(a1 + 2656) = v8;
  *(__m128i *)(a1 + 2672) = v5;
  *(__m128i *)(a1 + 2688) = v8;
  memset(
    (void *)((a1 + 16) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 16) & 0xFFFFFFF8) + 600) >> 3));
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 1176) = 0;
  memset(
    (void *)((a1 + 624) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 624) & 0xFFFFFFF8) + 1184) >> 3));
  *(_BYTE *)(a1 + 1188) = 0;
  *(_DWORD *)(a1 + 1184) = 0x1000000;
  *(_QWORD *)(a1 + 600) = 65520;
  *(_WORD *)(a1 + 612) = -4096;
  *(_BYTE *)(a1 + 614) = 112;
  *(_DWORD *)(a1 + 1192) = 0;
  return 0;
}

