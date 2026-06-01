char __fastcall sub_4660(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // r15
  unsigned __int16 v4; // dx
  unsigned int v5; // r13d
  unsigned __int8 v6; // r14
  char v7; // bp
  __int16 v8; // ax
  unsigned __int8 v9; // al
  __int64 v10; // rax
  int *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // al
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  bool v23; // cc
  __int64 v24; // rax
  __int64 v25; // rax
  __int16 v26; // cx
  int v27; // eax
  char v28; // al
  char v29; // al
  unsigned __int8 v30; // al
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int8 v34; // al
  unsigned __int8 v35; // al
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int16 next_word; // ax
  __int64 v39; // rsi
  int v40; // edx
  __int64 v41; // rax
  unsigned __int16 v42; // ax
  unsigned __int16 v43; // ax
  unsigned __int16 v44; // ax
  unsigned __int64 byte; // rax
  __int64 v46; // rdx
  char v47; // al
  int v48; // r12d
  unsigned __int8 v49; // bp
  unsigned __int8 v50; // al
  int v51; // eax
  unsigned __int16 v52; // ax
  __int16 v53; // ax
  unsigned __int16 v54; // ax
  unsigned __int16 v55; // ax
  unsigned __int16 v56; // ax
  __int64 v57; // rax
  __int16 v58; // ax
  unsigned __int16 v59; // ax
  unsigned __int16 v60; // ax
  __int64 v61; // rdx
  __int64 v62; // r14
  char *v63; // rax
  __int16 v64; // ax
  unsigned __int8 v65; // al
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // edx

  next_byte = insn_get_next_byte();
  v4 = *((_WORD *)qword_AE80 + next_byte);
  v5 = next_byte & 0xF;
  v6 = next_byte >> 4;
  *(_WORD *)(a2 + 24) = v4;
  v7 = next_byte;
  switch ( v4 )
  {
    case 1u:
    case 5u:
    case 0xBu:
      v7 = (next_byte & 1) == 0;
      if ( !(_BYTE)v5 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 12;
        v8 = 8;
        if ( (next_byte & 1) == 0 )
          goto LABEL_4;
        goto LABEL_45;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 8;
      if ( (next_byte & 1) != 0 )
      {
        LOWORD(v25) = (unsigned __int8)v5 >> 1;
        if ( (unsigned __int16)v25 <= 3u )
        {
          v25 = (unsigned __int16)v25;
LABEL_44:
          v8 = *((char *)qword_A860 + 4 * v25);
LABEL_45:
          *(_WORD *)(a2 + 86) = v8;
          *(_BYTE *)(a2 + 81) = 1;
          goto LABEL_6;
        }
LABEL_163:
        sub_3900(a2);
LABEL_164:
        v47 = sub_3920(a2, a2);
LABEL_165:
        if ( v6 == 11 && v47 )
        {
          sub_3A00(a2, a2 + 40, next_byte);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = 8;
          v4 = *(_WORD *)(a2 + 24);
          goto LABEL_6;
        }
        if ( (v7 & 0xFD) == 0xC9 )
        {
          if ( (_BYTE)v5 == 9 )
          {
            v69 = (unsigned __int8)insn_get_next_byte();
            v68 = v69 + 1048064;
            if ( v69 <= 0x1F )
              v68 = v69 + 1048320;
          }
          else
          {
            v68 = (unsigned int)(unsigned __int8)insn_get_next_byte() + 1048320;
          }
          *(_QWORD *)(a2 + 56) = v68;
          *(_BYTE *)(a2 + 41) = 2;
          goto LABEL_102;
        }
        if ( (unsigned __int8)(v5 - 10) > 1u )
          goto LABEL_6;
        LOBYTE(v62) = v6 - 13;
        if ( (unsigned __int8)v62 > 2u )
          goto LABEL_6;
        v62 = (char)v62;
        v63 = byte_A828;
LABEL_159:
        v64 = v63[v62];
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v64;
        if ( (v7 & 1) == 0 )
        {
          v65 = insn_get_next_byte();
          v66 = v65 + 1048064;
          if ( v65 <= 0x1Fu )
            v66 = v65 + 1048320;
          v67 = v66;
          *(_BYTE *)(a2 + 81) = 2;
          v4 = *(_WORD *)(a2 + 24);
          *(_QWORD *)(a2 + 96) = v67;
          goto LABEL_6;
        }
LABEL_84:
        next_word = insn_get_next_word();
        *(_BYTE *)(a2 + 114) |= 1u;
        v4 = *(_WORD *)(a2 + 24);
        *(_BYTE *)(a2 + 81) = 2;
        *(_QWORD *)(a2 + 96) = (unsigned int)next_word + 983040;
        goto LABEL_6;
      }
      if ( (_BYTE)v5 == 2 )
        goto LABEL_84;
      if ( (_BYTE)v5 == 4 )
      {
LABEL_102:
        v43 = insn_get_next_word();
        *(_BYTE *)(a2 + 81) = 5;
        v4 = *(_WORD *)(a2 + 24);
        *(_QWORD *)(a2 + 88) = v43;
        goto LABEL_6;
      }
      if ( (_BYTE)v5 != 6 )
        goto LABEL_4;
LABEL_81:
      v35 = insn_get_next_byte();
      *(_BYTE *)(a2 + 81) = 2;
      v36 = (unsigned int)v35 + 1048064;
      v23 = v35 <= 0x1Fu;
      v37 = (unsigned int)v35 + 1048320;
      if ( !v23 )
        v37 = v36;
      v4 = *(_WORD *)(a2 + 24);
      *(_QWORD *)(a2 + 96) = v37;
LABEL_6:
      v10 = qword_E3F0;
      if ( !qword_E3F0 )
        goto LABEL_181;
      v11 = &dword_E3E8;
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v10 + 16);
          v13 = *(_QWORD *)(v10 + 24);
          if ( *(_WORD *)(v10 + 32) < v4 )
            break;
          v11 = (int *)v10;
          v10 = *(_QWORD *)(v10 + 16);
          if ( !v12 )
            goto LABEL_11;
        }
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( v13 );
LABEL_11:
      if ( v11 == &dword_E3E8 || v4 < *((_WORD *)v11 + 16) )
LABEL_181:
        std::__throw_out_of_range("map::at");
      v14 = *((_BYTE *)v11 + 34);
      v15 = v14;
      if ( v14 == 100 )
      {
        v15 = 9;
        v14 = 0;
      }
      *(_BYTE *)(a2 + 45) = v14;
      LOBYTE(v16) = 0;
      *(_BYTE *)(a2 + 85) = v15;
      if ( v4 )
        LOWORD(v16) = *(_WORD *)(a2 + 26);
      return v16;
    case 2u:
      if ( (unsigned __int8)(next_byte - 18) <= 5u )
      {
        *(_BYTE *)(a2 + 41) = 1;
        v26 = 8;
        *(_BYTE *)(a2 + 81) = 1;
        v27 = *((_DWORD *)qword_A860 + (((unsigned __int8)v5 >> 1) & 7));
        if ( (next_byte & 1) != 0 )
        {
          v26 = *((_DWORD *)qword_A860 + (((unsigned __int8)v5 >> 1) & 7));
          LOWORD(v27) = 8;
        }
        *(_WORD *)(a2 + 86) = v26;
        *(_WORD *)(a2 + 46) = v27;
        goto LABEL_6;
      }
      if ( (unsigned __int8)(next_byte - 48) <= 6u )
      {
        if ( (next_byte & 1) != 0 )
          goto LABEL_6;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = *((char *)qword_A860 + 4 * ((v5 >> 1) & 7));
        goto LABEL_102;
      }
      if ( (unsigned __int8)(v5 - 8) > 1u || (unsigned __int8)(v6 - 5) > 2u )
      {
        v47 = (next_byte & 8) != 0;
        if ( v6 == 10 && (next_byte & 8) != 0 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = 8;
          sub_3A00(a2, a2 + 80, next_byte);
          v4 = *(_WORD *)(a2 + 24);
          goto LABEL_6;
        }
        goto LABEL_165;
      }
      v53 = byte_A82B[(__int16)(v6 - 5)];
      if ( (next_byte & 1) == 0 )
      {
        *(_WORD *)(a2 + 46) = v53;
        *(_BYTE *)(a2 + 41) = 4;
        v54 = insn_get_next_word();
        *(_BYTE *)(a2 + 72) |= 1u;
        v4 = *(_WORD *)(a2 + 24);
        *(_WORD *)(a2 + 86) = 8;
        *(_QWORD *)(a2 + 56) = v54;
        *(_BYTE *)(a2 + 81) = 1;
        goto LABEL_6;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 8;
      *(_WORD *)(a2 + 86) = v53;
      goto LABEL_128;
    case 3u:
    case 0x10u:
      if ( (_BYTE)v5 == 15 )
        goto LABEL_18;
      if ( (_BYTE)v5 == 14 )
      {
        insn_get_next_word();
LABEL_19:
        v17 = extend_sign();
        *(_BYTE *)(a2 + 41) = 7;
        v4 = *(_WORD *)(a2 + 24);
        *(_QWORD *)(a2 + 56) = v17 + *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
        goto LABEL_6;
      }
      v18 = (unsigned __int8)v5 - 12;
      if ( v18 <= 2 )
      {
        v19 = *((_DWORD *)qword_A870 + v18);
        switch ( v19 )
        {
          case 1:
            insn_get_next_word();
            v51 = extend_sign();
            v4 = *(_WORD *)(a2 + 24);
            *(_QWORD *)(a2 + 56) = (unsigned int)(v51 + 983040);
            break;
          case 2:
            v48 = (unsigned __int8)insn_get_next_byte();
            v49 = insn_get_next_byte();
            v50 = insn_get_next_byte();
            v4 = *(_WORD *)(a2 + 24);
            *(_QWORD *)(a2 + 56) = (v48 | (v50 << 16) | (v49 << 8)) & 0xFFFFF;
            break;
          case 0:
            v20 = insn_get_next_word();
            v4 = *(_WORD *)(a2 + 24);
            *(_QWORD *)(a2 + 56) = v20;
            break;
        }
        *(_BYTE *)(a2 + 41) = 7;
        goto LABEL_6;
      }
      if ( under_debugger )
LABEL_182:
        BUG();
      interr();
      v16 = *(_QWORD *)(a2 + 8);
      if ( v16 == 0x70000000000LL )
        LOBYTE(v16) = *(_QWORD *)a2 > 0xE1380000000000uLL;
      else
        LOBYTE(v16) = v16 < 0x70000000000LL;
      return v16;
    case 4u:
    case 9u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = *((char *)qword_A860 + 4 * (next_byte & 1));
      goto LABEL_6;
    case 6u:
    case 0x48u:
      goto LABEL_6;
    case 8u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = *((char *)qword_A860 + 4 * ((next_byte >> 1) & 3));
      goto LABEL_6;
    case 0xAu:
    case 0x13u:
      v7 = next_byte & 1;
      if ( (next_byte & 1) == 0 )
      {
        if ( (_BYTE)v5 == 2 )
          goto LABEL_94;
        goto LABEL_36;
      }
      LOWORD(v33) = (unsigned __int8)v5 >> 1;
      if ( (unsigned __int16)v33 > 3u )
        goto LABEL_163;
      v33 = (unsigned __int16)v33;
LABEL_74:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = *((char *)qword_A860 + 4 * v33);
      goto LABEL_6;
    case 0xCu:
    case 0x15u:
    case 0x2Du:
    case 0x2Eu:
LABEL_18:
      insn_get_next_byte();
      goto LABEL_19;
    case 0xDu:
    case 0x3Du:
    case 0x3Fu:
      if ( (next_byte & 0xC) == 0 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = *((char *)qword_A840 + 4 * (next_byte & 0xF));
        goto LABEL_6;
      }
      if ( (next_byte & 1) == 0 )
        goto LABEL_36;
      goto LABEL_94;
    case 0xEu:
    case 0xFu:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
      if ( (_BYTE)v5 == 10 )
        goto LABEL_70;
      if ( (_BYTE)v5 )
        goto LABEL_23;
      goto LABEL_6;
    case 0x11u:
      LOBYTE(v5) = (unsigned __int8)v5 >> 1;
      v33 = (unsigned __int8)v5;
      if ( (unsigned __int8)v5 <= 3u )
        goto LABEL_74;
      goto LABEL_163;
    case 0x12u:
      if ( !(_BYTE)v5 )
      {
        v44 = insn_get_next_word();
        *(_BYTE *)(a2 + 74) |= 1u;
        *(_BYTE *)(a2 + 41) = 2;
        *(_QWORD *)(a2 + 56) = (unsigned int)v44 + 983040;
        goto LABEL_4;
      }
      if ( (_BYTE)v5 != 10 )
      {
LABEL_23:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 0;
        switch ( next_byte & 0xF )
        {
          case 0xB:
            goto LABEL_81;
          case 0xC:
            goto LABEL_4;
          case 0xD:
          case 0xE:
            *(_BYTE *)(a2 + 81) = 4;
            *(_WORD *)(a2 + 86) = 11;
            if ( (next_byte & 1) == 0 )
            {
              v34 = insn_get_next_byte();
              *(_BYTE *)(a2 + 112) |= 1u;
              v4 = *(_WORD *)(a2 + 24);
              *(_QWORD *)(a2 + 96) = v34;
            }
            break;
          case 0xF:
            goto LABEL_84;
          default:
            goto LABEL_6;
        }
        goto LABEL_6;
      }
LABEL_70:
      v30 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 2;
      v31 = (unsigned int)v30 + 1048064;
      v23 = v30 <= 0x1Fu;
      v32 = (unsigned int)v30 + 1048320;
      if ( !v23 )
        v32 = v31;
      *(_QWORD *)(a2 + 56) = v32;
      goto LABEL_4;
    case 0x14u:
    case 0x37u:
      if ( v6 > 9u )
      {
        if ( (_BYTE)v5 )
        {
LABEL_36:
          v21 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 2;
          v22 = (unsigned int)v21 + 1048064;
          v23 = v21 <= 0x1Fu;
          v24 = (unsigned int)v21 + 1048320;
          if ( !v23 )
            v24 = v22;
          v4 = *(_WORD *)(a2 + 24);
          *(_QWORD *)(a2 + 56) = v24;
        }
        else
        {
LABEL_94:
          v42 = insn_get_next_word();
          *(_BYTE *)(a2 + 74) |= 1u;
          v4 = *(_WORD *)(a2 + 24);
          *(_BYTE *)(a2 + 41) = 2;
          *(_QWORD *)(a2 + 56) = (unsigned int)v42 + 983040;
        }
      }
      else
      {
        v7 = next_byte & 8;
        if ( (next_byte & 8) != 0 )
          goto LABEL_164;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = *((char *)qword_A840 + 4 * (unsigned __int8)v5);
      }
      goto LABEL_6;
    case 0x23u:
      if ( (unsigned __int8)get_byte() == 0xFB )
      {
        byte = get_byte();
        if ( (unsigned __int8)byte <= 0xBu )
        {
          v46 = 2158;
          if ( _bittest64(&v46, byte) )
          {
            insn_get_next_byte();
            switch ( (unsigned __int8)insn_get_next_byte() )
            {
              case 1u:
                v4 = 74;
                goto LABEL_110;
              case 2u:
                v4 = 75;
                goto LABEL_110;
              case 3u:
                v4 = 76;
                goto LABEL_110;
              case 5u:
                v4 = 78;
                goto LABEL_110;
              case 6u:
                v4 = 79;
                goto LABEL_110;
              case 0xBu:
                goto LABEL_109;
              default:
                *(_WORD *)(a2 + 24) = 0;
                if ( under_debugger )
                  goto LABEL_182;
                interr();
LABEL_109:
                v4 = 77;
LABEL_110:
                *(_WORD *)(a2 + 24) = v4;
                break;
            }
            goto LABEL_6;
          }
        }
      }
      if ( next_byte == 9 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 0;
        *(_WORD *)(a2 + 86) = 2;
LABEL_128:
        *(_BYTE *)(a2 + 81) = 4;
        v52 = insn_get_next_word();
        *(_BYTE *)(a2 + 112) |= 1u;
        v4 = *(_WORD *)(a2 + 24);
        *(_QWORD *)(a2 + 96) = v52;
        goto LABEL_6;
      }
      if ( (unsigned __int8)(v6 - 1) > 3u || (unsigned __int8)(v5 - 8) > 1u )
      {
        if ( next_byte != 65 )
        {
          switch ( next_byte )
          {
            case 0x50u:
            case 0x51u:
            case 0x52u:
            case 0x53u:
            case 0x54u:
            case 0x55u:
            case 0x56u:
            case 0x57u:
              *(_WORD *)(a2 + 46) = *((char *)qword_A840 + 4 * (next_byte & 0xF));
              goto LABEL_92;
            case 0x58u:
            case 0x59u:
            case 0x5Au:
            case 0x5Bu:
            case 0x5Cu:
            case 0x5Du:
            case 0x5Eu:
            case 0x5Fu:
            case 0x68u:
            case 0x69u:
            case 0x6Au:
            case 0x6Bu:
            case 0x6Cu:
            case 0x6Du:
            case 0x6Eu:
            case 0x6Fu:
            case 0x78u:
            case 0x79u:
            case 0x7Au:
            case 0x7Bu:
            case 0x7Cu:
            case 0x7Du:
            case 0x7Eu:
            case 0x7Fu:
            case 0x80u:
            case 0x81u:
            case 0x82u:
            case 0x83u:
            case 0x84u:
            case 0x85u:
            case 0x86u:
            case 0x87u:
            case 0x90u:
            case 0x91u:
            case 0x92u:
            case 0x93u:
            case 0x94u:
            case 0x95u:
            case 0x96u:
            case 0x97u:
              goto LABEL_5;
            case 0x60u:
            case 0x61u:
            case 0x62u:
            case 0x63u:
            case 0x64u:
            case 0x65u:
            case 0x66u:
            case 0x67u:
            case 0x70u:
            case 0x71u:
            case 0x72u:
            case 0x73u:
            case 0x74u:
            case 0x75u:
            case 0x76u:
            case 0x77u:
              v40 = *((_DWORD *)qword_A840 + (next_byte & 0xF));
              if ( (next_byte & 0x10) != 0 )
              {
                *(_BYTE *)(a2 + 81) = 1;
                v41 = a2 + 40;
                *(_WORD *)(a2 + 86) = 0;
              }
              else
              {
                *(_BYTE *)(a2 + 41) = 1;
                v41 = a2 + 80;
                *(_WORD *)(a2 + 46) = 0;
              }
              *(_BYTE *)(v41 + 1) = 1;
              *(_WORD *)(v41 + 6) = (char)v40;
              v4 = *(_WORD *)(a2 + 24);
              goto LABEL_6;
            case 0x88u:
            case 0x89u:
            case 0x8Au:
            case 0x8Bu:
            case 0x8Cu:
            case 0x8Du:
            case 0x8Eu:
            case 0x8Fu:
            case 0x98u:
            case 0x99u:
            case 0x9Au:
            case 0x9Bu:
            case 0x9Cu:
            case 0x9Du:
            case 0x9Eu:
            case 0x9Fu:
              if ( (next_byte & 0x10) != 0 )
              {
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = 0;
                v39 = a2 + 40;
              }
              else
              {
                *(_BYTE *)(a2 + 41) = 1;
                v39 = a2 + 80;
                *(_WORD *)(a2 + 46) = 0;
              }
              sub_3A00(a2, v39, next_byte);
              v4 = *(_WORD *)(a2 + 24);
              goto LABEL_6;
            default:
              if ( (unsigned __int8)(next_byte + 56) <= 7u )
              {
                v61 = 245;
                if ( !_bittest64(&v61, (unsigned int)next_byte + 56) )
                  goto LABEL_5;
                sub_3A00(a2, a2 + 40, next_byte);
                goto LABEL_4;
              }
              LOBYTE(v62) = v6 - 13;
              if ( (unsigned __int8)v62 <= 2u && (unsigned __int8)(v5 - 8) <= 1u )
              {
                v62 = (char)v62;
                v63 = byte_A825;
                goto LABEL_159;
              }
              break;
          }
          goto LABEL_5;
        }
        *(_WORD *)(a2 + 46) = 18;
LABEL_92:
        *(_BYTE *)(a2 + 41) = 1;
LABEL_4:
        v9 = insn_get_next_byte();
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = v9;
LABEL_5:
        v4 = *(_WORD *)(a2 + 24);
        goto LABEL_6;
      }
      switch ( v6 )
      {
        case 3u:
          v58 = 9;
          if ( (next_byte & 1) == 0 )
            v58 = 3;
          *(_WORD *)(a2 + 46) = v58;
          *(_BYTE *)(a2 + 41) = 4;
          v59 = insn_get_next_word();
          *(_BYTE *)(a2 + 72) |= 1u;
          *(_QWORD *)(a2 + 56) = v59;
          goto LABEL_4;
        case 4u:
          if ( (next_byte & 1) == 0 )
          {
            *(_WORD *)(a2 + 46) = 9;
            goto LABEL_143;
          }
          *(_WORD *)(a2 + 86) = 9;
          break;
        case 2u:
          if ( (next_byte & 1) == 0 )
          {
            *(_WORD *)(a2 + 46) = 3;
LABEL_143:
            *(_BYTE *)(a2 + 41) = 4;
            v56 = insn_get_next_word();
            *(_BYTE *)(a2 + 72) |= 1u;
            *(_QWORD *)(a2 + 56) = v56;
            v57 = a2 + 80;
LABEL_144:
            *(_BYTE *)(v57 + 1) = 1;
            *(_WORD *)(v57 + 6) = 0;
            v4 = *(_WORD *)(a2 + 24);
            goto LABEL_6;
          }
          *(_WORD *)(a2 + 86) = 3;
          break;
        default:
          *(_WORD *)(a2 + 46) = 2;
          *(_BYTE *)(a2 + 41) = 4;
          v55 = insn_get_next_word();
          *(_BYTE *)(a2 + 72) |= 1u;
          *(_QWORD *)(a2 + 56) = v55;
          if ( (next_byte & 1) != 0 )
            goto LABEL_4;
          *(_WORD *)(a2 + 86) = 0;
          v4 = *(_WORD *)(a2 + 24);
          *(_BYTE *)(a2 + 81) = 1;
          goto LABEL_6;
      }
      *(_BYTE *)(a2 + 81) = 4;
      v60 = insn_get_next_word();
      *(_BYTE *)(a2 + 112) |= 1u;
      *(_QWORD *)(a2 + 96) = v60;
      v57 = a2 + 40;
      goto LABEL_144;
    case 0x36u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 0;
      *(_WORD *)(a2 + 86) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      goto LABEL_6;
    case 0x39u:
      v6 = 8;
      LOBYTE(v5) = (unsigned __int8)v5 >> 1;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 8;
      v25 = (unsigned __int8)v5;
      if ( (unsigned __int8)v5 <= 3u )
        goto LABEL_44;
      goto LABEL_163;
    case 0x3Eu:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 1;
      goto LABEL_6;
    case 0x51u:
      sub_3CE0(a1, a2);
      v4 = *(_WORD *)(a2 + 24);
      goto LABEL_6;
    case 0x52u:
      sub_4140(a1, a2);
      v4 = *(_WORD *)(a2 + 24);
      goto LABEL_6;
    case 0x53u:
      sub_4490(a1, a2);
      v4 = *(_WORD *)(a2 + 24);
      goto LABEL_6;
    case 0x54u:
      sub_4660(a1);
      v28 = *(_BYTE *)(a2 + 41);
      if ( (unsigned __int8)(v28 - 2) <= 2u || v28 == 7 )
      {
        *(_BYTE *)(a2 + 72) |= 8u;
        if ( (*(_BYTE *)(a2 + 74) & 1) == 0 )
          goto LABEL_5;
        *(_QWORD *)(a2 + 56) = (unsigned __int16)*(_QWORD *)(a2 + 56);
        v4 = *(_WORD *)(a2 + 24);
      }
      else
      {
        v29 = *(_BYTE *)(a2 + 81);
        if ( (unsigned __int8)(v29 - 2) > 2u && v29 != 7 )
          goto LABEL_5;
        *(_BYTE *)(a2 + 112) |= 8u;
        v4 = *(_WORD *)(a2 + 24);
        if ( (*(_BYTE *)(a2 + 114) & 1) != 0 )
          *(_QWORD *)(a2 + 96) = (unsigned __int16)*(_QWORD *)(a2 + 96);
      }
      goto LABEL_6;
    default:
      v4 = 0;
      *(_WORD *)(a2 + 24) = 0;
      goto LABEL_6;
  }
}

