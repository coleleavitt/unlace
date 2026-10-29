__int64 __fastcall sub_BBB0(__int64 a1)
{
  __int64 v1; // rbx
  char byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 10;
  byte = get_byte();
  *(_BYTE *)(v1 + 45) = 0;
  *(_QWORD *)(v1 + 48) = *((unsigned int *)qword_1B6C0 + (byte & 7));
  return 1;
}

