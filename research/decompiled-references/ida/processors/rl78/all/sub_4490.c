__int16 __fastcall sub_4490(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int16 v3; // dx
  __int64 v4; // rbp
  unsigned __int8 v5; // cl
  bool v6; // al
  char v7; // al
  char v8; // al
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  char v11; // al
  unsigned __int8 next_byte; // al
  __int64 v13; // rdx
  bool v14; // cc
  __int64 v15; // rax

  LOWORD(v2) = insn_get_next_byte();
  v3 = asc_A880[(unsigned __int8)v2];
  LOBYTE(v4) = (unsigned __int8)v2 >> 4;
  v5 = v2 & 0xF;
  *(_WORD *)(a2 + 24) = v3;
  if ( (unsigned __int16)v3 > 0x29u )
  {
    if ( (unsigned __int16)(v3 - 42) > 2u )
      return v2;
    LOWORD(v2) = (v5 == 12) + 8;
    goto LABEL_11;
  }
  if ( (unsigned __int16)v3 <= 0x26u )
  {
    if ( (unsigned __int16)(v3 - 36) <= 2u )
    {
      v6 = (v2 & 1) == 0;
      if ( (unsigned __int8)v4 <= 7u )
      {
        if ( v6 )
        {
          next_byte = insn_get_next_byte();
          v13 = (unsigned int)next_byte + 1048064;
          v14 = next_byte <= 0x1Fu;
          v15 = (unsigned int)next_byte + 1048320;
          if ( !v14 )
            v15 = v13;
          *(_QWORD *)(a2 + 56) = v15;
          v11 = 2;
        }
        else
        {
          v11 = 1;
          *(_WORD *)(a2 + 46) = 0;
        }
        *(_BYTE *)(a2 + 41) = v11;
        v4 = (unsigned __int8)v4;
        v8 = *(_BYTE *)(a2 + 72) | 2;
      }
      else
      {
        if ( v6 )
        {
          *(_QWORD *)(a2 + 56) = (unsigned int)(unsigned __int8)insn_get_next_byte() + 1048320;
          v7 = 2;
        }
        else
        {
          *(_WORD *)(a2 + 46) = 11;
          v7 = 4;
        }
        *(_BYTE *)(a2 + 41) = v7;
        v8 = *(_BYTE *)(a2 + 72) | 2;
        v4 = (unsigned __int8)v4 - 8;
      }
      *(_QWORD *)(a2 + 64) = v4;
      *(_BYTE *)(a2 + 72) = v8;
      insn_get_next_byte();
      v9 = extend_sign();
      *(_BYTE *)(a2 + 81) = 7;
      v2 = v9 + *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
      *(_QWORD *)(a2 + 96) = v2;
    }
    return v2;
  }
  v10 = v5 - 7;
  if ( v10 <= 4u )
  {
    LOWORD(v2) = byte_A820[(__int16)v10];
LABEL_11:
    *(_BYTE *)(a2 + 112) |= 4u;
    *(_WORD *)(a2 + 46) = v2;
    *(_BYTE *)(a2 + 41) = 1;
    *(_QWORD *)(a2 + 88) = (unsigned __int8)v4;
    *(_BYTE *)(a2 + 81) = 5;
    return v2;
  }
  if ( under_debugger )
    BUG();
  interr();
  LOWORD(v2) = sub_4660(10421);
  return v2;
}

