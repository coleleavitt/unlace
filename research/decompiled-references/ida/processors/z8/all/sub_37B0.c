__int64 __fastcall sub_37B0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int16 v7; // bx
  __int64 sreg; // rax
  unsigned __int8 v9; // dl
  int v11; // eax
  __int16 v12; // dx

  v7 = a4;
  if ( a4 )
  {
    *(_BYTE *)(a2 + 5) = 1;
    sreg = get_sreg();
    if ( sreg == -1 )
    {
      v7 = 16;
      goto LABEL_4;
    }
  }
  else
  {
    sreg = get_sreg();
    if ( sreg == -1 )
    {
LABEL_4:
      *(_WORD *)(a2 + 6) = a3 + v7;
      *(_BYTE *)(a2 + 1) = a5 == 0 ? 1 : 9;
      return a5 == 0 ? 1 : 9;
    }
  }
  v9 = sreg;
  v7 *= 16;
  if ( !(_WORD)sreg )
    goto LABEL_4;
  if ( (sreg & 0xF) != 0 || (sreg & 0xF00) == 0 )
  {
    a3 += (((_WORD)sreg << 8) & 0xF00) + (sreg & 0xF0);
  }
  else
  {
    v11 = BYTE1(sreg) & 0xF;
    if ( v11 )
    {
      v12 = v9 >> 4;
      if ( v12 != 15 )
        a3 += 16 * (v11 - 1 + 16 * (unsigned __int16)(v12 + 16));
    }
  }
  *(_QWORD *)(a2 + 16) = a3;
  *(_BYTE *)(a2 + 1) = a5 == 0 ? 2 : 8;
  return a5 == 0 ? 2 : 8;
}

