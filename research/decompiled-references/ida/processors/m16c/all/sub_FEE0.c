__int64 __fastcall sub_FEE0(__int64 a1)
{
  unsigned __int8 v1; // bp
  unsigned __int8 byte; // al

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 2) != 0;
  v1 = 2 * get_byte();
  byte = get_byte();
  return sub_E930(a1, *((_DWORD *)qword_1B4A0 + (v1 & 0x1Cu | (byte >> 6))));
}

