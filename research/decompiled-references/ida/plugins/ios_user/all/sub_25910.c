__int64 __fastcall sub_25910(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __m128i v3; // xmm0
  __int64 v5; // rax
  __int64 v6; // rsi
  __m128i *v7; // rsi
  __int64 v9; // rax

  v3 = _mm_cvtsi32_si128(a3);
  v5 = a1[1];
  v6 = *a1;
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v9 = qvector_reserve();
    v3 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v3));
    *a1 = v9;
    v6 = v9;
    v5 = a1[1];
  }
  v7 = (__m128i *)(16 * v5 + v6);
  *v7 = 0;
  ++a1[1];
  *v7 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(v3, _mm_cvtsi32_si128(HIWORD(a2))),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(BYTE1(a2)), _mm_cvtsi32_si128((unsigned __int8)a2)));
  return BYTE1(a2);
}

