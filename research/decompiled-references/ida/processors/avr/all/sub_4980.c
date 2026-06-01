__int64 __fastcall sub_4980(__int64 a1, __int64 a2)
{
  unsigned __int16 wide_byte; // ax
  int v5; // ebp
  unsigned __int16 v6; // r13
  int v7; // eax
  int v8; // ebp
  __int16 v9; // ax
  unsigned __int16 v10; // si
  unsigned __int64 v12; // rcx
  signed int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // edx
  int v19; // ebp
  int v20; // eax
  __int16 v21; // dx
  int v22; // eax
  __int64 v23; // rax
  char v24; // al
  unsigned int v25; // ebp
  int v26; // eax
  __int16 v27; // dx
  int v28; // edi
  int v29; // r9d
  int v30; // ecx
  int v31; // eax
  __int16 v32; // ax
  int v33; // eax
  unsigned __int16 v34; // ax
  char v35; // al
  char v36; // al
  unsigned __int16 v37; // r13
  int v38; // eax
  int v39; // ebp
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  signed int v42; // eax
  unsigned int v43; // edx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  int v46; // ebp
  char v47; // cl
  __int16 v48; // ax
  __m128i v49; // xmm2
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  int v52; // eax
  int v53; // edx
  __m128i v54; // xmm2
  __int16 v55; // ax
  char v56; // al
  __int16 v57; // r13

  if ( a2 )
  {
    ++*(_WORD *)(a2 + 26);
    wide_byte = get_wide_byte();
    v5 = wide_byte;
    v6 = wide_byte;
    v7 = ((int)wide_byte >> 12) - 3;
    switch ( v7 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        v8 = v5 >> 4;
        v9 = byte_B120[v7];
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 24) = v9;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 0;
        *(_WORD *)(a2 + 46) = (v8 & 0xF) + 16;
        *(_QWORD *)(a2 + 88) = v8 & 0xF0 | v6 & 0xFu;
        goto LABEL_4;
      case 5:
      case 7:
        v17 = v5;
        v18 = v5;
        v19 = (v5 >> 4) & 0x1F;
        v20 = v6 & 7 | (v18 >> 7) & 0x18 | (v17 >> 8) & 0x20;
        v21 = v6 & 8;
        if ( (v6 & 0x200) != 0 )
        {
          if ( v20 )
          {
            *(_BYTE *)(a2 + 41) = 4;
            *(_WORD *)(a2 + 24) = 67;
            *(_QWORD *)(a2 + 56) = v20;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 3;
            *(_WORD *)(a2 + 24) = 66;
          }
          *(_WORD *)(a2 + 46) = v21 == 0 ? 6 : 3;
          goto LABEL_20;
        }
        *(_BYTE *)(a2 + 41) = 1;
        if ( v20 )
        {
          *(_WORD *)(a2 + 24) = 64;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = v19;
          *(_BYTE *)(a2 + 81) = 4;
          *(_WORD *)(a2 + 86) = v21 == 0 ? 6 : 3;
          *(_QWORD *)(a2 + 96) = v20;
        }
        else
        {
          *(_WORD *)(a2 + 24) = 63;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = v19;
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = v21 == 0 ? 6 : 3;
        }
        *(_BYTE *)(a2 + 85) = 0;
        return *(unsigned __int16 *)(a2 + 26);
      case 6:
        if ( (BYTE1(v5) & 0xFu) > 0xB )
        {
          *(_WORD *)(a2 + 24) = 26;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = (v5 >> 4) & 0x1F;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 0;
          *(_WORD *)(a2 + 86) = (v5 >> 5) & 0x10 | v6 & 0xF;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (v5 & 0x800) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 8;
          v32 = (unsigned __int8)a0834619257RQ[((v5 >> 8) & 3) + 16];
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 56) = (v5 >> 3) & 0x1F;
          *(_WORD *)(a2 + 24) = v32;
          goto LABEL_34;
        }
        if ( (BYTE1(v5) & 0xFu) > 5 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_BYTE *)(a2 + 72) = 1;
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 0;
          *(_WORD *)(a2 + 24) = (v6 & 0x100) == 0 ? 3 : 8;
          *(_WORD *)(a2 + 46) = ((v5 >> 3) & 6) + 24;
          *(_QWORD *)(a2 + 88) = v6 & 0xF | (v5 >> 2) & 0x30u;
          goto LABEL_4;
        }
        if ( (v5 & 0xC00) != 0 )
        {
          switch ( v6 & 0xF )
          {
            case 0:
            case 1:
            case 2:
            case 3:
            case 5:
            case 6:
            case 7:
            case 0xA:
              *(_BYTE *)(a2 + 41) = 1;
              v10 = byte_B0D8[v6 & 0xF];
              *(_BYTE *)(a2 + 45) = 0;
              *(_WORD *)(a2 + 46) = (v5 >> 4) & 0x1F;
              *(_WORD *)(a2 + 24) = v10;
              goto LABEL_6;
            case 4:
              goto LABEL_5;
            case 8:
              if ( (v6 & 0xF00) != 0x500 )
              {
                v10 = (unsigned __int8)aUywCaVzxDbWutv[(v5 >> 4) & 0xF];
                *(_WORD *)(a2 + 24) = v10;
                goto LABEL_6;
              }
              if ( (v6 & 0x90) == 0 )
              {
                *(_WORD *)(a2 + 24) = 33;
                return *(unsigned __int16 *)(a2 + 26);
              }
              if ( (v6 & 0x90) == 0x10 )
              {
                *(_WORD *)(a2 + 24) = 34;
              }
              else if ( (v6 & 0xE0) == 0x80 )
              {
                *(_WORD *)(a2 + 24) = 102;
              }
              else if ( (v6 & 0xE0) == 0xA0 )
              {
                *(_WORD *)(a2 + 24) = 103;
              }
              else
              {
                v57 = v6 & 0xF0;
                switch ( v57 )
                {
                  case 192:
                    *(_WORD *)(a2 + 24) = 68;
                    break;
                  case 208:
                    *(_WORD *)(a2 + 24) = 104;
                    break;
                  case 224:
                    *(_WORD *)(a2 + 24) = 112;
                    break;
                  case 240:
                    *(_WORD *)(a2 + 24) = 105;
                    break;
                  default:
                    goto LABEL_5;
                }
              }
              return *(unsigned __int16 *)(a2 + 26);
            case 9:
              v37 = v6 & 0xFF0;
              if ( v37 == 1280 )
              {
                *(_WORD *)(a2 + 24) = 31;
              }
              else if ( v37 > 0x500u )
              {
                if ( v37 != 1296 )
                  return 0;
                *(_WORD *)(a2 + 24) = 113;
              }
              else if ( v37 == 1024 )
              {
                *(_WORD *)(a2 + 24) = 28;
              }
              else
              {
                if ( v37 != 1040 )
                  return 0;
                *(_WORD *)(a2 + 24) = 114;
              }
              break;
            case 0xB:
              if ( (v6 & 0xF00) != 0x400 )
                return 0;
              *(_BYTE *)(a2 + 41) = 5;
              *(_WORD *)(a2 + 24) = 115;
              *(_BYTE *)(a2 + 45) = 0;
              *(_QWORD *)(a2 + 48) = (v5 >> 4) & 0xF;
              v36 = netnode_charval();
              v10 = *(_WORD *)(a2 + 24);
              *(_BYTE *)(a2 + 72) = v36 == 1;
              goto LABEL_6;
            case 0xC:
            case 0xD:
            case 0xE:
            case 0xF:
              ++*(_WORD *)(a2 + 26);
              *(_WORD *)(a2 + 24) = (v6 & 2) == 0 ? 29 : 32;
              v34 = get_wide_byte();
              *(_BYTE *)(a2 + 41) = 7;
              *(_BYTE *)(a2 + 45) = 9;
              *(_QWORD *)(a2 + 56) = v34 | (unsigned __int64)((__int64)(v6 & 1 | (v5 >> 3) & 0x3Eu) << 16);
              v35 = netnode_charval();
              v10 = *(_WORD *)(a2 + 24);
              if ( v35 == 4 )
                *(_QWORD *)(a2 + 56) += 0x1000000LL;
              goto LABEL_6;
          }
          return *(unsigned __int16 *)(a2 + 26);
        }
        v46 = (v5 >> 4) & 0x1F;
        *(_BYTE *)(a2 + 41) = 1;
        v10 = (unsigned __int8)asc_B110[v6 & 0xF];
        *(_BYTE *)(a2 + 45) = 0;
        v47 = v6 & 0xF;
        *(_WORD *)(a2 + 46) = v46;
        *(_WORD *)(a2 + 24) = v10;
        if ( (v6 & 8) != 0 )
        {
          switch ( v6 & 0xF )
          {
            case 9:
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = 4;
              *(_BYTE *)(a2 + 85) = 0;
              goto LABEL_92;
            case 0xA:
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = 5;
              *(_BYTE *)(a2 + 85) = 0;
              goto LABEL_92;
            case 0xC:
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = 0;
              *(_BYTE *)(a2 + 85) = 0;
              goto LABEL_92;
            case 0xD:
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = 1;
              *(_BYTE *)(a2 + 85) = 0;
              goto LABEL_92;
            case 0xE:
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = 2;
              *(_BYTE *)(a2 + 85) = 0;
              goto LABEL_92;
            case 0xF:
              goto LABEL_92;
            default:
              return 0;
          }
        }
        if ( (v6 & 0xF) != 0 )
        {
          if ( ((1LL << v47) & 0xA2) != 0 )
          {
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = 7;
            *(_BYTE *)(a2 + 85) = 0;
          }
          else if ( ((1LL << v47) & 0x50) != 0 )
          {
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = 6;
            *(_BYTE *)(a2 + 85) = 0;
          }
          else
          {
            if ( (v6 & 0xF) != 2 )
              return 0;
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = 8;
            *(_BYTE *)(a2 + 85) = 0;
          }
        }
        else
        {
          v55 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 81) = 2;
          *(_BYTE *)(a2 + 85) = 0;
          *(_BYTE *)(a2 + 82) = v55;
          *(_WORD *)(a2 + 26) = v55 + 1;
          *(_QWORD *)(a2 + 96) = (unsigned __int16)get_wide_byte();
          v56 = netnode_charval();
          v10 = *(_WORD *)(a2 + 24);
          if ( v56 == 2 )
          {
            *(_QWORD *)(a2 + 96) += 0x800000LL;
          }
          else if ( v56 == 3 )
          {
            *(_QWORD *)(a2 + 96) += 8454144LL;
          }
        }
