unsigned __int64 __fastcall sub_340580(__int64 *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 *v6; // rax
  __int64 v7; // rdi
  size_t v8; // rax
  size_t v9; // r12
  size_t v10; // rbp
  __int64 j; // rax
  void *v12; // r13
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rdi
  const char *v17; // rax
  const char *v18; // r13
  size_t v19; // r14
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rbx
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __m128i v36; // [rsp+0h] [rbp-98h] BYREF
  void *v37; // [rsp+20h] [rbp-78h] BYREF
  __int128 v38; // [rsp+28h] [rbp-70h]
  void *v39; // [rsp+40h] [rbp-58h] BYREF
  __m128i v40; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v3 = *a1;
  v41 = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v3);
    *a1 = 0;
    a1[2] = 0;
  }
  v37 = nullptr;
  v38 = 0;
  if ( a2 )
  {
    v8 = strlen(a2);
    v9 = v8 + 1;
    v10 = v8;
    v37 = (void *)qvector_reserve((__int64)&v37, 0, v8 + 1, 1);
    *(_QWORD *)&v38 = v9;
    memmove(v37, a2, v10);
    *((_BYTE *)v37 + v10) = 0;
  }
  for ( j = qstrtok(); j; j = qstrtok() )
  {
    v17 = (const char *)trim();
    v18 = v17;
    if ( *v17 )
    {
      v39 = nullptr;
      v40 = 0;
      if ( v17 )
      {
        v19 = strlen(v17);
        v36.m128i_i64[0] = v19 + 1;
        v39 = (void *)qvector_reserve((__int64)&v39, 0, v19 + 1, 1);
        v40.m128i_i64[0] = v36.m128i_i64[0];
        memmove(v39, v18, v19);
        *((_BYTE *)v39 + v19) = 0;
      }
      v35 = a1[1];
      v34 = *a1;
      v20 = a1[2];
      v21 = v35 + 1;
      if ( (unsigned __int64)&v39 < *a1 || (unsigned __int64)&v39 >= v34 + 24 * v20 )
      {
        if ( v20 < v21 )
        {
          v24 = qvector_reserve((__int64)a1, v34, v35 + 1, 24);
          *a1 = v24;
          v34 = v24;
          v35 = a1[1];
        }
        v22 = _mm_loadu_si128(&v40);
        v23 = v34 + 24 * v35;
        *(_QWORD *)v23 = v39;
        *(__m128i *)(v23 + 8) = v22;
        ++a1[1];
      }
      else
      {
        v12 = v39;
        v13 = _mm_loadl_epi64(&v40);
        v39 = nullptr;
        v14 = _mm_loadl_epi64((const __m128i *)&v40.m128i_u64[1]);
        v40 = 0;
        if ( v20 < v21 )
        {
          v36.m128i_i64[1] = v14.m128i_i64[0];
          v36.m128i_i64[0] = v13.m128i_i64[0];
          v33 = qvector_reserve((__int64)a1, v34, v35 + 1, 24);
          *a1 = v33;
          v34 = v33;
          v35 = a1[1];
          v14 = _mm_loadl_epi64((const __m128i *)&v36.m128i_u64[1]);
          v13 = _mm_loadl_epi64(&v36);
        }
        v15 = v34 + 24 * v35;
        *(_QWORD *)v15 = v12;
        v16 = (__int64)v39;
        *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v13, v14);
        ++a1[1];
        if ( v16 )
        {
          v40.m128i_i64[0] = 0;
          qfree(v16);
        }
      }
    }
  }
  v25 = *a1;
  v26 = 24 * a1[1];
  v27 = v25 + v26;
  if ( v25 != v25 + v26 )
  {
    v28 = 0xAAAAAAAAAAAAAAABLL * (v26 >> 3);
    if ( v28 )
    {
      _BitScanReverse64(&v29, v28);
      sub_33FEB0(v25, v27, 2LL * (int)v29);
      if ( v26 > 384 )
      {
        v30 = v25 + 384;
        sub_33AB30(v25, v25 + 384);
        do
        {
          v31 = v30;
          v30 += 24;
          sub_33A370(v31);
        }
        while ( v27 != v30 );
        goto LABEL_30;
      }
    }
    else
    {
      sub_33FEB0(v25, v27, -2);
    }
    sub_33AB30(v25, v27);
  }
LABEL_30:
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree((__int64)v37);
  }
  return v41 - __readfsqword(0x28u);
}

