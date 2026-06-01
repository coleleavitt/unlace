__int64 __fastcall sub_23F0(__int64 a1)
{
  unsigned __int16 next_byte; // r12
  char v2; // bp
  unsigned __int8 v3; // al
  __int16 v4; // dx
  __int16 v5; // cx
  __int16 v6; // si
  char v7; // al
  __int64 result; // rax
  __int16 v9; // r13
  char v10; // bp
  __int64 v11; // r12
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  __int16 v16; // r13
  __int16 v17; // r12
  __int16 v18; // dx
  __int64 v19; // rax
  unsigned __int8 v20; // al
  unsigned __int8 v21; // dl
  __int16 v22; // r12
  __int16 v23; // r13
  __int16 v24; // bp
  __int16 v25; // ax
  __int16 v26; // dx
  __int64 v27; // rax
  __int16 v28; // r12
  unsigned __int8 v29; // al
  char v30; // al
  unsigned __int8 v31; // al
  unsigned __int16 v32; // r12
  unsigned __int8 v33; // r13
  char v34; // al
  __int16 v35; // cx
  __m128i si128; // xmm3
  bool v37; // bp
  unsigned __int8 v38; // al
  __int64 v39; // r12
  unsigned __int16 v40; // ax
  unsigned __int8 v41; // al
  unsigned __int8 v42; // al
  unsigned __int8 v43; // al
  unsigned __int8 v44; // al
  unsigned __int8 v45; // al
  unsigned __int16 v46; // ax
  unsigned __int8 v47; // al
  unsigned __int8 v48; // al
  unsigned __int8 v49; // al
  unsigned __int16 next_word; // ax
  unsigned __int8 v51; // al
  unsigned __int8 v52; // al
  unsigned __int8 v53; // al
  unsigned __int16 v54; // bp
  char v55; // al
  __int64 v56; // rdx
  unsigned __int8 v57; // al
  char v58; // dl
  unsigned int v59; // eax
  unsigned __int8 v60; // al
  unsigned __int16 v61; // bp
  unsigned __int8 v62; // al
  unsigned __int8 v63; // al
  unsigned __int8 v64; // al
  unsigned __int8 v65; // al
  unsigned __int8 v66; // al
  unsigned __int8 v67; // al
  __int64 v68; // rbp
  char v69; // al
  __int64 v70; // rbp
  unsigned __int8 v71; // al
  unsigned __int8 v72; // al
  __int16 v73; // r13
  bool v74; // al
  unsigned __int8 v75; // al
  char v76; // al
  __int16 v77; // cx
  __int16 v78; // r12
  __int16 v79; // bp
  __int16 v80; // ax
  __int16 v81; // r12
  __int16 v82; // bp
  __int16 v83; // ax
  char v84; // al
  __int16 v85; // bp
  __int16 v86; // ax
  __int16 v87; // bp
  unsigned __int8 v88; // al
  unsigned __int8 v89; // al
  char v90; // al
  unsigned __int16 v91; // bp
  unsigned __int8 v92; // al
  char v93; // r12
  __int16 v94; // dx
  __int64 v95; // rbp
  __int16 v96; // bp
  __int16 v97; // ax
  __int16 v98; // bp
  __int16 v99; // bp
  __int16 v100; // ax
  __int16 v101; // bp
  __int16 v102; // ax
  unsigned __int8 v103; // al
  __int16 v104; // bp
  unsigned __int8 v105; // al
  unsigned __int8 v106; // al
  unsigned __int8 v107; // al
  __m128i v108[3]; // [rsp+0h] [rbp-38h] BYREF

  next_byte = (unsigned __int8)insn_get_next_byte();
  v2 = next_byte;
  switch ( (char)next_byte )
  {
    case 23:
      v61 = (unsigned __int8)insn_get_next_byte();
      v62 = insn_get_next_byte();
      if ( (v61 & 1) != 0 )
        return 0;
      *(_BYTE *)(a1 + 41) = 1;
      v6 = 5;
      *(_WORD *)(a1 + 46) = v61 >> 4;
      *(_WORD *)(a1 + 72) = 1;
      *(_BYTE *)(a1 + 81) = 11;
      *(_WORD *)(a1 + 86) = v62;
      *(_BYTE *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 104) = (v61 >> 1) & 7;
      return sub_2340(a1, v6);
    case 48:
      v60 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 46) = 0;
      v6 = 33;
      *(_WORD *)(a1 + 64) = v60;
      *(_WORD *)(a1 + 72) = 256;
      return sub_2340(a1, v6);
    case 49:
      v57 = insn_get_next_byte();
      v58 = v57 & 3;
      if ( (v57 & 3) == 2 )
      {
        *(_BYTE *)(a1 + 45) = 0;
        v6 = 70;
        *(_QWORD *)(a1 + 48) = v57 & 0xF8;
        *(_WORD *)(a1 + 41) = 261;
      }
      else
      {
        if ( v58 == 3 )
          return 0;
        if ( v58 == 1 )
        {
          v59 = v57 & 0xF8;
          *(_BYTE *)(a1 + 45) = 0;
          v6 = 71;
        }
        else
        {
          v59 = v57 & 0xF0;
          *(_BYTE *)(a1 + 45) = 0;
          v6 = 69;
        }
        *(_QWORD *)(a1 + 48) = v59;
        *(_WORD *)(a1 + 41) = 261;
      }
      return sub_2340(a1, v6);
    case 55:
      v54 = (unsigned __int8)insn_get_next_byte();
      v55 = insn_get_next_byte();
      v56 = *(_QWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 81) = 11;
      *(_BYTE *)(a1 + 112) = 1;
      v6 = 10;
      *(_WORD *)(a1 + 41) = 519;
      *(_QWORD *)(a1 + 56) = v56 + v55 + 3;
      *(_WORD *)(a1 + 86) = v54 >> 4;
      *(_QWORD *)(a1 + 104) = (v54 >> 1) & 7;
      if ( (v54 & 1) != 0 )
        v6 = 11;
      return sub_2340(a1, v6);
    case 87:
      v64 = insn_get_next_byte();
      if ( (v64 & 1) != 0 )
        return 0;
      *(_BYTE *)(a1 + 41) = 11;
      v6 = 6;
      *(_BYTE *)(a1 + 72) = 1;
      *(_WORD *)(a1 + 46) = v64 >> 4;
      *(_QWORD *)(a1 + 64) = (v64 >> 1) & 7;
      return sub_2340(a1, v6);
    case 119:
      v63 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 11;
      v6 = 7;
      *(_BYTE *)(a1 + 72) = 1;
      *(_WORD *)(a1 + 46) = v63 >> 4;
      *(_QWORD *)(a1 + 64) = (v63 >> 1) & 7;
      if ( (v63 & 1) != 0 )
        v6 = 8;
      return sub_2340(a1, v6);
    case -126:
    case -125:
    case -110:
    case -109:
      if ( (_BYTE)next_byte == 0x92 )
      {
        v87 = 53;
      }
      else
      {
        if ( (_BYTE)next_byte != 0x93 )
        {
          v13 = insn_get_next_byte();
          *(_BYTE *)(a1 + 41) = 3;
          *(_WORD *)(a1 + 46) = 0;
          *(_WORD *)(a1 + 64) = v13;
          *(_WORD *)(a1 + 72) = 0;
          v14 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 112) = 0;
          v6 = ((_BYTE)next_byte != 0x82) + 56;
          *(_WORD *)(a1 + 86) = v14;
          return sub_2340(a1, v6);
        }
        v87 = 54;
      }
      v88 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 3;
      *(_WORD *)(a1 + 86) = 0;
      *(_WORD *)(a1 + 104) = v88;
      *(_WORD *)(a1 + 112) = 0;
      v89 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 1;
      v6 = v87;
      *(_WORD *)(a1 + 46) = v89;
      *(_WORD *)(a1 + 72) = 0;
      return sub_2340(a1, v6);
    case -124:
    case -123:
    case -122:
    case -108:
    case -107:
    case -106:
      v9 = 24;
      if ( next_byte >> 4 != 9 )
        v9 = 48;
      v10 = next_byte & 0xF;
      v11 = (unsigned __int8)insn_get_next_byte();
      v12 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = v12;
      *(_WORD *)(a1 + 72) = 256;
      if ( v10 == 5 )
      {
        *(_BYTE *)(a1 + 81) = 3;
        *(_WORD *)(a1 + 86) = 0;
        *(_WORD *)(a1 + 104) = v11;
        *(_WORD *)(a1 + 112) = 0;
      }
      else if ( v10 == 6 )
      {
        *(_QWORD *)(a1 + 88) = v11;
        *(_BYTE *)(a1 + 85) = 0;
        *(_WORD *)(a1 + 81) = 261;
      }
      else
      {
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = v11;
        *(_WORD *)(a1 + 112) = 0;
      }
      v6 = v9;
      return sub_2340(a1, v6);
    case -121:
    case -105:
      v31 = insn_get_next_byte();
      v32 = v31;
      v33 = v31;
      if ( v2 == -121 )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = v31 >> 4;
        *(_WORD *)(a1 + 72) = 1;
        v76 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 3;
        *(_WORD *)(a1 + 86) = 1;
        LOBYTE(v77) = v76;
        HIBYTE(v77) = v33 & 0xF;
        v108[0].m128i_i16[0] = v77;
        *(_DWORD *)(a1 + 104) = _mm_cvtsi128_si32(_mm_unpacklo_epi8(_mm_load_si128(v108), (__m128i)0LL));
      }
      else
      {
        v34 = insn_get_next_byte();
        *(_BYTE *)(a1 + 41) = 3;
        LOBYTE(v35) = v34;
        *(_WORD *)(a1 + 46) = 1;
        *(_BYTE *)(a1 + 81) = 1;
        HIBYTE(v35) = v32 & 0xF;
        *(_WORD *)(a1 + 86) = v32 >> 4;
        v108[0].m128i_i16[0] = v35;
        si128 = _mm_load_si128(v108);
        *(_WORD *)(a1 + 112) = 1;
        *(_DWORD *)(a1 + 64) = _mm_cvtsi128_si32(_mm_unpacklo_epi8(si128, (__m128i)0LL));
      }
      goto LABEL_34;
    case -89:
    case -73:
      v20 = insn_get_next_byte();
      v21 = v20 & 0xF;
      if ( (v20 & 0xF) == 0 )
      {
        if ( (_BYTE)next_byte == 0xA7 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 72) = 1;
          *(_WORD *)(a1 + 46) = v20 >> 4;
          v96 = (unsigned __int8)insn_get_next_byte();
          v97 = insn_get_next_byte();
          *(_WORD *)(a1 + 81) = 514;
          *(_QWORD *)(a1 + 96) = (unsigned __int16)(v96 | (v97 << 8));
        }
        else
        {
          v81 = v20 >> 4;
          v82 = (unsigned __int8)insn_get_next_byte();
          v83 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 41) = 514;
          *(_WORD *)(a1 + 86) = v81;
          *(_WORD *)(a1 + 112) = 1;
          *(_QWORD *)(a1 + 56) = (unsigned __int16)(v82 | (v83 << 8));
        }
        goto LABEL_100;
      }
      if ( v21 == 1 )
      {
        if ( (_BYTE)next_byte == 0xA7 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = v20 >> 4;
          *(_WORD *)(a1 + 72) = 1;
          v98 = (unsigned __int8)insn_get_next_byte();
          *(_QWORD *)(a1 + 96) = (unsigned __int16)(v98 | ((unsigned __int16)insn_get_next_byte() << 8));
          *(_WORD *)(a1 + 81) = 522;
        }
        else
        {
          v78 = v20 >> 4;
          v79 = (unsigned __int8)insn_get_next_byte();
          v80 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = v78;
          *(_QWORD *)(a1 + 56) = (unsigned __int16)(v79 | (v80 << 8));
          *(_WORD *)(a1 + 41) = 522;
          *(_WORD *)(a1 + 112) = 1;
        }
        goto LABEL_97;
      }
      v22 = v21;
      v23 = v20 >> 4;
      if ( (v20 & 1) != 0 )
      {
        v22 = v21 - 1;
        if ( v2 != -89 )
        {
          v24 = (unsigned __int8)insn_get_next_byte();
          v25 = insn_get_next_byte();
          v26 = 2;
          v6 = 38;
          v27 = (unsigned __int16)(v24 | (v25 << 8));
LABEL_28:
          *(_WORD *)(a1 + 46) = v26;
          *(_QWORD *)(a1 + 56) = v27;
          *(_WORD *)(a1 + 66) = v22;
          *(_BYTE *)(a1 + 45) = 1;
          *(_WORD *)(a1 + 41) = 516;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = v23;
          *(_WORD *)(a1 + 112) = 1;
          return sub_2340(a1, v6);
        }
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 72) = 1;
        *(_WORD *)(a1 + 46) = v23;
        v99 = (unsigned __int8)insn_get_next_byte();
        v100 = insn_get_next_byte();
        *(_WORD *)(a1 + 106) = v22;
        *(_WORD *)(a1 + 86) = 2;
        *(_BYTE *)(a1 + 85) = 1;
        *(_WORD *)(a1 + 81) = 516;
        *(_QWORD *)(a1 + 96) = (unsigned __int16)(v99 | (v100 << 8));
        goto LABEL_97;
      }
      if ( v2 != -89 )
      {
        v85 = (unsigned __int8)insn_get_next_byte();
        v86 = insn_get_next_byte();
        v26 = 3;
        v6 = 37;
        v27 = (unsigned __int16)(v85 | (v86 << 8));
        goto LABEL_28;
      }
      *(_WORD *)(a1 + 46) = v23;
      *(_WORD *)(a1 + 72) = 1;
      *(_BYTE *)(a1 + 41) = 1;
      v101 = (unsigned __int8)insn_get_next_byte();
      v102 = insn_get_next_byte();
      *(_WORD *)(a1 + 86) = 3;
      *(_WORD *)(a1 + 106) = v22;
      *(_BYTE *)(a1 + 85) = 1;
      *(_QWORD *)(a1 + 96) = (unsigned __int16)(v101 | (v102 << 8));
      *(_WORD *)(a1 + 81) = 516;
      goto LABEL_100;
    case -62:
    case -46:
      v37 = (_BYTE)next_byte != 0xC2;
      v38 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 1;
      *(_BYTE *)(a1 + 81) = 3;
      v39 = *(_QWORD *)(a1 + 16);
      *(_WORD *)(a1 + 86) = 0;
      *(_WORD *)(a1 + 46) = v38 & 0xF;
      *(_WORD *)(a1 + 104) = v38 >> 4;
      *(_WORD *)(a1 + 72) = 1;
      *(_WORD *)(a1 + 112) = 1;
      v6 = v37 + 18;
      *(_QWORD *)(a1 + 136) = v39 + (char)insn_get_next_byte() + 3;
      *(_WORD *)(a1 + 121) = 519;
      return sub_2340(a1, v6);
    case -61:
    case -45:
    case -30:
    case -29:
    case -14:
    case -13:
      v3 = insn_get_next_byte();
      v4 = v3 >> 4;
      v5 = v3 & 0xF;
      if ( (v3 & 1) != 0 )
      {
        --v5;
        v6 = *((unsigned __int8 *)qword_5440 + (unsigned __int8)(next_byte + 61));
LABEL_6:
        if ( (next_byte & 0x10) != 0 )
        {
LABEL_7:
          *(_BYTE *)(a1 + 41) = 3;
          v7 = 0;
          *(_WORD *)(a1 + 46) = 0;
          *(_WORD *)(a1 + 64) = v5;
          *(_WORD *)(a1 + 72) = 257;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = v4;
          goto LABEL_8;
        }
      }
      else
      {
        if ( (_BYTE)next_byte != 0xC3 )
        {
          switch ( (char)next_byte )
          {
            case -45:
              v6 = 37;
              goto LABEL_7;
            case -30:
              v6 = 39;
              goto LABEL_77;
            case -29:
              v6 = 41;
              goto LABEL_77;
            case -14:
              v6 = 43;
              goto LABEL_7;
            case -13:
              v6 = 45;
              goto LABEL_7;
            default:
              v6 = 0;
              goto LABEL_6;
          }
        }
        v6 = 37;
      }
