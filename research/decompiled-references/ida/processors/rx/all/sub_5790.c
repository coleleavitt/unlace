__int64 __fastcall sub_5790(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v3; // dl
  __int64 result; // rax

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 1;
  v3 = next_byte >> 4;
  *(_WORD *)(a2 + 86) = next_byte & 0xF;
  result = *(unsigned __int16 *)(a2 + 26);
  *(_BYTE *)(a2 + 81) = 1;
  *(_WORD *)(a2 + 46) = v3;
  *(_BYTE *)(a2 + 85) = 1;
  return result;
}

