__int64 __fastcall sub_11320(__int64 a1)
{
  unsigned __int8 byte; // al

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 2) != 0;
  byte = get_byte();
  return sub_10D40(a1, *((unsigned int *)qword_1AFC0 + (byte >> 5)), 255, 255);
}

