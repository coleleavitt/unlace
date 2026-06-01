__int64 __fastcall sub_102C0(__int64 a1)
{
  char byte; // al

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 2) != 0;
  byte = get_byte();
  return sub_E930(a1, *((_DWORD *)qword_1B5C0 + (byte & 7)));
}

