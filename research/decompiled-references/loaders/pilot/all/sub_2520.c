void __fastcall sub_2520(__int64 a1)
{
  __m128i v1; // xmm0
  unsigned int v2; // edx
  __m128i v3; // xmm3
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  unsigned int v7; // edx

  v1 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 32));
  v2 = *(_DWORD *)(a1 + 36);
  *(_WORD *)(a1 + 76) = __ROL2__(*(_WORD *)(a1 + 76), 8);
  v3 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 40)));
  v4 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 48)));
  *(_DWORD *)(a1 + 32) = _mm_cvtsi128_si32(_mm_or_si128(_mm_slli_epi16(v1, 8u), _mm_srli_epi16(v1, 8u)));
  v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v2)), v3);
  v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 44))), v4);
  *(_DWORD *)(a1 + 52) = _byteswap_ulong(*(_DWORD *)(a1 + 52));
  v7 = *(_DWORD *)(a1 + 56);
  *(__m128i *)(a1 + 36) = _mm_unpacklo_epi64(v5, v6);
  *(_DWORD *)(a1 + 56) = _byteswap_ulong(v7);
  *(_DWORD *)(a1 + 68) = _byteswap_ulong(*(_DWORD *)(a1 + 68));
  *(_DWORD *)(a1 + 72) = _byteswap_ulong(*(_DWORD *)(a1 + 72));
}
