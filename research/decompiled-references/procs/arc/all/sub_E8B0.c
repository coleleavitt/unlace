char __fastcall sub_E8B0(__int64 a1)
{
  __int16 v1; // dx
  char result; // al

  v1 = *(_WORD *)(a1 + 24);
  result = 1;
  if ( v1 != 65 )
  {
    if ( v1 == 157 )
    {
      return (*(_BYTE *)(a1 + 64) & 0x40) != 0;
    }
    else
    {
      result = 0;
      if ( v1 == 17 )
        return *(_WORD *)(a1 + 46) == 31;
    }
  }
  return result;
}
