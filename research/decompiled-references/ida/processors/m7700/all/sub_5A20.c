__int64 __fastcall sub_5A20(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int16 v4; // si
  char *v5; // rax
  unsigned int v6; // edx

  *(_BYTE *)(a1 + 260) = 0;
  next_byte = insn_get_next_byte();
  if ( next_byte )
  {
    if ( next_byte == 66 || (v4 = next_byte, next_byte == 137) )
      v4 = (unsigned __int8)insn_get_next_byte() + (next_byte << 8);
  }
  else
  {
    v4 = 0;
    if ( (unsigned __int8)get_byte() == 0xEA )
    {
      *(_WORD *)(a2 + 24) = 13;
      LOWORD(v6) = *(_WORD *)(a2 + 26) + 1;
      *(_WORD *)(a2 + 26) = v6;
      return (unsigned __int16)v6;
    }
  }
  v5 = sub_5990(a1, v4);
  v6 = 0;
  if ( v5 )
  {
    *(_WORD *)(a2 + 24) = *(_WORD *)v5;
    sub_48F0(a1, a2, *((unsigned int *)v5 + 1));
    LOWORD(v6) = *(_WORD *)(a2 + 26);
    return (unsigned __int16)v6;
  }
  return v6;
}

