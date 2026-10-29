__int64 __fastcall sub_AC90(char a1, char a2)
{
  unsigned __int8 v2; // di
  __int64 result; // rax

  v2 = a2 & 0x80 | a1 & 0x53;
  if ( v2 == 0x80 )
    return 108;
  if ( v2 > 0x80u )
  {
    result = 110;
    if ( v2 != 0xC0 )
    {
      result = 114;
      if ( v2 != 0xD0 )
      {
        result = 0xFFFFFFFFLL;
        if ( v2 == 0x90 )
          return 112;
      }
    }
  }
  else
  {
    result = 109;
    if ( v2 != 64 )
    {
      if ( v2 > 0x40u )
      {
        result = 0xFFFFFFFFLL;
        if ( v2 == 80 )
          return 113;
      }
      else
      {
        result = 107;
        if ( v2 )
        {
          result = 0xFFFFFFFFLL;
          if ( v2 == 16 )
            return 111;
        }
      }
    }
  }
  return result;
}

