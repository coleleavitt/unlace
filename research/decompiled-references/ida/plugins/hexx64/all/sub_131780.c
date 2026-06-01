char __fastcall sub_131780(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned int a5,
        __m128i a6,
        __m128 a7)
{
  __int64 v9; // rsi
  char v10; // al

  if ( *(_DWORD *)(a1 + 4) != -1 )
    return sub_131490(a2, nullptr, 0, (__int16 *)a1, a3, a4, a6, a7, a5);
  v9 = a2[12];
  v10 = *(_BYTE *)(v9 + 145);
  if ( v10 )
    v10 = sub_11BB90((unsigned __int8 *)a1, v9, 0, *(double *)a6.m128i_i64);
  return a4 == (unsigned __int8)v10;
}

