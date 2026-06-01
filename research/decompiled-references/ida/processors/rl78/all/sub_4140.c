__int64 __fastcall sub_4140(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // dx
  __int64 v4; // r12
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // bp
  unsigned __int16 next_word; // ax
  unsigned __int8 next_byte; // al
  __int64 v10; // rdx
  bool v11; // cc
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  __int64 v15; // rdx

  result = insn_get_next_byte();
  v3 = *((_WORD *)qword_AA80 + (unsigned __int8)result);
  *(_WORD *)(a2 + 24) = v3;
  if ( v3 > 0x1Eu )
  {
    if ( v3 != 31 )
      return result;
    goto LABEL_15;
  }
  if ( v3 > 0x1Cu )
  {
    v6 = (unsigned __int8)result >> 4;
    if ( (result & 7) != 0 )
    {
      if ( (result & 8) != 0 )
      {
        if ( v6 > 7u )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = 0;
          goto LABEL_32;
        }
        result = (unsigned int)(unsigned __int8)insn_get_next_byte() + 1048320;
      }
      else
      {
        if ( v6 > 7u )
        {
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 11;
LABEL_32:
          *(_BYTE *)(a2 + 72) |= 2u;
          result = v6 - 8;
          *(_QWORD *)(a2 + 64) = result;
          return result;
        }
        next_byte = insn_get_next_byte();
        v10 = (unsigned int)next_byte + 1048064;
        v11 = next_byte <= 0x1Fu;
        result = (unsigned int)next_byte + 1048320;
        if ( !v11 )
          result = v10;
      }
      *(_BYTE *)(a2 + 72) |= 2u;
      *(_QWORD *)(a2 + 56) = result;
      *(_BYTE *)(a2 + 41) = 2;
      *(_QWORD *)(a2 + 64) = v6;
      return result;
    }
    if ( v6 <= 7u )
    {
      next_word = insn_get_next_word();
      *(_BYTE *)(a2 + 74) |= 1u;
      *(_BYTE *)(a2 + 72) |= 2u;
      result = (unsigned int)next_word + 983040;
      *(_BYTE *)(a2 + 41) = 2;
      *(_QWORD *)(a2 + 56) = result;
      *(_QWORD *)(a2 + 64) = v6;
      return result;
    }
LABEL_15:
    *(_BYTE *)(a2 + 41) = 9;
    *(_QWORD *)(a2 + 48) = 2;
    return result;
  }
  if ( v3 != 28 )
  {
    if ( v3 <= 0x18u )
      return result;
    *(_BYTE *)(a2 + 41) = 9;
    *(_QWORD *)(a2 + 48) = 2;
    v7 = (unsigned __int8)result >> 4;
    if ( (result & 8) != 0 )
    {
      if ( v7 > 7u )
      {
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = 0;
LABEL_21:
        *(_BYTE *)(a2 + 112) |= 2u;
        *(_QWORD *)(a2 + 104) = v7 - 8;
        return result;
      }
      result = (unsigned int)(unsigned __int8)insn_get_next_byte() + 1048320;
    }
    else
    {
      if ( v7 > 7u )
      {
        *(_BYTE *)(a2 + 81) = 4;
        *(_WORD *)(a2 + 86) = 11;
        goto LABEL_21;
      }
      v12 = insn_get_next_byte();
      v13 = (unsigned int)v12 + 1048064;
      v11 = v12 <= 0x1Fu;
      result = (unsigned int)v12 + 1048320;
      if ( !v11 )
        result = v13;
    }
    *(_BYTE *)(a2 + 112) |= 2u;
    *(_QWORD *)(a2 + 96) = result;
    *(_BYTE *)(a2 + 81) = 2;
    *(_QWORD *)(a2 + 104) = v7;
    return result;
  }
  if ( (result & 8) != 0 )
  {
    if ( ((unsigned __int8)result & 0xFu) > 0xB )
    {
      *(_BYTE *)(a2 + 41) = 9;
      v4 = a2 + 80;
      *(_QWORD *)(a2 + 48) = 2;
    }
    else
    {
      *(_BYTE *)(a2 + 81) = 9;
      v4 = a2 + 40;
      *(_QWORD *)(a2 + 88) = 2;
    }
    v5 = (unsigned __int8)result >> 4;
    if ( (result & 0x80u) != 0LL )
    {
      *(_BYTE *)(v4 + 1) = 1;
      *(_WORD *)(v4 + 6) = 0;
LABEL_9:
      *(_BYTE *)(v4 + 32) |= 2u;
      *(_QWORD *)(v4 + 24) = v5 - 8;
      return result;
    }
    result = (unsigned int)(unsigned __int8)insn_get_next_byte() + 1048320;
  }
  else
  {
    if ( (result & 0xC) != 0 )
    {
      *(_BYTE *)(a2 + 41) = 9;
      v4 = a2 + 80;
      *(_QWORD *)(a2 + 48) = 2;
    }
    else
    {
      *(_BYTE *)(a2 + 81) = 9;
      v4 = a2 + 40;
      *(_QWORD *)(a2 + 88) = 2;
    }
    v5 = (unsigned __int8)result >> 4;
    if ( (result & 0x80u) != 0LL )
    {
      *(_BYTE *)(v4 + 1) = 4;
      *(_WORD *)(v4 + 6) = 11;
      goto LABEL_9;
    }
    v14 = insn_get_next_byte();
    v15 = (unsigned int)v14 + 1048064;
    v11 = v14 <= 0x1Fu;
    result = (unsigned int)v14 + 1048320;
    if ( !v11 )
      result = v15;
  }
  *(_BYTE *)(v4 + 32) |= 2u;
  *(_QWORD *)(v4 + 16) = result;
  *(_BYTE *)(v4 + 1) = 2;
  *(_QWORD *)(v4 + 24) = v5;
  return result;
}

