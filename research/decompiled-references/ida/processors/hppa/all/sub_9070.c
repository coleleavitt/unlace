char __fastcall sub_9070(unsigned int a1)
{
  char result; // al
  unsigned int v2; // edx

  result = 1;
  if ( a1 >> 26 != 57 )
  {
    result = 0;
    if ( a1 >> 26 == 58 )
    {
      v2 = (unsigned __int16)a1 >> 13;
      if ( v2 > 5 )
      {
        return v2 == 7;
      }
      else
      {
        result = 1;
        if ( (a1 & 0x8000) == 0 )
        {
          result = 0;
          if ( v2 != 3 )
            return (a1 & 0x3E00000) != 0;
        }
      }
    }
  }
  return result;
}

