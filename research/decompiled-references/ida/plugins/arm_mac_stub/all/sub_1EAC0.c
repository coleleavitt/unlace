__int64 __fastcall sub_1EAC0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // r13d
  int v4; // edx

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  if ( v3 > 0 )
  {
    while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, 0xFFFFFFFFLL) )
      ;
    v4 = *(_DWORD *)(a2 + 4);
    if ( v4 != v2 )
    {
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
        sub_130D0(a1, (__int64)"unexpected event from thread %d arrived (expected thread %d)\n", v4, v2);
      return (unsigned int)-1;
    }
  }
  return (unsigned int)v3;
}

