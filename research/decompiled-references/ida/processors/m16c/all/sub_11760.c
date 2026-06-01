__int64 __fastcall sub_11760(__int64 a1)
{
  char byte; // al

  byte = get_byte();
  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  return sub_10D40(a1, *((unsigned int *)qword_1AFE0 + (byte & 0x1F)), 255, 255);
}

