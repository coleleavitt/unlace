__int64 __fastcall sub_5A60(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 next_byte; // al
  __int16 v5; // dx
  char v6; // al
  __int64 result; // rax

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 1;
  v5 = next_byte & 0xF;
  *(_WORD *)(a2 + 86) = next_byte >> 4;
  v6 = a3 & 3;
  *(_WORD *)(a2 + 46) = v5;
  if ( (a3 & 3) == 2 )
  {
    *(_BYTE *)(a2 + 81) = 4;
    *(_BYTE *)(a2 + 85) = 1;
    *(_WORD *)(a2 + 112) = 298;
    *(_QWORD *)(a2 + 88) = (unsigned __int16)insn_get_next_word();
    return *(unsigned __int16 *)(a2 + 26);
  }
  else if ( v6 == 3 )
  {
    *(_BYTE *)(a2 + 81) = 1;
    result = *(unsigned __int16 *)(a2 + 26);
    *(_BYTE *)(a2 + 85) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 81) = 4;
    *(_BYTE *)(a2 + 85) = 0;
    *(_WORD *)(a2 + 112) = 298;
    if ( v6 == 1 )
      *(_QWORD *)(a2 + 88) = (unsigned __int8)insn_get_next_byte();
    else
      *(_QWORD *)(a2 + 88) = 0;
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

