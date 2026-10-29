char __fastcall sub_12E930(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v7; // ecx

  v7 = *(_DWORD *)(a3 + 68);
  if ( *(_DWORD *)(a5 + 68) != v7 || (*(_BYTE *)(a3 + 4) & 0x10) != 0 || (*(_BYTE *)(a5 + 4) & 0x10) != 0 )
    return 0;
  if ( *(_DWORD *)a3 == 10 && *(_BYTE *)(a3 + 32) == 4 && *(_DWORD *)(a3 + 36) == 2 * v7 )
    return sub_12E590(a1, a4, a5, a2, *(unsigned int **)(a3 + 40));
  if ( *(_DWORD *)a5 == 11 && *(_BYTE *)(a5 + 32) == 4 && *(_DWORD *)(a5 + 36) == 2 * v7 )
    return sub_12E600(a1, a2, (int *)a3, a4, *(unsigned int **)(a5 + 40));
  return sub_12DF30(a1, a2, (int *)a3, a4, (unsigned int *)a5, 2, a6);
}

