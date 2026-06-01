__int64 __fastcall sub_4B30(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r12d
  __int16 v6; // dx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // bp
  unsigned __int16 next_word; // ax
  unsigned __int16 v10; // dx
  __int64 result; // rax
  unsigned __int8 v12; // al
  char v13; // dl
  unsigned __int8 v14; // al
  unsigned __int8 v15; // dl
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // r13d
  unsigned __int8 v20; // bp
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  int v23; // ebp
  unsigned __int16 v24; // ax
  unsigned __int8 v25; // al
  __int16 v26; // dx
  int v27; // eax
  char v28; // dl
  unsigned __int8 v29; // al
  unsigned __int8 v30; // al
  __int16 v31; // ax
  unsigned __int16 v32; // ax
  __int16 v33; // ax
  unsigned __int8 v34; // al
  __int16 v35; // ax
  unsigned __int16 v36; // ax
  unsigned __int16 v37; // ax
  unsigned __int8 v38; // bp
  unsigned __int16 v39; // ax
  unsigned __int8 v40; // al
  unsigned __int8 v41; // bp
  unsigned __int8 v42; // al
  unsigned __int8 v43; // bp
  unsigned __int8 v44; // bp
  unsigned __int8 v45; // bp
  unsigned __int8 v46; // al
  unsigned __int8 v47; // bp
  unsigned __int16 v48; // ax
  char v49; // cl
  unsigned __int8 v50; // bp
  unsigned __int8 v51; // al
  __int64 v52; // rdx
  __int16 v53; // ax
  char v54; // bp
  char v55; // dl
  unsigned __int8 v56; // al
  char v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int8 v60; // al
  unsigned __int8 v61; // bp
  unsigned __int16 v62; // ax
  __int16 v63; // dx
  unsigned __int8 v64; // al
  char v65; // r12
  __int16 v66; // dx
  unsigned __int8 v67; // al
  unsigned __int8 v68; // bp
  unsigned __int8 v69; // al
  __int64 v70; // rdx
  __int16 v71; // ax
  char v72; // bp
  char v73; // dl
  unsigned __int8 v74; // bp
  unsigned __int16 v75; // ax
  __int16 v76; // dx
  unsigned __int8 v77; // al
  unsigned __int8 v78; // bp
  unsigned __int8 v79; // al
  unsigned __int16 v80; // ax
  unsigned __int8 v81; // al
  unsigned __int16 v82; // ax
  unsigned __int8 v83; // al
  unsigned __int8 v84; // al
  __m128i v85; // xmm0
  int v86; // eax
  __m128i v87; // xmm0
  __int64 v88; // rcx
  __int64 v89; // rdx
  unsigned int v90; // ecx
  char v91; // dl
  int v92; // edx
  unsigned __int8 v93; // al
  int v94; // edx
  unsigned __int8 v95; // dl
  int v96; // eax
  unsigned __int8 v97; // dl
  unsigned __int8 v98; // bp
  char v99; // [rsp+0h] [rbp-28h]

  next_byte = insn_get_next_byte();
  if ( (next_byte & 8) == 0 )
    return 0;
  if ( (next_byte & 0xF0u) > 0xDF )
    return 0;
  v5 = next_byte;
  v6 = *((unsigned __int8 *)qword_C920 + (next_byte & 7 | ((int)next_byte >> 1) & 0x78u));
  *(_WORD *)(a2 + 24) = v6;
  if ( !v6 )
    return 0;
  switch ( next_byte )
  {
    case 8u:
    case 0x18u:
    case 0x28u:
    case 0x38u:
    case 0x48u:
    case 0x58u:
    case 0x68u:
    case 0x78u:
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 1;
      v16 = (char)insn_get_next_byte();
      result = *(unsigned __int16 *)(a2 + 26);
      v17 = v16 + *(_QWORD *)(a2 + 8) + result;
      v18 = (v16 + *(_DWORD *)(a2 + 8) + result) & 0xFFFFFF;
      if ( !*(_DWORD *)(a1 + 256) )
        v18 = (unsigned __int16)v17;
      *(_QWORD *)(a2 + 56) = v18;
      return result;
    case 9u:
      v7 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      v8 = v7;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = (unsigned __int8)((v7 >> 4) + 3);
      *(_BYTE *)(a2 + 82) = *(_WORD *)(a2 + 26);
      next_word = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 0;
      v10 = next_word;
      goto LABEL_6;
    case 0xAu:
    case 0x1Au:
      v14 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      v15 = (v14 >> 4) + 19;
      goto LABEL_14;
    case 0xBu:
      v68 = insn_get_next_byte();
      v69 = v68 & 0xF;
      if ( (v68 & 0xF) != 0xA )
      {
        if ( v69 > 0xAu )
        {
          if ( v69 == 11 )
            return 0;
          goto LABEL_92;
        }
        if ( v69 != 8 )
        {
          if ( v69 == 9 )
            return 0;
LABEL_92:
          *(_WORD *)(a2 + 24) = 13;
          v70 = (v68 >> 2) & 3;
          v71 = (v68 >> 4) + (unsigned __int8)byte_C993[v70];
          if ( (unsigned __int16)(v71 - 43) > 5u )
          {
            v72 = v68 & 3;
            *(_BYTE *)(a2 + 41) = 1;
            v73 = byte_C990[v70];
            *(_WORD *)(a2 + 46) = v71;
            *(_BYTE *)(a2 + 45) = v73;
            if ( v72 != 3 )
            {
              *(_BYTE *)(a2 + 81) = 5;
              result = *(unsigned __int16 *)(a2 + 26);
              *(_BYTE *)(a2 + 85) = 0;
              *(_QWORD *)(a2 + 88) = 1LL << v72;
              return result;
            }
          }
          return 0;
        }
        v95 = insn_get_next_byte();
        if ( (v95 & 0xF) != 0 )
          return 0;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)((v95 >> 4) + 19);
        LOBYTE(v96) = (v68 >> 4) + 19;
LABEL_135:
        *(_BYTE *)(a2 + 112) = v96;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 81) = 3;
        *(_BYTE *)(a2 + 85) = 1;
        *(_WORD *)(a2 + 86) = 5;
        return result;
      }
      v97 = insn_get_next_byte();
      if ( (v97 & 0xF) != 0 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      v96 = (unsigned __int8)((v68 >> 4) + 35);
      *(_WORD *)(a2 + 46) = (unsigned __int8)((v97 >> 4) + 19);
      if ( (unsigned int)(v96 - 43) > 5 )
        goto LABEL_135;
      return 0;
    case 0xEu:
    case 0x1Eu:
    case 0x3Eu:
      v22 = insn_get_next_byte();
      if ( (v22 & 0xF) != 0 )
      {
        if ( (v22 & 0xF) != 4 )
          return 0;
LABEL_25:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)((v22 >> 4) + 19);
        return *(unsigned __int16 *)(a2 + 26);
      }
      else
      {
LABEL_104:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 46) = (unsigned __int8)((v22 >> 4) + 3);
        return *(unsigned __int16 *)(a2 + 26);
      }
    case 0x19u:
      v61 = insn_get_next_byte();
      *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
      v62 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 4;
      *(_BYTE *)(a2 + 45) = 0;
      v63 = (v61 & 0xF) + 19;
      goto LABEL_84;
    case 0x1Bu:
      v50 = insn_get_next_byte();
      v51 = v50 & 0xF;
      if ( (v50 & 0xF) == 0xA )
      {
        v93 = insn_get_next_byte();
        if ( (v93 & 0xF) == 0 )
        {
          v94 = (unsigned __int8)((v50 >> 4) + 35);
          if ( (unsigned int)(v94 - 43) > 5 )
            goto LABEL_126;
          return 0;
        }
        return 0;
      }
      if ( v51 <= 0xAu )
      {
        if ( v51 != 8 )
        {
          if ( v51 == 9 )
            return 0;
LABEL_70:
          *(_WORD *)(a2 + 24) = 10;
          v52 = (v50 >> 2) & 3;
          v53 = (v50 >> 4) + (unsigned __int8)byte_C993[v52];
          if ( (unsigned __int16)(v53 - 43) > 5u )
          {
            v54 = v50 & 3;
            *(_BYTE *)(a2 + 41) = 1;
            v55 = byte_C990[v52];
            *(_WORD *)(a2 + 46) = v53;
            *(_BYTE *)(a2 + 45) = v55;
            if ( v54 != 3 )
            {
              *(_BYTE *)(a2 + 81) = 5;
              *(_BYTE *)(a2 + 85) = 0;
              *(_QWORD *)(a2 + 88) = 1LL << v54;
              return *(unsigned __int16 *)(a2 + 26);
            }
          }
          return 0;
        }
        v93 = insn_get_next_byte();
        if ( (v93 & 0xF) != 0 )
          return 0;
        LOBYTE(v94) = (v50 >> 4) + 19;
LABEL_126:
        *(_BYTE *)(a2 + 41) = 3;
        *(_BYTE *)(a2 + 45) = 1;
        *(_WORD *)(a2 + 46) = 5;
        *(_BYTE *)(a2 + 72) = v94;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        goto LABEL_127;
      }
      if ( v51 != 11 )
        goto LABEL_70;
      return 0;
    case 0x29u:
      v46 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      v47 = v46;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = (unsigned __int8)((v46 >> 4) + 3);
      *(_BYTE *)(a2 + 82) = *(_WORD *)(a2 + 26);
      v48 = insn_get_next_word();
      v49 = v47 & 0xF;
      if ( (unsigned __int16)((v47 & 0xF) - 8) <= 5u )
        return 0;
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 0;
      goto LABEL_65;
    case 0x2Cu:
    case 0x4Cu:
    case 0x5Cu:
    case 0x6Cu:
    case 0x7Cu:
    case 0x8Cu:
    case 0x9Cu:
    case 0xACu:
    case 0xBCu:
      v14 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      v15 = (v14 >> 4) + 3;
