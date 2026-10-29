bool __fastcall sub_6F00(__int64 a1, int a2)
{
  bool result; // al

  result = 1;
  if ( a2 )
  {
    if ( *(_WORD *)(a1 + 24) == 24 )
      return (unsigned __int8)get_byte() != 0xFF;
  }
  return result;
}

