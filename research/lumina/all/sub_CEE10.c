__int64 __fastcall sub_CEE10(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax

  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    return 1;
  switch ( *(_BYTE *)a2 )
  {
    case 0x2B:
    case 0x2D:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x9D:
    case 0xAB:
    case 0xAC:
    case 0xAF:
    case 0xB1:
      goto LABEL_5;
    case 0x2C:
      if ( *(_WORD *)(a1 + 36) )
        goto LABEL_5;
      v8 = *(_QWORD *)(a2 + 16);
      if ( !v8 )
        goto LABEL_5;
      sub_CDCD0(a1, v8);
      if ( !*(_WORD *)(a1 + 36) )
        goto LABEL_5;
      *(_WORD *)(a1 + 36) = 0;
      v9 = *(_QWORD *)(a2 + 24);
      if ( !v9 )
        goto LABEL_5;
      sub_CDCD0(a1, v9);
      result = 1;
      break;
    case 0x2E:
    case 0x2F:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
    case 0x6E:
    case 0x6F:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7B:
    case 0x7C:
    case 0x7D:
    case 0x7E:
    case 0x7F:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8A:
    case 0x8B:
    case 0x8C:
    case 0x8D:
    case 0x8E:
    case 0x8F:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9A:
    case 0x9B:
    case 0x9C:
    case 0x9E:
    case 0x9F:
    case 0xA0:
    case 0xA1:
    case 0xA2:
    case 0xA3:
    case 0xA4:
    case 0xA5:
    case 0xA6:
    case 0xA8:
    case 0xA9:
    case 0xAA:
    case 0xAD:
    case 0xAE:
    case 0xB0:
      return 0;
    case 0x30:
      v3 = *(_QWORD *)(a2 + 16);
      if ( !v3 )
        goto LABEL_5;
      result = sub_CDCD0(a1, v3);
      if ( (_DWORD)result != 2 )
        goto LABEL_5;
      return result;
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      v5 = *(_QWORD *)(a2 + 16);
      v6 = *(_QWORD *)(a2 + 24);
      if ( *(_BYTE *)v5 == 0xA7 )
      {
        v10 = *(_QWORD *)(v5 + 64);
        if ( v10 )
        {
          if ( *(_BYTE *)(v10 + 63) == 1 )
            goto LABEL_5;
        }
      }
      result = 0;
      if ( *(_BYTE *)v6 == 0xA7 )
      {
        v7 = *(_QWORD *)(v6 + 64);
        if ( v7 )
        {
          if ( *(_BYTE *)(v7 + 63) == 1 )
            goto LABEL_5;
        }
      }
      return result;
    case 0xA7:
      if ( *(_DWORD *)(a1 + 40) == *(_DWORD *)(a2 + 44) )
      {
        *(_WORD *)(a1 + 36) = 1;
        result = 2;
      }
      else
      {
LABEL_5:
        result = 1;
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
