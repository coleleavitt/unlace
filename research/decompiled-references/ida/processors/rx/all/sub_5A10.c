__int64 __fastcall sub_5A10(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 next_byte; // al

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 1;
  *(_WORD *)(a2 + 86) = next_byte & 0xF;
  *(_WORD *)(a2 + 46) = next_byte >> 4;
  sub_5960(a1, a2, a2 + 40, a3);
  return *(unsigned __int16 *)(a2 + 26);
}

