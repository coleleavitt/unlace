__int64 __fastcall sub_7210(__int64 a1)
{
  __m128i v1; // xmm1
  __int64 result; // rax
  int v3; // edx
  __m128i v4; // xmm0
  __m128i v5; // xmm2

  if ( (*(_BYTE *)(a1 + 29) & 8) == 0 )
  {
    v1 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    result = *(unsigned int *)(a1 + 72);
    v3 = *(_DWORD *)(a1 + 112);
    v4 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)(a1 + 80));
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 96));
    *(__m128i *)(a1 + 80) = v1;
    *(_DWORD *)(a1 + 72) = v3;
    *(_DWORD *)(a1 + 112) = result;
    *(_BYTE *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 80) = 1;
    *(__m128i *)(a1 + 56) = v5;
    *(__m128i *)(a1 + 96) = v4;
  }
  return result;
}

