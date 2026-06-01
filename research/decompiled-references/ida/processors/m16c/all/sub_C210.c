__int64 __fastcall sub_C210(__int64 a1)
{
  unsigned __int8 byte; // al
  __int64 v2; // rdx
  __int64 v3; // rax

  byte = get_byte();
  v2 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  v3 = *((char *)qword_1B660 + (byte >> 4));
  *(_WORD *)(v2 + 64) |= 3u;
  *(_BYTE *)(v2 + 41) = 5;
  *(_QWORD *)(v2 + 48) = v3;
  *(_BYTE *)(v2 + 45) = 0;
  return 1;
}

