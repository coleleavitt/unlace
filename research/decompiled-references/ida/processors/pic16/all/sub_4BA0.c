__int64 __fastcall sub_4BA0(__int64 a1, __int64 a2)
{
  int wide_byte; // ebp
  unsigned int v5; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  __int64 v8; // rsi
  __int16 v9; // r11
  __int16 v10; // dx
  int v11; // eax
  char v12; // al
  unsigned int v13; // eax
  __int16 v14; // bp
  __int64 v15; // rax
  __int16 v16; // si
  int v17; // eax
  int v18; // ecx
  __int16 v19; // ax
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rax
  int v23; // r12d
  unsigned __int8 v24; // al
  int v25; // edx
  __int64 v26; // rax
  __int16 v27; // r11
  __int16 v28; // di
  int v29; // r13d
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int16 v35; // dx
  int v36; // edx
  __int16 v37; // ax
  __int16 v38; // ax
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  char v42; // dl
  int v43; // eax
  __int16 v44; // dx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  unsigned int v48; // ebp
  __int16 v49; // ax
  int v50; // eax
  int v51; // eax
  __int16 v52; // dx
  __int64 v53; // rax
  int v54; // eax
  char v55; // al
  int v56; // edx
  int v57; // eax
  char v58; // dl
  char v59; // al
  __int16 v60; // dx
  __int16 v61; // ax
  __int16 v62; // si
  int v63; // eax
  signed int v64; // edx
  int v65; // edx
  unsigned int v66; // ebp
  signed int v67; // eax
  char v68; // al
  int v69; // edx
  __int16 v70; // dx
  int v71; // eax
  char v72; // al
  unsigned int v73; // eax
  int v74; // eax
  signed int v75; // eax
  int v76; // eax
  char v77; // al
  int v78; // edx
  int v79; // eax
  __int16 v80; // ax
  int v81; // eax
  int v82; // eax
  signed int v83; // edx
  signed int v84; // edx
  int v85; // edx
  int v86; // eax
  char v87; // al
  __int64 v88; // rdx
  __int16 v89; // ax
  __int64 v90; // rax
  int v91; // eax
  char v92; // dl
  int v93; // edx
  int v94; // eax
  __int16 v95; // cx
  int v96; // edx
  char v97; // dl
  __int64 v98; // rdx
  char v99; // al
  __int16 v100; // ax
  __int16 v101; // bp
  __int64 v102; // rdx

  ++*(_WORD *)(a2 + 26);
  wide_byte = (unsigned __int16)get_wide_byte();
  ++*(_WORD *)(a2 + 26);
  v5 = (unsigned int)get_wide_byte() << 16;
  v6 = v5 | wide_byte;
  v7 = HIWORD(v5);
  v8 = BYTE2(v5) & 0xF;
  if ( v5 > 0xFFFFFF )
  {
LABEL_47:
    v27 = *(_WORD *)(a2 + 24);
    goto LABEL_48;
  }
  switch ( v5 >> 20 )
  {
    case 0u:
      if ( (v5 & 0xF0000) == 0 )
      {
        *(_WORD *)(a2 + 24) = 77;
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (_DWORD)v8 == 1 )
      {
        if ( BYTE1(v6) == 32 )
        {
          *(_WORD *)(a2 + 24) = 65;
          goto LABEL_248;
        }
        if ( BYTE1(v6) > 0x20u )
        {
          if ( BYTE1(v6) != 64 )
          {
            if ( BYTE1(v6) != 96 )
              goto LABEL_291;
            goto LABEL_320;
          }
        }
        else if ( BYTE1(v6) != 4 )
        {
          if ( BYTE1(v6) != 6 )
          {
            if ( !BYTE1(v6) )
            {
              *(_WORD *)(a2 + 24) = 63;
LABEL_248:
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = v6 & 0xF;
              *(_BYTE *)(a2 + 45) = 0;
              return *(unsigned __int16 *)(a2 + 26);
            }
LABEL_291:
            *(_DWORD *)(a2 + 28) = 8;
            *(_WORD *)(a2 + 24) = ((v6 & 0x400) != 0) + 63;
            goto LABEL_248;
          }
LABEL_320:
          *(_WORD *)(a2 + 24) = 62;
          goto LABEL_248;
        }
        *(_WORD *)(a2 + 24) = 64;
        goto LABEL_248;
      }
      if ( (((_DWORD)v8 - 2) & 0xFFFFFFFD) == 0 )
      {
        v28 = *(_WORD *)(a2 + 26);
        *(_BYTE *)(a2 + 41) = 7;
        *(_WORD *)(a2 + 26) = v28 + 1;
        *(_WORD *)(a2 + 24) = ((_DWORD)v8 != 2) + 63;
        v29 = (unsigned __int16)get_wide_byte();
        ++*(_WORD *)(a2 + 26);
        v30 = get_wide_byte();
        v27 = *(_WORD *)(a2 + 24);
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
            & ((unsigned __int16)v6 | ((unsigned __int64)(v29 | (unsigned int)(v30 << 16)) << 16));
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 56) = v31;
        goto LABEL_48;
      }
      switch ( (_DWORD)v8 )
      {
        case 5:
          v92 = 0;
          *(_WORD *)(a2 + 24) = 68;
          if ( (v6 & 0x4000) == 0 )
          {
            v92 = 1;
            LODWORD(v8) = 3;
          }
          *(_DWORD *)(a2 + 28) = v8;
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = v92;
          *(_QWORD *)(a2 + 48) = (v6 >> 4) & 0x3FF;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v6 & 0xF;
          *(_BYTE *)(a2 + 85) = 1;
          return *(unsigned __int16 *)(a2 + 26);
        case 6:
          *(_WORD *)(a2 + 24) = (v6 & 0xF000) == 0 ? 69 : 67;
          return *(unsigned __int16 *)(a2 + 26);
        case 7:
          v98 = *(_QWORD *)(a2 + 16);
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 24) = 65;
          *(_BYTE *)(a2 + 45) = 9;
          *(_QWORD *)(a2 + 56) = ((_DWORD)v98 + 2 * (__int16)v6 + 2) & 0xFFFFFF;
          return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (_DWORD)v8 != 8 )
      {
        if ( (_DWORD)v8 == 9 )
        {
          *(_WORD *)(a2 + 24) = 66;
          if ( (v6 & 0x8000) != 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = v6 & 0xF;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = v6 & 0x7FFF;
          }
          *(_BYTE *)(a2 + 45) = 1;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (unsigned int)v8 > 0xB )
        {
          v88 = *(_QWORD *)(a2 + 16);
          *(_WORD *)(a2 + 24) = 62;
          v89 = *((_WORD *)&qword_D2A0 + (BYTE2(v5) & 3));
          *(_BYTE *)(a2 + 41) = 8;
          *(_BYTE *)(a2 + 81) = 7;
          *(_BYTE *)(a2 + 72) = v89;
          *(_BYTE *)(a2 + 85) = 9;
          *(_QWORD *)(a2 + 96) = ((_DWORD)v88 + 2 * (__int16)v6 + 2) & 0xFFFFFF;
          return *(unsigned __int16 *)(a2 + 26);
        }
        goto LABEL_47;
      }
      *(_WORD *)(a2 + 24) = 70;
      if ( (v6 & 0x8000) != 0 )
      {
        v99 = 1;
        *(_WORD *)(a2 + 46) = v6 & 0xF;
      }
      else
      {
        v99 = 5;
        *(_QWORD *)(a2 + 48) = v6 & 0x7FFF;
      }
      *(_BYTE *)(a2 + 41) = v99;
      v100 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 26) = v100 + 1;
      v101 = get_wide_byte();
      ++*(_WORD *)(a2 + 26);
      get_wide_byte();
      v102 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a2 + 81) = 7;
      *(_BYTE *)(a2 + 85) = 9;
      v27 = *(_WORD *)(a2 + 24);
      *(_QWORD *)(a2 + 96) = ((_DWORD)v102 + 2 * v101 + 4) & 0xFFFFFF;
