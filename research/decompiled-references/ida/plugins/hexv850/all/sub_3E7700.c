__int64 __fastcall sub_3E7700(__int64 a1, double a2)
{
  _DWORD *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx

  v2 = *(_DWORD **)(a1 + 32);
  if ( *v2 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = (__int64)(v2 + 16);
  }
  else
  {
    if ( *v2 != 2 )
      return 0;
    v3 = *(_QWORD *)(a1 + 40);
    v4 = (__int64)(v2 + 12);
  }
  if ( !(unsigned __int8)sub_3E73E0(v3, v4, a2) )
    sub_3E75D0(v3, v4);
  return 0;
}

