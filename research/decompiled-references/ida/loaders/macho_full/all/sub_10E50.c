__int64 __fastcall sub_10E50(__int64 a1, const __m128i *a2)
{
  if ( a2->m128i_i32[0] == -2147483597 )
    *(__m128i *)*(_QWORD *)(a1 + 16) = _mm_loadu_si128(a2);
  return 0;
}

