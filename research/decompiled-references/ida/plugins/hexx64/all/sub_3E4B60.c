double __fastcall sub_3E4B60(
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
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 i; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __m128i v21; // xmm2
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  const char *v27; // rsi
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+10h] [rbp-48h] BYREF
  __m128i v31; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  sub_2B4E70((__int64)"Stock comments: detected corruption during %s, rebuilding and refreshing", a3);
  netnode_kill();
  netnode_check();
  sub_3E3A00((__int64)&v30);
  v14 = _mm_loadu_si128(&v31);
  v15 = a1[15].m128i_i64[1];
  v16 = v30;
  v31 = 0;
  v30 = 0;
  v29 = v14;
  if ( v15 )
  {
    v17 = a1[16].m128i_i64[0];
    if ( v17 )
    {
      for ( i = 0; i != v17; ++i )
      {
        v19 = v15 + 32 * i;
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
        {
          *(_QWORD *)(v19 + 16) = 0;
          qfree(v20);
          v15 = a1[15].m128i_i64[1];
        }
      }
    }
    a1[16].m128i_i64[0] = 0;
    qfree(v15);
    v21 = _mm_load_si128(&v29);
    v22 = v30;
    a1[15].m128i_i64[1] = v16;
    a1[16] = v21;
    if ( v22 )
    {
      v23 = v31.m128i_i64[0];
      if ( v31.m128i_i64[0] )
      {
        v24 = 0;
        do
        {
          v25 = v22 + 32 * v24;
          v26 = *(_QWORD *)(v25 + 8);
          if ( v26 )
          {
            *(_QWORD *)(v25 + 16) = 0;
            qfree(v26);
            v22 = v30;
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      v31.m128i_i64[0] = 0;
      qfree(v22);
    }
  }
  else
  {
    a1[15].m128i_i64[1] = v16;
    a1[16] = v14;
  }
  v27 = s1;
  if ( a1[1].m128i_i64[0] )
    v27 = (const char *)a1->m128i_i64[1];
  return callui(78, v27, callui, v11, v12, v13, a7, a8, a9, a10);
}

