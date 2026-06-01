__int64 __fastcall sub_10DC0(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char a5,
        char a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned int a9)
{
  unsigned __int8 v12; // r9
  __int16 v13; // cx
  unsigned __int8 v15; // r9
  char v16; // cl
  __int16 v17; // r8
  char v18; // si
  __int16 v19; // bp
  __int16 v20; // si
  unsigned __int16 v21; // cx
  char v22; // r8
  char v23; // r13
  __int64 v24; // r8
  char v25; // si
  __int16 v26; // si
  __int16 v27; // r8
  __int16 v28; // dx
  int v29; // r9d
  __int16 v30; // cx
  char v31; // cl
  char v32; // dl
  char v33; // di
  char v34; // cl

  switch ( a5 )
  {
    case 4:
      switch ( a6 & 0x7C )
      {
        case 0:
          v19 = 22;
          v20 = 465;
          goto LABEL_21;
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xA:
        case 0xB:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x39:
        case 0x3A:
        case 0x3B:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4D:
        case 0x4E:
        case 0x4F:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x59:
        case 0x5A:
        case 0x5B:
        case 0x5D:
        case 0x5E:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6D:
        case 0x6E:
        case 0x6F:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x79:
        case 0x7A:
        case 0x7B:
          return 0;
        case 4:
          v19 = 1;
          v20 = 444;
          goto LABEL_21;
        case 8:
          v19 = 33;
          v20 = 476;
          goto LABEL_21;
        case 0xC:
          v19 = 0;
          v20 = 443;
          goto LABEL_21;
        case 0x10:
          v19 = 24;
          v20 = 467;
          goto LABEL_21;
        case 0x14:
          v19 = 5;
          v20 = 448;
          goto LABEL_21;
        case 0x18:
          v19 = 35;
          v20 = 478;
          goto LABEL_21;
        case 0x1C:
          v19 = 4;
          v20 = 447;
          goto LABEL_21;
        case 0x20:
          v19 = 26;
          v20 = 469;
          goto LABEL_21;
        case 0x24:
          v19 = 9;
          v20 = 452;
          goto LABEL_21;
        case 0x28:
          v19 = 37;
          v20 = 480;
          goto LABEL_21;
        case 0x2C:
          v19 = 8;
          v20 = 451;
          goto LABEL_21;
        case 0x30:
          v19 = 28;
          v20 = 471;
          goto LABEL_21;
        case 0x34:
          v19 = 13;
          v20 = 456;
          goto LABEL_21;
        case 0x38:
          v19 = 39;
          v20 = 482;
          goto LABEL_21;
        case 0x3C:
          v19 = 12;
          v20 = 455;
          goto LABEL_21;
        case 0x40:
          v19 = 23;
          v20 = 466;
          goto LABEL_21;
        case 0x44:
          v19 = 3;
          v20 = 446;
          goto LABEL_21;
        case 0x48:
          v19 = 34;
          v20 = 477;
          goto LABEL_21;
        case 0x4C:
          v19 = 2;
          v20 = 445;
          goto LABEL_21;
        case 0x50:
          v19 = 25;
          v20 = 468;
          goto LABEL_21;
        case 0x54:
          v19 = 7;
          v20 = 450;
          goto LABEL_21;
        case 0x58:
          v19 = 36;
          v20 = 479;
          goto LABEL_21;
        case 0x5C:
          v19 = 6;
          v20 = 449;
          goto LABEL_21;
        case 0x60:
          v19 = 27;
          v20 = 470;
          goto LABEL_21;
        case 0x64:
          v19 = 11;
          v20 = 454;
          goto LABEL_21;
        case 0x68:
          v19 = 38;
          v20 = 481;
          goto LABEL_21;
        case 0x6C:
          v19 = 10;
          v20 = 453;
LABEL_21:
          *(_WORD *)(a2 + 24) = v20;
          v21 = v20 - 443;
          if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
          {
            v22 = 7;
            v23 = 7;
          }
          else
          {
            v22 = 2;
            v23 = 2;
          }
          *(_BYTE *)(a2 + 45) = v22;
          *(_BYTE *)(a2 + 41) = 1;
          v24 = 1LL << ((unsigned __int8)v20 + 69);
          *(_WORD *)(a2 + 46) = a7;
          if ( (v24 & 0xFFFFFC00000LL) != 0 )
          {
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = a8;
            *(_BYTE *)(a2 + 85) = v23;
            *(_BYTE *)(a2 + 121) = 1;
            *(_WORD *)(a2 + 126) = (unsigned __int8)a9;
            *(_BYTE *)(a2 + 125) = v23;
          }
          else
          {
            if ( (v24 & 0x2AAAAA) != 0 )
            {
              v31 = v20 + 68;
              if ( (unsigned __int16)(v20 - 444) > 0x12u )
              {
                v32 = 7;
              }
              else
              {
                v32 = 0;
                if ( ((1LL << v31) & 0x4005) == 0 )
                {
                  v32 = 2;
                  if ( ((1LL << v31) & 0x40500) == 0 )
                    v32 = ((1LL << v31) & 0x10050) == 0 ? 7 : 1;
                }
              }
              *(_BYTE *)(a2 + 85) = v32;
              *(_WORD *)(a2 + 86) = a8;
              if ( (_BYTE)a9 )
              {
                *(_BYTE *)(a2 + 81) = 4;
                *(_QWORD *)(a2 + 96) = (__int64)((unsigned __int64)a9 << 59) >> 59 << (a6 & 3);
              }
              else
              {
                *(_BYTE *)(a2 + 81) = 3;
              }
LABEL_32:
              if ( (unsigned __int16)v19 <= 0xDu && *(_WORD *)(a2 + 86) == a7 )
                return 0;
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( (v24 & 0x155555) == 0 )
              goto LABEL_32;
            if ( v21 > 0x12u )
            {
              v25 = 7;
            }
            else
            {
              v25 = 0;
              if ( (v24 & 0x4005) == 0 )
              {
                v25 = 2;
                if ( (v24 & 0x40500) == 0 )
                  v25 = ((1LL << v21) & 0x10050) == 0 ? 7 : 1;
              }
            }
            *(_BYTE *)(a2 + 81) = 3;
            *(_BYTE *)(a2 + 85) = v25;
            *(_WORD *)(a2 + 86) = a8;
            *(_BYTE *)(a2 + 121) = 5;
            *(_BYTE *)(a2 + 125) = 2;
            *(_QWORD *)(a2 + 128) = (__int64)((unsigned __int64)a9 << 59) >> 59;
          }
          *(_BYTE *)(a2 + 161) = 5;
          *(_BYTE *)(a2 + 165) = 0;
          *(_QWORD *)(a2 + 168) = (a4 >> 9) & 3;
          goto LABEL_32;
        case 0x70:
          v26 = 1;
          v27 = 488;
          goto LABEL_60;
        case 0x78:
          v26 = 2;
          v27 = 489;
          goto LABEL_60;
        case 0x7C:
          v26 = 0;
          v27 = 487;
LABEL_60:
          v28 = *(_WORD *)(a2 + 34);
          *(_WORD *)(a2 + 24) = v27;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = a7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (unsigned __int8)a9;
          LOBYTE(v28) = (v28 & 4) == 0 ? 2 : 7;
          *(_BYTE *)(a2 + 45) = v28;
          *(_BYTE *)(a2 + 85) = v28;
          *(_WORD *)(a2 + 126) = a8;
          v29 = a6 & 3;
          if ( v29 )
          {
            if ( v27 == 490 || (v33 = 2, v34 = 3, v27 == 487) )
            {
              v33 = 7;
              v34 = 4;
            }
            *(_BYTE *)(a2 + 121) = 4;
            *(_BYTE *)(a2 + 125) = v33;
            *(_QWORD *)(a2 + 136) = (unsigned __int8)v29 << v34;
          }
          else
          {
            *(_BYTE *)(a2 + 121) = 3;
            if ( v27 == 490 )
            {
              *(_BYTE *)(a2 + 125) = 7;
            }
            else if ( v27 == 491 )
            {
              *(_BYTE *)(a2 + 125) = 2;
            }
            else
            {
              *(_BYTE *)(a2 + 125) = 5 * (v27 == 487) + 2;
            }
          }
          if ( (unsigned __int16)v26 <= 2u )
          {
            v30 = *(_WORD *)(a2 + 46);
            if ( v30 == *(_WORD *)(a2 + 86) && a8 == v30 )
              return 0;
          }
          return *(unsigned __int16 *)(a2 + 26);
      }
    case 5:
      switch ( a6 & 0x7C )
      {
        case 0:
          v19 = 29;
          v20 = 472;
          goto LABEL_21;
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xA:
        case 0xB:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x39:
        case 0x3A:
        case 0x3B:
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
          return 0;
        case 4:
          v19 = 15;
          v20 = 458;
          goto LABEL_21;
        case 8:
          v19 = 40;
          v20 = 483;
          goto LABEL_21;
        case 0xC:
          v19 = 14;
          v20 = 457;
          goto LABEL_21;
        case 0x10:
          v19 = 30;
          v20 = 473;
          goto LABEL_21;
        case 0x14:
          v19 = 17;
          v20 = 460;
          goto LABEL_21;
        case 0x18:
          v19 = 41;
          v20 = 484;
          goto LABEL_21;
        case 0x1C:
          v19 = 16;
          v20 = 459;
          goto LABEL_21;
        case 0x20:
          v19 = 31;
          v20 = 474;
          goto LABEL_21;
        case 0x24:
          v19 = 19;
          v20 = 462;
          goto LABEL_21;
        case 0x28:
          v19 = 42;
          v20 = 485;
          goto LABEL_21;
        case 0x2C:
          v19 = 18;
          v20 = 461;
          goto LABEL_21;
        case 0x30:
          v19 = 32;
          v20 = 475;
          goto LABEL_21;
        case 0x34:
          v19 = 21;
          v20 = 464;
          goto LABEL_21;
        case 0x38:
          v19 = 43;
          v20 = 486;
          goto LABEL_21;
        case 0x3C:
          v19 = 20;
          v20 = 463;
          goto LABEL_21;
        case 0x70:
          v26 = 4;
          v27 = 491;
          goto LABEL_60;
        case 0x7C:
          v26 = 3;
          v27 = 490;
          goto LABEL_60;
      }
    case 6:
      v15 = a6 & 0x7C;
      if ( v15 == 48 )
      {
        v13 = 492;
      }
      else if ( v15 > 0x30u )
      {
        v13 = 494;
        if ( v15 != 56 )
          return 0;
      }
      else if ( v15 == 32 )
      {
        v13 = 493;
      }
      else
      {
        v13 = 495;
        if ( v15 != 40 )
          return 0;
      }
      break;
    case 7:
      v12 = a6 & 0x7C;
      if ( v12 == 48 )
      {
        v13 = 496;
      }
      else if ( v12 > 0x30u )
      {
        v13 = 498;
        if ( v12 != 56 )
          return 0;
      }
      else if ( v12 == 32 )
      {
        v13 = 497;
      }
      else
      {
        v13 = 499;
        if ( v12 != 40 )
          return 0;
      }
      break;
    default:
      return 0;
  }
  *(_WORD *)(a2 + 24) = v13;
  v16 = *(_BYTE *)(a1 + 468);
  v17 = *(_WORD *)(a2 + 34);
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 121) = 1;
  *(_WORD *)(a2 + 126) = (unsigned __int8)a9;
  *(_BYTE *)(a2 + 161) = 5;
  *(_BYTE *)(a2 + 165) = 0;
  *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 32 * ((v16 & 8) == 0));
  v18 = (v17 & 4) == 0 ? 2 : 7;
  *(_WORD *)(a2 + 86) = a8;
  *(_BYTE *)(a2 + 45) = v18;
  *(_BYTE *)(a2 + 85) = v18;
  *(_BYTE *)(a2 + 125) = v18;
  *(_QWORD *)(a2 + 168) = (a4 >> 9) & 3;
  return *(unsigned __int16 *)(a2 + 26);
}

