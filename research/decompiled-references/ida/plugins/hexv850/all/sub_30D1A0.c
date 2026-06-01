unsigned __int64 __fastcall sub_30D1A0(__int64 a1, unsigned __int64 a2)
{
  int v2; // ecx
  unsigned __int64 result; // rax
  int v4; // ecx
  unsigned __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rsi

  v2 = *(_DWORD *)(a1 + 4);
  result = a2;
  if ( v2 != 8 )
  {
    v4 = 8 * v2;
    v5 = (1LL << v4) - 1;
    if ( v5 < a2 )
    {
      v6 = v4 - 1;
      if ( (unsigned __int64)v6 <= 0x3F )
      {
        v7 = -(1LL << v6);
        if ( (v7 & result) != 0 && v7 != (v7 & result) )
        {
          if ( !under_debugger )
            sub_37CFE0(51956);
          BUG();
        }
      }
      result &= v5;
    }
  }
  return result;
}

