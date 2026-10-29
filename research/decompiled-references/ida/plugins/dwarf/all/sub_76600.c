__m128 *__fastcall sub_76600(const __m128i **a1, const __m128i *a2)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rbx
  const __m128i *v5; // rax
  __m128 *result; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  const __m128i *v13; // rax
  __int64 v14; // rbp
  __int8 v15; // cl
  __m128 v16; // xmm0
  __int64 v17; // rax
  const __m128i *v18; // r12
  const __m128i *v19; // rax
  const __m128i *v20; // rbx
  __int64 v21; // r12
  __m128i *v22; // rbp
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rdi
  bool v26; // cf
  const __m128i *v27; // r13
  const __m128i *v28; // rax
  const __m128i *v29; // r15
  __int64 v30; // r13
  __m128i *v31; // rbx
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rdi
  const __m128i *v35; // rax
  __int64 v36; // [rsp+8h] [rbp-60h]
  const __m128i *v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+18h] [rbp-50h] BYREF
  __int8 v39; // [rsp+27h] [rbp-41h]
  const __m128i *v40; // [rsp+28h] [rbp-40h]

  v3 = (__int64)*a1;
  v4 = (unsigned __int64)a1[2];
  if ( a2 >= *a1 && (unsigned __int64)a2 < v3 + 40 * v4 )
  {
    v9 = a2->m128i_i64[0];
    v10 = a2->m128i_i64[1];
    a2->m128i_i64[1] = 0;
    v36 = v9;
    v11 = a2[1].m128i_i64[1];
    a2[1] = 0;
    v12 = (unsigned __int64)a1[2];
    *(_QWORD *)&v38 = v11;
    v39 = a2[2].m128i_i8[0];
    v13 = a1[1];
    if ( v12 < (unsigned __int64)v13->m128i_u64 + 1 )
    {
      v14 = qvector_reserve(a1, 0, &v13->m128i_i8[1], 40);
      v27 = a1[1];
      v28 = a1[2];
      a1[2] = (const __m128i *)v12;
      v29 = *a1;
      v40 = v28;
      v30 = (__int64)&v27[-1].m128i_i64[1] + 7;
      if ( v30 >= 0 )
      {
        v31 = (__m128i *)v14;
        do
        {
          v31->m128i_i64[0] = v29->m128i_i64[0];
          v32 = v29->m128i_i64[1];
          v33 = _mm_loadu_si128(v29 + 1);
          v29->m128i_i64[1] = 0;
          v31->m128i_i64[1] = v32;
          v31[1] = v33;
          LOBYTE(v32) = v29[2].m128i_i8[0];
          v29[1].m128i_i64[1] = 0;
          v31[2].m128i_i8[0] = v32;
          v34 = v29->m128i_i64[1];
          if ( v34 )
          {
            v29[1].m128i_i64[0] = 0;
            qfree(v34);
          }
          v29 = (const __m128i *)((char *)v29 + 40);
          v31 = (__m128i *)((char *)v31 + 40);
          v26 = v30-- == 0;
        }
        while ( !v26 );
        v29 = *a1;
      }
      qfree(v29);
      v35 = v40;
      *a1 = (const __m128i *)v14;
      a1[2] = v35;
      v13 = a1[1];
    }
    else
    {
      v14 = (__int64)*a1;
    }
    result = (__m128 *)(v14 + 40LL * (_QWORD)v13);
    result->m128_u64[0] = v36;
    v15 = v39;
    v16 = _mm_loadh_ps(&v38);
    result->m128_u64[1] = v10;
    result[2].m128_i8[0] = v15;
    result[1] = v16;
  }
  else
  {
    v5 = a1[1];
    if ( v4 < (unsigned __int64)v5->m128i_u64 + 1 )
    {
      v17 = qvector_reserve(a1, 0, &v5->m128i_i8[1], 40);
      v18 = a1[1];
      v3 = v17;
      v19 = a1[2];
      a1[2] = (const __m128i *)v4;
      v20 = *a1;
      v37 = v19;
      v21 = (__int64)&v18[-1].m128i_i64[1] + 7;
      if ( v21 >= 0 )
      {
        v22 = (__m128i *)v3;
        do
        {
          v22->m128i_i64[0] = v20->m128i_i64[0];
          v23 = v20->m128i_i64[1];
          v24 = _mm_loadu_si128(v20 + 1);
          v20->m128i_i64[1] = 0;
          v22->m128i_i64[1] = v23;
          v22[1] = v24;
          LOBYTE(v23) = v20[2].m128i_i8[0];
          v20[1].m128i_i64[1] = 0;
          v22[2].m128i_i8[0] = v23;
          v25 = v20->m128i_i64[1];
          if ( v25 )
          {
            v20[1].m128i_i64[0] = 0;
            qfree(v25);
          }
          v20 = (const __m128i *)((char *)v20 + 40);
          v22 = (__m128i *)((char *)v22 + 40);
          v26 = v21-- == 0;
        }
        while ( !v26 );
        v20 = *a1;
      }
      qfree(v20);
      *a1 = (const __m128i *)v3;
      a1[2] = v37;
      v5 = a1[1];
    }
    result = (__m128 *)(v3 + 40LL * (_QWORD)v5);
    result->m128_u64[0] = a2->m128i_i64[0];
    v7 = a2->m128i_i64[1];
    v8 = _mm_loadu_si128(a2 + 1);
    a2->m128i_i64[1] = 0;
    result->m128_u64[1] = v7;
    result[1] = (__m128)v8;
    LOBYTE(v7) = a2[2].m128i_i8[0];
    a2[1] = 0;
    result[2].m128_i8[0] = v7;
  }
  a1[1] = (const __m128i *)((char *)a1[1] + 1);
  return result;
}