LABEL_92:
        if ( (v6 & 0x200) == 0 )
        {
LABEL_6:
          if ( !v10 )
            return 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( v10 != 68 )
        {
          if ( v10 <= 0x44u )
          {
            if ( v10 == 62 )
            {
              v48 = 65;
            }
            else
            {
              v48 = 66;
              if ( v10 != 63 )
                goto LABEL_6;
            }
            v49 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            v50 = _mm_loadu_si128((const __m128i *)(a2 + 40));
            *(_WORD *)(a2 + 24) = v48;
            v51 = _mm_loadu_si128((const __m128i *)(a2 + 56));
            v52 = *(_DWORD *)(a2 + 72);
            v53 = *(_DWORD *)(a2 + 112);
            *(__m128i *)(a2 + 40) = v49;
            v54 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_DWORD *)(a2 + 112) = v52;
            *(_DWORD *)(a2 + 72) = v53;
            *(__m128i *)(a2 + 56) = v54;
            *(__m128i *)(a2 + 80) = v50;
            *(__m128i *)(a2 + 96) = v51;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( v10 == 72 )
          {
            *(_WORD *)(a2 + 24) = 71;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( v10 != 104 )
            return *(unsigned __int16 *)(a2 + 26);
        }
        *(_BYTE *)(a2 + 41) = 3;
        v10 = (unsigned __int8)aUywCaVzxDbWutv[(v6 & 3) + 16];
        *(_WORD *)(a2 + 46) = 6;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 24) = v10;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 0;
        *(_WORD *)(a2 + 86) = v46;
        goto LABEL_6;
      case 8:
        v22 = v5;
        v19 = (v5 >> 4) & 0x1F;
        v23 = v6 & 0xF | (v22 >> 5) & 0x30u;
        if ( (v6 & 0x800) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 8;
          *(_WORD *)(a2 + 24) = 70;
          *(_QWORD *)(a2 + 56) = v23;
LABEL_20:
          *(_BYTE *)(a2 + 45) = 0;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 0;
          *(_WORD *)(a2 + 86) = v19;
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 69;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = v19;
          *(_BYTE *)(a2 + 81) = 8;
          *(_QWORD *)(a2 + 96) = v23;
          *(_BYTE *)(a2 + 85) = 0;
        }
        return *(unsigned __int16 *)(a2 + 26);
      case 9:
      case 10:
        *(_WORD *)(a2 + 24) = (v6 & 0x1000) == 0 ? 27 : 30;
        v12 = *(unsigned int *)(a1 + 340);
        v13 = v6 & 0xFFF;
        if ( (v6 & 0x800) != 0 )
          v13 = v6 | 0xFFFFF000;
        v14 = *(_QWORD *)(a2 + 8);
        if ( !(_DWORD)v12 )
          v12 = 0x10000;
        v15 = v14 + v13 + 1;
        if ( v12 < v14 )
          v16 = (unsigned int)v15;
        else
          v16 = v15 % v12;
        *(_BYTE *)(a2 + 41) = 7;
        *(_BYTE *)(a2 + 45) = 9;
        *(_QWORD *)(a2 + 56) = v16;
        return *(unsigned __int16 *)(a2 + 26);
      case 11:
        *(_BYTE *)(a2 + 41) = 1;
        v24 = v5 >> 4;
        *(_WORD *)(a2 + 24) = 61;
        v25 = v6 & 0xF | (v5 >> 4) & 0xF0;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 46) = (v24 & 0xF) + 16;
        if ( v25 != 255 || (unsigned __int8)get_fixup() )
        {
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 0;
          *(_QWORD *)(a2 + 88) = v25;
          goto LABEL_4;
        }
        *(_WORD *)(a2 + 24) = 22;
        return *(unsigned __int16 *)(a2 + 26);
      case 12:
        v26 = (v5 >> 9) & 7;
        switch ( v26 )
        {
          case 6:
            v27 = 36;
            break;
          case 7:
            v27 = 37;
            break;
          case 4:
            v27 = 84;
            if ( (v6 & 8) != 0 )
              return 0;
            break;
          default:
            v27 = 83;
            if ( v26 != 5 )
            {
              v38 = v5;
              v39 = v5 >> 3;
              v40 = *(_QWORD *)(a2 + 8);
              v41 = 0x10000;
              v10 = (unsigned __int8)a0834619257RQ[(v38 >> 7) & 8 | v6 & 7];
              v42 = v39 | 0xFFFFFF80;
              if ( (v39 & 0x40) == 0 )
                v42 = v39 & 0x7F;
              *(_WORD *)(a2 + 24) = v10;
              v43 = *(_DWORD *)(a1 + 340);
              if ( v43 )
                v41 = v43;
              v44 = v40 + v42 + 1;
              v45 = (unsigned int)v44;
              if ( v41 >= v40 )
                v45 = v44 % v41;
              *(_BYTE *)(a2 + 41) = 7;
              *(_BYTE *)(a2 + 45) = 9;
              *(_QWORD *)(a2 + 56) = v45;
              goto LABEL_6;
            }
            break;
        }
        *(_WORD *)(a2 + 24) = v27;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 46) = (v5 >> 4) & 0x1F;
