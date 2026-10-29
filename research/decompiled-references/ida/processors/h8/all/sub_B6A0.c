__int64 __fastcall sub_B6A0(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // r12

  next_byte = insn_get_next_byte();
  *(_WORD *)(a2 + 24) = 54;
  if ( (unsigned __int8)sub_84D0(a1, a2, a2 + 40, 2) )
    return sub_AAD0(a1, a2, a2 + 80, next_byte);
  else
    return 0;
}

