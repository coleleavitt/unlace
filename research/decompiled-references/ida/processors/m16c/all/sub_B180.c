__int64 __fastcall sub_B180(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  int next_word; // ebp
  unsigned __int8 next_byte; // al
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(int *)(a1 + 4360);
  next_word = (unsigned __int16)insn_get_next_word();
  next_byte = insn_get_next_byte();
  v5 = v1 + 40 * v2;
  *(_BYTE *)(v5 + 41) = 7;
  *(_QWORD *)(v5 + 56) = *(_QWORD *)(v1 + 16) + ((next_word | (next_byte << 16)) << 8 >> 8) + 1LL;
  return 1;
}

