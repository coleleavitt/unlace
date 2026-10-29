char __fastcall sub_131920(
        unsigned __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __m128i a7,
        __m128 a8)
{
  int v8; // eax
  __int64 v11; // rsi
  char v12; // al

  v8 = *(_DWORD *)(a4 + 4);
  if ( v8 != -1 )
    return sub_131490(a1, a2, a3, (__int16 *)a4, 2 * v8, a5, a7, a8, a6);
  v11 = a1[12];
  v12 = *(_BYTE *)(v11 + 145);
  if ( v12 )
    v12 = sub_11BB90((unsigned __int8 *)a4, v11, 0, *(double *)a7.m128i_i64);
  return a5 == (unsigned __int8)v12;
}

