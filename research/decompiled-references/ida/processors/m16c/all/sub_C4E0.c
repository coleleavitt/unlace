__int64 __fastcall sub_C4E0(__int64 a1)
{
  __int64 v1; // rbp
  __int16 v2; // bx
  char byte; // al

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 10;
  v2 = (unsigned __int16)get_byte() >> 6;
  byte = get_byte();
  *(_BYTE *)(v1 + 45) = 0;
  *(_QWORD *)(v1 + 48) = *((unsigned int *)qword_1B160 + (byte & 7 | (8 * (v2 & 1))));
  return 1;
}

