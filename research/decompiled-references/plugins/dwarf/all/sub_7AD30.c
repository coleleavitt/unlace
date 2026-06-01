__m128i *__fastcall sub_7AD30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i *a5,
        unsigned __int8 (__fastcall *a6)(__int64, __int64))
{
  __int64 i; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // r13
  __m128i *v22; // r15
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdi
  unsigned __int64 v29; // r15
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r13
  __m128i *v33; // rbx
  __int64 v34; // r14
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __int64 v37; // r14
  __m128i v38; // xmm0
  __int64 v39; // rdi
  __int64 v40; // r15
  __m128i v42; // [rsp+0h] [rbp-68h] BYREF
  __m128i v43; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]

  for ( i = a1; i != a2; a5[-1] = v15 )
  {
    if ( a3 == a4 )
      break;
    if ( a6(a3, i) )
    {
      *a5 = _mm_loadu_si128((const __m128i *)a3);
      a5[1] = _mm_loadu_si128((const __m128i *)(a3 + 16));
      v11 = *(_QWORD *)(a3 + 32);
      v12 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      *(_QWORD *)(a3 + 32) = 0;
      *(_OWORD *)(a3 + 40) = 0;
      v13 = a5[2].m128i_i64[0];
      if ( v13 )
      {
        a5[2].m128i_i64[1] = 0;
        v42.m128i_i64[0] = v11;
        v43 = v12;
        qfree(v13);
        v12 = _mm_load_si128(&v43);
        v11 = v42.m128i_i64[0];
      }
      a5[2].m128i_i64[0] = v11;
      *(__m128i *)((char *)a5 + 40) = v12;
      v14 = *(_QWORD *)(a3 + 56);
      v15 = _mm_loadu_si128((const __m128i *)(a3 + 64));
      *(_QWORD *)(a3 + 56) = 0;
      *(_OWORD *)(a3 + 64) = 0;
      v16 = a5[3].m128i_i64[1];
      if ( v16 )
      {
        a5[4].m128i_i64[0] = 0;
        v42.m128i_i64[0] = v14;
        v43 = v15;
        qfree(v16);
        v15 = _mm_load_si128(&v43);
        v14 = v42.m128i_i64[0];
      }
      a3 += 80;
    }
    else
    {
      *a5 = _mm_loadu_si128((const __m128i *)i);
      a5[1] = _mm_loadu_si128((const __m128i *)(i + 16));
      v17 = *(_QWORD *)(i + 32);
      v18 = _mm_loadu_si128((const __m128i *)(i + 40));
      *(_QWORD *)(i + 32) = 0;
      *(_OWORD *)(i + 40) = 0;
      v19 = a5[2].m128i_i64[0];
      if ( v19 )
      {
        a5[2].m128i_i64[1] = 0;
        v42.m128i_i64[0] = v17;
        v43 = v18;
        qfree(v19);
        v18 = _mm_load_si128(&v43);
        v17 = v42.m128i_i64[0];
      }
      a5[2].m128i_i64[0] = v17;
      *(__m128i *)((char *)a5 + 40) = v18;
      v14 = *(_QWORD *)(i + 56);
      v15 = _mm_loadu_si128((const __m128i *)(i + 64));
      *(_QWORD *)(i + 56) = 0;
      *(_OWORD *)(i + 64) = 0;
      v20 = a5[3].m128i_i64[1];
      if ( v20 )
      {
        a5[4].m128i_i64[0] = 0;
        v42.m128i_i64[0] = v14;
        v43 = v15;
        qfree(v20);
        v15 = _mm_load_si128(&v43);
        v14 = v42.m128i_i64[0];
      }
      i += 80;
    }
    a5[3].m128i_i64[1] = v14;
    a5 += 5;
  }
  v44 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - i) >> 4);
  if ( a2 - i > 0 )
  {
    v21 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - i) >> 4);
    v22 = a5;
    do
    {
      *v22 = _mm_loadu_si128((const __m128i *)i);
      v22[1] = _mm_loadu_si128((const __m128i *)(i + 16));
      v23 = *(_QWORD *)(i + 32);
      v24 = _mm_loadu_si128((const __m128i *)(i + 40));
      *(_QWORD *)(i + 32) = 0;
      *(_OWORD *)(i + 40) = 0;
      v25 = v22[2].m128i_i64[0];
      if ( v25 )
      {
        v22[2].m128i_i64[1] = 0;
        v42.m128i_i64[0] = v23;
        v43 = v24;
        qfree(v25);
        v24 = _mm_load_si128(&v43);
        v23 = v42.m128i_i64[0];
      }
      v22[2].m128i_i64[0] = v23;
      *(__m128i *)((char *)v22 + 40) = v24;
      v26 = *(_QWORD *)(i + 56);
      v27 = _mm_loadu_si128((const __m128i *)(i + 64));
      *(_QWORD *)(i + 56) = 0;
      *(_OWORD *)(i + 64) = 0;
      v28 = v22[3].m128i_i64[1];
      if ( v28 )
      {
        v22[4].m128i_i64[0] = 0;
        v42.m128i_i64[0] = v26;
        v43 = v27;
        qfree(v28);
        v27 = _mm_load_si128(&v43);
        v26 = v42.m128i_i64[0];
      }
      v22[3].m128i_i64[1] = v26;
      i += 80;
      v22 += 5;
      v22[-1] = v27;
      --v21;
    }
    while ( v21 );
    v29 = v44 - 1;
    if ( (__int64)(v44 - 1) < 0 )
      v29 = 0;
    a5 += 5 * v29 + 5;
  }
  v30 = a4 - a3;
  v31 = 0xCCCCCCCCCCCCCCCDLL * (v30 >> 4);
  if ( v30 > 0 )
  {
    v32 = 0xCCCCCCCCCCCCCCCDLL * (v30 >> 4);
    v33 = a5;
    do
    {
      *v33 = _mm_loadu_si128((const __m128i *)a3);
      v33[1] = _mm_loadu_si128((const __m128i *)(a3 + 16));
      v34 = *(_QWORD *)(a3 + 32);
      v35 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      *(_QWORD *)(a3 + 32) = 0;
      *(_OWORD *)(a3 + 40) = 0;
      v36 = v33[2].m128i_i64[0];
      if ( v36 )
      {
        v33[2].m128i_i64[1] = 0;
        v42 = v35;
        qfree(v36);
        v35 = _mm_load_si128(&v42);
      }
      v33[2].m128i_i64[0] = v34;
      *(__m128i *)((char *)v33 + 40) = v35;
      v37 = *(_QWORD *)(a3 + 56);
      v38 = _mm_loadu_si128((const __m128i *)(a3 + 64));
      *(_QWORD *)(a3 + 56) = 0;
      *(_OWORD *)(a3 + 64) = 0;
      v39 = v33[3].m128i_i64[1];
      if ( v39 )
      {
        v33[4].m128i_i64[0] = 0;
        v42 = v38;
        qfree(v39);
        v38 = _mm_load_si128(&v42);
      }
      v33[3].m128i_i64[1] = v37;
      a3 += 80;
      v33 += 5;
      v33[-1] = v38;
      --v32;
    }
    while ( v32 );
    v40 = v31 - 1;
    if ( v40 < 0 )
      v40 = 0;
    a5 += 5 * v40 + 5;
  }
  return a5;
}
