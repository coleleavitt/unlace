__int64 __fastcall sub_C580(__int64 a1)
{
  unsigned __int8 next_byte; // al
  __int64 v2; // rbp
  unsigned __int8 v3; // r12
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rdx
  int v9; // ebp
  __int64 sreg; // rax
  int i; // ebp
  int j; // ebp
  __int64 v13; // rax
  int k; // ebp
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rdx

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 41) = 5;
  *(_BYTE *)(a1 + 45) = 0;
  v2 = next_byte & 0xF;
  *(_BYTE *)(a1 + 72) = 0;
  v3 = next_byte & 0xF;
  *(_QWORD *)(a1 + 48) = v2;
  if ( next_byte > 0xEFu )
    return 0;
  switch ( next_byte >> 4 )
  {
    case 0:
      *(_BYTE *)(a1 + 81) = 2;
      v9 = 0;
      *(_WORD *)(a1 + 24) = 112;
      *(_DWORD *)(a1 + 28) = 0;
      *(_BYTE *)(a1 + 113) = 111;
      if ( v3 )
      {
        do
        {
          ++v9;
          insn_get_next_word();
          insn_get_next_byte();
        }
        while ( v9 != v3 );
      }
      goto LABEL_6;
    case 1:
      *(_WORD *)(a1 + 24) = 111;
      sreg = get_sreg();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 112;
      *(_DWORD *)(a1 + 28) = (sreg == 0) + 1;
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
        {
          insn_get_next_word();
          insn_get_next_byte();
        }
      }
      goto LABEL_6;
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 11:
    case 13:
      return 0;
    case 6:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 112;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 111;
      if ( v3 )
      {
        for ( j = 0; j != v3; ++j )
        {
          insn_get_next_word();
          insn_get_next_byte();
        }
      }
      goto LABEL_6;
    case 7:
      *(_WORD *)(a1 + 24) = 111;
      v13 = get_sreg();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 112;
      *(_DWORD *)(a1 + 28) = (v13 == 0) + 1;
      if ( v3 )
      {
        for ( k = 0; k != v3; ++k )
        {
          insn_get_next_byte();
          insn_get_next_word();
        }
      }
      goto LABEL_6;
    case 8:
      *(_WORD *)(a1 + 24) = 47;
      goto LABEL_23;
    case 10:
      *(_WORD *)(a1 + 24) = 45;
LABEL_23:
      v15 = get_sreg();
      *(_BYTE *)(a1 + 41) = 5;
      *(_QWORD *)(a1 + 48) = v2;
      *(_BYTE *)(a1 + 45) = 0;
      *(_DWORD *)(a1 + 28) = (v15 == 0) + 1;
      *(_BYTE *)(a1 + 72) = 0;
      v16 = get_sreg();
      sub_51B0(a1, a1 + 80, 0, v16 == 0);
      v17 = insn_get_next_byte();
      v18 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 121) = 7;
      *(_QWORD *)(a1 + 136) = v18 + v17 + 4;
      goto LABEL_6;
    case 12:
      *(_WORD *)(a1 + 24) = 47;
      goto LABEL_5;
    case 14:
      *(_WORD *)(a1 + 24) = 45;
LABEL_5:
      v5 = get_sreg();
      *(_BYTE *)(a1 + 41) = 5;
      *(_QWORD *)(a1 + 48) = v2;
      *(_BYTE *)(a1 + 45) = 0;
      *(_DWORD *)(a1 + 28) = (v5 == 0) + 1;
      *(_BYTE *)(a1 + 72) = 0;
      v6 = get_sreg();
      sub_4C30(a1, a1 + 80, 0, v6 == 0);
      v7 = insn_get_next_byte();
      v8 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 121) = 7;
      *(_QWORD *)(a1 + 136) = v8 + v7 + 5;
LABEL_6:
      result = *(unsigned __int16 *)(a1 + 26);
      break;
  }
  return result;
}

