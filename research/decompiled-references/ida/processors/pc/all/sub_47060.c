__int64 __fastcall sub_47060(__int64 a1, __int64 *a2, char a3)
{
  __int16 v4; // ax
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 insn; // rax

  if ( decode_prev_insn() == -1 || (*(_QWORD *)(a1 + 40) & 0xFFFF00000000FF00LL) != 0x1D000000000100LL )
    return (unsigned int)-1;
  v4 = *(_WORD *)(a1 + 24);
  v5 = -1;
  if ( v4 == 134 )
  {
    if ( (*(_WORD *)(a1 + 28) & 0x387) != 0 )
      goto LABEL_5;
    insn = decode_prev_insn();
    if ( insn != -1 && *(_WORD *)(a1 + 24) == 143 && (*(_WORD *)(a1 + 28) & 0x387) == 0 && *(_BYTE *)(a1 + 41) == 1 )
    {
      *a2 = insn;
      return *(unsigned __int16 *)(a1 + 46);
    }
    decode_insn();
    return (unsigned int)-1;
  }
  if ( v4 != 122
    || (*(_WORD *)(a1 + 28) & 0x387) != 0
    || *(_BYTE *)(a1 + 81) != 1
    || (v5 = *(unsigned __int16 *)(a1 + 86), (_WORD)v5 == 1)
    || (_WORD)v5 == 7 )
  {
LABEL_5:
    if ( !a3 )
      return v5;
  }
  v6 = decode_prev_insn();
  if ( v6 != -1
    && *(_WORD *)(a1 + 24) == 122
    && (*(_WORD *)(a1 + 28) & 0x387) == 0
    && *(_BYTE *)(a1 + 41) == 1
    && *(unsigned __int16 *)(a1 + 46) == (__int16)v5
    && *(_BYTE *)(a1 + 81) == 1 )
  {
    *a2 = v6;
    return *(unsigned __int16 *)(a1 + 86);
  }
  else
  {
    decode_insn();
  }
  return v5;
}
