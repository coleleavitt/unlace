__int64 __fastcall sub_F820(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4, char a5)
{
  char v8; // dl
  unsigned int v9; // ecx

  if ( (a5 & 0x40) == 0 )
  {
    *(_BYTE *)(a2 + 121) = 11;
    *(_BYTE *)(a2 + 125) = 2;
    *(_QWORD *)(a2 + 128) = (a4 >> 4) & 0x7FF;
    *(_WORD *)(a2 + 24) = 167;
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 86) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
    if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
    {
LABEL_3:
      *(_BYTE *)(a2 + 85) = 7;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  if ( (a5 & 0x20) == 0 )
  {
    v9 = 0;
    if ( (a5 & 0x1F) != 0 )
      return v9;
    *(_BYTE *)(a2 + 121) = 1;
    *(_WORD *)(a2 + 24) = 166;
    *(_WORD *)(a2 + 126) = (a4 >> 4) & 0x1F;
    if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
    {
      *(_BYTE *)(a2 + 125) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
      goto LABEL_3;
    }
    *(_BYTE *)(a2 + 125) = 2;
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 86) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
LABEL_13:
    *(_BYTE *)(a2 + 85) = 2;
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
    v8 = 2;
    goto LABEL_5;
  }
  *(_BYTE *)(a2 + 81) = 5;
  *(_WORD *)(a2 + 24) = 168;
  *(_BYTE *)(a2 + 85) = 2;
  *(_BYTE *)(a2 + 121) = 11;
  *(_BYTE *)(a2 + 125) = 2;
  *(_QWORD *)(a2 + 88) = (((a3 & 0x8000u) != 0) + ((2 * (_BYTE)a4) & 0x1E)) & 0x3F;
  *(_BYTE *)(a2 + 41) = 1;
  *(_QWORD *)(a2 + 128) = (a4 >> 4) & 0x3FF;
  *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
  if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
  {
    v8 = 2;
    goto LABEL_5;
  }
LABEL_4:
  v8 = 7;
LABEL_5:
  *(_BYTE *)(a2 + 45) = v8;
  return *(unsigned __int16 *)(a2 + 26);
}
