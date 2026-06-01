__int64 __fastcall sub_7DC60(__int64 a1, int a2, __int64 a3, char a4, int a5)
{
  unsigned __int16 v5; // ax
  __int64 v6; // rbp
  char *v7; // rsi
  __int64 v9; // r8

  v5 = *(_WORD *)(a1 + 248);
  if ( v5 == 92 )
  {
    if ( !a4 )
      return 0;
    if ( !a5 )
    {
LABEL_6:
      if ( a3 != -1 )
      {
        v6 = getseg();
        if ( v6 )
        {
          get_sreg();
          if ( *(_QWORD *)(v6 + 48) != get_group_selector() )
          {
            v7 = "ds";
            if ( (*(_BYTE *)(a1 + 253) & 4) != 0 )
              v7 = "ss";
            goto LABEL_25;
          }
        }
      }
      return 0;
    }
    goto LABEL_23;
  }
  if ( v5 > 0x5Cu )
  {
    if ( v5 == 167 || v5 == 207 || v5 == 124 )
    {
LABEL_19:
      if ( !a2 )
        goto LABEL_20;
LABEL_5:
      if ( !a5 )
        goto LABEL_6;
LABEL_23:
      v9 = 8LL * a5;
      goto LABEL_24;
    }
LABEL_15:
    if ( !a4 && *(char *)(a1 + 252) < 0 )
      return 0;
    goto LABEL_5;
  }
  if ( v5 != 28 )
  {
    if ( v5 == 45 )
      goto LABEL_19;
    goto LABEL_15;
  }
  if ( a2 != 1 )
    goto LABEL_5;
LABEL_20:
  v9 = 232;
LABEL_24:
  v7 = *(char **)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + v9);
LABEL_25:
  (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v7, 33);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 58);
  return 1;
}
