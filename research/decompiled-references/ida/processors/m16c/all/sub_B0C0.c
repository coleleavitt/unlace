__int64 __fastcall sub_B0C0(__int64 a1)
{
  __int64 v1; // rbp
  int next_word; // ebx
  unsigned __int8 next_byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 5;
  next_word = (unsigned __int16)insn_get_next_word();
  next_byte = insn_get_next_byte();
  *(_BYTE *)(v1 + 45) = 2;
  *(_QWORD *)(v1 + 48) = next_word | (next_byte << 16);
  return 1;
}

