__int64 __fastcall sub_A6B0(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  char v3; // cl
  char v4; // r14
  char v5; // bp

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  v3 = *(_BYTE *)(a2 + 26);
  *(_BYTE *)(a2 + 41) = 2;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 42) = v3 - 1;
  *(_QWORD *)(a2 + 56) = next_byte;
  *(_BYTE *)(a2 + 72) = 1;
  v4 = insn_get_next_byte();
  v5 = insn_get_next_byte();
  if ( sub_7C50(a2, v4, v5, 0, 1) || sub_A5C0(a1, a2, v4, v5) || sub_7E30(a2, v4, v5, 16) )
    return *(unsigned __int16 *)(a2 + 26);
  if ( (~v4 & 0xF0) != 0 )
    return 0;
  if ( (unsigned __int8)sub_8D00(a1, a2, v4, v5, 1) )
    return *(unsigned __int16 *)(a2 + 26);
  return 0;
}

