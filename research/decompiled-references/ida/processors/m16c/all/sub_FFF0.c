__int64 __fastcall sub_FFF0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v3; // bp
  unsigned __int8 byte; // al

  v1 = *(_QWORD *)(a1 + 4352);
  if ( (*(_BYTE *)(v1 + 31) & 2) != 0 )
    return sub_FF70(a1);
  *(_BYTE *)(v1 + 40LL * *(int *)(a1 + 4360) + 73) = (*(_BYTE *)(v1 + 29) & 2) != 0;
  v3 = 2 * get_byte();
  byte = get_byte();
  return sub_E930(a1, *((_DWORD *)qword_1B520 + (v3 & 0x1Cu | (byte >> 6))));
}

