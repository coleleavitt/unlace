__int64 __fastcall sub_5C60(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int8 v3; // al
  __int64 v5; // r12
  __int64 v6; // rsi

  v3 = *(_BYTE *)(a2 + 1);
  if ( v3 == 7 )
  {
    v6 = map_code_ea();
    goto LABEL_5;
  }
  if ( v3 > 7u )
  {
    if ( v3 != 8 )
      goto LABEL_12;
LABEL_10:
    v6 = *(_QWORD *)(a2 + 16);
    goto LABEL_5;
  }
  if ( v3 == 2 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v6 = 16 * calc_dataseg() + v5;
LABEL_5:
    if ( a3 )
      *a3 = v6;
    return sub_9880(a1, v6);
  }
  if ( v3 == 6 )
    goto LABEL_10;
LABEL_12:
  if ( under_debugger )
    BUG();
  interr();
  return sub_5D00(559);
}

