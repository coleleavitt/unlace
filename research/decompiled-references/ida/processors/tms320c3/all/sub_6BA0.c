__int64 __fastcall sub_6BA0(_QWORD *a1, int a2)
{
  int v2; // edx
  __int64 v3; // rdx
  unsigned __int16 v4; // ax
  unsigned int v6; // eax
  __int16 v7; // dx

  v2 = (a2 >> 16) & 0x60;
  if ( v2 == 64 )
  {
    *(_BYTE *)(a1[1] + 1LL) = 3;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    *(_WORD *)(a1[1] + 6LL) = (int)(unsigned __int16)a2 >> 11;
    *(_BYTE *)(a1[1] + 32LL) = (BYTE1(a2) & 7) + 8;
    *(_QWORD *)(a1[1] + 16LL) = (unsigned __int8)a2;
    return 1;
  }
  if ( ((a2 >> 16) & 0x60u) > 0x40 )
  {
    if ( v2 != 96 )
      return 0;
    *(_BYTE *)(a1[1] + 1LL) = 5;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    *(_QWORD *)(a1[1] + 8LL) = (unsigned __int16)a2;
    return 1;
  }
  if ( !v2 )
  {
    v6 = a2 & 0x1F;
    if ( v6 <= 0x1B )
    {
      v7 = 27;
      if ( v6 != 16 )
      {
        v7 = v6 - 1;
        if ( (a2 & 0x1Fu) < 0x11 )
          v7 = v6;
      }
      *(_BYTE *)(a1[1] + 1LL) = 1;
      *(_BYTE *)(a1[1] + 5LL) = 0;
      *(_WORD *)(a1[1] + 6LL) = v7;
      return 1;
    }
    return 1;
  }
  *(_QWORD *)(a1[1] + 16LL) = (unsigned __int16)a2;
  v3 = a1[1];
  v4 = *(_WORD *)(*a1 + 24LL);
  if ( v4 > 0x50u )
  {
    if ( (unsigned __int16)(v4 - 82) > 2u )
      goto LABEL_6;
  }
  else if ( v4 <= 0x4Cu )
  {
LABEL_6:
    *(_BYTE *)(v3 + 1) = 2;
    *(_BYTE *)(a1[1] + 5LL) = 0;
    return 1;
  }
  *(_BYTE *)(v3 + 1) = 7;
  *(_BYTE *)(a1[1] + 5LL) = 9;
  return 1;
}

