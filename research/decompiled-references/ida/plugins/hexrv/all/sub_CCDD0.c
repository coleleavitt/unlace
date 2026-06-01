_QWORD *__fastcall sub_CCDD0(__int64 a1, __int64 a2, int a3)
{
  void *v3; // r13
  unsigned __int64 v4; // rdx
  __m128i si128; // xmm0
  size_t v7; // r12
  __m128i v8[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned int)(a3 - 208) > 0x2F )
  {
    if ( !under_debugger )
      sub_37DDE0(52528);
    BUG();
  }
  v3 = nullptr;
  sub_CCA90(a1, 1, a3);
  *(_DWORD *)a1 = 1;
  v4 = *(_QWORD *)(a2 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v7 = 4 * v4;
    v8[0] = si128;
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)a2, v7);
    si128 = _mm_load_si128(v8);
  }
  if ( *(_QWORD *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 96) = 0;
    v8[0] = si128;
    qfree();
    si128 = _mm_load_si128(v8);
  }
  *(_QWORD *)(a1 + 88) = v3;
  *(__m128i *)(a1 + 96) = si128;
  return sub_CC9B0(a1, (__int64 *)(a1 + 8), (_QWORD *)(a1 + 88));
}

