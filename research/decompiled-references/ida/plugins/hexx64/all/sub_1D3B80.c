unsigned __int64 __fastcall sub_1D3B80(__int64 *a1, __int64 a2, __m128i *a3, double a4, __m128 a5)
{
  __int64 v6; // r15
  const __m128i *v7; // r13
  const __m128i *i; // r15
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128i v18; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v6 = a1[1];
  v7 = (const __m128i *)*a1;
  v21 = __readfsqword(0x28u);
  v20 = 0;
  v19 = nullptr;
  for ( i = &v7[v6]; i != v7; ++v7 )
  {
    v11 = _mm_loadu_si128(v7);
    v12 = a3->m128i_u64[1];
    v18 = v11;
    if ( v11.m128i_i64[1] )
    {
      if ( v12 )
      {
        v13 = a3->m128i_i64[0];
        if ( (unsigned __int64)(v18.m128i_i64[0] + v11.m128i_i64[1] - 1) >= a3->m128i_i64[0] )
        {
          v14 = v13 + v12;
          if ( v14 - 1 >= v18.m128i_i64[0] )
          {
            if ( !__CFADD__(a2 + v18.m128i_i64[0], v11.m128i_i64[1]) && v14 > a2 + v18.m128i_i64[0] + v11.m128i_i64[1] )
              v14 = a2 + v18.m128i_i64[0] + v11.m128i_i64[1];
            if ( a2 + v18.m128i_i64[0] >= v13 )
              v13 = a2 + v18.m128i_i64[0];
            if ( v13 >= v14 )
            {
              v18.m128i_i64[0] += a2;
              v10 = 0;
            }
            else
            {
              v18.m128i_i64[0] = v13;
              v10 = v14 - v13;
            }
            v18.m128i_i64[1] = v10;
            sub_316BB0((__int64 *)&v19, &v18, *(double *)v11.m128i_i64, a5);
          }
        }
      }
    }
  }
  sub_317BD0(a1, a3);
  sub_316CB0(a1, &v19, v15, v16);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree((__int64)v19);
  }
  return v21 - __readfsqword(0x28u);
}

