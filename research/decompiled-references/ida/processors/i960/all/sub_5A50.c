__int64 __fastcall sub_5A50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  char v5; // al
  int v7; // r13d
  unsigned int v10; // edx
  unsigned int v12; // esi
  __int64 v13; // rcx
  int v14; // r14d
  char v15; // r15
  __int64 v16; // rax
  char v17; // cl
  unsigned int v19; // eax
  unsigned int next_dword; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax

  v5 = a4;
  v7 = (a4 >> 14) & 0x1F;
  v10 = a4 >> 10;
  if ( (a4 & 0x1000) == 0 )
  {
    v16 = a4 & 0xFFF;
    v17 = a5;
    if ( (v10 & 8) != 0 )
    {
      *(_QWORD *)(a3 + 16) = v16;
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = a5;
      *(_WORD *)(a3 + 6) = v7;
      *(_WORD *)(a3 + 32) = 511;
    }
    else
    {
LABEL_5:
      *(_BYTE *)(a3 + 1) = 2;
      *(_BYTE *)(a3 + 5) = v17;
      *(_QWORD *)(a3 + 16) = v16;
      if ( a5 == 9 )
      {
        *(_BYTE *)(a3 + 1) = 7;
        *(_QWORD *)(a3 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v16;
      }
    }
    return 1;
  }
  v12 = 0;
  v13 = (a4 >> 7) & 7;
  if ( (unsigned int)v13 <= 4 )
  {
    v14 = *((_DWORD *)qword_A610 + v13);
    v15 = v5 & 0x1F;
    switch ( v10 & 0xF )
    {
      case 4u:
        *(_BYTE *)(a3 + 1) = 3;
        *(_BYTE *)(a3 + 5) = a5;
        *(_WORD *)(a3 + 6) = v7;
        *(_WORD *)(a3 + 32) = 511;
        return 1;
      case 5u:
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
        next_dword = insn_get_next_dword();
        *(_BYTE *)(a3 + 1) = 4;
        *(_BYTE *)(a3 + 5) = a5;
        *(_QWORD *)(a3 + 16) = next_dword;
        *(_WORD *)(a3 + 6) = 66;
        *(_WORD *)(a3 + 32) = 511;
        return 1;
      case 7u:
        if ( (v5 & 0x60) != 0 )
        {
          v12 = 0;
          if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
            return v12;
        }
        *(_BYTE *)(a3 + 1) = 3;
        *(_BYTE *)(a3 + 5) = a5;
        *(_WORD *)(a3 + 6) = v7;
        *(_BYTE *)(a3 + 32) = v15;
        *(_BYTE *)(a3 + 33) = v14;
        break;
      case 0xCu:
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
        LODWORD(v16) = insn_get_next_dword();
        v17 = a5;
        v16 = (unsigned int)v16;
        goto LABEL_5;
      case 0xDu:
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
        v21 = insn_get_next_dword();
        *(_BYTE *)(a3 + 1) = 4;
        *(_BYTE *)(a3 + 5) = a5;
        *(_QWORD *)(a3 + 16) = v21;
        *(_WORD *)(a3 + 6) = v7;
        *(_WORD *)(a3 + 32) = 511;
        return 1;
      case 0xEu:
        if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
        {
          v12 = 0;
          if ( (v5 & 0x60) != 0 )
            return v12;
        }
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
        v22 = insn_get_next_dword();
        *(_BYTE *)(a3 + 1) = 4;
        *(_BYTE *)(a3 + 5) = a5;
        *(_QWORD *)(a3 + 16) = v22;
        *(_WORD *)(a3 + 6) = -1;
        *(_BYTE *)(a3 + 32) = v15;
        *(_BYTE *)(a3 + 33) = v14;
        break;
      case 0xFu:
        if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
        {
          v12 = 0;
          if ( (v5 & 0x60) != 0 )
            return v12;
        }
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
        v19 = insn_get_next_dword();
        *(_BYTE *)(a3 + 1) = 4;
        *(_BYTE *)(a3 + 5) = a5;
        *(_QWORD *)(a3 + 16) = v19;
        *(_WORD *)(a3 + 6) = v7;
        *(_BYTE *)(a3 + 32) = v15;
        *(_BYTE *)(a3 + 33) = v14;
        break;
      default:
        return 0;
    }
    return 1;
  }
  return v12;
}

