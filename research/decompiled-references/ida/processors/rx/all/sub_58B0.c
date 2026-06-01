__int64 __fastcall sub_58B0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v5; // dl
  char v6; // al
  char v7; // dl
  __int64 v8; // rax

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 1;
  *(_WORD *)(a2 + 86) = next_byte & 0xF;
  v5 = next_byte >> 4;
  v6 = a3 & 3;
  *(_BYTE *)(a2 + 81) = 1;
  *(_WORD *)(a2 + 46) = v5;
  *(_BYTE *)(a2 + 85) = 1;
  if ( (a3 & 3) != 3 )
  {
    *(_BYTE *)(a2 + 41) = 4;
    *(_BYTE *)(a2 + 45) = 2;
    *(_BYTE *)(a2 + 72) = 42;
    *(_BYTE *)(a2 + 73) = (a3 >> 6) + 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        LOBYTE(v8) = insn_get_next_byte();
        v7 = *(_BYTE *)(a2 + 73);
        v8 = (unsigned __int8)v8;
        if ( v7 != 3 )
        {
LABEL_5:
          if ( ((v7 - 2) & 0xFD) == 0 )
            v8 *= 2;
          goto LABEL_7;
        }
      }
      else
      {
        LOWORD(v8) = insn_get_next_word();
        v7 = *(_BYTE *)(a2 + 73);
        v8 = (unsigned __int16)v8;
        if ( v7 != 3 )
          goto LABEL_5;
      }
      v8 *= 4;
LABEL_7:
      *(_QWORD *)(a2 + 48) = v8;
    }
  }
  return *(unsigned __int16 *)(a2 + 26);
}

