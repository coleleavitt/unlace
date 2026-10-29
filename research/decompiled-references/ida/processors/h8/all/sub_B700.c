__int64 __fastcall sub_B700(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // bp
  unsigned __int8 v3; // r13
  __int16 v5; // ax

  next_byte = insn_get_next_byte();
  v3 = insn_get_next_byte();
  if ( !(unsigned __int8)sub_AAD0(a1, a2, a2 + 80, next_byte) || v3 > 0x6Fu )
    return 0;
  switch ( v3 >> 4 )
  {
    case 0:
      return 0;
    case 1:
      v5 = 1;
      break;
    case 2:
      v5 = 38;
      break;
    case 3:
      v5 = 80;
      break;
    case 4:
      v5 = 62;
      break;
    case 5:
      v5 = 85;
      break;
    case 6:
      v5 = 4;
      break;
  }
  *(_WORD *)(a2 + 24) = v5;
  return sub_84D0(a1, a2, a2 + 40, ((v3 & 8) != 0) + 3);
}

