__int64 __fastcall sub_CC50(__int64 a1)
{
  __int64 v1; // rax
  char byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_WORD *)(v1 + 64) |= 1u;
  byte = get_byte();
  return sub_CAB0(a1, byte & 3);
}

