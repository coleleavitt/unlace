bool __fastcall sub_246F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // edx
  bool result; // al

  v4 = *(_BYTE *)(a2 + 1);
  if ( v4 == 1 )
    return *(_WORD *)(a2 + 6) <= 0x1Fu;
  if ( v4 != 4 )
    return 0;
  v5 = *(unsigned __int16 *)(a2 + 6);
  result = 1;
  if ( v5 != 2 )
  {
    result = 0;
    if ( a4 )
      return (v5 == 8) & (*(_BYTE *)(a4 + 16) >> 4);
  }
  return result;
}

