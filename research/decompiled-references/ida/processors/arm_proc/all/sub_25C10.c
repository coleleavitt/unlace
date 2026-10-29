__int64 __fastcall sub_25C10(unsigned __int16 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  if ( a1 > 0x1E9u )
  {
    if ( a1 == 865 )
    {
      return 2;
    }
    else if ( a1 > 0x361u )
    {
      result = 3;
      if ( a1 != 871 )
        return (unsigned int)(a1 == 872) + 1;
    }
    else if ( a1 > 0x304u )
    {
      return 2 * (unsigned int)(a1 == 864) + 1;
    }
    else
    {
      result = 2;
      if ( a1 <= 0x300u )
        return (unsigned __int16)(a1 - 634) < 8u ? 3 : 1;
    }
  }
  else if ( a1 > 0x1D7u )
  {
    result = 3;
    v3 = 1LL << ((unsigned __int8)a1 + 40);
    if ( (v3 & 0x15505) == 0 )
      return (unsigned int)((v3 & 0x2AA0A) != 0) + 1;
  }
  else if ( a1 > 0x58u )
  {
    if ( a1 > 0x19Fu )
    {
      return (unsigned int)(a1 == 417) + 1;
    }
    else
    {
      result = 2;
      if ( a1 <= 0x19Bu )
      {
        if ( a1 > 0x156u )
          return 2 * (unsigned int)(a1 == 344) + 1;
        else
          return a1 < 0x153u ? 1 : 3;
      }
    }
  }
  else if ( a1 <= 0x1Du )
  {
    return 1;
  }
  else
  {
    result = 3;
    v2 = 1LL << ((unsigned __int8)a1 - 30);
    if ( (v2 & 0x180000000080003LL) == 0 )
      return (unsigned int)((v2 & 0x600020000000004LL) != 0) + 1;
  }
  return result;
}

