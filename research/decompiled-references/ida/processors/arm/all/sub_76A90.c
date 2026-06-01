__int64 __fastcall sub_76A90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  int v14; // ebp
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rdx
  bool v18; // zf
  __int64 (__fastcall *v19)(_QWORD, _QWORD); // rcx
  unsigned __int16 next_word; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // rdx
  __int16 v27; // ax
  int v28; // edx
  __int16 v29; // bp
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // rdx
  int v36; // ecx
  __int16 v37; // dx
  char v38; // dl
  unsigned int v39; // eax
  __int16 v40; // ax
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rcx
  int v44; // edx
  int v45; // eax
  unsigned int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int16 v51; // ax
  __int16 v52; // bp
  __int64 v53; // rdx
  __int16 v54; // ax
  int v55; // ebp
  char v56; // al
  int v57; // ecx
  __int64 v58; // [rsp-38h] [rbp-38h]
  __int64 v59; // [rsp-38h] [rbp-38h]
  __int64 v60; // [rsp-30h] [rbp-30h]
  __int64 v61; // [rsp-28h] [rbp-28h]
  __int64 v62; // [rsp-28h] [rbp-28h]

  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    return 0;
  v61 = v4;
  LOWORD(v4) = insn_get_next_word();
  if ( (unsigned __int8)getinf_flag(3, 32, v7, v8, v9, v10, v58, v3, v61) && *(_BYTE *)(a1 + 288) )
    LOWORD(v4) = __ROL2__(v4, 8);
  v11 = sub_1DD90((_QWORD *)a1, *(_QWORD *)(a2 + 16), 0);
  *(_BYTE *)(a2 + 32) = 14;
  v12 = v11;
  switch ( (unsigned __int16)v4 >> 12 )
  {
    case 0:
      goto LABEL_7;
    case 1:
      if ( (v4 & 0x800) == 0 )
      {
LABEL_7:
        LOWORD(v13) = word_8E970[((unsigned __int16)v4 >> 11) & 0x1F];
        *(_WORD *)(a2 + 24) = v13;
        if ( v12 > 0xE )
          *(_DWORD *)(a2 + 28) |= 1u;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = v4 & 7;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = ((unsigned __int8)v4 >> 3) & 7;
        v14 = ((unsigned __int16)v4 >> 6) & 0x1F;
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 2;
        *(_QWORD *)(a2 + 128) = (unsigned __int8)v14;
        *(_BYTE *)(a2 + 153) = 0;
        *(_QWORD *)(a2 + 144) = 0;
        if ( v14 )
          goto LABEL_10;
        if ( (_WORD)v13 != 6 )
        {
          *(_QWORD *)(a2 + 128) = 32;
          goto LABEL_10;
        }
        *(_BYTE *)(a2 + 121) = 0;
        v15 = v12;
        *(_WORD *)(a2 + 24) = 23;
        if ( (unsigned int)(char)v12 <= 0xE )
        {
          LOWORD(v13) = 23;
          goto LABEL_20;
        }
        goto LABEL_174;
      }
      LODWORD(v13) = (v4 & 0x200) == 0 ? 14 : 12;
      *(_WORD *)(a2 + 24) = (v4 & 0x200) == 0 ? 14 : 12;
      if ( v12 > 0xE )
        *(_DWORD *)(a2 + 28) |= 1u;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = v4 & 7;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      LODWORD(v26) = ((int)(unsigned __int16)v4 >> 6) & 7;
      *(_WORD *)(a2 + 86) = ((int)(unsigned __int16)v4 >> 3) & 7;
      if ( (v4 & 0x400) != 0 )
      {
        *(_BYTE *)(a2 + 121) = 5;
        v26 = (unsigned __int8)v26;
        *(_BYTE *)(a2 + 125) = 2;
        goto LABEL_56;
      }
      *(_BYTE *)(a2 + 121) = 1;
      v15 = v12;
      *(_WORD *)(a2 + 126) = (unsigned __int8)v26;
      *(_BYTE *)(a2 + 125) = 2;
      if ( (unsigned int)(char)v12 > 0xE )
        goto LABEL_28;
      goto LABEL_20;
    case 2:
    case 3:
      LOWORD(v13) = word_8E968[((unsigned __int16)v4 >> 11) & 3];
      *(_WORD *)(a2 + 24) = v13;
      if ( (_WORD)v13 != 20 && v12 > 0xE )
        *(_DWORD *)(a2 + 28) |= 1u;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 5;
      *(_WORD *)(a2 + 46) = 0;
      *(_BYTE *)(a2 + 85) = 2;
      *(_QWORD *)(a2 + 88) = (unsigned __int8)v4;
      *(_BYTE *)(a2 + 113) = 0;
      *(_QWORD *)(a2 + 104) = 0;
      if ( !a3 )
        goto LABEL_10;
      if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000) != 0x5000000 )
        goto LABEL_37;
      goto LABEL_80;
    case 4:
      if ( (v4 & 0x800) != 0 )
      {
        v31 = *(_QWORD *)(a2 + 8);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 30;
        *(_WORD *)(a2 + 46) = ((int)(unsigned __int16)v4 >> 8) & 7;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 2;
        *(_BYTE *)(a2 + 85) = 2;
        *(_QWORD *)(a2 + 96) = (v31 & 0xFFFFFFFFFFFFFFFCLL) + ((4 * (_WORD)v4) & 0x3FC) + 4;
        if ( a3 )
        {
          if ( sub_38180() )
            goto LABEL_37;
          goto LABEL_80;
        }
        v15 = v11;
        if ( (unsigned int)(char)v11 <= 0xE )
          goto LABEL_154;
        goto LABEL_144;
      }
      v36 = ((int)(unsigned __int16)v4 >> 3) & 7;
      v37 = ((int)(unsigned __int16)v4 >> 3) & 7;
      if ( (v4 & 0x400) == 0 )
      {
        v42 = ((unsigned __int16)v4 >> 6) & 0xF;
        LOWORD(v13) = v42 + 10;
        switch ( v42 )
        {
          case 2:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 6;
            LOWORD(v13) = 6;
            *(_WORD *)(a2 + 46) = v4 & 7;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v37;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            break;
          case 3:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 7;
            LOWORD(v13) = 7;
            *(_WORD *)(a2 + 46) = v4 & 7;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v37;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            break;
          case 4:
            *(_BYTE *)(a2 + 41) = 1;
            LOWORD(v13) = 5;
            *(_WORD *)(a2 + 24) = 5;
            *(_WORD *)(a2 + 46) = v4 & 7;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v37;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            break;
          case 7:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 8;
            LOWORD(v13) = 8;
            *(_WORD *)(a2 + 46) = v4 & 7;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v37;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            break;
          case 9:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 9;
            LOWORD(v13) = 9;
            *(_WORD *)(a2 + 46) = v4 & 7;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v37;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            break;
          case 13:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 28;
            LOWORD(v13) = 28;
            *(_WORD *)(a2 + 46) = v4 & 7;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v37;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            break;
          default:
            *(_WORD *)(a2 + 24) = v13;
            *(_WORD *)(a2 + 46) = v4 & 7;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v37;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            if ( (unsigned __int16)(v42 - 8) <= 3u )
              goto LABEL_27;
            break;
        }
        if ( v12 <= 0xE )
          goto LABEL_124;
        *(_DWORD *)(a2 + 28) |= 1u;
        v15 = v12;
        if ( (unsigned int)(char)v12 > 0xE )
          goto LABEL_131;
        goto LABEL_123;
      }
      LOWORD(v13) = word_8E960[BYTE1(v4) & 3];
      *(_WORD *)(a2 + 24) = v13;
      if ( (_WORD)v13 != 41 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = v4 & 7;
        if ( (v4 & 0x80) == 0 )
        {
          *(_WORD *)(a2 + 86) = v37;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          if ( (v4 & 0x40) != 0 )
            *(_WORD *)(a2 + 86) = (unsigned __int8)v36 | 8;
          goto LABEL_10;
        }
        *(_WORD *)(a2 + 86) = v37;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = v4 & 7 | 8;
        *(_BYTE *)(a2 + 85) = 2;
        if ( (v4 & 0x40) == 0 )
          goto LABEL_10;
        *(_WORD *)(a2 + 86) = (unsigned __int8)v36 | 8;
        if ( (_WORD)v4 != 18112 )
          goto LABEL_10;
        *(_WORD *)(a2 + 24) = 2;
        v15 = v12;
        *(_BYTE *)(a2 + 41) = 0;
        *(_BYTE *)(a2 + 81) = 0;
        if ( (unsigned int)(char)v12 <= 0xE )
        {
          LOWORD(v13) = 2;
          goto LABEL_20;
        }
        if ( (v12 & 0xDF) == 0x10 )
        {
          LOWORD(v13) = 2;
          goto LABEL_29;
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      *(_WORD *)(a2 + 46) = v37;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      if ( (v4 & 0x40) != 0 )
        *(_WORD *)(a2 + 46) = (unsigned __int8)v36 | 8;
      if ( (v4 & 0x80) != 0 )
        LOWORD(v13) = 47;
      *(_WORD *)(a2 + 24) = v13;
      if ( (v4 & 4) == 0 )
        goto LABEL_27;
      *(_DWORD *)(a2 + 28) |= 0x20000u;
      v15 = v12;
      if ( (unsigned int)(char)v12 > 0xE )
        goto LABEL_28;
      goto LABEL_20;
    case 5:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 85) = 2;
      *(_BYTE *)(a2 + 81) = 3;
      *(_WORD *)(a2 + 46) = v4 & 7;
      LODWORD(v13) = (v4 & 0x800) == 0 ? 32 : 30;
      *(_WORD *)(a2 + 24) = (v4 & 0x800) == 0 ? 32 : 30;
      *(_BYTE *)(a2 + 112) = ((int)(unsigned __int16)v4 >> 6) & 7;
      *(_WORD *)(a2 + 86) = ((int)(unsigned __int16)v4 >> 3) & 7;
      if ( (v4 & 0x200) != 0 )
      {
        v28 = *(_DWORD *)(a2 + 28);
        v29 = ((unsigned __int16)v4 >> 10) & 3;
        if ( v29 == 1 )
        {
          BYTE1(v28) |= 4u;
          v15 = v12;
          *(_WORD *)(a2 + 24) = 30;
          *(_DWORD *)(a2 + 28) = v28;
          *(_BYTE *)(a2 + 85) = 0;
          if ( (unsigned int)(char)v12 <= 0xE )
          {
LABEL_154:
            LOWORD(v13) = 30;
            goto LABEL_20;
          }
LABEL_144:
          if ( (v12 & 0xDF) != 0x10 )
            return *(unsigned __int16 *)(a2 + 26);
          LOWORD(v13) = 30;
          goto LABEL_29;
        }
        if ( v29 == 3 )
          BYTE1(v28) |= 8u;
        else
          BYTE1(v28) |= 0x10u;
        *(_DWORD *)(a2 + 28) = v28;
        v15 = v12;
        *(_BYTE *)(a2 + 85) = 1;
        if ( (unsigned int)(char)v12 > 0xE )
          goto LABEL_28;
      }
      else
      {
        if ( (v4 & 0x400) == 0 )
          goto LABEL_27;
LABEL_17:
        *(_DWORD *)(a2 + 28) |= 2u;
        if ( (_WORD)v13 == 32 )
          *(_BYTE *)(a2 + 45) = 0;
        *(_BYTE *)(a2 + 85) = 0;
        v15 = v12;
        if ( (unsigned int)(char)v12 > 0xE )
          goto LABEL_28;
      }
      goto LABEL_20;
    case 6:
    case 7:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 46) = v4 & 7;
      LODWORD(v13) = (v4 & 0x800) == 0 ? 32 : 30;
      *(_WORD *)(a2 + 24) = (v4 & 0x800) == 0 ? 32 : 30;
      *(_WORD *)(a2 + 86) = ((unsigned __int8)v4 >> 3) & 7;
      v16 = ((unsigned __int16)v4 >> 6) & 0x1F;
      *(_QWORD *)(a2 + 96) = v16;
      if ( (v4 & 0x1000) != 0 )
        goto LABEL_17;
      *(_BYTE *)(a2 + 85) = 2;
      v17 = 4 * v16;
      goto LABEL_26;
    case 8:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 4;
      *(_DWORD *)(a2 + 28) |= 0x1000u;
      *(_WORD *)(a2 + 46) = v4 & 7;
      LOWORD(v13) = (v4 & 0x800) == 0 ? 32 : 30;
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 24) = v13;
      *(_WORD *)(a2 + 86) = ((unsigned __int8)v4 >> 3) & 7;
      v17 = (2 * (unsigned __int8)((unsigned __int16)v4 >> 6)) & 0x3E;
      goto LABEL_26;
    case 9:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 46) = BYTE1(v4) & 7;
      LODWORD(v13) = (v4 & 0x800) == 0 ? 32 : 30;
      *(_WORD *)(a2 + 86) = 13;
      v17 = (4 * (_WORD)v4) & 0x3FC;
      *(_WORD *)(a2 + 24) = (v4 & 0x800) == 0 ? 32 : 30;
      goto LABEL_26;
    case 10:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 14;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = BYTE1(v4) & 7;
      v30 = (4 * (_WORD)v4) & 0x3FC;
      if ( (v4 & 0x800) != 0 )
      {
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = 13;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 2;
        *(_QWORD *)(a2 + 128) = v30;
        *(_BYTE *)(a2 + 153) = 0;
        *(_QWORD *)(a2 + 144) = 0;
        if ( a3 )
          goto LABEL_79;
        if ( (unsigned int)(char)v12 <= 0xE )
          goto LABEL_124;
        if ( (v12 & 0xDF) == 0x10 )
        {
          v44 = *(_DWORD *)(a2 + 28);
          v45 = v44 | 0x180000;
          v46 = v44 & 0xFFE7FFFF | 0x80000;
          if ( (_BYTE)v12 != 48 )
            v45 = v46;
          *(_DWORD *)(a2 + 28) = v45;
        }
      }
      else
      {
        *(_QWORD *)(a2 + 128) = v30;
        *(_WORD *)(a2 + 86) = 15;
        v35 = *(_QWORD *)(a2 + 8);
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 125) = 2;
        *(_BYTE *)(a2 + 153) = 0;
        *(_QWORD *)(a2 + 144) = 0;
        *(_WORD *)(a2 + 24) = 44;
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = v30 + (v35 & 0xFFFFFFFFFFFFFFFCLL) + 4;
        *(_BYTE *)(a2 + 113) = 0;
        *(_QWORD *)(a2 + 104) = 0;
        *(_BYTE *)(a2 + 121) = 0;
        if ( a3 )
        {
LABEL_79:
          get_flags_ex(*(_QWORD *)(a2 + 16), 0);
          if ( !(unsigned __int8)is_off() )
            goto LABEL_37;
          goto LABEL_80;
        }
        v15 = v12;
        if ( (unsigned int)(char)v12 <= 0xE )
          goto LABEL_123;
        if ( (v12 & 0xDF) == 0x10 )
        {
          LOWORD(v13) = 44;
          goto LABEL_29;
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 11:
      if ( (v4 & 0x400) == 0 )
      {
        if ( (v4 & 0x100) != 0 )
        {
          v43 = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = v4 & 7;
          LOWORD(v13) = ((v4 & 0x800) != 0) + 282;
          *(_WORD *)(a2 + 24) = v13;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 7;
          *(_BYTE *)(a2 + 85) = 9;
          v17 = (((unsigned __int16)v4 >> 2) & 0x3E | ((unsigned __int16)v4 >> 3) & 0x40) + (unsigned int)v43 + 4;
LABEL_26:
          *(_QWORD *)(a2 + 96) = v17;
LABEL_27:
          v15 = v12;
          if ( (unsigned int)(char)v12 <= 0xE )
            goto LABEL_20;
        }
        else
        {
          if ( (v4 & 0x200) != 0 )
          {
            *(_WORD *)(a2 + 46) = v4 & 7;
            *(_WORD *)(a2 + 86) = ((int)(unsigned __int16)v4 >> 3) & 7;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            LOWORD(v13) = word_8E950[((unsigned __int16)v4 >> 9) & 4 | ((unsigned __int16)v4 >> 6) & 3];
            v38 = byte_8E948[((unsigned __int16)v4 >> 9) & 4 | ((unsigned __int16)v4 >> 6) & 3];
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 24) = v13;
            *(_BYTE *)(a2 + 85) = v38;
            goto LABEL_10;
          }
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = 13;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 86) = 13;
          v26 = (4 * (_WORD)v4) & 0x1FC;
          LOWORD(v13) = (v4 & 0x80) == 0 ? 14 : 12;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 24) = v13;
          *(_BYTE *)(a2 + 85) = 2;
          *(_BYTE *)(a2 + 121) = 5;
          *(_BYTE *)(a2 + 125) = 2;
