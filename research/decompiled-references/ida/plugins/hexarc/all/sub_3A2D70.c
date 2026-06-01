const __m128i *__fastcall sub_3A2D70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v11; // r14
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int64 v14; // rbp
  __int64 v15; // rbx
  _QWORD *v16; // r12
  __int64 v17; // r15
  __m128i v18; // xmm0
  const __m128i *v19; // rax
  const __m128i *v20; // roff
  __m128 v21; // xmm2
  const __m128i *v22; // rcx
  __m128i v23; // xmm3
  unsigned __int64 v24; // xmm6_8
  __int64 v25; // r15
  __int128 v26; // xmm1
  __int64 v27; // rbp
  __m128i v28; // xmm0
  __int64 v29; // r12
  __int64 v30; // rdi
  const __m128i *result; // rax
  __m128i si128; // xmm5
  __int64 v33; // rbp
  __int64 v34; // rax
  _QWORD *v35; // rax
  __m128i v36; // [rsp+0h] [rbp-78h] BYREF
  __m128i v37; // [rsp+10h] [rbp-68h] BYREF
  __int64 v38; // [rsp+20h] [rbp-58h]
  const __m128i *v39; // [rsp+28h] [rbp-50h]
  __m128i v40[4]; // [rsp+30h] [rbp-48h] BYREF

  v39 = a4;
  v38 = a2;
  v37.m128i_i64[0] = a3;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v14 = v38;
    v15 = a1 + 40 * v38;
  }
  else
  {
    v11 = (a3 - 1) / 2;
    v12 = a2;
    v13 = 0;
    while ( 1 )
    {
      v14 = 2 * (v12 + 1);
      v15 = a1 + 80 * (v12 + 1);
      if ( *(_QWORD *)(v15 + 8) < *(_QWORD *)(v15 - 32) )
      {
        --v14;
        v15 = a1 + 40 * v14;
      }
      v16 = (_QWORD *)(a1 + 40 * v12);
      *v16 = *(_QWORD *)v15;
      v16[1] = *(_QWORD *)(v15 + 8);
      v17 = *(_QWORD *)(v15 + 16);
      v18 = _mm_loadu_si128((const __m128i *)(v15 + 24));
      *(_QWORD *)(v15 + 16) = 0;
      *(_OWORD *)(v15 + 24) = v13;
      if ( v16[2] )
      {
        v16[3] = 0;
        v36 = v18;
        qfree();
        v18 = _mm_load_si128(&v36);
        v13 = 0;
      }
      v16[2] = v17;
      *(__m128i *)(v16 + 3) = v18;
      if ( v14 >= v11 )
        break;
      v12 = v14;
    }
  }
  if ( (v37.m128i_i8[0] & 1) == 0 && (v37.m128i_i64[0] - 2) / 2 == v14 )
  {
    v33 = v14 + 1;
    v34 = 10 * v33;
    v14 = 2 * v33 - 1;
    v35 = (_QWORD *)(a1 + 8 * v34 - 40);
    *(_QWORD *)v15 = *v35;
    *(_QWORD *)(v15 + 8) = v35[1];
    sub_3A1B50((_QWORD *)(v15 + 16), v35 + 2);
    v15 = a1 + 40 * v14;
  }
  v19 = v39;
  v20 = v39;
  v21 = (__m128)_mm_loadu_si128(v39);
  v22 = (const __m128i *)v39[1].m128i_i64[0];
  v39[1].m128i_i64[0] = 0;
  v23 = _mm_loadu_si128((const __m128i *)((char *)v20 + 24));
  *(const __m128i *)((char *)&v19[1] + 8) = 0;
  v24 = _mm_movehl_ps(a11, v21).m128_u64[0];
  v39 = v22;
  v37 = (__m128i)v21;
  v40[0] = v23;
  v25 = (v14 - 1) / 2;
  if ( v14 > v38 )
  {
    v26 = 0;
    while ( 1 )
    {
      v29 = a1 + 40 * v25;
      v15 = a1 + 40 * v14;
      if ( *(_QWORD *)(v29 + 8) >= v24 )
        break;
      *(_QWORD *)v15 = *(_QWORD *)v29;
      *(_QWORD *)(v15 + 8) = *(_QWORD *)(v29 + 8);
      v27 = *(_QWORD *)(v29 + 16);
      *(_QWORD *)(v29 + 16) = 0;
      v28 = _mm_loadu_si128((const __m128i *)(v29 + 24));
      *(_OWORD *)(v29 + 24) = v26;
      if ( *(_QWORD *)(v15 + 16) )
      {
        *(_QWORD *)(v15 + 24) = 0;
        v36 = v28;
        qfree();
        v28 = _mm_load_si128(&v36);
        v26 = 0;
      }
      *(_QWORD *)(v15 + 16) = v27;
      v14 = v25;
      *(__m128i *)(v15 + 24) = v28;
      if ( v38 >= v25 )
      {
        v15 = a1 + 40 * v25;
        break;
      }
      v25 = (v25 - 1) / 2;
    }
  }
  v30 = *(_QWORD *)(v15 + 16);
  *(__m128i *)v15 = _mm_load_si128(&v37);
  if ( v30 )
  {
    *(_QWORD *)(v15 + 24) = 0;
    qfree();
  }
  result = v39;
  si128 = _mm_load_si128(v40);
  *(_QWORD *)(v15 + 16) = v39;
  *(__m128i *)(v15 + 24) = si128;
  return result;
}

