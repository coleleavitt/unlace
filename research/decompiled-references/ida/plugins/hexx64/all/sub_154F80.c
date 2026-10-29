__int64 __fastcall sub_154F80(unsigned __int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax

  if ( *(_BYTE *)a2 != 4 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 9 )
  {
    if ( *(_BYTE *)(v3 + 32) != 4 )
      return 0;
    v3 = *(_QWORD *)(v3 + 40);
    v4 = *(_DWORD *)v3;
  }
  if ( v4 == 29 )
  {
    *(_DWORD *)v3 = 39;
    sub_120A10(v3 + 48, a1, 0, *(_DWORD *)(v3 + 36), *(_QWORD *)(v3 + 24), 0);
    return 1;
  }
  v5 = sub_32E9E0(v4);
  if ( v5 )
  {
    *(_DWORD *)v3 = v5;
    return 1;
  }
  return 0;
}

