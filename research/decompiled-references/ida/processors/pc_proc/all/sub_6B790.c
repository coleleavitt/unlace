__int64 __fastcall sub_6B790(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned __int16 v4; // dx

  result = (a2 >> 3) & 7;
  if ( (*(_BYTE *)(a1 + 28) & 0x10) != 0 )
  {
    v3 = (a2 >> 3) & 7 | 8;
    LOWORD(v3) = (char)v3;
    if ( (*(_BYTE *)(a1 + 33) & 2) != 0 )
      result = v3;
  }
  v4 = *(_WORD *)(a1 + 24);
  if ( v4 > 0x5C0u )
  {
    if ( v4 > 0x5F1u )
    {
      if ( (unsigned __int16)(v4 - 1532) > 0xFu )
        return result;
    }
    else if ( v4 <= 0x5EDu )
    {
      return result;
    }
  }
  else if ( v4 <= 0x5BCu )
  {
    if ( v4 > 0x378u )
    {
      if ( (unsigned __int16)(v4 - 993) > 3u )
        return result;
    }
    else if ( v4 <= 0x374u )
    {
      return result;
    }
  }
  if ( (*(_BYTE *)(a1 + 273) & 0x10) != 0 )
    LOWORD(result) = result | 0x10;
  return sub_23710(a1, (__int16)result);
}

