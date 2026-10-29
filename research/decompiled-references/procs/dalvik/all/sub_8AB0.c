__int64 __fastcall sub_8AB0(unsigned __int8 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax

  if ( a1 > 0xFAu )
    return 0;
  if ( a1 <= 0xE5u )
  {
    if ( a1 > 0x6Du )
      return 2 * (unsigned int)((unsigned __int8)(a1 - 110) <= 4u);
    else
      return a1 > 0x68u;
  }
  else
  {
    v1 = 2;
    v2 = 1LL << (a1 + 26);
    if ( (v2 & 0x142802) == 0 )
      return (v2 & 0x1401) != 0;
    return v1;
  }
}
