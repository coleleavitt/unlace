__int64 __fastcall sub_3BEA80(
        __m128 *a1,
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
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 i; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+10h] [rbp-50h]
  unsigned __int64 v25; // [rsp+20h] [rbp-40h]

  v9 = (const char *)a1[2].m128_u64[1];
  v25 = __readfsqword(0x28u);
  v11 = a1[2].m128_i64[0];
  v24 = 0;
  v23 = 0;
  v12 = sub_3BE530(&v23, v11, v9, 0.0, a4, a5, a6, a7, a8, a9);
  v13 = v23;
  v14 = v24;
  if ( v12 )
  {
    v18 = a1->m128_u64[1];
    v22 = *((_QWORD *)&v24 + 1);
    if ( v18 )
    {
      v19 = a1[1].m128_u64[0];
      if ( v19 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = v18 + 48 * i;
          if ( *(_QWORD *)(v21 + 16) )
          {
            *(_QWORD *)(v21 + 24) = 0;
            qfree();
            v18 = a1->m128_u64[1];
          }
        }
      }
      a1[1].m128_u64[0] = 0;
      qfree();
    }
    a1->m128_u64[1] = v13;
    a1[1] = _mm_loadh_ps((const double *)&v22);
  }
  else
  {
    if ( v23 )
    {
      v15 = v23;
      v16 = 0;
      if ( (_QWORD)v24 )
      {
        do
        {
          if ( *(_QWORD *)(v15 + 16) )
          {
            *(_QWORD *)(v15 + 24) = 0;
            qfree();
          }
          ++v16;
          v15 += 48LL;
        }
        while ( v14 != v16 );
      }
      qfree();
    }
    return -1;
  }
  return a2;
}

