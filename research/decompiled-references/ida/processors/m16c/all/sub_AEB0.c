__int64 __fastcall sub_AEB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  char byte; // al
  __int64 v4; // rbx
  unsigned __int8 next_byte; // al

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = v1 + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v2 + 41) = 5;
  byte = get_byte();
  *(_BYTE *)(v2 + 45) = 0;
  *(_QWORD *)(v2 + 48) = byte & 7;
  v4 = v1 + 40LL * (*(_DWORD *)(a1 + 4360) + 1);
  *(_BYTE *)(v4 + 41) = 4;
  *(_BYTE *)(v4 + 72) = 1;
  next_byte = insn_get_next_byte();
  *(_BYTE *)(v4 + 45) = 0;
  *(_QWORD *)(v4 + 56) = next_byte;
  *(_WORD *)(v4 + 46) = 28;
  return 2;
}

