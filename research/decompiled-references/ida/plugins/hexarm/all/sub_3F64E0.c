__int64 __fastcall sub_3F64E0(__int64 a1, unsigned int a2)
{
  sub_3F56D0(a1, 3u, 0, a2 & 1, 0x3BEA45E214ADDC55LL, 3, 0);
  sub_3F56D0(a1, 3u, 0, (a2 >> 1) & 1, 0x3BEA45E214ADDC55LL, 0, 0);
  sub_3F56D0(a1, 3u, 0, (a2 >> 2) & 1, 0x3BEA45E214ADDC55LL, 1, 0);
  return sub_3F56D0(a1, 3u, 0, (a2 & 8) != 0, 0x3BEA45E214ADDC55LL, 2, 0);
}

