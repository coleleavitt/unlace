unsigned __int64 __fastcall sub_2D4420(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // rcx
  __int64 v10; // r13
  __int64 v11; // r11
  __m128i *v12; // rbx
  int v13; // eax
  __int64 v15; // [rsp+0h] [rbp-58h]

  v6 = a2;
  v8 = (a2 - 1) / 2;
  if ( a2 > a3 )
  {
    v10 = (a2 - 1) / 2;
    v15 = 88 * a5;
    while ( 1 )
    {
      v12 = (__m128i *)(a1 + 16 * v10);
      if ( !*(_QWORD *)(a6 + 24) )
        std::__throw_bad_function_call();
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a6 + 32))(
              a6 + 8,
              *(_QWORD *)(*(_QWORD *)a6 + 24 * v12->m128i_i64[0] + 16) + 88 * v12->m128i_i64[1],
              *(_QWORD *)(*(_QWORD *)a6 + 24 * a4 + 16) + v15,
              v8);
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
      v11 = v6;
      v6 = v10;
      *(__m128i *)(a1 + 16 * v11) = _mm_loadu_si128(v12);
      if ( a3 >= v10 )
        goto LABEL_11;
      v10 = (v10 - 1) / 2;
    }
  }
  v12 = (__m128i *)(a1 + 16 * v6);
LABEL_11:
  v12->m128i_i64[0] = a4;
  v12->m128i_i64[1] = a5;
  return a5;
}

