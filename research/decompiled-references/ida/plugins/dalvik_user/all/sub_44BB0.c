unsigned __int64 __fastcall sub_44BB0(__int64 *a1, __int64 a2)
{
  void *v2; // r14
  size_t v3; // r12
  __int64 v5; // rax
  void *v6; // r13
  void *v7; // r15
  __int32 v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __m128i v11; // xmm2
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v17; // rax
  size_t v18; // r15
  size_t n; // [rsp+8h] [rbp-E0h] BYREF
  __m128i v20; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v21[2]; // [rsp+20h] [rbp-C8h] BYREF
  int v22; // [rsp+88h] [rbp-60h]
  __m128i v23; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+A8h] [rbp-40h]

  v2 = nullptr;
  v3 = *(_QWORD *)(a2 + 24);
  v24 = __readfsqword(0x28u);
  v20 = _mm_loadu_si128((const __m128i *)a2);
  v21[1] = v20;
  if ( v3 )
  {
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *(const void **)(a2 + 16), v3);
  }
  v5 = *(_QWORD *)(a2 + 48);
  v6 = nullptr;
  v21[0].m128i_i64[0] = v5;
  if ( v5 )
  {
    v18 = v5;
    v6 = (void *)qalloc_or_throw();
    memcpy(v6, *(const void **)(a2 + 40), v18);
  }
  v7 = nullptr;
  n = *(_QWORD *)(a2 + 72);
  if ( n )
  {
    v7 = (void *)qalloc_or_throw();
    memcpy(v7, *(const void **)(a2 + 64), n);
  }
  v8 = *(_DWORD *)(a2 + 88);
  v9 = a1[1];
  v10 = *a1;
  v22 = *(_DWORD *)(a2 + 88);
  v23 = _mm_loadu_si128((const __m128i *)(a2 + 96));
  if ( a1[2] < (unsigned __int64)(v9 + 1) )
  {
    v21[0].m128i_i32[3] = v8;
    v17 = qvector_reserve();
    v9 = a1[1];
    v8 = v21[0].m128i_i32[3];
    *a1 = v17;
    v10 = v17;
  }
  v11 = _mm_load_si128(&v20);
  v12 = v10 + 112 * v9;
  *(__m128i *)(v12 + 24) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v13 = _mm_loadl_epi64(v21);
  *(_QWORD *)(v12 + 16) = v2;
  *(_QWORD *)(v12 + 40) = v6;
  *(__m128i *)(v12 + 48) = _mm_unpacklo_epi64(v13, v13);
  v14 = _mm_loadl_epi64((const __m128i *)&n);
  *(_QWORD *)(v12 + 64) = v7;
  *(_DWORD *)(v12 + 88) = v8;
  *(__m128i *)(v12 + 72) = _mm_unpacklo_epi64(v14, v14);
  v15 = _mm_load_si128(&v23);
  *(__m128i *)v12 = v11;
  *(__m128i *)(v12 + 96) = v15;
  ++a1[1];
  return v24 - __readfsqword(0x28u);
}

