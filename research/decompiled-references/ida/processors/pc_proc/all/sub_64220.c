__int64 __fastcall sub_64220(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v1 > 0x85u )
  {
    if ( (_WORD)v1 == 167 )
    {
      result = 0;
      if ( (*(_BYTE *)(a1 + 29) & 0x10) == 0 )
        return result;
    }
    else
    {
      result = 0xFFFFFFFFLL;
      if ( (_WORD)v1 != 207 )
        return result;
      result = 0;
      if ( (*(_BYTE *)(a1 + 29) & 0x10) == 0 )
        return result;
    }
    goto LABEL_8;
  }
  if ( (unsigned __int16)v1 > 0x6Au )
  {
    v3 = 67239937;
    if ( !_bittest64(&v3, (unsigned int)(v1 - 107)) )
      return 0xFFFFFFFFLL;
    result = 0;
    if ( (*(_BYTE *)(a1 + 29) & 0x10) == 0 )
      return result;
LABEL_8:
    result = 0;
    if ( (*(_BYTE *)(a1 + 44) & 8) != 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 84) & 8) != 0 )
    {
      if ( *(_BYTE *)(a1 + 81) )
        return result;
      if ( (_WORD)v1 != 133 )
        return (_WORD)v1 != 45 || *(_BYTE *)(a1 + 45) != 7;
    }
    else if ( (_WORD)v1 != 133 )
    {
      return 1;
    }
    return *(_BYTE *)(a1 + 85) != 7;
  }
  if ( (_WORD)v1 == 28 )
  {
    result = 0;
    if ( (*(_BYTE *)(a1 + 29) & 0x10) == 0 )
      return result;
    goto LABEL_8;
  }
  if ( (_WORD)v1 != 45 )
    return 0xFFFFFFFFLL;
  result = 0;
  if ( (*(_BYTE *)(a1 + 29) & 0x10) != 0 )
    return (_WORD)v1 != 45 || *(_BYTE *)(a1 + 45) != 7;
  return result;
}

