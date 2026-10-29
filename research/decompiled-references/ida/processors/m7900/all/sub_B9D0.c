__int64 __fastcall sub_B9D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  char v5; // cl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // cl
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  char v24; // al
  __int64 v25; // rbp
  unsigned __int8 v26; // al
  char v27; // al
  __int64 v28; // rdx
  __int64 sreg; // rax
  __int64 v30; // rax
  unsigned __int8 next_byte; // al

  switch ( (unsigned __int8)insn_get_next_byte() )
  {
    case 3u:
      *(_WORD *)(a1 + 24) = 20;
      goto LABEL_4;
    case 8u:
      *(_BYTE *)(a1 + 41) = 1;
      v19 = a1 + 80;
      *(_WORD *)(a1 + 24) = 98;
      v20 = 1;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_26;
    case 9u:
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_40;
    case 0xAu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 98;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 0, 1);
      goto LABEL_5;
    case 0xBu:
      *(_DWORD *)(a1 + 28) = 0;
      v14 = a1 + 80;
      v15 = 1;
      *(_WORD *)(a1 + 24) = 98;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_18;
    case 0xCu:
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_36;
    case 0xDu:
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_34;
    case 0xEu:
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_32;
    case 0xFu:
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_30;
    case 0x13u:
      *(_WORD *)(a1 + 24) = 150;
      goto LABEL_4;
    case 0x16u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_60;
    case 0x18u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_25;
    case 0x19u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_22;
    case 0x1Au:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_20;
    case 0x1Bu:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_17;
    case 0x1Cu:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_15;
    case 0x1Du:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_12;
    case 0x1Eu:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_10;
    case 0x1Fu:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_7;
    case 0x23u:
      *(_WORD *)(a1 + 24) = 16;
      goto LABEL_68;
    case 0x24u:
      *(_WORD *)(a1 + 24) = 117;
      goto LABEL_4;
    case 0x26u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_60;
    case 0x28u:
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_68;
    case 0x29u:
      *(_WORD *)(a1 + 24) = 7;
      goto LABEL_68;
    case 0x2Au:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_20;
    case 0x2Bu:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_17;
    case 0x2Eu:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_10;
    case 0x2Fu:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_7;
    case 0x33u:
      *(_WORD *)(a1 + 24) = 82;
      goto LABEL_68;
    case 0x34u:
      *(_DWORD *)(a1 + 28) = 2;
      *(_WORD *)(a1 + 24) = 88;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_5;
    case 0x35u:
      *(_DWORD *)(a1 + 28) = 2;
      *(_WORD *)(a1 + 24) = 86;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_5;
    case 0x36u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_60;
    case 0x38u:
      *(_WORD *)(a1 + 24) = 66;
      goto LABEL_68;
    case 0x39u:
      *(_WORD *)(a1 + 24) = 175;
      goto LABEL_68;
    case 0x3Au:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_20;
    case 0x3Bu:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_17;
    case 0x3Eu:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_10;
    case 0x3Fu:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_7;
    case 0x43u:
      *(_WORD *)(a1 + 24) = 106;
      goto LABEL_4;
    case 0x44u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 59;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_5;
    case 0x46u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_60;
    case 0x4Au:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_20;
    case 0x4Bu:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_17;
    case 0x4Eu:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_10;
    case 0x4Fu:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_7;
    case 0x53u:
      *(_WORD *)(a1 + 24) = 153;
      goto LABEL_4;
    case 0x54u:
      *(_WORD *)(a1 + 24) = 58;
      goto LABEL_4;
    case 0x56u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_60;
    case 0x5Au:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_20;
    case 0x5Bu:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_17;
    case 0x5Eu:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_10;
    case 0x5Fu:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_7;
    case 0x63u:
      *(_WORD *)(a1 + 24) = 121;
LABEL_68:
      *(_DWORD *)(a1 + 28) = 0;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      next_byte = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = next_byte;
      *(_BYTE *)(a1 + 112) = 0;
      goto LABEL_5;
    case 0x64u:
      *(_WORD *)(a1 + 24) = 23;
      goto LABEL_4;
    case 0x66u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_60;
    case 0x6Au:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_20;
    case 0x6Bu:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_17;
    case 0x6Eu:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_10;
    case 0x6Fu:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_7;
    case 0x76u:
      *(_WORD *)(a1 + 24) = 81;
LABEL_60:
      sreg = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (sreg == 0) + 1;
      v30 = get_sreg();
      sub_4E70(a1, a1 + 80, v30 == 0 ? 16 : 8);
      goto LABEL_5;
    case 0x7Au:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_20;
    case 0x7Bu:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_17;
    case 0x7Eu:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_10;
    case 0x7Fu:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_7;
    case 0x85u:
      *(_WORD *)(a1 + 24) = 129;
      goto LABEL_5;
    case 0x95u:
      *(_WORD *)(a1 + 24) = 139;
      goto LABEL_28;
    case 0xA2u:
      *(_WORD *)(a1 + 24) = 51;
      goto LABEL_48;
    case 0xA3u:
      *(_WORD *)(a1 + 24) = 90;
      goto LABEL_4;
    case 0xA4u:
      *(_WORD *)(a1 + 24) = 199;
      goto LABEL_5;
    case 0xA6u:
      *(_WORD *)(a1 + 24) = 50;
      goto LABEL_44;
    case 0xB2u:
      *(_WORD *)(a1 + 24) = 53;
