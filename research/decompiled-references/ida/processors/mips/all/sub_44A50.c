unsigned __int64 __fastcall sub_44A50(const __m128i *a1, __int64 (__fastcall *a2)(__m128i *, const __m128i *))
{
  const __m128i *v2; // rbx
  __m128i v3; // xmm0
  char i; // al
  __m128i v5; // xmm0
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  __m128i v8; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v2 = a1 - 2;
  v3 = _mm_loadu_si128(a1);
  v9 = __readfsqword(0x28u);
  v7 = v3;
  v8 = _mm_loadu_si128(a1 + 1);
  for ( i = a2(&v7, a1 - 2); i; i = a2(&v7, v2) )
  {
    v5 = _mm_loadu_si128(v2);
    v2 -= 2;
    v2[4] = v5;
    v2[5] = _mm_loadu_si128(v2 + 3);
  }
  v2[2] = _mm_load_si128(&v7);
  v2[3] = _mm_load_si128(&v8);
  return v9 - __readfsqword(0x28u);
}

