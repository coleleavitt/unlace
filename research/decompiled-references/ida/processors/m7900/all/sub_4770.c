__int64 __fastcall sub_4770(__int64 a1)
{
  int next_byte; // eax
  int v3; // r12d
  char v4; // bp
  int v5; // r12d
  __int64 v6; // rax
  int v7; // r12d
  __int64 sreg; // rax
  int v9; // r12d
  int v10; // r12d
  __int64 v11; // rax
  int v12; // r12d
  int v13; // r12d
  __int64 v14; // rax
  int v15; // r12d
  int v16; // r12d
  __int64 v17; // rax
  int v18; // r12d
  int v19; // r12d
  __int64 v20; // rax
  int v21; // r12d

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 41) = 5;
  v3 = next_byte;
  *(_BYTE *)(a1 + 45) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  LOBYTE(v3) = (unsigned __int8)next_byte >> 4;
  v4 = next_byte & 0xF;
  *(_QWORD *)(a1 + 48) = next_byte & 0xF;
  if ( (unsigned __int8)next_byte > 0xBFu )
    return 0;
  switch ( (char)v3 )
  {
    case 0:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 112;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 112;
      if ( v4 )
      {
        do
        {
          ++v3;
          insn_get_next_byte();
          insn_get_next_byte();
        }
        while ( v4 != (_BYTE)v3 );
      }
      break;
    case 1:
      *(_WORD *)(a1 + 24) = 111;
      sreg = get_sreg();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 111;
      *(_DWORD *)(a1 + 28) = (sreg == 0) + 1;
      if ( v4 )
      {
        v9 = 0;
        do
        {
          insn_get_next_byte();
          if ( get_sreg() )
            insn_get_next_byte();
          else
            insn_get_next_word();
          ++v9;
        }
        while ( v4 != (_BYTE)v9 );
      }
      break;
    case 2:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 112;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 112;
      if ( v4 )
      {
        v10 = 0;
        do
        {
          ++v10;
          insn_get_next_byte();
          insn_get_next_word();
        }
        while ( v4 != (_BYTE)v10 );
      }
      break;
    case 3:
      *(_WORD *)(a1 + 24) = 111;
      v11 = get_sreg();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 111;
      *(_DWORD *)(a1 + 28) = (v11 == 0) + 1;
      if ( v4 )
      {
        v12 = 0;
        do
        {
          if ( get_sreg() )
            insn_get_next_byte();
          else
            insn_get_next_word();
          insn_get_next_word();
          ++v12;
        }
        while ( v4 != (_BYTE)v12 );
      }
      break;
    case 4:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 112;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 112;
      if ( v4 )
      {
        v13 = 0;
        do
        {
          ++v13;
          insn_get_next_byte();
          insn_get_next_byte();
        }
        while ( v4 != (_BYTE)v13 );
      }
      break;
    case 5:
      *(_WORD *)(a1 + 24) = 111;
      v14 = get_sreg();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 111;
      *(_DWORD *)(a1 + 28) = (v14 == 0) + 1;
      if ( v4 )
      {
        v15 = 0;
        do
        {
          ++v15;
          insn_get_next_byte();
          insn_get_next_byte();
        }
        while ( v4 != (_BYTE)v15 );
      }
      break;
    case 6:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 112;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 112;
      if ( v4 )
      {
        v16 = 0;
        do
        {
          ++v16;
          insn_get_next_byte();
          insn_get_next_word();
        }
        while ( v4 != (_BYTE)v16 );
      }
      break;
    case 7:
      *(_WORD *)(a1 + 24) = 111;
      v17 = get_sreg();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 111;
      *(_DWORD *)(a1 + 28) = (v17 == 0) + 1;
      if ( v4 )
      {
        v18 = 0;
        do
        {
          ++v18;
          insn_get_next_byte();
          insn_get_next_word();
        }
        while ( v4 != (_BYTE)v18 );
      }
      break;
    case 8:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 112;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 112;
      if ( v4 )
      {
        v19 = 0;
        do
        {
          ++v19;
          insn_get_next_word();
          insn_get_next_byte();
        }
        while ( v4 != (_BYTE)v19 );
      }
      break;
    case 9:
      *(_WORD *)(a1 + 24) = 111;
      v20 = get_sreg();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 111;
      *(_DWORD *)(a1 + 28) = (v20 == 0) + 1;
      if ( v4 )
      {
        v21 = 0;
        do
        {
          ++v21;
          insn_get_next_word();
          insn_get_next_byte();
        }
        while ( v4 != (_BYTE)v21 );
      }
      break;
    case 10:
      *(_DWORD *)(a1 + 28) = 0;
      *(_WORD *)(a1 + 24) = 112;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 112;
      if ( v4 )
      {
        v5 = 0;
        do
        {
          ++v5;
          insn_get_next_word();
          insn_get_next_word();
        }
        while ( v4 != (_BYTE)v5 );
      }
      break;
    case 11:
      *(_WORD *)(a1 + 24) = 111;
      v6 = get_sreg();
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 113) = 111;
      *(_DWORD *)(a1 + 28) = (v6 == 0) + 1;
      if ( v4 )
      {
        v7 = 0;
        do
        {
          ++v7;
          insn_get_next_word();
          insn_get_next_word();
        }
        while ( v4 != (_BYTE)v7 );
      }
      break;
  }
  return *(unsigned __int16 *)(a1 + 26);
}

