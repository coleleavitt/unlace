__int64 __fastcall sub_7EF0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  char v3; // zf
  __int64 v4; // rax
  unsigned __int8 next_byte; // al
  __int64 sreg; // rax

  switch ( (unsigned __int8)insn_get_next_byte() )
  {
    case 2u:
      *(_WORD *)(a1 + 24) = 10;
      goto LABEL_20;
    case 3u:
      *(_WORD *)(a1 + 24) = 9;
      goto LABEL_18;
    case 6u:
      *(_WORD *)(a1 + 24) = 10;
      goto LABEL_15;
    case 7u:
      *(_WORD *)(a1 + 24) = 9;
      goto LABEL_22;
    case 0x12u:
      *(_WORD *)(a1 + 24) = 178;
      goto LABEL_20;
    case 0x13u:
      *(_WORD *)(a1 + 24) = 177;
      goto LABEL_18;
    case 0x16u:
      *(_WORD *)(a1 + 24) = 178;
      goto LABEL_15;
    case 0x17u:
      *(_WORD *)(a1 + 24) = 177;
      goto LABEL_22;
    case 0x22u:
      *(_WORD *)(a1 + 24) = 69;
      goto LABEL_20;
    case 0x23u:
      *(_WORD *)(a1 + 24) = 68;
      goto LABEL_18;
    case 0x26u:
      *(_WORD *)(a1 + 24) = 69;
      goto LABEL_15;
    case 0x27u:
      *(_WORD *)(a1 + 24) = 68;
      goto LABEL_22;
    case 0x32u:
      *(_WORD *)(a1 + 24) = 123;
      goto LABEL_20;
    case 0x33u:
      *(_WORD *)(a1 + 24) = 122;
      goto LABEL_18;
    case 0x36u:
      *(_WORD *)(a1 + 24) = 123;
      goto LABEL_15;
    case 0x37u:
      *(_WORD *)(a1 + 24) = 122;
      goto LABEL_11;
    case 0x62u:
      *(_WORD *)(a1 + 24) = 18;
      goto LABEL_20;
    case 0x63u:
      *(_WORD *)(a1 + 24) = 17;
      goto LABEL_18;
    case 0x66u:
      *(_WORD *)(a1 + 24) = 18;
      goto LABEL_15;
    case 0x67u:
      *(_WORD *)(a1 + 24) = 17;
LABEL_22:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v3 = get_sreg() == 0;
      goto LABEL_12;
    case 0x72u:
      *(_WORD *)(a1 + 24) = 84;
LABEL_20:
      *(_DWORD *)(a1 + 28) = 0;
      sub_51B0(a1, a1 + 40, 0, 0);
      goto LABEL_16;
    case 0x73u:
      *(_WORD *)(a1 + 24) = 83;
LABEL_18:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sreg = get_sreg();
      sub_51B0(a1, a1 + 40, 0, sreg == 0);
      goto LABEL_13;
    case 0x76u:
      *(_WORD *)(a1 + 24) = 84;
LABEL_15:
      *(_DWORD *)(a1 + 28) = 0;
      sub_4C30(a1, a1 + 40, 0, 0);
LABEL_16:
      next_byte = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = next_byte;
      *(_BYTE *)(a1 + 112) = 0;
      goto LABEL_5;
    case 0x77u:
      *(_WORD *)(a1 + 24) = 83;
LABEL_11:
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v2 = get_sreg();
      get_sreg();
      v3 = v2 == 0;
LABEL_12:
      sub_4C30(a1, a1 + 40, 0, v3);
LABEL_13:
      v4 = get_sreg();
      sub_4E70(a1, a1 + 80, v4 == 0 ? 16 : 8);
      goto LABEL_5;
    case 0x83u:
      *(_WORD *)(a1 + 24) = 11;
      goto LABEL_4;
    case 0x87u:
      *(_WORD *)(a1 + 24) = 11;
      goto LABEL_8;
    case 0x93u:
    case 0x97u:
      *(_WORD *)(a1 + 24) = 179;
      goto LABEL_4;
    case 0xA3u:
      *(_WORD *)(a1 + 24) = 70;
      goto LABEL_4;
    case 0xA7u:
      *(_WORD *)(a1 + 24) = 70;
      goto LABEL_8;
    case 0xB3u:
      *(_WORD *)(a1 + 24) = 124;
      goto LABEL_4;
    case 0xB7u:
      *(_WORD *)(a1 + 24) = 124;
      goto LABEL_8;
    case 0xE3u:
      *(_WORD *)(a1 + 24) = 19;
      goto LABEL_4;
    case 0xE7u:
      *(_WORD *)(a1 + 24) = 19;
      goto LABEL_8;
    case 0xF3u:
      *(_WORD *)(a1 + 24) = 85;
LABEL_4:
      *(_DWORD *)(a1 + 28) = 4;
      sub_51B0(a1, a1 + 40, 0, 2);
      sub_4700(a1, a1 + 80);
      goto LABEL_5;
    case 0xF7u:
      *(_WORD *)(a1 + 24) = 85;
LABEL_8:
      *(_DWORD *)(a1 + 28) = 4;
      sub_4C30(a1, a1 + 40, 0, 2);
      sub_4700(a1, a1 + 80);
LABEL_5:
      result = *(unsigned __int16 *)(a1 + 26);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

