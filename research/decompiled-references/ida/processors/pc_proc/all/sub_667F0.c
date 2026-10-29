_BOOL8 __fastcall sub_667F0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v6; // al
  int v7; // eax
  __int16 v8; // dx
  __int16 v9; // ax
  char v11; // al
  unsigned __int8 v12; // dl
  unsigned __int8 next_byte; // al
  __int16 v14; // dx
  __int16 v15; // ax
  char v16; // dl
  char v17; // al
  unsigned __int16 v18; // ax
  __int16 v19; // ax
  int v20; // eax
  __int16 v21; // dx
  char v22; // al
  int v23; // eax
  char v24; // cl
  unsigned __int16 v25; // dx
  int next_dword; // eax
  char v27; // cl
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  int v32; // eax
  __int64 next_word; // rax
  int v34; // eax
  char v35; // dl
  int v36; // eax
  char v37; // cl
  int v38; // edx
  int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  unsigned __int64 next_qword; // rax
  int v43; // eax
  unsigned __int8 v44; // al
  __int16 v45; // dx
  char v46; // cl
  int v47; // ecx
  char v48; // dl
  int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // rsi
  int v52; // eax
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  char v55; // dl
  __int64 v56; // rsi
  __int64 v57; // rsi

  if ( (a4 & 0x8000) != 0 )
    *(_BYTE *)(a3 + 4) &= ~8u;
  v6 = sub_65D80((_BYTE *)a1, a2, a3, a4);
  *(_BYTE *)(a3 + 32) = 0;
  *(_BYTE *)(a3 + 5) = v6;
  switch ( (char)a4 )
  {
    case 0:
    case 31:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case -128:
    case -127:
    case -126:
    case -125:
    case -124:
    case -123:
    case -122:
    case -121:
    case -120:
    case -119:
    case -118:
    case -117:
    case -116:
    case -115:
    case -114:
    case -113:
    case -112:
    case -111:
    case -110:
    case -109:
    case -108:
    case -107:
    case -106:
    case -105:
    case -104:
    case -103:
    case -102:
    case -101:
    case -100:
    case -99:
    case -98:
    case -97:
    case -96:
    case -95:
    case -94:
    case -93:
    case -92:
    case -91:
    case -90:
    case -89:
    case -88:
    case -87:
    case -86:
    case -85:
    case -84:
    case -83:
    case -82:
    case -81:
    case -80:
    case -79:
    case -78:
    case -77:
    case -76:
    case -75:
    case -74:
    case -73:
    case -72:
    case -71:
    case -70:
    case -69:
    case -68:
    case -67:
    case -66:
    case -65:
    case -64:
    case -63:
    case -62:
    case -61:
    case -60:
    case -59:
    case -58:
    case -57:
    case -56:
    case -55:
    case -54:
    case -53:
    case -52:
    case -51:
    case -50:
    case -49:
    case -48:
    case -47:
    case -46:
    case -45:
    case -44:
    case -43:
    case -42:
    case -41:
    case -40:
    case -39:
    case -38:
    case -37:
    case -36:
    case -35:
    case -34:
    case -33:
    case -32:
    case -31:
    case -30:
    case -29:
    case -28:
    case -27:
    case -26:
    case -25:
    case -24:
    case -23:
    case -22:
    case -21:
    case -20:
    case -19:
    case -18:
    case -17:
    case -16:
    case -15:
    case -14:
    case -13:
    case -12:
    case -11:
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -3:
    case -2:
      if ( under_debugger )
        BUG();
      interr();
      goto LABEL_16;
    case 1:
      *(_BYTE *)(a3 + 1) = 6;
      *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
      v32 = *(_DWORD *)(a2 + 28) & 0x818;
      if ( v32 == 2048 || v32 == 8 || v32 == 16 && (*(_BYTE *)(a2 + 33) & 8) == 0 )
        next_word = (__int16)insn_get_next_word();
      else
        next_word = (int)insn_get_next_dword();
      *(_QWORD *)(a3 + 16) = next_word;
      v34 = *(_DWORD *)(a2 + 28) & 0x818;
      if ( v34 == 2048 || v34 == 8 )
      {
        v35 = 1;
      }
      else
      {
        v35 = 2;
        if ( v34 == 16 )
          v35 = ((*(_BYTE *)(a2 + 33) & 8) != 0) + 1;
      }
      *(_BYTE *)(a3 + 5) = v35;
      *(_WORD *)(a3 + 26) = 30;
      if ( (a4 & 0x7F00) != 0x600 )
      {
        v36 = *(_DWORD *)(a2 + 28);
        if ( (v36 & 0x10) == 0 )
        {
          v37 = (*(_DWORD *)(a2 + 28) & 0x818) == 2056 || (*(_DWORD *)(a2 + 28) & 0x818) == 0;
          goto LABEL_119;
        }
        v37 = 2;
        if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
          goto LABEL_119;
        v37 = 0;
        if ( (v36 & 0x800) == 0 )
          goto LABEL_119;
        v38 = *(unsigned __int16 *)(a2 + 24);
        if ( (unsigned __int16)v38 > 0x39u )
        {
          v37 = 2;
          if ( (unsigned __int16)(v38 - 61) <= 0x18u )
            goto LABEL_119;
          if ( (unsigned __int16)v38 > 0xA0u )
          {
            if ( (_WORD)v38 == 738 || (_WORD)v38 == 741 )
              goto LABEL_119;
            goto LABEL_118;
          }
          if ( (unsigned __int16)v38 > 0x6Cu )
          {
            v57 = 0xC050682000555LL;
            if ( _bittest64(&v57, (unsigned int)(v38 - 109)) )
              goto LABEL_119;
            goto LABEL_118;
          }
        }
        else
        {
          v37 = 2;
          if ( (unsigned __int16)v38 > 0x34u )
            goto LABEL_119;
          if ( (unsigned __int16)v38 <= 0x12u )
          {
            if ( (unsigned __int16)v38 <= 0xFu )
LABEL_118:
              v37 = (v36 & 0x818) == 2064;
LABEL_119:
            v39 = *(_DWORD *)(a1 + 5244);
            v40 = v39 + 2608LL;
            *(_BYTE *)(a1 + 2 * v40 + 9) = *(_BYTE *)a3;
            *(_BYTE *)(a1 + 2 * v40 + 10) = v37;
            *(_DWORD *)(a1 + 5244) = v39 + 1;
            *(_BYTE *)(a3 + 1) = 7;
            goto LABEL_120;
          }
        }
        v53 = (unsigned int)(v38 - 37);
        if ( (unsigned __int16)v53 <= 0x3Bu )
        {
          v54 = 0xA1A000000E00005LL;
          v37 = 2;
          if ( _bittest64(&v54, v53) )
            goto LABEL_119;
        }
        goto LABEL_118;
      }
      *(_WORD *)(a3 + 26) = -1;
      *(_WORD *)(a3 + 24) = insn_get_next_word();
      v52 = *(_DWORD *)(a2 + 28) & 0x818;
      if ( v52 == 2048 || v52 == 8 )
        goto LABEL_189;
      if ( v52 == 16 )
      {
        if ( (*(_BYTE *)(a2 + 33) & 8) == 0 )
LABEL_189:
          *(_QWORD *)(a3 + 16) = (unsigned __int16)*(_QWORD *)(a3 + 16);
      }
      else if ( !v52 || v52 == 2056 || v52 == 2064 && (*(_BYTE *)(a2 + 33) & 8) == 0 )
      {
        *(_QWORD *)(a3 + 16) = (unsigned int)*(_QWORD *)(a3 + 16);
      }
LABEL_120:
      *(_BYTE *)(a1 + 5222) = 1;
      return 1;
    case 2:
    case 8:
    case 34:
LABEL_16:
      v11 = ~(*(_BYTE *)(a1 + 5194) >> 3);
      v12 = v11 & 0xF;
      if ( (*(_BYTE *)(a2 + 273) & 0x10) != 0 )
      {
        if ( (unsigned __int8)a4 != 8 )
        {
          if ( (v11 & 8) == 0 || (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
          {
            *(_WORD *)(a3 + 6) = v12;
            *(_BYTE *)(a1 + 5224) = 1;
            goto LABEL_21;
          }
          return 0;
        }
        if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
          return 0;
        *(_WORD *)(a3 + 6) = v12 | 0x10;
        *(_BYTE *)(a1 + 5224) = 1;
      }
      else
      {
        if ( (v11 & 8) != 0 && (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
          return 0;
        *(_WORD *)(a3 + 6) = v12;
        *(_BYTE *)(a1 + 5224) = 1;
        if ( (unsigned __int8)a4 != 8 )
        {
LABEL_21:
          if ( (unsigned __int8)a4 == 34 )
LABEL_32:
            *(_BYTE *)(a3 + 1) = 16;
          else
            *(_BYTE *)(a3 + 1) = 1;
          return 1;
        }
      }
LABEL_27:
      v16 = *(_BYTE *)(a3 + 5);
      v17 = 15;
      if ( v16 != 17 )
        v17 = (v16 == 16) + 13;
      *(_BYTE *)(a3 + 1) = v17;
      return 1;
    case 3:
      if ( (*(_DWORD *)(a1 + 4436) & 0x7D78F) == 0 )
        return 0;
      sub_64AE0(a1, a2, a3, 10);
      if ( (*(_BYTE *)(a2 + 28) & 1) != 0 && !*(_WORD *)(a3 + 6) )
      {
        *(_BYTE *)(a3 + 32) = 1;
        *(_WORD *)(a3 + 6) = 8;
        *(_DWORD *)(a2 + 28) &= ~1u;
      }
      return 1;
    case 4:
      if ( (*(_WORD *)(a1 + 4436) & 0x1495) == 0 )
        return 0;
      sub_64AE0(a1, a2, a3, 9);
      return 1;
    case 5:
      sub_64BB0(a1, a2, a3);
      return 1;
    case 6:
      return 1;
    case 7:
      sub_64AE0(a1, a2, a3, 1);
      return 1;
    case 9:
      sub_650C0(a1, a2, a3);
      return 1;
    case 10:
      *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
      if ( v6 )
      {
        if ( v6 == 1 )
          next_dword = (__int16)insn_get_next_word();
        else
          next_dword = insn_get_next_dword();
      }
      else
      {
        next_dword = (char)insn_get_next_byte();
      }
      *(_BYTE *)(a3 + 1) = 7;
      *(_WORD *)(a3 + 26) = 30;
      v27 = 0;
      *(_QWORD *)(a3 + 16) = next_dword;
      v28 = *(_DWORD *)(a2 + 28);
      if ( (v28 & 0x18) != 0 )
      {
        v27 = 2;
        if ( (v28 & 8) != 0 )
        {
          v27 = 0;
          if ( (v28 & 0x800) != 0 )
            v27 = (*(_BYTE *)(a1 + 5194) & 0x83) != 0x81;
        }
      }
      v29 = *(_DWORD *)(a1 + 5244);
      v30 = v29 + 2608LL;
      *(_BYTE *)(a1 + 2 * v30 + 9) = *(_BYTE *)a3;
      *(_BYTE *)(a1 + 2 * v30 + 10) = v27;
      *(_DWORD *)(a1 + 5244) = v29 + 1;
      return 1;
    case 11:
      next_byte = insn_get_next_byte();
      *(_BYTE *)(a1 + 5195) = next_byte;
      next_byte >>= 4;
      v14 = next_byte;
      v15 = next_byte & 7;
      *(_WORD *)(a3 + 6) = v14;
      if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
        v15 = v14;
      goto LABEL_26;
    case 12:
      sub_64BB0(a1, a2, a3);
      return *(_BYTE *)(a3 + 1) != 1;
    case 13:
      sub_64BB0(a1, a2, a3);
      if ( *(_BYTE *)(a3 + 1) == 1 )
        goto LABEL_88;
      return 0;
    case 14:
      *(_BYTE *)(a3 + 1) = 2;
      *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
      v31 = *(_DWORD *)(a2 + 28);
      if ( (v31 & 0x1018) == 0x1010 )
      {
        next_qword = insn_get_next_qword();
      }
      else
      {
        if ( (v31 & 0x1008) != 0 && (v31 & 0x1018) != 0x1008 )
        {
          *(_QWORD *)(a3 + 16) = (unsigned __int16)insn_get_next_word();
          goto LABEL_10;
        }
        next_qword = (unsigned int)insn_get_next_dword();
      }
      *(_QWORD *)(a3 + 16) = next_qword;
      if ( next_qword > 0xFFFF )
        *(_DWORD *)(a2 + 28) |= 0x20u;
      goto LABEL_10;
    case 15:
      sub_64AE0(a1, a2, a3, 12);
      return 1;
    case 16:
      sub_64BB0(a1, a2, a3);
      if ( *(_BYTE *)(a3 + 1) == 1 )
LABEL_88:
        *(_BYTE *)(a3 + 1) = 12;
      return 1;
    case 17:
      if ( *(_WORD *)(a2 + 24) == 123 )
      {
        if ( *(_BYTE *)(a1 + 5220) )
        {
          v43 = *(unsigned __int8 *)(a1 + 5196);
        }
        else
        {
          *(_BYTE *)(a1 + 5220) = 1;
          v43 = (unsigned __int8)insn_get_next_byte();
          *(_DWORD *)(a1 + 5200) = ((int)(unsigned __int8)v43 >> 3) & 7;
        }
        LOBYTE(v43) = v43 | 0xC0;
        *(_DWORD *)(a1 + 5196) = v43;
      }
      sub_64BB0(a1, a2, a3);
      return *(_BYTE *)(a3 + 1) == 1;
    case 18:
      if ( !*(_BYTE *)(a1 + 5220) )
      {
        *(_BYTE *)(a1 + 5220) = 1;
        v44 = insn_get_next_byte();
        *(_DWORD *)(a1 + 5196) = v44;
        *(_DWORD *)(a1 + 5200) = ((int)v44 >> 3) & 7;
      }
      *(_BYTE *)(a3 + 1) = 1;
      v25 = *(_WORD *)(a1 + 5200) + 29;
      *(_WORD *)(a3 + 6) = v25;
      if ( v25 > 0x22u )
        return 0;
      return v25 <= 0x20u || (*(_DWORD *)(a1 + 4436) & 0x7D78F) != 0;
    case 19:
      if ( (*(_WORD *)(a1 + 4436) & 0x1495) == 0 )
        return 0;
      sub_64AE0(a1, a2, a3, 8);
      return 1;
    case 20:
      sub_64BB0(a1, a2, a3);
      if ( *(_BYTE *)(a3 + 1) == 1 )
        goto LABEL_53;
      return 0;
    case 21:
      v24 = 15;
      if ( v6 != 17 )
        v24 = (v6 == 16) + 13;
      sub_64AE0(a1, a2, a3, v24);
      v19 = *(_WORD *)(a3 + 6);
      if ( (*(_BYTE *)(a2 + 30) & 1) != 0 )
        v19 |= 16 * (*(_BYTE *)(a2 + 273) & 1);
      goto LABEL_39;
    case 22:
      sub_64BB0(a1, a2, a3);
      if ( *(_BYTE *)(a3 + 1) != 1 )
        return 1;
LABEL_53:
      v15 = *(_WORD *)(a3 + 6);
      if ( (*(_BYTE *)(a2 + 30) & 1) != 0 && (*(_BYTE *)(a2 + 33) & 2) != 0 )
        v15 |= 0x10u;
LABEL_26:
      *(_WORD *)(a3 + 6) = v15;
      goto LABEL_27;
    case 23:
      v22 = *(_BYTE *)(a2 + 32);
      if ( v22 )
      {
        if ( v22 != 32 )
          *(_BYTE *)(a1 + 5221) = 1;
      }
      else if ( (*(_BYTE *)(a2 + 29) & 0x10) != 0 )
      {
        *(_BYTE *)(a3 + 4) &= ~8u;
      }
      *(_BYTE *)(a3 + 1) = 3;
      *(_QWORD *)(a3 + 16) = 0;
      v23 = *(_DWORD *)(a2 + 28) & 0x1018;
      if ( v23 == 4096 || (v8 = 6, v23 == 8) )
        v8 = 4;
      goto LABEL_9;
    case 24:
      if ( !*(_BYTE *)(a2 + 32) && (*(_BYTE *)(a2 + 29) & 0x10) != 0 )
        *(_BYTE *)(a3 + 4) &= ~8u;
      *(_BYTE *)(a3 + 1) = 3;
      v20 = *(_DWORD *)(a2 + 28) & 0x1018;
      if ( v20 == 4096 || (v21 = 7, v20 == 8) )
        v21 = 5;
      *(_WORD *)(a3 + 6) = v21;
      *(_WORD *)(a3 + 26) = 29;
      *(_BYTE *)(a1 + 5223) = 1;
      return 1;
    case 25:
      if ( (*(_BYTE *)(a2 + 32) & 0xDF) != 0 )
      {
        *(_BYTE *)(a1 + 5221) = 1;
LABEL_6:
        *(_BYTE *)(a3 + 4) |= 8u;
        goto LABEL_7;
      }
      if ( (*(_BYTE *)(a2 + 29) & 0x10) == 0 || *(_BYTE *)(a1 + 5221) )
        goto LABEL_6;
LABEL_7:
      *(_BYTE *)(a3 + 1) = 3;
      v7 = *(_DWORD *)(a2 + 28) & 0x1018;
      if ( v7 == 4096 || (v8 = 3, v7 == 8) )
        v8 = 7;
LABEL_9:
      *(_WORD *)(a3 + 6) = v8;
LABEL_10:
      *(_BYTE *)(a1 + 5221) = 1;
      v9 = *(unsigned __int8 *)(a2 + 32);
      if ( !(_BYTE)v9 )
        goto LABEL_11;
      if ( (_BYTE)v9 == 32 )
      {
        *(_DWORD *)(a2 + 28) |= 0x80u;
LABEL_11:
        v9 = 32;
      }
      *(_WORD *)(a3 + 26) = v9;
      *(_BYTE *)(a1 + 5223) = 1;
      return 1;
    case 26:
      sub_650C0(a1, a2, a3);
      if ( *(_QWORD *)(a3 + 8) != 10 )
        *(_BYTE *)(a3 + 4) |= 8u;
      return 1;
    case 27:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = 3;
      return 1;
    case 28:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = 1;
      return 1;
    case 29:
      sub_64AE0(a1, a2, a3, 1);
      v18 = *(_WORD *)(a3 + 6);
      if ( v18 <= 3u )
        goto LABEL_38;
      return 0;
    case 30:
      sub_64BB0(a1, a2, a3);
      if ( *(_BYTE *)(a3 + 1) != 1 )
        return 1;
      v18 = *(_WORD *)(a3 + 6);
      if ( v18 > 3u )
        return 0;
LABEL_38:
      v19 = v18 + 97;
LABEL_39:
      *(_WORD *)(a3 + 6) = v19;
      return 1;
    case 32:
      sub_64AE0(a1, a2, a3, 16);
      return 1;
    case 33:
      sub_64BB0(a1, a2, a3);
      if ( *(_BYTE *)(a3 + 1) != 1 )
        return 0;
      goto LABEL_32;
    case 35:
      sub_64BB0(a1, a2, a3);
      if ( *(_BYTE *)(a3 + 1) == 1 )
        goto LABEL_32;
      return 1;
    case 36:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = *(_BYTE *)(a1 + 5195) & 0xF;
      return 1;
    case -4:
      *(_BYTE *)(a3 + 1) = 13;
      *(_WORD *)(a3 + 6) = 0;
      return 1;
    case -1:
      *(_BYTE *)(a3 + 1) = 1;
      v41 = (a4 >> 8) & 0xF;
      *(_WORD *)(a3 + 6) = (a4 >> 8) & 0xF;
      if ( (~(_WORD)a4 & 0x3000) == 0 )
      {
        *(_BYTE *)(a3 + 5) = 1;
        *(_WORD *)(a3 + 6) = v41 + 29;
        return 1;
      }
      if ( (a4 & 0x1000) != 0 )
      {
        *(_BYTE *)(a3 + 5) = 0;
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 5192) + 80) <= 7u )
        {
          if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
            LOWORD(v41) = (8 * (*(_BYTE *)(a2 + 33) & 1)) | v41;
          *(_WORD *)(a3 + 6) = v41;
        }
        sub_64010(a2, a3);
        return 1;
      }
      if ( (a4 & 0x2000) == 0 )
        return 1;
      v45 = *(_WORD *)(a2 + 24);
      if ( (_WORD)v41 == 2 && (((v45 - 43) & 0xFFFD) == 0 || (unsigned __int16)(v45 - 132) <= 1u) )
      {
        *(_BYTE *)(a3 + 5) = 1;
        return 1;
      }
      if ( v45 == 214 )
      {
        if ( *(_BYTE *)a3 != 1 )
        {
          v55 = *(_BYTE *)(a1 + 5192);
          if ( (unsigned __int8)(v55 + 72) > 7u && (unsigned __int8)(v55 - 80) > 0xFu )
            goto LABEL_165;
        }
      }
      else
      {
        v46 = *(_BYTE *)(a1 + 5192);
        if ( (unsigned __int8)(v46 + 72) > 7u && (unsigned __int8)(v46 - 80) > 0xFu && v45 != 218 )
          goto LABEL_165;
      }
      if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
        LOWORD(v41) = (8 * (*(_BYTE *)(a2 + 33) & 1)) | v41;
      *(_WORD *)(a3 + 6) = v41;
LABEL_165:
      v47 = *(_DWORD *)(a2 + 28);
      if ( (v47 & 0x10) == 0 )
      {
        v48 = ((*(_DWORD *)(a2 + 28) & 0x818) == 0 || (*(_DWORD *)(a2 + 28) & 0x818) == 2056) + 1;
        goto LABEL_173;
      }
      v48 = 7;
      if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
        goto LABEL_173;
      v48 = 1;
      if ( (v47 & 0x800) == 0 )
        goto LABEL_173;
      v49 = *(unsigned __int16 *)(a2 + 24);
      if ( (unsigned __int16)v49 <= 0x39u )
      {
        v48 = 7;
        if ( (unsigned __int16)v49 > 0x34u )
          goto LABEL_173;
        if ( (unsigned __int16)v49 <= 0x12u )
        {
          if ( (unsigned __int16)v49 > 0xFu )
            goto LABEL_173;
          goto LABEL_208;
        }
LABEL_171:
        v50 = (unsigned int)(v49 - 37);
        if ( (unsigned __int16)v50 <= 0x3Bu )
        {
          v51 = 0xA1A000000E00005LL;
          v48 = 7;
          if ( _bittest64(&v51, v50) )
            goto LABEL_173;
        }
LABEL_208:
        v48 = ((v47 & 0x818) == 2064) + 1;
        goto LABEL_173;
      }
      v48 = 7;
      if ( (unsigned __int16)(v49 - 61) <= 0x18u )
        goto LABEL_173;
      if ( (unsigned __int16)v49 <= 0xA0u )
      {
        if ( (unsigned __int16)v49 > 0x6Cu )
        {
          v56 = 0xC050682000555LL;
          if ( _bittest64(&v56, (unsigned int)(v49 - 109)) )
            goto LABEL_173;
          goto LABEL_208;
        }
        goto LABEL_171;
      }
      if ( (_WORD)v49 != 738 && (_WORD)v49 != 741 )
        goto LABEL_208;
LABEL_173:
      *(_BYTE *)(a3 + 5) = v48;
      if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
        goto LABEL_120;
      return 1;
  }
}

