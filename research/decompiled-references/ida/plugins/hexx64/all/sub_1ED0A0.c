__int64 __fastcall sub_1ED0A0(_QWORD *a1, __int64 *a2, int a3, double a4)
{
  void *v4; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i si128; // xmm0
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v21; // r13
  __m128i v22[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = nullptr;
  v6 = 40LL * a3;
  v7 = v6 + a1[1];
  sub_648D0(a2, (const void **)v7, a4);
  v9 = *(_QWORD *)(v7 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v9 )
  {
    v22[0] = si128;
    v21 = 16 * v9;
    v4 = (void *)qalloc_or_throw(v21, v7, v21, v8);
    memcpy(v4, *(const void **)(v7 + 16), v21);
    si128 = _mm_load_si128(v22);
  }
  v11 = a2[2];
  if ( v11 )
  {
    a2[3] = 0;
    v22[0] = si128;
    qfree(v11);
    si128 = _mm_load_si128(v22);
  }
  *(__m128i *)(a2 + 3) = si128;
  a2[2] = (__int64)v4;
  v12 = v6 + a1[15];
  sub_64280(a2, (__int64 *)v12, *(double *)si128.m128i_i64);
  sub_316CB0(a2 + 2, (__int64 **)(v12 + 16), v13, v14);
  v15 = (__int64 *)(a1[18] + v6);
  sub_64640(a2, v15, v16, v17, v18, v19);
  return sub_317C60(a2 + 2, (__int64)(v15 + 2));
}

