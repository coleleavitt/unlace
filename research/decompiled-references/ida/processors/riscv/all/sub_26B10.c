__m128i *__fastcall sub_26B10(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *result; // rax
  __int64 v7; // r14
  __m128i *v8; // r13
  unsigned __int64 v9; // rcx
  const __m128i *v10; // rbx
  __m128i *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i *i; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int128 v29; // xmm0
  unsigned __int64 v30; // rsi
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __m128i v33; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+30h] [rbp-38h]

  result = (__m128i *)((char *)a2 - a1);
  if ( (__int64)a2->m128i_i64 - a1 > 384 )
  {
    v7 = a3;
    v8 = a2;
    while ( v7 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      --v7;
      v10 = (const __m128i *)(a1 + 24);
      v11 = (__m128i *)(a1
                      + 8
                      * (((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)result >> 3)) >> 1)
                       + ((0xAAAAAAAAAAAAAAABLL * ((__int64)result >> 3)) & 0xFFFFFFFFFFFFFFFELL)));
      v12 = v11->m128i_u64[1];
      if ( *(_OWORD *)(a1 + 24) < (unsigned __int128)*v11 )
      {
        v30 = v8[-1].m128i_u64[0];
        if ( (unsigned __int128)*v11 < *(_OWORD *)((char *)&v8[-2] + 8) )
          goto LABEL_29;
        if ( v9 < v30 || v30 >= v9 && *(_QWORD *)(a1 + 24) < v8[-2].m128i_i64[1] )
          goto LABEL_18;
      }
      else
      {
        v13 = v8[-1].m128i_u64[0];
        if ( *(_OWORD *)(a1 + 24) >= *(unsigned __int128 *)((char *)&v8[-2] + 8) )
        {
          if ( v12 >= v13 && (v13 < v12 || v11->m128i_i64[0] >= (unsigned __int64)v8[-2].m128i_i64[1]) )
          {
LABEL_29:
            v31 = _mm_loadu_si128((const __m128i *)a1);
            v32 = *(_QWORD *)(a1 + 16);
            *(__m128i *)a1 = _mm_loadu_si128(v11);
            v34 = v32;
            *(_DWORD *)(a1 + 16) = v11[1].m128i_i32[0];
            v33 = v31;
            v11[1].m128i_i32[0] = v32;
            *v11 = v31;
            goto LABEL_6;
          }
LABEL_18:
          v23 = _mm_loadu_si128((const __m128i *)a1);
          v24 = *(_QWORD *)(a1 + 16);
          *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v8 - 24));
          v34 = v24;
          *(_DWORD *)(a1 + 16) = v8[-1].m128i_i32[2];
          v33 = v23;
          v8[-1].m128i_i32[2] = v24;
          *(__m128i *)((char *)v8 - 24) = v23;
          goto LABEL_6;
        }
      }
      v14 = _mm_loadu_si128((const __m128i *)a1);
      v15 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      v34 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = v34;
      v33 = v14;
      *(__m128i *)a1 = v15;
      *(__m128i *)(a1 + 24) = v14;
LABEL_6:
      for ( i = v8; ; *i = v21 )
      {
        v17 = *(_QWORD *)(a1 + 8);
        v18 = v10->m128i_u64[1];
        if ( v18 >= v17 )
        {
          if ( v17 < v18 )
            goto LABEL_12;
          goto LABEL_9;
        }
        while ( 1 )
        {
          do
          {
            v19 = v10[2].m128i_u64[0];
            v10 = (const __m128i *)((char *)v10 + 24);
          }
          while ( v19 < v17 );
          if ( v17 < v19 )
            break;
LABEL_9:
          if ( v10->m128i_i64[0] >= *(_QWORD *)a1 )
            goto LABEL_12;
        }
        do
        {
LABEL_12:
          v20 = i[-1].m128i_i64[0];
          i = (__m128i *)((char *)i - 24);
        }
        while ( *(_OWORD *)a1 < __PAIR128__(v20, i->m128i_i64[0]) );
        if ( v10 >= i )
          break;
        v21 = _mm_loadu_si128(v10);
        v10 = (const __m128i *)((char *)v10 + 24);
        v22 = v10[-1].m128i_i64[1];
        *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(i);
        v34 = v22;
        v10[-1].m128i_i32[2] = i[1].m128i_i32[0];
        v33 = v21;
        i[1].m128i_i32[0] = v22;
      }
      sub_26B10(v10, v8, v7, v20, a5, a6, v33.m128i_i64[0], v33.m128i_i64[1], v34);
      result = (__m128i *)((char *)v10 - a1);
      if ( (__int64)v10->m128i_i64 - a1 <= 384 )
        return result;
      v8 = (__m128i *)v10;
    }
    sub_269E0((const __m128i *)a1, v8, (unsigned __int64)v8, a4, a5, a6);
    for ( result = (__m128i *)((char *)v8 - a1);
          (__int64)v8->m128i_i64 - a1 > 24;
          result = sub_248E0(
                     a1,
                     0,
                     0xAAAAAAAAAAAAAAABLL * (((__int64)v8->m128i_i64 - a1) >> 3),
                     v25,
                     v26,
                     v27,
                     v29,
                     v28) )
    {
      v8 = (__m128i *)((char *)v8 - 24);
      v28 = v8[1].m128i_i64[0];
      v29 = (unsigned __int128)_mm_loadu_si128(v8);
      *v8 = _mm_loadu_si128((const __m128i *)a1);
      v8[1].m128i_i32[0] = *(_DWORD *)(a1 + 16);
    }
  }
  return result;
}

