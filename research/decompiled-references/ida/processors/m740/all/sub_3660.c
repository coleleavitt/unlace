void __fastcall sub_3660(__int64 a1, char a2, char a3)
{
  char v4; // al
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  char v7; // al
  __int64 v8; // rdx
  unsigned __int8 next_byte; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  char v16; // al
  __int64 v17; // rdx
  unsigned __int8 v18; // al
  unsigned __int8 v19; // al
  unsigned __int16 v20; // ax
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  unsigned __int16 next_word; // ax
  unsigned __int8 v25; // al
  unsigned __int8 v26; // al

  switch ( a2 )
  {
    case 0:
      next_byte = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 5;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = next_byte;
      break;
    case 1:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_BYTE *)(a1 + 45) = 1;
      break;
    case 2:
      if ( *(_WORD *)(a1 + 24) == 38 )
      {
        v25 = insn_get_next_byte();
        *(_BYTE *)(a1 + 41) = 5;
        *(_BYTE *)(a1 + 45) = 0;
        *(_QWORD *)(a1 + 48) = v25;
        v26 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 2;
        *(_BYTE *)(a1 + 85) = 0;
        *(_QWORD *)(a1 + 96) = v26;
        *(_BYTE *)(a1 + 112) = a3;
      }
      else
      {
        v10 = insn_get_next_byte();
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_QWORD *)(a1 + 56) = v10;
        *(_BYTE *)(a1 + 72) = a3;
      }
      break;
    case 3:
      v11 = insn_get_next_byte();
      *(_DWORD *)(a1 + 28) |= 4u;
      *(_BYTE *)(a1 + 41) = 4;
      *(_QWORD *)(a1 + 56) = v11;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 45) = 0;
      break;
    case 4:
      v12 = insn_get_next_byte();
      *(_DWORD *)(a1 + 28) |= 8u;
      *(_BYTE *)(a1 + 41) = 4;
      *(_QWORD *)(a1 + 56) = v12;
      *(_WORD *)(a1 + 46) = 2;
      *(_BYTE *)(a1 + 45) = 0;
      break;
    case 5:
      if ( (unsigned __int16)(*(_WORD *)(a1 + 24) - 35) <= 1u )
      {
        next_word = insn_get_next_word();
        *(_BYTE *)(a1 + 41) = 7;
        *(_BYTE *)(a1 + 45) = 9;
        *(_QWORD *)(a1 + 56) = next_word;
      }
      else
      {
        v13 = insn_get_next_word();
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_QWORD *)(a1 + 56) = v13;
        *(_BYTE *)(a1 + 72) = a3;
      }
      break;
    case 6:
      v14 = insn_get_next_word();
      *(_DWORD *)(a1 + 28) |= 0x10u;
      *(_BYTE *)(a1 + 41) = 4;
      *(_QWORD *)(a1 + 56) = v14;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 45) = 0;
      break;
    case 7:
      v15 = insn_get_next_word();
      *(_DWORD *)(a1 + 28) |= 0x20u;
      *(_BYTE *)(a1 + 41) = 4;
      *(_QWORD *)(a1 + 56) = v15;
      *(_WORD *)(a1 + 46) = 2;
      *(_BYTE *)(a1 + 45) = 0;
      break;
    case 8:
      return;
    case 9:
      v16 = insn_get_next_byte();
      v17 = *(_QWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 41) = 7;
      *(_BYTE *)(a1 + 45) = 9;
      *(_QWORD *)(a1 + 56) = v17 + v16 + 2;
      break;
    case 10:
      v18 = insn_get_next_byte();
      *(_DWORD *)(a1 + 28) |= 1u;
      *(_BYTE *)(a1 + 41) = 4;
      *(_QWORD *)(a1 + 56) = v18;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 45) = 1;
      break;
    case 11:
      v19 = insn_get_next_byte();
      *(_DWORD *)(a1 + 28) |= 2u;
      *(_BYTE *)(a1 + 41) = 4;
      *(_QWORD *)(a1 + 56) = v19;
      *(_WORD *)(a1 + 46) = 2;
      *(_BYTE *)(a1 + 45) = 1;
      break;
    case 12:
      v20 = insn_get_next_word();
      *(_BYTE *)(a1 + 41) = 2;
      *(_BYTE *)(a1 + 45) = 1;
      *(_QWORD *)(a1 + 56) = v20;
      *(_BYTE *)(a1 + 72) = a3 | 2;
      break;
    case 13:
      v21 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 2;
      *(_BYTE *)(a1 + 45) = 1;
      *(_QWORD *)(a1 + 56) = v21;
      *(_BYTE *)(a1 + 72) = 2;
      break;
    case 14:
      v22 = insn_get_next_byte();
      *(_BYTE *)(a1 + 72) |= 1u;
      *(_BYTE *)(a1 + 41) = 7;
      *(_BYTE *)(a1 + 45) = 9;
      *(_QWORD *)(a1 + 56) = v22 | 0xFF00u;
      break;
    case 15:
      v23 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 1;
      *(_QWORD *)(a1 + 96) = v23;
      *(_BYTE *)(a1 + 112) = a3;
      break;
    case 16:
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 0;
      *(_BYTE *)(a1 + 85) = 1;
      break;
    case 17:
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 0;
      *(_BYTE *)(a1 + 85) = 1;
      v4 = insn_get_next_byte();
      v5 = *(_QWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 121) = 7;
      *(_BYTE *)(a1 + 125) = 9;
      *(_QWORD *)(a1 + 136) = v5 + v4 + 2;
      break;
    case 18:
      v6 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 96) = v6;
      *(_BYTE *)(a1 + 112) = a3;
      v7 = insn_get_next_byte();
      v8 = *(_QWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 121) = 7;
      *(_BYTE *)(a1 + 125) = 9;
      *(_QWORD *)(a1 + 136) = v8 + v7 + 3;
      break;
    default:
      if ( under_debugger )
        BUG();
      interr();
      sub_3A00(10025);
      break;
  }
}

