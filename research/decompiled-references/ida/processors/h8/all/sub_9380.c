__int64 __fastcall sub_9380(__int64 a1, __int64 a2, __int16 a3, __int16 a4)
{
  char next_byte; // al
  char v6; // al
  __int16 v7; // dx
  char v8; // al
  int v10; // ecx
  __int16 v11; // ax
  char v12; // dl
  __int16 v13; // dx
  int v14; // edx

  *(_WORD *)(a2 + 24) = a3;
  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  if ( (next_byte & 0x8F) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 224) & 8) == 0 )
      return 0;
    if ( next_byte >= 0 )
    {
      if ( next_byte == 8 )
      {
        if ( (unsigned __int8)sub_84D0(a1, a2, a2 + 40, 538) )
          return *(unsigned __int16 *)(a2 + 26);
      }
      else
      {
        *(_WORD *)(a2 + 24) = a4;
        *(_BYTE *)(a2 + 41) = 9;
        *(_BYTE *)(a2 + 45) = 9;
        v6 = *(_BYTE *)(a1 + 227) & 0xF;
        switch ( v6 )
        {
          case 6:
            v7 = 0;
            v8 = *(_BYTE *)(a2 + 73) | 2;
            goto LABEL_9;
          case 7:
            v7 = 32;
            v8 = *(_BYTE *)(a2 + 73) | 4;
            goto LABEL_9;
          case 5:
            v7 = 24;
            v8 = *(_BYTE *)(a2 + 73) | 1;
LABEL_9:
            *(_BYTE *)(a2 + 73) = v8;
            *(_WORD *)(a2 + 46) = v7 + (*(_BYTE *)(a1 + 227) >> 4);
            return *(unsigned __int16 *)(a2 + 26);
        }
      }
      return 0;
    }
    *(_BYTE *)(a2 + 41) = 2;
    v14 = 2;
    *(_BYTE *)(a2 + 72) = 2;
    *(_BYTE *)(a2 + 45) = (*(_WORD *)(a1 + 224) > 0xFFFu) + 1;
    if ( *(_WORD *)(a1 + 224) > 0xFFFu )
      v14 = 4;
    *(_QWORD *)(a2 + 56) = v14 * (unsigned int)*(unsigned __int8 *)(a1 + 227);
    return *(unsigned __int16 *)(a2 + 26);
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 28);
    *(_BYTE *)(a2 + 41) = 3;
    v11 = (unsigned __int8)next_byte >> 4;
    v12 = v10 - 1;
    if ( !v10 )
      v12 = 9;
    *(_BYTE *)(a2 + 45) = v12;
    v13 = *(_WORD *)(a1 + 224) > 0xFFFu;
    *(_BYTE *)(a2 + 72) = 0;
    *(_WORD *)(a2 + 46) = 32 * v13 + v11;
    return *(unsigned __int16 *)(a2 + 26);
  }
}

