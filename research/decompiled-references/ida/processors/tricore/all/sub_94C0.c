__int64 __fastcall sub_94C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int16 v5; // ax
  char v6; // dl
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int16 v20; // dx
  __int64 name_ea; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax

  *(_BYTE *)(a3 + 4) = 8;
  *(_BYTE *)(a3 + 32) = 0;
  *(_BYTE *)(a3 + 1) = 0;
  switch ( *(_BYTE *)(a3 + 34) )
  {
    case 0:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x42:
    case 0x43:
    case 0x44:
      return 1;
    case 1:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = (a4 >> 8) & 0xF;
      return 1;
    case 2:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = (a4 >> 8) & 0xF;
      *(_BYTE *)(a3 + 33) = 1;
      return 1;
    case 3:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = (a4 >> 8) & 0xF;
      *(_BYTE *)(a3 + 33) = 2;
      return 1;
    case 4:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 12;
      return 1;
    case 5:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a3 + 33) = 1;
      return 1;
    case 6:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a3 + 33) = 32;
      return 1;
    case 7:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a3 + 33) = 16;
      return 1;
    case 8:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a3 + 33) = 2;
      return 1;
    case 9:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a3 + 33) = 8;
      return 1;
    case 0xA:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a3 + 33) = 4;
      return 1;
    case 0xB:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = a4 >> 28;
      *(_BYTE *)(a3 + 5) = 2;
      return 1;
    case 0xC:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = HIBYTE(a4) & 0xF;
      return 1;
    case 0xD:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = ((a4 >> 8) & 0xF) + 16;
      return 1;
    case 0xE:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      return 1;
    case 0xF:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = (a4 >> 28) + 16;
      return 1;
    case 0x10:
      v9 = a4 >> 8;
      if ( (a4 & 0x100) == 0 )
        goto LABEL_29;
      return 0;
    case 0x11:
      v9 = a4 >> 12;
      if ( (a4 & 0x1000) != 0 )
        return 0;
      goto LABEL_29;
    case 0x12:
      if ( (a4 & 0x10000000) != 0 )
        return 0;
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = a4 >> 28;
      *(_BYTE *)(a3 + 5) = 7;
      return 1;
    case 0x13:
      v9 = HIBYTE(a4);
      if ( (a4 & 0x1000000) == 0 )
      {
LABEL_29:
        *(_BYTE *)(a3 + 1) = 1;
        *(_WORD *)(a3 + 6) = v9 & 0xF;
        *(_BYTE *)(a3 + 5) = 7;
        return 1;
      }
      return 0;
    case 0x14:
      if ( (a4 & 0x100) != 0 )
        return 0;
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 7;
      *(_WORD *)(a3 + 6) = ((a4 >> 8) & 0xF) + 16;
      return 1;
    case 0x15:
      if ( (a4 & 0x300) != 0 )
        return 0;
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = (a4 >> 8) & 0xF;
      *(_BYTE *)(a3 + 5) = 8;
      return 1;
    case 0x19:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = HIWORD(a4) & 3;
      goto LABEL_10;
    case 0x1A:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = (a4 >> 11) & 1;
      goto LABEL_10;
    case 0x1B:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = (unsigned __int8)a4 >> 6;
      goto LABEL_10;
    case 0x1C:
      v8 = (a4 >> 8) & 7;
      goto LABEL_19;
    case 0x1D:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = HIWORD(a4) & 0x1F;
      goto LABEL_10;
    case 0x1E:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = (a4 >> 23) & 0x1F;
      goto LABEL_10;
    case 0x1F:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = 0;
      goto LABEL_10;
    case 0x20:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = HIWORD(a4) & 1;
      goto LABEL_10;
    case 0x21:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = (unsigned __int16)a4 >> 12;
      goto LABEL_10;
    case 0x22:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = BYTE1(a4);
      goto LABEL_10;
    case 0x23:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = (a4 >> 12) & 0x1FF;
      goto LABEL_10;
    case 0x24:
    case 0x25:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = (unsigned __int16)(a4 >> 12);
      goto LABEL_10;
    case 0x26:
      *(_BYTE *)(a3 + 1) = 5;
      v25 = (__int16)a4 >> 12;
      goto LABEL_99;
    case 0x27:
      *(_BYTE *)(a3 + 1) = 5;
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & SBYTE1(a4);
      *(_BYTE *)(a3 + 32) = 1;
      *(_QWORD *)(a3 + 8) = v24;
      goto LABEL_10;
    case 0x28:
      *(_BYTE *)(a3 + 1) = 5;
      v25 = (int)(a4 << 11) >> 23;
