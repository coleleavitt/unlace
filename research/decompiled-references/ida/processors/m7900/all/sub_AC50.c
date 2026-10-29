__int64 __fastcall sub_AC50(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
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
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 v20; // al
  __int64 v21; // rax
  unsigned __int8 next_byte; // al
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 sreg; // rax
  __int64 v29; // rax

  switch ( (unsigned __int8)insn_get_next_byte() )
  {
    case 0x80u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_30;
    case 0x81u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_28;
    case 0x82u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_26;
    case 0x83u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_24;
    case 0x84u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_22;
    case 0x86u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_20;
    case 0x88u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_18;
    case 0x89u:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_16;
    case 0x8Au:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_14;
    case 0x8Bu:
      *(_WORD *)(a1 + 24) = 3;
      sreg = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (sreg == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      v29 = get_sreg();
      sub_51B0(a1, a1 + 80, 1, v29 == 0);
      goto LABEL_5;
    case 0x8Cu:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_11;
    case 0x8Du:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_9;
    case 0x8Eu:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_7;
    case 0x8Fu:
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_4;
    case 0xA0u:
      *(_WORD *)(a1 + 24) = 161;
LABEL_30:
      v26 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v26 == 0) + 1;
      v27 = get_sreg();
      sub_51B0(a1, a1 + 80, 3, v27 == 0);
      goto LABEL_5;
    case 0xA1u:
      *(_WORD *)(a1 + 24) = 161;
LABEL_28:
      v24 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v24 == 0) + 1;
      v25 = get_sreg();
      sub_51B0(a1, a1 + 80, 4, v25 == 0);
      goto LABEL_5;
    case 0xA2u:
      *(_WORD *)(a1 + 24) = 161;
LABEL_26:
      v23 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v23 == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      sub_51B0(a1, a1 + 80, 6, 5);
      goto LABEL_5;
    case 0xA3u:
      *(_WORD *)(a1 + 24) = 161;
LABEL_24:
      v21 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v21 == 0) + 1;
      next_byte = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = next_byte;
      *(_BYTE *)(a1 + 113) = 0;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 6;
      goto LABEL_5;
    case 0xA4u:
      *(_WORD *)(a1 + 24) = 161;
LABEL_22:
      v19 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v19 == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      v20 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v20;
      *(_BYTE *)(a1 + 113) = 1;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_5;
    case 0xA6u:
      *(_WORD *)(a1 + 24) = 161;
LABEL_20:
      v17 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v17 == 0) + 1;
      v18 = get_sreg();
      sub_4C30(a1, a1 + 80, 2, v18 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_5;
    case 0xA8u:
      *(_WORD *)(a1 + 24) = 161;
LABEL_18:
      v15 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v15 == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      v16 = get_sreg();
      sub_51B0(a1, a1 + 80, 3, v16 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_5;
    case 0xA9u:
      *(_WORD *)(a1 + 24) = 161;
LABEL_16:
      v14 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v14 == 0) + 1;
      sub_51B0(a1, a1 + 80, 6, 5);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      goto LABEL_5;
    case 0xAAu:
      *(_WORD *)(a1 + 24) = 161;
LABEL_14:
      v12 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v12 == 0) + 1;
      v13 = get_sreg();
      sub_51B0(a1, a1 + 80, 0, v13 == 0);
      goto LABEL_5;
    case 0xABu:
      *(_WORD *)(a1 + 24) = 161;
      v10 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v10 == 0) + 1;
      v11 = get_sreg();
      sub_51B0(a1, a1 + 80, 1, v11 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      goto LABEL_5;
    case 0xACu:
      *(_WORD *)(a1 + 24) = 161;
LABEL_11:
      v8 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v8 == 0) + 1;
      v9 = get_sreg();
      sub_4C30(a1, a1 + 80, 3, v9 == 0);
      goto LABEL_5;
    case 0xADu:
      *(_WORD *)(a1 + 24) = 161;
LABEL_9:
      v6 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v6 == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      v7 = get_sreg();
      sub_4C30(a1, a1 + 80, 4, v7 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      goto LABEL_5;
    case 0xAEu:
      *(_WORD *)(a1 + 24) = 161;
LABEL_7:
      v4 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v4 == 0) + 1;
      *(_WORD *)(a1 + 46) = 1;
      v5 = get_sreg();
      sub_4C30(a1, a1 + 80, 0, v5 == 0);
      goto LABEL_5;
    case 0xAFu:
      *(_WORD *)(a1 + 24) = 161;
LABEL_4:
      v2 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_DWORD *)(a1 + 28) = (v2 == 0) + 1;
      v3 = get_sreg();
      sub_4C30(a1, a1 + 80, 1, v3 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
LABEL_5:
      result = *(unsigned __int16 *)(a1 + 26);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

