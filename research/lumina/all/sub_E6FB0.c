__int64 __fastcall sub_E6FB0(_BYTE *a1, unsigned __int8 *a2, _BYTE *a3, _BYTE *a4)
{
  __int64 v4; // r11
  __int64 v5; // rbp
  _BYTE *v6; // r9
  unsigned __int8 **v8; // r8
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rsi

  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( (v5 & 0x10000001) == 1 || (*(_BYTE *)(v4 + 198) & 2) != 0 || !byte_241489 )
    return 0;
  v6 = a4;
  if ( *(_BYTE *)(v4 + 197) )
  {
    v8 = *(unsigned __int8 ***)(v4 + 200);
    if ( *v8 && !(unsigned int)sub_CA2B0(a3, *v8) )
    {
      v9 = v8[1];
      if ( a2 )
      {
        if ( v9 && !(unsigned int)sub_CA2B0(a2, v9) )
        {
LABEL_10:
          v10 = v8[2];
          if ( v6 )
          {
            if ( v10 && !(unsigned int)sub_CA2B0(v6, v10) )
              return 0;
          }
          else if ( !v10 )
          {
            return 0;
          }
        }
      }
      else if ( !v9 )
      {
        goto LABEL_10;
      }
    }
    sub_DBD10((__int64)a1, "", a3, a4, v8, v6);
    return 1;
  }
  if ( (a1[30] || !a2 || (unsigned int)sub_CA590(a2, "sqlite_", 7))
    && ((v5 & 0x10000000) == 0
     || *(_QWORD *)(v4 + 560)
     || *(_DWORD *)(v4 + 220)
     || *(int *)(v4 + 532) > 0 && !*(_QWORD *)(v4 + 568)
     || !(unsigned int)sub_D47E0(v4, (char *)a2)) )
  {
    return 0;
  }
  sub_DBD10((__int64)a1, "object name reserved for internal use: %s", (const char *)a2);
  return 1;
}
