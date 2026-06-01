__int64 __fastcall sub_7EE0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int16 v5; // di
  __int64 v6; // r8
  __int16 v7; // di
  __int16 v8; // si
  __int16 v9; // si

  v3 = *(unsigned __int16 *)(a2 + 24);
  result = a2;
  v5 = a3 >> 12;
  if ( (unsigned __int16)v3 > 0xE2u )
  {
    LOWORD(v3) = v3 - 235;
    switch ( v3 )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
      case 30LL:
      case 31LL:
      case 34LL:
      case 35LL:
      case 36LL:
      case 37LL:
      case 38LL:
      case 39LL:
        *(_BYTE *)(a2 + 41) = 1;
        v7 = v5 + 37;
        *(_BYTE *)(a2 + 45) = 0;
        goto LABEL_10;
      case 10LL:
      case 11LL:
      case 28LL:
      case 29LL:
      case 40LL:
      case 41LL:
        goto LABEL_15;
      case 16LL:
      case 17LL:
      case 23LL:
      case 24LL:
      case 25LL:
      case 43LL:
        goto LABEL_18;
      case 32LL:
      case 33LL:
        goto LABEL_22;
      default:
        goto LABEL_9;
    }
  }
  if ( (unsigned __int16)v3 > 0xCCu )
  {
    v6 = 1LL << ((unsigned __int8)v3 + 51);
    if ( (v6 & 0x33) == 0 )
    {
      if ( (v6 & 0x1D0000) == 0 )
      {
        if ( (v6 & 0x220000) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = v5 + 20;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 0;
          *(_WORD *)(a2 + 86) = (HIBYTE(a3) & 0xF) + 20;
          *(_BYTE *)(a2 + 121) = 1;
          *(_BYTE *)(a2 + 125) = 0;
          *(_WORD *)(a2 + 126) = ((unsigned __int8)a3 >> 4) + 37;
          return result;
        }
        goto LABEL_9;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      v9 = (HIBYTE(a3) & 0xF) + 20;
      *(_WORD *)(result + 46) = v5 + 20;
      *(_BYTE *)(result + 81) = 1;
      *(_BYTE *)(result + 85) = 0;
LABEL_19:
      *(_WORD *)(result + 86) = v9;
      *(_BYTE *)(result + 121) = 1;
      *(_BYTE *)(result + 125) = 0;
      *(_WORD *)(result + 126) = (unsigned __int8)a3 >> 4;
      return result;
    }
LABEL_18:
    *(_BYTE *)(a2 + 41) = 1;
    v9 = HIBYTE(a3) & 0xF;
    *(_BYTE *)(result + 45) = 0;
    *(_WORD *)(result + 46) = v5 + 20;
    *(_BYTE *)(result + 81) = 1;
    *(_BYTE *)(result + 85) = 0;
    goto LABEL_19;
  }
  if ( (unsigned __int16)v3 <= 0xC0u )
  {
    if ( (unsigned __int16)v3 > 0xBEu )
    {
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = v5 + 20;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 0;
      *(_QWORD *)(a2 + 88) = HIBYTE(a3) & 0xF;
      return result;
    }
    if ( (_WORD)v3 != 55 )
    {
      if ( (unsigned __int16)(v3 - 189) <= 1u )
      {
LABEL_15:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 0;
        v8 = (HIBYTE(a3) & 0xF) + 20;
        *(_WORD *)(result + 46) = v5;
        *(_BYTE *)(result + 81) = 1;
        *(_BYTE *)(result + 85) = 0;
LABEL_16:
        *(_WORD *)(result + 86) = v8;
        *(_BYTE *)(result + 121) = 5;
        *(_BYTE *)(result + 125) = 0;
        *(_QWORD *)(result + 128) = (unsigned __int8)a3 >> 4;
        return result;
      }
      goto LABEL_9;
    }
    goto LABEL_18;
  }
  if ( (unsigned __int16)v3 > 0xC8u )
  {
    if ( (unsigned __int16)(v3 - 201) <= 1u )
      goto LABEL_15;
  }
  else if ( (unsigned __int16)v3 > 0xC6u )
  {
LABEL_22:
    *(_BYTE *)(a2 + 41) = 1;
    v8 = HIBYTE(a3) & 0xF;
    *(_BYTE *)(result + 45) = 0;
    *(_WORD *)(result + 46) = v5 + 20;
    *(_BYTE *)(result + 81) = 1;
    *(_BYTE *)(result + 85) = 0;
    goto LABEL_16;
  }
LABEL_9:
  *(_BYTE *)(a2 + 41) = 1;
  v7 = v5 + 20;
  *(_BYTE *)(a2 + 45) = 0;
LABEL_10:
  *(_WORD *)(a2 + 46) = v7;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = (HIBYTE(a3) & 0xF) + 20;
  *(_BYTE *)(a2 + 121) = 1;
  *(_BYTE *)(a2 + 125) = 0;
  *(_WORD *)(a2 + 126) = ((unsigned __int8)a3 >> 4) + 20;
  return result;
}
