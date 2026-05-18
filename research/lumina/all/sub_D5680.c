__int64 __fastcall sub_D5680(__int64 a1, char *a2, int a3, __off64_t a4)
{
  int v7; // eax
  __int64 result; // rax

  while ( 1 )
  {
    v7 = sub_D5600(*(_DWORD *)(a1 + 24), a4, a2, a3, (int *)(a1 + 32));
    if ( a3 <= v7 )
      return 0;
    if ( v7 <= 0 )
      break;
    a3 -= v7;
    a4 += v7;
    a2 += v7;
  }
  if ( !v7 || (result = 778, *(_DWORD *)(a1 + 32) == 28) )
  {
    *(_DWORD *)(a1 + 32) = 0;
    return 13;
  }
  return result;
}
