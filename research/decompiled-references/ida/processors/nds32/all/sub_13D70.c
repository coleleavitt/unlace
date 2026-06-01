__int64 __fastcall sub_13D70(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  const char *v5; // rbp
  size_t v6; // rax
  _QWORD *v7; // rsi
  size_t v8; // r12
  size_t v9; // r13
  const char *v10; // rcx
  unsigned __int64 v11; // rax
  char *v12; // rsi
  const char *v13; // rbp
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax

  switch ( *(_WORD *)(a3 + 24) )
  {
    case 0:
    case 7:
    case 8:
    case 0xF:
    case 0x10:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
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
    case 0x8B:
    case 0x8C:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0xA0:
    case 0xA1:
    case 0xA2:
    case 0xA3:
    case 0xA4:
    case 0xA5:
    case 0xAA:
    case 0xAB:
    case 0xAE:
    case 0xAF:
    case 0xB0:
    case 0xB1:
    case 0xB2:
    case 0xB3:
    case 0xB4:
    case 0xB5:
    case 0xB6:
    case 0xB7:
    case 0xB8:
    case 0xB9:
    case 0xBA:
    case 0xBB:
    case 0xBC:
    case 0xBD:
    case 0xBE:
    case 0xBF:
    case 0xC0:
    case 0xC1:
    case 0xC2:
    case 0xC3:
    case 0xC4:
    case 0xC5:
    case 0xC6:
    case 0xC7:
    case 0xC8:
    case 0xC9:
    case 0xCA:
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xCE:
    case 0xD1:
    case 0xD6:
    case 0xD7:
    case 0xD8:
    case 0xD9:
    case 0xDA:
    case 0xDB:
    case 0xDC:
    case 0xDD:
    case 0xDE:
    case 0xDF:
    case 0xE0:
    case 0xE1:
    case 0xE2:
    case 0xE3:
    case 0xE4:
    case 0xE5:
    case 0xE6:
    case 0xE7:
    case 0xE8:
    case 0xE9:
    case 0xEE:
    case 0xEF:
    case 0xF6:
    case 0xF7:
    case 0xF8:
    case 0xF9:
    case 0xFA:
    case 0xFB:
    case 0xFC:
    case 0xFD:
    case 0xFE:
    case 0xFF:
    case 0x100:
    case 0x101:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x10B:
    case 0x10C:
    case 0x10F:
    case 0x110:
    case 0x111:
    case 0x112:
    case 0x113:
    case 0x114:
    case 0x115:
    case 0x116:
    case 0x117:
    case 0x118:
    case 0x119:
    case 0x11A:
    case 0x11B:
    case 0x11C:
    case 0x11D:
    case 0x11E:
    case 0x11F:
    case 0x120:
    case 0x122:
    case 0x123:
    case 0x124:
    case 0x125:
    case 0x126:
    case 0x127:
    case 0x128:
    case 0x12A:
    case 0x12B:
    case 0x12C:
    case 0x12D:
    case 0x12E:
    case 0x12F:
    case 0x130:
    case 0x131:
    case 0x132:
    case 0x133:
    case 0x134:
    case 0x135:
    case 0x136:
    case 0x137:
    case 0x138:
    case 0x139:
    case 0x13A:
    case 0x13B:
    case 0x13C:
    case 0x13D:
    case 0x13E:
    case 0x13F:
    case 0x140:
    case 0x141:
    case 0x142:
    case 0x143:
    case 0x144:
    case 0x145:
    case 0x146:
    case 0x147:
    case 0x148:
    case 0x149:
    case 0x14A:
    case 0x14B:
    case 0x14C:
    case 0x14D:
    case 0x14E:
    case 0x14F:
    case 0x150:
    case 0x151:
    case 0x152:
    case 0x153:
    case 0x154:
    case 0x155:
    case 0x156:
    case 0x157:
    case 0x158:
    case 0x159:
    case 0x15A:
    case 0x15B:
    case 0x15C:
    case 0x15D:
    case 0x15E:
    case 0x15F:
    case 0x160:
    case 0x161:
    case 0x162:
    case 0x163:
    case 0x164:
    case 0x165:
    case 0x166:
    case 0x167:
    case 0x168:
    case 0x169:
    case 0x16A:
    case 0x16B:
    case 0x16C:
    case 0x16D:
    case 0x16E:
    case 0x16F:
    case 0x170:
    case 0x171:
    case 0x172:
    case 0x173:
    case 0x174:
    case 0x175:
    case 0x176:
    case 0x177:
    case 0x178:
    case 0x179:
    case 0x17A:
    case 0x17B:
    case 0x17C:
    case 0x17D:
    case 0x17E:
    case 0x17F:
    case 0x180:
    case 0x181:
    case 0x182:
    case 0x183:
    case 0x184:
    case 0x185:
    case 0x186:
    case 0x187:
    case 0x188:
    case 0x189:
    case 0x18A:
    case 0x18B:
    case 0x18C:
    case 0x18D:
    case 0x18E:
    case 0x18F:
    case 0x190:
    case 0x191:
    case 0x192:
    case 0x193:
    case 0x194:
    case 0x195:
    case 0x196:
    case 0x197:
    case 0x198:
    case 0x199:
    case 0x19A:
    case 0x19B:
    case 0x19C:
    case 0x19D:
    case 0x19E:
    case 0x19F:
    case 0x1A0:
    case 0x1A1:
    case 0x1A2:
    case 0x1A3:
    case 0x1A4:
    case 0x1A5:
    case 0x1AA:
    case 0x1AB:
    case 0x1AC:
    case 0x1AD:
    case 0x1AE:
    case 0x1AF:
    case 0x1B4:
    case 0x1B5:
    case 0x1B6:
    case 0x1B7:
    case 0x1B8:
    case 0x1B9:
    case 0x1BA:
    case 0x1BB:
    case 0x1BC:
    case 0x1BD:
    case 0x1C0:
    case 0x1C4:
    case 0x1C5:
    case 0x1C6:
    case 0x1C7:
    case 0x1C8:
    case 0x1C9:
    case 0x1CA:
    case 0x1CB:
    case 0x1CC:
    case 0x1CD:
    case 0x1CE:
    case 0x1CF:
    case 0x1D0:
    case 0x1D1:
    case 0x1D2:
    case 0x1D3:
    case 0x1D4:
    case 0x1D5:
    case 0x1D6:
    case 0x1D7:
    case 0x1D8:
    case 0x1D9:
    case 0x1DA:
    case 0x1DB:
    case 0x1DC:
    case 0x1DD:
    case 0x1DE:
    case 0x1E0:
    case 0x1E1:
    case 0x1E2:
    case 0x1E3:
    case 0x1E4:
    case 0x1E5:
    case 0x1E6:
      return 0;
    case 1:
      v5 = "Load byte";
      goto LABEL_4;
    case 2:
      v5 = "Load byte (indexed)";
      goto LABEL_4;
    case 3:
      v5 = "Load halfword";
      goto LABEL_4;
    case 4:
      v5 = "Load halfword (indexed)";
      goto LABEL_4;
    case 5:
      v5 = "Load word";
      goto LABEL_4;
    case 6:
      v5 = "Load word (indexed)";
      goto LABEL_4;
    case 9:
      v5 = "Store byte";
      goto LABEL_4;
    case 0xA:
      v5 = "Store byte (indexed)";
      goto LABEL_4;
    case 0xB:
      v5 = "Store halfword";
      goto LABEL_4;
    case 0xC:
      v5 = "Store halfword (indexed)";
      goto LABEL_4;
    case 0xD:
      v5 = "Store word";
      goto LABEL_4;
    case 0xE:
      v5 = "Store word (indexed)";
      goto LABEL_4;
    case 0x11:
      v5 = "Load byte signed";
      goto LABEL_4;
    case 0x12:
      v5 = "Load byte signed (indexed)";
      goto LABEL_4;
    case 0x13:
      v5 = "Load halfword signed";
      goto LABEL_4;
    case 0x14:
      v5 = "Load halfword signed (indexed)";
      goto LABEL_4;
    case 0x15:
      v5 = "Data prefetch";
      goto LABEL_4;
    case 0x19:
      v5 = "Load multiple words";
      goto LABEL_4;
    case 0x1A:
      v5 = "Store multiple words";
      goto LABEL_4;
    case 0x1B:
      v5 = "Load multiple words (aligned)";
      goto LABEL_4;
    case 0x1C:
      v5 = "Store multiple words (aligned)";
      goto LABEL_4;
    case 0x1D:
      v5 = "Load multiple words zero-byte";
      goto LABEL_4;
    case 0x1E:
      v5 = "Store multiple words zero-byte";
      goto LABEL_4;
    case 0x1F:
      v5 = "Add";
      goto LABEL_4;
    case 0x61:
      v5 = "Jump register";
      goto LABEL_4;
    case 0x62:
      v5 = "Return";
      goto LABEL_4;
    case 0x63:
      v5 = "Jump and link register";
      goto LABEL_4;
    case 0x72:
      v5 = "Add immediate";
      goto LABEL_4;
    case 0x8A:
      v5 = "Audio word extract";
      goto LABEL_4;
    case 0x8D:
      v5 = "Audio multiply-add long";
      goto LABEL_4;
    case 0x8E:
      v5 = "Audio multiply-sub long";
      goto LABEL_4;
    case 0x8F:
      v5 = "Audio multiply-add long 2";
      goto LABEL_4;
    case 0x90:
      v5 = "Audio multiply-sub long 2";
      goto LABEL_4;
    case 0x98:
      v5 = "Audio multiply-add BB signed long";
      goto LABEL_4;
    case 0x99:
      v5 = "Audio multiply-add BT signed long";
      goto LABEL_4;
    case 0x9A:
      v5 = "Audio multiply-add TB signed long";
      goto LABEL_4;
    case 0x9B:
      v5 = "Audio multiply-add TT signed long";
      goto LABEL_4;
    case 0x9C:
      v5 = "Audio multiply-add BB signed long 2";
      goto LABEL_4;
    case 0x9D:
      v5 = "Audio multiply-add BT signed long 2";
      goto LABEL_4;
    case 0x9E:
      v5 = "Audio multiply-add TB signed long 2";
      goto LABEL_4;
    case 0x9F:
      v5 = "Audio multiply-add TT signed long 2";
      goto LABEL_4;
    case 0xA6:
      v5 = "Audio multiply-add WB signed long";
      goto LABEL_4;
    case 0xA7:
      v5 = "Audio multiply-add WT signed long";
      goto LABEL_4;
    case 0xA8:
      v5 = "Audio multiply-add WB signed long 2";
      goto LABEL_4;
    case 0xA9:
      v5 = "Audio multiply-add WT signed long 2";
      goto LABEL_4;
    case 0xAC:
      v5 = "Audio multiply TB signed long 2";
      goto LABEL_4;
    case 0xAD:
      v5 = "Audio multiply TT signed long 2";
      goto LABEL_4;
    case 0xCF:
      v5 = "Set endianness";
      goto LABEL_4;
    case 0xD0:
      v5 = "Set global interrupt enable";
      goto LABEL_4;
    case 0xD2:
      v5 = "FPU load single (indexed)";
      goto LABEL_4;
    case 0xD3:
      v5 = "FPU load single";
      goto LABEL_4;
    case 0xD4:
      v5 = "FPU store single (indexed)";
      goto LABEL_4;
    case 0xD5:
      v5 = "FPU store single";
      goto LABEL_4;
    case 0xEA:
      v5 = "Compare equal (single)";
      goto LABEL_4;
    case 0xEB:
      v5 = "Compare less than (single)";
      goto LABEL_4;
    case 0xEC:
      v5 = "Compare less or equal (single)";
      goto LABEL_4;
    case 0xED:
      v5 = "Compare unordered (single)";
      goto LABEL_4;
    case 0xF0:
      v5 = "Single to unsigned int";
      goto LABEL_4;
    case 0xF1:
      v5 = "Single to signed int";
      goto LABEL_4;
    case 0xF2:
      v5 = "FPU load double (indexed)";
      goto LABEL_4;
    case 0xF3:
      v5 = "FPU load double";
      goto LABEL_4;
    case 0xF4:
      v5 = "FPU store double (indexed)";
      goto LABEL_4;
    case 0xF5:
      v5 = "FPU store double";
      goto LABEL_4;
    case 0x107:
      v5 = "Compare equal (double)";
      goto LABEL_4;
    case 0x108:
      v5 = "Compare less than (double)";
      goto LABEL_4;
    case 0x109:
      v5 = "Compare less or equal (double)";
      goto LABEL_4;
    case 0x10A:
      v5 = "Compare unordered (double)";
      goto LABEL_4;
    case 0x10D:
      v5 = "Double to unsigned int";
      goto LABEL_4;
    case 0x10E:
      v5 = "Double to signed int";
      goto LABEL_4;
    case 0x121:
      v5 = "Average";
      goto LABEL_4;
    case 0x129:
      v5 = "Saturating shift left with rounding";
      goto LABEL_4;
    case 0x1A6:
      v5 = "Signed most significant word multiply";
      goto LABEL_4;
    case 0x1A7:
      v5 = "Saturating MSW multiply-accumulate";
      goto LABEL_4;
    case 0x1A8:
      v5 = "Saturating MSW multiply-subtract";
      goto LABEL_4;
    case 0x1A9:
      v5 = "Saturating word MSW multiply";
      goto LABEL_4;
    case 0x1B0:
      v5 = "Signed MSW multiply word bottom half";
      goto LABEL_4;
    case 0x1B1:
      v5 = "Signed MSW multiply word top half";
      goto LABEL_4;
    case 0x1B2:
      v5 = "Saturating MSW multiply-add word bottom half";
      goto LABEL_4;
    case 0x1B3:
      v5 = "Saturating MSW multiply-add word top half";
      goto LABEL_4;
    case 0x1BE:
      v5 = "Arithmetic shift right 16-bit SIMD";
      goto LABEL_4;
    case 0x1BF:
      v5 = "Logical shift right 16-bit SIMD";
      goto LABEL_4;
    case 0x1C1:
      v5 = "Saturating shift left/right 16-bit SIMD";
      goto LABEL_4;
    case 0x1C2:
      v5 = "Arithmetic shift right immediate 16-bit SIMD";
      goto LABEL_4;
    case 0x1C3:
      v5 = "Logical shift right immediate 16-bit SIMD";
      goto LABEL_4;
    case 0x1DF:
      v5 = "Add register immediate";
      goto LABEL_4;
    case 0x1E7:
      v5 = "Execute table instruction";
LABEL_4:
      switch ( *(_BYTE *)(a3 + 33) )
      {
        case 1:
          v10 = "post-increment";
          goto LABEL_15;
        case 6:
          v10 = "before increment";
          goto LABEL_15;
        case 7:
          v10 = "before increment, modify";
          goto LABEL_15;
        case 8:
          v10 = "before decrement";
          goto LABEL_15;
        case 9:
          v10 = "before decrement, modify";
          goto LABEL_15;
        case 0xA:
          v10 = "after increment";
          goto LABEL_15;
        case 0xB:
          v10 = "after increment, modify";
          goto LABEL_15;
        case 0xC:
          v10 = "after decrement";
          goto LABEL_15;
        case 0xD:
          v10 = "after decrement, modify";
          goto LABEL_15;
        case 0xE:
          v10 = "before";
          goto LABEL_15;
        case 0xF:
          v10 = "before, modify";
          goto LABEL_15;
        case 0x10:
          v10 = "before, exchange";
          goto LABEL_15;
        case 0x11:
          v10 = "before, modify, exchange";
          goto LABEL_15;
        case 0x12:
          v10 = "after";
          goto LABEL_15;
        case 0x13:
          v10 = "after, modify";
          goto LABEL_15;
        case 0x14:
          v10 = "after, exchange";
          goto LABEL_15;
        case 0x15:
          v10 = "after, modify, exchange";
          goto LABEL_15;
        case 0x16:
          v10 = "IT offset off";
          goto LABEL_15;
        case 0x17:
          v10 = "table offset off";
          goto LABEL_15;
        case 0x18:
          v10 = "IT on";
          goto LABEL_15;
        case 0x19:
          v10 = "table on";
          goto LABEL_15;
        case 0x1A:
          v10 = "If-Then";
          goto LABEL_15;
        case 0x1B:
          v10 = "If-Then Always";
          goto LABEL_15;
        case 0x1C:
          v10 = "little endian";
          goto LABEL_15;
        case 0x1D:
          v10 = "big endian";
          goto LABEL_15;
        case 0x1E:
          v10 = "disable";
          goto LABEL_15;
        case 0x1F:
          v10 = "enable";
          goto LABEL_15;
        case 0x20:
          v10 = "exception signaling";
          goto LABEL_15;
        case 0x21:
          v10 = "truncate toward zero";
          goto LABEL_15;
        case 0x22:
          v10 = "word";
          goto LABEL_15;
        case 0x23:
          v10 = "double-word";
          goto LABEL_15;
        case 0x24:
          v10 = "short";
          goto LABEL_15;
        case 0x25:
          v10 = "long";
          goto LABEL_15;
        case 0x26:
          v10 = "frame-end relative";
          goto LABEL_15;
        case 0x27:
          v10 = "short immediate";
          goto LABEL_15;
        case 0x28:
          v10 = "rounding";
          goto LABEL_15;
        case 0x29:
          v10 = "unsigned";
LABEL_15:
          sub_DC30(a2, (__int64)"%s (%s)", v5, v10);
          break;
        default:
          v6 = strlen(v5);
          v7 = (_QWORD *)*a2;
          v8 = v6;
          v9 = v6 + 1;
          if ( a2[2] < v6 + 1 )
          {
            v18 = qvector_reserve(a2, v7, v6 + 1, 1);
            *a2 = v18;
            v7 = (_QWORD *)v18;
          }
          a2[1] = v9;
          if ( (unsigned int)v8 >= 8 )
          {
            *v7 = *(_QWORD *)v5;
            *(_QWORD *)((char *)v7 + (unsigned int)v8 - 8) = *(_QWORD *)&v5[(unsigned int)v8 - 8];
            v11 = (unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v12 = (char *)v7 - v11;
            v13 = (const char *)(v5 - v12);
            v14 = (v8 + (_DWORD)v12) & 0xFFFFFFF8;
            if ( v14 >= 8 )
            {
              v15 = v14 & 0xFFFFFFF8;
              v16 = 0;
              do
              {
                v17 = v16;
                v16 += 8;
                *(_QWORD *)(v11 + v17) = *(_QWORD *)&v13[v17];
              }
              while ( v16 < v15 );
            }
          }
          else if ( (v8 & 4) != 0 )
          {
            *(_DWORD *)v7 = *(_DWORD *)v5;
            *(_DWORD *)((char *)v7 + (unsigned int)v8 - 4) = *(_DWORD *)&v5[(unsigned int)v8 - 4];
          }
          else if ( (_DWORD)v8 )
          {
            *(_BYTE *)v7 = *v5;
            if ( (v8 & 2) != 0 )
              *(_WORD *)((char *)v7 + (unsigned int)v8 - 2) = *(_WORD *)&v5[(unsigned int)v8 - 2];
          }
          *(_BYTE *)(*a2 + v8) = 0;
          break;
      }
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

