__int64 __fastcall sub_1481B0(unsigned int a1, __m128i *a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_323690(a3, a1, 0);
  a2[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
  return result;
}

