__int64 __fastcall sub_312FC0(__int64 *a1, __m128i **a2)
{
  __int64 v2; // rax
  __m128i *v3; // r12
  __m128i *v5; // rbx
  __m128i *v6; // rbp
  __m128i *v7; // rsi
  __m128i *v8; // rbx
  __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // xmm1_8
  __m128i *v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int8 *v19; // r8
  unsigned __int64 v20; // xmm0_8
  void *v21; // rbx
  __int64 v22; // rax
  unsigned __int8 v23; // [rsp+8h] [rbp-40h]
  __int8 *v24; // [rsp+8h] [rbp-40h]

  v2 = a1[1];
  v23 = 0;
  if ( !v2 )
    return v23;
  v3 = a2[1];
  if ( v3 == (__m128i *)&byte_1 )
  {
    if ( !(*a2)->m128i_i64[0] && !(*a2)->m128i_i64[1] )
      return v23;
  }
  else if ( !v3 )
  {
    if ( *a1 )
    {
      a1[1] = 0;
      qfree();
      *a1 = 0;
      a1[2] = 0;
    }
    return 1;
  }
  v5 = (__m128i *)*a1;
  if ( v2 == 1 )
  {
    if ( v5->m128i_i64[0] || v5->m128i_i64[1] )
    {
      v6 = *a2;
      goto LABEL_6;
    }
    v21 = (void *)qalloc_or_throw();
    memcpy(v21, *a2, 16LL * (_QWORD)v3);
    if ( *a1 )
    {
      a1[1] = 0;
      qfree();
    }
    *a1 = (__int64)v21;
    *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
    return 1;
  }
  v6 = *a2;
  if ( 16 * v2 )
  {
LABEL_6:
    v23 = 0;
    v7 = v6;
    while ( 1 )
    {
      v6 = (__m128i *)sub_312C70(
                        (__int64)v6,
                        (__int64)v7[(_QWORD)v3].m128i_i64,
                        v5,
                        (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3117D0);
      if ( v6 == &(*a2)[(_QWORD)a2[1]] )
      {
        a1[1] -= (*a1 + 16 * a1[1] - (__int64)v5) >> 4;
        return 1;
      }
      v10 = _mm_loadu_si128(v5);
      v11 = v6->m128i_i64[0];
      v12 = _mm_add_epi64(_mm_srli_si128(v10, 8), v10).m128i_u64[0];
      if ( v10.m128i_i64[0] < (unsigned __int64)v6->m128i_i64[0] )
      {
        if ( v12 - 1 < v11 )
        {
          v13 = v5;
LABEL_21:
          v8 = (__m128i *)sub_312800(
                            (__int64)v5,
                            *a1 + 16 * a1[1],
                            v6,
                            (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3117D0);
          if ( v13 >= v8 )
            goto LABEL_13;
          goto LABEL_22;
        }
        v23 = 1;
        *v5 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(v12 - v11));
        v11 = v6->m128i_i64[0];
      }
      v13 = v5 + 1;
      v14 = v6->m128i_i64[1] + v11;
      if ( !v14 || v12 - 1 < v14 )
        goto LABEL_21;
      v5->m128i_i64[1] = v14 - v5->m128i_i64[0];
      v8 = (__m128i *)sub_312800(
                        (__int64)v5,
                        *a1 + 16 * a1[1],
                        v6,
                        (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3117D0);
      if ( v13 >= v8 )
      {
        if ( &v6[1] == &(*a2)[(_QWORD)a2[1]] || v12 && v6[1].m128i_i64[0] >= v12 )
        {
          v23 = 1;
          ++v6;
LABEL_13:
          v9 = a1[1];
          v5 = v8 + 1;
        }
        else
        {
          v17 = _mm_loadu_si128(v6);
          v5 = v8 + 1;
          v18 = a1[1];
          v19 = &v5->m128i_i8[-*a1];
          v20 = _mm_add_epi64(v17, _mm_srli_si128(v17, 8)).m128i_u64[0];
          if ( a1[2] < (unsigned __int64)(v18 + 1) )
          {
            v24 = &v5->m128i_i8[-*a1];
            v22 = qvector_reserve();
            v19 = v24;
            v18 = a1[1];
            *a1 = v22;
            v5 = (__m128i *)&v24[v22];
          }
          memmove(&v5[1], v5, 16 * v18 - (_QWORD)v19);
          v5->m128i_i64[0] = v20;
          ++v6;
          v5->m128i_i64[1] = v12 - v20;
          v23 = 1;
          v9 = a1[1] + 1;
          a1[1] = v9;
        }
        if ( v5 == (__m128i *)(*a1 + 16 * v9) )
          return v23;
        goto LABEL_15;
      }
LABEL_22:
      memmove(v13, v8, *a1 + 16 * a1[1] - (_QWORD)v8);
      v23 = 1;
      v15 = a1[1] - (v8 - v13);
      v5 = v13;
      a1[1] = v15;
      if ( v13 == (__m128i *)(*a1 + 16 * v15) )
        return v23;
LABEL_15:
      v7 = *a2;
      v3 = a2[1];
    }
  }
  return 0;
}

