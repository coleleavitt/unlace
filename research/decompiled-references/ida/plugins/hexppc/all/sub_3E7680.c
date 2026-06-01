char __fastcall sub_3E7680(__int64 a1, int a2, int a3)
{
  char result; // al
  int v6; // edx
  int v7; // edi
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi

  result = 1;
  if ( *(_DWORD *)(a1 + 512) <= a2 )
    return result;
  v6 = *(_DWORD *)(a1 + 468);
  if ( v6 <= a2 && a2 + a3 <= v6 + 4 )
    return result;
  v7 = *(_DWORD *)(a1 + 352);
  v8 = *(_DWORD *)(a1 + 412);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    if ( a2 < v8 || a2 > v7 )
    {
      result = a2 <= *(_DWORD *)(a1 + 416) && a2 >= *(_DWORD *)(a1 + 448);
      if ( !result )
        return result;
    }
  }
  else if ( a2 < v7 || a2 > v8 )
  {
    result = a2 <= *(_DWORD *)(a1 + 448) && a2 >= *(_DWORD *)(a1 + 416);
    if ( !result )
      return result;
  }
  v9 = a1 + 536;
  v10 = a1 + 4408;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v9 + 28);
    if ( a2 < v11 )
      break;
    v9 += 32;
    if ( v9 == v10 )
      goto LABEL_11;
  }
  v11 = *(_DWORD *)(v9 - 4);
LABEL_11:
  result = 0;
  if ( a2 == v11 )
    return a3 <= *(char *)(v9 - 11);
  return result;
}