LABEL_99:
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v25;
      *(_BYTE *)(a3 + 32) = 1;
      *(_QWORD *)(a3 + 8) = v26;
      goto LABEL_10;
    case 0x29:
      *(_BYTE *)(a3 + 1) = 5;
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (__int16)(a4 >> 12);
      *(_BYTE *)(a3 + 32) = 1;
      *(_QWORD *)(a3 + 8) = v23;
      goto LABEL_10;
    case 0x2A:
      *(_BYTE *)(a3 + 1) = 5;
      v19 = (unsigned __int16)(a4 >> 12);
      *(_QWORD *)(a3 + 8) = v19;
      v20 = *(_WORD *)(a2 + 24);
      if ( v20 == 245 )
      {
        if ( *(_BYTE *)a3 != 2 )
          goto LABEL_93;
        goto LABEL_105;
      }
      if ( v20 == 246 && *(_BYTE *)a3 == 1 )
LABEL_105:
        *(_QWORD *)(a3 + 8) = v19 + 4;
LABEL_93:
      name_ea = get_name_ea(-1, "CSFR_BASE");
      if ( name_ea == -1 )
      {
        if ( !*(_BYTE *)(a1 + 363) )
        {
          sub_93F0((__int64)"CSFR_BASE not defined in config file, `mfcr` and `mtcr` instructions will lack register names\n");
          *(_BYTE *)(a1 + 363) = 1;
        }
        v22 = *(unsigned __int8 *)(a3 + 1);
      }
      else
      {
        *(_QWORD *)(a3 + 8) += name_ea;
        v22 = *(unsigned __int8 *)(a3 + 1);
      }
      switch ( v22 )
      {
        case 2LL:
        case 4LL:
          goto LABEL_3;
        case 5LL:
        case 7LL:
          goto LABEL_10;
        case 9LL:
          goto LABEL_20;
        default:
          return 1;
      }
      return 1;
    case 0x2B:
      v8 = (unsigned __int16)a4 >> 12;
      goto LABEL_19;
    case 0x2C:
      v8 = (a4 >> 3) & 0x10 | ((unsigned __int16)a4 >> 12);
      goto LABEL_19;
    case 0x2D:
      v8 = (a4 >> 23) & 0x1F;
      goto LABEL_19;
    case 0x2E:
      v8 = HIWORD(a4) & 0x1F;
LABEL_19:
      *(_BYTE *)(a3 + 1) = 9;
      *(_QWORD *)(a3 + 8) = v8;
LABEL_20:
      *(_BYTE *)(a3 + 5) = 0;
      return 1;
    case 0x2F:
      *(_BYTE *)(a3 + 1) = 7;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 8) + ((a4 >> 7) & 0x1E);
      goto LABEL_10;
    case 0x30:
      *(_BYTE *)(a3 + 1) = 7;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 8) + 2LL * ((a4 >> 8) & 0xF) + 32;
      goto LABEL_10;
    case 0x31:
      *(_BYTE *)(a3 + 1) = 7;
      v18 = a4 >> 8 << 24;
      if ( ((a4 >> 8) & 0x80) != 0 )
        v18 += 0x7FFFFF;
      v16 = v18 >> 23;
      goto LABEL_78;
    case 0x32:
      *(_BYTE *)(a3 + 1) = 7;
      v17 = HIWORD(a4) << 17;
      if ( (a4 & 0x40000000) != 0 )
        v17 += 0xFFFF;
      v16 = v17 >> 16;
      goto LABEL_78;
    case 0x33:
      *(_BYTE *)(a3 + 1) = 7;
      v16 = (int)((HIWORD(a4) | (a4 << 8) & 0xFF0000) << 8) / 128;
LABEL_78:
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(_QWORD *)(a2 + 8) + v16);
      goto LABEL_10;
    case 0x34:
      *(_BYTE *)(a3 + 1) = 7;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 8) + ((a4 >> 7) & 0x1E | 0xFFFFFFFFFFFFFFE0LL);
      goto LABEL_10;
    case 0x35:
      *(_BYTE *)(a3 + 1) = 7;
      *(_QWORD *)(a3 + 16) = (a4 >> 12 << 28) | (2 * HIWORD(a4)) | (a4 << 9) & 0x1E0000;
