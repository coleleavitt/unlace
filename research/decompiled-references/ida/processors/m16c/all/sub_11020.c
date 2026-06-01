__int64 __fastcall sub_11020(__int64 a1)
{
  unsigned __int16 byte; // ax

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  byte = get_byte();
  return sub_10D40(a1, *((unsigned int *)qword_1AF50 + ((byte >> 2) & 3)), 255, 255);
}

