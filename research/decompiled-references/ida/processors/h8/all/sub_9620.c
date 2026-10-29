__int64 __fastcall sub_9620(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  char v4; // r12
  unsigned __int8 v5; // al
  unsigned __int8 v7; // dl
  __int64 v8; // rsi
  unsigned __int16 v9; // r8
  __int16 v10; // dx
  char v11; // dl
  int v12; // ecx

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  if ( next_byte <= 0x9Fu )
  {
    switch ( next_byte >> 4 )
    {
      case 0:
        *(_WORD *)(a2 + 24) = 50;
        *(_DWORD *)(a2 + 28) = 1;
        sub_84D0(a1, a2, a2 + 80, 5);
        goto LABEL_7;
      case 1:
        *(_DWORD *)(a2 + 28) = 1;
        *(_WORD *)(a2 + 24) = 50;
        sub_84D0(a1, a2, a2 + 80, 6);
        goto LABEL_7;
      case 2:
        *(_WORD *)(a2 + 24) = 52;
        sub_84D0(a1, a2, a2 + 80, 27);
        goto LABEL_7;
      case 3:
        *(_WORD *)(a2 + 24) = 52;
        sub_84D0(a1, a2, a2 + 80, 28);
        goto LABEL_7;
      case 4:
      case 5:
        return 0;
      case 6:
        *(_WORD *)(a2 + 24) = 50;
        *(_DWORD *)(a2 + 28) = 3;
        sub_84D0(a1, a2, a2 + 80, 33);
        goto LABEL_7;
      case 7:
        *(_WORD *)(a2 + 24) = 50;
        *(_DWORD *)(a2 + 28) = 3;
        sub_84D0(a1, a2, a2 + 80, 34);
LABEL_7:
        v7 = *(_BYTE *)(a1 + 227);
        v8 = a2 + 40;
        v9 = 3;
        goto LABEL_8;
      case 8:
      case 9:
        v4 = insn_get_next_byte();
        v5 = insn_get_next_byte();
        if ( v4 == 16 )
        {
          v10 = 74;
        }
        else
        {
          if ( v4 != 17 )
            return 0;
          v10 = 75;
        }
        *(_WORD *)(a2 + 24) = v10;
        v11 = v5 >> 4;
        if ( v5 >> 4 == 1 )
        {
          v12 = 2;
        }
        else if ( v11 == 3 )
        {
          v12 = 3;
          v11 = 2;
        }
        else
        {
          v12 = 1;
          if ( v11 )
            return 0;
        }
        *(_DWORD *)(a2 + 28) = v12;
        v8 = a2 + 80;
        v9 = 0;
        *(_BYTE *)(a2 + 45) = v11;
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = *(_BYTE *)(a1 + 227) & 0x1F;
        v7 = v5;
LABEL_8:
        if ( sub_7A80(a2, v8, v7, 0x25u, v9) )
          return *(unsigned __int16 *)(a2 + 26);
        break;
    }
  }
  return 0;
}

