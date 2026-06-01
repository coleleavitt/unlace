__int64 __fastcall sub_B780(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char next_byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_WORD *)(v1 + 64) |= 2u;
  v2 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v2 + 41) = 5;
  next_byte = insn_get_next_byte();
  *(_WORD *)(v2 + 64) |= 1u;
  *(_BYTE *)(v2 + 45) = 0;
  *(_QWORD *)(v2 + 48) = next_byte;
  return 1;
}

