__int64 __fastcall sub_CAC0(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // dl
  __int64 *v4; // r13
  unsigned __int8 v5; // r12
  int v6; // r14d
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // cx
  bool v10; // r12
  __int64 v11; // rdx
  __int16 v12; // ax
  unsigned __int8 v13; // al
  char v14; // al
  char v15; // al
  char v16; // dl
  unsigned __int8 v17; // al
  char v18; // al
  unsigned __int8 v19; // al
  char v20; // r12
  __int16 v21; // ax
  __int64 next_dword; // rax
  char v23; // al
  unsigned __int8 v24; // al
  char v25; // al
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // al
  __int16 v28; // ax
  char v29; // al
  __int64 v30; // rdx
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // dl
  __int16 v33; // cx
  __int16 v34; // dx
  int v35; // r13d
  unsigned __int8 v36; // al
  int v37; // esi
  __int64 *v38; // rdx
  int v39; // esi
  __int64 *v40; // rax
  __int64 v41; // r13
  unsigned __int8 v42; // al
  __int64 v43; // rcx
  char v44; // al
  unsigned __int8 v45; // dl
  bool v46; // cf
  bool v47; // zf
  __int16 v48; // ax
  __m128i v49; // xmm1
  int v50; // eax
  __m128i v51; // xmm0
  int v52; // edx
  __m128i v53; // xmm2
  char v54; // al
  __int16 v55; // r8
  __int16 v56; // cx
  __int64 v57; // rdx
  __int64 *v58; // rsi
  int v59; // eax
  char v60; // al
  int v61; // r13d
  unsigned __int8 v62; // al
  char v63; // cl
  unsigned __int8 v64; // al
  __int16 v65; // dx
  __int16 v66; // ax
  char v67; // al
  unsigned __int8 v68; // dl
  __int16 v69; // ax
  char v70; // al
  char v71; // al
  char v72; // r12
  __int16 v73; // ax
  char v74; // al
  char v75; // dl
  __int16 v76; // ax
  char v77; // al
  char v78; // al
  char v79; // al
  __int16 v80; // ax
  char v81; // al

  next_byte = insn_get_next_byte();
  v4 = &qword_179A0[next_byte];
  *(_BYTE *)(a1 + 227) = next_byte;
  if ( (*(_WORD *)v4 & *(_WORD *)(a1 + 224)) == 0 )
    return 0;
  v5 = next_byte;
  v6 = -1;
  while ( 2 )
  {
    v7 = *((unsigned __int16 *)v4 + 1);
    *(_WORD *)(a2 + 24) = v7;
    switch ( v7 )
    {
      case 0LL:
        return 0;
      case 51LL:
        if ( *(_WORD *)(a1 + 224) <= 0xFFFu )
          return 0;
        v13 = *(_BYTE *)(a1 + 227);
        if ( (v13 & 0xF) != 0 )
          return 0;
        *(_BYTE *)(a2 + 112) = (v13 >> 4) + 1;
        if ( (unsigned __int8)insn_get_next_byte() != 109 )
          return 0;
        v14 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v14;
        if ( (v14 & 0x78) != 0x70 )
          return 0;
        *(_DWORD *)(a2 + 28) = 3;
        *(_BYTE *)(a2 + 41) = 3;
        *(_BYTE *)(a2 + 72) = 19;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = 39;
        *(_BYTE *)(a2 + 81) = 8;
        *(_BYTE *)(a2 + 85) = 2;
        v15 = *(_BYTE *)(a1 + 227) & 7;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v15 + 32);
        v16 = *(_BYTE *)(a2 + 112);
        if ( *(char *)(a1 + 227) >= 0 )
          *(_WORD *)(a2 + 86) = (unsigned __int8)(v15 + 33) - v16;
        if ( v16 != 2 )
        {
          if ( (unsigned __int8)(v16 - 3) <= 1u && (*(_WORD *)(a2 + 86) & 0xFFFB) != 0x20 )
            return 0;
LABEL_7:
          v9 = *((_WORD *)v4 + 2);
          v10 = 0;
          v11 = a2 + 40;
          goto LABEL_8;
        }
        if ( (*(_WORD *)(a2 + 86) & 0xFFF9) == 0x20 )
          goto LABEL_7;
        return 0;
      case 53LL:
        if ( (*(_BYTE *)(a1 + 227) & 0xF) != 0 )
          return 0;
        if ( (unsigned __int8)insn_get_next_byte() != 109 )
          return 0;
        v17 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v17;
        if ( (v17 & 0x88) != 0 )
          return 0;
        *(_BYTE *)(a2 + 41) = 3;
        v10 = 0;
        v11 = a2 + 40;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 72) = 19;
        *(_WORD *)(a2 + 46) = (unsigned __int8)((v17 >> 4) + 32);
        v18 = *(_BYTE *)(a1 + 227);
        *(_BYTE *)(a2 + 81) = 3;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 112) = 19;
        *(_WORD *)(a2 + 86) = (v18 & 7) + 32;
        v9 = *((_WORD *)v4 + 2);
        goto LABEL_8;
      case 54LL:
        v9 = *((_WORD *)v4 + 2);
        if ( (v9 & 0x4000) == 0 )
        {
          v11 = a2 + 40;
          v10 = (unsigned __int8)(v5 - 12) <= 1u;
          goto LABEL_8;
        }
        v19 = *(_BYTE *)(a1 + 227);
        if ( v19 == 108 )
        {
          *(_DWORD *)(a2 + 28) = 1;
          v62 = insn_get_next_byte();
          *(_BYTE *)(a1 + 227) = v62;
          if ( (v62 & 0xF0) == 0x70 )
          {
            v75 = 0;
            *(_WORD *)(a2 + 24) = 64;
            v76 = (*(_BYTE *)(a1 + 227) & 0xF) + 16;
            goto LABEL_154;
          }
          if ( (v62 & 0xF0) == 0xF0 )
          {
            v75 = 0;
            *(_WORD *)(a2 + 24) = 65;
            v76 = (*(_BYTE *)(a1 + 227) & 0xF) + 16;
LABEL_154:
            *(_BYTE *)(a2 + 45) = v75;
            v10 = 0;
            v11 = a2 + 40;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = v76;
            v9 = *((_WORD *)v4 + 2);
            goto LABEL_8;
          }
          v63 = 0;
        }
        else
        {
          if ( v19 <= 0x6Cu )
          {
            if ( v19 )
            {
              if ( v19 != 107 )
                return 0;
              if ( (*(_BYTE *)(a1 + 224) & 8) != 0 )
                return sub_AEB0(a1, a2);
              *(_DWORD *)(a2 + 28) = 2;
              v20 = 1;
LABEL_39:
              *(_BYTE *)(a1 + 227) = insn_get_next_byte();
              *(_BYTE *)(a2 + 41) = 2;
              *(_BYTE *)(a2 + 45) = v20;
              if ( ((*(_BYTE *)(a1 + 227) >> 4) & 7) != 0 )
              {
                if ( ((*(_BYTE *)(a1 + 227) >> 4) & 7) != 2 )
                  return 0;
                v21 = *(_WORD *)(a2 + 26);
                *(_BYTE *)(a2 + 73) |= 0x40u;
                *(_BYTE *)(a2 + 42) = v21;
                next_dword = (unsigned int)insn_get_next_dword();
              }
              else
              {
                v80 = *(_WORD *)(a2 + 26);
                *(_BYTE *)(a2 + 73) |= 0x10u;
                *(_BYTE *)(a2 + 42) = v80;
                next_dword = (__int16)insn_get_next_word();
              }
              *(_QWORD *)(a2 + 56) = next_dword;
              sub_8300(a1, a2 + 40);
              v23 = *(_BYTE *)(a1 + 227);
              v11 = a2 + 40;
              *(_BYTE *)(a2 + 85) = v20;
              *(_BYTE *)(a2 + 81) = 1;
              v24 = v23 & 0xF;
              if ( v20 == 2 )
                v24 += 32;
              v10 = 0;
              *(_WORD *)(a2 + 86) = v24;
              v9 = *((_WORD *)v4 + 2);
              goto LABEL_8;
            }
            if ( *(_WORD *)(a1 + 224) <= 0xFFFu )
              return 0;
            *(_DWORD *)(a2 + 28) = 3;
            switch ( (unsigned __int8)insn_get_next_byte() )
            {
              case 'i':
                v67 = insn_get_next_byte();
                *(_BYTE *)(a1 + 227) = v67;
                if ( (v67 & 8) != 0 )
                  return 0;
                *(_BYTE *)(a2 + 41) = 3;
                *(_BYTE *)(a2 + 45) = 2;
                v68 = *(_BYTE *)(a1 + 227);
                v46 = *(_WORD *)(a1 + 224) < 0xFFFu;
                v47 = *(_WORD *)(a1 + 224) == 4095;
                *(_BYTE *)(a2 + 72) = 0;
                v10 = 0;
                v69 = ((v68 >> 4) & 7) + 32 * (!v46 && !v47);
                v11 = a2 + 40;
                *(_WORD *)(a2 + 46) = v69;
                LOBYTE(v69) = *(_BYTE *)(a1 + 227);
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_WORD *)(a2 + 86) = (v69 & 7) + 32;
                v9 = *((_WORD *)v4 + 2);
                goto LABEL_8;
              case 'k':
                v20 = 2;
                goto LABEL_39;
              case 'm':
                v62 = insn_get_next_byte();
                *(_BYTE *)(a1 + 227) = v62;
                if ( (v62 & 8) != 0 )
                  return 0;
                if ( (v62 & 0xF0) == 0x70 )
                {
                  v75 = 2;
                  *(_WORD *)(a2 + 24) = 64;
                  v76 = (*(_BYTE *)(a1 + 227) & 0xF) + 32;
                }
                else
                {
                  if ( (v62 & 0xF0) != 0xF0 )
                  {
                    v63 = 2;
                    goto LABEL_138;
                  }
                  v75 = 2;
                  *(_WORD *)(a2 + 24) = 65;
                  v76 = (*(_BYTE *)(a1 + 227) & 0xF) + 32;
                }
                break;
              case 'o':
                v10 = 0;
                *(_BYTE *)(a1 + 227) = insn_get_next_byte();
                sub_8370(a1, a2, a2 + 40, 2);
                v74 = *(_BYTE *)(a1 + 227);
                v11 = a2 + 40;
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_WORD *)(a2 + 86) = (v74 & 7) + 32;
                v9 = *((_WORD *)v4 + 2);
                goto LABEL_8;
              case 'x':
                v70 = insn_get_next_byte();
                *(_BYTE *)(a1 + 227) = v70;
                if ( (v70 & 0xF) != 0 )
                  return 0;
                if ( (unsigned __int8)insn_get_next_byte() != 107 )
                  return 0;
                v71 = insn_get_next_byte();
                *(_BYTE *)(a1 + 228) = v71;
                if ( (v71 & 0x70) != 0x20 )
                  return 0;
                v72 = 2;
                sub_83F0(a1, a2, a2 + 40, 2);
                v11 = a2 + 40;
                v73 = (*(_BYTE *)(a1 + 228) & 0xF) + 32;
                goto LABEL_148;
              default:
                return 0;
            }
            goto LABEL_154;
          }
          if ( v19 != 109 )
          {
            if ( v19 != 120 )
              return 0;
            if ( (*(_BYTE *)(a1 + 224) & 8) != 0 )
              return sub_B930(a1, a2);
            v77 = insn_get_next_byte();
            *(_BYTE *)(a1 + 227) = v77;
            v72 = v77 & 0x8F;
            if ( (v77 & 0x8F) != 0 )
              return 0;
            v78 = insn_get_next_byte();
            if ( v78 == 106 )
            {
              *(_DWORD *)(a2 + 28) = 1;
              v81 = insn_get_next_byte();
              *(_BYTE *)(a1 + 228) = v81;
              if ( (v81 & 0x70) != 0x20 )
                return 0;
              sub_83F0(a1, a2, a2 + 40, 0);
              v11 = a2 + 40;
              v73 = (*(_BYTE *)(a1 + 228) & 0xF) + 16;
            }
            else
            {
              if ( v78 != 107 )
                return 0;
              *(_DWORD *)(a2 + 28) = 2;
              v79 = insn_get_next_byte();
              *(_BYTE *)(a1 + 228) = v79;
              if ( (v79 & 0x70) != 0x20 )
                return 0;
              v72 = 1;
              sub_83F0(a1, a2, a2 + 40, 1);
              v11 = a2 + 40;
              v73 = *(_BYTE *)(a1 + 228) & 0xF;
            }
LABEL_148:
            *(_BYTE *)(a2 + 85) = v72;
            v10 = 0;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = v73;
            *(_BYTE *)(a1 + 227) = *(_BYTE *)(a1 + 228);
            v9 = *((_WORD *)v4 + 2);
LABEL_8:
            if ( v9 >= 0 )
            {
              v12 = v9 & 0xF00;
              if ( (v9 & 0xF00) == 0x400 )
              {
                *(_DWORD *)(a2 + 28) = 3;
                v9 = *((_WORD *)v4 + 2);
              }
              else if ( (v9 & 0xF00u) > 0x400 )
              {
                if ( v12 == 2048 )
                {
                  v59 = 2;
                  if ( *(_WORD *)(a1 + 224) > 0xFFFu )
                    v59 = 3;
                  *(_DWORD *)(a2 + 28) = v59;
                  v9 = *((_WORD *)v4 + 2);
                }
              }
              else if ( v12 == 256 )
              {
                *(_DWORD *)(a2 + 28) = 1;
                v9 = *((_WORD *)v4 + 2);
              }
              else if ( v12 == 512 )
              {
                *(_DWORD *)(a2 + 28) = 2;
                v9 = *((_WORD *)v4 + 2);
              }
            }
            if ( !(unsigned __int8)sub_84D0(a1, a2, v11, v9)
              || !(unsigned __int8)sub_84D0(a1, a2, a2 + 80, *((_WORD *)v4 + 3)) )
            {
              return 0;
            }
            if ( *(char *)(a1 + 227) >= 0 )
              return *(unsigned __int16 *)(a2 + 26);
            switch ( *(_WORD *)(a2 + 24) )
            {
              case 6:
                *(_WORD *)(a2 + 24) = 24;
                return *(unsigned __int16 *)(a2 + 26);
              case 0x17:
              case 0x1E:
              case 0x20:
              case 0x23:
                if ( *(_BYTE *)(a2 + 41) == 5 )
                  return 0;
                return *(unsigned __int16 *)(a2 + 26);
              case 0x1D:
                *(_WORD *)(a2 + 24) = 25;
                return *(unsigned __int16 *)(a2 + 26);
              case 0x1F:
                *(_WORD *)(a2 + 24) = 26;
                return *(unsigned __int16 *)(a2 + 26);
              case 0x22:
                *(_WORD *)(a2 + 24) = 27;
                return *(unsigned __int16 *)(a2 + 26);
              case 0x24:
                *(_WORD *)(a2 + 24) = 28;
                return *(unsigned __int16 *)(a2 + 26);
              case 0x32:
                *(_WORD *)(a2 + 24) = 77;
                break;
              case 0x33:
                *(_WORD *)(a2 + 24) = 78;
                break;
              case 0x36:
                break;
              default:
                return *(unsigned __int16 *)(a2 + 26);
            }
            if ( v10 )
              return *(unsigned __int16 *)(a2 + 26);
            v49 = _mm_loadu_si128((const __m128i *)(a2 + 40));
            v50 = *(_DWORD *)(a2 + 72);
            v51 = _mm_loadu_si128((const __m128i *)(a2 + 56));
            v52 = *(_DWORD *)(a2 + 112);
            *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
            v53 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(__m128i *)(a2 + 80) = v49;
            *(_DWORD *)(a2 + 112) = v50;
            v54 = *(_BYTE *)(a2 + 81);
            *(_DWORD *)(a2 + 72) = v52;
            *(_BYTE *)(a2 + 40) = 0;
            *(_BYTE *)(a2 + 80) = 1;
            *(__m128i *)(a2 + 56) = v53;
            *(__m128i *)(a2 + 96) = v51;
            if ( v54 != 5 )
            {
              if ( v54 == 3 && *(_BYTE *)(a2 + 112) == 19 )
                *(_BYTE *)(a2 + 112) = 16;
              return *(unsigned __int16 *)(a2 + 26);
            }
            return 0;
          }
          *(_DWORD *)(a2 + 28) = 2;
          v62 = insn_get_next_byte();
          *(_BYTE *)(a1 + 227) = v62;
          if ( (v62 & 0xF0) == 0x70 )
          {
            v75 = 1;
            *(_WORD *)(a2 + 24) = 64;
            v76 = *(_BYTE *)(a1 + 227) & 0xF;
            goto LABEL_154;
          }
          if ( (v62 & 0xF0) == 0xF0 )
          {
            v75 = 1;
            *(_WORD *)(a2 + 24) = 65;
            v76 = *(_BYTE *)(a1 + 227) & 0xF;
            goto LABEL_154;
          }
          v63 = 1;
        }
