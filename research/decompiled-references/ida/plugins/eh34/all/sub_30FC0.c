unsigned __int64 __fastcall sub_30FC0(__int64 a1, __int64 *a2)
{
  char *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // rax
  char *v18; // rbp
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // rax
  char *v22; // rdi
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rax
  char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-48h] BYREF
  char *v32; // [rsp+10h] [rbp-38h] BYREF
  __m128i v33; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-20h]

  v34 = __readfsqword(0x28u);
  v33 = 0;
  v32 = nullptr;
  v32 = (char *)qvector_reserve(&v32, 0, 9, 1);
  v33.m128i_i64[0] = 9;
  strcpy(v32, "Function");
  v3 = v32;
  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = v4 + 1;
  if ( (unsigned __int64)&v32 >= *a2 && (unsigned __int64)&v32 < v5 + 24 * v6 )
  {
    v23 = _mm_loadl_epi64(&v33);
    v24 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
    v32 = nullptr;
    v33 = 0;
    if ( v6 < v7 )
    {
      v31.m128i_i64[1] = v24.m128i_i64[0];
      v31.m128i_i64[0] = v23.m128i_i64[0];
      v29 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v29;
      v5 = v29;
      v4 = a2[1];
      v24 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v23 = _mm_loadl_epi64(&v31);
    }
    v25 = v5 + 24 * v4;
    *(_QWORD *)v25 = v3;
    *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64(v23, v24);
    v26 = v32;
    ++a2[1];
    if ( v26 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v26);
    }
  }
  else
  {
    if ( v6 < v7 )
    {
      v27 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v27;
      v5 = v27;
      v3 = v32;
      v4 = a2[1];
    }
    v8 = _mm_loadu_si128(&v33);
    v9 = v5 + 24 * v4;
    *(_QWORD *)v9 = v3;
    *(__m128i *)(v9 + 8) = v8;
    ++a2[1];
  }
  v33 = 0;
  v32 = nullptr;
  v10 = qvector_reserve(&v32, 0, 8, 1);
  v32 = (char *)v10;
  v33.m128i_i64[0] = 8;
  *(_DWORD *)v10 = 1769238607;
  *(_DWORD *)(v10 + 3) = 1936617321;
  v32[7] = 0;
  v11 = a2[1];
  v12 = *a2;
  v13 = a2[2];
  v14 = v11 + 1;
  if ( (unsigned __int64)&v32 >= *a2 && (unsigned __int64)&v32 < v12 + 24 * v13 )
  {
    v18 = v32;
    v19 = _mm_loadl_epi64(&v33);
    v32 = nullptr;
    v20 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
    v33 = 0;
    if ( v13 < v14 )
    {
      v31.m128i_i64[1] = v20.m128i_i64[0];
      v31.m128i_i64[0] = v19.m128i_i64[0];
      v30 = qvector_reserve(a2, v12, v11 + 1, 24);
      *a2 = v30;
      v12 = v30;
      v11 = a2[1];
      v20 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v19 = _mm_loadl_epi64(&v31);
    }
    v21 = v12 + 24 * v11;
    *(_QWORD *)v21 = v18;
    *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v19, v20);
    v22 = v32;
    ++a2[1];
    if ( v22 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v22);
    }
  }
  else
  {
    if ( v13 < v14 )
    {
      v28 = qvector_reserve(a2, v12, v11 + 1, 24);
      *a2 = v28;
      v12 = v28;
      v11 = a2[1];
    }
    v15 = _mm_loadu_si128(&v33);
    v16 = v12 + 24 * v11;
    *(_QWORD *)v16 = v32;
    *(__m128i *)(v16 + 8) = v15;
    ++a2[1];
  }
  return v34 - __readfsqword(0x28u);
}

