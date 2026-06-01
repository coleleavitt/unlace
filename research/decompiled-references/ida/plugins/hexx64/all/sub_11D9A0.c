int __fastcall sub_11D9A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  int result; // eax

  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return -1;
  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
    return 1;
  v2 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 4) < v2 )
    return -1;
  if ( *(_DWORD *)(a1 + 4) > v2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v3 < v4 )
    return -1;
  if ( v4 < v3 )
    return 1;
  result = sub_11DA40((unsigned __int8 *)(a1 + 32), (unsigned __int8 *)(a2 + 32));
  if ( !result )
  {
    result = sub_11DA40((unsigned __int8 *)(a1 + 48), (unsigned __int8 *)(a2 + 48));
    if ( !result )
      return sub_11DA40((unsigned __int8 *)(a1 + 64), (unsigned __int8 *)(a2 + 64));
  }
  return result;
}

