bool __fastcall sub_118880(int a1)
{
  bool result; // al

  result = 0;
  if ( (unsigned int)(a1 - 1) <= 0xF )
    return (a1 & (a1 - 1)) == 0;
  return result;
}