LABEL_10:
      *(_BYTE *)(a3 + 5) = 2;
      return 1;
    case 0x36:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 32) = 64;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      goto LABEL_3;
    case 0x37:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 32) = 4;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      goto LABEL_3;
    case 0x38:
      *(_BYTE *)(a3 + 1) = 2;
      *(_QWORD *)(a3 + 16) = HIWORD(a4) & 0x3F | (a4 >> 12 << 28) | (a4 >> 28 << 6) | (a4 >> 12) & 0x3C00;
      goto LABEL_3;
    case 0x39:
      *(_BYTE *)(a3 + 1) = 2;
      *(_QWORD *)(a3 + 16) = (4 * a4) & 0xF000000 | (a4 >> 12 << 28) | (a4 >> 28 << 20) | (a4 >> 2) & 0xFC000;
      goto LABEL_3;
    case 0x3A:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      v15 = (HIWORD(a4) & 0x3F | (a4 >> 28 << 6) | (a4 >> 12) & 0xFC00) << 16;
      if ( (a4 >> 28 << 6) & 0x8000 | (a4 >> 12) & 0x8000 )
        v15 += 0xFFFF;
      v10 = v15 >> 16;
      goto LABEL_61;
    case 0x3B:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((int)((HIWORD(a4) & 0x3F | (a4 >> 28 << 6)) << 22) / 0x400000);
      *(_BYTE *)(a3 + 32) = 34;
      *(_QWORD *)(a3 + 16) = v14;
      goto LABEL_3;
    case 0x3C:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((int)((HIWORD(a4) & 0x3F | (a4 >> 28 << 6)) << 22) / 0x400000);
      *(_BYTE *)(a3 + 32) = 36;
      *(_QWORD *)(a3 + 16) = v13;
      goto LABEL_3;
    case 0x3D:
      *(_BYTE *)(a3 + 1) = 4;
      if ( (a4 & 0x1000) != 0 )
        return 0;
      *(_WORD *)(a3 + 6) = ((a4 >> 12) & 0xF) + 16;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((int)((HIWORD(a4) & 0x3F | (a4 >> 28 << 6)) << 22) / 0x400000);
      *(_BYTE *)(a3 + 32) = 44;
      *(_QWORD *)(a3 + 16) = v12;
      goto LABEL_3;
    case 0x3E:
      *(_BYTE *)(a3 + 1) = 4;
      if ( (a4 & 0x1000) != 0 )
        return 0;
      *(_BYTE *)(a3 + 32) = 20;
      *(_WORD *)(a3 + 6) = ((a4 >> 12) & 0xF) + 16;
LABEL_3:
      v5 = *(_WORD *)(a2 + 24);
      if ( v5 == 84 || (v6 = 2, v5 == 177) )
      {
        v6 = 2;
        if ( (unsigned __int8)(*(_BYTE *)(a2 + 33) - 2) <= 0xFu )
          v6 = byte_15B50[(unsigned __int8)(*(_BYTE *)(a2 + 33) - 2)];
      }
      *(_BYTE *)(a3 + 5) = v6;
      return 1;
    case 0x3F:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      v10 = (int)((HIWORD(a4) & 0x3F | (a4 >> 28 << 6)) << 22) / 0x400000;
LABEL_61:
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v10;
      *(_BYTE *)(a3 + 32) = 32;
      *(_QWORD *)(a3 + 16) = v11;
      goto LABEL_3;
    case 0x40:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 32) = 32;
      *(_QWORD *)(a3 + 16) = (a4 >> 8) & 0xF;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      goto LABEL_3;
    case 0x41:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 6) = 31;
      *(_QWORD *)(a3 + 16) = (unsigned __int16)a4 >> 12;
      *(_BYTE *)(a3 + 32) = 32;
      goto LABEL_3;
    case 0x45:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 32) = 32;
      *(_QWORD *)(a3 + 16) = (a4 >> 7) & 0x1E;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      goto LABEL_3;
    case 0x46:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 32) = 32;
      *(_QWORD *)(a3 + 16) = (a4 >> 6) & 0x3C;
      *(_WORD *)(a3 + 6) = ((unsigned __int16)a4 >> 12) + 16;
      goto LABEL_3;
    case 0x47:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 6) = 31;
      *(_QWORD *)(a3 + 16) = (a4 >> 11) & 0x1E;
      *(_BYTE *)(a3 + 32) = 32;
      goto LABEL_3;
    case 0x48:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 6) = 31;
      *(_QWORD *)(a3 + 16) = (a4 >> 10) & 0x3C;
      *(_BYTE *)(a3 + 32) = 32;
      goto LABEL_3;
    case 0x49:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 6) = 26;
      *(_QWORD *)(a3 + 16) = 4 * (unsigned int)BYTE1(a4);
      *(_BYTE *)(a3 + 32) = 32;
      goto LABEL_3;
    case 0x4A:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 15;
      *(_BYTE *)(a3 + 5) = 2;
      return 1;
    case 0x4B:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 31;
      *(_BYTE *)(a3 + 5) = 2;
      return 1;
    case 0x4C:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 26;
      *(_BYTE *)(a3 + 5) = 2;
      return 1;
    default:
      return 1;
  }
}

