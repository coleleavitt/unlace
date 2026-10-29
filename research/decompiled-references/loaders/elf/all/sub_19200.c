__int64 __fastcall sub_19200(__int64 a1, __int64 a2, int a3, char a4)
{
  char v4; // r15
  unsigned __int8 byte; // bl

  v4 = a4 & 0x38;
  byte = get_byte(a2 - 1);
  put_byte(a2 - 2, 129);
  put_byte(a2 - 1, (unsigned __int8)(v4 | (byte >> 3) & 7) | 0xC0u);
  sub_424F0(a1, a2, a3, 0, 4, 0, 0, 0);
  sub_40E20(a1, a2 - 2, 0);
  return 1;
}
