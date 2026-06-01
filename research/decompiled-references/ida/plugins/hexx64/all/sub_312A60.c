unsigned __int64 __fastcall sub_312A60(__int64 a1, unsigned __int64 a2, double a3)
{
  int v3; // ecx
  unsigned __int64 result; // rax
  int v5; // ecx
  unsigned __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rsi

  v3 = *(_DWORD *)(a1 + 4);
  result = a2;
  if ( v3 != 8 )
  {
    v5 = 8 * v3;
    v6 = (1LL << v5) - 1;
    if ( v6 < a2 )
    {
      v7 = v5 - 1;
      if ( (unsigned __int64)v7 <= 0x3F )
      {
        v8 = -(1LL << v7);
        if ( (v8 & result) != 0 && v8 != (v8 & result) )
        {
          if ( !under_debugger )
            sub_383060(0xCAF4u, a3);
          BUG();
        }
      }
      result &= v6;
    }
  }
  return result;
}

