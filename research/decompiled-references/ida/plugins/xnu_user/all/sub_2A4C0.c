__int64 __fastcall sub_2A4C0(unsigned int *a1)
{
  __int64 result; // rax

  *a1 = _byteswap_ulong(*a1);
  result = _byteswap_ulong(a1[1]);
  a1[1] = result;
  return result;
}

