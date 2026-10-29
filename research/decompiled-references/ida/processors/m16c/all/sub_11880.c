__int64 __fastcall sub_11880(__int64 a1)
{
  unsigned __int8 byte; // al

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  byte = get_byte();
  return sub_10AC0(a1, *((_DWORD *)qword_1AFE0 + (byte >> 5)), 0, 255, 255);
}

