__int64 __fastcall sub_10090(__int64 a1)
{
  unsigned __int16 byte; // ax

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  byte = get_byte();
  return sub_E930(a1, *((_DWORD *)qword_1B5E0 + ((byte >> 4) & 3)));
}

