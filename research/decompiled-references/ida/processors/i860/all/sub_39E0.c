__int64 __fastcall sub_39E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  unsigned int v4; // ecx
  int v5; // edx
  __int16 v6; // ax
  int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // ax
  char v10; // al
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int16 v14; // ax
  __int16 v15; // ax
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  __int16 v18; // ax
  char v19; // al
  __int16 v20; // ax
  unsigned __int16 v21; // ax
  __int16 v22; // ax
  unsigned __int16 v23; // ax
  __int16 v24; // ax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  __int16 v28; // ax
  int v29; // eax
  __int64 v30; // rdx

  if ( !a2 )
    return 0;
  result = 0;
  if ( (*(_BYTE *)(a2 + 16) & 3) == 0 )
  {
    *(_DWORD *)(a1 + 124) = insn_get_next_dword();
    *(_BYTE *)(a2 + 45) = 2;
    *(_BYTE *)(a2 + 85) = 2;
    *(_BYTE *)(a2 + 125) = 2;
    *(_WORD *)(a2 + 24) = 0;
    v3 = *(_DWORD *)(a1 + 124);
    v4 = v3 >> 26;
    if ( v3 > 0xCFFFFFFF )
    {
      v30 = 1LL << v4;
      if ( ((1LL << v4) & 0xB000000000000000LL) != 0 )
      {
        v14 = ((v3 & 0x8000000) != 0) + 78;
      }
      else if ( (v30 & 0xB00000000000000LL) != 0 )
      {
        v14 = ((v3 & 0x8000000) != 0) + 45;
      }
      else
      {
        if ( (v30 & 0xB0000000000000LL) == 0 )
          return 0;
        v14 = ((v3 & 0x8000000) != 0) + 5;
      }
LABEL_23:
      *(_WORD *)(a2 + 24) = v14;
      v7 = *(_DWORD *)(a1 + 124);
      if ( (v7 & 0x4000000) != 0 )
      {
LABEL_14:
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = *(unsigned __int16 *)(a1 + 124);
      }
      else
      {
LABEL_24:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int16)v7 >> 11;
      }
LABEL_11:
      v8 = *(_DWORD *)(a1 + 124);
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = (v8 >> 21) & 0x1F;
      LOWORD(v8) = *(_WORD *)(a1 + 126);
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 126) = v8 & 0x1F;
    }
    else
    {
      switch ( *(_DWORD *)(a1 + 124) >> 26 )
      {
        case 0:
        case 1:
        case 4:
        case 5:
          *(_WORD *)(a2 + 24) = 41;
          sub_33A0(a1, a2 + 40);
          v9 = *(_WORD *)(a1 + 126);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v9 & 0x1F;
          goto LABEL_16;
        case 2:
          *(_WORD *)(a2 + 24) = 39;
          v23 = *(_WORD *)(a1 + 124);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = v23 >> 11;
          v24 = *(_WORD *)(a1 + 126);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (v24 & 0x1F) + 32;
          return 4;
        case 3:
        case 7:
          *(_WORD *)(a2 + 24) = 72;
          v21 = *(_WORD *)(a1 + 124);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 86) = v21 >> 11;
          *(_WORD *)(a2 + 46) = (*(_DWORD *)(a1 + 124) >> 21) & 0x1F;
          *(_QWORD *)(a2 + 56) = (__int16)(*(_DWORD *)(a1 + 124) & 0x7FF | (HIWORD(*(_DWORD *)(a1 + 124)) << 11));
LABEL_16:
          v10 = 0;
          if ( (*(_DWORD *)(a1 + 124) & 0x10000000) != 0 )
            v10 = (*(_BYTE *)(a1 + 124) & 1) + 1;
          *(_BYTE *)(a2 + 45) = v10;
          *(_BYTE *)(a2 + 85) = v10;
          return 4;
        case 6:
        case 0x32:
          return 0;
        case 8:
        case 9:
          *(_WORD *)(a2 + 24) = 25;
          sub_3410(a1, a2 + 40);
          v22 = *(_WORD *)(a1 + 126);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (v22 & 0x1F) + 32;
          *(_BYTE *)(a2 + 85) = *(_BYTE *)(a2 + 45);
          return 4;
        case 0xA:
        case 0xB:
          *(_WORD *)(a2 + 24) = 32;
          goto LABEL_37;
        case 0xC:
          *(_BYTE *)(a2 + 41) = 1;
          v27 = (v3 >> 21) & 0x1F;
          *(_WORD *)(a2 + 46) = v27;
          if ( (unsigned __int16)v27 > ((*(_DWORD *)(a1 + 120) & 2) == 0 ? 5 : 11) )
            return 0;
          *(_WORD *)(a2 + 46) = v27 + 64;
          v28 = *(_WORD *)(a1 + 126);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 24) = 40;
          *(_WORD *)(a2 + 86) = v28 & 0x1F;
          return 4;
        case 0xD:
          *(_WORD *)(a2 + 24) = 26;
          sub_3410(a1, a2 + 40);
          return 4;
        case 0xE:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (unsigned __int16)v3 >> 11;
          v25 = *(_DWORD *)(a1 + 124);
          *(_BYTE *)(a2 + 81) = 1;
          v26 = (v25 >> 21) & 0x1F;
          *(_WORD *)(a2 + 86) = v26;
          if ( (unsigned __int16)v26 > ((*(_DWORD *)(a1 + 120) & 2) == 0 ? 5 : 11) )
            return 0;
          *(_WORD *)(a2 + 86) = v26 + 64;
          *(_WORD *)(a2 + 24) = 71;
          return 4;
        case 0xF:
          *(_WORD *)(a2 + 24) = 65;
