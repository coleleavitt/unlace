__int64 __fastcall sub_1F0DE0(__int64 a1, double a2)
{
  int tinfo_property; // eax
  unsigned int v3; // edx
  __int64 v5; // rdx
  int v6; // ecx

  tinfo_property = get_tinfo_property();
  if ( *(_DWORD *)(a1 + 88) == tinfo_property )
    return 0;
  if ( *(_DWORD *)(a1 + 88) <= tinfo_property )
  {
    if ( !under_debugger )
      sub_383060(0xCAD5u, a2);
    BUG();
  }
  if ( *(_DWORD *)a1 != 2
    || (v5 = **(_QWORD **)(a1 + 8) + 24LL * *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) - 24,
        v6 = *(unsigned __int16 *)(v5 + 18) + *(unsigned __int16 *)(v5 + 16),
        v3 = 0,
        v6 <= tinfo_property) )
  {
    *(_DWORD *)(a1 + 88) = tinfo_property;
    return 1;
  }
  return v3;
}

