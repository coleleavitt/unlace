__m128i **__fastcall sub_3A4F10(__m128i **a1, const __m128i *a2)
{
  __int64 v3; // r14
  __m128i *v4; // rax
  __int64 v5; // rbx
  __m128i *v6; // rbp
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
  __int64 v22; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2[1].m128i_i64[1] + 8) + 432LL) + 104LL * a2[2].m128i_i32[0];
  v4 = (__m128i *)operator new(0x28u);
  v5 = a2[1].m128i_i64[1];
  v6 = v4;
  if ( v5 )
  {
    ++*(_DWORD *)(v5 + 104);
    v7 = _mm_loadl_epi64(a2 + 1);
    v4->m128i_i32[2] = 1;
    v8 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)v5);
    v4->m128i_i64[0] = (__int64)off_4E6D98;
    v4[1] = v8;
    ++*(_DWORD *)(v5 + 104);
    v4[2].m128i_i64[0] = v3;
    if ( (*(_DWORD *)(v5 + 104))-- == 1 )
    {
      sub_258970((__int64 *)v5);
      v10 = *(_QWORD *)(v5 + 184);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v5 + 192);
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
              v10 = *(_QWORD *)(v5 + 184);
            }
          }
        }
        *(_QWORD *)(v5 + 192) = 0;
        qfree(v10);
      }
      v15 = *(_QWORD *)(v5 + 160);
      if ( v15 )
      {
        *(_QWORD *)(v5 + 168) = 0;
        qfree(v15);
      }
      v16 = *(_QWORD *)(v5 + 128);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v5 + 136);
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
              v16 = *(_QWORD *)(v5 + 128);
            }
          }
        }
        *(_QWORD *)(v5 + 136) = 0;
        qfree(v16);
      }
      sub_255050(v5 + 16, *(double *)v8.m128i_i64);
      j__qfree(v5);
    }
    *a1 = v6;
    return a1;
  }
  else
  {
    v22 = a2[1].m128i_i64[0];
    v6->m128i_i32[2] = 1;
    v6[1].m128i_i64[1] = 0;
    v6[1].m128i_i64[0] = v22;
    v6->m128i_i64[0] = (__int64)off_4E6D98;
    v6[2].m128i_i64[0] = v3;
    *a1 = v6;
    return a1;
  }
}

