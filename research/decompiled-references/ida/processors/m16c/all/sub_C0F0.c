__int64 __fastcall sub_C0F0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // r12d
  char byte; // bl
  unsigned __int16 next_word; // ax
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(_DWORD *)(a1 + 4360);
  byte = get_byte();
  next_word = insn_get_next_word();
  v5 = v1 + 40LL * v2;
  *(_BYTE *)(v5 + 41) = 5;
  *(_BYTE *)(v5 + 45) = 2;
  *(_QWORD *)(v5 + 48) = next_word | ((unsigned __int8)(byte & 0xF) << 16);
  return 1;
}

