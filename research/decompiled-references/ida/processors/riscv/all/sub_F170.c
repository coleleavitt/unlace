__int64 __fastcall sub_F170(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char a5,
        unsigned __int8 a6)
{
  char v8; // r10
  __int16 v9; // dx
  char v10; // si
  char v11; // r9

  v8 = a5;
  v9 = aTsqru[a6 >> 2];
  *(_WORD *)(a2 + 24) = v9;
  if ( !v9 )
    return 0;
  switch ( a5 )
  {
    case 3:
      v10 = 1;
      v8 = 7;
      break;
    case 4:
      if ( v9 == 92 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        v8 = 8;
        *(_WORD *)(a2 + 28) = 770;
        *(_BYTE *)(a2 + 45) = 8;
        *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
        goto LABEL_7;
      }
      return 0;
    case 2:
      v10 = 4;
      break;
    default:
      return 0;
  }
  *(_BYTE *)(a2 + 29) = v10;
  *(_BYTE *)(a2 + 28) = 2;
  *(_BYTE *)(a2 + 41) = 1;
  *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
  *(_BYTE *)(a2 + 45) = v8;
  if ( v9 == 81 )
  {
    if ( (a4 & 0x1F0) == 0 )
    {
      *(_BYTE *)(a2 + 81) = 3;
      *(_QWORD *)(a2 + 96) = 0;
      *(_BYTE *)(a2 + 85) = v8;
      *(_WORD *)(a2 + 86) = ((2 * (_BYTE)a4) & 0x1E) + (a3 >> 15);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_7:
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = v8;
  *(_BYTE *)(a2 + 121) = 3;
  *(_WORD *)(a2 + 86) = (a4 >> 4) & 0x1F;
  *(_BYTE *)(a2 + 125) = v8;
  *(_QWORD *)(a2 + 136) = 0;
  *(_WORD *)(a2 + 126) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
LABEL_8:
  v11 = a6 & 3;
  switch ( v11 )
  {
    case 2:
      *(_BYTE *)(a2 + 28) = 18;
      *(_BYTE *)(a2 + 30) = 1;
      break;
    case 3:
      *(_BYTE *)(a2 + 28) = 18;
      *(_BYTE *)(a2 + 30) = 2;
      break;
    case 1:
      *(_BYTE *)(a2 + 28) = 18;
      *(_BYTE *)(a2 + 30) = 0;
      break;
  }
  return *(unsigned __int16 *)(a2 + 26);
}

