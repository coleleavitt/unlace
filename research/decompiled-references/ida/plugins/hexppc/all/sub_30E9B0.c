__int64 __fastcall sub_30E9B0(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // r8

  if ( (*a1 & 0xF) != 2 )
    return 0;
  v4 = a1[1];
  v5 = -1;
  if ( v4 != 8 )
    v5 = (1LL << (8 * (unsigned __int8)v4)) - 1;
  return sub_313330(a1 + 2, a2, a3, v4, v5);
}

