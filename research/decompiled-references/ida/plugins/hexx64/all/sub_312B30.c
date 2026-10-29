__int64 __fastcall sub_312B30(_DWORD *a1, _DWORD *a2, __int64 *a3)
{
  int v4; // eax
  __int64 v5; // r8

  if ( (*a1 & 0xF) != 2 )
    return 0;
  v4 = a1[1];
  v5 = -1;
  if ( v4 != 8 )
    v5 = (1LL << (8 * (unsigned __int8)v4)) - 1;
  return sub_3174B0((const __m128i **)a1 + 1, a2, a3, v4, v5);
}

