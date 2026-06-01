__int64 __fastcall sub_130720(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        int a9)
{
  __int64 v11; // rcx

  v11 = a5;
  if ( a5 && (v11 = sub_125000((__int64)a1, a2, a4, a5, a6, 0, *(double *)a7.m128i_i64)) == 0 )
    return 0;
  else
    return (unsigned __int8)sub_12EA80(*(_QWORD *)(a1[4].m128i_i64[0] + 1504), a1, a2, a3, v11, a6, a7, a8, a9);
}

