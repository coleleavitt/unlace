__int64 __fastcall sub_7AA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edx
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  char v10; // al
  int v11; // eax
  int v12; // eax
  __int16 v13; // dx
  __int16 v14; // ax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  char v18; // al

  result = insn_get_next_byte();
  *(_DWORD *)(a1 + 228) = (unsigned __int8)result;
  switch ( (char)result )
  {
    case 64:
    case 72:
    case 80:
    case 88:
    case 96:
    case 104:
    case 120:
      *(_WORD *)(a2 + 24) = 27;
      if ( ((*(int *)(a1 + 228) >> 3) & 7) == 6 )
      {
        v10 = 3;
        *(_WORD *)(a2 + 46) = 10;
      }
      else
      {
        *(_WORD *)(a2 + 46) = (*(int *)(a1 + 228) >> 3) & 7;
        v10 = 1;
      }
      *(_BYTE *)(a2 + 41) = v10;
      *(_BYTE *)(a2 + 81) = 3;
      *(_WORD *)(a2 + 86) = 1;
      return 1;
    case 65:
    case 73:
    case 81:
    case 89:
    case 97:
    case 105:
    case 121:
      *(_BYTE *)(a2 + 41) = 3;
      *(_WORD *)(a2 + 24) = 48;
      *(_WORD *)(a2 + 46) = 1;
      goto LABEL_15;
    case 66:
    case 74:
    case 82:
    case 90:
    case 98:
    case 106:
    case 114:
    case 122:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 24) = (result & 8) == 0 ? 130 : 2;
      *(_WORD *)(a2 + 46) = 10;
      v7 = *(_DWORD *)(a1 + 228);
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 1;
      v8 = (v7 >> 4) & 3;
      v9 = v8 + 8;
      v6 = (_WORD)v8 == 3;
      result = 12;
      if ( !v6 )
        result = v9;
      *(_WORD *)(a2 + 86) = result;
      return result;
    case 67:
    case 83:
    case 115:
      *(_BYTE *)(a2 + 41) = 2;
      *(_WORD *)(a2 + 24) = 43;
      *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word();
      v15 = *(_DWORD *)(a1 + 228);
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 1;
      v16 = (v15 >> 4) & 3;
      *(_BYTE *)(a2 + 45) = 1;
      v17 = v16 + 8;
      v6 = (_WORD)v16 == 3;
      result = 12;
      if ( !v6 )
        result = v17;
      *(_WORD *)(a2 + 86) = result;
      return result;
    case 68:
      *(_WORD *)(a2 + 24) = 109;
      return result;
    case 69:
      *(_WORD *)(a2 + 24) = 118;
      return result;
    case 70:
      *(_BYTE *)(a2 + 41) = 5;
      *(_WORD *)(a2 + 24) = 96;
      *(_QWORD *)(a2 + 48) = 0;
      return result;
    case 71:
      *(_BYTE *)(a2 + 84) &= ~8u;
      *(_WORD *)(a2 + 24) = 43;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 17;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = 7;
      return result;
    case 75:
    case 91:
    case 123:
      *(_WORD *)(a2 + 24) = 43;
      v11 = *(_DWORD *)(a1 + 228);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      v12 = (v11 >> 4) & 3;
      *(_BYTE *)(a2 + 81) = 2;
      v13 = v12 + 8;
      v6 = (_WORD)v12 == 3;
      v14 = 12;
      if ( !v6 )
        v14 = v13;
      *(_WORD *)(a2 + 46) = v14;
      LOWORD(result) = insn_get_next_word();
      *(_BYTE *)(a2 + 45) = 1;
      result = (unsigned __int16)result;
      *(_BYTE *)(a2 + 85) = 1;
      *(_QWORD *)(a2 + 96) = (unsigned __int16)result;
      return result;
    case 77:
      result = 117;
      *(_WORD *)(a2 + 24) = 117;
      return result;
    case 79:
      *(_BYTE *)(a2 + 84) &= ~8u;
      *(_WORD *)(a2 + 24) = 43;
      *(_WORD *)(a2 + 46) = 16;
      result = 7;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = 7;
      return result;
    case 86:
      result = 96;
      *(_BYTE *)(a2 + 41) = 5;
      *(_WORD *)(a2 + 24) = 96;
      *(_QWORD *)(a2 + 48) = 1;
      return result;
    case 87:
      *(_BYTE *)(a2 + 44) &= ~8u;
      *(_WORD *)(a2 + 24) = 43;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = 17;
      return result;
    case 94:
      *(_BYTE *)(a2 + 41) = 5;
      *(_WORD *)(a2 + 24) = 96;
      *(_QWORD *)(a2 + 48) = 2;
      return result;
    case 95:
      *(_BYTE *)(a2 + 44) &= ~8u;
      *(_WORD *)(a2 + 24) = 43;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = 16;
      return result;
    case 100:
      if ( (*(_BYTE *)(a1 + 224) & 0x19) == 0 )
        return result;
      *(_WORD *)(a2 + 24) = 147;
      break;
    case 103:
      *(_WORD *)(a2 + 24) = 128;
      return result;
    case 111:
      *(_WORD *)(a2 + 24) = 123;
      return result;
    case 116:
      if ( (*(_BYTE *)(a1 + 224) & 0x19) == 0 )
        return result;
      *(_WORD *)(a2 + 24) = 148;
      break;
    case 118:
      if ( (*(_BYTE *)(a1 + 224) & 0x19) != 0 )
      {
        *(_WORD *)(a2 + 24) = 146;
        return 146;
      }
      return result;
    case -125:
      if ( (*(_BYTE *)(a1 + 224) & 0x19) != 0 )
      {
        *(_WORD *)(a2 + 24) = 141;
        return 141;
      }
      return result;
    case -117:
      if ( (*(_BYTE *)(a1 + 224) & 0x19) != 0 )
        *(_WORD *)(a2 + 24) = 143;
      return result;
    case -109:
      if ( (*(_BYTE *)(a1 + 224) & 0x19) != 0 )
      {
        *(_WORD *)(a2 + 24) = 142;
        return 142;
      }
      return result;
    case -101:
      if ( (*(_BYTE *)(a1 + 224) & 0x19) != 0 )
        *(_WORD *)(a2 + 24) = 144;
      return result;
    case -96:
      result = 107;
      *(_WORD *)(a2 + 24) = 107;
      return result;
    case -95:
      result = 88;
      *(_WORD *)(a2 + 24) = 88;
      return result;
    case -94:
      result = 100;
      *(_WORD *)(a2 + 24) = 100;
      return result;
    case -93:
      result = 114;
      *(_WORD *)(a2 + 24) = 114;
      return result;
    case -88:
      result = 105;
      *(_WORD *)(a2 + 24) = 105;
      return result;
    case -87:
      *(_WORD *)(a2 + 24) = 86;
      return result;
    case -86:
      *(_WORD *)(a2 + 24) = 98;
      return result;
    case -85:
      *(_WORD *)(a2 + 24) = 113;
      return result;
    case -80:
      *(_WORD *)(a2 + 24) = 108;
      return result;
    case -79:
      *(_WORD *)(a2 + 24) = 89;
      return result;
    case -78:
      *(_WORD *)(a2 + 24) = 101;
      return result;
    case -77:
      *(_WORD *)(a2 + 24) = 112;
      return result;
    case -72:
      *(_WORD *)(a2 + 24) = 106;
      return result;
    case -71:
      *(_WORD *)(a2 + 24) = 87;
      return result;
    case -70:
      result = 99;
      *(_WORD *)(a2 + 24) = 99;
      return result;
    case -69:
      result = 111;
      *(_WORD *)(a2 + 24) = 111;
      return result;
    default:
      if ( (*(_BYTE *)(a1 + 224) & 0x19) != 0 )
      {
        if ( (result & 0xC0) != 0 )
        {
          if ( (result & 0xC0) == 0x40 )
          {
            if ( (unsigned __int8)result == 112 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 24) = 27;
              *(_BYTE *)(a2 + 45) = 0;
              *(_WORD *)(a2 + 46) = 18;
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = 1;
              return 27;
            }
            else
            {
              result &= 0xFu;
              if ( (_BYTE)result == 12 )
              {
                *(_WORD *)(a2 + 24) = 140;
                v3 = *(_DWORD *)(a1 + 228);
                *(_BYTE *)(a2 + 41) = 1;
                *(_BYTE *)(a2 + 45) = 1;
                v4 = (v3 >> 4) & 3;
                v5 = v4 + 8;
                v6 = (_WORD)v4 == 3;
                result = 12;
                if ( !v6 )
                  result = v5;
                *(_WORD *)(a2 + 46) = result;
              }
            }
          }
        }
        else
        {
          result &= 7u;
          switch ( (_BYTE)result )
          {
            case 1:
              *(_BYTE *)(a2 + 41) = 5;
              *(_WORD *)(a2 + 24) = 145;
              *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
LABEL_15:
              result = (*(int *)(a1 + 228) >> 3) & 7;
              if ( ((*(int *)(a1 + 228) >> 3) & 7) == 6 )
              {
                *(_BYTE *)(a2 + 81) = 3;
                *(_WORD *)(a2 + 86) = 10;
                return 10;
              }
              else
              {
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = result;
              }
              break;
            case 4:
              *(_WORD *)(a2 + 24) = 147;
              result = (*(int *)(a1 + 228) >> 3) & 7;
              if ( ((*(int *)(a1 + 228) >> 3) & 7) == 6 )
              {
                *(_BYTE *)(a2 + 41) = 3;
                *(_WORD *)(a2 + 46) = 10;
              }
              else
              {
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = result;
              }
              break;
            case 0:
              *(_WORD *)(a2 + 24) = 139;
              if ( ((*(int *)(a1 + 228) >> 3) & 7) == 6 )
              {
                *(_WORD *)(a2 + 46) = 10;
                v18 = 3;
              }
              else
              {
                *(_WORD *)(a2 + 46) = (*(int *)(a1 + 228) >> 3) & 7;
                v18 = 1;
              }
              *(_BYTE *)(a2 + 41) = v18;
              *(_BYTE *)(a2 + 81) = 5;
              LOBYTE(result) = insn_get_next_byte();
              v6 = *(_BYTE *)(a2 + 41) == 3;
              result = (unsigned __int8)result;
              *(_QWORD *)(a2 + 88) = (unsigned __int8)result;
              if ( v6 )
              {
                *(_BYTE *)(a2 + 41) = 1;
                *(_BYTE *)(a2 + 45) = 0;
                *(_WORD *)(a2 + 46) = 18;
              }
              break;
          }
        }
      }
      return result;
  }
  *(_BYTE *)(a2 + 41) = 5;
  result = (unsigned __int8)insn_get_next_byte();
  *(_QWORD *)(a2 + 48) = (unsigned __int8)result;
  return result;
}

