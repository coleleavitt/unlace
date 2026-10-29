__int64 __fastcall sub_11710(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0

  v2 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_BYTE *)(a1 + 8) = 1;
  *(__m128i *)(a1 + 11) = v2;
  return 0;
}

