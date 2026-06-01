bool __fastcall sub_7A70(__int64 a1, int a2)
{
  bool result; // al
  int wide_byte; // edx

  if ( (a2 & 0x10000) == 0 || !*(_WORD *)(a1 + 26) || *(_QWORD *)(a1 + 16) <= 2u )
    return 0;
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
    return 0;
  wide_byte = get_wide_byte();
  result = 1;
  if ( (wide_byte & 0xFF000000) != 0x61000000 )
    return (wide_byte & 0xFDFF0000) == 1746927616;
  return result;
}

