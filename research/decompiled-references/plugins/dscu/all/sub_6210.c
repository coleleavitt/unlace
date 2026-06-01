void __fastcall sub_6210(__int64 a1, __int64 a2)
{
  void *v2; // r13
  unsigned __int64 v4; // rdx
  __m128i si128; // xmm0
  __int64 v6; // rdi
  size_t v7; // r12
  __m128i v8[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = nullptr;
  v4 = *(_QWORD *)(a2 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v7 = 8 * v4;
    v8[0] = si128;
    v2 = (void *)qalloc_or_throw(8 * v4);
    memcpy(v2, *(const void **)a2, v7);
    si128 = _mm_load_si128(v8);
  }
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    v8[0] = si128;
    qfree(v6);
    si128 = _mm_load_si128(v8);
  }
  *(_QWORD *)(a1 + 216) = v2;
  *(__m128i *)(a1 + 224) = si128;
}