LABEL_37:
          v20 = *(_WORD *)(a1 + 126);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (v20 & 0x1F) + 32;
          sub_3410(a1, a2 + 80);
          *(_BYTE *)(a2 + 45) = *(_BYTE *)(a2 + 85);
          return 4;
        case 0x10:
          *(_WORD *)(a2 + 24) = 13;
          v29 = *(_DWORD *)(a1 + 124);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (unsigned __int16)v29 >> 11;
          return 4;
        case 0x11:
          *(_WORD *)(a2 + 24) = 76;
          LOWORD(v7) = *(_WORD *)(a1 + 124);
          goto LABEL_24;
        case 0x12:
          sub_3630(a1, a2);
          return 4 * (unsigned int)(*(_WORD *)(a2 + 24) != 0);
        case 0x13:
          sub_34F0(a1, a2);
          return 4 * (unsigned int)(*(_WORD *)(a2 + 24) != 0);
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
          *(_WORD *)(a2 + 24) = ((v3 & 0x8000000) == 0) + 14;
          v11 = *(_DWORD *)(a1 + 124);
          if ( (v11 & 0x4000000) == 0 )
            goto LABEL_48;
          *(_BYTE *)(a2 + 41) = 5;
          *(_QWORD *)(a2 + 48) = *(_WORD *)(a1 + 124) >> 11;
          goto LABEL_21;
        case 0x18:
        case 0x19:
          sub_3410(a1, a2 + 40);
          v18 = *(_WORD *)(a1 + 126);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (v18 & 0x1F) + 32;
          v19 = *(_BYTE *)(a2 + 45);
          *(_BYTE *)(a2 + 85) = v19;
          if ( (*(_BYTE *)(a1 + 120) & 2) == 0 && v19 == 8 )
            return 0;
          *(_WORD *)(a2 + 24) = 56;
          return 4;
        case 0x1A:
          *(_WORD *)(a2 + 24) = 12;
          goto LABEL_27;
        case 0x1B:
          *(_WORD *)(a2 + 24) = 16;
          goto LABEL_27;
        case 0x1C:
        case 0x1D:
          v15 = ((v3 & 0x4000000) != 0) + 7;
          goto LABEL_26;
        case 0x1E:
        case 0x1F:
          v15 = ((v3 & 0x4000000) != 0) + 10;
LABEL_26:
          *(_WORD *)(a2 + 24) = v15;
LABEL_27:
          *(_BYTE *)(a2 + 41) = 7;
          v16 = *(_DWORD *)(a1 + 124);
          *(_BYTE *)(a2 + 45) = 9;
          v17 = v16 | 0xFFFFFFFFFC000000LL;
          if ( (v16 & 0x2000000) == 0 )
            v17 = v16 & 0x3FFFFFF;
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) + 4 * v17;
          return 4;
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
          v5 = v3 & 0x10000000;
          if ( (v3 & 0x8000000) != 0 )
            v6 = (v5 == 0) + 74;
          else
            v6 = (v5 == 0) + 1;
          *(_WORD *)(a2 + 24) = v6;
          v7 = *(_DWORD *)(a1 + 124);
          if ( (v7 & 0x4000000) == 0 )
            goto LABEL_24;
          *(_BYTE *)(a2 + 41) = 5;
          *(_QWORD *)(a2 + 48) = *(__int16 *)(a1 + 124);
          goto LABEL_11;
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
          *(_WORD *)(a2 + 24) = ((v3 & 0x8000000) != 0) + 67;
          v7 = *(_DWORD *)(a1 + 124);
          if ( (v7 & 0x4000000) != 0 )
            goto LABEL_14;
          goto LABEL_24;
        case 0x2C:
          *(_WORD *)(a2 + 24) = 70;
          LOWORD(v7) = *(_WORD *)(a1 + 124);
          goto LABEL_24;
        case 0x2D:
          *(_WORD *)(a2 + 24) = 9;
          LOWORD(v11) = *(_WORD *)(a1 + 124);
LABEL_48:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (unsigned __int16)v11 >> 11;
LABEL_21:
          v12 = *(_DWORD *)(a1 + 124);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 121) = 7;
          *(_WORD *)(a2 + 86) = (v12 >> 21) & 0x1F;
          v13 = *(_DWORD *)(a1 + 124);
          *(_BYTE *)(a2 + 125) = 9;
          *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 16)
                                + *(unsigned __int16 *)(a2 + 26)
                                + 4LL * ((v13 & 0x7FF) + ((v13 >> 5) & 0xF800));
          break;
        case 0x2E:
        case 0x2F:
          *(_WORD *)(a2 + 24) = 69;
          v7 = *(_DWORD *)(a1 + 124);
          if ( (v7 & 0x4000000) != 0 )
            goto LABEL_14;
          goto LABEL_24;
        case 0x30:
        case 0x31:
        case 0x33:
          v14 = ((v3 & 0x8000000) != 0) + 3;
          goto LABEL_23;
      }
    }
    return 4;
  }
  return result;
}

