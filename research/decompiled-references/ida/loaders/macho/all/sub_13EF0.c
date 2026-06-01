__int64 *__fastcall sub_13EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, int a6)
{
  __int64 v9; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  int v15; // eax
  int v16; // edx
  char v17; // al
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // r13
  __int64 *v23; // r15
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // r13
  __int64 *v32; // rbx
  __int64 v33; // r14
  __m128i v34; // xmm0
  __int64 v35; // r14
  __m128i v36; // xmm0
  __int64 v37; // r15
  __m128i v39; // [rsp+0h] [rbp-68h] BYREF
  __m128i v40; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+28h] [rbp-40h]

  v9 = a1;
  if ( a1 != a2 )
  {
    while ( 1 )
    {
      if ( a3 == a4 )
        goto LABEL_20;
      v15 = *(_DWORD *)(a3 + 48);
      v16 = *(_DWORD *)(v9 + 48);
      if ( v15 != v16 )
        break;
      v17 = *(_BYTE *)(a3 + 56);
      if ( v17 == *(_BYTE *)(v9 + 56) )
      {
        if ( *(_DWORD *)(a3 + 52) >= *(_DWORD *)(v9 + 52) )
          goto LABEL_6;
LABEL_15:
        v18 = *(_QWORD *)a3;
        v19 = _mm_loadu_si128((const __m128i *)(a3 + 8));
        *(_QWORD *)a3 = 0;
        *(_OWORD *)(a3 + 8) = 0;
        if ( *a5 )
        {
          a5[1] = 0;
          v40.m128i_i64[0] = v18;
          v39 = v19;
          qfree();
          v18 = v40.m128i_i64[0];
          v19 = _mm_load_si128(&v39);
        }
        *a5 = v18;
        *(__m128i *)(a5 + 1) = v19;
        v20 = *(_QWORD *)(a3 + 24);
        v21 = _mm_loadu_si128((const __m128i *)(a3 + 32));
        *(_QWORD *)(a3 + 24) = 0;
        *(_OWORD *)(a3 + 32) = 0;
        if ( a5[3] )
        {
          a5[4] = 0;
          v39.m128i_i64[0] = v20;
          v40 = v21;
          qfree();
          v21 = _mm_load_si128(&v40);
          v20 = v39.m128i_i64[0];
        }
        a5[3] = v20;
        a3 += 64;
        a5 += 8;
        *((__m128i *)a5 - 2) = v21;
        *((_DWORD *)a5 - 4) = *(_DWORD *)(a3 - 16);
        *((_DWORD *)a5 - 3) = *(_DWORD *)(a3 - 12);
        *((_BYTE *)a5 - 8) = *(_BYTE *)(a3 - 8);
        if ( v9 == a2 )
          goto LABEL_20;
      }
      else
      {
        if ( v17 )
          goto LABEL_15;
LABEL_6:
        v11 = *(_QWORD *)v9;
        v12 = _mm_loadu_si128((const __m128i *)(v9 + 8));
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = 0;
        if ( *a5 )
        {
          a5[1] = 0;
          v39.m128i_i64[0] = v11;
          v40 = v12;
          qfree();
          v12 = _mm_load_si128(&v40);
          v11 = v39.m128i_i64[0];
        }
        *a5 = v11;
        *(__m128i *)(a5 + 1) = v12;
        v13 = *(_QWORD *)(v9 + 24);
        v14 = _mm_loadu_si128((const __m128i *)(v9 + 32));
        *(_QWORD *)(v9 + 24) = 0;
        *(_OWORD *)(v9 + 32) = 0;
        if ( a5[3] )
        {
          a5[4] = 0;
          v40.m128i_i64[0] = v13;
          v39 = v14;
          qfree();
          v13 = v40.m128i_i64[0];
          v14 = _mm_load_si128(&v39);
        }
        a5[3] = v13;
        v9 += 64;
        a5 += 8;
        *((__m128i *)a5 - 2) = v14;
        *((_DWORD *)a5 - 4) = *(_DWORD *)(v9 - 16);
        *((_DWORD *)a5 - 3) = *(_DWORD *)(v9 - 12);
        *((_BYTE *)a5 - 8) = *(_BYTE *)(v9 - 8);
        if ( v9 == a2 )
          goto LABEL_20;
      }
    }
    if ( v15 == a6 || v16 != a6 && v15 < v16 )
      goto LABEL_15;
    goto LABEL_6;
  }
