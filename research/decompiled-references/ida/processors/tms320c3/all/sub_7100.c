__int64 __fastcall sub_7100(_QWORD *a1, int a2)
{
  unsigned __int16 v2; // dx
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  __int64 v7; // rsi
  __int16 v8; // di
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  int v12; // ecx
  __int64 v13; // rsi
  __int16 v14; // di
  int v15; // ecx
  __int64 v16; // rsi
  __int16 v17; // di
  int v18; // ecx
  __int16 v19; // si
  int v20; // edx
  __int16 v21; // cx

  v2 = a2;
  v4 = a2 >> 16;
  v5 = BYTE2(a2) & 0x60;
  if ( v5 == 64 )
  {
    v15 = v4 & 0x1F;
    v16 = a1[1];
    if ( v15 <= 27 )
    {
      v17 = 27;
      if ( v15 != 16 )
      {
        v17 = v15 - 1;
        if ( v15 < 17 )
          v17 = v15;
      }
      *(_BYTE *)(v16 + 1) = 1;
      *(_BYTE *)(a1[1] + 5LL) = 0;
      *(_WORD *)(a1[1] + 6LL) = v17;
      v16 = a1[1] + 40LL;
      a1[1] = v16;
    }
    *(_BYTE *)(v16 + 1) = 3;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    *(_WORD *)(a1[1] + 6LL) = 0;
    *(_BYTE *)(a1[1] + 32LL) = 8;
    *(_QWORD *)(a1[1] + 16LL) = (unsigned __int8)v2;
    return 1;
  }
  if ( v5 > 64 )
  {
    if ( v5 != 96 )
      return 0;
    v12 = v4 & 0x1F;
    v13 = a1[1];
    if ( v12 <= 27 )
    {
      v14 = 27;
      if ( v12 != 16 )
      {
        v14 = v12 - 1;
        if ( v12 < 17 )
          v14 = v12;
      }
      *(_BYTE *)(v13 + 1) = 1;
      *(_BYTE *)(a1[1] + 5LL) = 0;
      *(_WORD *)(a1[1] + 6LL) = v14;
      v13 = a1[1] + 40LL;
      a1[1] = v13;
    }
    *(_BYTE *)(v13 + 1) = 5;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    *(_QWORD *)(a1[1] + 8LL) = v2;
    return 1;
  }
  if ( !v5 )
  {
    v18 = v4 & 0x1F;
    if ( v18 <= 27 )
    {
      v19 = 27;
      if ( v18 != 16 )
      {
        v19 = v18 - 1;
        if ( v18 < 17 )
          v19 = v18;
      }
      *(_BYTE *)(a1[1] + 1LL) = 1;
      *(_BYTE *)(a1[1] + 5LL) = 0;
      *(_WORD *)(a1[1] + 6LL) = v19;
      a1[1] += 40LL;
    }
    v20 = v2 & 0x1F;
    if ( v20 <= 27 )
    {
      v21 = 27;
      if ( v20 != 16 )
      {
        v21 = v20 - 1;
        if ( v20 < 17 )
          v21 = v20;
      }
      *(_BYTE *)(a1[1] + 1LL) = 1;
      *(_BYTE *)(a1[1] + 5LL) = 0;
      *(_WORD *)(a1[1] + 6LL) = v21;
      return 1;
    }
    return 1;
  }
  v6 = v4 & 0x1F;
  v7 = a1[1];
  if ( v6 <= 27 )
  {
    v8 = 27;
    if ( v6 != 16 )
    {
      v8 = v6 - 1;
      if ( v6 < 17 )
        v8 = v6;
    }
    *(_BYTE *)(v7 + 1) = 1;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    *(_WORD *)(a1[1] + 6LL) = v8;
    v7 = a1[1] + 40LL;
    a1[1] = v7;
  }
  *(_QWORD *)(v7 + 16) = v2;
  v9 = a1[1];
  v10 = *(_WORD *)(*a1 + 24LL);
  if ( v10 > 0x50u )
  {
    if ( (unsigned __int16)(v10 - 82) > 2u )
      goto LABEL_11;
  }
  else if ( v10 <= 0x4Cu )
  {
LABEL_11:
    *(_BYTE *)(v9 + 1) = 2;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    return 1;
  }
  *(_BYTE *)(v9 + 1) = 7;
  *(_BYTE *)(a1[1] + 5LL) = 9;
  return 1;
}