LABEL_77:
      *(_BYTE *)(a1 + 41) = 1;
      v7 = 1;
      *(_WORD *)(a1 + 46) = v4;
      *(_WORD *)(a1 + 72) = 1;
      *(_BYTE *)(a1 + 81) = 3;
      *(_WORD *)(a1 + 86) = 0;
      *(_WORD *)(a1 + 104) = v5;
LABEL_8:
      *(_BYTE *)(a1 + 112) = 1;
      *(_BYTE *)(a1 + 113) = v7;
      return sub_2340(a1, v6);
    case -60:
    case -59:
      v28 = (unsigned __int8)insn_get_next_byte();
      v29 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 72) = 256;
      *(_WORD *)(a1 + 46) = v29;
      if ( v2 == -59 )
      {
        *(_BYTE *)(a1 + 81) = 3;
        v30 = 0;
        *(_WORD *)(a1 + 86) = 0;
        *(_WORD *)(a1 + 104) = v28;
      }
      else
      {
        *(_BYTE *)(a1 + 81) = 1;
        v30 = 1;
        *(_WORD *)(a1 + 86) = v28;
      }
      *(_BYTE *)(a1 + 112) = 0;
      v6 = 47;
      *(_BYTE *)(a1 + 113) = v30;
      return sub_2340(a1, v6);
    case -58:
      v49 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 72) = 256;
      *(_WORD *)(a1 + 46) = v49;
      next_word = insn_get_next_word();
      *(_BYTE *)(a1 + 85) = 1;
      v6 = 47;
      *(_WORD *)(a1 + 81) = 517;
      *(_QWORD *)(a1 + 88) = next_word;
      return sub_2340(a1, v6);
    case -57:
      v53 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 1;
      v6 = 35;
      *(_BYTE *)(a1 + 81) = 3;
      *(_WORD *)(a1 + 86) = 0;
      *(_WORD *)(a1 + 46) = v53 >> 4;
      *(_WORD *)(a1 + 104) = v53 & 0xF;
      *(_WORD *)(a1 + 72) = 1;
      *(_WORD *)(a1 + 112) = 1;
      return sub_2340(a1, v6);
    case -44:
      v52 = insn_get_next_byte();
      if ( (v52 & 1) != 0 )
        return 0;
      *(_WORD *)(a1 + 41) = 265;
      v6 = 13;
      *(_QWORD *)(a1 + 56) = v52;
      return sub_2340(a1, v6);
    case -43:
      return 0;
    case -42:
      v41 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 46) = 0;
      *(_WORD *)(a1 + 64) = v41;
      goto LABEL_39;
    case -41:
      v66 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 3;
      v6 = 35;
      *(_WORD *)(a1 + 46) = 0;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 64) = v66 >> 4;
      *(_WORD *)(a1 + 86) = v66 & 0xF;
      *(_WORD *)(a1 + 72) = 1;
      *(_WORD *)(a1 + 112) = 1;
      return sub_2340(a1, v6);
    case -28:
      v65 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = v65;
      goto LABEL_42;
    case -27:
      v44 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 3;
      *(_WORD *)(a1 + 86) = 0;
      *(_WORD *)(a1 + 104) = v44;
