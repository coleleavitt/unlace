__int64 __fastcall sub_131830(__int64 a1, unsigned __int64 *a2, unsigned int a3, __m128i a4, __m128 a5)
{
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rsi
  int v8; // eax

  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 != -1 )
    return sub_131490(a2, nullptr, 0, (__int16 *)a1, 2 * v5, 0, a4, a5, a3);
  v7 = a2[12];
  result = 1;
  if ( *(_BYTE *)(v7 + 145) )
  {
    LOBYTE(v8) = sub_11BB90((unsigned __int8 *)a1, v7, 0, *(double *)a4.m128i_i64);
    return v8 ^ 1u;
  }
  return result;
}

