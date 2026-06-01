__int64 __fastcall sub_3A00(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v3; // al
  __int64 result; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  bool v7; // cc
  unsigned __int16 next_word; // ax
  unsigned __int8 next_byte; // al

  v3 = a3 & 0xF;
  if ( (a3 & 0xF) == 0xE )
  {
    next_byte = insn_get_next_byte();
    *(_BYTE *)(a2 + 1) = 2;
    result = (unsigned int)next_byte + 1048320;
    *(_QWORD *)(a2 + 16) = result;
  }
  else if ( v3 == 15 )
  {
    next_word = insn_get_next_word();
    *(_BYTE *)(a2 + 34) |= 1u;
    *(_BYTE *)(a2 + 1) = 2;
    result = (unsigned int)next_word + 983040;
    *(_QWORD *)(a2 + 16) = result;
  }
  else if ( v3 == 13 )
  {
    v5 = insn_get_next_byte();
    *(_BYTE *)(a2 + 1) = 2;
    v6 = (unsigned int)v5 + 1048064;
    v7 = v5 <= 0x1Fu;
    result = (unsigned int)v5 + 1048320;
    if ( !v7 )
      result = v6;
    *(_QWORD *)(a2 + 16) = result;
  }
  else if ( (a3 & 8) != 0 )
  {
    *(_BYTE *)(a2 + 1) = 4;
    result = *((unsigned __int8 *)&word_A82E + v3 - 8);
    *(_WORD *)(a2 + 6) = result;
    if ( (a3 & 1) == 0 )
    {
      LOBYTE(result) = insn_get_next_byte();
      *(_BYTE *)(a2 + 32) |= 1u;
      result = (unsigned __int8)result;
      *(_QWORD *)(a2 + 16) = (unsigned __int8)result;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_3AE0(10418);
  }
  return result;
}

