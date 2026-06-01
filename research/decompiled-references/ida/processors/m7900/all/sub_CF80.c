__int64 __fastcall sub_CF80(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rsi
  char v4; // cl
  unsigned __int8 v5; // al
  unsigned __int8 next_byte; // al
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 sreg; // rax
  __int64 v18; // rax

  switch ( (unsigned __int8)insn_get_next_byte() )
  {
    case 0u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 98;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 3, 1);
      goto LABEL_6;
    case 1u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 98;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 4, 1);
      goto LABEL_6;
    case 2u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_23;
    case 3u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_12;
    case 4u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_9;
    case 6u:
      *(_WORD *)(a1 + 24) = 98;
      goto LABEL_19;
    case 0x10u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_17;
    case 0x11u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_15;
    case 0x12u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_38;
    case 0x13u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_11;
    case 0x14u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_8;
    case 0x16u:
      *(_WORD *)(a1 + 24) = 97;
      goto LABEL_4;
    case 0x20u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_17;
    case 0x21u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_15;
    case 0x22u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_38;
    case 0x23u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_11;
    case 0x24u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_8;
    case 0x26u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_4;
    case 0x28u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_33;
    case 0x29u:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_31;
    case 0x2Cu:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_29;
    case 0x2Du:
      *(_WORD *)(a1 + 24) = 6;
      goto LABEL_27;
    case 0x30u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_17;
    case 0x31u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_15;
    case 0x32u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_38;
    case 0x33u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_11;
    case 0x34u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_8;
    case 0x36u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_4;
    case 0x38u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_33;
    case 0x39u:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_31;
    case 0x3Cu:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_29;
    case 0x3Du:
      *(_WORD *)(a1 + 24) = 174;
      goto LABEL_27;
    case 0x40u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_17;
    case 0x41u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_15;
    case 0x42u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_38;
    case 0x43u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_11;
    case 0x44u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_8;
    case 0x46u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_4;
    case 0x48u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_33;
    case 0x49u:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_31;
    case 0x4Cu:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_29;
    case 0x4Du:
      *(_WORD *)(a1 + 24) = 65;
      goto LABEL_27;
    case 0x50u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_17;
    case 0x51u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_15;
    case 0x52u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_38;
    case 0x53u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_11;
    case 0x54u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_8;
    case 0x56u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_4;
    case 0x58u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_33;
    case 0x59u:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_31;
    case 0x5Cu:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_29;
    case 0x5Du:
      *(_WORD *)(a1 + 24) = 120;
      goto LABEL_27;
    case 0x60u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_17;
    case 0x61u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_15;
    case 0x62u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_38;
    case 0x63u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_11;
    case 0x64u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_8;
    case 0x66u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_4;
    case 0x68u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_33;
    case 0x69u:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_31;
    case 0x6Cu:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_29;
    case 0x6Du:
      *(_WORD *)(a1 + 24) = 15;
      goto LABEL_27;
    case 0x70u:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_17;
    case 0x71u:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_15;
    case 0x72u:
      *(_WORD *)(a1 + 24) = 81;
LABEL_38:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      goto LABEL_23;
    case 0x73u:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_11;
    case 0x74u:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_8;
    case 0x76u:
      *(_WORD *)(a1 + 24) = 81;
      goto LABEL_4;
    case 0x78u:
      *(_WORD *)(a1 + 24) = 81;
LABEL_33:
      sreg = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (sreg == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      v18 = get_sreg();
      sub_51B0(a1, a1 + 80, 3, v18 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_6;
    case 0x79u:
      *(_WORD *)(a1 + 24) = 81;
LABEL_31:
      v16 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v16 == 0) + 1;
      sub_51B0(a1, a1 + 80, 6, 5);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_6;
    case 0x7Cu:
      *(_WORD *)(a1 + 24) = 81;
LABEL_29:
      v14 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v14 == 0) + 1;
      v15 = get_sreg();
      sub_4C30(a1, a1 + 80, 3, v15 == 0);
      goto LABEL_6;
    case 0x7Du:
      *(_WORD *)(a1 + 24) = 81;
LABEL_27:
      v12 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v12 == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      v13 = get_sreg();
      sub_4C30(a1, a1 + 80, 4, v13 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      goto LABEL_6;
    case 0xC0u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 169;
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 3, 0);
      goto LABEL_6;
    case 0xC1u:
      *(_WORD *)(a1 + 24) = 169;
      *(_DWORD *)(a1 + 28) = 0;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 4, 0);
      goto LABEL_6;
    case 0xC2u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 169;
LABEL_23:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 6, 5);
      goto LABEL_6;
    case 0xC3u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 169;
      goto LABEL_12;
    case 0xC4u:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 169;
      goto LABEL_9;
    case 0xC6u:
      *(_WORD *)(a1 + 24) = 169;
LABEL_19:
      *(_DWORD *)(a1 + 28) = 0;
      v4 = 0;
      *(_WORD *)(a1 + 46) = 1;
      v3 = a1 + 80;
      *(_BYTE *)(a1 + 41) = 1;
      goto LABEL_5;
    case 0xD0u:
      *(_WORD *)(a1 + 24) = 168;
LABEL_17:
      v10 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v10 == 0) + 1;
      v11 = get_sreg();
      sub_51B0(a1, a1 + 80, 3, v11 == 0);
      goto LABEL_6;
    case 0xD1u:
      *(_WORD *)(a1 + 24) = 168;
LABEL_15:
      v8 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v8 == 0) + 1;
      v9 = get_sreg();
      sub_51B0(a1, a1 + 80, 4, v9 == 0);
      goto LABEL_6;
    case 0xD2u:
      *(_WORD *)(a1 + 24) = 168;
      v7 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v7 == 0) + 1;
      sub_51B0(a1, a1 + 80, 6, 0);
      goto LABEL_6;
    case 0xD3u:
      *(_WORD *)(a1 + 24) = 168;
LABEL_11:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
LABEL_12:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      next_byte = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = next_byte;
      *(_BYTE *)(a1 + 113) = 0;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 6;
      goto LABEL_6;
    case 0xD4u:
      *(_WORD *)(a1 + 24) = 168;
LABEL_8:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
LABEL_9:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      v5 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v5;
      *(_BYTE *)(a1 + 113) = 1;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_6;
    case 0xD6u:
      *(_WORD *)(a1 + 24) = 168;
LABEL_4:
      v2 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v2 == 0) + 1;
      v3 = a1 + 80;
      v4 = get_sreg() == 0;
LABEL_5:
      sub_4C30(a1, v3, 2, v4);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
LABEL_6:
      result = *(unsigned __int16 *)(a1 + 26);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

