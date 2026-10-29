bool __fastcall sub_80B0(__int64 a1, __int64 a2, int a3)
{
  bool result; // al
  int wide_byte; // ebp
  int v5; // edx

  result = 0;
  if ( *(_QWORD *)(a2 + 16) > 1u && (a3 & 0x10000) != 0 )
  {
    wide_byte = get_wide_byte();
    v5 = get_wide_byte() | (wide_byte << 16);
    result = 1;
    if ( (v5 & 0xF60000) != 0xA60000 )
      return (v5 & 0xFE03E0) == 15073280;
  }
  return result;
}