LABEL_14:
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = v15;
      *(_BYTE *)(a2 + 85) = 0;
      *(_WORD *)(a2 + 86) = (v14 & 0xF) + 3;
      return *(unsigned __int16 *)(a2 + 26);
    case 0x2Du:
    case 0x4Du:
    case 0x5Du:
    case 0x6Du:
    case 0x7Du:
    case 0x8Du:
    case 0x9Du:
    case 0xADu:
    case 0xBDu:
      v12 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      v13 = v12 >> 4;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = (v12 & 0xF) + 19;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)(v13 + 19);
      return result;
    case 0x2Eu:
    case 0x7Eu:
    case 0x8Eu:
    case 0x9Eu:
    case 0xAEu:
    case 0xBEu:
      v19 = 0;
      goto LABEL_19;
    case 0x2Fu:
    case 0x7Fu:
    case 0x9Fu:
    case 0xBFu:
      v21 = insn_get_next_byte();
      if ( (unsigned __int16)((v21 >> 4) - 8) <= 5u )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = (unsigned __int8)((v21 >> 4) + 35);
      if ( (unsigned __int16)((v21 & 0xF) - 8) <= 5u )
        return 0;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = (unsigned __int8)((v21 & 0xF) + 35);
      return *(unsigned __int16 *)(a2 + 26);
    case 0x39u:
      v61 = insn_get_next_byte();
      *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
      v62 = insn_get_next_word();
      if ( (unsigned __int16)((v61 & 0xF) - 8) <= 5u )
        return 0;
      *(_BYTE *)(a2 + 41) = 4;
      *(_BYTE *)(a2 + 45) = 0;
      v63 = (unsigned __int8)((v61 & 0xF) + 35);
