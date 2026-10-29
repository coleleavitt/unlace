__int64 __fastcall sub_1951A0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rsi
  unsigned __int8 *v7; // r13
  __int64 v8; // rbp
  char v10; // dl
  char v11; // al

  v6 = *(_QWORD *)(a1 + 24);
  if ( (*(_QWORD *)(a1 + 40) == 0) != (v6 == 0) )
  {
    if ( !under_debugger )
      sub_383060(0xCD4Au, a4);
    BUG();
  }
  if ( v6 )
  {
    v7 = (unsigned __int8 *)(a3 + 32);
    if ( sub_125B60((unsigned __int8 *)(a3 + 32), v6, 0, a4) )
    {
      if ( (*(_BYTE *)(a3 + 64) & 0xFB) == 1 )
      {
LABEL_5:
        v8 = a3 + 64;
        *(_QWORD *)(a1 + 24) = v8;
        sub_123EA0(a2, (__int64 *)(a1 + 160), v8, 0, 0xFFFF0000, a4);
        sub_123EA0(a2, (__int64 *)(a1 + 200), v8, 0, 0xFFFF0000, a4);
        return 1;
      }
      return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
    }
    v10 = sub_125B60((unsigned __int8 *)(a3 + 32), *(_QWORD *)(a1 + 40) + 64LL, 0, a4);
    v11 = *(_BYTE *)(a3 + 64) & 0xFB;
    if ( v10 )
    {
      if ( v11 == 1 )
        goto LABEL_5;
      return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
    }
    if ( v11 != 1 )
      return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
  }
  else
  {
    v7 = (unsigned __int8 *)(a3 + 32);
    if ( (*(_BYTE *)(a3 + 64) & 0xFB) != 1 )
      return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
  }
  if ( sub_125B60(v7, *(_QWORD *)(a1 + 16), 0, a4) )
  {
    *(_QWORD *)(a1 + 32) = a2;
    *(_QWORD *)(a1 + 40) = a3;
    goto LABEL_5;
  }
  return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
}

