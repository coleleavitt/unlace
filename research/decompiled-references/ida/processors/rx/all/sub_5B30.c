__int64 __fastcall sub_5B30(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v4; // dl
  __int64 result; // rax

  *(_QWORD *)(a2 + 48) = a3 & 0x1F;
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 0;
  next_byte = insn_get_next_byte();
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 1;
  v4 = next_byte >> 4;
  *(_WORD *)(a2 + 126) = next_byte & 0xF;
  result = *(unsigned __int16 *)(a2 + 26);
  *(_BYTE *)(a2 + 121) = 1;
  *(_WORD *)(a2 + 86) = v4;
  *(_BYTE *)(a2 + 125) = 1;
  return result;
}

