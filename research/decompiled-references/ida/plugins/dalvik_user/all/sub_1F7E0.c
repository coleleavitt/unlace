__int64 __fastcall sub_1F7E0(__int64 a1, __int64 a2)
{
  void *v3; // r13
  __int64 v4; // rax
  void *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __m128i v9; // xmm0
  __m128i *v10; // rbx
  __int32 v11; // eax
  __m128i v12; // xmm0
  __int64 result; // rax
  size_t v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  const __m128i *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rbx
  __m128i *v20; // r12
  __m128i v21; // xmm1
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rdi
  size_t v28; // rbp
  __m128i v29; // [rsp+8h] [rbp-60h] BYREF
  const __m128i *v30; // [rsp+18h] [rbp-50h]
  __int32 v31; // [rsp+20h] [rbp-48h]
  unsigned int v32; // [rsp+24h] [rbp-44h]
  __int64 v33; // [rsp+28h] [rbp-40h]

  v3 = nullptr;
  v31 = *(_DWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  v29.m128i_i64[1] = v4;
  if ( v4 )
  {
    v14 = v4;
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)(a2 + 8), v14);
  }
  v5 = nullptr;
  v32 = *(_DWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 48);
  v29.m128i_i64[0] = v6;
  if ( v6 )
  {
    v28 = v6;
    v5 = (void *)qalloc_or_throw();
    memcpy(v5, *(const void **)(a2 + 40), v28);
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 < v7 + 1 )
  {
    v15 = qvector_reserve();
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(const __m128i **)a1;
    *(_QWORD *)(a1 + 16) = v8;
    v18 = *(_QWORD *)(a1 + 8);
    v30 = (const __m128i *)v15;
    v33 = v16;
    v19 = v18 - 1;
    if ( v19 >= 0 )
    {
      v20 = (__m128i *)v15;
      v21 = 0;
      do
      {
        v20->m128i_i32[0] = v17->m128i_i32[0];
        v22 = v17->m128i_i64[1];
        v23 = _mm_loadu_si128(v17 + 1);
        v17->m128i_i64[1] = 0;
        v20->m128i_i64[1] = v22;
        v20[1] = v23;
        LODWORD(v22) = v17[2].m128i_i32[0];
        v17[1] = v21;
        v20[2].m128i_i32[0] = v22;
        v24 = v17[2].m128i_i64[1];
        v25 = _mm_loadu_si128(v17 + 3);
        v17[2].m128i_i64[1] = 0;
        v20[2].m128i_i64[1] = v24;
        v20[3] = v25;
        v26 = v17->m128i_i64[1];
        v17[3].m128i_i64[1] = 0;
        if ( v26 )
        {
          v17[1].m128i_i64[0] = 0;
          qfree();
          v21 = 0;
        }
        v17 += 4;
        v20 += 4;
      }
      while ( v19-- != 0 );
    }
    qfree();
    *(_QWORD *)a1 = v30;
    *(_QWORD *)(a1 + 16) = v33;
    v7 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v30 = *(const __m128i **)a1;
  }
  v9 = _mm_loadl_epi64((const __m128i *)&v29.m128i_u64[1]);
  v10 = (__m128i *)&v30[4 * v7];
  v11 = v31;
  v10[1] = _mm_unpacklo_epi64(v9, v9);
  v12 = _mm_loadl_epi64(&v29);
  v10->m128i_i32[0] = v11;
  result = v32;
  v10->m128i_i64[1] = (__int64)v3;
  v10[2].m128i_i32[0] = result;
  v10[2].m128i_i64[1] = (__int64)v5;
  v10[3] = _mm_unpacklo_epi64(v12, v12);
  ++*(_QWORD *)(a1 + 8);
  return result;
}

