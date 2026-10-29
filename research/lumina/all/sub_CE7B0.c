__int64 __fastcall sub_CE7B0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  unsigned __int8 v3; // al
  __int64 result; // rax
  int v5; // eax
  int v6; // edx
  unsigned __int8 v7; // cl

  v2 = *(_WORD *)(a1 + 36);
  if ( v2 == 2 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    if ( (v5 & 1) != 0 )
      goto LABEL_20;
    v7 = *(_BYTE *)a2;
    if ( *(_BYTE *)a2 <= 0xA9u )
    {
      if ( v7 < 0xA7u )
      {
        if ( v7 != 59 )
        {
          if ( v7 != 0x8D )
            return 0;
          goto LABEL_20;
        }
        goto LABEL_16;
      }
LABEL_20:
      *(_WORD *)(a1 + 36) = 0;
      return 2;
    }
    if ( v7 == 0xB0 || v7 == 0xB3 )
      goto LABEL_20;
    if ( v7 != 0xAC )
      return 0;
    goto LABEL_12;
  }
  v3 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 <= 0xA9u )
  {
    if ( v3 >= 0xA7u )
    {
      if ( (*(_BYTE *)(a2 + 4) & 8) != 0 )
        return 0;
LABEL_18:
      if ( v2 == 3 && *(_DWORD *)(a2 + 44) == *(_DWORD *)(a1 + 40) )
        return 0;
      goto LABEL_20;
    }
    if ( v3 != 0x8D )
    {
      if ( v3 == 0x9C )
      {
        if ( v2 == 5 )
        {
          *(_BYTE *)a2 = 121;
          return 0;
        }
        if ( v2 != 4 )
          return 0;
        goto LABEL_20;
      }
      if ( v3 != 59 )
        return 0;
LABEL_16:
      v6 = sub_CE770(a2);
      result = 1;
      if ( v6 )
        return result;
      v2 = *(_WORD *)(a1 + 36);
      if ( (*(_BYTE *)(a2 + 4) & 8) != 0 )
      {
        if ( v2 != 2 )
          return 0;
        goto LABEL_20;
      }
      goto LABEL_18;
    }
    goto LABEL_20;
  }
  if ( v3 == 0xB0 || v3 == 0xB3 )
    goto LABEL_20;
  if ( v3 != 0xAC )
    return 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v2 <= 3u )
  {
LABEL_12:
    if ( (v5 & 0x80000) == 0 )
      goto LABEL_20;
  }
  if ( (v5 & 0x1000000) != 0 )
    goto LABEL_20;
  if ( v2 != 5 )
    return 0;
  *(_DWORD *)(a2 + 4) = v5 | 0x40000000;
  return 0;
}