LABEL_84:
      *(_WORD *)(a2 + 46) = v63;
      *(_QWORD *)(a2 + 56) = v62;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 0;
      *(_WORD *)(a2 + 86) = (unsigned __int8)((v61 >> 4) + 3);
      return *(unsigned __int16 *)(a2 + 26);
    case 0x49u:
      v79 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      v8 = v79;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)((v79 >> 4) + 19);
      *(_BYTE *)(a2 + 82) = *(_WORD *)(a2 + 26);
      v80 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 1;
      v10 = v80;
LABEL_6:
      *(_WORD *)(a2 + 86) = (v8 & 0xF) + 19;
      *(_QWORD *)(a2 + 96) = v10;
      return *(unsigned __int16 *)(a2 + 26);
    case 0x4Eu:
    case 0x5Eu:
    case 0x6Eu:
      v19 = 1;
LABEL_19:
      v20 = insn_get_next_byte();
      switch ( v20 & 0xF )
      {
        case 0:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = (unsigned __int8)((v20 >> 4) + 3);
          *(_BYTE *)(a2 + 82) = *(_WORD *)(a2 + 26);
          v30 = insn_get_next_byte();
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 0;
          *(_QWORD *)(a2 + 88) = v30;
          return *(unsigned __int16 *)(a2 + 26);
        case 1:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = (unsigned __int8)((v20 >> 4) + 3);
          v29 = insn_get_next_byte();
          *(_BYTE *)(a2 + 81) = 2;
          *(_BYTE *)(a2 + 85) = 0;
          *(_QWORD *)(a2 + 96) = v29;
          return *(unsigned __int16 *)(a2 + 26);
        case 2:
        case 6:
        case 0xA:
        case 0xE:
          return 0;
        case 3:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = (unsigned __int8)((v20 >> 4) + 3);
          v37 = insn_get_next_word();
          *(_BYTE *)(a2 + 81) = 2;
          *(_BYTE *)(a2 + 85) = 0;
          *(_QWORD *)(a2 + 96) = v37;
          return *(unsigned __int16 *)(a2 + 26);
        case 4:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          v35 = (unsigned __int8)((v20 >> 4) + 19);
          goto LABEL_44;
        case 5:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          v33 = (unsigned __int8)((v20 >> 4) + 19);
          goto LABEL_42;
        case 7:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          v31 = (unsigned __int8)((v20 >> 4) + 19);
          goto LABEL_40;
        case 8:
          if ( !v19 )
            goto LABEL_55;
          return 0;
        case 9:
          v42 = insn_get_next_byte();
          if ( (v42 & 0xF) != 0 )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 46) = (unsigned __int8)((v42 >> 4) + 3);
          *(_WORD *)(a2 + 86) = 5;
          *(_BYTE *)(a2 + 85) = 0;
          *(_BYTE *)(a2 + 112) = (v20 >> 4) + 19;
          return *(unsigned __int16 *)(a2 + 26);
        case 0xB:
          v40 = insn_get_next_byte();
          if ( (v40 & 0xF) != 0 )
            return 0;
          v41 = v20 >> 4;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = (unsigned __int8)((v40 >> 4) + 3);
          if ( (unsigned int)v41 - 8 <= 5 )
            return 0;
          *(_BYTE *)(a2 + 81) = 3;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 85) = 0;
          *(_WORD *)(a2 + 86) = 5;
          *(_BYTE *)(a2 + 112) = v41 + 35;
          return result;
        case 0xC:
          if ( v19 )
            return 0;
          v38 = v20 >> 4;
          if ( (unsigned __int16)(v38 - 8) <= 5u )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v38 + 35);
          *(_BYTE *)(a2 + 82) = *(_WORD *)(a2 + 26);
          v39 = insn_get_next_word();
          *(_DWORD *)(a2 + 28) |= 2u;
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 88) = v39;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 85) = 1;
          return result;
        case 0xD:
          if ( v19 )
            return 0;
          v45 = v20 >> 4;
          if ( (unsigned __int16)(v45 - 8) <= 5u )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          v33 = (unsigned __int8)(v45 + 35);
