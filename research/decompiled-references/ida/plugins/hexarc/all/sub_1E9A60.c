__int64 __fastcall sub_1E9A60(__int64 a1)
{
  int tinfo_property; // eax
  unsigned int v2; // edx
  __int64 v4; // rdx
  int v5; // ecx

  tinfo_property = get_tinfo_property();
  if ( *(_DWORD *)(a1 + 88) == tinfo_property )
    return 0;
  if ( *(_DWORD *)(a1 + 88) <= tinfo_property )
  {
    if ( !under_debugger )
      sub_37B760(51925);
    BUG();
  }
  if ( *(_DWORD *)a1 != 2
    || (v4 = **(_QWORD **)(a1 + 8) + 24LL * *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) - 24,
        v5 = *(unsigned __int16 *)(v4 + 18) + *(unsigned __int16 *)(v4 + 16),
        v2 = 0,
        v5 <= tinfo_property) )
  {
    *(_DWORD *)(a1 + 88) = tinfo_property;
    return 1;
  }
  return v2;
}

