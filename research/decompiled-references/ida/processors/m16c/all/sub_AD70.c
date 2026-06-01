__int64 __fastcall sub_AD70(__int64 a1)
{
  __int64 v1; // rbx
  char next_byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 10;
  next_byte = insn_get_next_byte();
  *(_BYTE *)(v1 + 45) = 0;
  *(_QWORD *)(v1 + 48) = *((unsigned int *)qword_1B680 + (next_byte & 0xF));
  return 1;
}

