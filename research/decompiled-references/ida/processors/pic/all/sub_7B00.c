bool __fastcall sub_7B00(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  __int16 v5; // ax
  __int16 wide_byte; // ax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  if ( (a3 & 0x10000) == 0 )
    return 0;
  v4 = *(_BYTE *)(a1 + 246);
  if ( v4 == 1 )
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      wide_byte = get_wide_byte();
      if ( (wide_byte & 0x3B00) != 0xB00 )
        return (wide_byte & 0x3800) == 6144;
      return 1;
    }
  }
  else if ( v4 == 2 )
  {
    if ( *(_QWORD *)(a2 + 16) > 1u )
    {
      v7 = (int)(unsigned __int16)get_word() >> 10;
      if ( (v7 & 0x38) == 0x28 )
        return 1;
      v8 = 51152896;
      if ( _bittest64(&v8, v7) )
        return 1;
    }
  }
  else if ( !v4 && *(_QWORD *)(a2 + 16) )
  {
    v5 = get_wide_byte();
    if ( (v5 & 0xEC0) != 0x2C0 )
      return (v5 & 0xE00) == 1536;
    return 1;
  }
  return 0;
}

