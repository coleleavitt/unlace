unsigned __int64 __fastcall sub_2DA6C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  __int64 v10; // r12
  __int64 v11; // r11
  __m128i *v12; // rbx
  int v13; // eax

  v8 = (a2 - 1) / 2;
  if ( a2 > a3 )
  {
    v10 = 56 * a5;
    while ( 1 )
    {
      v12 = (__m128i *)(a1 + 16 * v8);
      if ( !*(_QWORD *)(a6 + 24) )
        std::__throw_bad_function_call();
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a6 + 32))(
              a6 + 8,
              *(_QWORD *)(*(_QWORD *)a6 + 24 * v12->m128i_i64[0] + 16) + 56 * v12->m128i_i64[1],
              v10 + *(_QWORD *)(*(_QWORD *)a6 + 24 * a4 + 16));
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
          v12 = (__m128i *)(a1 + 16 * a2);
          goto LABEL_11;
        }
      }
      else if ( a4 >= v12->m128i_i64[0] )
      {
        goto LABEL_13;
      }
      v11 = a2;
      a2 = v8;
      *(__m128i *)(a1 + 16 * v11) = _mm_loadu_si128(v12);
      if ( a3 >= v8 )
        goto LABEL_11;
      v8 = (v8 - 1) / 2;
    }
  }
  v12 = (__m128i *)(a1 + 16 * a2);
LABEL_11:
  v12->m128i_i64[0] = a4;
  v12->m128i_i64[1] = a5;
  return a5;
}

