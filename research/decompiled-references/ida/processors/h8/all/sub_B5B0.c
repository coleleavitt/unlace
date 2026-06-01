__int64 __fastcall sub_B5B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 next_byte; // r12
  unsigned __int8 v7; // al
  __int16 v9; // dx

  next_byte = insn_get_next_byte();
  v7 = insn_get_next_byte();
  if ( v7 > 0x6Fu )
    return 0;
  switch ( v7 >> 4 )
  {
    case 0:
      return 0;
    case 1:
      v9 = 1;
      break;
    case 2:
      v9 = 38;
      break;
    case 3:
      v9 = 80;
      break;
    case 4:
      v9 = 62;
      break;
    case 5:
      v9 = 85;
      break;
    case 6:
      v9 = 4;
      break;
  }
  *(_WORD *)(a2 + 24) = v9;
  if ( sub_7A80(a2, a3, v7, 0x25u, 0) )
    return sub_AAD0(a1, a2, a4, next_byte);
  else
    return 0;
}

