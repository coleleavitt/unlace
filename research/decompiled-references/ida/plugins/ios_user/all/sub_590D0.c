__int64 __fastcall sub_590D0(__int64 a1)
{
  __m128i v1; // xmm0

  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = -4294966296LL;
  **(_BYTE **)(a1 + 56) = 0;
  v1 = _mm_loadl_epi64((const __m128i *)(a1 + 56));
  *(_BYTE *)(a1 + 250) = 0;
  *(_BYTE *)(a1 + 188) = 0;
  *(__m128i *)(a1 + 64) = _mm_unpacklo_epi64(v1, v1);
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 124) = 0;
  *(_OWORD *)(a1 + 140) = 0;
  *(_OWORD *)(a1 + 156) = 0;
  *(_OWORD *)(a1 + 172) = 0;
  *(_WORD *)(a1 + 248) = 256;
  *(_DWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  return 256;
}