LABEL_56:
          *(_QWORD *)(a2 + 128) = v26;
          v15 = v12;
          *(_BYTE *)(a2 + 153) = 0;
          *(_QWORD *)(a2 + 144) = 0;
          if ( (unsigned int)(char)v12 <= 0xE )
            goto LABEL_20;
        }
LABEL_28:
        if ( (v12 & 0xDF) != 0x10 )
          goto LABEL_22;
        goto LABEL_29;
      }
      if ( (v4 & 0x200) != 0 )
      {
        HIBYTE(v27) = BYTE1(v4);
        LOBYTE(v27) = 0;
        if ( v27 == -16896 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 45;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = (unsigned __int8)v4;
          *(_BYTE *)(a2 + 73) = 0;
          *(_QWORD *)(a2 + 64) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( v27 == -16640 )
        {
          v54 = (unsigned __int16)v4 >> 4;
          v55 = v4 & 0xF;
          if ( !v55 )
          {
            sub_1E6A0(a2, v54 & 0xF);
            LOWORD(v13) = *(_WORD *)(a2 + 24);
            goto LABEL_10;
          }
          v56 = v54 & 0xF;
          *(_WORD *)(a2 + 24) = 278;
          *(_BYTE *)(a2 + 32) = v56;
          if ( v56 == 15 )
            return 0;
          if ( v56 != 14 || (unsigned int)bitcount() == 1 )
          {
            *(_BYTE *)(a2 + 33) = v55;
            LOWORD(v13) = *(_WORD *)(a2 + 24);
            goto LABEL_10;
          }
          return 0;
        }
        if ( (v4 & 0xFFF7) == 0xB650 )
        {
          *(_BYTE *)(a2 + 41) = 13;
          *(_WORD *)(a2 + 24) = 189;
          qstrncpy();
          LOWORD(v13) = *(_WORD *)(a2 + 24);
        }
        else
        {
          if ( (v4 & 0xFFE8) != 0xB660 )
            return 0;
          *(_BYTE *)(a2 + 41) = 13;
          *(_WORD *)(a2 + 24) = ((v4 & 0x10) == 0) + 170;
          v13 = a2 + 48;
          if ( (v4 & 4) != 0 )
          {
            *(_BYTE *)(a2 + 48) = 65;
            v13 = a2 + 49;
          }
          if ( (v4 & 2) != 0 )
            *(_BYTE *)v13++ = 73;
          if ( (v4 & 1) != 0 )
            *(_BYTE *)v13++ = 70;
          *(_BYTE *)v13 = 0;
          LOWORD(v13) = *(_WORD *)(a2 + 24);
        }
        goto LABEL_10;
      }
      v40 = v4 & 0x100;
      if ( (v4 & 0x800) != 0 )
      {
        *(_WORD *)(a2 + 24) = 42;
        if ( v40 )
        {
          LOWORD(v13) = 42;
          v41 = 0x8000;
          goto LABEL_130;
        }
      }
      else
      {
        *(_WORD *)(a2 + 24) = 43;
        if ( v40 )
        {
          LOWORD(v13) = 43;
          v41 = 0x4000;
LABEL_130:
          *(_BYTE *)(a2 + 41) = 9;
          v15 = v12;
          *(_QWORD *)(a2 + 64) = (unsigned __int8)v4 | (unsigned __int64)v41;
          *(_BYTE *)(a2 + 45) = 2;
          if ( (unsigned int)(char)v12 <= 0xE )
            goto LABEL_123;
LABEL_131:
          if ( (v12 & 0xDF) != 0x10 )
            return *(unsigned __int16 *)(a2 + 26);
          goto LABEL_29;
        }
      }
      if ( !(_BYTE)v4 )
        return 0;
      *(_BYTE *)(a2 + 41) = 9;
      LOWORD(v13) = *(_WORD *)(a2 + 24);
      *(_BYTE *)(a2 + 45) = 2;
      *(_QWORD *)(a2 + 64) = (unsigned __int8)v4;
      goto LABEL_10;
    case 12:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      LOWORD(v13) = ((v4 & 0x800) == 0) + 33;
      *(_WORD *)(a2 + 24) = v13;
      v33 = BYTE1(v4) & 7;
      *(_WORD *)(a2 + 46) = BYTE1(v4) & 7;
      if ( !(_BYTE)v4 )
        return 0;
      v34 = *(_DWORD *)(a2 + 28);
      v4 = (unsigned __int8)v4;
      *(_BYTE *)(a2 + 81) = 9;
      *(_BYTE *)(a2 + 85) = 2;
      *(_QWORD *)(a2 + 104) = (unsigned __int8)v4;
      if ( !_bittest64(&v4, v33) )
        v34 |= 0x40u;
      LOBYTE(v34) = v34 | 0x80;
      *(_DWORD *)(a2 + 28) = v34;
      goto LABEL_27;
    case 13:
      *(_BYTE *)(a2 + 32) = BYTE1(v4) & 0xF;
      if ( (BYTE1(v4) & 0xF) == 0xF )
      {
        v15 = v11;
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 36;
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)v4;
        *(_BYTE *)(a2 + 73) = 0;
        *(_QWORD *)(a2 + 64) = 0;
        if ( (unsigned int)(char)v11 <= 0xE )
        {
          LOWORD(v13) = 36;
          goto LABEL_20;
        }
        if ( (v11 & 0xDF) == 0x10 )
        {
          LOWORD(v13) = 36;
          goto LABEL_29;
        }
      }
      else
      {
        if ( (BYTE1(v4) & 0xF) != 0xE )
        {
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 24) = 3;
          v32 = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a2 + 45) = 9;
          *(_QWORD *)(a2 + 56) = (unsigned int)(v32 + 2 * (char)v4 + 4);
          if ( !a3 )
            goto LABEL_111;
          if ( sub_38100() )
          {
LABEL_80:
            sub_1DB20(a3, 8, 8, 0);
            LOWORD(v13) = *(_WORD *)(a2 + 24);
            goto LABEL_10;
          }
          goto LABEL_37;
        }
        *(_BYTE *)(a2 + 41) = 5;
        v15 = v11;
        *(_WORD *)(a2 + 24) = 288;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)v4;
        *(_BYTE *)(a2 + 73) = 0;
        *(_QWORD *)(a2 + 64) = 0;
        if ( (unsigned int)(char)v11 <= 0xE )
        {
          LOWORD(v13) = 288;
          goto LABEL_20;
        }
        if ( (v11 & 0xDF) == 0x10 )
        {
          LOWORD(v13) = 288;
          goto LABEL_29;
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 14:
      if ( (unsigned __int16)v4 >> 11 == 28 )
      {
        *(_BYTE *)(a2 + 41) = 7;
        *(_WORD *)(a2 + 24) = 3;
        v39 = v4 & 0x7FF;
        *(_BYTE *)(a2 + 45) = 9;
        if ( (v4 & 0x400) != 0 )
          v39 = (unsigned __int16)v4 | 0xFFFFF800;
        *(_QWORD *)(a2 + 56) = (unsigned int)*(_QWORD *)(a2 + 8) + 2 * v39 + 4;
        if ( !a3 )
        {
LABEL_111:
          v15 = v12;
          if ( (unsigned int)(char)v12 <= 0xE )
          {
            LOWORD(v13) = 3;
            goto LABEL_20;
          }
          if ( (v12 & 0xDF) != 0x10 )
            return *(unsigned __int16 *)(a2 + 26);
          LOWORD(v13) = 3;
          goto LABEL_29;
        }
        if ( sub_38100() )
        {
LABEL_44:
          sub_1DB20(a3, 11, 11, 0);
          LOWORD(v13) = *(_WORD *)(a2 + 24);
          goto LABEL_10;
        }
      }
      else
      {
        if ( *(int *)(a1 + 216) <= 1 )
        {
          if ( (v4 & 1) != 0 )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 46;
          *(_WORD *)(a2 + 46) = 14;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 88) = (2 * (_WORD)v4) & 0xFFE;
          *(_BYTE *)(a2 + 113) = 0;
          *(_QWORD *)(a2 + 104) = 0;
          if ( a3 )
            goto LABEL_44;
          v15 = v11;
          if ( (unsigned int)(char)v11 <= 0xE )
          {
            LOWORD(v13) = 46;
            goto LABEL_20;
          }
          if ( (v11 & 0xDF) != 0x10 )
            return *(unsigned __int16 *)(a2 + 26);
          LOWORD(v13) = 46;
LABEL_29:
          v18 = v15 == 48;
          v19 = sub_80000;
          if ( v18 )
            LODWORD(v19) = 1572864;
          *(_DWORD *)(a2 + 28) = (unsigned int)v19 | *(_DWORD *)(a2 + 28) & 0xFFE7FFFF;
          goto LABEL_22;
        }
        next_word = insn_get_next_word();
        if ( (unsigned __int8)getinf_flag(3, 32, v47, v48, v49, v50, v59, v60, v62) && *(_BYTE *)(a1 + 288) )
          next_word = __ROL2__(next_word, 8);
        if ( *(int *)(a1 + 216) <= 1 )
          return 0;
LABEL_49:
        if ( !(unsigned __int8)sub_74C90((_DWORD *)a1, a2, (unsigned __int16)v4, next_word, a3, v25) )
          return 0;
      }
