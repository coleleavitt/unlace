__m128i **__fastcall sub_3A4D40(__m128i **a1, const __m128i *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __m128i *v5; // rbp
  const __m128i *v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 i; // r12
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 j; // r12
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v22; // rdx
  __m128i v23; // xmm0

  v3 = operator new(0x30u);
  v4 = a2[1].m128i_i64[1];
  v5 = (__m128i *)v3;
  v6 = (const __m128i *)(a2[2].m128i_i64[0] + 16LL * a2[3].m128i_i32[2]);
  if ( v4 )
  {
    ++*(_DWORD *)(v4 + 104);
    v7 = _mm_loadl_epi64(a2 + 1);
    v5->m128i_i32[2] = 1;
    v5->m128i_i64[0] = (__int64)off_4E6F98;
    v5[1] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)v4);
    ++*(_DWORD *)(v4 + 104);
    v8 = _mm_loadu_si128(v6);
    v5[2] = v8;
    if ( (*(_DWORD *)(v4 + 104))-- == 1 )
    {
      sub_258970((__int64 *)v4);
      v10 = *(_QWORD *)(v4 + 184);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v4 + 192);
        if ( v11 )
        {
          for ( i = 0; i != v11; ++i )
          {
            v13 = (__int64 *)(v10 + 24 * i);
            v14 = *v13;
            if ( *v13 )
            {
              v13[1] = 0;
              qfree(v14);
              v10 = *(_QWORD *)(v4 + 184);
            }
          }
        }
        *(_QWORD *)(v4 + 192) = 0;
        qfree(v10);
      }
      v15 = *(_QWORD *)(v4 + 160);
      if ( v15 )
      {
        *(_QWORD *)(v4 + 168) = 0;
        qfree(v15);
      }
      v16 = *(_QWORD *)(v4 + 128);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v4 + 136);
        if ( v17 )
        {
          for ( j = 0; j != v17; ++j )
          {
            v19 = (__int64 *)(v16 + 32 * j);
            v20 = *v19;
            if ( *v19 )
            {
              v19[1] = 0;
              qfree(v20);
              v16 = *(_QWORD *)(v4 + 128);
            }
          }
        }
        *(_QWORD *)(v4 + 136) = 0;
        qfree(v16);
      }
      sub_255050(v4 + 16, *(double *)v8.m128i_i64);
      j__qfree(v4);
    }
    *a1 = v5;
    return a1;
  }
  else
  {
    v22 = a2[1].m128i_i64[0];
    v5->m128i_i32[2] = 1;
    v5->m128i_i64[0] = (__int64)off_4E6F98;
    v5[1].m128i_i64[0] = v22;
    v5[1].m128i_i64[1] = 0;
    v23 = _mm_loadu_si128(v6);
    *a1 = v5;
    v5[2] = v23;
    return a1;
  }
}

