__int64 __fastcall sub_7330(__int64 a1, int a2)
{
  int v3; // esi
  int v5; // ecx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int16 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edx
  __int16 v12; // si
  __int64 v14; // rdi
  int v15; // ecx
  __int16 v16; // dx
  int v17; // esi
  __int16 v18; // cx
  unsigned int v19; // ecx
  __int16 v20; // di
  int v21; // ecx

  v3 = a2 >> 16;
  v5 = v3 & 0x60;
  if ( v5 == 64 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 3;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = (a2 >> 3) & 0x1F;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (a2 & 7) + 8;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 1;
    v14 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v14 + 40;
    v15 = BYTE1(a2) & 0x1F;
    if ( (unsigned int)v15 > 0x1B )
    {
LABEL_24:
      v17 = v3 & 0x1F;
      if ( v17 > 27 )
        return 1;
      v18 = 27;
      if ( v17 != 16 )
      {
        v18 = v17 - 1;
        if ( v17 < 17 )
          v18 = v17;
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v18;
      return 1;
    }
    v16 = 27;
    if ( v15 != 16 )
    {
      v16 = v15 - 1;
      if ( v15 < 17 )
        v16 = v15;
    }
    *(_BYTE *)(v14 + 41) = 1;
LABEL_23:
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v16;
    *(_QWORD *)(a1 + 8) += 40LL;
    goto LABEL_24;
  }
  if ( (v3 & 0x60u) <= 0x40 )
  {
    if ( (v3 & 0x60) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = a2 & 0x1F;
      if ( v7 <= 0x1B )
      {
        v8 = 27;
        if ( v7 != 16 )
        {
          v8 = v7 - 1;
          if ( (a2 & 0x1Fu) < 0x11 )
            v8 = v7;
        }
        *(_BYTE *)(v6 + 1) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v8;
        v6 = *(_QWORD *)(a1 + 8) + 40LL;
        *(_QWORD *)(a1 + 8) = v6;
      }
      *(_BYTE *)(v6 + 1) = 3;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = (a2 >> 11) & 0x1F;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (BYTE1(a2) & 7) + 8;
      goto LABEL_12;
    }
    v19 = a2 & 0x1F;
    if ( v19 <= 0x1B )
    {
      v20 = 27;
      if ( v19 != 16 )
      {
        v20 = v19 - 1;
        if ( (a2 & 0x1Fu) < 0x11 )
          v20 = v19;
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v20;
      *(_QWORD *)(a1 + 8) += 40LL;
    }
    v21 = BYTE1(a2) & 0x1F;
    if ( (unsigned int)v21 > 0x1B )
      goto LABEL_24;
    v16 = 27;
    if ( v21 != 16 )
    {
      v16 = v21 - 1;
      if ( v21 < 17 )
        v16 = v21;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 1;
    goto LABEL_23;
  }
  if ( v5 == 96 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 3;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = (a2 >> 3) & 0x1F;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (a2 & 7) + 8;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 1;
    v9 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v9 + 40;
    *(_BYTE *)(v9 + 41) = 3;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = (a2 >> 11) & 0x1F;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (BYTE1(a2) & 7) + 8;
LABEL_12:
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 1;
    v10 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v10 + 40;
    v11 = v3 & 0x1F;
    if ( (unsigned int)v11 <= 0x1B )
    {
      v12 = 27;
      if ( v11 != 16 )
      {
        v12 = v11 - 1;
        if ( v11 < 17 )
          v12 = v11;
      }
      *(_BYTE *)(v10 + 41) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v12;
    }
    return 1;
  }
  return 0;
}

