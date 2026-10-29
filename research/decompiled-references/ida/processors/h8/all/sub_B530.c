__int64 __fastcall sub_B530(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // bp
  unsigned __int8 v3; // r13

  next_byte = insn_get_next_byte();
  v3 = insn_get_next_byte();
  *(_WORD *)(a2 + 24) = 54;
  if ( (unsigned __int8)sub_AAD0(a1, a2, a2 + 40, next_byte) )
    return sub_AAD0(a1, a2, a2 + 80, v3);
  else
    return 0;
}

