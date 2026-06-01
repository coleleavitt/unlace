_BOOL8 __fastcall sub_15320(__int64 a1)
{
  char byte; // al
  unsigned int v2; // edx
  _BOOL4 v3; // ecx

  byte = get_byte();
  v2 = *(_DWORD *)(a1 + 4328);
  if ( v2 <= 5 )
  {
    v3 = byte == -34;
    if ( v2 > 3 )
      return v3;
  }
  else
  {
    v3 = byte == -97;
    if ( v2 == 6 )
      return v3;
  }
  return byte == 4;
}

