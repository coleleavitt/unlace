char __fastcall sub_22630(__int64 a1, unsigned int a2)
{
  char result; // al
  __int64 v3; // rdx

  if ( under_debugger )
    BUG();
  interr();
  result = 0;
  if ( a2 )
  {
    result = 1;
    if ( a2 <= 0x2CFFFFFF )
    {
      v3 = MEMORY[0x4E47] + 40LL * HIBYTE(a2);
      result = *(_BYTE *)(v3 + 72);
      if ( result )
        return (a2 & 0xFFFFFF) - 1 < *(_DWORD *)(v3 + 76);
    }
  }
  return result;
}

