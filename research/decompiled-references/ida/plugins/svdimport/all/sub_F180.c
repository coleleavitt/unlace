const __m128i *__fastcall sub_F180(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  __m128i v7; // xmm1
  __int64 v8; // r12
  __m128i *v9; // rbx
  __m128i *v10; // r14
  __int64 v11; // rbp
  __m128i v12; // xmm0
  const __m128i *v13; // rax
  __int8 v14; // si
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  const __m128i *v17; // rsi
  __int64 v18; // r14
  __m128i v19; // xmm1
  __int64 v20; // r12
  __m128i v21; // xmm0
  const __m128i *v22; // rbp
  __m128i v23; // xmm4
  __int64 v24; // rdi
  const __m128i *result; // rax
  __m128i si128; // xmm5
  __int64 v27; // rdx
  __int64 v28; // r12
  const __m128i *v29; // rdx
  __int64 v30; // r14
  __m128i v31; // xmm0
  __m128i v33; // [rsp+10h] [rbp-78h] BYREF
  __int64 v34; // [rsp+20h] [rbp-68h]
  const __m128i *v35; // [rsp+28h] [rbp-60h]
  __m128i v36; // [rsp+30h] [rbp-58h] BYREF
  __m128i v37[4]; // [rsp+40h] [rbp-48h] BYREF

  v34 = a3;
  v35 = a4;
  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    v8 = a2;
    v9 = (__m128i *)(a1 + 48 * a2);
  }
  else
  {
    v6 = a2;
    v7 = 0;
    while ( 1 )
    {
      v8 = 2 * (v6 + 1);
      v9 = (__m128i *)(a1 + 96 * (v6 + 1));
      if ( v9->m128i_i64[0] < (unsigned __int64)v9[-3].m128i_i64[0] )
      {
        --v8;
        v9 = (__m128i *)(a1 + 48 * v8);
      }
      v10 = (__m128i *)(a1 + 48 * v6);
      *v10 = _mm_loadu_si128(v9);
      v10[1].m128i_i8[0] = v9[1].m128i_i8[0];
      v11 = v9[1].m128i_i64[1];
      v12 = _mm_loadu_si128(v9 + 2);
      v9[1].m128i_i64[1] = 0;
      v9[2] = v7;
      if ( v10[1].m128i_i64[1] )
      {
        v10[2].m128i_i64[0] = 0;
        v33 = v12;
        qfree();
        v12 = _mm_load_si128(&v33);
        v7 = 0;
      }
      v10[1].m128i_i64[1] = v11;
      v10[2] = v12;
      if ( v8 >= v5 )
        break;
      v6 = v8;
    }
  }
  if ( (v34 & 1) == 0 && (v34 - 2) / 2 == v8 )
  {
    v27 = v8 + 1;
    v28 = 2 * (v8 + 1);
    v29 = (const __m128i *)(a1 + 16 * (v28 + 4 * v27) - 48);
    *v9 = _mm_loadu_si128(v29);
    v9[1].m128i_i8[0] = v29[1].m128i_i8[0];
    v30 = v29[1].m128i_i64[1];
    v31 = _mm_loadu_si128(v29 + 2);
    v29[1].m128i_i64[1] = 0;
    v29[2] = 0;
    if ( v9[1].m128i_i64[1] )
    {
      v9[2].m128i_i64[0] = 0;
      v33 = v31;
      qfree();
      v31 = _mm_load_si128(&v33);
    }
    v8 = v28 - 1;
    v9[1].m128i_i64[1] = v30;
    v9[2] = v31;
    v9 = (__m128i *)(a1 + 48 * v8);
  }
  v13 = v35;
  v14 = v35[1].m128i_i8[0];
  v15 = _mm_loadu_si128(v35);
  v16 = _mm_loadu_si128(v35 + 2);
  v35[2] = 0;
  LOBYTE(v34) = v14;
  v17 = (const __m128i *)v13[1].m128i_i64[1];
  v13[1].m128i_i64[1] = 0;
  v18 = (v8 - 1) / 2;
  v35 = v17;
  v36 = v15;
  v37[0] = v16;
  if ( v8 > a2 )
  {
    v19 = 0;
    while ( 1 )
    {
      v22 = (const __m128i *)(a1 + 48 * v18);
      v9 = (__m128i *)(a1 + 48 * v8);
      if ( v22->m128i_i64[0] >= (unsigned __int64)v15.m128i_i64[0] )
        break;
      *v9 = _mm_loadu_si128(v22);
      v9[1].m128i_i8[0] = v22[1].m128i_i8[0];
      v20 = v22[1].m128i_i64[1];
      v21 = _mm_loadu_si128(v22 + 2);
      v22[1].m128i_i64[1] = 0;
      v22[2] = v19;
      if ( v9[1].m128i_i64[1] )
      {
        v9[2].m128i_i64[0] = 0;
        v33 = v21;
        qfree();
        v21 = _mm_load_si128(&v33);
        v19 = 0;
      }
      v9[1].m128i_i64[1] = v20;
      v8 = v18;
      v9[2] = v21;
      if ( a2 >= v18 )
      {
        v9 = (__m128i *)(a1 + 48 * v18);
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
  v23 = _mm_load_si128(&v36);
  v24 = v9[1].m128i_i64[1];
  v9[1].m128i_i8[0] = v34;
  *v9 = v23;
  if ( v24 )
  {
    v9[2].m128i_i64[0] = 0;
    qfree();
  }
  result = v35;
  si128 = _mm_load_si128(v37);
  v9[1].m128i_i64[1] = (__int64)v35;
  v9[2] = si128;
  return result;
}

