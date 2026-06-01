__int64 __fastcall sub_3630(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // esi
  int v4; // ecx
  __int64 v5; // rcx
  unsigned __int16 v6; // cx
  unsigned int v7; // ecx
  int v8; // ecx
  __int16 v9; // cx
  int v10; // ecx
  __int16 v11; // cx
  __int16 v12; // cx

  result = a2;
  v3 = *(_DWORD *)(a1 + 124);
  switch ( v3 & 0x7F )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
      if ( (v3 & 0x180) != 0x100 )
      {
        v5 = v3 & 0xF;
        if ( (v3 & 0x400) != 0 )
          v4 = *((_DWORD *)qword_6300 + v5);
        else
          v4 = *((_DWORD *)qword_6280 + v5);
        goto LABEL_7;
      }
      return result;
    case 0x20:
      if ( (v3 & 0x180) != 0x100 )
      {
        LOWORD(v4) = (v3 & 0x400) == 0 ? 28 : 58;
        goto LABEL_7;
      }
      return result;
    case 0x21:
      LOWORD(v4) = 27;
      goto LABEL_7;
    case 0x22:
      if ( (v3 & 0x180) == 0x100 )
        return result;
      v12 = 30;
LABEL_39:
      *(_WORD *)(result + 24) = v12;
      v10 = (*(_DWORD *)(a1 + 124) >> 21) & 0x1F;
      goto LABEL_17;
    case 0x23:
      v12 = 31;
      if ( (v3 & 0x180) != 0x100 )
        goto LABEL_39;
      return result;
    case 0x24:
      LOWORD(v4) = 59;
      if ( (~(_WORD)v3 & 0x180) != 0 )
        return result;
      goto LABEL_7;
    case 0x30:
      if ( (v3 & 0x180) == 0x100 )
        return result;
      LOWORD(v4) = (v3 & 0x400) == 0 ? 18 : 47;
      goto LABEL_7;
    case 0x31:
      if ( (v3 & 0x180) == 0x100 )
        return result;
      LOWORD(v4) = (v3 & 0x400) == 0 ? 33 : 61;
      goto LABEL_7;
    case 0x32:
      if ( (v3 & 0x80u) == 0 )
        return result;
      v9 = (v3 & 0x400) == 0 ? 24 : 55;
      goto LABEL_16;
    case 0x33:
      v9 = (v3 & 0x400) == 0 ? 21 : 50;
      goto LABEL_16;
    case 0x34:
      if ( (v3 & 0x180) == 0x100 )
        return result;
      LOWORD(v4) = (v3 & 0x80) == 0 ? 52 : 57;
      goto LABEL_7;
    case 0x35:
      LOWORD(v4) = 51;
      if ( (v3 & 0x180) == 0x100 )
        return result;
      goto LABEL_7;
    case 0x3A:
      if ( (v3 & 0x80u) == 0 )
        return result;
      v9 = (v3 & 0x400) == 0 ? 34 : 62;
LABEL_16:
      *(_WORD *)(result + 24) = v9;
      LOWORD(v10) = *(_WORD *)(a1 + 124) >> 11;
LABEL_17:
      *(_BYTE *)(result + 41) = 1;
      *(_WORD *)(result + 46) = v10 + 32;
      v11 = *(_WORD *)(a1 + 126);
      *(_BYTE *)(result + 81) = 1;
      *(_WORD *)(result + 86) = v11 & 0x1F;
      goto LABEL_8;
    case 0x40:
      v9 = 35;
      goto LABEL_16;
    case 0x49:
      if ( (v3 & 0x180) != 0 )
        return result;
      LOWORD(v4) = (v3 & 0x400) == 0 ? 22 : 53;
      goto LABEL_7;
    case 0x4D:
      if ( (v3 & 0x180) != 0 )
        return result;
      LOWORD(v4) = (v3 & 0x400) == 0 ? 23 : 54;
LABEL_7:
      *(_WORD *)(result + 24) = v4;
      v6 = *(_WORD *)(a1 + 124);
      *(_BYTE *)(result + 41) = 1;
      *(_WORD *)(result + 46) = (v6 >> 11) + 32;
      v7 = *(_DWORD *)(a1 + 124);
      *(_BYTE *)(result + 81) = 1;
      *(_WORD *)(result + 86) = ((v7 >> 21) & 0x1F) + 32;
      LOWORD(v7) = *(_WORD *)(a1 + 126);
      *(_BYTE *)(result + 121) = 1;
      *(_WORD *)(result + 126) = v7 & 0x1F;
LABEL_8:
      v8 = *(_DWORD *)(a1 + 124);
      if ( (v8 & 0x200) != 0 )
      {
        *(_DWORD *)(result + 28) |= 1u;
        v8 = *(_DWORD *)(a1 + 124);
      }
      if ( (v8 & 0x100) != 0 )
      {
        *(_DWORD *)(result + 28) |= 2u;
        v8 = *(_DWORD *)(a1 + 124);
      }
      if ( (v8 & 0x80) != 0 )
        *(_DWORD *)(result + 28) |= 4u;
      return result;
    case 0x50:
      LOWORD(v4) = (v3 & 0x400) == 0 ? 19 : 48;
      goto LABEL_7;
    case 0x51:
      LOWORD(v4) = (v3 & 0x400) == 0 ? 20 : 49;
      goto LABEL_7;
    case 0x57:
      LOWORD(v4) = (v3 & 0x400) == 0 ? 36 : 63;
      goto LABEL_7;
    case 0x5A:
      v9 = (v3 & 0x400) == 0 ? 29 : 60;
      goto LABEL_16;
    case 0x5F:
      LOWORD(v4) = (v3 & 0x400) == 0 ? 37 : 64;
      goto LABEL_7;
    default:
      return result;
  }
}

