__int64 __fastcall sub_5D9B0(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 100) == -1 )
  {
    result = 1;
    if ( *(_WORD *)(a1 + 104) != 0xFFFF )
    {
      *a2 = 5;
      return 0;
    }
  }
  else
  {
    *a2 = 3;
    return 0;
  }
  return result;
}

