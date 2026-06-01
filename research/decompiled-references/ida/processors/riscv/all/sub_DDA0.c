__int64 __fastcall sub_DDA0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int8 a6,
        char a7)
{
  unsigned int v10; // edx
  char v11; // cl
  char v12; // dl
  char v13; // r8
  char v14; // dl
  char v15; // r8

  *(_BYTE *)(a2 + 201) = 9;
  *(_WORD *)(a2 + 24) = aAb[(a3 >> 2) & 3];
  *(_QWORD *)(a2 + 208) = a6;
  if ( a6 == 7 )
  {
    *(_BYTE *)(a2 + 204) &= ~8u;
    goto LABEL_3;
  }
  v10 = 0;
  if ( (unsigned __int8)(a6 - 5) > 1u )
  {
LABEL_3:
    *(_BYTE *)(a2 + 28) = 2;
    *(_BYTE *)(a2 + 29) = a7 & 3;
    v11 = byte_2AB64[a7 & 3];
    v12 = *(_BYTE *)(a1 + 468);
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = v11;
    *(_WORD *)(a2 + 46) = (char)((((unsigned __int16)a4 >> 7) & 0x1F) + 32 * ((v12 & 8) == 0));
    v13 = *(_BYTE *)(a1 + 468);
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = v11;
    *(_WORD *)(a2 + 86) = (char)(32 * ((v13 & 8) == 0) + (a4 < 0) + ((2 * a5) & 0x1E));
    v14 = *(_BYTE *)(a1 + 468);
    *(_BYTE *)(a2 + 121) = 1;
    *(_BYTE *)(a2 + 125) = v11;
    *(_WORD *)(a2 + 126) = (char)(((a5 >> 4) & 0x1F) + 32 * ((v14 & 8) == 0));
    v15 = *(_BYTE *)(a1 + 468);
    *(_BYTE *)(a2 + 161) = 1;
    v10 = *(unsigned __int16 *)(a2 + 26);
    *(_BYTE *)(a2 + 165) = v11;
    *(_WORD *)(a2 + 166) = (char)((a5 >> 11) + 32 * ((v15 & 8) == 0));
  }
  return v10;
}

