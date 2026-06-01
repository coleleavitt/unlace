__int64 __fastcall sub_38B0(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 next_byte; // bl
  unsigned int v7; // r15d
  __int64 sreg; // rax
  int v9; // eax
  __int64 result; // rax

  next_byte = insn_get_next_byte();
  if ( (next_byte & 0xF0) == 0xE0 )
    return sub_37B0(a1, a2, next_byte & 0xF, a3, a4);
  v7 = next_byte;
  sreg = get_sreg();
  if ( sreg != -1 && (sreg & 0xF) == 0 && (sreg & 0xF00) != 0 )
  {
    v9 = BYTE1(sreg) & 0xF;
    if ( v9 )
    {
      if ( (int)next_byte >> 4 != 15 )
        v7 = 16 * (v9 - 1 + 16 * (((int)next_byte >> 4) + 16)) + (next_byte & 0xF);
    }
  }
  *(_QWORD *)(a2 + 16) = v7;
  result = a4 == 0 ? 2 : 8;
  *(_BYTE *)(a2 + 1) = a4 == 0 ? 2 : 8;
  if ( a3 )
    *(_BYTE *)(a2 + 5) = 1;
  return result;
}

