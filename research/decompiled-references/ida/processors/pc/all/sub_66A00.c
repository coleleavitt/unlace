unsigned __int64 __fastcall sub_66A00(__m128i *a1, __m128i *a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  __int64 v4; // rax
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = _mm_loadu_si128(a1);
  v6 = __readfsqword(0x28u);
  v3 = _mm_loadu_si128(a1 + 1);
  v4 = a1[2].m128i_i64[0];
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2].m128i_i64[0] = a2[2].m128i_i64[0];
  a2[2].m128i_i64[0] = v4;
  *a2 = v2;
  a2[1] = v3;
  return v6 - __readfsqword(0x28u);
}