LABEL_42:
          *(_WORD *)(a2 + 46) = v33;
          v34 = insn_get_next_byte();
          *(_BYTE *)(a2 + 81) = 2;
          *(_BYTE *)(a2 + 85) = 1;
          *(_QWORD *)(a2 + 96) = v34;
          return *(unsigned __int16 *)(a2 + 26);
        case 0xF:
          if ( v5 != 126 )
            return 0;
          v44 = v20 >> 4;
          if ( (unsigned __int16)(v44 - 8) <= 5u )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          v31 = (unsigned __int8)(v44 + 35);
LABEL_40:
          *(_WORD *)(a2 + 46) = v31;
          v32 = insn_get_next_word();
          *(_BYTE *)(a2 + 81) = 2;
          *(_BYTE *)(a2 + 85) = 1;
          *(_QWORD *)(a2 + 96) = v32;
          return *(unsigned __int16 *)(a2 + 26);
      }
    case 0x59u:
      v74 = insn_get_next_byte();
      *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
      v75 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 4;
      *(_BYTE *)(a2 + 45) = 1;
      v76 = (v74 & 0xF) + 19;
      goto LABEL_97;
    case 0x69u:
      v77 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      v78 = v77;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)((v77 >> 4) + 19);
      *(_BYTE *)(a2 + 82) = *(_WORD *)(a2 + 26);
      v48 = insn_get_next_word();
      v49 = v78 & 0xF;
      if ( (unsigned __int16)((v78 & 0xF) - 8) <= 5u )
        return 0;
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 1;
LABEL_65:
      *(_QWORD *)(a2 + 96) = v48;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 86) = (unsigned __int8)(v49 + 35);
      return result;
    case 0x79u:
      v74 = insn_get_next_byte();
      *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
      v75 = insn_get_next_word();
      if ( (unsigned __int16)((v74 & 0xF) - 8) <= 5u )
        return 0;
      *(_BYTE *)(a2 + 41) = 4;
      *(_BYTE *)(a2 + 45) = 1;
      v76 = (unsigned __int8)((v74 & 0xF) + 35);
