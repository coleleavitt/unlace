__int64 __fastcall sub_36A0(__int64 a1)
{
  unsigned __int8 next_byte; // al
  int byte; // r12d
  int v4; // ebp
  unsigned __int8 v5; // al
  int v6; // ebp
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  int v9; // edx
  bool v10; // cc
  int v11; // eax
  unsigned __int8 v12; // al
  int v13; // ebp
  unsigned __int8 v14; // al
  int v15; // ebp
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  int v18; // edx
  int v19; // eax
  unsigned __int8 v20; // al
  int v21; // edx
  unsigned __int8 v22; // al
  int v23; // edx
  int v24; // eax
  unsigned __int8 v25; // al
  int v26; // edx
  unsigned __int8 v27; // al
  int v28; // ebp
  unsigned __int8 v29; // al
  unsigned __int8 v30; // al
  int v31; // edx
  int v32; // eax
  unsigned __int8 v33; // al
  int v34; // edx
  unsigned __int8 v35; // al
  int v36; // ebp
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // edx
  int v40; // eax
  unsigned __int8 v41; // al
  int v42; // edx
  int v43; // eax
  unsigned __int8 v44; // al
  int v45; // edx
  int v46; // eax
  int v47; // ebp
  unsigned __int8 v48; // al
  int v49; // edx
  int v50; // eax
  int v51; // ebp
  unsigned __int8 v52; // al
  unsigned __int8 v53; // al
  int v54; // edx
  int v55; // eax
  int v56; // ebp
  unsigned __int8 v57; // al
  unsigned __int8 v58; // al
  int v59; // edx
  unsigned __int8 v60; // al
  int v61; // edx
  int v62; // eax
  unsigned __int8 v63; // al
  unsigned __int8 v64; // al
  int v65; // ebp
  unsigned __int8 v66; // al
  unsigned __int8 v67; // al
  int v68; // edx
  int v69; // eax
  unsigned __int8 v70; // al
  int v71; // edx
  unsigned __int8 v72; // al
  int v73; // ebp
  unsigned __int8 v74; // al
  unsigned __int8 v75; // al
  int v76; // edx
  int v77; // eax
  int v78; // ebp
  unsigned __int8 v79; // al
  unsigned __int8 v80; // al
  int v81; // ebp
  unsigned __int8 v82; // al
  unsigned __int8 v83; // al
  int v84; // edx
  int v85; // eax
  unsigned __int8 v86; // al
  int v87; // edx
  unsigned __int8 v88; // al
  int v89; // ebp
  unsigned __int8 v90; // al
  unsigned __int8 v91; // al
  unsigned __int8 v92; // al
  int v93; // edx
  int v94; // eax
  int v95; // ebp
  unsigned __int8 v96; // al
  int v97; // edx
  int v98; // eax
  unsigned __int8 v99; // al
  unsigned __int8 v100; // bp
  unsigned __int8 v101; // al
  int v102; // edx
  int v103; // eax
  unsigned __int8 v104; // al
  int v105; // edx
  char v106; // al
  __int64 v107; // rdx
  char v108; // al
  __int64 v109; // rdx
  char v110; // al
  __int64 v111; // rdx
  char v112; // al
  __int64 v113; // rdx
  char v114; // al
  __int64 v115; // rdx
  char v116; // al
  __int64 v117; // rdx
  unsigned __int8 v118; // al
  int v119; // edx
  int v120; // eax
  char v121; // al
  __int64 v122; // rdx
  char v123; // al
  __int64 v124; // rdx
  unsigned __int8 v125; // al
  int v126; // edx
  unsigned __int8 v127; // al
  __int64 v128; // rdx
  int v129; // ecx
  char v130; // al
  __int64 v131; // rdx
  char v132; // al
  __int64 v133; // rdx
  char v134; // al
  __int64 v135; // rdx
  unsigned __int8 v136; // al
  int v137; // edx
  int v138; // eax
  int v139; // ebp
  unsigned __int8 v140; // al
  char v141; // al
  __int64 v142; // rdx
  int v143; // ecx
  int v144; // eax
  char v145; // al
  __int64 v146; // rdx
  unsigned __int8 v147; // al
  __int64 v148; // rdx
  __int64 v149; // rax
  unsigned __int8 v150; // al
  int v151; // edx
  char v152; // al
  __int64 v153; // rdx
  char v154; // al
  __int64 v155; // rdx

  if ( !a1 )
    return 0;
  next_byte = insn_get_next_byte();
  switch ( next_byte )
  {
    case 0u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 16;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = 1;
      *(_BYTE *)(a1 + 112) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 1u:
    case 3u:
    case 9u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Eu:
    case 0x21u:
    case 0x23u:
    case 0x26u:
    case 0x28u:
    case 0x2Au:
    case 0x31u:
    case 0x33u:
    case 0x35u:
    case 0x37u:
    case 0x39u:
    case 0x3Bu:
    case 0x3Du:
    case 0x3Fu:
    case 0x40u:
    case 0x42u:
    case 0x44u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Eu:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x53u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
    case 0x58u:
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
    case 0x5Cu:
    case 0x5Du:
    case 0x5Eu:
    case 0x5Fu:
    case 0x60u:
    case 0x62u:
    case 0x64u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Cu:
    case 0x6Eu:
    case 0x70u:
    case 0x72u:
    case 0x74u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Eu:
    case 0x82u:
    case 0x86u:
    case 0x87u:
    case 0x8Au:
    case 0x8Bu:
    case 0x8Eu:
    case 0x92u:
    case 0x96u:
    case 0x97u:
    case 0x9Au:
    case 0x9Bu:
    case 0x9Eu:
    case 0xA7u:
    case 0xABu:
    case 0xB4u:
    case 0xB6u:
    case 0xB7u:
    case 0xB8u:
    case 0xBAu:
    case 0xBBu:
    case 0xBCu:
    case 0xBEu:
    case 0xC1u:
    case 0xC3u:
    case 0xC6u:
    case 0xC7u:
    case 0xC9u:
    case 0xCAu:
    case 0xCBu:
    case 0xCDu:
    case 0xCEu:
    case 0xCFu:
    case 0xD0u:
    case 0xD1u:
    case 0xD3u:
    case 0xD7u:
    case 0xD9u:
    case 0xDAu:
    case 0xDBu:
    case 0xDDu:
    case 0xDEu:
    case 0xDFu:
    case 0xE0u:
    case 0xE1u:
    case 0xE3u:
    case 0xEAu:
    case 0xEEu:
      if ( (next_byte & 0xC1) != 0x40 )
        return 0;
      *(_BYTE *)(a1 + 41) = 7;
      *(_WORD *)(a1 + 24) = 21;
      *(_BYTE *)(a1 + 72) = 1;
      byte = (unsigned __int8)get_byte();
      *(_QWORD *)(a1 + 56) = byte | ((unsigned __int8)get_byte() << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 2u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 18;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = 1;
      *(_BYTE *)(a1 + 112) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 4u:
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 24) = 28;
      *(_WORD *)(a1 + 46) = 17;
      return *(unsigned __int16 *)(a1 + 26);
    case 5u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 25;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v101 = insn_get_next_byte();
      v102 = v101 + 65024;
      v10 = v101 <= 0x1Fu;
      v103 = v101 + 65280;
      if ( !v10 )
        v103 = v102;
      *(_QWORD *)(a1 + 96) = v103;
      return *(unsigned __int16 *)(a1 + 26);
    case 6u:
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 24) = 29;
      *(_WORD *)(a1 + 46) = 17;
      return *(unsigned __int16 *)(a1 + 26);
    case 7u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 25;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 96) = (unsigned __int8)insn_get_next_byte() + 65280LL;
      return *(unsigned __int16 *)(a1 + 26);
    case 8u:
      *(_WORD *)(a1 + 24) = 41;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xAu:
      v99 = insn_get_next_byte();
      v100 = v99;
      if ( v99 <= 0x98u )
      {
        if ( (v99 & 0x80u) != 0 )
        {
          switch ( v99 )
          {
            case 0x80u:
            case 0x90u:
              goto LABEL_211;
            case 0x81u:
            case 0x83u:
            case 0x85u:
            case 0x87u:
            case 0x89u:
            case 0x8Bu:
            case 0x8Du:
            case 0x8Fu:
              *(_WORD *)(a1 + 24) = 5;
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 1;
              *(_BYTE *)(a1 + 81) = 1;
              *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
              return *(unsigned __int16 *)(a1 + 26);
            case 0x82u:
            case 0x92u:
              goto LABEL_219;
            case 0x84u:
            case 0x94u:
              goto LABEL_217;
            case 0x86u:
            case 0x96u:
              goto LABEL_216;
            case 0x88u:
            case 0x98u:
              goto LABEL_213;
            case 0x8Au:
              goto LABEL_259;
            case 0x8Eu:
              goto LABEL_242;
            case 0x91u:
            case 0x93u:
            case 0x95u:
            case 0x97u:
              goto LABEL_238;
            default:
              return 0;
          }
        }
        if ( v99 > 0x78u )
        {
          if ( ((1LL << (v99 - 121)) & 0x55) != 0 )
          {
LABEL_176:
            *(_WORD *)(a1 + 24) = 4;
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = 1;
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
            return *(unsigned __int16 *)(a1 + 26);
          }
          if ( v99 != 122 )
          {
            if ( v99 != 126 )
              return 0;
LABEL_180:
            *(_WORD *)(a1 + 24) = 27;
            *(_BYTE *)(a1 + 41) = 8;
            *(_WORD *)(a1 + 46) = 11;
            *(_BYTE *)(a1 + 73) = 1;
            *(_QWORD *)(a1 + 48) = v99 >> 4;
            return *(unsigned __int16 *)(a1 + 26);
          }
LABEL_181:
          v125 = insn_get_next_byte();
          if ( v125 != 30 )
          {
LABEL_182:
            *(_WORD *)(a1 + 24) = 27;
            *(_BYTE *)(a1 + 41) = 8;
            v126 = v125 + 65024;
            *(_BYTE *)(a1 + 45) = 0;
            if ( v125 <= 0x1Fu )
              v126 = v125 + 65280;
            *(_QWORD *)(a1 + 56) = v126;
            *(_QWORD *)(a1 + 48) = v100 >> 4;
            return *(unsigned __int16 *)(a1 + 26);
          }
          if ( v100 == 122 )
          {
            *(_WORD *)(a1 + 24) = 42;
            return *(unsigned __int16 *)(a1 + 26);
          }
        }
        else
        {
          if ( v99 > 0x1Fu )
          {
            switch ( v99 )
            {
              case ' ':
              case '0':
              case '@':
              case 'P':
              case '`':
              case 'p':
                goto LABEL_193;
              case '!':
              case '%':
              case '\'':
              case ')':
              case '+':
              case '-':
              case '/':
                *(_WORD *)(a1 + 24) = 24;
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = 1;
                *(_BYTE *)(a1 + 81) = 1;
                *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
                return *(unsigned __int16 *)(a1 + 26);
              case '"':
              case '2':
              case 'B':
              case 'R':
              case 'b':
              case 'r':
                goto LABEL_191;
              case '$':
              case '4':
              case 'D':
              case 'T':
              case 'd':
              case 't':
                goto LABEL_190;
              case '&':
              case '6':
              case 'F':
              case 'V':
              case 'f':
              case 'v':
                goto LABEL_189;
              case '(':
              case '8':
              case 'H':
              case 'X':
              case 'h':
              case 'x':
                goto LABEL_185;
              case '*':
              case ':':
              case 'J':
              case 'Z':
              case 'j':
                goto LABEL_181;
              case '.':
              case '>':
              case 'N':
              case '^':
              case 'n':
                goto LABEL_180;
              case 'A':
              case 'C':
              case 'E':
              case 'G':
              case 'I':
              case 'K':
              case 'M':
              case 'O':
                *(_WORD *)(a1 + 24) = 2;
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = 1;
                *(_BYTE *)(a1 + 81) = 1;
                *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
                return *(unsigned __int16 *)(a1 + 26);
              case 'a':
              case 'c':
              case 'e':
              case 'g':
              case 'i':
              case 'k':
              case 'm':
              case 'o':
                *(_WORD *)(a1 + 24) = 3;
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = 1;
                *(_BYTE *)(a1 + 81) = 1;
                *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
                return *(unsigned __int16 *)(a1 + 26);
              case 'q':
              case 's':
              case 'u':
              case 'w':
                goto LABEL_176;
              default:
                return 0;
            }
          }
          switch ( v99 )
          {
            case 0u:
            case 0x10u:
LABEL_193:
              *(_WORD *)(a1 + 24) = 39;
              *(_BYTE *)(a1 + 41) = 8;
              *(_WORD *)(a1 + 46) = 1;
              *(_QWORD *)(a1 + 48) = v99 >> 4;
              v134 = insn_get_next_byte();
              v135 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(a1 + 81) = 7;
              *(_QWORD *)(a1 + 96) = v135 + v134 + 3;
              return *(unsigned __int16 *)(a1 + 26);
            case 1u:
            case 3u:
            case 0xCu:
              return 0;
            case 2u:
            case 0x12u:
LABEL_191:
              *(_WORD *)(a1 + 24) = 27;
              *(_BYTE *)(a1 + 41) = 8;
              *(_WORD *)(a1 + 46) = 1;
              *(_QWORD *)(a1 + 48) = v99 >> 4;
              return *(unsigned __int16 *)(a1 + 26);
            case 4u:
            case 0x14u:
LABEL_190:
              *(_WORD *)(a1 + 24) = 39;
              *(_BYTE *)(a1 + 41) = 8;
              *(_BYTE *)(a1 + 45) = 0;
              *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte() + 65280LL;
              *(_QWORD *)(a1 + 48) = v100 >> 4;
              v132 = insn_get_next_byte();
              v133 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(a1 + 81) = 7;
              *(_QWORD *)(a1 + 96) = v133 + v132 + 4;
              return *(unsigned __int16 *)(a1 + 26);
            case 5u:
            case 7u:
            case 9u:
            case 0xBu:
            case 0xDu:
            case 0xFu:
              *(_WORD *)(a1 + 24) = 25;
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = 1;
              *(_BYTE *)(a1 + 81) = 1;
              *(_WORD *)(a1 + 86) = v99 >> 1;
              return *(unsigned __int16 *)(a1 + 26);
            case 6u:
            case 0x16u:
LABEL_189:
              *(_WORD *)(a1 + 24) = 27;
              *(_BYTE *)(a1 + 41) = 8;
              *(_BYTE *)(a1 + 45) = 0;
              *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte() + 65280LL;
              *(_QWORD *)(a1 + 48) = v100 >> 4;
              return *(unsigned __int16 *)(a1 + 26);
            case 8u:
            case 0x18u:
LABEL_185:
              *(_WORD *)(a1 + 24) = 39;
              v127 = insn_get_next_byte();
              *(_BYTE *)(a1 + 41) = 8;
              v128 = v100 >> 4;
              if ( v127 == 30 )
              {
                *(_QWORD *)(a1 + 48) = v128;
                *(_WORD *)(a1 + 46) = 12;
                v154 = insn_get_next_byte();
                v155 = *(_QWORD *)(a1 + 8);
                *(_BYTE *)(a1 + 81) = 7;
                *(_QWORD *)(a1 + 96) = v155 + v154 + 4;
              }
              else
              {
                *(_BYTE *)(a1 + 45) = 0;
                v129 = v127 + 65024;
                if ( v127 <= 0x1Fu )
                  v129 = v127 + 65280;
                *(_QWORD *)(a1 + 48) = v128;
                *(_QWORD *)(a1 + 56) = v129;
                v130 = insn_get_next_byte();
                v131 = *(_QWORD *)(a1 + 8);
                *(_BYTE *)(a1 + 81) = 7;
                *(_QWORD *)(a1 + 96) = v131 + v130 + 4;
              }
              return *(unsigned __int16 *)(a1 + 26);
            case 0xAu:
              goto LABEL_181;
            case 0xEu:
              goto LABEL_180;
            case 0x11u:
            case 0x13u:
            case 0x15u:
            case 0x17u:
              goto LABEL_232;
            default:
              if ( ((1LL << v99) & 0xAA000000) != 0 )
              {
LABEL_232:
                *(_WORD *)(a1 + 24) = 1;
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = 1;
                *(_BYTE *)(a1 + 81) = 1;
                *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
                return *(unsigned __int16 *)(a1 + 26);
              }
              if ( v99 != 26 )
              {
                if ( v99 != 30 )
                  return 0;
                goto LABEL_180;
              }
              v125 = insn_get_next_byte();
              if ( v125 != 30 )
                goto LABEL_182;
              break;
          }
        }
        *(_WORD *)(a1 + 24) = 27;
        *(_BYTE *)(a1 + 41) = 8;
        *(_WORD *)(a1 + 46) = 12;
        *(_QWORD *)(a1 + 48) = v100 >> 4;
        return *(unsigned __int16 *)(a1 + 26);
      }
      if ( v99 <= 0xD8u )
      {
        if ( v99 > 0xBFu )
        {
          switch ( v99 )
          {
            case 0xC0:
            case 0xD0:
              goto LABEL_211;
            case 0xC1:
            case 0xC3:
            case 0xC5:
            case 0xC7:
            case 0xC9:
            case 0xCB:
            case 0xCD:
            case 0xCF:
              *(_WORD *)(a1 + 24) = 12;
              *(_BYTE *)(a1 + 41) = 1;
              *(_WORD *)(a1 + 46) = (v99 >> 1) & 7;
              return *(unsigned __int16 *)(a1 + 26);
            case 0xC2:
            case 0xD2:
              goto LABEL_219;
            case 0xC4:
            case 0xD4:
              goto LABEL_217;
            case 0xC6:
            case 0xD6:
              goto LABEL_216;
            case 0xC8:
            case 0xD8:
              goto LABEL_213;
            case 0xCA:
              goto LABEL_259;
            case 0xCE:
              goto LABEL_242;
            case 0xD1:
            case 0xD3:
            case 0xD5:
            case 0xD7:
              goto LABEL_235;
            default:
              return 0;
          }
        }
        if ( v99 <= 0xB8u )
        {
          if ( v99 > 0x9Fu )
          {
            switch ( v99 )
            {
              case 0xA0:
              case 0xB0:
                goto LABEL_211;
              case 0xA1:
              case 0xA3:
              case 0xA5:
              case 0xA7:
              case 0xA9:
              case 0xAB:
              case 0xAD:
              case 0xAF:
                *(_WORD *)(a1 + 24) = 7;
                *(_BYTE *)(a1 + 41) = 1;
                *(_WORD *)(a1 + 46) = 1;
                *(_BYTE *)(a1 + 81) = 1;
                *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
                return *(unsigned __int16 *)(a1 + 26);
              case 0xA2:
              case 0xB2:
                goto LABEL_219;
              case 0xA4:
              case 0xB4:
                goto LABEL_217;
              case 0xA6:
              case 0xB6:
                goto LABEL_216;
              case 0xA8:
              case 0xB8:
                goto LABEL_213;
              case 0xAA:
                goto LABEL_259;
              case 0xAE:
                goto LABEL_242;
              case 0xB1:
              case 0xB3:
              case 0xB5:
              case 0xB7:
                goto LABEL_212;
              default:
                return 0;
            }
          }
          if ( ((1LL << (v99 + 103)) & 0x55) != 0 )
          {
LABEL_238:
            *(_WORD *)(a1 + 24) = 6;
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = 1;
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
            return *(unsigned __int16 *)(a1 + 26);
          }
          if ( v99 != 0x9A )
          {
            if ( v99 != 0x9E )
              return 0;
            goto LABEL_242;
          }
LABEL_255:
          v150 = insn_get_next_byte();
          if ( v150 != 30 )
          {
LABEL_256:
            *(_WORD *)(a1 + 24) = 28;
            *(_BYTE *)(a1 + 41) = 8;
            v151 = v150 + 65024;
            *(_BYTE *)(a1 + 45) = 0;
            if ( v150 <= 0x1Fu )
              v151 = v150 + 65280;
            *(_QWORD *)(a1 + 56) = v151;
            *(_QWORD *)(a1 + 48) = (v100 >> 4) & 7;
            return *(unsigned __int16 *)(a1 + 26);
          }
LABEL_267:
          *(_WORD *)(a1 + 24) = 28;
          *(_BYTE *)(a1 + 41) = 8;
          *(_WORD *)(a1 + 46) = 12;
          *(_QWORD *)(a1 + 48) = (v100 >> 4) & 7;
          return *(unsigned __int16 *)(a1 + 26);
        }
        if ( ((1LL << (v99 + 71)) & 0x55) != 0 )
        {
LABEL_212:
          *(_WORD *)(a1 + 24) = 8;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = 1;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = (v99 >> 1) & 7;
          return *(unsigned __int16 *)(a1 + 26);
        }
        if ( v99 == 0xBA )
          goto LABEL_255;
        if ( v99 != 0xBE )
          return 0;
LABEL_242:
        *(_WORD *)(a1 + 24) = 28;
        *(_BYTE *)(a1 + 41) = 8;
        *(_WORD *)(a1 + 46) = 11;
        *(_BYTE *)(a1 + 73) = 1;
        *(_QWORD *)(a1 + 48) = (v99 >> 4) & 7;
        return *(unsigned __int16 *)(a1 + 26);
      }
      if ( v99 > 0xF8u )
      {
        if ( ((1LL << (v99 + 7)) & 0x55) != 0 )
        {
LABEL_229:
          *(_WORD *)(a1 + 24) = 24;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_WORD *)(a1 + 46) = (v99 >> 1) & 7;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
          return *(unsigned __int16 *)(a1 + 26);
        }
        if ( v99 == 0xFA )
        {
LABEL_259:
          v150 = insn_get_next_byte();
          if ( v150 != 30 )
            goto LABEL_256;
          if ( v100 == 0xFA )
          {
            *(_WORD *)(a1 + 24) = 43;
            return *(unsigned __int16 *)(a1 + 26);
          }
          goto LABEL_267;
        }
        if ( v99 == 0xFE )
          goto LABEL_242;
        return 0;
      }
      else
      {
        if ( v99 > 0xDFu )
        {
          switch ( v99 )
          {
            case 0xE0:
            case 0xF0:
LABEL_211:
              *(_WORD *)(a1 + 24) = 38;
              *(_BYTE *)(a1 + 41) = 8;
              *(_WORD *)(a1 + 46) = 1;
              *(_QWORD *)(a1 + 48) = (v99 >> 4) & 7;
              v141 = insn_get_next_byte();
              v142 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(a1 + 81) = 7;
              *(_QWORD *)(a1 + 96) = v142 + v141 + 3;
              return *(unsigned __int16 *)(a1 + 26);
            case 0xE1:
            case 0xE5:
            case 0xE7:
            case 0xE9:
            case 0xEB:
            case 0xED:
            case 0xEF:
              *(_WORD *)(a1 + 24) = 24;
              *(_BYTE *)(a1 + 41) = 1;
              *(_BYTE *)(a1 + 81) = 1;
              *(_WORD *)(a1 + 46) = (v99 >> 1) & 7;
              *(_WORD *)(a1 + 86) = 1;
              return *(unsigned __int16 *)(a1 + 26);
            case 0xE2:
            case 0xF2:
LABEL_219:
              *(_WORD *)(a1 + 24) = 28;
              *(_BYTE *)(a1 + 41) = 8;
              *(_WORD *)(a1 + 46) = 1;
              *(_QWORD *)(a1 + 48) = (v99 >> 4) & 7;
              return *(unsigned __int16 *)(a1 + 26);
            case 0xE4:
            case 0xF4:
LABEL_217:
              *(_WORD *)(a1 + 24) = 38;
              v147 = insn_get_next_byte();
              *(_BYTE *)(a1 + 41) = 8;
              v148 = (v100 >> 4) & 7;
              if ( v147 == 30 )
              {
                v149 = *(_QWORD *)(a1 + 8);
                *(_WORD *)(a1 + 46) = 12;
                *(_QWORD *)(a1 + 48) = v148;
                *(_BYTE *)(a1 + 81) = 7;
                *(_QWORD *)(a1 + 96) = v149 + 34;
              }
              else
              {
                *(_QWORD *)(a1 + 48) = v148;
                *(_BYTE *)(a1 + 45) = 0;
                *(_QWORD *)(a1 + 56) = v147 + 65280LL;
                v152 = insn_get_next_byte();
                v153 = *(_QWORD *)(a1 + 8);
                *(_BYTE *)(a1 + 81) = 7;
                *(_QWORD *)(a1 + 96) = v153 + v152 + 4;
              }
              return *(unsigned __int16 *)(a1 + 26);
            case 0xE6:
            case 0xF6:
LABEL_216:
              *(_WORD *)(a1 + 24) = 28;
              *(_BYTE *)(a1 + 41) = 8;
              *(_BYTE *)(a1 + 45) = 0;
              *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte() + 65280LL;
              *(_QWORD *)(a1 + 48) = (v100 >> 4) & 7;
              return *(unsigned __int16 *)(a1 + 26);
            case 0xE8:
            case 0xF8:
LABEL_213:
              *(_WORD *)(a1 + 24) = 38;
              *(_BYTE *)(a1 + 41) = 8;
              *(_BYTE *)(a1 + 45) = 0;
              v143 = (unsigned __int8)insn_get_next_byte();
              v144 = v143 + 65024;
              if ( (unsigned __int8)v143 <= 0x1Fu )
                v144 = v143 + 65280;
              *(_QWORD *)(a1 + 56) = v144;
              *(_QWORD *)(a1 + 48) = (v100 >> 4) & 7;
              v145 = insn_get_next_byte();
              v146 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(a1 + 81) = 7;
              *(_QWORD *)(a1 + 96) = v146 + v145 + 4;
              return *(unsigned __int16 *)(a1 + 26);
            case 0xEA:
              goto LABEL_259;
            case 0xEE:
              goto LABEL_242;
            case 0xF1:
            case 0xF3:
            case 0xF5:
            case 0xF7:
              goto LABEL_229;
            default:
              return 0;
          }
        }
        if ( ((1LL << (v99 + 39)) & 0x55) != 0 )
        {
LABEL_235:
          *(_WORD *)(a1 + 24) = 13;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (v99 >> 1) & 7;
          return *(unsigned __int16 *)(a1 + 26);
        }
        if ( v99 == 0xDA )
          goto LABEL_255;
        if ( v99 == 0xDE )
          goto LABEL_242;
        return 0;
      }
    case 0xBu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 25;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 10;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xCu:
      *(_WORD *)(a1 + 24) = 44;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xDu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 25;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_QWORD *)(a1 + 96) = (unsigned __int8)insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xEu:
      *(_WORD *)(a1 + 24) = 45;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xFu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 25;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x10u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 17;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = 1;
      *(_BYTE *)(a1 + 112) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x11u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 1;
      *(_BYTE *)(a1 + 45) = 0;
      v70 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      v71 = v70 + 65024;
      v10 = v70 <= 0x1Fu;
      v11 = v70 + 65280;
      if ( !v10 )
        v11 = v71;
      goto LABEL_158;
    case 0x12u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 19;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = 1;
      *(_BYTE *)(a1 + 112) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x13u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0x14u:
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 24) = 27;
      *(_WORD *)(a1 + 46) = 17;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x15u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v83 = insn_get_next_byte();
      v84 = v83 + 65024;
      v10 = v83 <= 0x1Fu;
      v85 = v83 + 65280;
      if ( !v10 )
        v85 = v84;
      *(_QWORD *)(a1 + 96) = v85;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x19u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 114) = 1;
      v81 = (unsigned __int8)insn_get_next_byte();
      v82 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v81 | (v82 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0x1Du:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      v80 = insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      *(_QWORD *)(a1 + 96) = v80;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x1Fu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x20u:
      *(_WORD *)(a1 + 24) = 22;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x22u:
      *(_BYTE *)(a1 + 41) = 7;
      *(_WORD *)(a1 + 24) = 20;
      *(_BYTE *)(a1 + 74) = 1;
      v78 = (unsigned __int8)insn_get_next_byte();
      v79 = insn_get_next_byte();
      *(_BYTE *)(a1 + 74) = 1;
      *(_QWORD *)(a1 + 56) = v78 | (v79 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0x24u:
      *(_WORD *)(a1 + 24) = 23;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x25u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 46) = 1;
      v75 = insn_get_next_byte();
      if ( v75 == 30 )
      {
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 12;
      }
      else
      {
        *(_BYTE *)(a1 + 81) = 2;
        v76 = v75 + 65024;
        v10 = v75 <= 0x1Fu;
        *(_BYTE *)(a1 + 85) = 0;
        v77 = v75 + 65280;
        if ( !v10 )
          v77 = v76;
        *(_QWORD *)(a1 + 96) = v77;
      }
      return *(unsigned __int16 *)(a1 + 26);
    case 0x27u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 96) = (unsigned __int8)insn_get_next_byte() + 65280LL;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x29u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 114) = 1;
      v73 = (unsigned __int8)insn_get_next_byte();
      v74 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v73 | (v74 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0x2Bu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 10;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x2Cu:
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 24) = 31;
      *(_WORD *)(a1 + 46) = 12;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x2Du:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      v72 = insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      *(_QWORD *)(a1 + 96) = v72;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x2Eu:
      *(_BYTE *)(a1 + 41) = 3;
      *(_WORD *)(a1 + 24) = 30;
      *(_WORD *)(a1 + 46) = 12;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x2Fu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x30u:
      *(_WORD *)(a1 + 24) = 33;
      v123 = insn_get_next_byte();
      v124 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 41) = 7;
      *(_QWORD *)(a1 + 56) = v124 + v123 + 2;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x32u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 40;
      *(_BYTE *)(a1 + 45) = 0;
      v118 = insn_get_next_byte();
      v119 = v118 + 65024;
      v10 = v118 <= 0x1Fu;
      v120 = v118 + 65280;
      if ( !v10 )
        v120 = v119;
      *(_QWORD *)(a1 + 56) = v120;
      v121 = insn_get_next_byte();
      v122 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 81) = 7;
      *(_QWORD *)(a1 + 96) = v122 + v121 + 3;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x34u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 40;
      *(_WORD *)(a1 + 46) = 2;
      v116 = insn_get_next_byte();
      v117 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 81) = 7;
      *(_QWORD *)(a1 + 96) = v117 + v116 + 2;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x36u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 40;
      *(_WORD *)(a1 + 46) = 3;
      v114 = insn_get_next_byte();
      v115 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 81) = 7;
      *(_QWORD *)(a1 + 96) = v115 + v114 + 2;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x38u:
      *(_WORD *)(a1 + 24) = 34;
      v112 = insn_get_next_byte();
      v113 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 41) = 7;
      *(_QWORD *)(a1 + 56) = v113 + v112 + 2;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x3Au:
      *(_WORD *)(a1 + 24) = 35;
      v110 = insn_get_next_byte();
      v111 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 41) = 7;
      *(_QWORD *)(a1 + 56) = v111 + v110 + 2;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x3Cu:
      *(_WORD *)(a1 + 24) = 36;
      v108 = insn_get_next_byte();
      v109 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 41) = 7;
      *(_QWORD *)(a1 + 56) = v109 + v108 + 2;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x3Eu:
      *(_WORD *)(a1 + 24) = 37;
      v106 = insn_get_next_byte();
      v107 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 41) = 7;
      *(_QWORD *)(a1 + 56) = v107 + v106 + 2;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x41u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 2;
      *(_BYTE *)(a1 + 45) = 0;
      v104 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      v105 = v104 + 65024;
      v10 = v104 <= 0x1Fu;
      v11 = v104 + 65280;
      if ( !v10 )
        v11 = v105;
      goto LABEL_158;
    case 0x43u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 2;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0x45u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 2;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v38 = insn_get_next_byte();
      v39 = v38 + 65024;
      v10 = v38 <= 0x1Fu;
      v40 = v38 + 65280;
      if ( !v10 )
        v40 = v39;
      *(_QWORD *)(a1 + 96) = v40;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x49u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 2;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 114) = 1;
      v36 = (unsigned __int8)insn_get_next_byte();
      v37 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v36 | (v37 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0x4Du:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_WORD *)(a1 + 24) = 2;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      v35 = insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      *(_QWORD *)(a1 + 96) = v35;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x4Fu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 2;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x61u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 3;
      *(_BYTE *)(a1 + 45) = 0;
      v33 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      v34 = v33 + 65024;
      v10 = v33 <= 0x1Fu;
      v11 = v33 + 65280;
      if ( !v10 )
        v11 = v34;
      goto LABEL_158;
    case 0x63u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 3;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0x65u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 3;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v30 = insn_get_next_byte();
      v31 = v30 + 65024;
      v10 = v30 <= 0x1Fu;
      v32 = v30 + 65280;
      if ( !v10 )
        v32 = v31;
      *(_QWORD *)(a1 + 96) = v32;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x69u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 3;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 114) = 1;
      v28 = (unsigned __int8)insn_get_next_byte();
      v29 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v28 | (v29 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0x6Du:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_WORD *)(a1 + 24) = 3;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      v27 = insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      *(_QWORD *)(a1 + 96) = v27;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x6Fu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 3;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x71u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 4;
      *(_BYTE *)(a1 + 45) = 2;
      v25 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      v26 = v25 + 65024;
      v10 = v25 <= 0x1Fu;
      v11 = v25 + 65280;
      if ( !v10 )
        v11 = v26;
      goto LABEL_158;
    case 0x73u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 4;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0x75u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 4;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v22 = insn_get_next_byte();
      v23 = v22 + 65024;
      v10 = v22 <= 0x1Fu;
      v24 = v22 + 65280;
      if ( !v10 )
        v24 = v23;
      *(_QWORD *)(a1 + 96) = v24;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x79u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 4;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v13 = (unsigned __int8)insn_get_next_byte();
      v14 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v13 | (v14 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0x7Du:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 4;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      v12 = insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      *(_QWORD *)(a1 + 96) = v12;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x7Fu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 4;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x80u:
    case 0x84u:
    case 0x88u:
    case 0x8Cu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 14;
      *(_WORD *)(a1 + 46) = ((next_byte >> 2) & 3) + 8;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x81u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 5;
      *(_BYTE *)(a1 + 45) = 0;
      v20 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      v21 = v20 + 65024;
      v10 = v20 <= 0x1Fu;
      v11 = v20 + 65280;
      if ( !v10 )
        v11 = v21;
      goto LABEL_158;
    case 0x83u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0x85u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v17 = insn_get_next_byte();
      v18 = v17 + 65024;
      v10 = v17 <= 0x1Fu;
      v19 = v17 + 65280;
      if ( !v10 )
        v19 = v18;
      *(_QWORD *)(a1 + 96) = v19;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x89u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 114) = 1;
      v15 = (unsigned __int8)insn_get_next_byte();
      v16 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v15 | (v16 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0x8Du:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      v88 = insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      *(_QWORD *)(a1 + 96) = v88;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x8Fu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x90u:
    case 0x94u:
    case 0x98u:
    case 0x9Cu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 15;
      *(_WORD *)(a1 + 46) = ((next_byte >> 2) & 3) + 8;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x91u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 6;
      *(_BYTE *)(a1 + 45) = 0;
      v8 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      v9 = v8 + 65024;
      v10 = v8 <= 0x1Fu;
      v11 = v8 + 65280;
      if ( !v10 )
        v11 = v9;
      goto LABEL_158;
    case 0x93u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 6;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0x95u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 6;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v60 = insn_get_next_byte();
      v61 = v60 + 65024;
      v10 = v60 <= 0x1Fu;
      v62 = v60 + 65280;
      if ( !v10 )
        v62 = v61;
      *(_QWORD *)(a1 + 96) = v62;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x99u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 6;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 114) = 1;
      v6 = (unsigned __int8)insn_get_next_byte();
      v7 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v6 | (v7 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0x9Du:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 6;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      v5 = insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      *(_QWORD *)(a1 + 96) = v5;
      return *(unsigned __int16 *)(a1 + 26);
    case 0x9Fu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 6;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xA0u:
    case 0xA4u:
    case 0xA8u:
    case 0xACu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 31;
      *(_WORD *)(a1 + 46) = ((next_byte >> 2) & 3) + 8;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xA1u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 7;
      *(_BYTE *)(a1 + 45) = 0;
      v86 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      v87 = v86 + 65024;
      v10 = v86 <= 0x1Fu;
      v11 = v86 + 65280;
      if ( !v10 )
        v11 = v87;
      goto LABEL_158;
    case 0xA2u:
    case 0xA6u:
    case 0xAAu:
    case 0xAEu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 30;
      *(_WORD *)(a1 + 46) = ((next_byte >> 2) & 3) + 8;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xA3u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 7;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0xA5u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 7;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v67 = insn_get_next_byte();
      v68 = v67 + 65024;
      v10 = v67 <= 0x1Fu;
      v69 = v67 + 65280;
      if ( !v10 )
        v69 = v68;
      *(_QWORD *)(a1 + 96) = v69;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xA9u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 7;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 114) = 1;
      v65 = (unsigned __int8)insn_get_next_byte();
      v66 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v65 | (v66 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0xADu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 7;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      v64 = insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      *(_QWORD *)(a1 + 96) = v64;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xAFu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 7;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xB0u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 33;
      *(_WORD *)(a1 + 46) = 8;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xB1u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      v58 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      v59 = v58 + 65024;
      v10 = v58 <= 0x1Fu;
      v11 = v58 + 65280;
      if ( !v10 )
        v11 = v59;
LABEL_158:
      *(_QWORD *)(a1 + 56) = v11;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0xB2u:
      *(_BYTE *)(a1 + 41) = 7;
      *(_WORD *)(a1 + 24) = 33;
      *(_BYTE *)(a1 + 74) = 1;
      v56 = (unsigned __int8)insn_get_next_byte();
      v57 = insn_get_next_byte();
      *(_BYTE *)(a1 + 74) = 1;
      *(_QWORD *)(a1 + 56) = v56 | (v57 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0xB3u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 8;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 0xB5u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 8;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      v53 = insn_get_next_byte();
      v54 = v53 + 65024;
      v10 = v53 <= 0x1Fu;
      v55 = v53 + 65280;
      if ( !v10 )
        v55 = v54;
      *(_QWORD *)(a1 + 96) = v55;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xB9u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 1;
      *(_WORD *)(a1 + 24) = 8;
      *(_BYTE *)(a1 + 81) = 2;
      *(_BYTE *)(a1 + 85) = 0;
      *(_BYTE *)(a1 + 114) = 1;
      v51 = (unsigned __int8)insn_get_next_byte();
      v52 = insn_get_next_byte();
      *(_BYTE *)(a1 + 114) = 1;
      *(_QWORD *)(a1 + 96) = v51 | (v52 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0xBDu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 8;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_QWORD *)(a1 + 96) = (unsigned __int8)insn_get_next_byte();
      *(_WORD *)(a1 + 112) = 257;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xBFu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 8;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 11;
      *(_BYTE *)(a1 + 113) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xC0u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 25;
      *(_WORD *)(a1 + 46) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 0;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xC2u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 9;
      *(_WORD *)(a1 + 46) = 8;
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 1;
      v4 = (unsigned __int8)insn_get_next_byte();
      *(_QWORD *)(a1 + 88) = v4 | ((unsigned __int8)insn_get_next_byte() << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0xC4u:
    case 0xC8u:
    case 0xCCu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 26;
      *(_WORD *)(a1 + 46) = 8;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = ((next_byte >> 2) & 3) + 8;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xC5u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 12;
      *(_BYTE *)(a1 + 45) = 0;
      v48 = insn_get_next_byte();
      v49 = v48 + 65024;
      v10 = v48 <= 0x1Fu;
      v50 = v48 + 65280;
      if ( !v10 )
        v50 = v49;
      *(_QWORD *)(a1 + 56) = v50;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xD2u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 10;
      *(_WORD *)(a1 + 46) = 8;
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 1;
      v47 = (unsigned __int8)insn_get_next_byte();
      *(_QWORD *)(a1 + 88) = v47 | ((unsigned __int8)insn_get_next_byte() << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0xD4u:
    case 0xD8u:
    case 0xDCu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 32;
      *(_WORD *)(a1 + 46) = 8;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = ((next_byte >> 2) & 3) + 8;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xD5u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 13;
      *(_BYTE *)(a1 + 45) = 0;
      v44 = insn_get_next_byte();
      v45 = v44 + 65024;
      v10 = v44 <= 0x1Fu;
      v46 = v44 + 65280;
      if ( !v10 )
        v46 = v45;
      *(_QWORD *)(a1 + 56) = v46;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xD6u:
      *(_WORD *)(a1 + 24) = 32;
      v96 = insn_get_next_byte();
      if ( v96 == 28 )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 8;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 13;
      }
      else
      {
        if ( (v96 & 1) != 0 )
          return 0;
        *(_BYTE *)(a1 + 41) = 1;
        v97 = v96 + 65024;
        v10 = v96 <= 0x1Fu;
        *(_WORD *)(a1 + 46) = 8;
        v98 = v96 + 65280;
        *(_BYTE *)(a1 + 81) = 2;
        if ( !v10 )
          v98 = v97;
        *(_BYTE *)(a1 + 85) = 1;
        *(_QWORD *)(a1 + 96) = v98;
      }
      return *(unsigned __int16 *)(a1 + 26);
    case 0xE2u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 11;
      *(_WORD *)(a1 + 46) = 8;
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 1;
      v95 = (unsigned __int8)insn_get_next_byte();
      *(_QWORD *)(a1 + 88) = v95 | ((unsigned __int8)insn_get_next_byte() << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0xE4u:
    case 0xE8u:
    case 0xECu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 32;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 46) = ((next_byte >> 2) & 3) + 8;
      *(_WORD *)(a1 + 86) = 8;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xE5u:
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 86) = 1;
      v41 = insn_get_next_byte();
      if ( v41 == 30 )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 12;
      }
      else
      {
        *(_BYTE *)(a1 + 41) = 2;
        v42 = v41 + 65024;
        v10 = v41 <= 0x1Fu;
        *(_BYTE *)(a1 + 45) = 0;
        v43 = v41 + 65280;
        if ( !v10 )
          v43 = v42;
        *(_QWORD *)(a1 + 56) = v43;
      }
      return *(unsigned __int16 *)(a1 + 26);
    case 0xE6u:
      *(_WORD *)(a1 + 24) = 32;
      v92 = insn_get_next_byte();
      if ( v92 == 28 )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = 13;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = 8;
      }
      else
      {
        *(_BYTE *)(a1 + 41) = 2;
        v93 = v92 + 65024;
        v10 = v92 <= 0x1Fu;
        *(_BYTE *)(a1 + 45) = 1;
        v94 = v92 + 65280;
        *(_BYTE *)(a1 + 81) = 1;
        if ( !v10 )
          v94 = v93;
        *(_QWORD *)(a1 + 56) = v94;
        *(_WORD *)(a1 + 86) = 8;
      }
      return *(unsigned __int16 *)(a1 + 26);
    case 0xE7u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 24;
      *(_BYTE *)(a1 + 45) = 0;
      v91 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 1;
      *(_QWORD *)(a1 + 56) = v91 + 65280LL;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xE9u:
      *(_BYTE *)(a1 + 41) = 2;
      *(_WORD *)(a1 + 24) = 24;
      *(_BYTE *)(a1 + 45) = 0;
      *(_BYTE *)(a1 + 74) = 1;
      v89 = (unsigned __int8)insn_get_next_byte();
      v90 = insn_get_next_byte();
      *(_BYTE *)(a1 + 74) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 1;
      *(_QWORD *)(a1 + 56) = v89 | (v90 << 8);
      return *(unsigned __int16 *)(a1 + 26);
    case 0xEBu:
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 86) = 1;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 10;
      *(_BYTE *)(a1 + 73) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xEDu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 46) = 11;
      v63 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 1;
      *(_QWORD *)(a1 + 56) = v63;
      *(_WORD *)(a1 + 72) = 257;
      *(_WORD *)(a1 + 86) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    case 0xEFu:
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 24) = 24;
      *(_WORD *)(a1 + 86) = 1;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 11;
      *(_BYTE *)(a1 + 73) = 1;
      return *(unsigned __int16 *)(a1 + 26);
    default:
      if ( (unsigned __int8)(next_byte + 16) > 0xCu )
        return 0;
      if ( ((1LL << (next_byte + 16)) & 0x1111) != 0 )
      {
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 32;
        *(_BYTE *)(a1 + 81) = 5;
        *(_WORD *)(a1 + 46) = ((next_byte >> 2) & 3) + 8;
        *(_BYTE *)(a1 + 85) = 1;
        v139 = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(a1 + 88) = v139 | ((unsigned __int8)insn_get_next_byte() << 8);
      }
      else if ( next_byte == 0xF7 )
      {
        *(_BYTE *)(a1 + 41) = 2;
        *(_WORD *)(a1 + 24) = 24;
        *(_BYTE *)(a1 + 45) = 0;
        v140 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_QWORD *)(a1 + 56) = v140 + 65280LL;
        *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      }
      else
      {
        if ( next_byte != 0xF5 )
          return 0;
        *(_WORD *)(a1 + 24) = 24;
        v136 = insn_get_next_byte();
        if ( v136 == 30 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = 12;
        }
        else
        {
          *(_BYTE *)(a1 + 41) = 2;
          v137 = v136 + 65024;
          v10 = v136 <= 0x1Fu;
          *(_BYTE *)(a1 + 45) = 0;
          v138 = v136 + 65280;
          if ( !v10 )
            v138 = v137;
          *(_QWORD *)(a1 + 56) = v138;
        }
        *(_BYTE *)(a1 + 81) = 5;
        *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
      }
      return *(unsigned __int16 *)(a1 + 26);
  }
}

