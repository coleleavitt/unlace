__int64 __fastcall sub_28F70(__int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx

  if ( !*(_BYTE *)(a1 + 440) )
    sub_28840(a1);
  v5 = *(_QWORD *)(a1 + 248);
  v6 = v5 + 80LL * *(_QWORD *)(a1 + 256);
  if ( v6 == v5 )
    return 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 32);
    if ( a2 >= v7 && a2 - v7 < *(_QWORD *)(v5 + 40) )
      break;
    v5 += 80;
    if ( v5 == v6 )
      return 0;
  }
  if ( a3 )
    *a3 = *(_DWORD *)(v5 + 72);
  return *(unsigned __int8 *)(v5 + 64);
}

