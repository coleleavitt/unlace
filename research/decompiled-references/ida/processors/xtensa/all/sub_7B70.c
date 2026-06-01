__int64 __fastcall sub_7B70(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // ecx
  unsigned __int8 v7; // cl
  unsigned int v8; // ecx
  __int16 v9; // cx

  v3 = *(unsigned __int16 *)(a2 + 24);
  result = a2;
  if ( (unsigned __int16)v3 > 0xB4u )
  {
    LOWORD(v3) = v3 - 285;
    if ( (unsigned __int16)v3 <= 0x2Eu )
    {
      v5 = 0x4FFC0000000FLL;
      if ( _bittest64(&v5, v3) )
      {
LABEL_8:
        v7 = a3;
        a3 = (a3 >> 8) & 0xF;
        LOWORD(v6) = v7 >> 4;
        goto LABEL_7;
      }
    }
    goto LABEL_6;
  }
  if ( (unsigned __int16)v3 <= 0x4Bu )
  {
LABEL_6:
    LOWORD(v6) = (unsigned __int16)a3 >> 12;
    LOWORD(a3) = (unsigned __int8)a3 >> 4;
    goto LABEL_7;
  }
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 0x4C:
    case 0x4D:
    case 0x6D:
    case 0x6E:
    case 0xA5:
    case 0xA6:
    case 0xA7:
    case 0xA8:
    case 0xB3:
    case 0xB4:
      goto LABEL_8;
    case 0x5C:
      LOWORD(v6) = (unsigned __int16)a3 >> 12;
      a3 = (a3 >> 8) & 0xF;
      break;
    case 0x7D:
    case 0x7E:
    case 0x7F:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
      v8 = a3;
      LOWORD(a3) = (unsigned __int8)a3 >> 4;
      v6 = (v8 >> 8) & 0xF;
      break;
    case 0x86:
    case 0x87:
    case 0x8A:
    case 0x8B:
      v9 = (unsigned __int8)a3 >> 4;
      a3 = ((a3 >> 8) & 0xF) + 37;
      LOWORD(v6) = v9 + 37;
      break;
    default:
      goto LABEL_6;
  }
LABEL_7:
  *(_BYTE *)(result + 41) = 1;
  *(_BYTE *)(result + 45) = 0;
  *(_WORD *)(result + 46) = v6;
  *(_BYTE *)(result + 81) = 1;
  *(_BYTE *)(result + 85) = 0;
  *(_WORD *)(result + 86) = a3;
  return result;
}

