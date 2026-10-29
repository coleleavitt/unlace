__int64 __fastcall sub_F9A0(__int64 a1)
{
  char v1; // bl
  unsigned __int16 byte; // ax

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  v1 = (unsigned __int8)get_byte() >> 2;
  byte = get_byte();
  return sub_E930(a1, *((_DWORD *)qword_1B4A0 + ((byte >> 4) & 3 | v1 & 0x1Cu)));
}

