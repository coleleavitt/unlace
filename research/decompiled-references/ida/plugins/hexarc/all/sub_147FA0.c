void __fastcall sub_147FA0(_QWORD *a1, __int64 a2)
{
  void *v2; // r13
  unsigned __int64 v3; // rdx
  __m128i si128; // xmm0
  size_t v5; // r12
  __m128i v6[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = nullptr;
  v3 = *(_QWORD *)(a2 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v3 )
  {
    v6[0] = si128;
    v5 = 16 * v3;
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *(const void **)a2, v5);
    si128 = _mm_load_si128(v6);
  }
  if ( *a1 )
  {
    a1[1] = 0;
    v6[0] = si128;
    qfree();
    si128 = _mm_load_si128(v6);
  }
  *a1 = v2;
  *(__m128i *)(a1 + 1) = si128;
}

