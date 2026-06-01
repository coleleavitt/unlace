__int64 __fastcall sub_13570(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 result; // rax
  int qword; // eax
  int v10; // r9d
  __int64 v11; // rcx
  int dword; // eax

  if ( !*(_BYTE *)a2 )
    return 4;
  v5 = *(_QWORD *)(a2 + 4);
  v6 = *(_QWORD *)(a2 + 20);
  v7 = *(_QWORD *)(a2 + 12);
  switch ( *(_BYTE *)a2 )
  {
    case 0x24:
    case 0x25:
    case 0x44:
    case 0x45:
      v11 = *(_QWORD *)(a2 + 20);
      v10 = 4;
      goto LABEL_5;
    case 0x26:
    case 0x27:
    case 0x46:
    case 0x47:
    case 0x80:
    case 0x81:
      v11 = *(_QWORD *)(a2 + 20);
      v10 = 12;
      goto LABEL_5;
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
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
      return 2;
    case 0x6C:
    case 0x6D:
      dword = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
      v10 = 4;
      LODWORD(v11) = dword;
      goto LABEL_5;
    case 0x6E:
    case 0x6F:
      qword = get_qword(*(_QWORD *)(a2 + 4));
      v10 = 12;
      LODWORD(v11) = qword;
LABEL_5:
      sub_42050(a1, v5, v7, v11, v6 - v7, v10, 0, 0, 0);
      result = 0;
      break;
    default:
      result = 2;
      break;
  }
  return result;
}
