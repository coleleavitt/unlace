bool __fastcall sub_229050(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = a2;
  if ( (*(_BYTE *)(a2 + 26) & 0x10) != 0 && (*(_DWORD *)(a2 + 92) || *(_QWORD *)(a2 + 16) != *(_QWORD *)(a1 + 40)) )
    return 0;
  v4 = sub_1C2F40((_DWORD *)a2);
  v5 = v4;
  if ( v4 != -1 && *(_QWORD *)(a1 + 144) > v4 )
    return 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    a2 = *(unsigned int *)(a2 + 8);
    if ( !(unsigned __int8)sub_36E750(a1, a2, v4) )
      return 0;
  }
  else if ( *(_DWORD *)a2 == 2 && (unsigned int)for_all_arglocs() )
  {
    return 0;
  }
  if ( !*(_DWORD *)(v2 + 92) )
    return 1;
  if ( *(_DWORD *)v2 != 1 || *(_QWORD *)(v2 + 8) < *(_QWORD *)(a1 + 144) || (*(_BYTE *)(v2 + 26) & 1) != 0 )
    return 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 936) + 40LL))(
         *(_QWORD *)(a1 + 936),
         a2,
         v5);
  if ( v6 == -1 )
    return 1;
  if ( *(_DWORD *)v2 == 1 )
    v7 = *(_QWORD *)(v2 + 8);
  else
    v7 = -1;
  return v6 > v7;
}

