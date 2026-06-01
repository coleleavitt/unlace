__int64 __fastcall sub_190F40(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 i; // rcx
  int v4; // esi

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
  if ( result == -1 )
  {
    if ( !under_debugger )
      sub_37DDE0(52037);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 432);
  for ( i = v2 + 104LL * *(_QWORD *)(a1 + 440); i != v2; *(_DWORD *)(v2 - 80) = v4 & 0xFFEF7EFF | 0x100000 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)v2 == 1 )
      {
        v4 = *(_DWORD *)(v2 + 24);
        if ( (v4 & 0x100000) == 0 && result <= *(_QWORD *)(v2 + 8) )
          break;
      }
      v2 += 104;
      if ( i == v2 )
        return result;
    }
    v2 += 104;
  }
  return result;
}

