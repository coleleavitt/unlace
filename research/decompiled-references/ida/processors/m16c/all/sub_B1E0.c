__int64 __fastcall sub_B1E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int16 v3; // si
  int v4; // eax
  __int64 v5; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbx

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(int *)(a1 + 4360);
  v3 = *(_WORD *)(v1 + 30);
  *(_BYTE *)(v1 + 40 * v2 + 41) = 7;
  v4 = ((v3 & 8) != 0) + 1;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 4344) + 4LL) )
  {
    case 0:
    case 1:
      v5 = *(_QWORD *)(v1 + 16) + v4;
      goto LABEL_3;
    case 2:
      v8 = *(_QWORD *)(v1 + 16);
      if ( (v3 & 4) != 0 )
      {
        *(_QWORD *)(v1 + 40 * v2 + 56) = v4 + (_DWORD)v8 + (unsigned int)(unsigned __int8)insn_get_next_byte();
      }
      else
      {
        v5 = v4 + v8;
LABEL_3:
        *(_QWORD *)(v1 + 40 * v2 + 56) = v5 + (char)insn_get_next_byte();
      }
      return 1;
    case 3:
      v9 = *(_QWORD *)(v1 + 16) + v4;
      *(_QWORD *)(v1 + 40 * v2 + 56) = v9 + (__int16)insn_get_next_word();
      return 1;
    case 4:
      *(_QWORD *)(v1 + 40 * v2 + 56) = (unsigned int)insn_get_next_dword();
      return 1;
    case 5:
      v7 = v1 + 40 * v2;
      *(_BYTE *)(v7 + 41) = 6;
      *(_QWORD *)(v7 + 56) = (unsigned __int16)insn_get_next_word();
      *(_QWORD *)(v7 + 56) |= ((unsigned int)insn_get_next_byte() << 16) & 0xFF0000;
      return 1;
    default:
      return 1;
  }
}

