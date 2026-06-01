void __fastcall sub_11FB0(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v3; // r13
  unsigned __int64 v5; // rdx
  __m128i si128; // xmm0
  size_t v7; // r12
  __m128i v8[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = nullptr;
  v5 = *(_QWORD *)(a3 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v7 = 8 * v5;
    v8[0] = si128;
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)a3, v7);
    si128 = _mm_load_si128(v8);
  }
  if ( *a2 )
  {
    a2[1] = 0;
    v8[0] = si128;
    qfree();
    si128 = _mm_load_si128(v8);
  }
  *a2 = v3;
  *(__m128i *)(a2 + 1) = si128;
}

