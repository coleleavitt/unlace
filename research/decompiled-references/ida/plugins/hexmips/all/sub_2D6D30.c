unsigned __int64 __fastcall sub_2D6D30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  __int64 v9; // r13
  __int64 v10; // r11
  __m128i *v11; // rbx
  int v12; // eax
  __int64 v14; // [rsp+0h] [rbp-58h]
  __int64 v15; // [rsp+8h] [rbp-50h]

  v6 = a2;
  if ( a2 > a3 )
  {
    v9 = (a2 - 1) / 2;
    v14 = 200 * a5;
    v15 = 24 * a4;
    while ( 1 )
    {
      v11 = (__m128i *)(a1 + 16 * v9);
      if ( !*(_QWORD *)(a6 + 24) )
        std::__throw_bad_function_call();
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a6 + 32))(
              a6 + 8,
              *(_QWORD *)(*(_QWORD *)a6 + 24 * v11->m128i_i64[0] + 16) + 200 * v11->m128i_i64[1],
              *(_QWORD *)(*(_QWORD *)a6 + v15 + 16) + v14);
      if ( v12 )
      {
        if ( v12 <= 0 )
          break;
      }
      else if ( v11->m128i_i64[0] == a4 )
      {
        if ( a5 >= v11->m128i_i64[1] )
        {
LABEL_13:
          v11 = (__m128i *)(a1 + 16 * v6);
          goto LABEL_11;
        }
      }
      else if ( a4 >= v11->m128i_i64[0] )
      {
        goto LABEL_13;
      }
      v10 = v6;
      v6 = v9;
      *(__m128i *)(a1 + 16 * v10) = _mm_loadu_si128(v11);
      if ( a3 >= v9 )
        goto LABEL_11;
      v9 = (v9 - 1) / 2;
    }
  }
  v11 = (__m128i *)(a1 + 16 * v6);
LABEL_11:
  v11->m128i_i64[0] = a4;
  v11->m128i_i64[1] = a5;
  return a5;
}

