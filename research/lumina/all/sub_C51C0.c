__int64 __fastcall sub_C51C0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0;
  if ( a2 <= 31 && ((1 << a2) & *(_DWORD *)(a1 + 116)) != 0 )
  {
    if ( a3 )
    {
      result = 1;
      if ( a3 > 0 )
        *(_DWORD *)(a1 + 120) |= 1 << a2;
    }
    else
    {
      *(_DWORD *)(a1 + 120) &= ~(1 << a2);
      return 1;
    }
  }
  return result;
}
