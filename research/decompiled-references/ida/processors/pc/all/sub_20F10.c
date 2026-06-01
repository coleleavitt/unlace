unsigned __int8 __fastcall sub_20F10(int a1)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( (unsigned __int16)a1 > 0x5FBu )
  {
    if ( (unsigned __int16)a1 <= 0x738u )
    {
      if ( (unsigned __int16)a1 > 0x725u )
      {
        v5 = 516145;
        result = _bittest64(&v5, (unsigned int)(a1 - 1830));
        if ( result )
          return result;
      }
    }
    else if ( (unsigned __int16)(a1 - 1877) <= 0x39u )
    {
      v4 = 0x218F000018AC0CFLL;
      result = _bittest64(&v4, (unsigned int)(a1 - 1877));
      if ( result )
        return result;
    }
    return (unsigned __int16)(a1 - 1175) <= 0x7Fu;
  }
  if ( (unsigned __int16)a1 > 0x5D5u )
  {
    v6 = 0x3FF000FF0FLL;
    result = _bittest64(&v6, (unsigned int)(a1 - 1494));
    if ( result )
      return result;
    return (unsigned __int16)(a1 - 1175) <= 0x7Fu;
  }
  if ( (unsigned __int16)a1 > 0x38Cu )
  {
    if ( (unsigned __int16)a1 <= 0x454u )
    {
      result = 1;
      if ( (unsigned __int16)a1 > 0x452u )
        return result;
    }
    else if ( (unsigned __int16)(a1 - 1333) <= 0x28u )
    {
      v3 = 0x1FE1E0000FFLL;
      result = _bittest64(&v3, (unsigned int)(a1 - 1333));
      if ( result )
        return result;
    }
    return (unsigned __int16)(a1 - 1175) <= 0x7Fu;
  }
  if ( (unsigned __int16)a1 > 0x384u )
    return 1;
  if ( (unsigned __int16)(a1 - 792) > 0x17u )
    return (unsigned __int16)(a1 - 1175) <= 0x7Fu;
  v1 = 16004159;
  result = _bittest64(&v1, (unsigned int)(a1 - 792));
  if ( !result )
    return (unsigned __int16)(a1 - 1175) <= 0x7Fu;
  return result;
}
