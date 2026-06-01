_QWORD *__fastcall sub_D1290(__int64 a1, __int64 a2, int a3, double a4)
{
  void *v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdx
  __m128i si128; // xmm0
  __int64 v9; // rdi
  size_t v11; // r12
  __m128i v12[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned int)(a3 - 208) > 0x2F )
  {
    if ( !under_debugger )
      sub_383060(0xCD30u, a4);
    BUG();
  }
  v5 = nullptr;
  sub_D0F50(a1, 1, a3);
  *(_DWORD *)a1 = 1;
  v7 = *(_QWORD *)(a2 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
  if ( v7 )
  {
    v11 = 4 * v7;
    v12[0] = si128;
    v5 = (void *)qalloc_or_throw(4 * v7, 1, v7, v6);
    memcpy(v5, *(const void **)a2, v11);
    si128 = _mm_load_si128(v12);
  }
  v9 = *(_QWORD *)(a1 + 88);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    v12[0] = si128;
    qfree(v9);
    si128 = _mm_load_si128(v12);
  }
  *(_QWORD *)(a1 + 88) = v5;
  *(__m128i *)(a1 + 96) = si128;
  return sub_D0E70(a1, (__int64 *)(a1 + 8), (_QWORD *)(a1 + 88));
}