LABEL_42:
      *(_WORD *)(a1 + 112) = 0;
      v45 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 72) = 0;
      *(_WORD *)(a1 + 46) = v45;
LABEL_34:
      v6 = 35;
      return sub_2340(a1, v6);
    case -26:
      v43 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = v43;
LABEL_39:
      *(_WORD *)(a1 + 72) = 0;
      v42 = insn_get_next_byte();
      *(_BYTE *)(a1 + 85) = 0;
      v6 = 35;
      *(_WORD *)(a1 + 81) = 517;
      *(_QWORD *)(a1 + 88) = v42;
      return sub_2340(a1, v6);
    case -25:
    case -9:
      v15 = insn_get_next_byte();
      v16 = v15 & 0xF;
      v17 = v15 >> 4;
      if ( (v15 & 1) != 0 )
      {
        --v16;
        if ( v2 != -25 )
        {
          LOBYTE(v19) = insn_get_next_byte();
          v6 = 38;
          v18 = 2;
          v19 = (char)v19;
LABEL_22:
          *(_WORD *)(a1 + 46) = v18;
          *(_QWORD *)(a1 + 56) = v19;
          *(_WORD *)(a1 + 66) = v16;
          *(_BYTE *)(a1 + 45) = 1;
          *(_WORD *)(a1 + 41) = 516;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = v17;
          *(_WORD *)(a1 + 112) = 1;
          return sub_2340(a1, v6);
        }
        *(_WORD *)(a1 + 46) = v15 >> 4;
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 72) = 1;
        v84 = insn_get_next_byte();
        *(_WORD *)(a1 + 106) = v16;
        *(_WORD *)(a1 + 86) = 2;
        *(_QWORD *)(a1 + 96) = v84;
        *(_BYTE *)(a1 + 85) = 1;
        *(_WORD *)(a1 + 81) = 516;
