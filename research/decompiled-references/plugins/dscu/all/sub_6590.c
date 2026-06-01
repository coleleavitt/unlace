void __fastcall sub_6590(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v3; // r13
  unsigned __int64 v5; // rdx
  __m128i si128; // xmm0
  __int64 v7; // rdi
  size_t v8; // r12
  __m128i v9[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = nullptr;
  v5 = *(_QWORD *)(a3 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v8 = 8 * v5;
    v9[0] = si128;
    v3 = (void *)qalloc_or_throw(8 * v5);
    memcpy(v3, *(const void **)a3, v8);
    si128 = _mm_load_si128(v9);
  }
  v7 = *a2;
  if ( *a2 )
  {
    a2[1] = 0;
    v9[0] = si128;
    qfree(v7);
    si128 = _mm_load_si128(v9);
  }
  *a2 = v3;
  *(__m128i *)(a2 + 1) = si128;
}
