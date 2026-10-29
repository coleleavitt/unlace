__int64 __fastcall sub_6EF0(__int64 a1, int a2)
{
  int v3; // edx
  __int64 v4; // rdx
  int v5; // ecx
  __int16 v6; // si
  __int64 v7; // rdx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int16 v11; // cx
  unsigned int v12; // edx
  __int16 v13; // cx
  unsigned int v14; // eax
  __int16 v15; // dx

  v3 = (a2 >> 16) & 0x60;
  if ( v3 == 64 )
  {
    v9 = (a2 >> 8) & 0x1F;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 3;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = (a2 >> 3) & 0x1F;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (a2 & 7) + 8;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 1;
    v10 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v10 + 40;
    if ( v9 > 0x1B )
      return 1;
    v11 = 27;
    if ( v9 != 16 )
    {
      v11 = v9 - 1;
      if ( ((a2 >> 8) & 0x1Fu) < 0x11 )
        v11 = v9;
    }
    *(_BYTE *)(v10 + 41) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v11;
    return 1;
  }
  else if ( ((a2 >> 16) & 0x60u) > 0x40 )
  {
    if ( v3 == 96 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 3;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = (a2 >> 3) & 0x1F;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (a2 & 7) + 8;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 1;
      v7 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v7 + 40;
      *(_BYTE *)(v7 + 41) = 3;
LABEL_12:
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = (a2 >> 11) & 0x1F;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (BYTE1(a2) & 7) + 8;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 1;
      return 1;
    }
    return 0;
  }
  else
  {
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v5 = a2 & 0x1F;
      if ( (unsigned int)v5 <= 0x1B )
      {
        v6 = 27;
        if ( v5 != 16 )
        {
          v6 = v5 - 1;
          if ( v5 < 17 )
            v6 = v5;
        }
        *(_BYTE *)(v4 + 1) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v6;
        v4 = *(_QWORD *)(a1 + 8) + 40LL;
        *(_QWORD *)(a1 + 8) = v4;
      }
      *(_BYTE *)(v4 + 1) = 3;
      goto LABEL_12;
    }
    v12 = a2 & 0x1F;
    if ( v12 <= 0x1B )
    {
      v13 = 27;
      if ( v12 != 16 )
      {
        v13 = v12 - 1;
        if ( (a2 & 0x1Fu) < 0x11 )
          v13 = v12;
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v13;
      *(_QWORD *)(a1 + 8) += 40LL;
    }
    v14 = (a2 >> 8) & 0x1F;
    if ( v14 > 0x1B )
      return 1;
    v15 = 27;
    if ( v14 != 16 )
    {
      v15 = v14 - 1;
      if ( ((a2 >> 8) & 0x1Fu) < 0x11 )
        v15 = v14;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v15;
    return 1;
  }
}

