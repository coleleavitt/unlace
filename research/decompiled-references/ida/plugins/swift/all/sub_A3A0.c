__int64 __fastcall sub_A3A0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 68) == 2 )
  {
    if ( *(_BYTE *)(a1 + 24) && *(_QWORD *)(a1 + 40) > 1u )
    {
      result = save_tinfo(a1 + 24, 0, 0, *(_QWORD *)(a1 + 32), 1);
      *(_DWORD *)(a1 + 68) = 1;
    }
    else
    {
      if ( under_debugger )
        BUG();
      interr(30657);
      return sub_A400();
    }
  }
  return result;
}

