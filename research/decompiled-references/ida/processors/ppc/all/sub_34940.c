__int64 sub_34940()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  __int64 v2; // rax

  v0 = sub_4E2D0();
  if ( v0 <= 9 )
  {
    v1 = v0;
    v2 = 1LL << v0;
    if ( (v2 & 0x354) != 0 )
      return 16;
    if ( (v2 & 0xA2) != 0 )
      return 8;
    if ( v1 == 3 )
      return 4;
  }
  if ( under_debugger )
    BUG();
  interr(10253);
  return sub_349B0();
}

