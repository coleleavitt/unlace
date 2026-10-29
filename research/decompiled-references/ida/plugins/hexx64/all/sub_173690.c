__int64 __fastcall sub_173690(__int64 *a1, __int64 a2, double a3)
{
  void *v3; // r13
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __m128i si128; // xmm0
  __int64 v9; // rdi
  __int64 v10; // r12
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = nullptr;
  result = (__int64)sub_648D0(a1, (const void **)a2, a3);
  v7 = *(_QWORD *)(a2 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v7 )
  {
    v11[0] = si128;
    v10 = 16 * v7;
    v3 = (void *)qalloc_or_throw(v10, a2, v10, v6);
    result = (__int64)memcpy(v3, *(const void **)(a2 + 16), v10);
    si128 = _mm_load_si128(v11);
  }
  v9 = a1[2];
  if ( v9 )
  {
    a1[3] = 0;
    v11[0] = si128;
    result = qfree(v9);
    si128 = _mm_load_si128(v11);
  }
  a1[2] = (__int64)v3;
  *(__m128i *)(a1 + 3) = si128;
  return result;
}

