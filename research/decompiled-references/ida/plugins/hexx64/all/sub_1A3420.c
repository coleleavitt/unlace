__int64 __fastcall sub_1A3420(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // r12
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __m128i si128; // xmm0
  __int64 v7; // rdi
  void *v8; // r12
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rbp
  __m128i v16[3]; // [rsp+0h] [rbp-38h] BYREF

  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 88) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 96) = 0;
  }
  *(_QWORD *)(a1 + 72) = 0;
  v3 = nullptr;
  *(_OWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  sub_648D0((__int64 *)(a1 + 160), (const void **)(a1 + 120), 0.0);
  v5 = *(_QWORD *)(a1 + 144);
  si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v16[0] = si128;
    v14 = 16 * v5;
    v3 = (void *)qalloc_or_throw(v14, a1 + 120, v14, v4);
    memcpy(v3, *(const void **)(a1 + 136), v14);
    si128 = _mm_load_si128(v16);
  }
  v7 = *(_QWORD *)(a1 + 176);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    v16[0] = si128;
    qfree(v7);
    si128 = _mm_load_si128(v16);
  }
  *(_QWORD *)(a1 + 176) = v3;
  v8 = nullptr;
  *(__m128i *)(a1 + 184) = si128;
  result = (__int64)sub_648D0((__int64 *)(a1 + 200), (const void **)(a1 + 160), *(double *)si128.m128i_i64);
  v11 = *(_QWORD *)(a1 + 184);
  v12 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  if ( v11 )
  {
    v16[0] = v12;
    v15 = 16 * v11;
    v8 = (void *)qalloc_or_throw(v15, a1 + 160, v15, v10);
    result = (__int64)memcpy(v8, *(const void **)(a1 + 176), v15);
    v12 = _mm_load_si128(v16);
  }
  v13 = *(_QWORD *)(a1 + 216);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    v16[0] = v12;
    result = qfree(v13);
    v12 = _mm_load_si128(v16);
  }
  *(_QWORD *)(a1 + 216) = v8;
  *(__m128i *)(a1 + 224) = v12;
  return result;
}

