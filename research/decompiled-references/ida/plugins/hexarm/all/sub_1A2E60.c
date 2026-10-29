__int64 __fastcall sub_1A2E60(__int64 a1)
{
  void *v1; // r12
  unsigned __int64 v2; // rdx
  __m128i si128; // xmm0
  void *v4; // r12
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0
  size_t v8; // rbp
  size_t v9; // rbp
  __m128i v10[3]; // [rsp+0h] [rbp-38h] BYREF

  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 88) = 0;
    qfree();
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 96) = 0;
  }
  *(_QWORD *)(a1 + 72) = 0;
  v1 = nullptr;
  *(_OWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  sub_642D0((__int64 *)(a1 + 160), (__int64 *)(a1 + 120));
  v2 = *(_QWORD *)(a1 + 144);
  si128 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
  if ( v2 )
  {
    v10[0] = si128;
    v8 = 16 * v2;
    v1 = (void *)qalloc_or_throw();
    memcpy(v1, *(const void **)(a1 + 136), v8);
    si128 = _mm_load_si128(v10);
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    *(_QWORD *)(a1 + 184) = 0;
    v10[0] = si128;
    qfree();
    si128 = _mm_load_si128(v10);
  }
  *(_QWORD *)(a1 + 176) = v1;
  v4 = nullptr;
  *(__m128i *)(a1 + 184) = si128;
  result = (__int64)sub_642D0((__int64 *)(a1 + 200), (__int64 *)(a1 + 160));
  v6 = *(_QWORD *)(a1 + 184);
  v7 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v10[0] = v7;
    v9 = 16 * v6;
    v4 = (void *)qalloc_or_throw();
    result = (__int64)memcpy(v4, *(const void **)(a1 + 176), v9);
    v7 = _mm_load_si128(v10);
  }
  if ( *(_QWORD *)(a1 + 216) )
  {
    *(_QWORD *)(a1 + 224) = 0;
    v10[0] = v7;
    result = qfree();
    v7 = _mm_load_si128(v10);
  }
  *(_QWORD *)(a1 + 216) = v4;
  *(__m128i *)(a1 + 224) = v7;
  return result;
}

