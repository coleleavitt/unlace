__int64 __fastcall sub_3AFCA0(__m128i *a1, __m128i *a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  __int64 result; // rax

  v2 = _mm_loadu_si128(a1);
  v3 = _mm_loadu_si128(a1 + 1);
  result = a1[2].m128i_u8[0];
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2].m128i_i8[0] = a2[2].m128i_i8[0];
  a2[2].m128i_i8[0] = result;
  *a2 = v2;
  a2[1] = v3;
  return result;
}