LABEL_97:
      *(_WORD *)(a2 + 46) = v76;
      *(_QWORD *)(a2 + 56) = v75;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = (unsigned __int8)((v74 >> 4) + 19);
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 85) = 1;
      return result;
    case 0x7Au:
      v56 = insn_get_next_byte();
      v20 = v56;
      v57 = v56 & 0xF;
      if ( (v56 & 0xF) == 0xB )
        goto LABEL_120;
      if ( v57 != 12 )
      {
        if ( v57 == 9 )
        {
LABEL_120:
          v60 = insn_get_next_byte();
          if ( (v60 & 0xF) != 0 )
            return 0;
          v91 = v20 >> 4;
          if ( (v20 & 2) != 0 )
          {
            v92 = (unsigned __int8)(v91 + 35);
            if ( (unsigned int)(v92 - 43) <= 5 )
              return 0;
          }
          else
          {
            LOBYTE(v92) = v91 + 19;
          }
          *(_BYTE *)(a2 + 41) = 3;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 46) = 5;
          *(_BYTE *)(a2 + 72) = v92;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 0;
        }
        else
        {
          if ( (v56 & 2) != 0 )
            v58 = (unsigned __int16)insn_get_next_word();
          else
            v58 = (unsigned __int8)insn_get_next_byte();
          v59 = 1LL << v57;
          if ( ((1LL << v57) & 0xA000) != 0 )
          {
            v98 = v20 >> 4;
            *(_BYTE *)(a2 + 41) = 2;
            *(_BYTE *)(a2 + 45) = 2;
            *(_QWORD *)(a2 + 56) = v58;
            if ( (unsigned __int16)(v98 - 8) > 5u )
            {
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = (unsigned __int8)(v98 + 35);
              return *(unsigned __int16 *)(a2 + 26);
            }
            return 0;
          }
          if ( (v59 & 0xA0) != 0 )
          {
            *(_BYTE *)(a2 + 41) = 2;
            v93 = v20;
            *(_BYTE *)(a2 + 45) = 1;
            *(_QWORD *)(a2 + 56) = v58;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 1;
LABEL_127:
            *(_WORD *)(a2 + 86) = (unsigned __int8)((v93 >> 4) + 19);
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (v59 & 0xA) == 0 )
            return 0;
          *(_BYTE *)(a2 + 41) = 2;
          v60 = v20;
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 56) = v58;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 0;
        }
        *(_WORD *)(a2 + 86) = (unsigned __int8)((v60 >> 4) + 3);
        return *(unsigned __int16 *)(a2 + 26);
      }
      *(_WORD *)(a2 + 24) = 57;
LABEL_55:
      v43 = v20 >> 4;
      if ( (unsigned __int16)(v43 - 8) > 5u )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        v35 = (unsigned __int8)(v43 + 35);
