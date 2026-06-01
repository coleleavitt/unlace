bool __fastcall sub_122C0(__int64 a1)
{
  __int16 v1; // dx
  bool result; // al

  v1 = *(_WORD *)(a1 + 24);
  result = 1;
  if ( v1 != 158 )
  {
    result = 0;
    if ( v1 == 56 && *(_BYTE *)(a1 + 41) == 1 )
      return *(_WORD *)(a1 + 46) == 10;
  }
  return result;
}

