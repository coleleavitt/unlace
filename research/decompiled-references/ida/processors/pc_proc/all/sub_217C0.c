unsigned __int8 __fastcall sub_217C0(int a1)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx

  if ( (unsigned __int16)a1 <= 0x38Cu )
  {
    if ( (unsigned __int16)a1 > 0x350u )
    {
      v3 = 0xCC0000CCCCCC033LL;
      result = _bittest64(&v3, (unsigned int)(a1 - 849));
      if ( result )
        return result;
    }
    else if ( (unsigned __int16)(a1 - 794) <= 0x34u )
    {
      v1 = 0x1806660031000FLL;
      result = _bittest64(&v1, (unsigned int)(a1 - 794));
      if ( result )
        return result;
    }
    return (unsigned __int16)(a1 - 1239) <= 0x3Fu;
  }
  if ( (unsigned __int16)a1 > 0x5FBu )
    return (unsigned __int16)(a1 - 1239) <= 0x3Fu;
  if ( (unsigned __int16)a1 > 0x5D7u )
  {
    v4 = 0xAA0002A83LL;
    result = _bittest64(&v4, (unsigned int)(a1 - 1496));
    if ( result )
      return result;
    return (unsigned __int16)(a1 - 1239) <= 0x3Fu;
  }
  if ( (unsigned __int16)a1 <= 0x454u )
  {
    result = 1;
    if ( (unsigned __int16)a1 > 0x452u )
      return result;
    return (unsigned __int16)(a1 - 1239) <= 0x3Fu;
  }
  if ( (unsigned __int16)(a1 - 1360) > 0xDu )
    return (unsigned __int16)(a1 - 1239) <= 0x3Fu;
  v5 = 13059;
  result = _bittest64(&v5, (unsigned int)(a1 - 1360));
  if ( !result )
    return (unsigned __int16)(a1 - 1239) <= 0x3Fu;
  return result;
}

