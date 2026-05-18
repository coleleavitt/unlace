void __fastcall sub_7CEC0(unsigned int *dest, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned int *desta; // [rsp+8h] [rbp-40h]

  v5 = (__int64)(0xE21A291C077975B9LL * (((char *)a2 - (char *)dest) >> 4) + 1) / 2;
  v6 = 2192 * v5;
  if ( v5 <= a4 )
  {
    sub_7C580(dest, &dest[548 * v5], a2, a3);
  }
  else
  {
    desta = &dest[548 * v5];
    sub_7CEC0(dest);
    sub_7CEC0(desta);
    sub_7CA60(
      dest,
      desta,
      a2,
      0xE21A291C077975B9LL * (v6 >> 4),
      0xE21A291C077975B9LL * (((char *)a2 - (char *)desta) >> 4),
      a3,
      a4);
  }
}
