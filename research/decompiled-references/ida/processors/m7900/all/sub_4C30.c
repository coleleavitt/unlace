__int64 __fastcall sub_4C30(__int64 a1, __int64 a2, char a3, char a4)
{
  int v5; // r13d
  __int64 v6; // rbx
  __int64 result; // rax
  int sreg; // r14d
  int next_byte; // r13d
  int v10; // ebx
  int v11; // r14d
  int v12; // r13d
  int v13; // ebx
  int v14; // r13d
  int v15; // r14d
  int v16; // ebx
  int v17; // r13d
  int v18; // r14d
  int v19; // ebx
  int v20; // r13d
  int v21; // r13d
  int v22; // r14d
  int v23; // r13d
  int v24; // ebx

  switch ( a3 )
  {
    case 1:
      sreg = get_sreg();
      next_byte = (unsigned __int8)insn_get_next_byte();
      v10 = (unsigned __int8)insn_get_next_byte();
      result = 1;
      v6 = next_byte | (sreg << 16) | (unsigned int)(v10 << 8);
      break;
    case 2:
      v11 = get_sreg();
      v12 = (unsigned __int8)insn_get_next_byte();
      v13 = (unsigned __int8)insn_get_next_byte();
      result = 2;
      v6 = v12 | (v11 << 16) | (unsigned int)(v13 << 8);
      break;
    case 3:
      v14 = (unsigned __int8)insn_get_next_byte();
      v15 = (unsigned __int8)insn_get_next_byte();
      v16 = (unsigned __int8)insn_get_next_byte();
      result = 3;
      v6 = v14 | (v15 << 8) | (unsigned int)(v16 << 16);
      break;
    case 4:
      v17 = (unsigned __int8)insn_get_next_byte();
      v18 = (unsigned __int8)insn_get_next_byte();
      v19 = (unsigned __int8)insn_get_next_byte();
      result = 4;
      v6 = v17 | (v18 << 8) | (unsigned int)(v19 << 16);
      break;
    case 5:
      get_sreg();
      v20 = (unsigned __int8)insn_get_next_byte();
      v6 = v20 | ((unsigned __int8)insn_get_next_byte() << 8);
      get_word();
      result = 5;
      break;
    case 6:
      get_sreg();
      v21 = (unsigned __int8)insn_get_next_byte();
      v6 = v21 | ((unsigned __int8)insn_get_next_byte() << 8);
      get_word();
      result = 6;
      break;
    case 7:
      get_sreg();
      v5 = (unsigned __int8)insn_get_next_byte();
      v6 = v5 | ((unsigned __int8)insn_get_next_byte() << 8);
      get_word();
      result = 7;
      break;
    default:
      v22 = get_sreg();
      v23 = (unsigned __int8)insn_get_next_byte();
      v24 = (unsigned __int8)insn_get_next_byte();
      result = 0;
      v6 = v23 | (v22 << 16) | (unsigned int)(v24 << 8);
      break;
  }
  *(_BYTE *)(a2 + 1) = 9;
  *(_QWORD *)(a2 + 16) = v6;
  *(_BYTE *)(a2 + 5) = a4;
  *(_BYTE *)(a2 + 33) = result;
  return result;
}

