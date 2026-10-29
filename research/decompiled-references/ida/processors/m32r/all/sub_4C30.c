__int64 __fastcall sub_4C30(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v6; // ecx
  __int16 v7; // dx
  int v8; // eax
  __int64 v9; // r9
  __int16 v10; // r8
  int v11; // edx
  __int16 v12; // ax

  if ( (a3 & 0xF000) != 0x5000 )
    goto LABEL_2;
  v9 = a3 & 0x1F;
  v10 = BYTE1(a3) & 0xF;
  v11 = (a3 >> 5) & 7;
  switch ( v11 )
  {
    case 1:
      v12 = 72;
      goto LABEL_16;
    case 2:
      v12 = 69;
      goto LABEL_16;
    case 0:
      v12 = 75;
LABEL_16:
      *(_WORD *)(a2 + 24) = v12;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = v10;
      *(_BYTE *)(a2 + 81) = 5;
      *(_QWORD *)(a2 + 88) = v9;
      *a4 = 16;
      return 1;
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 236) != 1 )
    return 0;
  v6 = (a3 >> 4) & 0xF;
  if ( v6 == 9 )
  {
    v7 = 106;
  }
  else
  {
    if ( v6 != 8 )
      return 0;
    v7 = 107;
  }
  v8 = a3 & 0xFF0F;
  if ( v8 == 21504 )
  {
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 46) = 23;
    *(_BYTE *)(a2 + 45) = 1;
  }
  else if ( v8 > 21504 )
  {
    if ( v8 == 21505 )
    {
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 23;
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = 22;
      *(_BYTE *)(a2 + 85) = 1;
      *(_BYTE *)(a2 + 121) = 5;
      *(_QWORD *)(a2 + 128) = 2;
      *(_BYTE *)(a2 + 125) = 0;
    }
    else
    {
      if ( v8 != 21508 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 23;
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = 23;
      *(_BYTE *)(a2 + 85) = 1;
    }
  }
  else if ( v8 == 20484 )
  {
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 46) = 22;
    *(_BYTE *)(a2 + 45) = 1;
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 86) = 23;
    *(_BYTE *)(a2 + 85) = 1;
  }
  else
  {
    if ( v8 != 20485 )
      return 0;
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 46) = 22;
    *(_BYTE *)(a2 + 45) = 1;
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 86) = 23;
    *(_BYTE *)(a2 + 85) = 1;
    *(_BYTE *)(a2 + 121) = 5;
    *(_QWORD *)(a2 + 128) = 2;
    *(_BYTE *)(a2 + 125) = 0;
  }
  *(_WORD *)(a2 + 24) = v7;
  return 1;
}

