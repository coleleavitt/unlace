__int64 __fastcall sub_C870(__int64 a1)
{
  unsigned __int8 next_byte; // bp
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int8 v6; // al
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebp
  unsigned __int8 v10; // al
  __int64 sreg; // rax
  __int64 v12; // rax
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  __int64 v16; // rax

  next_byte = insn_get_next_byte();
  switch ( next_byte )
  {
    case 7u:
      *(_WORD *)(a1 + 24) = 148;
      goto LABEL_6;
    case 0xAu:
      *(_DWORD *)(a1 + 28) = 2;
      *(_WORD *)(a1 + 24) = 12;
      goto LABEL_30;
    case 0xBu:
      *(_DWORD *)(a1 + 28) = 2;
      *(_WORD *)(a1 + 24) = 180;
      goto LABEL_30;
    case 0x10u:
      *(_WORD *)(a1 + 24) = 205;
      goto LABEL_4;
    case 0x1Au:
      *(_DWORD *)(a1 + 28) = 8;
      *(_WORD *)(a1 + 24) = 4;
      goto LABEL_50;
    case 0x1Bu:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 162;
LABEL_50:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      v15 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v15;
      *(_BYTE *)(a1 + 112) = 0;
      goto LABEL_4;
    case 0x1Cu:
      *(_WORD *)(a1 + 24) = 5;
      goto LABEL_47;
    case 0x1Du:
      *(_WORD *)(a1 + 24) = 163;
LABEL_47:
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      sub_4700(a1, a1 + 80);
      goto LABEL_4;
    case 0x2Au:
      *(_WORD *)(a1 + 24) = 116;
      goto LABEL_44;
    case 0x2Bu:
      *(_WORD *)(a1 + 24) = 115;
LABEL_44:
      sub_51B0(a1, a1 + 40, 0, 1);
      sub_51B0(a1, a1 + 80, 0, 1);
      goto LABEL_4;
    case 0x30u:
      *(_WORD *)(a1 + 24) = 171;
      goto LABEL_4;
    case 0x3Au:
      *(_WORD *)(a1 + 24) = 110;
      *(_DWORD *)(a1 + 28) = 0;
      sub_51B0(a1, a1 + 120, 0, 0);
      v14 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 5;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v14;
      *(_BYTE *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      goto LABEL_4;
    case 0x3Bu:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 110;
      v13 = insn_get_next_byte();
      *(_BYTE *)(a1 + 121) = 5;
      *(_BYTE *)(a1 + 125) = 0;
      *(_QWORD *)(a1 + 128) = v13;
      *(_BYTE *)(a1 + 152) = 0;
      sub_4C30(a1, a1 + 40, 0, 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      goto LABEL_4;
    case 0x40u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 135;
      goto LABEL_4;
    case 0x47u:
      *(_WORD *)(a1 + 24) = 109;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sreg = get_sreg();
      sub_4E70(a1, a1 + 120, sreg == 0 ? 16 : 8);
      v12 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v12 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      goto LABEL_4;
    case 0x4Au:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 101;
      goto LABEL_30;
    case 0x4Bu:
      *(_WORD *)(a1 + 24) = 126;
      *(_DWORD *)(a1 + 28) = 2;
      sub_51B0(a1, a1 + 40, 0, 1);
      goto LABEL_4;
    case 0x4Cu:
      *(_WORD *)(a1 + 24) = 125;
      goto LABEL_34;
    case 0x4Du:
      *(_WORD *)(a1 + 24) = 127;
LABEL_34:
      *(_DWORD *)(a1 + 28) = 2;
      v9 = (unsigned __int8)insn_get_next_byte();
      v10 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 10;
      *(_BYTE *)(a1 + 45) = 1;
      *(_BYTE *)(a1 + 72) = 1;
      *(_QWORD *)(a1 + 48) = v9 | (v10 << 8);
      goto LABEL_4;
    case 0x50u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 143;
      goto LABEL_4;
    case 0x57u:
      *(_WORD *)(a1 + 24) = 109;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v7 = get_sreg();
      sub_4E70(a1, a1 + 120, v7 == 0 ? 16 : 8);
      v8 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v8 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      goto LABEL_4;
    case 0x5Au:
      *(_WORD *)(a1 + 24) = 149;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
LABEL_30:
      v6 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 5;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v6;
      *(_BYTE *)(a1 + 72) = 0;
      goto LABEL_4;
    case 0x5Cu:
      *(_WORD *)(a1 + 24) = 93;
      sub_4C30(a1, a1 + 40, 5, 1);
      goto LABEL_4;
    case 0x5Du:
      *(_WORD *)(a1 + 24) = 93;
      sub_4C30(a1, a1 + 40, 6, 5);
      goto LABEL_4;
    case 0x60u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 132;
      goto LABEL_4;
    case 0x70u:
      *(_WORD *)(a1 + 24) = 196;
      goto LABEL_4;
    case 0x73u:
      *(_WORD *)(a1 + 24) = 193;
      goto LABEL_4;
    case 0x80u:
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 118;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 2;
      goto LABEL_4;
    case 0x82u:
      *(_WORD *)(a1 + 24) = 184;
      goto LABEL_4;
    case 0x87u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_17;
    case 0x90u:
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 2;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 2;
      goto LABEL_4;
    case 0x92u:
      *(_WORD *)(a1 + 24) = 194;
      goto LABEL_8;
    case 0xA0u:
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 89;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 2;
      goto LABEL_4;
    case 0xA7u:
      *(_WORD *)(a1 + 24) = 161;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
LABEL_17:
      v4 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v4 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v5 = get_sreg();
      sub_4E70(a1, a1 + 80, v5 == 0 ? 16 : 8);
      goto LABEL_4;
    case 0xB0u:
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 87;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 2;
      goto LABEL_4;
    case 0xC2u:
      *(_WORD *)(a1 + 24) = 201;
      goto LABEL_4;
    case 0xC7u:
      *(_WORD *)(a1 + 24) = 113;
      goto LABEL_6;
    case 0xD2u:
      *(_WORD *)(a1 + 24) = 204;
      goto LABEL_4;
    case 0xD7u:
      *(_WORD *)(a1 + 24) = 114;
      goto LABEL_6;
    case 0xE2u:
      *(_WORD *)(a1 + 24) = 200;
      goto LABEL_4;
    case 0xE7u:
      *(_WORD *)(a1 + 24) = 77;
      goto LABEL_6;
    case 0xF2u:
      *(_WORD *)(a1 + 24) = 197;
LABEL_8:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      goto LABEL_4;
    case 0xF7u:
      *(_WORD *)(a1 + 24) = 78;
LABEL_6:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v3 = get_sreg();
      sub_4E70(a1, a1 + 40, v3 == 0 ? 16 : 8);
      result = *(unsigned __int16 *)(a1 + 26);
      break;
    default:
      if ( (next_byte & 0x40) != 0 )
      {
        *(_WORD *)(a1 + 24) = 191;
        v16 = get_sreg();
        *(_BYTE *)(a1 + 41) = 5;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 72) = 0;
        *(_DWORD *)(a1 + 28) = (v16 == 0) + 1;
        *(_QWORD *)(a1 + 48) = ((int)next_byte >> 4) - 3;
      }
      else
      {
        *(_BYTE *)(a1 + 41) = 5;
        *(_WORD *)(a1 + 24) = 183;
        *(_QWORD *)(a1 + 48) = next_byte >> 4;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 72) = 0;
      }
LABEL_4:
      result = *(unsigned __int16 *)(a1 + 26);
      break;
  }
  return result;
}

