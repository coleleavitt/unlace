__int64 __fastcall sub_5960(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // r8d
  unsigned __int64 v7; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rdx

  v4 = HIBYTE(a3) - 32;
  if ( v4 > 0x1F )
    return 0;
  v5 = (unsigned __int16)aXyz[v4];
  *(_DWORD *)(a2 + 28) |= ((a3 & 2) != 0) + 1;
  *(_WORD *)(a2 + 24) = v5;
  v6 = (a3 >> 19) & 0x1F;
  if ( (a3 & 0x2000) != 0 )
  {
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 0;
    *(_QWORD *)(a2 + 48) = v6;
    if ( v4 > 7 )
      goto LABEL_4;
    return 0;
  }
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 2;
  *(_WORD *)(a2 + 46) = v6;
LABEL_4:
  if ( ((__int64)off_D6A0[2 * v5 + 1] & 0x208) != 0 )
  {
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 2;
    *(_BYTE *)(a2 + 121) = 7;
    *(_BYTE *)(a2 + 125) = 9;
    *(_WORD *)(a2 + 86) = ((a3 >> 14) & 0x1F) + 32 * (a3 & 1);
    v7 = a3 & 0x1FFC | 0xFFFFFFFFFFFFE000LL;
    v8 = (a3 & 0x1000) == 0;
    v9 = a3 & 0x1FFC;
    if ( !v8 )
      v9 = v7;
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(_QWORD *)(a2 + 8) + v9);
  }
  return 1;
}