LABEL_138:
        v46 = *(_WORD *)(a1 + 224) < 0xFFFu;
        v47 = *(_WORD *)(a1 + 224) == 4095;
        *(_BYTE *)(a2 + 41) = 3;
        *(_BYTE *)(a2 + 45) = v63;
        *(_BYTE *)(a2 + 72) = 19;
        *(_WORD *)(a2 + 46) = 32 * (!v46 && !v47) + ((v62 >> 4) & 7);
        v64 = *(_BYTE *)(a1 + 227) & 0xF;
        if ( v63 )
        {
          v65 = v64;
          v66 = (unsigned __int8)(v64 + 32);
          if ( v63 != 2 )
            v66 = v65;
        }
        else
        {
          v66 = (unsigned __int8)(v64 + 16);
        }
        *(_BYTE *)(a2 + 81) = 1;
        v10 = 0;
        v11 = a2 + 40;
        *(_BYTE *)(a2 + 85) = v63;
        *(_WORD *)(a2 + 86) = v66;
        v9 = *((_WORD *)v4 + 2);
        goto LABEL_8;
      case 83LL:
        if ( *(_BYTE *)(a1 + 227) != 0xE0 )
          return 0;
        if ( (unsigned __int8)insn_get_next_byte() != 123 )
          return 0;
        v44 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v44;
        if ( (v44 & 0x8F) != 0xC )
          return 0;
        *(_BYTE *)(a2 + 41) = 3;
        *(_BYTE *)(a2 + 45) = 0;
        v45 = *(_BYTE *)(a1 + 227);
        v46 = *(_WORD *)(a1 + 224) < 0xFFFu;
        v47 = *(_WORD *)(a1 + 224) == 4095;
        *(_BYTE *)(a2 + 72) = 0;
        v10 = 0;
        v48 = ((v45 >> 4) & 7) + 32 * (!v46 && !v47);
        v11 = a2 + 40;
        *(_WORD *)(a2 + 46) = v48;
        v9 = *((_WORD *)v4 + 2);
        goto LABEL_8;
      case 84LL:
        v25 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v25;
        if ( (v25 & 0xC3) != 0 )
          return 0;
        *(_BYTE *)(a2 + 41) = 5;
        v10 = 0;
        v11 = a2 + 40;
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = *(_BYTE *)(a1 + 227) >> 4;
        v9 = *((_WORD *)v4 + 2);
        goto LABEL_8;
      case 114LL:
        v26 = *(_BYTE *)(a1 + 227);
        if ( (*(_BYTE *)(a1 + 224) & 8) == 0 )
          goto LABEL_77;
        if ( v26 > 0x1Fu )
        {
          switch ( v26 )
          {
            case 'y':
              return sub_B080(a1, a2);
            case 'z':
              return sub_B130(a1, a2);
            case 'j':
              return sub_AC10(a1, a2);
          }
LABEL_77:
          v6 = 0;
          v40 = qword_1C660;
          do
          {
            if ( *(_BYTE *)v40 == v26 )
            {
              v41 = qword_1C660[2 * v6 + 1];
              v42 = insn_get_next_byte();
              *(_BYTE *)(a1 + 227) = v42;
              v43 = v42 >> 4;
              goto LABEL_81;
            }
            ++v6;
            v40 += 2;
          }
          while ( v6 != 18 );
          if ( under_debugger )
            BUG();
          v27 = interr();
LABEL_123:
          if ( v27 == 127 )
            return sub_9A80(a1, a2);
LABEL_71:
          if ( v6 == -1 )
          {
            v60 = insn_get_next_byte();
            v61 = *(unsigned __int8 *)(a1 + 227);
            *(_BYTE *)(a1 + 228) = v60;
            v35 = v61 << 12;
          }
          else
          {
            *(_BYTE *)(a1 + 228) = *(_BYTE *)(a1 + 227);
            v35 = LOBYTE(qword_1C660[2 * v6]) << 12;
          }
          v6 = 0;
          v36 = insn_get_next_byte();
          v37 = *(unsigned __int8 *)(a1 + 228);
          *(_BYTE *)(a1 + 227) = v36;
          v38 = qword_1C5A0;
          v39 = v35 | (v36 >> 4) | (16 * v37);
          while ( *(_DWORD *)v38 != (v39 & ~*((_DWORD *)v38 + 1)) )
          {
            ++v6;
            v38 += 2;
            if ( v6 == 11 )
              return 0;
          }
          v43 = v36 & 7;
          v41 = qword_1C5A0[2 * v6 + 1];
LABEL_81:
          v4 = (__int64 *)(v41 + 8 * v43);
          if ( (*(_WORD *)(a1 + 224) & *(_WORD *)v4) == 0 )
            return 0;
          continue;
        }
        if ( !v26 )
          goto LABEL_77;
        switch ( v26 )
        {
          case 1u:
            return sub_C760(a1, a2);
          case 3u:
            return sub_9620(a1, a2);
          case 0xAu:
            return sub_9840(a1, a2);
          case 0xFu:
            return sub_98E0(a1, a2);
          case 0x10u:
            v55 = 72;
            v56 = 74;
            v57 = a2;
            v58 = qword_17620;
            goto LABEL_105;
          case 0x11u:
            v55 = 73;
            v56 = 75;
            v57 = a2;
            v58 = qword_175A0;
LABEL_105:
            result = sub_A880(a1, (__int64)v58, v57, v56, v55);
            break;
          case 0x1Au:
            result = sub_9960(a1, a2);
            break;
          case 0x1Fu:
            result = sub_9A00(a1, a2);
            break;
          default:
            goto LABEL_77;
        }
        return result;
      case 115LL:
        if ( (*(_BYTE *)(a1 + 224) & 8) == 0 )
          goto LABEL_71;
        v27 = *(_BYTE *)(a1 + 227);
        if ( v27 == 126 )
          return sub_A6B0(a1, a2);
        if ( v27 > 0x7Eu )
          goto LABEL_123;
        if ( v27 == 124 )
          return sub_B2F0(a1, a2);
        if ( v27 == 125 )
          return sub_A280(a1, a2);
        goto LABEL_71;
      case 116LL:
        if ( !(unsigned __int8)sub_90A0(a1, a2) )
          return 0;
        goto LABEL_7;
      case 117LL:
        if ( !(unsigned __int8)sub_8DA0(a1, a2) )
          return 0;
        goto LABEL_7;
      case 118LL:
        v28 = *(_WORD *)(a2 + 26);
        *(_BYTE *)(a2 + 41) = 7;
        *(_WORD *)(a2 + 24) = 7;
        *(_BYTE *)(a2 + 42) = v28;
        *(_BYTE *)(a2 + 45) = 9;
        v29 = insn_get_next_byte();
        if ( (*(_BYTE *)(a1 + 224) & 8) != 0 && (v29 & 1) != 0 )
          *(_WORD *)(a2 + 24) = 91;
        v30 = *(unsigned __int16 *)(a2 + 26);
        *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 8) + v30 + (char)(v29 & 0xFE);
        return (unsigned __int16)v30;
      case 119LL:
        v31 = 88;
        v32 = 71;
        return sub_9290(a1, a2, v32, v31);
      case 120LL:
        v31 = 87;
        v32 = 70;
        return sub_9290(a1, a2, v32, v31);
      case 121LL:
        v33 = 7;
        v34 = 48;
        return sub_9380(a1, a2, v34, v33);
      case 122LL:
        v33 = 33;
        v34 = 49;
        return sub_9380(a1, a2, v34, v33);
      case 123LL:
        return sub_9510(a1, a2);
      default:
        goto LABEL_7;
    }
  }
}

