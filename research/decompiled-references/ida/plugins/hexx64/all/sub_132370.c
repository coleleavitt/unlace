char __fastcall sub_132370(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __m128i a7,
        __m128 a8)
{
  int v9; // ecx

  v9 = *(_DWORD *)(a3 + 68);
  if ( *(_DWORD *)(a5 + 68) != v9 || (*(_BYTE *)(a3 + 4) & 0x10) != 0 || (*(_BYTE *)(a5 + 4) & 0x10) != 0 )
    return 0;
  if ( *(_DWORD *)a3 == 10 && *(_BYTE *)(a3 + 32) == 4 && *(_DWORD *)(a3 + 36) == 2 * v9 )
    return sub_131FD0(a1, a4, a5, a2, *(unsigned int **)(a3 + 40), a7, a8);
  if ( *(_DWORD *)a5 == 11 && *(_BYTE *)(a5 + 32) == 4 && *(_DWORD *)(a5 + 36) == 2 * v9 )
    return sub_132040(a1, a2, (int *)a3, a4, *(unsigned int **)(a5 + 40), *(double *)a7.m128i_i64, a8);
  return sub_131970(a1, a2, (int *)a3, a4, (unsigned int *)a5, 2, a7, a8, a6);
}

