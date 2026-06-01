__m128i *__fastcall sub_1BBF0(const __m128i *a1)
{
  __m128i *v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __m128i *v4; // rcx
  __m128i *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  const __m128i *v10; // r15
  __m128i *v11; // rbp
  __int64 v12; // rax
  __m128i **v13; // rdx
  __int64 v14; // rcx
  __m128i *v15; // rsi
  __int64 v16; // rax
  __m128i v17; // xmm0
  const __m128i *i; // r13
  const __m128i *v19; // r14
  void (__fastcall *hexdsp)(__int64, const __m128i *); // rax
  void (__fastcall *v21)(__int64, const __m128i *); // rax
  __int64 v22; // [rsp+8h] [rbp-50h]
  const __m128i *v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+18h] [rbp-40h]

  v1 = (__m128i *)a1;
  v2 = a1->m128i_i64[1];
  v3 = a1[1].m128i_u64[0];
  if ( v3 < v2 + 1 )
  {
    v6 = nullptr;
    v7 = qvector_reserve(a1, 0, v2 + 1, 48);
    v8 = a1->m128i_i64[1];
    v9 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = v3;
    v23 = (const __m128i *)v7;
    v10 = (const __m128i *)a1->m128i_i64[0];
    v24 = v9;
    v22 = v8 - 1;
    if ( v8 - 1 >= 0 )
    {
      v11 = (__m128i *)v7;
      do
      {
        v12 = v10->m128i_i64[0];
        v11[1].m128i_i64[0] = 0;
        *v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
        if ( (const __m128i *)v12 != v10 )
        {
          v13 = (__m128i **)v10->m128i_i64[1];
          v14 = v10[1].m128i_i64[0];
          v15 = *v13;
          **(_QWORD **)(v12 + 8) = *v13;
          a1 = *(const __m128i **)(v12 + 8);
          v15->m128i_i64[1] = (__int64)a1;
          v10[1].m128i_i64[0] -= v14;
          v6 = (__m128i *)v11->m128i_i64[1];
          v6->m128i_i64[0] = v12;
          *(_QWORD *)(v12 + 8) = v6;
          *v13 = v11;
          v11[1].m128i_i64[0] += v14;
          v11->m128i_i64[1] = (__int64)v13;
        }
        v16 = v10[1].m128i_i64[1];
        v17 = _mm_loadu_si128(v10 + 2);
        v10[1].m128i_i64[1] = 0;
        v10[2] = 0;
        v11[1].m128i_i64[1] = v16;
        v11[2] = v17;
        for ( i = (const __m128i *)v10->m128i_i64[0]; i != v10; --v10[1].m128i_i64[0] )
        {
          v19 = i;
          i = (const __m128i *)i->m128i_i64[0];
          *(_QWORD *)v19->m128i_i64[1] = i;
          i->m128i_i64[1] = v19->m128i_i64[1];
          hexdsp = (void (__fastcall *)(__int64, const __m128i *))get_hexdsp(a1, v6);
          hexdsp(493, v19 + 1);
          v21 = (void (__fastcall *)(__int64, const __m128i *))get_hexdsp(493, &v19[1]);
          v6 = (__m128i *)&v19[1];
          v21(444, v19 + 1);
          a1 = v19;
          qfree(v19);
        }
        --v22;
        v10 += 3;
        v11 += 3;
      }
      while ( v22 != -1 );
      v10 = (const __m128i *)v1->m128i_i64[0];
    }
    qfree(v10);
    v1->m128i_i64[0] = (__int64)v23;
    v1[1].m128i_i64[0] = v24;
    v2 = v1->m128i_i64[1];
  }
  else
  {
    v23 = (const __m128i *)a1->m128i_i64[0];
  }
  v4 = (__m128i *)&v23[3 * v2];
  v4[1].m128i_i64[0] = 0;
  v4[1].m128i_i64[1] = 0;
  *v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  v4[2] = 0;
  ++v1->m128i_i64[1];
  return v4;
}

