__int64 __fastcall sub_1480A0(unsigned int a1)
{
  unsigned int v1; // edx

  if ( a1 > 0x18 )
    return 0;
  v1 = 1;
  if ( ((1LL << a1) & 0x1050120) == 0 )
    return 2 * (unsigned int)(((1LL << a1) & 0x828200) != 0);
  return v1;
}

