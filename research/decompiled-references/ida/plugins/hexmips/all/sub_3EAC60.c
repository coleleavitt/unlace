__int64 __fastcall sub_3EAC60(__int64 a1, int a2, int a3, int a4, double a5)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8
  unsigned __int16 v7; // cx
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int v10; // esi

  v5 = *(_WORD *)(a1 + 890);
  v6 = a4;
  if ( ((v5 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC66u, a5);
LABEL_14:
    BUG();
  }
  v7 = *(_WORD *)(a1 + 48);
  if ( v7 > 0x1Du )
    goto LABEL_10;
  v8 = a2;
  v9 = 1LL << v7;
  if ( ((1LL << v7) & 0x9218000) != 0 )
  {
    v10 = 22;
    return sub_3EAB70(a1, v10, v5, a3, v6, v8, 0);
  }
  if ( (v9 & 0x12460000) != 0 )
  {
    v10 = 24;
    return sub_3EAB70(a1, v10, v5, a3, v6, v8, 0);
  }
  if ( (v9 & 0x24980000) == 0 )
  {
LABEL_10:
    if ( !under_debugger )
      sub_37E160(0xCC57u, a5);
    goto LABEL_14;
  }
  v10 = 23;
  return sub_3EAB70(a1, v10, v5, a3, v6, v8, 0);
}

