__int64 __fastcall sub_312770(__int64 *a1, __m128i **a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __m128i *v6; // r15
  __m128i *v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 *v12; // rax
  __int64 v13; // rsi
  __m128i *v14; // rax
  __m128i *v15; // rcx
  __m128i v16; // xmm1
  __int64 v18; // r9
  __m128i *v19; // rdx
  __int64 i; // rdx
  __int64 v21; // rdi
  __m128i v22; // xmm0
  unsigned __int64 v23; // xmm0_8
  unsigned __int64 v24; // rax
  __int8 *v25; // rbx
  size_t v26; // rdx
  __m128i *v27; // rcx
  __m128i **v28; // rax
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v31; // [rsp+18h] [rbp-60h]
  __m128i **v32; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  __int64 v34; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+38h] [rbp-40h]

  v4 = a1[1];
  v5 = *a1;
  v6 = *a2;
  v32 = a2;
  v35 = v4;
  v4 *= 16;
  v7 = (__m128i *)(v5 + v4);
  v33 = v4;
  v31 = a3;
  v34 = v5;
  v8 = (v5 + v4 - (__int64)v6) >> 4;
  v30.m128i_i64[0] = *a3;
  while ( v8 > 0 )
  {
    while ( (unsigned __int8)sub_312720(&v6[v8 >> 1], v30.m128i_u64[0]) )
    {
      v6 += (v8 >> 1) + 1;
      v8 = v8 - 1 - (v8 >> 1);
      if ( v8 <= 0 )
        goto LABEL_5;
    }
    v8 >>= 1;
  }
LABEL_5:
  if ( v7 != v6 )
  {
    v9 = v6->m128i_i64[0];
    v10 = v31[1] + v30.m128i_i64[0];
    if ( !v10 )
    {
      v11 = 0;
      if ( v30.m128i_i64[0] >= v9 )
      {
LABEL_10:
        v10 = 0;
        goto LABEL_11;
      }
      goto LABEL_8;
    }
    if ( v10 >= v9 )
    {
      if ( v30.m128i_i64[0] >= v9 )
      {
        v18 = (__int64)v7;
        v11 = 0;
        goto LABEL_20;
      }
LABEL_8:
      v6->m128i_i64[1] += v9 - v30.m128i_i64[0];
      v12 = v31;
      v13 = *v31;
      v6->m128i_i64[0] = *v31;
      v7 = (__m128i *)(*a1 + 16 * a1[1]);
      v10 = v12[1] + v13;
      if ( !v10 )
      {
        v11 = 1;
        goto LABEL_10;
      }
      v18 = *a1 + 16 * a1[1];
      v11 = 1;
LABEL_20:
      v19 = v7;
      v7 = v6;
      for ( i = v19 - v6; i > 0; i = i - 1 - v21 )
      {
        while ( 1 )
        {
          v21 = i >> 1;
          v22 = _mm_loadu_si128(&v7[i >> 1]);
          v23 = _mm_add_epi64(v22, _mm_srli_si128(v22, 8)).m128i_u64[0];
          if ( v23 )
          {
            if ( v23 < v10 )
              break;
          }
          i >>= 1;
          if ( v21 <= 0 )
            goto LABEL_25;
        }
        v7 += (i >> 1) + 1;
      }
LABEL_25:
      if ( v7 != (__m128i *)v18 && v10 >= v7->m128i_i64[0] )
      {
        v24 = v7->m128i_i64[1] + v7->m128i_i64[0];
        v15 = v6 + 1;
        ++v7;
        v10 = v24;
        v14 = v6;
        goto LABEL_12;
      }
LABEL_11:
      v14 = v6 + 1;
      v15 = v6 + 1;
LABEL_12:
      *v32 = v14;
      v16 = _mm_loadu_si128(v6);
      if ( _mm_add_epi64(_mm_srli_si128(v16, 8), v16).m128i_u64[0] != v10 )
      {
        v11 = 1;
        v6->m128i_i64[1] = v10 - v16.m128i_i64[0];
      }
      a1[1] -= ((char *)v7 - (_BYTE *)memmove(v15, v7, *a1 + 16 * a1[1] - (_QWORD)v7)) >> 4;
      return v11;
    }
  }
  v30 = (__m128i)_mm_loadh_ps((const double *)v31 + 1);
  v25 = &v6->m128i_i8[-v34];
  if ( a1[2] < (unsigned __int64)(v35 + 1) )
  {
    v29 = qvector_reserve();
    *a1 = v29;
    v6 = (__m128i *)&v25[v29];
    v33 = 16 * a1[1];
  }
  v26 = v33 - (_QWORD)v25;
  v11 = 1;
  v27 = (__m128i *)memmove(&v6[1], v6, v26);
  v28 = v32;
  *v6 = _mm_load_si128(&v30);
  ++a1[1];
  *v28 = v27;
  return v11;
}

