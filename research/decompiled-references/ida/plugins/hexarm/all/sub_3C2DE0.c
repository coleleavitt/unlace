__int64 __fastcall sub_3C2DE0(
        _QWORD *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9)
{
  const char *v9; // rdx
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v18; // rdx
  __m128i v19; // xmm1
  __int64 v20; // r13
  __int64 i; // rbx
  __int64 v22; // rax
  __m128i v23; // xmm2
  __m128i v24; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v9 = (const char *)a1[32];
  v27 = __readfsqword(0x28u);
  v11 = a1[31];
  v25 = 0;
  v26 = 0;
  v12 = sub_3C2A80(&v25, v11, v9, 0.0, a4, a5, a6, a7, a8, a9);
  v13 = v25;
  v14 = v26;
  if ( v12 )
  {
    v18 = a1[28];
    v19 = (__m128i)_mm_loadh_ps((const double *)&v26 + 1);
    v24 = v19;
    if ( v18 )
    {
      v20 = a1[29];
      if ( v20 )
      {
        for ( i = 0; i != v20; ++i )
        {
          v22 = v18 + 40 * i;
          if ( *(_QWORD *)(v22 + 16) )
          {
            *(_QWORD *)(v22 + 24) = 0;
            qfree();
            v18 = a1[28];
          }
        }
      }
      a1[29] = 0;
      qfree();
      v23 = _mm_load_si128(&v24);
      a1[28] = v13;
      *(__m128i *)(a1 + 29) = v23;
    }
    else
    {
      a1[28] = v25;
      *(__m128i *)(a1 + 29) = v19;
    }
  }
  else
  {
    a2 = -1;
    if ( v25 )
    {
      v15 = v25;
      v16 = 0;
      if ( (_QWORD)v26 )
      {
        do
        {
          if ( *(_QWORD *)(v15 + 16) )
          {
            *(_QWORD *)(v15 + 24) = 0;
            qfree();
          }
          ++v16;
          v15 += 40;
        }
        while ( v14 != v16 );
      }
      qfree();
    }
  }
  return a2;
}

