void __fastcall sub_69C50(__m128i *a1)
{
  void *v2; // rbx
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 j; // rbp
  __int64 *v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 k; // rbp
  __int64 v21; // rdi
  __int64 v22; // rdi

  v2 = (void *)a1[4].m128i_i64[1];
  if ( v2 )
  {
    sub_83B90(a1[4].m128i_i64[1]);
    operator delete(v2, 0x1D0u);
    a1[4].m128i_i64[1] = 0;
  }
  v3 = (_QWORD *)a1[5].m128i_i64[1];
  if ( v3 )
  {
    sub_83090(a1[5].m128i_i64[1]);
    v4 = v3[41];
    if ( v4 )
    {
      v5 = v3[42];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = (__int64 *)(v4 + 24 * i);
          v8 = *v7;
          if ( *v7 )
          {
            v7[1] = 0;
            qfree(v8);
            v4 = v3[41];
          }
        }
      }
      v3[42] = 0;
      qfree(v4);
    }
    v9 = v3[38];
    if ( v9 )
    {
      v10 = v3[39];
      if ( v10 )
      {
        for ( j = 0; j != v10; ++j )
        {
          v12 = (__int64 *)(v9 + 72 * j);
          v13 = v12[3];
          if ( v13 )
          {
            v12[4] = 0;
            qfree(v13);
          }
          v14 = *v12;
          if ( *v12 )
          {
            v12[1] = 0;
            qfree(v14);
          }
          v9 = v3[38];
        }
      }
      v3[39] = 0;
      qfree(v9);
    }
    v15 = v3[24];
    if ( v15 )
    {
      v3[25] = 0;
      qfree(v15);
    }
    v16 = v3[16];
    if ( v16 )
    {
      v3[17] = 0;
      qfree(v16);
    }
    v17 = v3[13];
    if ( v17 )
    {
      v18 = v3[14];
      if ( v18 )
      {
        v19 = 0;
        for ( k = 0; k != v18; ++k )
        {
          v21 = *(_QWORD *)(v17 + v19 + 16);
          if ( v21 )
          {
            *(_QWORD *)(v17 + v19 + 24) = 0;
            qfree(v21);
            v17 = v3[13];
          }
          v19 += 120;
        }
      }
      v3[14] = 0;
      qfree(v17);
    }
    operator delete(v3, 0x160u);
    a1[5].m128i_i64[1] = 0;
  }
  a1[4].m128i_i64[0] = 0;
  v22 = a1->m128i_i64[0];
  if ( a1->m128i_i64[0] )
  {
    a1->m128i_i64[1] = 0;
    qfree(v22);
    a1->m128i_i64[0] = 0;
    a1[1].m128i_i64[0] = 0;
  }
  a1[3] = _mm_load_si128((const __m128i *)&xmmword_AB160);
}
