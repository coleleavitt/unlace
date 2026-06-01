__int64 __fastcall sub_51B0(__int64 a1, __int64 a2, char a3, char a4)
{
  char v5; // dl
  __int64 result; // rax
  int next_byte; // r14d
  unsigned int v8; // r14d
  int v9; // r14d
  unsigned int v10; // r14d
  int v11; // r14d
  unsigned int v12; // r14d

  switch ( a3 )
  {
    case 1:
      next_byte = (unsigned __int8)insn_get_next_byte();
      if ( get_sreg() == 1 )
        v8 = sub_50B0(a1, (unsigned __int8)next_byte & 0xC0) + next_byte;
      else
        v8 = get_sreg() + next_byte;
      *(_BYTE *)(a2 + 1) = 2;
      *(_QWORD *)(a2 + 16) = v8;
      *(_BYTE *)(a2 + 5) = a4;
      *(_BYTE *)(a2 + 33) = 1;
      return v8;
    case 2:
      v9 = (unsigned __int8)insn_get_next_byte();
      if ( get_sreg() == 1 )
        v10 = sub_50B0(a1, (unsigned __int8)v9 & 0xC0) + v9;
      else
        v10 = get_sreg() + v9;
      *(_BYTE *)(a2 + 1) = 2;
      *(_QWORD *)(a2 + 16) = v10;
      *(_BYTE *)(a2 + 5) = a4;
      *(_BYTE *)(a2 + 33) = 2;
      return v10;
    case 3:
      v5 = 3;
      goto LABEL_3;
    case 4:
      v5 = 4;
      goto LABEL_3;
    case 5:
      v5 = 5;
      goto LABEL_3;
    case 6:
      v5 = 6;
LABEL_3:
      result = sub_5120(a1, a2, v5, a4);
      break;
    default:
      v11 = (unsigned __int8)insn_get_next_byte();
      if ( get_sreg() == 1 )
        v12 = sub_50B0(a1, (unsigned __int8)v11 & 0xC0) + v11;
      else
        v12 = get_sreg() + v11;
      *(_BYTE *)(a2 + 1) = 2;
      *(_QWORD *)(a2 + 16) = v12;
      *(_BYTE *)(a2 + 5) = a4;
      *(_BYTE *)(a2 + 33) = 0;
      result = v12;
      break;
  }
  return result;
}