LABEL_44:
        *(_WORD *)(a2 + 46) = v35;
        *(_BYTE *)(a2 + 82) = *(_WORD *)(a2 + 26);
        v36 = insn_get_next_word();
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 1;
        *(_QWORD *)(a2 + 88) = v36;
        return *(unsigned __int16 *)(a2 + 26);
      }
      return 0;
    case 0x89u:
    case 0x99u:
      v25 = insn_get_next_byte();
      if ( (v25 & 0xF) == 4 )
      {
        v28 = 1;
        LOBYTE(v27) = (v25 >> 4) + 19;
      }
      else
      {
        if ( (v25 & 0xF) != 8 )
          return 0;
        v26 = 55;
        if ( *(_WORD *)(a2 + 24) == 23 )
          v26 = 54;
        *(_WORD *)(a2 + 24) = v26;
        v27 = (unsigned __int8)((v25 >> 4) + 35);
        if ( (unsigned int)(v27 - 43) <= 5 )
          return 0;
        v28 = 2;
      }
      *(_BYTE *)(a2 + 72) = v27;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = v28;
      *(_WORD *)(a2 + 46) = 5;
      return result;
    case 0x8Au:
    case 0x9Au:
      v23 = (unsigned __int8)insn_get_next_byte();
      v24 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 1;
      *(_QWORD *)(a2 + 56) = v24 | (unsigned int)(v23 << 16);
      return *(unsigned __int16 *)(a2 + 26);
    case 0xA9u:
      v64 = insn_get_next_byte();
      if ( (v64 & 8) != 0 )
        return 0;
      v65 = v64 >> 4;
      v66 = *((unsigned __int8 *)qword_C900 + (v64 >> 4));
      *(_WORD *)(a2 + 24) = v66;
      if ( !v66 )
        return 0;
      *(_BYTE *)(a2 + 41) = 10;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 72) = v64 & 7;
      v67 = insn_get_next_byte();
      *(_BYTE *)(a2 + 73) = 0;
      *(_QWORD *)(a2 + 56) = v67;
      switch ( v65 )
      {
        case 0:
        case 4:
        case 5:
        case 6:
        case 11:
        case 12:
        case 13:
          return *(unsigned __int16 *)(a2 + 26);
        case 1:
        case 2:
        case 3:
          v88 = (char)insn_get_next_byte();
          result = *(unsigned __int16 *)(a2 + 26);
          v89 = v88 + *(_QWORD *)(a2 + 8) + result;
          v90 = (v88 + *(_DWORD *)(a2 + 8) + result) & 0xFFFFFF;
          if ( !*(_DWORD *)(a1 + 256) )
            v90 = (unsigned __int16)v89;
          *(_BYTE *)(a2 + 81) = 7;
          *(_BYTE *)(a2 + 85) = 1;
          *(_QWORD *)(a2 + 96) = v90;
          return result;
        case 7:
        case 8:
        case 10:
          goto LABEL_113;
        case 9:
          *(_BYTE *)(a2 + 81) = 1;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_WORD *)(a2 + 86) = 52;
          return result;
        case 14:
        case 15:
          *(_BYTE *)(a2 + 73) = 1;
LABEL_113:
          v85 = _mm_loadu_si128((const __m128i *)(a2 + 40));
          v86 = *(_DWORD *)(a2 + 72);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = 52;
          *(__m128i *)(a2 + 80) = v85;
          v87 = _mm_loadu_si128((const __m128i *)(a2 + 56));
          *(_DWORD *)(a2 + 112) = v86;
          result = *(unsigned __int16 *)(a2 + 26);
          *(__m128i *)(a2 + 96) = v87;
          break;
      }
      return result;
    case 0xAAu:
    case 0xB9u:
      return *(unsigned __int16 *)(a2 + 26);
    case 0xCAu:
    case 0xDAu:
      v22 = insn_get_next_byte();
      switch ( v22 & 0xF )
      {
        case 1:
          if ( v5 != 202 )
            return 0;
          v84 = v22 >> 4;
          *(_WORD *)(a2 + 24) = 24;
          if ( (unsigned __int16)(v84 - 8) <= 5u )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v84 + 35);
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = 53;
          break;
        case 2:
          *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
          v83 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 48) = v83;
          result = *(unsigned __int16 *)(a2 + 26);
          break;
        case 6:
          *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
          v82 = insn_get_next_word();
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 1;
          *(_QWORD *)(a2 + 48) = v82;
          result = *(unsigned __int16 *)(a2 + 26);
          break;
        case 8:
          goto LABEL_104;
        case 9:
          goto LABEL_25;
        case 0xB:
          v81 = v22 >> 4;
          if ( (unsigned __int16)(v81 - 8) <= 5u )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v81 + 35);
          result = *(unsigned __int16 *)(a2 + 26);
          break;
        default:
          return 0;
      }
      return result;
    default:
      sub_4A80(
        (__int64)"%a: internal ana_extended() error, code=%x",
        *(_QWORD *)(a2 + 16),
        next_byte,
        (__int64)qword_C920,
        v3,
        v4,
        v99);
  }
}

