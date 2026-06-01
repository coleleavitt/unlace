unsigned __int64 __fastcall sub_2D65B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // r8
  __int64 v11; // r13
  __m128i *v12; // r14
  int v13; // eax
  __int64 v15; // [rsp+0h] [rbp-58h]

  v6 = a2;
  v9 = (a2 - 1) / 2;
  if ( a2 > a3 )
  {
    v11 = (a2 - 1) / 2;
    v15 = 24 * a4;
    while ( 1 )
    {
      v12 = (__m128i *)(a1 + 16 * v11);
      if ( !*(_QWORD *)(a6 + 24) )
        std::__throw_bad_function_call();
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64, __int64))(a6 + 32))(
              a6 + 8,
              *(_QWORD *)(*(_QWORD *)a6 + 24 * v12->m128i_i64[0] + 16) + 272 * v12->m128i_i64[1],
              272 * a5 + *(_QWORD *)(*(_QWORD *)a6 + v15 + 16),
              16 * v11,
              v9);
      if ( v13 )
      {
        if ( v13 <= 0 )
          break;
      }
      else if ( v12->m128i_i64[0] == a4 )
      {
        if ( a5 >= v12->m128i_i64[1] )
        {
LABEL_13:
          v12 = (__m128i *)(a1 + 16 * v6);
          goto LABEL_11;
        }
      }
      else if ( a4 >= v12->m128i_i64[0] )
      {
        goto LABEL_13;
      }
      *(__m128i *)(a1 + 16 * v6) = _mm_loadu_si128(v12);
      v6 = v11;
      if ( a3 >= v11 )
        goto LABEL_11;
      v11 = (v11 - 1) / 2;
    }
  }
  v12 = (__m128i *)(a1 + 16 * v6);
LABEL_11:
  v12->m128i_i64[0] = a4;
  v12->m128i_i64[1] = a5;
  return a5;
}

