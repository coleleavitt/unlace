__int64 __fastcall sub_10E30(__int64 a1, const __m128i *a2)
{
  __m128i *v2; // rax

  v2 = *(__m128i **)(a1 + 8);
  *v2 = _mm_loadu_si128(a2);
  v2[1] = _mm_loadu_si128(a2 + 1);
  v2[2] = _mm_loadu_si128(a2 + 2);
  return 0;
}

