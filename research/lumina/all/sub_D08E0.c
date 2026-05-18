__int64 __fastcall sub_D08E0(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // rdi
  int v4; // ecx

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 <= 1 )
    return 0;
  if ( a2 != *(_DWORD *)(a1 + 12) )
  {
    v3 = a1 + 16;
    v4 = 1;
    while ( ++v4 != v2 )
    {
      v3 += 4;
      if ( *(_DWORD *)(v3 - 4) == a2 )
        return 1LL << v4;
    }
    return 0;
  }
  return 2;
}
