__int64 __fastcall sub_6590(__int64 a1, __int64 a2)
{
  char byte; // al
  unsigned int v3; // ecx
  __int64 v4; // rdx

  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 85) = 0;
  *(_BYTE *)(a2 + 125) = 0;
  byte = get_byte();
  v3 = *(_DWORD *)(a1 + 256);
  if ( v3 <= 5 )
  {
    v4 = 1LL << v3;
    if ( ((1LL << v3) & 0xA) != 0 )
    {
      if ( byte != -91 )
        return sub_5950(a1, a2);
      ++*(_WORD *)(a2 + 26);
      return sub_4B30(a1, a2);
    }
    if ( (v4 & 0x14) == 0 )
    {
      if ( (v4 & 0x21) != 0 )
        return sub_5950(a1, a2);
      return 0;
    }
    if ( byte != -91 )
    {
      if ( (byte & 0xFu) <= 5 )
        return sub_5950(a1, a2);
      return sub_4B30(a1, a2);
    }
    ++*(_WORD *)(a2 + 26);
    if ( ((unsigned __int8)get_byte() & 0xFu) > 5 )
      return sub_5950(a1, a2);
  }
  return 0;
}

