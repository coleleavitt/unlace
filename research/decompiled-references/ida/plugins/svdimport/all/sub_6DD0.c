unsigned __int64 __fastcall sub_6DD0(__int64 *a1, __int64 a2)
{
  void *v2; // r14
  size_t v3; // r12
  __int64 v5; // rax
  void *v6; // r13
  void *v7; // r15
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v15; // rax
  size_t v16; // r15
  __m128i n; // [rsp+8h] [rbp-B0h] BYREF
  int v18; // [rsp+1Ch] [rbp-9Ch]
  int v19; // [rsp+68h] [rbp-50h]
  unsigned __int64 v20; // [rsp+78h] [rbp-40h]

  v2 = nullptr;
  v3 = *(_QWORD *)(a2 + 8);
  v20 = __readfsqword(0x28u);
  if ( v3 )
  {
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *(const void **)a2, v3);
  }
  v5 = *(_QWORD *)(a2 + 32);
  v6 = nullptr;
  n.m128i_i64[1] = v5;
  if ( v5 )
  {
    v16 = v5;
    v6 = (void *)qalloc_or_throw();
    memcpy(v6, *(const void **)(a2 + 24), v16);
  }
  v7 = nullptr;
  n.m128i_i64[0] = *(_QWORD *)(a2 + 56);
  if ( n.m128i_i64[0] )
  {
    v7 = (void *)qalloc_or_throw();
    memcpy(v7, *(const void **)(a2 + 48), n.m128i_u64[0]);
  }
  v8 = *(_DWORD *)(a2 + 72);
  v9 = a1[1];
  v10 = *a1;
  v19 = *(_DWORD *)(a2 + 72);
  if ( a1[2] < (unsigned __int64)(v9 + 1) )
  {
    v18 = v8;
    v15 = qvector_reserve();
    *a1 = v15;
    v10 = v15;
    v8 = v18;
    v9 = a1[1];
  }
  v11 = 80 * v9 + v10;
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v12 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
  *(_QWORD *)v11 = v2;
  *(_QWORD *)(v11 + 24) = v6;
  *(__m128i *)(v11 + 32) = _mm_unpacklo_epi64(v12, v12);
  v13 = _mm_loadl_epi64(&n);
  *(_QWORD *)(v11 + 48) = v7;
  *(_DWORD *)(v11 + 72) = v8;
  *(__m128i *)(v11 + 56) = _mm_unpacklo_epi64(v13, v13);
  ++a1[1];
  return v20 - __readfsqword(0x28u);
}