LABEL_48:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 41) = 1;
      v26 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v26;
      *(_BYTE *)(a1 + 112) = 0;
      v27 = insn_get_next_byte();
      v28 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 121) = 7;
      *(_QWORD *)(a1 + 136) = v28 + v27 + 4;
      goto LABEL_5;
    case 0xB3u:
      *(_WORD *)(a1 + 24) = 74;
      goto LABEL_4;
    case 0xB4u:
      *(_WORD *)(a1 + 24) = 203;
      goto LABEL_5;
    case 0xB6u:
      *(_WORD *)(a1 + 24) = 52;
LABEL_44:
      v21 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v21 == 0) + 1;
      v22 = get_sreg();
      sub_4E70(a1, a1 + 80, v22 == 0 ? 16 : 8);
      v23 = (get_sreg() == 0) + 4LL;
      v24 = insn_get_next_byte();
      v25 = *(_QWORD *)(a1 + 8) + v23;
      *(_BYTE *)(a1 + 121) = 7;
      *(_QWORD *)(a1 + 136) = v24 + v25;
      goto LABEL_5;
    case 0xC4u:
      *(_WORD *)(a1 + 24) = 189;
      goto LABEL_28;
    case 0xC8u:
      *(_BYTE *)(a1 + 41) = 1;
      v20 = 0;
      *(_WORD *)(a1 + 24) = 169;
      v19 = a1 + 80;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_26;
    case 0xC9u:
      *(_WORD *)(a1 + 24) = 169;
LABEL_40:
      *(_DWORD *)(a1 + 28) = 0;
      goto LABEL_23;
    case 0xCAu:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 169;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 0, 0);
      goto LABEL_5;
    case 0xCBu:
      *(_BYTE *)(a1 + 41) = 1;
      v14 = a1 + 80;
      v15 = 0;
      *(_WORD *)(a1 + 24) = 169;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_18;
    case 0xCCu:
      *(_WORD *)(a1 + 24) = 169;
LABEL_36:
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      sub_4C30(a1, a1 + 80, 3, 0);
      goto LABEL_5;
    case 0xCDu:
      *(_WORD *)(a1 + 24) = 169;
LABEL_34:
      *(_BYTE *)(a1 + 41) = 1;
      v9 = a1 + 80;
      v10 = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_13;
    case 0xCEu:
      *(_WORD *)(a1 + 24) = 169;
LABEL_32:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 41) = 1;
      sub_4C30(a1, a1 + 80, 0, 0);
      goto LABEL_5;
    case 0xCFu:
      *(_WORD *)(a1 + 24) = 169;
LABEL_30:
      *(_BYTE *)(a1 + 41) = 1;
      v4 = a1 + 80;
      v5 = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      goto LABEL_8;
    case 0xD4u:
      *(_WORD *)(a1 + 24) = 190;
LABEL_28:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      goto LABEL_5;
    case 0xD8u:
      *(_WORD *)(a1 + 24) = 168;
LABEL_25:
      v18 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v18 == 0) + 1;
      v19 = a1 + 80;
      v20 = get_sreg() == 0;
LABEL_26:
      sub_51B0(a1, v19, 3, v20);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_5;
    case 0xD9u:
      *(_WORD *)(a1 + 24) = 168;
LABEL_22:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
LABEL_23:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 6, 5);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_5;
    case 0xDAu:
      *(_WORD *)(a1 + 24) = 168;
LABEL_20:
      v16 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v16 == 0) + 1;
      v17 = get_sreg();
      sub_51B0(a1, a1 + 80, 0, v17 == 0);
      goto LABEL_5;
    case 0xDBu:
      *(_WORD *)(a1 + 24) = 168;
LABEL_17:
      v13 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v13 == 0) + 1;
      v14 = a1 + 80;
      v15 = get_sreg() == 0;
LABEL_18:
      sub_51B0(a1, v14, 1, v15);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      goto LABEL_5;
    case 0xDCu:
      *(_WORD *)(a1 + 24) = 168;
LABEL_15:
      v11 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v11 == 0) + 1;
      v12 = get_sreg();
      sub_4C30(a1, a1 + 80, 3, v12 == 0);
      goto LABEL_5;
    case 0xDDu:
      *(_WORD *)(a1 + 24) = 168;
LABEL_12:
      v8 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v8 == 0) + 1;
      v9 = a1 + 80;
      v10 = get_sreg() == 0;
LABEL_13:
      sub_4C30(a1, v9, 4, v10);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      goto LABEL_5;
    case 0xDEu:
      *(_WORD *)(a1 + 24) = 168;
LABEL_10:
      v6 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v6 == 0) + 1;
      v7 = get_sreg();
      sub_4C30(a1, a1 + 80, 0, v7 == 0);
      goto LABEL_5;
    case 0xDFu:
      *(_WORD *)(a1 + 24) = 168;
LABEL_7:
      v3 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v3 == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      v4 = a1 + 80;
      v5 = get_sreg() == 0;
LABEL_8:
      sub_4C30(a1, v4, 1, v5);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      goto LABEL_5;
    case 0xE1u:
      *(_WORD *)(a1 + 24) = 1;
LABEL_4:
      v2 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v2 == 0) + 1;
LABEL_5:
      result = *(unsigned __int16 *)(a1 + 26);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

