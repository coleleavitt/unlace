__int64 __fastcall sub_5120(__int64 a1, __int64 a2, char a3, char a4)
{
  int next_byte; // r15d
  unsigned int v7; // r15d

  next_byte = (unsigned __int8)insn_get_next_byte();
  if ( get_sreg() == 1 )
    v7 = sub_50B0(a1, (unsigned __int8)next_byte & 0xC0) + next_byte;
  else
    v7 = get_sreg() + next_byte;
  *(_BYTE *)(a2 + 1) = 2;
  *(_QWORD *)(a2 + 16) = v7;
  *(_BYTE *)(a2 + 5) = a4;
  *(_BYTE *)(a2 + 33) = a3;
  return v7;
}