LABEL_97:
        v6 = 38;
      }
      else
      {
        if ( v2 != -25 )
        {
          LOBYTE(v19) = insn_get_next_byte();
          v6 = 37;
          v18 = 3;
          v19 = (char)v19;
          goto LABEL_22;
        }
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = v17;
        *(_WORD *)(a1 + 72) = 1;
        v90 = insn_get_next_byte();
        *(_WORD *)(a1 + 106) = v16;
        *(_WORD *)(a1 + 86) = 3;
        *(_QWORD *)(a1 + 96) = v90;
        *(_BYTE *)(a1 + 85) = 1;
        *(_WORD *)(a1 + 81) = 516;
LABEL_100:
        v6 = 37;
      }
      return sub_2340(a1, v6);
    case -12:
      v51 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 46) = 0;
      v6 = 13;
      *(_WORD *)(a1 + 64) = v51;
      *(_WORD *)(a1 + 72) = 256;
      return sub_2340(a1, v6);
    case -11:
      v47 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 112) = 0;
      *(_WORD *)(a1 + 86) = v47;
      v48 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 46) = 0;
      v6 = 35;
      *(_WORD *)(a1 + 64) = v48;
      *(_WORD *)(a1 + 72) = 0;
      return sub_2340(a1, v6);
    case -10:
      v46 = insn_get_next_word();
      *(_WORD *)(a1 + 41) = 263;
      v6 = 13;
      *(_QWORD *)(a1 + 56) = v46;
      return sub_2340(a1, v6);
    default:
      if ( (next_byte & 0xF) == 7 )
      {
        v73 = next_byte >> 4;
        if ( next_byte >> 7 )
        {
          if ( (next_byte & 0xE) != 0 )
            return 0;
LABEL_89:
          v75 = insn_get_next_byte();
          if ( (next_byte & 1) != 0 )
          {
            *(_BYTE *)(a1 + 41) = 3;
            *(_WORD *)(a1 + 46) = 0;
            *(_WORD *)(a1 + 64) = v75;
            v74 = 0;
          }
          else
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = v75;
            v74 = (next_byte & 0xFFD0) == 128;
          }
          *(_BYTE *)(a1 + 73) = v74;
          *(_BYTE *)(a1 + 72) = 0;
          v6 = *((_WORD *)qword_54A0 + (v73 & 0xF));
        }
        else
        {
          v91 = (unsigned __int8)insn_get_next_byte();
          v92 = insn_get_next_byte();
          v93 = v91;
          v94 = v91 >> 4;
          v95 = (v91 >> 1) & 7;
          if ( (v93 & 1) != 0 )
          {
            *(_BYTE *)(a1 + 41) = 11;
            *(_WORD *)(a1 + 46) = v92;
            *(_BYTE *)(a1 + 72) = 0;
            *(_QWORD *)(a1 + 64) = v95;
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 86) = v94;
            *(_WORD *)(a1 + 112) = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = v94;
            *(_WORD *)(a1 + 72) = 1;
            *(_BYTE *)(a1 + 81) = 11;
            *(_WORD *)(a1 + 86) = v92;
            *(_BYTE *)(a1 + 112) = 0;
            *(_QWORD *)(a1 + 104) = v95;
          }
          v6 = *((_WORD *)qword_54E0 + (v73 & 0xF));
        }
      }
      else
      {
        switch ( next_byte & 0xF )
        {
          case 8:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = next_byte >> 4;
            *(_WORD *)(a1 + 72) = 1;
            v72 = insn_get_next_byte();
            *(_BYTE *)(a1 + 81) = 1;
            v6 = 35;
            *(_WORD *)(a1 + 112) = 0;
            *(_WORD *)(a1 + 86) = v72;
            return sub_2340(a1, v6);
          case 9:
            v71 = insn_get_next_byte();
            *(_BYTE *)(a1 + 41) = 1;
            v6 = 35;
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 46) = v71;
            *(_WORD *)(a1 + 72) = 0;
            *(_WORD *)(a1 + 86) = next_byte >> 4;
            *(_WORD *)(a1 + 112) = 1;
            return sub_2340(a1, v6);
          case 0xA:
            *(_BYTE *)(a1 + 41) = 1;
            v70 = *(_QWORD *)(a1 + 16);
            *(_WORD *)(a1 + 72) = 1;
            *(_WORD *)(a1 + 46) = next_byte >> 4;
            v6 = 25;
            *(_QWORD *)(a1 + 96) = v70 + (char)insn_get_next_byte() + 2;
            *(_WORD *)(a1 + 81) = 263;
            return sub_2340(a1, v6);
          case 0xB:
            v68 = *(_QWORD *)(a1 + 16);
            v69 = insn_get_next_byte();
            *(_WORD *)(a1 + 41) = 263;
            *(_QWORD *)(a1 + 56) = v68 + v69 + 2;
            if ( !(unsigned int)sub_2340(a1, 34) )
              return 0;
            goto LABEL_68;
          case 0xC:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = next_byte >> 4;
            *(_WORD *)(a1 + 72) = 1;
            v67 = insn_get_next_byte();
            *(_BYTE *)(a1 + 85) = 0;
            *(_WORD *)(a1 + 81) = 261;
            *(_QWORD *)(a1 + 88) = v67;
            goto LABEL_34;
          case 0xD:
            v40 = insn_get_next_word();
            *(_WORD *)(a1 + 41) = 263;
            *(_QWORD *)(a1 + 56) = v40;
            if ( !(unsigned int)sub_2340(a1, 33) )
              return 0;
LABEL_68:
            result = *(unsigned __int16 *)(a1 + 26);
            *(_BYTE *)(a1 + 28) = next_byte >> 4;
            return result;
          case 0xE:
            *(_BYTE *)(a1 + 41) = 1;
            v6 = 30;
            *(_WORD *)(a1 + 46) = next_byte >> 4;
            *(_WORD *)(a1 + 72) = 1;
            return sub_2340(a1, v6);
          case 0xF:
            v6 = *((_WORD *)qword_54C0 + ((next_byte >> 4) & 0xF));
            return sub_2340(a1, v6);
          default:
            if ( (next_byte & 0xE) == 0 )
            {
              v73 = next_byte >> 4;
              goto LABEL_89;
            }
            v103 = insn_get_next_byte();
            v104 = v103;
            switch ( next_byte & 0xF )
            {
              case 2:
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = v103 >> 4;
                *(_WORD *)(a1 + 72) = 1;
                *(_BYTE *)(a1 + 81) = 1;
                *(_WORD *)(a1 + 86) = v103 & 0xF;
                *(_WORD *)(a1 + 112) = 1;
                break;
              case 3:
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = v103 >> 4;
                *(_WORD *)(a1 + 72) = 1;
                *(_BYTE *)(a1 + 81) = 3;
                *(_WORD *)(a1 + 86) = 0;
                *(_WORD *)(a1 + 104) = v103 & 0xF;
                *(_WORD *)(a1 + 112) = 1;
                break;
              case 4:
                v106 = insn_get_next_byte();
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 72) = 0;
                *(_WORD *)(a1 + 46) = v106;
                *(_BYTE *)(a1 + 81) = 1;
                *(_WORD *)(a1 + 86) = v104;
                *(_WORD *)(a1 + 112) = 0;
                break;
              case 5:
                v105 = insn_get_next_byte();
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 72) = 0;
                *(_WORD *)(a1 + 46) = v105;
                *(_BYTE *)(a1 + 81) = 3;
                *(_WORD *)(a1 + 86) = 0;
                *(_WORD *)(a1 + 104) = v104;
                *(_WORD *)(a1 + 112) = 0;
                break;
              case 6:
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = v103;
                *(_WORD *)(a1 + 72) = 0;
                v107 = insn_get_next_byte();
                *(_BYTE *)(a1 + 85) = 0;
                *(_WORD *)(a1 + 81) = 261;
                *(_QWORD *)(a1 + 88) = v107;
                break;
              default:
                return 0;
            }
            v6 = *((_WORD *)qword_5480 + ((next_byte >> 4) & 0xF));
            break;
        }
      }
      return sub_2340(a1, v6);
  }
}

