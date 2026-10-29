__int64 __fastcall sub_A730(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // r12d
  int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rax

  v5 = a3;
  if ( !a4 || (a3 = 0, (a1 & 0x100000) == 0) )
  {
    v6 = (unsigned __int16)insn_get_next_word(a2, a2, a3) << 7;
    v7 = v6 | (a1 >> 20) & 0x7F;
    if ( (v6 & 0x400000) != 0 )
      v7 = v6 | (a1 >> 20) & 0x7F | 0xFF800000;
    v8 = a2 + 40LL * v5;
    *(_BYTE *)(v8 + 72) |= 6u;
    *(_BYTE *)(v8 + 45) = a4;
    *(_WORD *)(v8 + 46) = a1 & 0x1F;
    *(_QWORD *)(v8 + 56) = v7;
    *(_WORD *)(v8 + 41) = 516;
    LODWORD(a3) = 1;
  }
  return (unsigned int)a3;
}

