__int64 __fastcall sub_4ED0(__int64 a1)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v2; // bp
  unsigned __int8 v3; // al
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 sreg; // rax

  next_byte = insn_get_next_byte();
  if ( next_byte == 0x87 )
  {
    *(_WORD *)(a1 + 24) = 3;
    goto LABEL_11;
  }
  v2 = next_byte;
  if ( next_byte > 0x87u )
  {
    if ( next_byte == 0x92 )
    {
      *(_WORD *)(a1 + 24) = 195;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      return *(unsigned __int16 *)(a1 + 26);
    }
    if ( next_byte != 0xA7 )
    {
LABEL_13:
      if ( (next_byte & 0x40) != 0 )
      {
        *(_WORD *)(a1 + 24) = 192;
        sreg = get_sreg();
        *(_BYTE *)(a1 + 41) = 5;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 72) = 0;
        *(_DWORD *)(a1 + 28) = (sreg == 0) + 1;
        *(_QWORD *)(a1 + 48) = ((int)v2 >> 4) - 3;
      }
      else
      {
        *(_BYTE *)(a1 + 41) = 5;
        *(_WORD *)(a1 + 24) = 187;
        *(_QWORD *)(a1 + 48) = next_byte >> 4;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 72) = 0;
      }
      return *(unsigned __int16 *)(a1 + 26);
    }
    *(_WORD *)(a1 + 24) = 161;
LABEL_11:
    v5 = get_sreg();
    *(_BYTE *)(a1 + 41) = 1;
    *(_WORD *)(a1 + 46) = 1;
    *(_DWORD *)(a1 + 28) = (v5 == 0) + 1;
    v6 = get_sreg();
    sub_4E70(a1, a1 + 80, v6 == 0 ? 16 : 8);
    return *(unsigned __int16 *)(a1 + 26);
  }
  if ( next_byte == 27 )
  {
    *(_WORD *)(a1 + 24) = 162;
    goto LABEL_7;
  }
  if ( next_byte != 0x82 )
  {
    if ( next_byte == 26 )
    {
      *(_WORD *)(a1 + 24) = 4;
LABEL_7:
      *(_DWORD *)(a1 + 28) = 0;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      v3 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v3;
      result = *(unsigned __int16 *)(a1 + 26);
      *(_BYTE *)(a1 + 112) = 0;
      return result;
    }
    goto LABEL_13;
  }
  result = *(unsigned __int16 *)(a1 + 26);
  *(_WORD *)(a1 + 24) = 188;
  return result;
}

