__int64 __fastcall sub_11BF0(__int64 a1, const __m128i *a2)
{
  __m128i *v2; // rax

  v2 = *(__m128i **)(a1 + 8);
  *v2 = _mm_loadu_si128(a2);
  v2[1].m128i_i64[0] = a2[1].m128i_i64[0];
  return 1;
}

