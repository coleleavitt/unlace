__int64 __fastcall sub_195400(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 i; // rcx
  int v5; // esi

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
  if ( result == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xCB45u, a2);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 432);
  for ( i = v3 + 104LL * *(_QWORD *)(a1 + 440); i != v3; *(_DWORD *)(v3 - 80) = v5 & 0xFFEF7EFF | 0x100000 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)v3 == 1 )
      {
        v5 = *(_DWORD *)(v3 + 24);
        if ( (v5 & 0x100000) == 0 && result <= *(_QWORD *)(v3 + 8) )
          break;
      }
      v3 += 104;
      if ( i == v3 )
        return result;
    }
    v3 += 104;
  }
  return result;
}

