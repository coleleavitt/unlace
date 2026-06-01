void __fastcall sub_1E3D90(__int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  unsigned __int64 v6; // rdx
  _DWORD *v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // rax
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // r13
  __int64 *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rsi
  size_t v18; // rcx
  __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  __m128i *v22; // rbp
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 i; // rbp
  __int64 v26; // rbx
  void *v27; // rax
  __int8 v28; // al
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  size_t n; // [rsp+0h] [rbp-48h]
  __int64 v33; // [rsp+8h] [rbp-40h]

  if ( a2 != a3 )
  {
    v3 = a2;
    v4 = 8LL * a2;
    v6 = a1[4];
    if ( a2 >= v6 )
    {
      do
      {
        v10 = v6;
        v11 = a1[3];
        if ( a1[5] < v6 + 1 )
        {
          v8 = qvector_reserve();
          a1[3] = v8;
          v11 = v8;
        }
        v9 = (_DWORD *)(v11 + 8 * a1[4]);
        *v9 = v10;
        v9[1] = 0;
        v6 = a1[4] + 1;
        a1[4] = v6;
      }
      while ( v3 >= v6 );
      v7 = (_DWORD *)(a1[3] + v4);
    }
    else
    {
      v7 = (_DWORD *)(a1[3] + v4);
      if ( *v7 != a2 )
      {
        if ( !under_debugger )
          sub_37B760(51106);
        BUG();
      }
    }
    v12 = *a1;
    *v7 = a3;
    v13 = (__int64 *)(v12 + 24 * v3);
    v14 = (__int64 *)(v12 + 24LL * a3);
    v7[1] = v14[1];
    v15 = *v13;
    v16 = v13[1] << 6;
    v33 = v16 >> 6;
    if ( v16 >> 6 )
    {
      v17 = *v14;
      v18 = 0;
      v19 = v14[1];
      v20 = (v16 >> 6) + v19;
      v21 = v19 << 6;
      if ( v14[2] < v20 )
      {
        n = v13[1] << 6;
        v30 = qvector_reserve();
        v31 = v14[1];
        v16 = n;
        *v14 = v30;
        v17 = v30;
        v18 = (v31 << 6) - v21;
      }
      v22 = (__m128i *)(v17 + v21);
      v23 = v15 + v16;
      memmove(&v22->m128i_i8[v16], v22, v18);
      for ( ; v23 != v15; v22[-1].m128i_i8[8] = v28 )
      {
        *v22 = _mm_loadu_si128((const __m128i *)v15);
        sub_5DA80(v22[1].m128i_i64, v15 + 16);
        v22[2].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v22[2] + 8) = 0;
        v29 = *(_QWORD *)(v15 + 40);
        if ( v29 )
        {
          v27 = (void *)qalloc_or_throw();
          v22[2].m128i_i64[0] = (__int64)v27;
          v22[3].m128i_i64[0] = v29;
          memcpy(v27, *(const void **)(v15 + 32), 16 * v29);
          v22[2].m128i_i64[1] = v29;
        }
        v28 = *(_BYTE *)(v15 + 56);
        v15 += 64;
        v22 += 4;
      }
      v14[1] += v33;
      v15 = *v13;
    }
    if ( v15 )
    {
      v24 = v13[1];
      if ( v24 )
      {
        for ( i = 0; i != v24; ++i )
        {
          v26 = (i << 6) + v15;
          if ( *(_QWORD *)(v26 + 32) )
          {
            *(_QWORD *)(v26 + 40) = 0;
            qfree();
          }
          qfree();
          v15 = *v13;
        }
      }
      v13[1] = 0;
      qfree();
      *v13 = 0;
      v13[2] = 0;
    }
  }
}

