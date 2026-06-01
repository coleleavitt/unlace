__int64 __fastcall sub_50E0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx

  v3 = getseg();
  if ( !v3 )
    return 0;
  v4 = a2 + 11;
  if ( a2 >= 0xFFFFFFFFFFFFFFF5LL )
    return 0;
  v5 = v3;
  if ( v4 >= *(_QWORD *)(v3 + 8) )
    return 0;
  v6 = bin_search();
  if ( v6 == -1 || &dword_0 && !(unsigned __int8)((__int64 (__fastcall *)(__int64, __int64))dword_0)(v6, v5) )
    return 0;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = 0;
  return 1;
}

