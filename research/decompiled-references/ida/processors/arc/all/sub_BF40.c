__int64 __fastcall sub_BF40(__int64 a1)
{
  __int16 v1; // dx
  __int16 v3; // cx
  unsigned int *v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int16 v7; // dx

  v1 = *(_WORD *)(a1 + 40);
  if ( (unsigned __int16)(v1 - 138) <= 1u )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
    **(_DWORD **)(a1 + 376) |= 0x400000u;
    v4 = *(unsigned int **)(a1 + 376);
    v5 = *v4 & 0xFFFFFBFB;
    if ( *(_WORD *)(a1 + 40) == 138 )
      v5 |= 4u;
    *v4 = v5;
    v6 = *(_QWORD *)(a1 + 864);
    *(_WORD *)(a1 + 513) = 257;
    v7 = *(char *)(a1 + 88);
    *(_BYTE *)(v6 + 1) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v7;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
  }
  else
  {
    if ( v1 != 17 || *(_BYTE *)(a1 + 57) != 4 || *(_QWORD *)(a1 + 72) || (*(_BYTE *)(a1 + 44) & 0x1F) != 0 )
      return 0;
    v3 = *(_WORD *)(a1 + 62);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v3;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
  }
  return 1;
}

