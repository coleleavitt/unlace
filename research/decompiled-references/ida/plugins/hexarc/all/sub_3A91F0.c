__int64 __fastcall sub_3A91F0(unsigned __int64 *a1)
{
  __int64 result; // rax

  *(_QWORD *)*a1 = *a1 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*a1 & 3LL;
  *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)*a1, (__m128i)*a1);
  *(_QWORD *)*a1 &= ~1uLL;
  result = *a1;
  *(_QWORD *)*a1 |= 2uLL;
  return result;
}

