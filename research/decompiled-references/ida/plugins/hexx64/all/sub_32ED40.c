bool __fastcall sub_32ED40(unsigned int a1, char a2)
{
  bool result; // al

  result = 1;
  if ( a1 > 0x37 )
  {
    if ( a1 != 58 )
    {
      result = 0;
      if ( a2 )
        return a1 - 56 <= 1;
    }
  }
  else if ( a1 <= 0x29 )
  {
    result = 0;
    if ( a2 )
      return a1 - 56 <= 1;
  }
  return result;
}

