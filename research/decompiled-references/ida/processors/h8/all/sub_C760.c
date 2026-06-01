__int64 __fastcall sub_C760(__int64 a1, __int64 a2)
{
  char next_byte; // al
  char v3; // al
  char v5; // bp
  unsigned __int8 v6; // al
  __int16 v7; // dx
  unsigned __int8 v8; // bp
  char v9; // al

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  switch ( next_byte )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      *(_DWORD *)(a2 + 28) = 3;
      v3 = sub_BDA0(a1, a2);
      goto LABEL_3;
    case 4:
    case 5:
    case 6:
    case 7:
      v3 = sub_BF90(a1, a2, 3u);
      goto LABEL_3;
    case 8:
      *(_DWORD *)(a2 + 28) = 3;
      v3 = sub_B530(a1, a2);
      goto LABEL_3;
    case 9:
      *(_DWORD *)(a2 + 28) = 3;
      goto LABEL_27;
    case 10:
      *(_DWORD *)(a2 + 28) = 3;
      goto LABEL_25;
    case 13:
      *(_DWORD *)(a2 + 28) = 3;
      v3 = sub_B6A0(a1, a2);
      goto LABEL_3;
    case 14:
      *(_DWORD *)(a2 + 28) = 3;
      v3 = sub_B700(a1, a2);
      goto LABEL_3;
    case 16:
    case 32:
    case 48:
      v3 = sub_9B70(a1, a2);
      goto LABEL_3;
    case 64:
      v9 = insn_get_next_byte();
      v3 = sub_C550(a1, a2, v9, 43);
      goto LABEL_3;
    case 65:
      v3 = sub_C6A0(a1, a2);
      goto LABEL_3;
    case 80:
    case 81:
    case 82:
    case 83:
      *(_DWORD *)(a2 + 28) = 2;
      v3 = sub_BDA0(a1, a2);
      goto LABEL_3;
    case 84:
    case 85:
    case 86:
    case 87:
      v3 = sub_BF90(a1, a2, 2u);
      goto LABEL_3;
    case 88:
      *(_DWORD *)(a2 + 28) = 2;
      v3 = sub_B530(a1, a2);
      goto LABEL_3;
    case 89:
      *(_DWORD *)(a2 + 28) = 2;
      goto LABEL_27;
    case 90:
      *(_DWORD *)(a2 + 28) = 2;
      goto LABEL_25;
    case 93:
      *(_DWORD *)(a2 + 28) = 2;
      v3 = sub_B6A0(a1, a2);
      goto LABEL_3;
    case 94:
      *(_DWORD *)(a2 + 28) = 2;
      v3 = sub_B700(a1, a2);
      goto LABEL_3;
    case 95:
    case 127:
      v3 = sub_B7F0(a1, a2);
      goto LABEL_3;
    case 96:
      v3 = sub_9C80(a1, a2);
      goto LABEL_3;
    case 112:
    case 113:
    case 114:
    case 115:
      *(_DWORD *)(a2 + 28) = 1;
      v3 = sub_BDA0(a1, a2);
      goto LABEL_3;
    case 116:
    case 117:
    case 118:
    case 119:
      v3 = sub_BF90(a1, a2, 1u);
      goto LABEL_3;
    case 120:
      *(_DWORD *)(a2 + 28) = 1;
      v3 = sub_B530(a1, a2);
      goto LABEL_3;
    case 121:
      *(_DWORD *)(a2 + 28) = 1;
LABEL_27:
      v3 = sub_B5B0(a1, a2, a2 + 40, a2 + 80);
      goto LABEL_3;
    case 122:
      *(_DWORD *)(a2 + 28) = 1;
LABEL_25:
      v3 = sub_B5B0(a1, a2, a2 + 80, a2 + 40);
      goto LABEL_3;
    case 125:
      *(_DWORD *)(a2 + 28) = 1;
      v3 = sub_B6A0(a1, a2);
      goto LABEL_3;
    case -128:
      *(_WORD *)(a2 + 24) = 76;
      return *(unsigned __int16 *)(a2 + 26);
    case -96:
      *(_WORD *)(a2 + 24) = 37;
      return *(unsigned __int16 *)(a2 + 26);
    case -32:
      v3 = sub_9E10(a1, a2);
      goto LABEL_3;
    case -16:
      v5 = insn_get_next_byte();
      v6 = insn_get_next_byte();
      if ( (v6 & 0x88) != 0 )
        return 0;
      if ( v5 == 100 )
      {
        v7 = 62;
      }
      else if ( v5 == 101 )
      {
        v7 = 85;
      }
      else
      {
        v7 = 4;
        if ( v5 != 102 )
          return 0;
      }
      *(_WORD *)(a2 + 24) = v7;
      v8 = v6;
      *(_DWORD *)(a2 + 28) = 3;
      if ( sub_7A80(a2, a2 + 40, v6, 0x26u, 0) && sub_7A80(a2, a2 + 80, v8, 0x25u, 0) )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
    default:
      v3 = sub_9EA0(a1, a2);
LABEL_3:
      if ( v3 )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
  }
}

