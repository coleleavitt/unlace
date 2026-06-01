__int64 __fastcall sub_A200(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, char a6, char a7)
{
  char v7; // r8

  if ( a7 && (a5 & 0xF) != 0 )
    return 0;
  v7 = a5 & 0xF0;
  if ( v7 == 16 )
  {
    *(_WORD *)(a2 + 24) = 3;
    if ( a4 != 121 )
      goto LABEL_6;
  }
  else
  {
    if ( v7 != 48 )
      return 0;
    *(_WORD *)(a2 + 24) = 82;
    if ( a4 != 121 )
    {
LABEL_6:
      if ( a4 == 122 && (a6 & 4) != 0 )
      {
        *(_DWORD *)(a2 + 28) = 3;
        return sub_84D0(a1, a2, a3, 4);
      }
      return 0;
    }
  }
  if ( (a6 & 2) == 0 )
    return 0;
  *(_DWORD *)(a2 + 28) = 2;
  return sub_84D0(a1, a2, a3, 3);
}

