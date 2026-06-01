__int64 __fastcall sub_E7E0(__int64 a1, unsigned int *a2)
{
  unsigned __int8 byte; // al
  unsigned int v3; // edx
  unsigned int v5; // edx

  byte = get_byte();
  v3 = *(_DWORD *)(a1 + 4328);
  if ( v3 <= 5 )
  {
    if ( v3 > 3 )
      return sub_B690(byte, *a2);
  }
  else if ( v3 == 6 )
  {
    return sub_DAC0(byte);
  }
  if ( (byte & 0xB7) != 0xA2 )
    return byte & 1;
  v5 = 1;
  if ( (byte & 0x40) != 0 )
    return byte & 1;
  return v5;
}