LABEL_48:
      if ( v27 )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
    case 1u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 24) = ((v6 & 0x80000) == 0) + 21;
      *(_DWORD *)(a2 + 28) = (v6 & 0x4000) == 0 ? 3 : 5;
      *(_WORD *)(a2 + 46) = (v6 >> 15) & 0xF;
      if ( (~(_BYTE)v6 & 0x60) != 0 )
      {
        sub_48A0(a2, v6, 0, 1u);
      }
      else
      {
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 0;
        *(_QWORD *)(a2 + 88) = v6 & 0x1F;
      }
      sub_48A0(a2, v6, 7, 2u);
      return *(unsigned __int16 *)(a2 + 26);
    case 2u:
      *(_BYTE *)(a2 + 41) = 5;
      *(_WORD *)(a2 + 24) = 2;
      *(_QWORD *)(a2 + 48) = (__int16)(v6 >> 4);
LABEL_35:
      *(_BYTE *)(a2 + 45) = 1;
LABEL_36:
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = v6 & 0xF;
      *(_BYTE *)(a2 + 85) = 1;
      return *(unsigned __int16 *)(a2 + 26);
    case 3u:
      v33 = *(_QWORD *)(a2 + 16);
      *(_WORD *)(a2 + 24) = 62;
      v34 = ((_DWORD)v33 + 2 * (__int16)v6 + 2) & 0xFFFFFF;
      if ( (_DWORD)v8 == 7 )
      {
        *(_BYTE *)(a2 + 41) = 7;
        *(_QWORD *)(a2 + 56) = v34;
        *(_BYTE *)(a2 + 45) = 9;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 8;
        v35 = *((_WORD *)qword_D280 + v8);
        *(_BYTE *)(a2 + 81) = 7;
        *(_QWORD *)(a2 + 96) = v34;
        *(_BYTE *)(a2 + 72) = v35;
        *(_BYTE *)(a2 + 85) = 9;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 4u:
    case 5u:
    case 6u:
    case 7u:
      v9 = asc_D270[(v6 >> 19) & 7];
      *(_WORD *)(a2 + 24) = v9;
      if ( (v6 & 0x4000) != 0 )
      {
        *(_DWORD *)(a2 + 28) = 5;
        if ( v9 == 2 )
          goto LABEL_5;
      }
      else
      {
        *(_DWORD *)(a2 + 28) = 3;
        if ( v9 == 2 )
        {
          if ( (v6 & 0x7F80) == 0x1F80 )
          {
            *(_WORD *)(a2 + 24) = 73;
            LOWORD(v85) = v6 & 0xF;
            v86 = ((int)v6 >> 4) & 7;
            if ( !v86 )
            {
LABEL_270:
              *(_BYTE *)(a2 + 41) = 1;
              v87 = 1;
              *(_WORD *)(a2 + 46) = v85;
LABEL_257:
              *(_BYTE *)(a2 + 45) = v87;
              *(_DWORD *)(a2 + 28) = 0;
              return *(unsigned __int16 *)(a2 + 26);
            }
LABEL_254:
            if ( v86 == 6 )
              *(_BYTE *)(a2 + 73) = ((int)v6 >> 15) & 0xF;
            *(_BYTE *)(a2 + 41) = 3;
            *(_WORD *)(a2 + 46) = v85;
            *(_BYTE *)(a2 + 72) = v86;
            v87 = 0;
            goto LABEL_257;
          }
LABEL_5:
          if ( (v6 & 0x7F) != 0x4F )
          {
            *(_WORD *)(a2 + 24) = 2;
            v10 = v6 & 0xF;
            v11 = ((int)v6 >> 4) & 7;
            if ( v11 )
            {
              if ( v11 == 6 )
                *(_BYTE *)(a2 + 73) = ((int)v6 >> 15) & 0xF;
              *(_BYTE *)(a2 + 41) = 3;
              *(_WORD *)(a2 + 46) = v10;
              *(_BYTE *)(a2 + 72) = v11;
              v12 = 0;
            }
            else
            {
              *(_BYTE *)(a2 + 41) = 1;
              v12 = 1;
              *(_WORD *)(a2 + 46) = v10;
            }
            *(_BYTE *)(a2 + 45) = v12;
            sub_48A0(a2, v6, 7, 1u);
            return *(unsigned __int16 *)(a2 + 26);
          }
          *(_WORD *)(a2 + 24) = 72;
          v85 = ((int)v6 >> 7) & 0xF;
          v86 = ((int)v6 >> 11) & 7;
          if ( !v86 )
            goto LABEL_270;
          goto LABEL_254;
        }
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = (v6 >> 15) & 0xF;
      if ( (~(_BYTE)v6 & 0x60) != 0 )
      {
        sub_48A0(a2, v6, 0, 1u);
      }
      else
      {
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 0;
        *(_QWORD *)(a2 + 88) = v6 & 0x1F;
      }
      sub_48A0(a2, v6, 7, 2u);
      goto LABEL_48;
    case 8u:
      *(_WORD *)(a2 + 24) = 2;
      v13 = v6;
      v14 = v6 & 0xF;
      v15 = (v13 >> 3) & 0xFFFE;
      if ( (v7 & 8) != 0 )
      {
        *(_BYTE *)(a2 + 81) = 2;
        *(_QWORD *)(a2 + 96) = v15;
        *(_BYTE *)(a2 + 85) = 1;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v14;
        *(_BYTE *)(a2 + 45) = 1;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 2;
        *(_QWORD *)(a2 + 56) = v15;
        *(_BYTE *)(a2 + 45) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = v14;
        *(_BYTE *)(a2 + 85) = 1;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 9u:
      *(_WORD *)(a2 + 24) = 2;
      v16 = v6 & 0xF;
      *(_DWORD *)(a2 + 28) = (v6 & 0x4000) == 0 ? 3 : 5;
      v17 = (v6 >> 9) & 0x3C0 | (v6 >> 8) & 0x38 | (v6 >> 4) & 7;
      v18 = (v6 >> 7) & 0xF;
      if ( (v6 & 0x80000) != 0 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v16;
        *(_BYTE *)(a2 + 45) = 1;
        *(_BYTE *)(a2 + 81) = 4;
        *(_WORD *)(a2 + 86) = v18;
        if ( ((v6 & 0x4000) == 0 ? 0xFFFFFFFE : 0) != 0 )
        {
          v19 = 2 * v17;
          v20 = v19 & 0x3FF;
          v21 = (v19 & 0x400) == 0;
          v22 = (int)v20 - 1024;
          if ( v21 )
            v22 = v20;
        }
        else
        {
          v83 = (v6 >> 9) & 0x1C0 | (v6 >> 8) & 0x38 | (v6 >> 4) & 7;
          if ( (v17 & 0x200) != 0 )
            v83 = v17 | 0xFFFFFE00;
          v22 = v83;
        }
        *(_QWORD *)(a2 + 96) = v22;
        *(_BYTE *)(a2 + 85) = 1;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 46) = v16;
        if ( ((v6 & 0x4000) == 0 ? 0xFFFFFFFE : 0) != 0 )
        {
          v38 = 2 * v17;
          v39 = v38 & 0x3FF;
          v21 = (v38 & 0x400) == 0;
          v40 = (int)v39 - 1024;
          if ( v21 )
            v40 = v39;
        }
        else
        {
          v84 = (v6 >> 9) & 0x1C0 | (v6 >> 8) & 0x38 | (v6 >> 4) & 7;
          if ( (v17 & 0x200) != 0 )
            v84 = v17 | 0xFFFFFE00;
          v40 = v84;
        }
        *(_QWORD *)(a2 + 56) = v40;
        *(_BYTE *)(a2 + 45) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = v18;
        *(_BYTE *)(a2 + 85) = 1;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 0xAu:
      switch ( BYTE2(v5) & 0xF )
      {
        case 3:
        case 4:
          *(_WORD *)(a2 + 24) = 45 - (BYTE2(v5) & 1);
          *(_DWORD *)(a2 + 28) = ((v6 & 0x800) != 0) + 6;
          break;
        case 5:
        case 0xD:
          *(_WORD *)(a2 + 24) = (v5 & 0x80000) == 0 ? 44 : 42;
          *(_DWORD *)(a2 + 28) = ((v6 & 0x8000) != 0) + 6;
          sub_48A0(a2, v6, 0, 0);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (v6 >> 11) & 0xF;
          *(_BYTE *)(a2 + 85) = 1;
          return *(unsigned __int16 *)(a2 + 26);
        case 6:
        case 7:
          *(_WORD *)(a2 + 24) = 50 - (BYTE2(v5) & 1);
          break;
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xE:
        case 0xF:
          *(_DWORD *)(a2 + 28) = 5;
          v27 = aM21[BYTE2(v5) & 7];
          *(_BYTE *)(a2 + 41) = 2;
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
          *(_WORD *)(a2 + 24) = v27;
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 88) = (unsigned __int16)v6 >> 13;
          *(_BYTE *)(a2 + 85) = 0;
          goto LABEL_48;
        default:
          *(_WORD *)(a2 + 24) = aM21[v8 + 8];
          *(_DWORD *)(a2 + 28) = (v6 & 0x400) == 0 ? 3 : 5;
          sub_48A0(a2, v6, 0, 0);
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 88) = (unsigned __int16)v6 >> 12;
          *(_BYTE *)(a2 + 85) = 0;
          goto LABEL_48;
      }
      sub_48A0(a2, v6, 0, 0);
      *(_BYTE *)(a2 + 81) = 5;
      *(_QWORD *)(a2 + 88) = (unsigned __int16)v6 >> 12;
      *(_BYTE *)(a2 + 85) = 0;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xBu:
      switch ( BYTE2(v5) & 0xF )
      {
        case 0:
        case 2:
          *(_BYTE *)(a2 + 41) = 5;
          v27 = *((_WORD *)qword_D240 + v8);
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 24) = v27;
          *(_BYTE *)(a2 + 85) = 1;
          *(_DWORD *)(a2 + 28) = (v6 & 0x4000) == 0 ? 3 : 5;
          *(_QWORD *)(a2 + 48) = (v6 >> 4) & 0x3FF;
          *(_WORD *)(a2 + 86) = v6 & 0xF;
          if ( v27 == 9 )
          {
            if ( (v6 & 0x8000) != 0 )
              v27 = 10;
            *(_WORD *)(a2 + 24) = v27;
          }
          else
          {
            if ( v27 != 26 )
              goto LABEL_48;
            if ( (v6 & 0x8000) != 0 )
              v27 = 32;
            *(_WORD *)(a2 + 24) = v27;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 1:
        case 3:
          v41 = (v6 >> 15) & 7;
          switch ( v41 )
          {
            case 6:
              v27 = 29;
              *(_WORD *)(a2 + 24) = 29;
              break;
            case 7:
              v27 = 2;
              *(_WORD *)(a2 + 24) = 2;
              break;
            case 2:
              v27 = 19;
              *(_WORD *)(a2 + 24) = 19;
              break;
            case 3:
              v27 = 20;
              *(_WORD *)(a2 + 24) = 20;
              break;
            default:
              v27 = *(_WORD *)(a2 + 24);
              break;
          }
          if ( (v6 & 0x4000) != 0 )
          {
            v42 = 0;
            v43 = 5;
          }
          else
          {
            v42 = 1;
            v43 = 3;
          }
          *(_DWORD *)(a2 + 28) = v43;
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = v42;
          *(_QWORD *)(a2 + 48) = (v6 >> 4) & 0x3FF;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v6 & 0xF;
          *(_BYTE *)(a2 + 85) = 1;
          goto LABEL_48;
        case 4:
        case 5:
        case 6:
        case 0xC:
        case 0xD:
        case 0xF:
          goto LABEL_64;
        case 7:
          if ( (v6 & 0x8000) != 0 )
          {
            *(_WORD *)(a2 + 24) = 2;
            if ( (v6 & 0x4000) != 0 )
            {
              v68 = 0;
              v69 = 5;
            }
            else
            {
              v68 = 1;
              v69 = 3;
            }
            *(_DWORD *)(a2 + 28) = v69;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = 16;
            *(_BYTE *)(a2 + 45) = 1;
            *(_BYTE *)(a2 + 81) = 2;
            *(_QWORD *)(a2 + 96) = v6 & 0x1FFF;
            *(_BYTE *)(a2 + 85) = v68;
            return *(unsigned __int16 *)(a2 + 26);
          }
LABEL_64:
          switch ( (v6 >> 15) & 7 | BYTE2(v5) & 8 )
          {
            case 0u:
              v80 = 9;
              v27 = 9;
              goto LABEL_203;
            case 1u:
              v80 = 10;
              v27 = 10;
              goto LABEL_203;
            case 2u:
              v80 = 19;
              v27 = 19;
              goto LABEL_203;
            case 3u:
              v80 = 20;
              v27 = 20;
              goto LABEL_203;
            case 4u:
              v80 = 26;
              v27 = 26;
              goto LABEL_203;
            case 5u:
              v80 = 32;
              v27 = 32;
              goto LABEL_203;
            case 6u:
              v80 = 29;
              v27 = 29;
              goto LABEL_203;
            case 7u:
            case 9u:
            case 0xCu:
            case 0xDu:
            case 0xEu:
              v27 = *(_WORD *)(a2 + 24);
              if ( (v6 & 0x4000) != 0 )
              {
                v77 = 0;
                v78 = 5;
              }
              else
              {
                v77 = 1;
                v78 = 3;
              }
              *(_DWORD *)(a2 + 28) = v78;
              *(_BYTE *)(a2 + 41) = 2;
              *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
              *(_BYTE *)(a2 + 45) = v77;
              if ( v27 == 17 )
                return *(unsigned __int16 *)(a2 + 26);
              goto LABEL_177;
            case 8u:
              *(_WORD *)(a2 + 24) = 17;
              if ( (v6 & 0x4000) != 0 )
              {
                *(_DWORD *)(a2 + 28) = 5;
                *(_BYTE *)(a2 + 41) = 2;
                *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
                *(_BYTE *)(a2 + 45) = 0;
              }
              else
              {
                *(_DWORD *)(a2 + 28) = 3;
                *(_BYTE *)(a2 + 41) = 2;
                *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
                *(_BYTE *)(a2 + 45) = 1;
              }
              return *(unsigned __int16 *)(a2 + 26);
            case 0xAu:
              v80 = 22;
              v27 = 22;
              goto LABEL_203;
            case 0xBu:
              v80 = 21;
              v27 = 21;
              goto LABEL_203;
            case 0xFu:
              v80 = 2;
              v27 = 2;
LABEL_203:
              *(_WORD *)(a2 + 24) = v80;
              if ( (v6 & 0x4000) != 0 )
              {
                *(_DWORD *)(a2 + 28) = 5;
                *(_BYTE *)(a2 + 41) = 2;
                *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
                *(_BYTE *)(a2 + 45) = 0;
                if ( (v6 & 0x2000) == 0 )
                {
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 86) = 16;
                  *(_BYTE *)(a2 + 85) = 1;
                }
                return *(unsigned __int16 *)(a2 + 26);
              }
              *(_DWORD *)(a2 + 28) = 3;
              *(_BYTE *)(a2 + 41) = 2;
              *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
              *(_BYTE *)(a2 + 45) = 1;
LABEL_177:
              if ( (v6 & 0x2000) == 0 )
              {
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = 16;
                *(_BYTE *)(a2 + 85) = 1;
              }
              break;
          }
          break;
        case 8:
        case 9:
          v46 = 33;
          v47 = (v6 >> 15) & 3;
          if ( v47 != 2 )
          {
            v46 = 17;
            if ( v47 != 3 )
            {
              v46 = 18;
              if ( v47 != 1 )
                v46 = 34;
            }
          }
          *(_DWORD *)(a2 + 28) = v46;
          *(_WORD *)(a2 + 24) = 17;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (v6 >> 11) & 0xF;
          *(_BYTE *)(a2 + 45) = 1;
          if ( (~(_BYTE)v6 & 0x60) != 0 )
          {
            sub_48A0(a2, v6, 0, 1u);
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 5;
            *(_BYTE *)(a2 + 85) = 0;
            *(_QWORD *)(a2 + 88) = v6 & 0x1F;
          }
          *(_BYTE *)(a2 + 121) = 1;
          if ( (~(_WORD)v6 & 0x700) != 0 )
          {
            v48 = v6 >> 7;
            *(_BYTE *)(a2 + 125) = 1;
            v49 = v48 & 0xF;
            *(_WORD *)(a2 + 126) = v49;
            if ( (v48 & 1) != 0 )
            {
              *(_WORD *)(a2 + 126) = v49 - 1;
              *(_WORD *)(a2 + 24) = 24;
            }
          }
          else
          {
            *(_BYTE *)(a2 + 125) = 1;
            *(_WORD *)(a2 + 126) = ((unsigned __int8)v6 >> 7) + 25;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 0xA:
        case 0xB:
          v44 = 7;
          v45 = (v6 >> 15) & 3;
          if ( v45 != 2 )
          {
            v44 = 6;
            if ( v45 != 3 )
              v44 = (v45 != 1) + 4;
          }
          *(_WORD *)(a2 + 24) = v44;
          *(_DWORD *)(a2 + 28) = (v6 & 0x4000) == 0 ? 3 : 5;
          sub_48A0(a2, v6, 0, 0);
          sub_48A0(a2, v6, 7, 1u);
          return *(unsigned __int16 *)(a2 + 26);
        case 0xE:
          *(_DWORD *)(a2 + 28) = 4;
          *(_WORD *)(a2 + 24) = 2;
          if ( (v6 & 0x8000) != 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 1;
            *(_WORD *)(a2 + 46) = v6 & 0xF;
            if ( (v6 & 0x3F80) == 0x1F80 )
            {
              *(_WORD *)(a2 + 24) = 73;
            }
            else
            {
              v93 = ((int)v6 >> 7) & 0xF;
              v94 = ((int)v6 >> 11) & 7;
              if ( v94 )
              {
                if ( v94 == 6 )
                  *(_BYTE *)(a2 + 113) = ((int)v6 >> 15) & 0xF;
                *(_BYTE *)(a2 + 81) = 3;
                *(_WORD *)(a2 + 86) = v93;
                *(_BYTE *)(a2 + 112) = v94;
                *(_BYTE *)(a2 + 85) = 0;
              }
              else
              {
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = v93;
                *(_BYTE *)(a2 + 85) = 1;
              }
            }
          }
          else
          {
            v91 = 2 * ((v6 >> 8) & 7);
            if ( (v6 & 0x7F) == 0x4F )
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 24) = 72;
              *(_WORD *)(a2 + 46) = v91;
              *(_BYTE *)(a2 + 45) = 1;
            }
            else
            {
              v95 = v6 & 0xF;
              v96 = ((int)v6 >> 4) & 7;
              if ( v96 )
              {
                if ( v96 == 6 )
                  *(_BYTE *)(a2 + 73) = ((int)v6 >> 15) & 0xF;
                *(_BYTE *)(a2 + 41) = 3;
                *(_WORD *)(a2 + 46) = v95;
                *(_BYTE *)(a2 + 72) = v96;
                v97 = 0;
              }
              else
              {
                *(_BYTE *)(a2 + 41) = 1;
                v97 = 1;
                *(_WORD *)(a2 + 46) = v95;
              }
              *(_BYTE *)(a2 + 45) = v97;
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = v91;
              *(_BYTE *)(a2 + 85) = 1;
            }
          }
          return *(unsigned __int16 *)(a2 + 26);
      }
      goto LABEL_48;
    case 0xCu:
      v23 = BYTE2(v5) & 8;
      if ( (v5 & 0x80000) != 0 )
      {
        switch ( BYTE2(v5) & 0xF )
        {
          case 8:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 83;
            *(_BYTE *)(a2 + 45) = 1;
            *(_WORD *)(a2 + 46) = ((unsigned __int16)v6 >> 15) + 25;
            if ( (v6 & 0x40) == 0 )
              goto LABEL_36;
            *(_BYTE *)(a2 + 81) = 5;
            v75 = v6 & 0x1F;
            *(_BYTE *)(a2 + 85) = 0;
            if ( (v6 & 0x20) != 0 )
              v75 = v6 | 0xFFFFFFE0;
            *(_QWORD *)(a2 + 88) = v75;
            break;
          case 9:
          case 0xA:
            *(_WORD *)(a2 + 24) = (v5 & 0x10000) == 0 ? 81 : 9;
            sub_48A0(a2, v6, 0, 0);
            v65 = v6 & 0x8000;
            if ( (v6 & 0x780) != 0 )
            {
              v66 = v6 >> 7;
              *(_BYTE *)(a2 + 81) = 5;
              *(_BYTE *)(a2 + 85) = 0;
              v67 = v66 & 7;
              *(_BYTE *)(a2 + 121) = 1;
              if ( (v66 & 8) != 0 )
                v67 = v66 | 0xFFFFFFF8;
              *(_BYTE *)(a2 + 125) = 1;
              *(_QWORD *)(a2 + 88) = v67;
              *(_WORD *)(a2 + 126) = 25 - ((v65 == 0) - 1);
            }
            else
            {
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 1;
              *(_WORD *)(a2 + 86) = 25 - ((v65 == 0) - 1);
            }
            return *(unsigned __int16 *)(a2 + 26);
          case 0xB:
            v76 = (v6 >> 12) & 3;
            if ( v76 == 1 )
            {
              v27 = 30;
              *(_WORD *)(a2 + 24) = 30;
            }
            else if ( v76 == 3 )
            {
              v27 = 19;
              *(_WORD *)(a2 + 24) = 19;
            }
            else if ( v76 )
            {
              v27 = *(_WORD *)(a2 + 24);
            }
            else
            {
              v27 = 9;
              *(_WORD *)(a2 + 24) = 9;
            }
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 1;
            *(_WORD *)(a2 + 46) = ((unsigned __int16)v6 >> 15) + 25;
            goto LABEL_48;
          case 0xC:
          case 0xD:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 82;
            v21 = (_DWORD)v8 == 13;
            *(_BYTE *)(a2 + 45) = 1;
            v62 = v6 & 0xF;
            *(_DWORD *)(a2 + 28) = 9 * v21;
            *(_WORD *)(a2 + 46) = ((unsigned __int16)v6 >> 15) + 25;
            v63 = ((int)v6 >> 4) & 7;
            if ( (v6 & 0x780) != 0 )
            {
              *(_BYTE *)(a2 + 81) = 5;
              *(_BYTE *)(a2 + 85) = 0;
              v64 = (v6 >> 7) & 7;
              if ( ((v6 >> 7) & 8) != 0 )
                v64 = (v6 >> 7) | 0xFFFFFFF8;
              *(_QWORD *)(a2 + 88) = v64;
              if ( v63 )
              {
                if ( v63 == 6 )
                  *(_BYTE *)(a2 + 153) = ((int)v6 >> 11) & 0xF;
                *(_BYTE *)(a2 + 121) = 3;
                *(_WORD *)(a2 + 126) = v62;
                *(_BYTE *)(a2 + 152) = v63;
                *(_BYTE *)(a2 + 125) = 0;
              }
              else
              {
                *(_BYTE *)(a2 + 121) = 1;
                *(_WORD *)(a2 + 126) = v62;
                *(_BYTE *)(a2 + 125) = 1;
              }
            }
            else if ( v63 )
            {
              if ( v63 == 6 )
                *(_BYTE *)(a2 + 113) = ((int)v6 >> 11) & 0xF;
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = v62;
              *(_BYTE *)(a2 + 112) = v63;
              *(_BYTE *)(a2 + 85) = 0;
            }
            else
            {
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = v62;
              *(_BYTE *)(a2 + 85) = 1;
            }
            return *(unsigned __int16 *)(a2 + 26);
          case 0xF:
            v61 = ((v6 & 0x8000) == 0) + 47;
            goto LABEL_123;
          default:
            goto LABEL_47;
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (BYTE2(v5) & 0xB) == 3 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        *(_WORD *)(a2 + 24) = 4 * ((_DWORD)v8 != 3) + 84;
        *(_WORD *)(a2 + 46) = ((unsigned __int16)v6 >> 15) + 25;
        v24 = sub_4960(a2, v6, 1u);
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 87;
        *(_BYTE *)(a2 + 72) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        switch ( BYTE2(v5) & 0xF )
        {
          case 0:
            *(_BYTE *)(a2 + 73) = 5;
            *(_WORD *)(a2 + 46) = 4;
            break;
          case 1:
            *(_BYTE *)(a2 + 73) = 6;
            *(_WORD *)(a2 + 46) = 4;
            break;
          case 2:
            *(_BYTE *)(a2 + 73) = 7;
            *(_WORD *)(a2 + 46) = 4;
            break;
          case 4:
            *(_BYTE *)(a2 + 73) = 6;
            *(_WORD *)(a2 + 46) = 5;
            break;
          case 5:
            *(_BYTE *)(a2 + 73) = 7;
            *(_WORD *)(a2 + 46) = 5;
            break;
          case 6:
            *(_BYTE *)(a2 + 73) = 7;
            *(_WORD *)(a2 + 46) = 6;
            break;
          default:
            break;
        }
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        *(_WORD *)(a2 + 86) = ((unsigned __int16)v6 >> 15) + 25;
        v24 = sub_4960(a2, v6, 2u);
      }
      v25 = v6 & 3;
      if ( v25 == 1 )
      {
        v90 = a2 + 40LL * v24;
        *(_BYTE *)(v90 + 41) = 3;
        *(_WORD *)(v90 + 46) = 13;
        *(_QWORD *)(v90 + 48) = 2;
        *(_WORD *)(v90 + 72) = 263;
        *(_BYTE *)(v90 + 45) = 0;
        v27 = *(_WORD *)(a2 + 24);
        goto LABEL_48;
      }
      if ( v25 == 3 )
      {
        if ( (v6 & 0x4000) != 0 )
          v23 = 10;
        *(_WORD *)(a2 + 24) = 89;
        *(_DWORD *)(a2 + 28) = v23;
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (v6 & 3) != 0 )
        goto LABEL_47;
      v26 = a2 + 40LL * v24;
      *(_BYTE *)(v26 + 41) = 1;
      *(_WORD *)(v26 + 46) = 13;
      *(_BYTE *)(v26 + 45) = 1;
      v27 = *(_WORD *)(a2 + 24);
      goto LABEL_48;
    case 0xDu:
      switch ( BYTE2(v5) & 0xF )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          switch ( (v6 >> 15) & 7 )
          {
            case 0u:
              *(_WORD *)(a2 + 24) = 39;
              break;
            case 1u:
              break;
            case 2u:
              *(_WORD *)(a2 + 24) = 34;
              break;
            case 3u:
              *(_WORD *)(a2 + 24) = 33;
              break;
            case 4u:
              *(_WORD *)(a2 + 24) = 36;
              break;
            case 5u:
              *(_WORD *)(a2 + 24) = 35;
              break;
            case 6u:
              *(_WORD *)(a2 + 24) = 38;
              break;
            case 7u:
              *(_WORD *)(a2 + 24) = 37;
              break;
          }
          v79 = (v6 & 0x4000) == 0 ? 3 : 5;
          *(_DWORD *)(a2 + 28) = v79;
          if ( (v7 & 0xC) == 0 )
            goto LABEL_195;
          goto LABEL_186;
        case 8:
          *(_WORD *)(a2 + 24) = 14;
          *(_BYTE *)(a2 + 41) = 1;
          *(_DWORD *)(a2 + 28) = ((v6 & 0x40) == 0 ? 48 : 64) | (((v6 & 0x8000) != 0) + 1);
          v73 = v6 >> 7;
          goto LABEL_151;
        case 9:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 25;
          v73 = v6 >> 11;
LABEL_151:
          *(_WORD *)(a2 + 46) = v73 & 0xF;
          goto LABEL_35;
        case 0xA:
          if ( (unsigned __int16)v6 == 0x8000 )
          {
            *(_WORD *)(a2 + 24) = 93;
          }
          else if ( (unsigned __int16)v6 > 0x8000u )
          {
            if ( (unsigned __int16)v6 != 49152 )
              goto LABEL_47;
            *(_WORD *)(a2 + 24) = 92;
          }
          else if ( (_WORD)v6 )
          {
            if ( (unsigned __int16)v6 != 0x4000 )
              goto LABEL_47;
            *(_WORD *)(a2 + 24) = 91;
          }
          else
          {
            *(_WORD *)(a2 + 24) = 94;
          }
          break;
        case 0xB:
        case 0xC:
          goto LABEL_47;
        case 0xD:
        case 0xE:
          v57 = (v6 >> 15) & 7;
          switch ( v57 )
          {
            case 4:
              v27 = 34;
              *(_WORD *)(a2 + 24) = 34;
              break;
            case 5:
              v27 = 33;
              *(_WORD *)(a2 + 24) = 33;
              break;
            case 2:
              v27 = 39;
              *(_WORD *)(a2 + 24) = 39;
              break;
            default:
              v27 = *(_WORD *)(a2 + 24);
              break;
          }
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = (v6 >> 11) & 0xF;
          if ( (v6 & 0x40) != 0 )
          {
            v58 = 0;
            *(_QWORD *)(a2 + 88) = v6 & 0xF;
            v59 = 5;
          }
          else
          {
            v58 = 1;
            *(_WORD *)(a2 + 86) = v6 & 0xF;
            v59 = 1;
          }
          *(_BYTE *)(a2 + 85) = v58;
          *(_BYTE *)(a2 + 81) = v59;
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = (v6 >> 7) & 0xF;
          *(_BYTE *)(a2 + 125) = 0;
          goto LABEL_48;
        case 0xF:
          *(_WORD *)(a2 + 24) = 46;
          v70 = v6 & 0xF;
          v71 = ((int)v6 >> 4) & 7;
          if ( v71 )
          {
            if ( v71 == 6 )
              *(_BYTE *)(a2 + 73) = ((int)v6 >> 15) & 0xF;
            *(_BYTE *)(a2 + 41) = 3;
            *(_WORD *)(a2 + 46) = v70;
            *(_BYTE *)(a2 + 72) = v71;
            v72 = 0;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 1;
            v72 = 1;
            *(_WORD *)(a2 + 46) = v70;
          }
          *(_BYTE *)(a2 + 45) = v72;
          goto LABEL_124;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 0xEu:
      switch ( BYTE2(v5) & 0xF )
      {
        case 0:
          *(_WORD *)(a2 + 24) = 52;
          v60 = v6 & 0xF;
          *(_DWORD *)(a2 + 28) = (v6 & 0x400) == 0 ? 3 : 5;
          v74 = ((int)v6 >> 4) & 7;
          if ( !v74 )
            goto LABEL_121;
          if ( v74 == 6 )
            *(_BYTE *)(a2 + 73) = ((int)v6 >> 15) & 0xF;
          *(_BYTE *)(a2 + 41) = 3;
          *(_WORD *)(a2 + 46) = v60;
          *(_BYTE *)(a2 + 72) = v74;
          *(_BYTE *)(a2 + 45) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        case 1:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 24) = (v6 & 0x8000) == 0 ? 51 : 53;
          *(_DWORD *)(a2 + 28) = (v6 & 0x400) == 0 ? 3 : 5;
          *(_WORD *)(a2 + 46) = (v6 >> 11) & 0xF;
          if ( (~(_BYTE)v6 & 0x60) != 0 )
          {
            sub_48A0(a2, v6, 0, 1u);
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 5;
            *(_BYTE *)(a2 + 85) = 0;
            *(_QWORD *)(a2 + 88) = v6 & 0x1F | (v6 >> 2) & 0xE0;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 2:
        case 3:
          v54 = (v6 >> 15) & 3;
          if ( v54 == 2 )
          {
            v27 = 51;
            *(_WORD *)(a2 + 24) = 51;
          }
          else if ( v54 == 3 )
          {
            v27 = 53;
            *(_WORD *)(a2 + 24) = 53;
          }
          else if ( v54 )
          {
            v27 = *(_WORD *)(a2 + 24);
          }
          else
          {
            v27 = 52;
            *(_WORD *)(a2 + 24) = 52;
          }
          if ( (v6 & 0x4000) != 0 )
          {
            v55 = 0;
            v56 = 5;
          }
          else
          {
            v55 = 1;
            v56 = 3;
          }
          *(_DWORD *)(a2 + 28) = v56;
          *(_BYTE *)(a2 + 41) = 2;
          *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
          *(_BYTE *)(a2 + 45) = v55;
          goto LABEL_48;
        case 4:
        case 5:
          goto LABEL_47;
        case 6:
        case 7:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 1;
          *(_DWORD *)(a2 + 28) = (v6 & 0x400) == 0 ? 3 : 5;
          *(_WORD *)(a2 + 46) = (v6 >> 11) & 0xF;
          *(_WORD *)(a2 + 86) = v6 & 0xF;
          v51 = (v6 >> 15) & 3;
          if ( (v6 & 0x3E0) != 0 )
          {
            v52 = 59;
            if ( v51 != 2 )
            {
              v52 = 58;
              if ( v51 != 3 )
                v52 = (v51 == 1) + 60;
            }
            v53 = *(_QWORD *)(a2 + 16);
            *(_WORD *)(a2 + 24) = v52;
            *(_BYTE *)(a2 + 121) = 7;
            *(_BYTE *)(a2 + 125) = 9;
            *(_QWORD *)(a2 + 136) = ((_DWORD)v53 + ((v6 >> 3) & 0x7E) + 2) & 0xFFFFFF;
          }
          else if ( v51 == 2 )
          {
            *(_WORD *)(a2 + 24) = 57;
          }
          else if ( v51 == 3 )
          {
            *(_WORD *)(a2 + 24) = 54;
          }
          else
          {
            *(_WORD *)(a2 + 24) = (v51 == 1) + 55;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 8:
        case 9:
        case 0xA:
        case 0xC:
        case 0xD:
        case 0xE:
          switch ( (v6 >> 15) & 7 )
          {
            case 0u:
              *(_WORD *)(a2 + 24) = 15;
              break;
            case 1u:
              *(_WORD *)(a2 + 24) = 16;
              break;
            case 2u:
              *(_WORD *)(a2 + 24) = 12;
              break;
            case 3u:
              *(_WORD *)(a2 + 24) = 13;
              break;
            case 4u:
              *(_WORD *)(a2 + 24) = 30;
              break;
            case 5u:
              *(_WORD *)(a2 + 24) = 28;
              break;
            default:
              break;
          }
          v79 = (v6 & 0x4000) == 0 ? 3 : 5;
          *(_DWORD *)(a2 + 28) = v79;
          if ( (unsigned int)v8 <= 0xB )
          {
LABEL_195:
            sub_48A0(a2, v6, 0, 0);
            sub_48A0(a2, v6, 7, 1u);
            v27 = *(_WORD *)(a2 + 24);
          }
          else
          {
LABEL_186:
            *(_BYTE *)(a2 + 41) = 2;
            *(_BYTE *)(a2 + 45) = v79 != 5;
            *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
            if ( (v6 & 0x2000) != 0 )
              goto LABEL_47;
            *(_BYTE *)(a2 + 81) = 1;
            v27 = *(_WORD *)(a2 + 24);
            *(_WORD *)(a2 + 86) = 16;
            *(_BYTE *)(a2 + 85) = 1;
          }
          break;
        case 0xB:
        case 0xF:
          *(_WORD *)(a2 + 24) = (v6 & 0x8000) == 0 ? 27 : 31;
          v50 = (v6 & 0x4000) == 0 ? 3 : 5;
          *(_DWORD *)(a2 + 28) = v50;
          if ( (_DWORD)v8 == 15 )
          {
            if ( (v6 & 0x2000) != 0 )
            {
              *(_BYTE *)(a2 + 41) = 2;
              *(_QWORD *)(a2 + 56) = v6 & 0x1FFF;
              *(_BYTE *)(a2 + 45) = v50 != 5;
            }
            else
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = 16;
              *(_BYTE *)(a2 + 45) = 1;
            }
          }
          else
          {
            sub_48A0(a2, v6, 7, 0);
          }
          return *(unsigned __int16 *)(a2 + 26);
      }
      goto LABEL_48;
    case 0xFu:
      switch ( BYTE2(v5) & 0xF )
      {
        case 8:
        case 9:
          *(_BYTE *)(a2 + 41) = 2;
          *(_QWORD *)(a2 + 56) = (unsigned __int16)v6;
          *(_WORD *)(a2 + 24) = 73 - (BYTE2(v5) & 1);
          *(_BYTE *)(a2 + 45) = 1;
          return *(unsigned __int16 *)(a2 + 26);
        case 0xA:
        case 0xC:
          if ( (v6 & 0x8000) != 0 )
          {
            *(_WORD *)(a2 + 24) = 74;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 5;
            *(_BYTE *)(a2 + 45) = 1;
            *(_QWORD *)(a2 + 48) = v6 & 0x3FFF;
            *(_WORD *)(a2 + 24) = (v5 & 0x40000) == 0 ? 71 : 76;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 0xB:
          v61 = (v6 & 0x8000) == 0 ? 18 : 23;
LABEL_123:
          *(_WORD *)(a2 + 24) = v61;
          sub_48A0(a2, v6, 0, 0);
          goto LABEL_124;
        case 0xD:
          v60 = v6 & 0xF;
          if ( (v6 & 0xF000) == 0x4000 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 11;
            *(_WORD *)(a2 + 46) = v60;
            *(_BYTE *)(a2 + 45) = 1;
          }
          else if ( (v6 & 0x8000) != 0 )
          {
            *(_WORD *)(a2 + 24) = 3;
            *(_DWORD *)(a2 + 28) = (v6 & 0x4000) == 0 ? 3 : 5;
LABEL_121:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = v60;
            *(_BYTE *)(a2 + 45) = 1;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 1;
            *(_WORD *)(a2 + 46) = v60;
            *(_BYTE *)(a2 + 45) = 1;
LABEL_124:
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = (v6 >> 7) & 0xF;
LABEL_125:
            *(_BYTE *)(a2 + 85) = 1;
          }
          break;
        case 0xE:
          switch ( (unsigned __int16)v6 >> 12 )
          {
            case 0:
              *(_WORD *)(a2 + 24) = 80;
              return *(unsigned __int16 *)(a2 + 26);
            case 4:
              *(_BYTE *)(a2 + 41) = 5;
              *(_WORD *)(a2 + 24) = 79;
              *(_QWORD *)(a2 + 48) = v6 & 1;
              *(_BYTE *)(a2 + 45) = 0;
              return *(unsigned __int16 *)(a2 + 26);
            case 6:
              *(_WORD *)(a2 + 24) = 75;
              return *(unsigned __int16 *)(a2 + 26);
            case 8:
              *(_DWORD *)(a2 + 28) = 1;
              *(_WORD *)(a2 + 24) = 72;
              return *(unsigned __int16 *)(a2 + 26);
            case 10:
              *(_DWORD *)(a2 + 28) = 1;
              *(_WORD *)(a2 + 24) = 73;
              return *(unsigned __int16 *)(a2 + 26);
            case 12:
              *(_BYTE *)(a2 + 41) = 5;
              *(_WORD *)(a2 + 24) = 8;
              *(_QWORD *)(a2 + 48) = v6 & 0x3FF;
              *(_BYTE *)(a2 + 81) = 1;
              v82 = (v6 >> 10) & 3;
              switch ( v82 )
              {
                case 1:
                  *(_WORD *)(a2 + 86) = 24;
                  *(_BYTE *)(a2 + 45) = 1;
                  break;
                case 2:
                  goto LABEL_350;
                case 0:
                  *(_WORD *)(a2 + 86) = 23;
                  *(_BYTE *)(a2 + 45) = 1;
                  break;
              }
              break;
            case 13:
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 24) = 8;
              *(_WORD *)(a2 + 46) = v6 & 0xF;
              *(_BYTE *)(a2 + 45) = 1;
              v81 = (v6 >> 10) & 3;
              *(_BYTE *)(a2 + 81) = 1;
              switch ( v81 )
              {
                case 1:
                  *(_WORD *)(a2 + 86) = 24;
                  break;
                case 2:
LABEL_350:
                  *(_WORD *)(a2 + 86) = 21;
                  break;
                case 0:
                  *(_WORD *)(a2 + 86) = 23;
                  break;
              }
              break;
            default:
              goto LABEL_47;
          }
          goto LABEL_125;
        case 0xF:
          *(_WORD *)(a2 + 24) = 78;
          return *(unsigned __int16 *)(a2 + 26);
        default:
          LOWORD(v5) = 86;
          v36 = v6 & 3;
          if ( v36 != 2 )
          {
            LOWORD(v5) = 85;
            if ( v36 != 3 )
              LOWORD(v5) = 2 * (v36 == 1) + 87;
          }
          *(_WORD *)(a2 + 24) = v5;
          v37 = (BYTE2(v5) & 3) + 4;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = v37;
          *(_BYTE *)(a2 + 73) = v37;
          *(_BYTE *)(a2 + 72) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = ((unsigned __int16)v6 >> 15) + 25;
          sub_4960(a2, v6, 2u);
          goto LABEL_47;
      }
      return *(unsigned __int16 *)(a2 + 26);
  }
}

