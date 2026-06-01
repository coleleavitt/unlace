__int64 __fastcall sub_BC60(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 10;
  byte = get_byte();
  *(_BYTE *)(v1 + 45) = 0;
  *(_QWORD *)(v1 + 48) = *((unsigned int *)qword_1B160 + (byte >> 4));
  return 1;
}

