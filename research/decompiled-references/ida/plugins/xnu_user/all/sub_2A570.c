__int64 __fastcall sub_2A570(__int64 a1, const __m128i *a2)
{
  __int64 result; // rax

  result = 0;
  if ( a2->m128i_i32[0] == 38 )
  {
    *(__m128i *)*(_QWORD *)(a1 + 8) = _mm_loadu_si128(a2);
    return 1;
  }
  return result;
}

