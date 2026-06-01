__int64 __fastcall sub_B110(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  int next_word; // r12d
  unsigned __int8 next_byte; // al
  char v5; // cl
  __int64 v6; // rax
  __int64 v7; // rdx

  v1 = *(int *)(a1 + 4360);
  v2 = *(_QWORD *)(a1 + 4352);
  *(_BYTE *)(v2 + 40 * v1 + 41) = 5;
  if ( (*(_BYTE *)(v2 + 31) & 2) != 0 )
  {
    next_word = (unsigned __int16)insn_get_next_word();
    next_byte = insn_get_next_byte();
    v5 = 2;
    v6 = next_word | (next_byte << 16);
  }
  else
  {
    LOWORD(v6) = insn_get_next_word();
    v5 = 1;
    v6 = (unsigned __int16)v6;
  }
  v7 = v2 + 40 * v1;
  *(_QWORD *)(v7 + 48) = v6;
  *(_BYTE *)(v7 + 45) = v5;
  return 1;
}

