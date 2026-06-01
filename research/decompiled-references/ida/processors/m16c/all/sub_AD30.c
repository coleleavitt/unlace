__int64 __fastcall sub_AD30(__int64 a1)
{
  __int64 v1; // rbx
  char byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 5;
  byte = get_byte();
  *(_BYTE *)(v1 + 45) = 0;
  *(_QWORD *)(v1 + 48) = byte & 0x3F;
  return 1;
}

