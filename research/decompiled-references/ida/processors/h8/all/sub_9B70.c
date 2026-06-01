__int64 __fastcall sub_9B70(__int64 a1, __int64 a2)
{
  char next_byte; // r12
  char v3; // al
  unsigned __int8 v4; // dl
  char v5; // cl
  unsigned __int8 v6; // al
  char v7; // cl
  unsigned __int8 v8; // dl
  __int16 v10; // ax
  bool v11; // cl

  next_byte = insn_get_next_byte();
  v3 = insn_get_next_byte();
  if ( next_byte != 109 || (v3 & 8) != 0 )
    return 0;
  v4 = *(_BYTE *)(a1 + 227);
  v5 = v3;
  *(_DWORD *)(a2 + 28) = 3;
  v6 = v3 & 0xF;
  v7 = v5 & 0xF0;
  v8 = v4 >> 4;
  if ( v7 == 112 )
  {
    *(_BYTE *)(a2 + 41) = 3;
    *(_WORD *)(a2 + 24) = 51;
    *(_BYTE *)(a2 + 45) = 2;
    v11 = *(_WORD *)(a1 + 224) > 0xFFFu;
    *(_BYTE *)(a2 + 72) = 19;
    *(_BYTE *)(a2 + 81) = 8;
    *(_BYTE *)(a2 + 85) = 2;
    *(_WORD *)(a2 + 46) = 32 * v11 + 7;
    *(_BYTE *)(a2 + 112) = v8 + 1;
    if ( v6 >= v8 )
    {
      *(_WORD *)(a2 + 86) = v6 - v8 + 32;
      return 1;
    }
    return 0;
  }
  if ( v7 != -16 )
    return 0;
  *(_BYTE *)(a2 + 41) = 8;
  *(_WORD *)(a2 + 24) = 78;
  *(_BYTE *)(a2 + 72) = v8 + 1;
  *(_BYTE *)(a2 + 45) = 2;
  if ( v6 + v8 > 7 )
    return 0;
  *(_BYTE *)(a2 + 81) = 3;
  *(_BYTE *)(a2 + 85) = 2;
  *(_WORD *)(a2 + 46) = (unsigned __int8)(v6 + 32);
  v10 = *(_WORD *)(a1 + 224) > 0xFFFu;
  *(_BYTE *)(a2 + 112) = 16;
  *(_WORD *)(a2 + 86) = 32 * v10 + 7;
  return 1;
}

