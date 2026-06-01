char __fastcall sub_6B050(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  char result; // al
  unsigned __int64 v4; // rdx
  char v5; // dl
  char v6; // dl
  __int16 v7; // dx

  v2 = *(_WORD *)(a1 + 40);
  result = v2 == 271 || v2 == 500;
  if ( result )
  {
    result = 0;
    if ( *(_BYTE *)(a1 + 137) != 5 || *(_QWORD *)(a1 + 144) )
      return result;
    v6 = *(_BYTE *)(a1 + 184) - (v2 == 271);
    if ( v6 != 15 && v6 != 31 )
    {
      if ( v6 == 7 )
        goto LABEL_20;
      return result;
    }
LABEL_12:
    if ( *(_BYTE *)(a1 + 57) != 1 )
      return 0;
    goto LABEL_13;
  }
  if ( v2 == 10 )
  {
    if ( *(_BYTE *)(a1 + 137) != 5 )
      return result;
    v4 = *(_QWORD *)(a1 + 144);
    if ( (v4 & (v4 + 1)) != 0 )
      return result;
    if ( v4 <= 0xFF )
      goto LABEL_20;
    if ( v4 > 0xFFFF && HIDWORD(v4) )
      return result;
    goto LABEL_12;
  }
  if ( v2 == 255 )
    goto LABEL_12;
  if ( v2 > 0xFFu )
  {
    if ( v2 != 506 )
    {
      if ( v2 > 0x1FAu )
      {
        if ( v2 == 511 && a2 == a1 + 864 && *(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL) )
          return *(_QWORD *)(*(_QWORD *)a2 + 56LL) == *(_QWORD *)(a1 + 32);
        return result;
      }
      if ( v2 != 472 && v2 != 473 )
        return result;
    }
    goto LABEL_12;
  }
  if ( v2 == 32 )
    goto LABEL_12;
  if ( v2 <= 0x20u )
  {
    if ( v2 != 23 && v2 != 30 )
      return result;
    goto LABEL_12;
  }
  if ( v2 == 251 )
  {
LABEL_20:
    if ( *(_BYTE *)(a1 + 57) != 1 )
      return 0;
LABEL_13:
    v5 = *(_BYTE *)(a1 + 97);
    if ( v5 == 4 )
    {
      v7 = *(_WORD *)(a1 + 102);
      if ( v7 != 161 && v7 != 13 && v7 != 158 )
        return 0;
      return set_moved_jpt();
    }
    if ( v5 == 1 )
      return set_moved_jpt();
    return 0;
  }
  return result;
}
