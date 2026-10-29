unsigned __int64 __fastcall sub_33B300(__int64 *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rax
  size_t v7; // rax
  size_t v8; // r12
  size_t v9; // rbp
  __int64 j; // rax
  void *v11; // r13
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  void *v15; // rdi
  const char *v16; // rax
  const char *v17; // r13
  size_t v18; // r14
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-98h] BYREF
  void *v36; // [rsp+20h] [rbp-78h]
  __int128 v37; // [rsp+28h] [rbp-70h]
  void *v38; // [rsp+40h] [rbp-58h] BYREF
  __m128i v39; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v3 = *a1;
  v40 = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 24 * i);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  v36 = nullptr;
  v37 = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7 + 1;
    v9 = v7;
    v36 = (void *)qvector_reserve();
    *(_QWORD *)&v37 = v8;
    memmove(v36, a2, v9);
    *((_BYTE *)v36 + v9) = 0;
  }
  for ( j = qstrtok(); j; j = qstrtok() )
  {
    v16 = (const char *)trim();
    v17 = v16;
    if ( *v16 )
    {
      v38 = nullptr;
      v39 = 0;
      if ( v16 )
      {
        v18 = strlen(v16);
        v35.m128i_i64[0] = v18 + 1;
        v38 = (void *)qvector_reserve();
        v39.m128i_i64[0] = v35.m128i_i64[0];
        memmove(v38, v17, v18);
        *((_BYTE *)v38 + v18) = 0;
      }
      v34 = a1[1];
      v33 = *a1;
      v19 = a1[2];
      v20 = v34 + 1;
      if ( (unsigned __int64)&v38 < *a1 || (unsigned __int64)&v38 >= v33 + 24 * v19 )
      {
        if ( v19 < v20 )
        {
          v23 = qvector_reserve();
          *a1 = v23;
          v33 = v23;
          v34 = a1[1];
        }
        v21 = _mm_loadu_si128(&v39);
        v22 = v33 + 24 * v34;
        *(_QWORD *)v22 = v38;
        *(__m128i *)(v22 + 8) = v21;
        ++a1[1];
      }
      else
      {
        v11 = v38;
        v12 = _mm_loadl_epi64(&v39);
        v38 = nullptr;
        v13 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
        v39 = 0;
        if ( v19 < v20 )
        {
          v35.m128i_i64[1] = v13.m128i_i64[0];
          v35.m128i_i64[0] = v12.m128i_i64[0];
          v32 = qvector_reserve();
          *a1 = v32;
          v33 = v32;
          v34 = a1[1];
          v13 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
          v12 = _mm_loadl_epi64(&v35);
        }
        v14 = v33 + 24 * v34;
        *(_QWORD *)v14 = v11;
        v15 = v38;
        *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v12, v13);
        ++a1[1];
        if ( v15 )
        {
          v39.m128i_i64[0] = 0;
          qfree();
        }
      }
    }
  }
  v24 = *a1;
  v25 = 24 * a1[1];
  v26 = v24 + v25;
  if ( v24 != v24 + v25 )
  {
    v27 = 0xAAAAAAAAAAAAAAABLL * (v25 >> 3);
    if ( v27 )
    {
      _BitScanReverse64(&v28, v27);
      sub_33AC30(v24, v26, 2LL * (int)v28);
      if ( v25 > 384 )
      {
        v29 = v24 + 384;
        sub_3358A0(v24, v24 + 384);
        do
        {
          v30 = v29;
          v29 += 24;
          sub_3350E0(v30);
        }
        while ( v26 != v29 );
        goto LABEL_30;
      }
    }
    else
    {
      sub_33AC30(v24, v26, -2);
    }
    sub_3358A0(v24, v26);
  }
LABEL_30:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v40 - __readfsqword(0x28u);
}

