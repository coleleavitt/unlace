__int64 __fastcall sub_127850(__int64 a1, unsigned __int64 *a2, unsigned int a3, __int64 a4, __m128i a5)
{
  __int64 v7; // rsi
  unsigned int v8; // r13d
  int v9; // edx

  v7 = a2[12];
  if ( *(_BYTE *)(v7 + 145) )
  {
    v8 = a4;
    if ( sub_11BB90((unsigned __int8 *)a1, v7, 0, *(double *)a5.m128i_i64) )
      return sub_1274C0((unsigned __int8 *)a1, a2, a3, v8, a5);
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( (int)a3 < v9 && a3 )
    return sub_126F10((int *)a1, a2, v9 - a3, a4, *(double *)a5.m128i_i64);
  else
    return 0;
}

