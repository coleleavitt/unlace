char *__fastcall sub_28F30(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax

  v6 = a1 - 96;
  if ( (unsigned int)v6 > 0xC )
    sub_DA00((__int64)"Impossible to retrieve table LUT for coded index: 0x%x", a1, a3, a4, a5, a6, a1 - 96);
  return (char *)&unk_32A20 + 16 * v6;
}
