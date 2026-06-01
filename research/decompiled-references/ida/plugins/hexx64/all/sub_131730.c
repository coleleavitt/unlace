char __fastcall sub_131730(
        unsigned __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9)
{
  __int64 v10; // rsi

  if ( *(_DWORD *)(a4 + 4) != -1 )
    return sub_131490(a1, a2, a3, (__int16 *)a4, a5, a6, a7, a8, a9);
  v10 = a1[12];
  if ( *(_BYTE *)(v10 + 145) )
    return sub_11BB90((unsigned __int8 *)a4, v10, 0, *(double *)a7.m128i_i64) == (char)a6;
  else
    return a6 == 0;
}

