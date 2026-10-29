__int64 __fastcall sub_31830(__int64 **a1, __m128i **a2, int a3)
{
  unsigned __int64 v4; // rdx
  __int64 *v5; // rsi
  __int64 *v6; // rbx
  size_t v7; // r8
  void *v8; // r15
  __m128i *v9; // rax
  size_t v10; // r11
  __int16 v11; // r10
  __m128i *v12; // rsi
  __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rax
  size_t v18; // r15
  void *v19; // rax
  size_t v20; // rdx
  __int64 v21; // rax
  __m128i *v23; // r12
  __int64 v24; // rbx
  __m128i *v25; // rbp
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __m128i *v28; // rbx
  __int64 v29; // rdi
  __m128i v30; // [rsp+0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+18h] [rbp-50h]
  size_t v33; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+28h] [rbp-40h]
  int v35; // [rsp+2Ch] [rbp-3Ch]

  v35 = a3;
  v4 = (unsigned __int64)a1[1];
  if ( (unsigned __int64)a2[2] < v4 )
  {
    *a2 = (__m128i *)qvector_reserve();
    v4 = (unsigned __int64)a1[1];
  }
  v5 = *a1;
  v6 = *a1;
  if ( 8 * v4 )
  {
    while ( 1 )
    {
      v15 = *v6;
      if ( (*(_BYTE *)(*v6 + 113) & 2) == 0 )
        break;
LABEL_9:
      if ( ++v6 == &v5[v4] )
        goto LABEL_14;
    }
    v16 = 0;
    v31 = *(_QWORD *)(v15 + 32);
    v30.m128i_i64[1] = *(_QWORD *)(v15 + 40);
    v17 = *(_QWORD *)(v15 + 56);
    v30.m128i_i64[0] = v17;
    if ( v17 )
    {
      v18 = v17;
      v19 = (void *)qalloc_or_throw();
      v20 = v18;
      v8 = nullptr;
      v16 = (__int64)v19;
      memcpy(v19, *(const void **)(v15 + 48), v20);
      v7 = *(_QWORD *)(v15 + 80);
      if ( v7 )
        goto LABEL_13;
    }
    else
    {
      v7 = *(_QWORD *)(v15 + 80);
      v8 = nullptr;
      if ( v7 )
      {
LABEL_13:
        n = v7;
        v8 = (void *)qalloc_or_throw();
        memcpy(v8, *(const void **)(v15 + 72), n);
        v7 = n;
      }
    }
    v9 = a2[1];
    v10 = *(_QWORD *)(v15 + 96);
    v11 = *(_WORD *)(v15 + 104);
    v12 = *a2;
    if ( a2[2] < (__m128i *)&v9->m128i_i8[1] )
    {
      v34 = *(unsigned __int16 *)(v15 + 104);
      v33 = v7;
      n = v10;
      v21 = qvector_reserve();
      *a2 = (__m128i *)v21;
      v12 = (__m128i *)v21;
      v11 = v34;
      v9 = a2[1];
      v7 = v33;
      v10 = n;
    }
    v13 = &v12[5 * (_QWORD)v9];
    *(__m128 *)v13 = _mm_loadh_ps((const double *)&v30.m128i_i64[1]);
    v14 = _mm_loadl_epi64(&v30);
    v13[1].m128i_i64[0] = v16;
    v13[2].m128i_i64[1] = (__int64)v8;
    *(__m128i *)((char *)v13 + 24) = _mm_unpacklo_epi64(v14, v14);
    v13[4].m128i_i64[0] = v10;
    v13[4].m128i_i16[4] = v11;
    v13[3] = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
    a2[1] = (__m128i *)((char *)a2[1] + 1);
    v4 = (unsigned __int64)a1[1];
    v5 = *a1;
    goto LABEL_9;
  }
LABEL_14:
  if ( (_BYTE)v35 )
  {
    v23 = *a2;
    v24 = 5LL * (_QWORD)a2[1];
    v25 = &(*a2)[v24];
    if ( v23 != v25 )
    {
      v26 = 0xCCCCCCCCCCCCCCCDLL * ((v24 * 16) >> 4);
      if ( v26 )
      {
        _BitScanReverse64(&v27, v26);
        sub_30BF0((__int64)v23, (unsigned __int64)v25, 2LL * (int)v27);
        if ( v24 > 80 )
        {
          v28 = v23 + 80;
          sub_2F8F0(v23, v23 + 80);
          do
          {
            v29 = (__int64)v28;
            v28 += 5;
            sub_2F6E0(v29);
          }
          while ( v25 != v28 );
          return 1;
        }
      }
      else
      {
        sub_30BF0((__int64)v23, (unsigned __int64)v25, -2);
      }
      sub_2F8F0(v23, v25);
    }
  }
  return 1;
}

