__int64 __fastcall sub_12B320(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4, __m128i a5)
{
  __int64 v6; // rsi

  if ( *(_DWORD *)(a1 + 4) < a4 )
  {
    if ( !under_debugger )
      sub_383060(0xCD77u, *(double *)a5.m128i_i64);
    BUG();
  }
  if ( *(_DWORD *)(a1 + 4) != a4 )
  {
    if ( (v6 = a2[12], *(_BYTE *)(v6 + 145)) && sub_11BB90((unsigned __int8 *)a1, v6, 0, *(double *)a5.m128i_i64)
      || !(unsigned __int8)sub_12AB50((unsigned int **)a1, a2, a4, 1, a5) )
    {
      sub_1207E0((char *)a1, a2, 10, a3, a4, a5);
    }
  }
  return 1;
}

