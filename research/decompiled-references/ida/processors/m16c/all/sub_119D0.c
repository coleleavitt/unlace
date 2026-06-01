__int64 __fastcall sub_119D0(__int64 a1)
{
  char v1; // bl
  unsigned __int8 byte; // al

  v1 = 2 * get_byte();
  byte = get_byte();
  return sub_10AC0(a1, *((_DWORD *)qword_1AFE0 + (v1 & 0x18 | (byte >> 5) & 0x1Fu)), 2u, 255, 255);
}

