unsigned __int64 __fastcall sub_1CED40(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r15
  const __m128i *v8; // r13
  const __m128i *i; // r15
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(const __m128i **)a1;
  v22 = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0;
  for ( i = &v8[v7]; i != v8; ++v8 )
  {
    v12 = _mm_loadu_si128(v8);
    v13 = a3[1];
    v19 = v12;
    if ( v12.m128i_i64[1] )
    {
      if ( v13 )
      {
        v14 = *a3;
        if ( v19.m128i_i64[0] + v12.m128i_i64[1] - 1 >= *a3 )
        {
          v15 = v14 + v13;
          if ( v15 - 1 >= v19.m128i_i64[0] )
          {
            v16 = a2 + v19.m128i_i64[0];
            v17 = a2 + v19.m128i_i64[0] + v12.m128i_i64[1];
            if ( !__CFADD__(a2 + v19.m128i_i64[0], v12.m128i_i64[1]) && v15 > v17 )
              v15 = a2 + v19.m128i_i64[0] + v12.m128i_i64[1];
            if ( v16 >= v14 )
              v14 = a2 + v19.m128i_i64[0];
            if ( v14 >= v15 )
            {
              v19.m128i_i64[0] += a2;
              v11 = 0;
            }
            else
            {
              v19.m128i_i64[0] = v14;
              v11 = v15 - v14;
            }
            v19.m128i_i64[1] = v11;
            sub_3112F0(&v20, &v19, v16, v17, a5, a6);
          }
        }
      }
    }
  }
  sub_312310(a1, a3);
  sub_3113F0(a1, &v20);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v22 - __readfsqword(0x28u);
}

