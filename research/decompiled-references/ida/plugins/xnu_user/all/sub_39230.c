unsigned __int64 __fastcall sub_39230(__int64 *a1, __int64 a2)
{
  void *v2; // r13
  __int64 v4; // rax
  __int64 v6; // r15
  int v7; // r14d
  void *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __m128i v12; // xmm0
  void *v13; // rdi
  void *v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  size_t v22; // r15
  __int64 v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  void *v26; // rax
  const void *v27; // rsi
  void *v28; // rax
  const void *v29; // rsi
  __m128i v30; // [rsp+0h] [rbp-108h] BYREF
  __m128i v31; // [rsp+10h] [rbp-F8h] BYREF
  void *v32; // [rsp+20h] [rbp-E8h]
  void *v33; // [rsp+28h] [rbp-E0h]
  __m128i v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h]
  int v36; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+C8h] [rbp-40h]

  v2 = nullptr;
  v4 = *(_QWORD *)(a2 + 8);
  v37 = __readfsqword(0x28u);
  v34.m128i_i64[0] = v4;
  if ( v4 )
  {
    v22 = v4;
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *(const void **)a2, v22);
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a2 + 32);
  v8 = nullptr;
  v9 = *(_QWORD *)(a2 + 48);
  v35 = v6;
  v36 = v7;
  v30.m128i_i64[0] = v9;
  if ( v9 )
  {
    v8 = (void *)qalloc_or_throw();
    memcpy(v8, *(const void **)(a2 + 40), v30.m128i_u64[0]);
  }
  v32 = nullptr;
  v30.m128i_i64[1] = *(_QWORD *)(a2 + 72);
  if ( v30.m128i_i64[1] )
  {
    v28 = (void *)qalloc_or_throw();
    v29 = *(const void **)(a2 + 64);
    v32 = v28;
    memcpy(v28, v29, v30.m128i_u64[1]);
  }
  v33 = nullptr;
  v31.m128i_i64[0] = *(_QWORD *)(a2 + 96);
  if ( v31.m128i_i64[0] )
  {
    v26 = (void *)qalloc_or_throw();
    v27 = *(const void **)(a2 + 88);
    v33 = v26;
    memcpy(v26, v27, v31.m128i_u64[0]);
  }
  v34.m128i_i64[1] = 0;
  v31.m128i_i64[1] = *(_QWORD *)(a2 + 120);
  if ( v31.m128i_i64[1] )
  {
    v24 = (void *)qalloc_or_throw();
    v25 = *(const void **)(a2 + 112);
    v34.m128i_i64[1] = (__int64)v24;
    memcpy(v24, v25, v31.m128i_u64[1]);
  }
  v10 = a1[1];
  v11 = *a1;
  if ( a1[2] < (unsigned __int64)(v10 + 1) )
  {
    v23 = qvector_reserve();
    *a1 = v23;
    v10 = a1[1];
    v11 = v23;
  }
  v12 = _mm_loadl_epi64(&v34);
  v13 = v33;
  v14 = v32;
  v15 = v11 + 136 * v10;
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v12, v12);
  v16 = _mm_loadl_epi64(&v30);
  *(_QWORD *)(v15 + 64) = v14;
  v17 = v34.m128i_i64[1];
  *(_QWORD *)v15 = v2;
  *(__m128i *)(v15 + 48) = _mm_unpacklo_epi64(v16, v16);
  v18 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
  *(_QWORD *)(v15 + 24) = v6;
  *(_DWORD *)(v15 + 32) = v7;
  *(__m128i *)(v15 + 72) = _mm_unpacklo_epi64(v18, v18);
  v19 = _mm_loadl_epi64(&v31);
  *(_QWORD *)(v15 + 40) = v8;
  *(_QWORD *)(v15 + 88) = v13;
  *(__m128i *)(v15 + 96) = _mm_unpacklo_epi64(v19, v19);
  v20 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
  *(_QWORD *)(v15 + 112) = v17;
  *(__m128i *)(v15 + 120) = _mm_unpacklo_epi64(v20, v20);
  ++a1[1];
  return v37 - __readfsqword(0x28u);
}

