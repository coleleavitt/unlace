unsigned __int64 __fastcall sub_9280(const __m128i *a1, __int64 (__fastcall *a2)(__m128i *, const __m128i *))
{
  const __m128i *v2; // rbx
  __m128i v3; // xmm0
  char i; // al
  __m128i v5; // xmm0
  __m128i v7[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = a1 - 2;
  v3 = _mm_loadu_si128(a1);
  v8 = __readfsqword(0x28u);
  v7[0] = v3;
  v7[1] = _mm_loadu_si128(a1 + 1);
  for ( i = a2(v7, a1 - 2); i; i = a2(v7, v2) )
  {
    v5 = _mm_loadu_si128(v2);
    v2 -= 2;
    v2[4] = v5;
    *(const __m128i *)((char *)&v2[4] + 12) = _mm_loadu_si128((const __m128i *)((char *)v2 + 44));
  }
  v2[2] = _mm_load_si128(v7);
  *(const __m128i *)((char *)&v2[2] + 12) = _mm_loadu_si128((const __m128i *)((char *)&v7[0].m128i_u64[1] + 4));
  return v8 - __readfsqword(0x28u);
}

