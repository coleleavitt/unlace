__int64 __fastcall sub_E8240(__int64 a1)
{
  *(_DWORD *)(a1 + 52) = 787;
  *(_BYTE *)(a1 + 194) = 2;
  sub_E8160((__int64 *)a1, "FOREIGN KEY constraint failed");
  return ((*(char *)(a1 + 196) >> 31) & 0x312u) + 1;
}
