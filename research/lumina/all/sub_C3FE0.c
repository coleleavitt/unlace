__int64 __fastcall sub_C3FE0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v3; // eax

  if ( !a1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 176);
  if ( !v2 )
    return 0;
  v3 = 2;
  while ( a2 != *(_DWORD *)(v2 + 4LL * v3) )
  {
    v3 += *(_DWORD *)(v2 + 4LL * v3 + 4);
    if ( *(_DWORD *)(v2 + 4) <= v3 )
      return 0;
  }
  return v2 + 4LL * v3 + 8;
}
