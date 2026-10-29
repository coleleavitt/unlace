bool __fastcall sub_228C90(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = a2;
  if ( (*(_BYTE *)(a2 + 26) & 0x10) != 0 && (*(_DWORD *)(a2 + 92) || *(_QWORD *)(a2 + 16) != *(_QWORD *)(a1 + 40)) )
    return 0;
  v5 = sub_1C3500((_DWORD *)a2, a3);
  v6 = v5;
  if ( v5 != -1 && *(_QWORD *)(a1 + 144) > v5 )
    return 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    a2 = *(unsigned int *)(a2 + 8);
    if ( !(unsigned __int8)sub_36E210(a1, a2) )
      return 0;
  }
  else if ( *(_DWORD *)a2 == 2 && (unsigned int)for_all_arglocs() )
  {
    return 0;
  }
  if ( !*(_DWORD *)(v3 + 92) )
    return 1;
  if ( *(_DWORD *)v3 != 1 || *(_QWORD *)(v3 + 8) < *(_QWORD *)(a1 + 144) || (*(_BYTE *)(v3 + 26) & 1) != 0 )
    return 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 936) + 40LL))(
         *(_QWORD *)(a1 + 936),
         a2,
         v6);
  if ( v7 == -1 )
    return 1;
  if ( *(_DWORD *)v3 == 1 )
    v8 = *(_QWORD *)(v3 + 8);
  else
    v8 = -1;
  return v7 > v8;
}