LABEL_37:
      LOWORD(v13) = *(_WORD *)(a2 + 24);
      goto LABEL_10;
    case 15:
      next_word = insn_get_next_word();
      if ( (unsigned __int8)getinf_flag(3, 32, v21, v22, v23, v24, v59, v60, v62) && *(_BYTE *)(a1 + 288) )
        next_word = __ROL2__(next_word, 8);
      if ( *(int *)(a1 + 216) > 1 )
        goto LABEL_49;
      if ( (unsigned __int16)v4 >> 11 != 30 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 4;
        *(_WORD *)(a2 + 46) = 14;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        *(_QWORD *)(a2 + 88) = (2 * (_WORD)v4) & 0xFFE;
        *(_BYTE *)(a2 + 113) = 0;
        *(_QWORD *)(a2 + 104) = 0;
        if ( a3 )
        {
LABEL_110:
          sub_1DB20(a3, 11, 11, 0);
          LOWORD(v13) = *(_WORD *)(a2 + 24);
          *(_WORD *)(a2 + 26) = 2;
          goto LABEL_10;
        }
        v15 = v12;
        *(_WORD *)(a2 + 26) = 2;
        if ( (unsigned int)(char)v12 > 0xE )
        {
          if ( (v12 & 0xDF) != 0x10 )
            return *(unsigned __int16 *)(a2 + 26);
          LOWORD(v13) = 4;
          goto LABEL_29;
        }
LABEL_123:
        if ( (*(_BYTE *)(a2 + 32) & 0xF) == 0xE )
        {
LABEL_124:
          *(_BYTE *)(a2 + 32) = v12;
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      v51 = v4;
      v52 = v4 & 0x400;
      v13 = v51 & 0x7FF;
      v53 = *(_QWORD *)(a2 + 8) + 4LL;
      if ( next_word >> 11 == 31 )
      {
        LODWORD(v13) = (_DWORD)v13 << 12;
        if ( v52 )
          LODWORD(v13) = v13 | 0xFF800000;
        v57 = v13 + ((2 * next_word) & 0xFFE);
        LOWORD(v13) = 4;
      }
      else
      {
        if ( next_word >> 11 != 29 || (next_word & 1) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 23;
          if ( v52 )
            v13 |= 0xFFFFFFFFFFFFF800LL;
          *(_WORD *)(a2 + 46) = 14;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 88) = v53 + (v13 << 12);
          *(_BYTE *)(a2 + 113) = 0;
          *(_QWORD *)(a2 + 104) = 0;
          if ( a3 )
            goto LABEL_110;
          v15 = v12;
          *(_WORD *)(a2 + 26) = 2;
          if ( (unsigned int)(char)v12 > 0xE )
          {
LABEL_174:
            if ( (v12 & 0xDF) != 0x10 )
              return *(unsigned __int16 *)(a2 + 26);
            LOWORD(v13) = 23;
            goto LABEL_29;
          }
          goto LABEL_123;
        }
        if ( v52 )
          LODWORD(v13) = ((_DWORD)v13 << 12) | 0xFF800000;
        else
          LODWORD(v13) = (_DWORD)v13 << 12;
        v57 = v13 + ((2 * next_word) & 0xFFE);
        LODWORD(v53) = v53 & 0xFFFFFFFC;
        LOWORD(v13) = 46;
      }
      *(_WORD *)(a2 + 24) = v13;
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 9;
      *(_QWORD *)(a2 + 56) = (unsigned int)(v53 + v57);
      if ( !a3 )
        goto LABEL_12;
      sub_1DB20(a3, 11, 11, 0);
      sub_1DB20(a3, 27, 27, 16);
      LOWORD(v13) = *(_WORD *)(a2 + 24);
LABEL_10:
      if ( (_WORD)v13 == 45 )
        return *(unsigned __int16 *)(a2 + 26);
LABEL_12:
      v15 = v12;
      if ( (unsigned int)(char)v12 <= 0xE )
      {
LABEL_20:
        if ( (*(_BYTE *)(a2 + 32) & 0xF) != 0xE )
          return 0;
        *(_BYTE *)(a2 + 32) = v15;
        goto LABEL_22;
      }
      if ( (v12 & 0xDF) == 0x10 )
      {
        if ( (((_WORD)v13 - 1027) & 0xFFFD) == 0 )
          return 0;
        goto LABEL_29;
      }
LABEL_22:
      if ( (_WORD)v13 )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
  }
}
