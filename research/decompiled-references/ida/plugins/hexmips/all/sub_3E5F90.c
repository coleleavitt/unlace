__int64 __fastcall sub_3E5F90(__int64 a1, int a2, int a3)
{
  int v4; // esi
  int v5; // r8d
  __int64 result; // rax
  int v7; // r8d
  int v8; // r8d

  v4 = *(_DWORD *)(a1 + 80);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    v5 = *(_DWORD *)(a1 + 480);
    if ( a2 >= v5 && a2 <= v4 + *(_DWORD *)(a1 + 356) - 1 )
    {
      if ( ((a2 - v5) & (v4 - 1)) == 0 && v4 >= a3 )
        return (unsigned int)(31 - (a2 - v5) / v4);
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 356);
    if ( a2 >= v7 && a2 <= v4 + *(_DWORD *)(a1 + 480) - 1 )
    {
      if ( ((a2 - v7) & (v4 - 1)) == 0 && v4 >= a3 )
        return (unsigned int)((a2 - v7) / v4);
      return 0xFFFFFFFFLL;
    }
  }
  v8 = *(_DWORD *)(a1 + 484);
  result = 0xFFFFFFFFLL;
  if ( a2 >= v8 && a2 <= v4 + *(_DWORD *)(a1 + 608) - 1 )
  {
    if ( ((a2 - v8) & (v4 - 1)) == 0 && v4 >= a3 )
      return (unsigned int)((a2 - v8) / v4 + 32);
    return 0xFFFFFFFFLL;
  }
  return result;
}

