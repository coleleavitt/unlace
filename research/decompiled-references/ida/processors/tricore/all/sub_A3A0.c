__int64 __fastcall sub_A3A0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  char v3; // al
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rax

  v2 = *(_WORD *)(a1 + 40);
  if ( v2 == 107 )
  {
    if ( *(_BYTE *)(a1 + 49) == 7 || *(_BYTE *)(a1 + 97) != 1 )
      return 0;
LABEL_12:
    v6 = a1 + 96;
    v7 = a1 + 56;
    return set_moved_jpt(a1, v7, v6, a2, 10, 10);
  }
  if ( v2 != 177 )
  {
    if ( v2 != 84 )
      return 0;
    v3 = *(_BYTE *)(a1 + 97);
    if ( v3 == 4 )
    {
      if ( (*(_BYTE *)(a1 + 128) & 0x26) != 0x20 )
        return 0;
    }
    else if ( v3 != 2 )
    {
      return 0;
    }
    goto LABEL_12;
  }
  v5 = *(_BYTE *)(a1 + 97);
  if ( v5 == 4 )
  {
    if ( (*(_BYTE *)(a1 + 128) & 0x26) != 0x20 )
      return 0;
  }
  else if ( v5 != 2 )
  {
    return 0;
  }
  v6 = a1 + 56;
  v7 = a1 + 96;
  return set_moved_jpt(a1, v7, v6, a2, 10, 10);
}

