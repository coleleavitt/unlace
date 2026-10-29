__int64 __fastcall sub_1B520(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 *v3; // rbp
  __int64 v4; // rax
  __m128i v5; // xmm1
  __m128i v6; // xmm0

  sub_23D70();
  *(_QWORD *)(a1 + 952) = 0;
  *(_QWORD *)a1 = off_72330;
  *(_QWORD *)(a1 + 992) = 0;
  *(_QWORD *)(a1 + 1000) = 8;
  *(_OWORD *)(a1 + 960) = 0;
  *(_OWORD *)(a1 + 1008) = 0;
  *(_OWORD *)(a1 + 1024) = 0;
  *(_OWORD *)(a1 + 1040) = 0;
  *(_OWORD *)(a1 + 1056) = 0;
  v1 = operator new(0x40u);
  v2 = *(_QWORD *)(a1 + 1000);
  *(_QWORD *)(a1 + 992) = v1;
  v3 = (__int64 *)(v1 + ((4 * v2 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v4 = operator new(0x1F8u);
  *v3 = v4;
  *(_WORD *)(a1 + 9440) = 0;
  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  *(_QWORD *)(a1 + 1072) = 0;
  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v4 + 504), (__m128i)(unsigned __int64)v3);
  *(_BYTE *)(a1 + 1080) = 0;
  *(_QWORD *)(a1 + 1096) = 0;
  *(_QWORD *)(a1 + 1088) = &off_70F30;
  *(_QWORD *)(a1 + 1104) = a1;
  *(_QWORD *)(a1 + 9384) = 0;
  *(_QWORD *)(a1 + 9408) = 0;
  *(_QWORD *)(a1 + 9432) = 0;
  *(_QWORD *)(a1 + 15608) = 0;
  *(__m128i *)(a1 + 1024) = v6;
  *(__m128i *)(a1 + 1056) = v6;
  *(__m128i *)(a1 + 1008) = v5;
  *(__m128i *)(a1 + 1040) = v5;
  *(_OWORD *)(a1 + 9368) = 0;
  *(_OWORD *)(a1 + 9392) = 0;
  *(_OWORD *)(a1 + 9416) = 0;
  sub_16050(a1);
  return sub_215B0(a1, "bochs_win32");
}

