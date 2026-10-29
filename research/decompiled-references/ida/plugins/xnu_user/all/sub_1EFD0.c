void __fastcall sub_1EFD0(__int64 a1, double a2)
{
  __int64 name_ea; // rbp
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // r13

  if ( *(_QWORD *)(a1 + 1944) )
  {
    if ( *(_QWORD *)(a1 + 1928) == -1 )
    {
      name_ea = get_name_ea();
      if ( name_ea == -1 )
      {
        *(_QWORD *)(a1 + 1928) = -1;
        return;
      }
      v3 = *(_QWORD *)(a1 + 1496);
      v4 = v3 + name_ea - getinf();
      *(_QWORD *)(a1 + 1928) = v4;
      if ( v4 == -1 )
        return;
      v5 = get_name_ea();
      if ( v5 != -1 )
      {
        v6 = *(_QWORD *)(a1 + 1496);
        v5 = v6 + v5 - getinf();
      }
      *(_QWORD *)(a1 + 1936) = v5;
    }
    sub_1BF10(a1, (__int64)"%a: _gLoadedKextSummaries\n", a2);
    if ( *(_DWORD *)(a1 + 2128) != 1 || *(_DWORD *)(a1 + 2132) <= 0xAu )
      sub_46550(a1 + 1704, a1 + 1536, *(unsigned int *)(a1 + 1564));
    sub_1EB40((_QWORD *)a1);
    sub_1D3A0((_QWORD *)a1, *(const char **)(a1 + 1936), (int)"_OSKextLoadedKextSummariesUpdated", a2);
  }
}

