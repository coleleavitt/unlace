__int64 __fastcall sub_9290(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  char next_byte; // al
  unsigned __int8 v7; // al
  unsigned __int8 v8; // dl
  char v9; // al
  __int64 result; // rax
  unsigned __int8 v11; // al

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  if ( next_byte == 112 )
  {
    result = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = a3;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 224) & 8) != 0 )
    {
      *(_WORD *)(a2 + 24) = a4;
      v7 = *(_BYTE *)(a1 + 227);
      v8 = v7 >> 4;
      if ( v7 <= 0x3Fu )
      {
        if ( v8 )
        {
          v11 = v7 & 0xF;
          *(_BYTE *)(a2 + 41) = 8;
          *(_BYTE *)(a2 + 72) = v8 + 1;
          if ( v11 >= v8 )
          {
            *(_BYTE *)(a2 + 45) = 9;
            *(_WORD *)(a2 + 46) = v11 - v8 + 32;
            return *(unsigned __int16 *)(a2 + 26);
          }
          *(_BYTE *)(a2 + 45) = 9;
        }
        else
        {
          v9 = sub_84D0(a1, a2, a2 + 40, 11);
          *(_BYTE *)(a2 + 45) = 9;
          if ( v9 )
            return *(unsigned __int16 *)(a2 + 26);
        }
      }
    }
    return 0;
  }
  return result;
}

