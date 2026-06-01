__int64 __fastcall sub_718F0(__int64 a1)
{
  unsigned __int8 byte; // r12
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp

  if ( (unsigned __int8)get_byte() != 0xEB )
    return 0;
  byte = get_byte();
  if ( (unsigned int)((char)byte - 1) > 0xC )
    return 0;
  v3 = a1 + 2;
  v4 = a1 + 2 + byte;
  if ( a1 + 2 < v4 )
  {
    while ( (unsigned __int8)get_byte() == 0x90 )
    {
      if ( ++v3 >= v4 )
        return (unsigned int)byte + 2;
    }
    return 0;
  }
  return (unsigned int)byte + 2;
}
