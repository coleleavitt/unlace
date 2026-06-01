__int64 __fastcall sub_23A40(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned __int16 v3; // dx
  unsigned int v4; // ecx
  __int64 result; // rax
  int v6; // edx
  unsigned __int16 v7; // dx

  if ( *(_BYTE *)(a2 + 32) )
  {
    v2 = (*(char *)(a2 + 33) >> 3) & 7;
    if ( (*(_DWORD *)(a1 + 28) & 0x10) != 0 && (*(_BYTE *)(a1 + 33) & 2) != 0 )
    {
      v7 = *(_WORD *)(a1 + 24);
      LOBYTE(v4) = (*(char *)(a2 + 33) >> 3) & 7 | 8;
      v2 = (char)v4;
      if ( v7 > 0x5C0u )
      {
        if ( v7 <= 0x5F1u )
        {
          if ( v7 > 0x5EDu )
            goto LABEL_7;
          return (unsigned int)(char)v4;
        }
        if ( (unsigned __int16)(v7 - 1532) > 0xFu )
          return (unsigned int)(char)v4;
      }
      else if ( v7 <= 0x5BCu )
      {
        if ( v7 > 0x378u )
        {
          if ( (unsigned __int16)(v7 - 993) <= 3u )
            goto LABEL_7;
        }
        else if ( v7 > 0x374u )
        {
          goto LABEL_7;
        }
        return (unsigned int)(char)v4;
      }
    }
    else
    {
      v3 = *(_WORD *)(a1 + 24);
      if ( v3 > 0x5C0u )
      {
        if ( v3 > 0x5F1u )
        {
          if ( (unsigned __int16)(v3 - 1532) > 0xFu )
            goto LABEL_10;
        }
        else if ( v3 <= 0x5EDu )
        {
          goto LABEL_10;
        }
      }
      else if ( v3 <= 0x5BCu )
      {
        if ( v3 > 0x378u )
        {
          if ( (unsigned __int16)(v3 - 993) > 3u )
            goto LABEL_10;
        }
        else if ( v3 <= 0x374u )
        {
          goto LABEL_10;
        }
      }
    }
LABEL_7:
    if ( (*(_BYTE *)(a1 + 273) & 0x10) != 0 )
      v2 |= 0x10u;
    v2 = sub_23710(a1, v2);
LABEL_10:
    v4 = v2;
    if ( v2 != 4 )
      return v4;
    return (unsigned int)-1;
  }
  v6 = *(_DWORD *)(a1 + 28) & 0x1018;
  if ( v6 != 4096 && v6 != 8 )
    return (unsigned int)-1;
  switch ( *(_WORD *)(a2 + 6) )
  {
    case 0:
    case 2:
      result = 6;
      break;
    case 1:
    case 3:
      result = 7;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      return (unsigned int)-1;
    default:
      sub_22490();
      result = sub_23C00();
      break;
  }
  return result;
}

