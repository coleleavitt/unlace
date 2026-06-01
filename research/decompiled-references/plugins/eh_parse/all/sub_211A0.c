__int64 __fastcall sub_211A0(__int64 a1, char *a2)
{
  char v2; // al
  unsigned int v3; // edx
  char v5; // al

  v2 = byte_278E0[(unsigned __int8)get_byte(a1)];
  v3 = 1;
  *a2 = v2;
  if ( (unsigned __int8)v2 <= 0xAu )
    return v3;
  if ( (unsigned __int8)v2 > 0x13u )
  {
    LOBYTE(v3) = (unsigned __int8)v2 > 0x15u;
    v3 += 3;
    return v3;
  }
  if ( v2 == 14 )
  {
    if ( (unsigned __int8)get_byte(a1 + 1) <= 0xFu )
      return 2;
    v5 = 15;
  }
  else
  {
    if ( v2 != 16 || (unsigned __int8)get_byte(a1 + 1) <= 0xFu )
      return 2;
    v5 = 17;
  }
  *a2 = v5;
  return 2;
}