LABEL_20:
  v41 = (a2 - v9) >> 6;
  if ( a2 - v9 > 0 )
  {
    v22 = (a2 - v9) >> 6;
    v23 = a5;
    do
    {
      v24 = *(_QWORD *)v9;
      v25 = _mm_loadu_si128((const __m128i *)(v9 + 8));
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      if ( *v23 )
      {
        v23[1] = 0;
        v39.m128i_i64[0] = v24;
        v40 = v25;
        qfree();
        v25 = _mm_load_si128(&v40);
        v24 = v39.m128i_i64[0];
      }
      *v23 = v24;
      *(__m128i *)(v23 + 1) = v25;
      v26 = *(_QWORD *)(v9 + 24);
      v27 = _mm_loadu_si128((const __m128i *)(v9 + 32));
      *(_QWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 32) = 0;
      if ( v23[3] )
      {
        v23[4] = 0;
        v39.m128i_i64[0] = v26;
        v40 = v27;
        qfree();
        v27 = _mm_load_si128(&v40);
        v26 = v39.m128i_i64[0];
      }
      v23[3] = v26;
      v9 += 64;
      v23 += 8;
      *((__m128i *)v23 - 2) = v27;
      *((_DWORD *)v23 - 4) = *(_DWORD *)(v9 - 16);
      *((_DWORD *)v23 - 3) = *(_DWORD *)(v9 - 12);
      *((_BYTE *)v23 - 8) = *(_BYTE *)(v9 - 8);
      --v22;
    }
    while ( v22 );
    v28 = v41 - 1;
    if ( v41 - 1 < 0 )
      v28 = 0;
    a5 += 8 * v28 + 8;
  }
  v29 = a4 - a3;
  v30 = v29 >> 6;
  if ( v29 > 0 )
  {
    v31 = v29 >> 6;
    v32 = a5;
    do
    {
      v33 = *(_QWORD *)a3;
      v34 = _mm_loadu_si128((const __m128i *)(a3 + 8));
      *(_QWORD *)a3 = 0;
      *(_OWORD *)(a3 + 8) = 0;
      if ( *v32 )
      {
        v32[1] = 0;
        v39 = v34;
        qfree();
        v34 = _mm_load_si128(&v39);
      }
      *v32 = v33;
      *(__m128i *)(v32 + 1) = v34;
      v35 = *(_QWORD *)(a3 + 24);
      v36 = _mm_loadu_si128((const __m128i *)(a3 + 32));
      *(_QWORD *)(a3 + 24) = 0;
      *(_OWORD *)(a3 + 32) = 0;
      if ( v32[3] )
      {
        v32[4] = 0;
        v39 = v36;
        qfree();
        v36 = _mm_load_si128(&v39);
      }
      v32[3] = v35;
      a3 += 64;
      v32 += 8;
      *((__m128i *)v32 - 2) = v36;
      *((_DWORD *)v32 - 4) = *(_DWORD *)(a3 - 16);
      *((_DWORD *)v32 - 3) = *(_DWORD *)(a3 - 12);
      *((_BYTE *)v32 - 8) = *(_BYTE *)(a3 - 8);
      --v31;
    }
    while ( v31 );
    v37 = v30 - 1;
    if ( v37 < 0 )
      v37 = 0;
    a5 += 8 * v37 + 8;
  }
  return a5;
}

