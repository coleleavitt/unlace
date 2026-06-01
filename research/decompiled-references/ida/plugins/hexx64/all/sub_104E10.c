__int64 __fastcall sub_104E10(__int64 a1, double a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 <= 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC3F2u, a2);
    BUG();
  }
  result = (unsigned int)(v2 - 1);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}

