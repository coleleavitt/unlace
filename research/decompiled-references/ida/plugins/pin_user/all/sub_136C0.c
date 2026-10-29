unsigned __int64 __fastcall sub_136C0(__int64 a1, __int64 a2)
{
  __int32 v3; // r15d
  __int64 v4; // rax
  __int32 v5; // r14d
  size_t v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __m128i v9; // xmm0
  __m128i *v10; // rcx
  __m128i v11; // xmm0
  __m128i *v12; // rax
  __int64 v13; // rcx
  size_t v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  const __m128i *v19; // rbp
  __int64 v20; // r12
  __m128i *v21; // r13
  __m128i v22; // xmm1
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rdi
  size_t v29; // r12
  void *v30; // rax
  const void *v31; // rsi
  void *v32; // [rsp+0h] [rbp-B8h]
  __m128i v33; // [rsp+8h] [rbp-B0h] BYREF
  __m128i v34; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+28h] [rbp-90h]
  __int32 v36; // [rsp+30h] [rbp-88h]
  __int32 v37; // [rsp+50h] [rbp-68h]
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v3 = *(_DWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  v38 = __readfsqword(0x28u);
  v32 = nullptr;
  v36 = v3;
  v34.m128i_i64[0] = v4;
  if ( v4 )
  {
    v15 = v4;
    v32 = (void *)qalloc_or_throw();
    memcpy(v32, *(const void **)(a2 + 8), v15);
  }
  v5 = *(_DWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 48);
  v37 = v5;
  v33 = (__m128i)v6;
  if ( v6 )
  {
    v29 = v6;
    v30 = (void *)qalloc_or_throw();
    v31 = *(const void **)(a2 + 40);
    v33.m128i_i64[1] = (__int64)v30;
    memcpy(v30, v31, v29);
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 < v7 + 1 )
  {
    v16 = qvector_reserve();
    v17 = *(_QWORD *)(a1 + 16);
    v18 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v8;
    v34.m128i_i64[1] = v16;
    v19 = *(const __m128i **)a1;
    v35 = v17;
    v20 = v18 - 1;
    if ( v20 >= 0 )
    {
      v21 = (__m128i *)v16;
      v22 = 0;
      do
      {
        v21->m128i_i32[0] = v19->m128i_i32[0];
        v23 = v19->m128i_i64[1];
        v24 = _mm_loadu_si128(v19 + 1);
        v19->m128i_i64[1] = 0;
        v21->m128i_i64[1] = v23;
        v21[1] = v24;
        LODWORD(v23) = v19[2].m128i_i32[0];
        v19[1] = v22;
        v21[2].m128i_i32[0] = v23;
        v25 = v19[2].m128i_i64[1];
        v26 = _mm_loadu_si128(v19 + 3);
        v19[2].m128i_i64[1] = 0;
        v21[2].m128i_i64[1] = v25;
        v21[3] = v26;
        v27 = v19->m128i_i64[1];
        v19[3].m128i_i64[1] = 0;
        if ( v27 )
        {
          v19[1].m128i_i64[0] = 0;
          qfree();
          v22 = 0;
        }
        v19 += 4;
        v21 += 4;
      }
      while ( v20-- != 0 );
    }
    qfree();
    *(_QWORD *)a1 = v34.m128i_i64[1];
    *(_QWORD *)(a1 + 16) = v35;
    v7 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v34.m128i_i64[1] = *(_QWORD *)a1;
  }
  v9 = _mm_loadl_epi64(&v34);
  v10 = (__m128i *)((v7 << 6) + v34.m128i_i64[1]);
  v10[1] = _mm_unpacklo_epi64(v9, v9);
  v11 = _mm_loadl_epi64(&v33);
  v12 = v10;
  v10->m128i_i32[0] = v3;
  v10->m128i_i64[1] = (__int64)v32;
  v10[2].m128i_i32[0] = v5;
  v13 = v33.m128i_i64[1];
  v12[3] = _mm_unpacklo_epi64(v11, v11);
  v12[2].m128i_i64[1] = v13;
  ++*(_QWORD *)(a1 + 8);
  return v38 - __readfsqword(0x28u);
}

