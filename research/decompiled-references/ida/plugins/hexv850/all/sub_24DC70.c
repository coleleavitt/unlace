__int64 __fastcall sub_24DC70(__int64 a1, __int64 a2)
{
  void *v3; // r13
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rbp
  __m128i si128; // xmm0
  size_t v7; // r12
  __m128i v8[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 72) != a2 )
    return 0;
  v3 = nullptr;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD **)(a1 + 64);
  si128 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v7 = 8 * v4;
    v8[0] = si128;
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)(a1 + 16), v7);
    si128 = _mm_load_si128(v8);
  }
  if ( *v5 )
  {
    v5[1] = 0;
    v8[0] = si128;
    qfree();
    si128 = _mm_load_si128(v8);
  }
  *v5 = v3;
  *(__m128i *)(v5 + 1) = si128;
  return 1;
}

