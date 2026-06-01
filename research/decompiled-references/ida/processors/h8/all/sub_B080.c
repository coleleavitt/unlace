__int64 __fastcall sub_B080(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v4; // r12

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  if ( next_byte > 0x6Fu )
  {
    *(_WORD *)(a2 + 24) = 54;
    *(_DWORD *)(a2 + 28) = 2;
    if ( !(unsigned __int8)sub_84D0(a1, a2, a2 + 40, 3) )
      return 0;
    v4 = insn_get_next_byte();
    if ( (unsigned __int8)insn_get_next_byte() || !(unsigned __int8)sub_AAD0(a1, a2, a2 + 80, v4) )
      return 0;
  }
  else if ( !(unsigned __int8)sub_A790(a1, a2, (__int64)qword_17020, next_byte >> 4) )
  {
    return 0;
  }
  return *(unsigned __int16 *)(a2 + 26);
}

