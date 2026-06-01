__int64 __fastcall sub_ADB0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 next_byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 5;
  next_byte = insn_get_next_byte();
  *(_BYTE *)(v1 + 45) = 0;
  *(_QWORD *)(v1 + 48) = next_byte;
  return 1;
}

