__int64 __fastcall sub_6D10(_QWORD *a1, int a2)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  int v4; // ecx
  unsigned __int16 v5; // cx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edx
  __int16 v9; // si
  int v11; // ecx
  __int16 v12; // dx
  int v13; // esi
  __int16 v14; // cx

  v2 = a2;
  v3 = a2 >> 16;
  v4 = v3 & 0x60;
  if ( v4 == 64 )
  {
    *(_BYTE *)(a1[1] + 1LL) = 3;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    *(_WORD *)(a1[1] + 6LL) = 0;
    *(_BYTE *)(a1[1] + 32LL) = 8;
    *(_QWORD *)(a1[1] + 16LL) = (unsigned __int8)v2;
    goto LABEL_15;
  }
  if ( (v3 & 0x60u) > 0x40 )
  {
    if ( v4 == 96 )
    {
      *(_BYTE *)(a1[1] + 1LL) = 5;
      *(_BYTE *)(a1[1] + 5LL) = 0;
      *(_QWORD *)(a1[1] + 8LL) = v2;
      v7 = a1[1];
      a1[1] = v7 + 40;
      v8 = v3 & 0x1F;
      if ( (unsigned int)v8 > 0x1B )
        return 1;
LABEL_9:
      v9 = 27;
      if ( v8 != 16 )
      {
        v9 = v8 - 1;
        if ( v8 < 17 )
          v9 = v8;
      }
      *(_BYTE *)(v7 + 41) = 1;
      *(_BYTE *)(a1[1] + 5LL) = 0;
      *(_WORD *)(a1[1] + 6LL) = v9;
      return 1;
    }
    return 0;
  }
  else
  {
    if ( (v3 & 0x60) != 0 )
    {
      *(_QWORD *)(a1[1] + 16LL) = v2;
      v5 = *(_WORD *)(*a1 + 24LL);
      v6 = a1[1];
      if ( v5 > 0x50u )
      {
        if ( (unsigned __int16)(v5 - 82) > 2u )
          goto LABEL_6;
      }
      else if ( v5 <= 0x4Cu )
      {
LABEL_6:
        *(_BYTE *)(v6 + 1) = 2;
        *(_BYTE *)(a1[1] + 5LL) = 0;
        goto LABEL_15;
      }
      *(_BYTE *)(v6 + 1) = 7;
      *(_BYTE *)(a1[1] + 5LL) = 9;
LABEL_15:
      v7 = a1[1];
      a1[1] = v7 + 40;
      v8 = v3 & 0x1F;
      if ( (unsigned int)v8 > 0x1B )
        return 1;
      goto LABEL_9;
    }
    v11 = v2 & 0x1F;
    if ( (unsigned int)v11 <= 0x1B )
    {
      v12 = 27;
      if ( v11 != 16 )
      {
        v12 = v11 - 1;
        if ( v11 < 17 )
          v12 = v11;
      }
      *(_BYTE *)(a1[1] + 1LL) = 1;
      *(_BYTE *)(a1[1] + 5LL) = 0;
      *(_WORD *)(a1[1] + 6LL) = v12;
      a1[1] += 40LL;
    }
    v13 = v3 & 0x1F;
    if ( v13 > 27 )
      return 1;
    v14 = 27;
    if ( v13 != 16 )
    {
      v14 = v13 - 1;
      if ( v13 < 17 )
        v14 = v13;
    }
    *(_BYTE *)(a1[1] + 1LL) = 1;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    *(_WORD *)(a1[1] + 6LL) = v14;
    return 1;
  }
}

