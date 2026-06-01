__int64 __fastcall sub_130580(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v14; // r9
  __int64 v15; // rax

  v14 = a10;
  if ( a6 && (v15 = sub_125000((__int64)a2, a3, a5, a6, a9, a10, *(double *)a7.m128i_i64), v14 = a10, (a6 = v15) == 0) )
    return 0;
  else
    return sub_130480(a1, a2, a3, a4, a6, a9, a7, a8, v14, a11);
}

