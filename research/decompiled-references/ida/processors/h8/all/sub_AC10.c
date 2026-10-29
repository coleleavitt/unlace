__int64 __fastcall sub_AC10(__int64 a1, __int64 a2)
{
  unsigned int next_byte; // eax
  unsigned __int64 v3; // rbx
  unsigned __int8 v4; // cl
  __int64 v5; // rax
  char v7; // bl
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r13
  char v11; // r8
  __int16 v12; // ax

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  v3 = next_byte;
  v4 = (unsigned __int8)next_byte >> 4;
  if ( (_BYTE)next_byte != 16 && (_BYTE)next_byte != 21 )
  {
    if ( (unsigned __int8)next_byte > 0x38u || (v5 = 0x121000001000000LL, !_bittest64(&v5, v3)) )
    {
      if ( !(unsigned __int8)sub_A790(a1, a2, (__int64)qword_17120, v4) )
        return 0;
      return *(unsigned __int16 *)(a2 + 26);
    }
  }
  if ( !(unsigned __int8)sub_84D0(a1, a2, a2 + 40, 2 * (v4 != 1) + 280) )
    return 0;
  v7 = v3 & 0xF;
  v8 = insn_get_next_byte();
  v9 = insn_get_next_byte();
  v10 = v9;
  if ( v7 != 5 )
  {
    if ( v7 )
    {
      if ( !(unsigned __int8)sub_6AB0(a2, v8, v9, 1)
        && !(unsigned __int8)sub_79B0(a2, v8, v10)
        && !sub_7C50(a2, v8, v10, 1, 1)
        && !sub_7E30(a2, v8, v10, 32)
        && !sub_A5C0(a1, a2, v8, v10) )
      {
        if ( (~v8 & 0xF0) != 0 )
          return 0;
        v11 = 0;
LABEL_15:
        if ( !(unsigned __int8)sub_8D00(a1, a2, v8, v10, v11) )
          return 0;
      }
    }
    else if ( !sub_7C50(a2, v8, v9, 0, 1) && !sub_7E30(a2, v8, v10, 16) && !sub_A5C0(a1, a2, v8, v10) )
    {
      v11 = 1;
      if ( (~v8 & 0xF0) != 0 )
        return 0;
      goto LABEL_15;
    }
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( (v9 & 0xF) != 0 )
    return 0;
  *(_DWORD *)(a2 + 28) = 1;
  if ( !(unsigned __int8)sub_AAD0(a1, a2, a2 + 80, v8) || v10 > 0x6Fu )
    return 0;
  switch ( v10 >> 4 )
  {
    case 0:
      return 0;
    case 1:
      v12 = 1;
      break;
    case 2:
      v12 = 38;
      break;
    case 3:
      v12 = 80;
      break;
    case 4:
      v12 = 62;
      break;
    case 5:
      v12 = 85;
      break;
    case 6:
      v12 = 4;
      break;
  }
  *(_WORD *)(a2 + 24) = v12;
  return *(unsigned __int16 *)(a2 + 26);
}

