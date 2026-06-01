unsigned __int64 __fastcall sub_3661C0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __m128 a5, double a6)
{
  __int64 v6; // rax
  const char **v7; // r15
  __int64 v8; // r12
  __m128i *v9; // rbx
  __int64 v10; // rdi
  __int64 *v11; // rdx
  __int64 *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 i; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 j; // rbp
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __m128i *v30; // rbx
  __int32 v31; // eax
  __m128i v32; // xmm0
  __int32 v33; // eax
  __m128i v34; // xmm0
  __int64 v35; // rax
  const __m128i *v36; // rbp
  __int64 v37; // rax
  size_t v38; // r13
  void *v39; // rax
  __m128i *v40; // rbp
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __m128i *v43; // rbx
  __m128i *v44; // [rsp+8h] [rbp-C0h]
  __int64 v45; // [rsp+10h] [rbp-B8h]
  __int64 v46; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 192);
  v44 = nullptr;
  v45 = v6;
  if ( v6 )
  {
    v26 = 0;
    v46 = 120 * v6;
    v27 = 0;
    v44 = (__m128i *)qalloc_or_throw(120 * v6, (__int64)a2, a3, a4);
    v30 = v44;
    do
    {
      v36 = (const __m128i *)(v26 + *(_QWORD *)(a1 + 184));
      v37 = v36->m128i_i64[0];
      v30->m128i_i64[0] = v36->m128i_i64[0];
      if ( v37 )
        ++*(_DWORD *)(v37 + 104);
      a6 = 0.0;
      v30->m128i_i64[1] = 0;
      v30[1] = 0;
      v38 = v36[1].m128i_u64[0];
      if ( v38 )
      {
        v39 = (void *)qalloc_or_throw(v36[1].m128i_i64[0], (__int64)a2, v28, v29);
        v30->m128i_i64[1] = (__int64)v39;
        v30[1].m128i_i64[1] = v38;
        a2 = (__m128i *)v36->m128i_i64[1];
        memcpy(v39, a2, v38);
        v30[1].m128i_i64[0] = v38;
      }
      v31 = v36[6].m128i_i32[0];
      ++v27;
      v26 += 120;
      v30 = (__m128i *)((char *)v30 + 120);
      *(__m128i *)((char *)v30 - 88) = _mm_loadu_si128(v36 + 2);
      v32 = _mm_loadu_si128(v36 + 3);
      v30[-2].m128i_i32[2] = v31;
      v33 = v36[6].m128i_i32[1];
      *(__m128i *)((char *)v30 - 72) = v32;
      v34 = _mm_loadu_si128(v36 + 4);
      v30[-2].m128i_i32[3] = v33;
      v35 = v36[6].m128i_i64[1];
      *(__m128i *)((char *)v30 - 56) = v34;
      a5 = (__m128)_mm_loadu_si128(v36 + 5);
      v30[-1].m128i_i64[0] = v35;
      LODWORD(v35) = v36[7].m128i_i32[0];
      *(__m128 *)((char *)v30 - 40) = a5;
      v30[-1].m128i_i32[2] = v35;
    }
    while ( v45 != v27 );
    v40 = (__m128i *)((char *)v44 + v46);
    if ( &v44->m128i_i8[v46] != (__int8 *)v44 )
    {
      v41 = 0xEEEEEEEEEEEEEEEFLL * (v46 >> 3);
      if ( v41 )
      {
        _BitScanReverse64(&v42, v41);
        sub_365720((__int64)v44, (__int64)&v44->m128i_i64[(unsigned __int64)v46 / 8], 2LL * (int)v42);
        if ( v46 > 1920 )
        {
          v43 = v44 + 120;
          a2 = v44 + 120;
          sub_35FF20(v44, v44 + 120);
          do
          {
            sub_35F8F0(v43);
            v43 = (__m128i *)((char *)v43 + 120);
          }
          while ( v40 != v43 );
          goto LABEL_2;
        }
      }
      else
      {
        sub_365720((__int64)v44, (__int64)&v44->m128i_i64[(unsigned __int64)v46 / 8], -2);
      }
      a2 = (__m128i *)((char *)v44 + v46);
      sub_35FF20(v44, v40);
    }
  }
LABEL_2:
  sub_6D0A0(
    (__int64)"     Address          Size          Time\n---------------- ---------------- --------\n",
    a2,
    *(double *)a5.m128_u64,
    a6);
  v7 = (const char **)&v44[2];
  do
  {
    qsnprintf();
    sub_6D0A0((__int64)"%08a %08a %s\n", *(double *)a5.m128_u64, a6, *v7);
    v7 += 15;
  }
  while ( v7 != (const char **)&v44[242] );
  if ( v44 )
  {
    v8 = 0;
    if ( v45 )
    {
      v9 = v44;
      do
      {
        v10 = v9->m128i_i64[1];
        if ( v10 )
        {
          v9[1].m128i_i64[0] = 0;
          qfree(v10);
        }
        v11 = (__int64 *)v9->m128i_i64[0];
        if ( v9->m128i_i64[0] )
        {
          if ( (*((_DWORD *)v11 + 26))-- == 1 )
          {
            v13 = (__int64 *)v9->m128i_i64[0];
            if ( v9->m128i_i64[0] )
            {
              sub_258970((__int64 *)v9->m128i_i64[0]);
              v14 = v13[23];
              if ( v14 )
              {
                v15 = v13[24];
                if ( v15 )
                {
                  for ( i = 0; i != v15; ++i )
                  {
                    v17 = (__int64 *)(v14 + 24 * i);
                    v18 = *v17;
                    if ( *v17 )
                    {
                      v17[1] = 0;
                      qfree(v18);
                      v14 = v13[23];
                    }
                  }
                }
                v13[24] = 0;
                qfree(v14);
              }
              v19 = v13[20];
              if ( v19 )
              {
                v13[21] = 0;
                qfree(v19);
              }
              v20 = v13[16];
              if ( v20 )
              {
                v21 = v13[17];
                if ( v21 )
                {
                  for ( j = 0; j != v21; ++j )
                  {
                    v23 = (__int64 *)(v20 + 32 * j);
                    v24 = *v23;
                    if ( *v23 )
                    {
                      v23[1] = 0;
                      qfree(v24);
                      v20 = v13[16];
                    }
                  }
                }
                v13[17] = 0;
                qfree(v20);
              }
              sub_255050((__int64)(v13 + 2), *(double *)a5.m128_u64);
              j__qfree((__int64)v13);
            }
          }
        }
        ++v8;
        v9 = (__m128i *)((char *)v9 + 120);
      }
      while ( v45 != v8 );
    }
    qfree((__int64)v44);
  }
  return v47 - __readfsqword(0x28u);
}

