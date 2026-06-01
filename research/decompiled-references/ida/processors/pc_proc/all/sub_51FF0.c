unsigned __int64 __fastcall sub_51FF0(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 next_fixup_ea; // rax
  bool v6; // zf
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int8 byte; // bl

  v4 = a2;
  next_fixup_ea = get_next_fixup_ea();
  if ( a2 > next_fixup_ea )
    v4 = next_fixup_ea;
  v6 = next_fixup_ea == -1;
  v7 = a1 + 512;
  if ( v6 )
    v4 = a2;
  if ( v7 > v4 )
    v7 = v4;
  if ( a1 >= v7 )
    return 0;
  v8 = a1 + 1;
  byte = get_byte();
  if ( byte )
  {
    if ( a3 )
    {
      if ( (unsigned int)(char)byte <= 0x7F )
      {
        while ( isalnum(byte) || byte == 95 || byte == 46 )
        {
          byte = get_byte();
          if ( !byte )
            return ++v8 - a1;
          ++v8;
          if ( (unsigned int)(char)byte > 0x7F )
            return 0;
        }
      }
    }
    else
    {
      while ( isascii(byte) || strchr(": *&<>[]", (char)byte) )
      {
        byte = get_byte();
        if ( !byte )
          return v8 + 1 - a1;
        ++v8;
      }
    }
    return 0;
  }
  return v8 - a1;
}

