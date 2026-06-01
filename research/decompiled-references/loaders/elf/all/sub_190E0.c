__int64 __fastcall sub_190E0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 byte; // bl

  byte = get_byte(a2 - 1);
  put_byte(a2 - 2, 199);
  put_byte(a2 - 1, (byte >> 3) & 7 | 0xC0u);
  sub_424F0(a1, a2, a3, 0, 4, 0, 0, 0);
  sub_40E20(a1, a2 - 2, 0);
  return 1;
}
