__int64 __fastcall sub_1E9420(_QWORD *a1, __int64 *a2, int a3)
{
  void *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  __m128i si128; // xmm0
  __int64 *v8; // r13
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  size_t v15; // r13
  __m128i v16[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = nullptr;
  v4 = 40LL * a3;
  v5 = v4 + a1[1];
  sub_60E90(a2, (__int64 *)v5);
  v6 = *(_QWORD *)(v5 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v16[0] = si128;
    v15 = 16 * v6;
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)(v5 + 16), v15);
    si128 = _mm_load_si128(v16);
  }
  if ( a2[2] )
  {
    a2[3] = 0;
    v16[0] = si128;
    qfree();
    si128 = _mm_load_si128(v16);
  }
  *(__m128i *)(a2 + 3) = si128;
  a2[2] = (__int64)v3;
  v8 = (__int64 *)(v4 + a1[15]);
  sub_60840(a2, v8);
  sub_312B30(a2 + 2, v8 + 2);
  v9 = (__int64 *)(a1[18] + v4);
  sub_60C00(a2, v9, v10, v11, v12, v13);
  return sub_313AE0(a2 + 2, v9 + 2);
}

