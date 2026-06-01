signed __int64 __fastcall sub_2709D0(
        const __m128i *a1,
        __m128i *a2,
        unsigned __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6)
{
  signed __int64 result; // rax
  __m128i *v9; // rbx
  __int64 v10; // r15
  __int64 i; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int128 v15; // xmm0

  result = (char *)a2 - (char *)a1;
  v9 = a2;
  if ( (char *)a2 - (char *)a1 > 32 )
  {
    v10 = result >> 5;
    for ( i = ((result >> 5) - 2) / 2; ; --i )
    {
      result = sub_2707B0(
                 (__int64)a1,
                 i,
                 v10,
                 a4,
                 a5,
                 a6,
                 (__int128)_mm_loadu_si128(&a1[2 * i]),
                 (__int128)_mm_loadu_si128(&a1[2 * i + 1]));
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    do
    {
      while ( 1 )
      {
        result = a4((__int64)v9, (__int64)a1);
        if ( (_BYTE)result )
          break;
        v9 += 2;
        if ( (unsigned __int64)v9 >= a3 )
          return result;
      }
      v14 = (__int128)_mm_loadu_si128(v9);
      v15 = (__int128)_mm_loadu_si128(v9 + 1);
      *v9 = _mm_loadu_si128(a1);
      v9 += 2;
      v9[-1] = _mm_loadu_si128(a1 + 1);
      result = sub_2707B0((__int64)a1, 0, ((char *)a2 - (char *)a1) >> 5, a4, v12, v13, v14, v15);
    }
    while ( (unsigned __int64)v9 < a3 );
  }
  return result;
}