LABEL_34:
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 0;
        *(_QWORD *)(a2 + 88) = v6 & 7;
LABEL_4:
        *(_BYTE *)(a2 + 112) = (unsigned __int8)netnode_charval() == 1;
LABEL_5:
        v10 = *(_WORD *)(a2 + 24);
        goto LABEL_6;
      default:
        v28 = v5 >> 4;
        v29 = v6 & 0xF;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 0;
        v10 = byte_B130[v5 >> 10];
        *(_BYTE *)(a2 + 81) = 1;
        v30 = (v5 >> 4) & 0x1F;
        *(_BYTE *)(a2 + 85) = 0;
        *(_WORD *)(a2 + 24) = v10;
        v31 = v29 | (v5 >> 5) & 0x10;
        *(_WORD *)(a2 + 46) = (v5 >> 4) & 0x1F;
        *(_WORD *)(a2 + 86) = v29 | (v5 >> 5) & 0x10;
        switch ( v5 >> 10 )
        {
          case 0:
            v33 = v5 >> 8;
            if ( v5 >> 8 == 2 )
            {
              *(_WORD *)(a2 + 24) = 110;
              *(_WORD *)(a2 + 46) = (v28 & 0xF) + 16;
              *(_WORD *)(a2 + 86) = v29 + 16;
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( v33 == 3 )
            {
              v10 = (unsigned __int8)aOjkl[(v5 >> 3) & 1 | (v5 >> 6) & 2];
              *(_WORD *)(a2 + 46) = (v28 & 7) + 16;
              *(_WORD *)(a2 + 24) = v10;
              *(_WORD *)(a2 + 86) = (v6 & 7) + 16;
              goto LABEL_6;
            }
            if ( v33 == 1 )
            {
              *(_BYTE *)(a2 + 72) = 1;
              *(_WORD *)(a2 + 24) = 109;
              *(_WORD *)(a2 + 46) = (v5 >> 3) & 0x1E;
              *(_WORD *)(a2 + 86) = (2 * (_BYTE)v6) & 0x1E;
              *(_BYTE *)(a2 + 112) = 1;
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( v5 )
              return 0;
            *(_BYTE *)(a2 + 81) = 0;
            *(_BYTE *)(a2 + 41) = 0;
            break;
          case 3:
            if ( (_WORD)v30 != (_WORD)v31 )
              goto LABEL_6;
            *(_BYTE *)(a2 + 81) = 0;
            *(_WORD *)(a2 + 24) = 73;
            return *(unsigned __int16 *)(a2 + 26);
          case 7:
            if ( (_WORD)v30 != (_WORD)v31 )
              goto LABEL_6;
            *(_BYTE *)(a2 + 81) = 0;
            *(_WORD *)(a2 + 24) = 75;
            return *(unsigned __int16 *)(a2 + 26);
          case 8:
            if ( (_WORD)v30 != (_WORD)v31 )
              goto LABEL_6;
            *(_BYTE *)(a2 + 81) = 0;
            *(_WORD *)(a2 + 24) = 20;
            return *(unsigned __int16 *)(a2 + 26);
          case 9:
            if ( (_WORD)v30 != (_WORD)v31 )
              goto LABEL_6;
            *(_BYTE *)(a2 + 81) = 0;
            *(_WORD *)(a2 + 24) = 21;
            return *(unsigned __int16 *)(a2 + 26);
          default:
            goto LABEL_6;
        }
        goto LABEL_6;
    }
  }
  return 0;
}

