__int64 __fastcall sub_3DF8E0(
        __m128i *a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v13; // xmm1
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 i; // rbx
  __int64 v18; // rax
  __m128i v19; // xmm2
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  const char *v24; // rsi
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+10h] [rbp-48h] BYREF
  __m128i v28; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  sub_2B0270((__int64)"Stock comments: detected corruption during %s, rebuilding and refreshing", a3);
  netnode_kill();
  netnode_check();
  sub_3DE780((__int64)&v27);
  v13 = _mm_loadu_si128(&v28);
  v14 = a1[15].m128i_i64[1];
  v15 = v27;
  v28 = 0;
  v27 = 0;
  v26 = v13;
  if ( v14 )
  {
    v16 = a1[16].m128i_i64[0];
    if ( v16 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v18 = v14 + 32 * i;
        if ( *(_QWORD *)(v18 + 8) )
        {
          *(_QWORD *)(v18 + 16) = 0;
          qfree();
          v14 = a1[15].m128i_i64[1];
        }
      }
    }
    a1[16].m128i_i64[0] = 0;
    qfree();
    v19 = _mm_load_si128(&v26);
    v20 = v27;
    a1[15].m128i_i64[1] = v15;
    a1[16] = v19;
    if ( v20 )
    {
      v21 = v28.m128i_i64[0];
      if ( v28.m128i_i64[0] )
      {
        v22 = 0;
        do
        {
          v23 = v20 + 32 * v22;
          if ( *(_QWORD *)(v23 + 8) )
          {
            *(_QWORD *)(v23 + 16) = 0;
            qfree();
            v20 = v27;
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      v28.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    a1[15].m128i_i64[1] = v15;
    a1[16] = v13;
  }
  v24 = s1;
  if ( a1[1].m128i_i64[0] )
    v24 = (const char *)a1->m128i_i64[1];
  return callui(78, v24, callui, v10, v11, v12, a7, a8, a9, a10);
}

