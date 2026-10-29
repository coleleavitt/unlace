__int64 __fastcall sub_48240(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int16 v5; // ax
  __int64 v6; // rbp
  __int64 insn; // r15

  v5 = *(_WORD *)(a2 + 24);
  if ( v5 != 86 )
  {
    if ( v5 == 79 && (*(_WORD *)(a2 + 28) & 0x387) == 0 )
    {
      v6 = sub_80350(a1, a2, a2 + 40);
      goto LABEL_7;
    }
    return -1;
  }
  if ( (*(_WORD *)(a2 + 28) & 0x387) != 0 )
    return -1;
  v6 = sub_80350(a1, a2, a2 + 40);
  insn = decode_prev_insn();
  if ( insn == -1 || *(_WORD *)(a2 + 24) != 85 || (*(_WORD *)(a2 + 28) & 0x387) != 0 || a4 != sub_80350(a1, a2, a2 + 40) )
  {
    decode_insn();
    return -1;
  }
  *a3 = insn;
LABEL_7:
  if ( v6 != -1 )
    *a3 = decode_prev_insn();
  return v6;
}

