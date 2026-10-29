__int64 __fastcall sub_7A60(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v3; // cx
  __int64 result; // rax
  int v5; // ecx

  v3 = *(_WORD *)(a2 + 24);
  result = a2;
  if ( v3 > 0xB2u )
  {
    if ( (unsigned __int16)(v3 - 317) <= 1u )
    {
LABEL_6:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = (a3 >> 8) & 0xF;
      return result;
    }
LABEL_5:
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = 0;
    *(_WORD *)(a2 + 46) = (unsigned __int16)a3 >> 12;
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 0;
    *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
    *(_BYTE *)(a2 + 121) = 1;
    *(_BYTE *)(a2 + 125) = 0;
    *(_WORD *)(a2 + 126) = (unsigned __int8)a3 >> 4;
    return result;
  }
  if ( v3 <= 0x62u )
    goto LABEL_5;
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 0x63:
    case 0x64:
    case 0x66:
    case 0x67:
    case 0x9F:
    case 0xA9:
    case 0xAC:
      goto LABEL_6;
    case 0x88:
    case 0x89:
    case 0x90:
    case 0x91:
    case 0x92:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = ((unsigned __int16)a3 >> 12) + 37;
      *(_BYTE *)(a2 + 85) = 0;
      LOWORD(v5) = ((a3 >> 8) & 0xF) + 37;
      goto LABEL_8;
    case 0x8E:
    case 0x8F:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = (unsigned __int16)a3 >> 12;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 0;
      v5 = (a3 >> 8) & 0xF;
LABEL_8:
      *(_WORD *)(a2 + 86) = v5;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 0;
      *(_WORD *)(a2 + 126) = ((unsigned __int8)a3 >> 4) + 37;
      break;
    case 0xB2:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = (unsigned __int8)a3 >> 4;
      break;
    default:
      goto LABEL_5;
  }
  return result;
}

