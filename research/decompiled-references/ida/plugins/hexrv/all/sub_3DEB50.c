__int64 __fastcall sub_3DEB50(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 i; // rbx
  __int64 v7; // rdx
  __m128i v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rdx
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_3DE780((__int64)&v15);
  v2 = _mm_loadu_si128(&v16);
  v3 = *(_QWORD *)(a1 + 248);
  v4 = v15;
  v16 = 0;
  v15 = 0;
  v14 = v2;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 256);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = v3 + 32 * i;
        if ( *(_QWORD *)(v7 + 8) )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
    v8 = _mm_load_si128(&v14);
    v9 = v15;
    *(_QWORD *)(a1 + 248) = v4;
    *(__m128i *)(a1 + 256) = v8;
    if ( v9 )
    {
      v10 = v16.m128i_i64[0];
      if ( v16.m128i_i64[0] )
      {
        v11 = 0;
        do
        {
          v12 = v9 + 32 * v11;
          if ( *(_QWORD *)(v12 + 8) )
          {
            *(_QWORD *)(v12 + 16) = 0;
            qfree();
            v9 = v15;
          }
          ++v11;
        }
        while ( v10 != v11 );
      }
      v16.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) = v4;
    *(__m128i *)(a1 + 256) = v2;
  }
  return a2;
}

