__int64 __fastcall sub_5E20(__int64 a1, __int64 a2)
{
  unsigned __int16 next_word; // ax
  int v5; // r12d
  __int16 v6; // dx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int16 v17; // dx
  unsigned int v18; // ecx
  int v19; // r12d
  __int16 v20; // dx
  int v21; // r13d
  __int16 v22; // r14
  __int16 v23; // si
  unsigned __int16 v24; // ax
  unsigned __int8 v25; // r9
  int v26; // r8d
  __int64 v27; // rdx
  int v28; // ebp
  int v29; // r13d
  __int64 v30; // rax
  char v31; // cl
  char v32; // al
  int v33; // r13d
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 dword; // rax
  int v39; // edx
  int v40; // ebp
  int v41; // r12d
  __int64 v42; // rdx
  char v43; // si
  int v44; // r12d
  int v45; // edx
  int v46; // r12d
  int v47; // ebp
  int v48; // ebp
  int v49; // r12d
  int v50; // ebp
  int v51; // r12d
  int v52; // ebp
  int v53; // r12d
  int v54; // ebp
  int v55; // ebp
  int v56; // ebp
  int v57; // r12d
  unsigned __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 word; // rax
  int v64; // ebp
  unsigned __int8 v65; // dl
  unsigned __int8 v66; // dl
  char v67; // cl
  __int64 v68; // rdx
  __int16 v69; // ax
  unsigned __int8 v70; // dl
  unsigned __int8 v71; // dl
  __int64 v72; // rdx
  __int16 v73; // ax
  char v74; // cl
  __int64 v75; // rcx
  int v76; // eax
  unsigned __int8 v77; // dl
  unsigned __int8 v78; // dl
  __int64 v79; // rcx
  __int16 v80; // ax
  __int64 v81; // rdx
  __int16 v82; // ax
  __int64 v83; // rdx
  __int16 v84; // ax
  int v85; // eax
  __int16 v86; // ax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  __int16 v94; // r13
  char v95; // dl
  __int16 v96; // ax
  char v97; // dl
  __int16 v98; // ax
  int v99; // edx
  unsigned int v100; // ecx
  char v101; // dl
  int v102; // edx
  int v103; // edx
  int v104; // eax
  int v105; // eax
  __int64 v106; // rax
  unsigned __int16 v107; // bp
  int v108; // r13d
  int v109; // r12d
  __int16 v110; // ax
  char v111; // al
  char v112; // al
  __int64 v113; // rdi
  __int16 v114; // dx
  char v115; // al
  __int64 v116; // rdi
  char v117; // al
  char v118; // al
  __int64 v119; // rdi
  _BOOL4 v120; // eax
  __int64 v121; // rsi
  int v122; // ecx
  __int16 v123; // ax
  __int16 v124; // ax
  __int16 v125; // dx
  __int64 v126; // rcx
  int v127; // ebp
  int v128; // eax
  char v129; // bp
  int v130; // eax
  __int16 v131; // dx
  __int64 v132; // rdx
  __int16 v133; // ax
  unsigned __int16 v134; // dx
  __int16 v135; // cx
  __int64 v136; // rax
  __int16 v137; // r12
  int v138; // r15d
  __int16 v139; // ax
  char v140; // r14
  __int16 v141; // ax
  __int16 v142; // cx
  __int16 v143; // dx
  __int16 v144; // ax
  int v145; // eax
  int v146; // r12d
  __int16 v147; // ax
  __int64 v148; // rcx
  int v149; // [rsp+Ch] [rbp-4Ch]
  __int16 v150; // [rsp+Ch] [rbp-4Ch]
  _QWORD v151[9]; // [rsp+10h] [rbp-48h] BYREF

  v151[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    return 0;
  next_word = insn_get_next_word(a2);
  v5 = next_word;
  switch ( (int)next_word >> 12 )
  {
    case 0:
      v94 = next_word & 0xF;
      switch ( next_word & 0xF )
      {
        case 0:
        case 1:
          if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
            goto LABEL_57;
          v128 = (int)next_word >> 4;
          v129 = (v5 >> 4) | 0xF0;
          if ( ((v5 >> 4) & 8) == 0 )
            v129 = v128 & 0xF;
          v130 = (unsigned __int16)insn_get_next_word(a2) | (v129 << 16);
          v131 = 159;
          if ( v94 == 1 )
          {
            v130 <<= 8;
            v131 = 160;
          }
          *(_WORD *)(a2 + 24) = v131;
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = v130;
          goto LABEL_185;
        case 2:
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 24) = 90;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = (int)next_word >> 8;
          v102 = ((int)next_word >> 4) & 7;
          if ( (next_word & 0x80u) != 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = (unsigned __int8)(v102 + 16);
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (unsigned __int8)v102 > 4u )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v102 + 79);
          return *(unsigned __int16 *)(a2 + 26);
        case 3:
          switch ( ((int)next_word >> 4) & 0xF )
          {
            case 0:
              *(_WORD *)(a2 + 24) = 11;
              goto LABEL_238;
            case 2:
              *(_WORD *)(a2 + 24) = 9;
              goto LABEL_238;
            case 6:
              *(_WORD *)(a2 + 24) = 173;
              *(_BYTE *)(a2 + 41) = 3;
              v88 = (int)next_word >> 8;
              goto LABEL_236;
            case 7:
              *(_WORD *)(a2 + 24) = 172;
              goto LABEL_229;
            case 8:
              *(_WORD *)(a2 + 24) = 68;
              goto LABEL_226;
            case 9:
              *(_WORD *)(a2 + 24) = 133;
              goto LABEL_226;
            case 0xA:
              *(_WORD *)(a2 + 24) = 134;
              goto LABEL_226;
            case 0xB:
              *(_WORD *)(a2 + 24) = 135;
              goto LABEL_226;
            case 0xC:
              *(_WORD *)(a2 + 24) = 132;
LABEL_229:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 0;
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = (int)next_word >> 8;
              *(_BYTE *)(a2 + 112) = 0;
              *(_BYTE *)(a2 + 85) = 2;
              return *(unsigned __int16 *)(a2 + 26);
            case 0xD:
              *(_WORD *)(a2 + 24) = 176;
              goto LABEL_226;
            case 0xE:
              *(_WORD *)(a2 + 24) = 175;
LABEL_226:
              *(_BYTE *)(a2 + 41) = 3;
              *(_BYTE *)(a2 + 72) = 0;
              *(_WORD *)(a2 + 46) = (int)next_word >> 8;
              *(_BYTE *)(a2 + 45) = 2;
              break;
            default:
              goto LABEL_57;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 4:
          v97 = 0;
          v98 = 45;
          goto LABEL_188;
        case 5:
          v97 = 1;
          v98 = 46;
          goto LABEL_188;
        case 6:
          v97 = 2;
          v98 = 47;
LABEL_188:
          *(_WORD *)(a2 + 24) = v98;
          *(_BYTE *)(a2 + 85) = v97;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (v5 >> 4) & 0xF;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = v5 >> 8;
          *(_BYTE *)(a2 + 112) = 3;
          return *(unsigned __int16 *)(a2 + 26);
        case 7:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 59;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = ((int)next_word >> 4) & 0xF;
          goto LABEL_185;
        case 8:
          if ( (next_word & 0xF00) != 0
            || (((int)next_word >> 4) & 0xFu) > 6
            || (((int)next_word >> 4) & 0xF) == 6 && *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
          {
            return 0;
          }
          v17 = word_11478[((int)next_word >> 4) & 0xF];
          *(_WORD *)(a2 + 24) = v17;
          goto LABEL_21;
        case 9:
          v103 = ((int)next_word >> 4) & 0xF;
          if ( v103 == 2 )
          {
            *(_WORD *)(a2 + 24) = 58;
            goto LABEL_238;
          }
          if ( (((int)next_word >> 4) & 0xFu) > 2 )
          {
            if ( v103 == 3 && *(_DWORD *)(a1 + 280) == *(_DWORD *)(a1 + 276) )
            {
              *(_WORD *)(a2 + 24) = 163;
LABEL_238:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = (int)next_word >> 8;
              return *(unsigned __int16 *)(a2 + 26);
            }
LABEL_57:
            v17 = *(_WORD *)(a2 + 24);
            goto LABEL_21;
          }
          if ( v103 )
          {
            if ( (next_word & 0xF00) != 0 )
              return 0;
            *(_WORD *)(a2 + 24) = 26;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (next_word & 0xF00) != 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 64;
          return *(unsigned __int16 *)(a2 + 26);
        case 0xA:
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 24) = 92;
          v101 = (unsigned __int8)next_word >> 4;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = (int)next_word >> 8;
          switch ( (unsigned __int8)next_word >> 4 )
          {
            case 0:
            case 1:
            case 2:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = (unsigned __int8)(v101 + 86);
              return *(unsigned __int16 *)(a2 + 26);
            case 3:
            case 15:
              v104 = *(_DWORD *)(a1 + 280);
              if ( v104 != *(_DWORD *)(a1 + 268) && v104 != *(_DWORD *)(a1 + 272) )
                return 0;
              *(_WORD *)(a2 + 24) = 90;
              v86 = 85;
              if ( v101 == 3 )
                goto LABEL_217;
              goto LABEL_151;
            case 4:
              if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
                return 0;
              *(_WORD *)(a2 + 24) = 90;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 92;
              return *(unsigned __int16 *)(a2 + 26);
            case 5:
            case 6:
              v105 = *(_DWORD *)(a1 + 280);
              if ( v105 != *(_DWORD *)(a1 + 268) && v105 != *(_DWORD *)(a1 + 272) && v105 != *(_DWORD *)(a1 + 276) )
                return 0;
              v86 = 77;
              if ( v101 == 5 )
                v86 = 78;
              goto LABEL_151;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
              return 0;
          }
        case 0xB:
          v99 = (int)next_word >> 4;
          v100 = v99 & 0xF;
          if ( v100 > 0xA )
            return 0;
          if ( *(_DWORD *)(a1 + 280) == *(_DWORD *)(a1 + 276) )
          {
            if ( v100 == 7 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = (int)next_word >> 8;
LABEL_195:
              v17 = aJyi[v99 & 0xF];
              *(_WORD *)(a2 + 24) = v17;
              goto LABEL_21;
            }
          }
          else if ( (((int)next_word >> 4) & 0xFu) > 2 && v100 != 10 )
          {
            return 0;
          }
          if ( (next_word & 0xF00) != 0 )
            return 0;
          goto LABEL_195;
        case 0xC:
          v95 = 0;
          v96 = 45;
          goto LABEL_184;
        case 0xD:
          v95 = 1;
          v96 = 46;
          goto LABEL_184;
        case 0xE:
          v95 = 2;
          v96 = 47;
LABEL_184:
          *(_WORD *)(a2 + 24) = v96;
          *(_BYTE *)(a2 + 45) = v95;
          *(_BYTE *)(a2 + 41) = 3;
          *(_WORD *)(a2 + 46) = (v5 >> 4) & 0xF;
          *(_BYTE *)(a2 + 72) = 3;
LABEL_185:
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = v5 >> 8;
          return *(unsigned __int16 *)(a2 + 26);
        case 0xF:
          *(_BYTE *)(a2 + 41) = 3;
          *(_WORD *)(a2 + 24) = 43;
          *(_BYTE *)(a2 + 72) = 1;
          *(_WORD *)(a2 + 46) = ((int)next_word >> 4) & 0xF;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = (int)next_word >> 8;
          *(_BYTE *)(a2 + 112) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          return *(unsigned __int16 *)(a2 + 26);
      }
    case 1:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 56;
      *(_BYTE *)(a2 + 45) = 2;
      v40 = next_word & 0xF;
      *(_WORD *)(a2 + 46) = ((int)next_word >> 4) & 0xF;
      v41 = ((int)next_word >> 8) & 0xF;
      if ( get_dtype_size(2) == 2 )
      {
        v40 *= 2;
      }
      else if ( get_dtype_size(2) == 4 )
      {
        v40 *= 4;
      }
      else if ( get_dtype_size(2) == 8 )
      {
        v40 *= 8;
      }
      *(_BYTE *)(a2 + 81) = 4;
      v17 = *(_WORD *)(a2 + 24);
      *(_WORD *)(a2 + 86) = v41;
      *(_QWORD *)(a2 + 96) = v40;
      *(_BYTE *)(a2 + 85) = 2;
      goto LABEL_21;
    case 2:
      *(_BYTE *)(a2 + 41) = 1;
      v42 = next_word & 0xF;
      *(_BYTE *)(a2 + 45) = 2;
      v43 = byte_11420[v42];
      v17 = asc_11440[v42];
      v44 = ((int)next_word >> 8) & 0xF;
      *(_WORD *)(a2 + 24) = v17;
      *(_WORD *)(a2 + 46) = ((int)next_word >> 4) & 0xF;
      if ( (next_word & 0xC) != 0 )
      {
        if ( (next_word & 0xFu) > 6 )
        {
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = v44;
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = v44;
          *(_BYTE *)(a2 + 112) = 2;
          *(_BYTE *)(a2 + 85) = v43;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 81) = 3;
        *(_WORD *)(a2 + 86) = v44;
        *(_BYTE *)(a2 + 112) = 0;
        *(_BYTE *)(a2 + 85) = v43;
      }
      goto LABEL_21;
    case 3:
      v19 = (int)next_word >> 4;
      *(_BYTE *)(a2 + 41) = 1;
      v20 = word_11400[next_word & 0xF];
      v21 = ((int)next_word >> 8) & 0xF;
      *(_BYTE *)(a2 + 45) = 2;
      v22 = v19 & 0xF;
      *(_BYTE *)(a2 + 81) = 1;
      v23 = next_word & 0xF;
      *(_WORD *)(a2 + 24) = v20;
      *(_WORD *)(a2 + 46) = v22;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = v21;
      if ( v20 )
        return *(unsigned __int16 *)(a2 + 26);
      if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
        return 0;
      if ( v23 != 1 )
      {
        if ( v23 != 9 || (next_word & 0x80u) != 0 )
          return 0;
        v24 = insn_get_next_word(a2);
        *(_BYTE *)(a2 + 41) = 5;
        v25 = 0;
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = v19 & 0xF;
        v26 = v24 & 0xFFF;
        v27 = a2 + 80;
        *(_WORD *)(a2 + 24) = word_113C0[(v24 >> 12) & 0xF];
        goto LABEL_34;
      }
      v134 = insn_get_next_word(a2);
      v135 = v134 >> 14;
      v136 = (v134 >> 12) & 3;
      v137 = (v134 >> 12) & 3;
      v138 = v134 & 0xFFF;
      if ( v137 == 3 )
      {
        v150 = v134 >> 14;
        if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 94) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          v146 = 1;
          v147 = 119;
        }
        else
        {
          v146 = 0;
          v147 = 120;
        }
        *(_WORD *)(a2 + 24) = v147;
        if ( !v150 )
        {
          sub_5BE0(a2, a2 + 40, v22, v146);
          v27 = a2 + 80;
          v25 = v146 + 3;
          v26 = v138;
          goto LABEL_34;
        }
        if ( v150 != 1 )
          return 0;
        sub_5C60(a1, a2, a2 + 40, v22, v138, v146 + 3);
        sub_5BE0(a2, a2 + 80, v21, v146);
        v17 = *(_WORD *)(a2 + 24);
      }
      else
      {
        *(_WORD *)(a2 + 24) = asc_113E8[v136];
        if ( v135 != 1 )
        {
          if ( v135 == 2 )
          {
            if ( (v134 & 0x2000) == 0 )
            {
              sub_5C60(a1, a2, a2 + 40, v22, v138, byte_113E0[v136]);
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = v21;
              *(_WORD *)(a2 + 24) = 165 - (v137 == 0);
              return *(unsigned __int16 *)(a2 + 26);
            }
            return 0;
          }
          if ( v135 )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          v27 = a2 + 80;
          v26 = v138;
          *(_BYTE *)(a2 + 45) = 2;
          v25 = byte_113E0[v136];
          *(_WORD *)(a2 + 46) = v22;
LABEL_34:
          sub_5C60(a1, a2, v27, v21, v26, v25);
          v17 = *(_WORD *)(a2 + 24);
          goto LABEL_21;
        }
        sub_5C60(a1, a2, a2 + 40, v22, v134 & 0xFFF, byte_113E0[v136]);
        *(_BYTE *)(a2 + 81) = 1;
        v17 = *(_WORD *)(a2 + 24);
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = v21;
      }
      goto LABEL_21;
    case 4:
      v45 = (int)next_word >> 4;
      switch ( next_word & 0xF )
      {
        case 0:
          v132 = v45 & 0xF;
          if ( (int)v132 <= 2 )
          {
            v133 = word_113AA[v132];
            *(_WORD *)(a2 + 24) = v133;
            if ( v133 )
              goto LABEL_119;
            return 0;
          }
          if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
            goto LABEL_57;
          if ( (_DWORD)v132 == 8 )
          {
            *(_WORD *)(a2 + 24) = 166;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = 0;
            goto LABEL_25;
          }
          if ( (_DWORD)v132 == 15 )
          {
            *(_WORD *)(a2 + 24) = 162;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            v88 = ((int)next_word >> 8) & 0xF;
            goto LABEL_482;
          }
          goto LABEL_57;
        case 1:
          v72 = v45 & 0xF;
          if ( (int)v72 <= 2 )
          {
            v73 = word_113A4[v72];
            *(_WORD *)(a2 + 24) = v73;
            if ( v73 )
              goto LABEL_119;
            return 0;
          }
          if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
            goto LABEL_57;
          v88 = ((int)next_word >> 8) & 0xF;
          if ( (_DWORD)v72 == 14 )
          {
            *(_WORD *)(a2 + 24) = 171;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = 0;
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = v88;
            *(_BYTE *)(a2 + 112) = 0;
            *(_BYTE *)(a2 + 85) = 2;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (_DWORD)v72 == 15 )
          {
            *(_WORD *)(a2 + 24) = 161;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
LABEL_482:
            *(_WORD *)(a2 + 46) = v88;
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = 15;
            *(_BYTE *)(a2 + 112) = 2;
            *(_BYTE *)(a2 + 85) = 2;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (unsigned int)(v72 - 8) > 1 )
            goto LABEL_57;
          v142 = 151;
          if ( (_DWORD)v72 == 8 )
            v142 = 153;
          goto LABEL_426;
        case 2:
          *(_BYTE *)(a2 + 81) = 3;
          v74 = v45 & 0xF;
          *(_WORD *)(a2 + 24) = 93;
          *(_WORD *)(a2 + 86) = ((int)next_word >> 8) & 0xF;
          *(_BYTE *)(a2 + 112) = 2;
          *(_BYTE *)(a2 + 85) = 2;
          switch ( v45 & 0xF )
          {
            case 0:
            case 1:
            case 2:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = (unsigned __int8)(v74 + 86);
              return *(unsigned __int16 *)(a2 + 26);
            case 3:
            case 0xF:
              v85 = *(_DWORD *)(a1 + 280);
              if ( v85 != *(_DWORD *)(a1 + 268) && v85 != *(_DWORD *)(a1 + 272) )
                return 0;
              *(_WORD *)(a2 + 24) = 91;
              v86 = 85;
              if ( v74 == 3 )
LABEL_217:
                v86 = 84;
LABEL_151:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = v86;
              break;
            case 4:
              if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
                return 0;
              *(_WORD *)(a2 + 24) = 91;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 92;
              break;
            case 5:
              v93 = *(_DWORD *)(a1 + 280);
              if ( v93 != *(_DWORD *)(a1 + 268) && v93 != *(_DWORD *)(a1 + 272) && v93 != *(_DWORD *)(a1 + 276) )
                return 0;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 78;
              break;
            case 6:
              v92 = *(_DWORD *)(a1 + 280);
              if ( v92 != *(_DWORD *)(a1 + 268) && v92 != *(_DWORD *)(a1 + 272) && v92 != *(_DWORD *)(a1 + 276) )
                return 0;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 77;
              break;
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
              return 0;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 3:
          v70 = v45 & 7;
          *(_WORD *)(a2 + 24) = 91;
          if ( (next_word & 0x80u) == 0 )
          {
            if ( v70 > 4u )
              return 0;
            v71 = v70 + 79;
          }
          else
          {
            v71 = v70 + 16;
          }
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = v71;
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = ((int)next_word >> 8) & 0xF;
          *(_BYTE *)(a2 + 112) = 2;
          *(_BYTE *)(a2 + 85) = 2;
          return *(unsigned __int16 *)(a2 + 26);
        case 4:
          v79 = v45 & 0xF;
          if ( (((int)next_word >> 4) & 0xFu) <= 2 )
          {
            v80 = word_1139E[v79];
            *(_WORD *)(a2 + 24) = v80;
            if ( v80 )
              goto LABEL_119;
            return 0;
          }
          if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
            goto LABEL_57;
          v88 = ((int)next_word >> 8) & 0xF;
          if ( (v45 & 0xFu) <= 9 )
          {
            if ( (v45 & 8) == 0 )
              goto LABEL_57;
            v143 = 155;
            if ( (_DWORD)v79 == 8 )
              v143 = 156;
            *(_WORD *)(a2 + 24) = v143;
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = 0;
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            *(_WORD *)(a2 + 86) = v88;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (_DWORD)v79 != 15 )
            goto LABEL_57;
          *(_WORD *)(a2 + 24) = 162;
          goto LABEL_476;
        case 5:
          v68 = v45 & 0xF;
          if ( (int)v68 > 2 )
          {
            if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
              goto LABEL_57;
            v88 = ((int)next_word >> 8) & 0xF;
            if ( (_DWORD)v68 == 14 )
            {
              *(_WORD *)(a2 + 24) = 158;
              goto LABEL_474;
            }
            if ( (_DWORD)v68 == 15 )
            {
              *(_WORD *)(a2 + 24) = 161;
LABEL_476:
              *(_BYTE *)(a2 + 41) = 3;
              *(_WORD *)(a2 + 46) = 15;
              *(_BYTE *)(a2 + 72) = 1;
              *(_BYTE *)(a2 + 45) = 2;
LABEL_155:
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = v88;
            }
            else
            {
              if ( (unsigned int)(v68 - 8) > 1 )
                goto LABEL_57;
              v142 = 152;
              if ( (_DWORD)v68 == 8 )
                v142 = 154;
LABEL_426:
              *(_WORD *)(a2 + 24) = v142;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = v88;
            }
          }
          else
          {
            v69 = aVwxrsth[v68 + 6];
            *(_WORD *)(a2 + 24) = v69;
            if ( !v69 )
              return 0;
LABEL_119:
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = (v5 >> 8) & 0xF;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 6:
          *(_BYTE *)(a2 + 41) = 3;
          v67 = v45 & 0xF;
          *(_WORD *)(a2 + 24) = 40;
          *(_WORD *)(a2 + 46) = ((int)next_word >> 8) & 0xF;
          *(_BYTE *)(a2 + 72) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          switch ( v45 & 0xF )
          {
            case 0:
            case 1:
            case 2:
              goto LABEL_146;
            case 3:
            case 0xF:
              v89 = *(_DWORD *)(a1 + 280);
              if ( v89 != *(_DWORD *)(a1 + 268) && v89 != *(_DWORD *)(a1 + 272) )
                return 0;
              *(_WORD *)(a2 + 24) = 38;
              LOWORD(v88) = 85;
              if ( v67 == 3 )
                goto LABEL_159;
              goto LABEL_155;
            case 4:
              if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
                return 0;
              *(_WORD *)(a2 + 24) = 38;
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = 92;
              return *(unsigned __int16 *)(a2 + 26);
            case 5:
              goto LABEL_164;
            case 6:
              goto LABEL_160;
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
              return 0;
          }
        case 7:
          v65 = v45 & 7;
          *(_WORD *)(a2 + 24) = 38;
          if ( (next_word & 0x80u) == 0 )
          {
            if ( v65 > 4u )
              return 0;
            v66 = v65 + 79;
          }
          else
          {
            v66 = v65 + 16;
          }
          *(_BYTE *)(a2 + 41) = 3;
          *(_BYTE *)(a2 + 72) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = ((int)next_word >> 8) & 0xF;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = v66;
          return *(unsigned __int16 *)(a2 + 26);
        case 8:
          v83 = v45 & 0xF;
          if ( (int)v83 > 2 )
            return 0;
          v84 = aVwxrsth[v83 + 3];
          *(_WORD *)(a2 + 24) = v84;
          if ( !v84 )
            return 0;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (v5 >> 8) & 0xF;
          return *(unsigned __int16 *)(a2 + 26);
        case 9:
          v81 = v45 & 0xF;
          if ( (int)v81 > 2 )
          {
            v145 = *(_DWORD *)(a1 + 280);
            if ( v145 != *(_DWORD *)(a1 + 268) && v145 != *(_DWORD *)(a1 + 272) )
              goto LABEL_57;
            v88 = (v5 >> 8) & 0xF;
            if ( (_DWORD)v81 == 10 )
            {
              *(_WORD *)(a2 + 24) = 174;
LABEL_474:
              *(_BYTE *)(a2 + 41) = 3;
LABEL_236:
              *(_WORD *)(a2 + 46) = v88;
              *(_BYTE *)(a2 + 72) = 0;
              *(_BYTE *)(a2 + 45) = 2;
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = 0;
            }
            else
            {
              if ( (_DWORD)v81 != 14 )
                goto LABEL_57;
              *(_WORD *)(a2 + 24) = 174;
              *(_BYTE *)(a2 + 41) = 3;
              *(_WORD *)(a2 + 46) = v88;
              *(_BYTE *)(a2 + 72) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = 0;
            }
          }
          else
          {
            v82 = aVwxrsth[v81];
            *(_WORD *)(a2 + 24) = v82;
            if ( !v82 )
            {
              if ( *(_DWORD *)(a1 + 268) != *(_DWORD *)(a1 + 280) )
                goto LABEL_57;
              return 0;
            }
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            v9 = *(_WORD *)(a2 + 26) == 0;
            *(_WORD *)(a2 + 46) = (v5 >> 8) & 0xF;
            if ( v9 && *(_DWORD *)(a1 + 268) != *(_DWORD *)(a1 + 280) )
              goto LABEL_57;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 0xA:
          *(_BYTE *)(a2 + 41) = 1;
          v67 = v45 & 0xF;
          *(_WORD *)(a2 + 24) = 39;
          *(_WORD *)(a2 + 46) = ((int)next_word >> 8) & 0xF;
          *(_BYTE *)(a2 + 45) = 2;
          switch ( v45 & 0xF )
          {
            case 0:
            case 1:
            case 2:
LABEL_146:
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = (unsigned __int8)(v67 + 86);
              return *(unsigned __int16 *)(a2 + 26);
            case 3:
            case 0xF:
              v87 = *(_DWORD *)(a1 + 280);
              if ( v87 != *(_DWORD *)(a1 + 268) && v87 != *(_DWORD *)(a1 + 272) )
                return 0;
              *(_WORD *)(a2 + 24) = 37;
              LOWORD(v88) = 85;
              if ( v67 == 3 )
LABEL_159:
                LOWORD(v88) = 84;
              goto LABEL_155;
            case 4:
              if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
                return 0;
              *(_WORD *)(a2 + 24) = 37;
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = 92;
              return *(unsigned __int16 *)(a2 + 26);
            case 5:
LABEL_164:
              v91 = *(_DWORD *)(a1 + 280);
              if ( v91 != *(_DWORD *)(a1 + 268) && v91 != *(_DWORD *)(a1 + 272) && v91 != *(_DWORD *)(a1 + 276) )
                return 0;
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = 78;
              return *(unsigned __int16 *)(a2 + 26);
            case 6:
LABEL_160:
              v90 = *(_DWORD *)(a1 + 280);
              if ( v90 != *(_DWORD *)(a1 + 268) && v90 != *(_DWORD *)(a1 + 272) && v90 != *(_DWORD *)(a1 + 276) )
                return 0;
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = 77;
              return *(unsigned __int16 *)(a2 + 26);
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
              return 0;
          }
        case 0xB:
          v75 = v45 & 0xF;
          v76 = (int)next_word >> 8;
          if ( (v45 & 0xFu) <= 2 )
          {
            *(_BYTE *)(a2 + 41) = 3;
            v17 = aC[v75 + 3];
            *(_WORD *)(a2 + 46) = v76 & 0xF;
            *(_BYTE *)(a2 + 72) = 0;
            *(_WORD *)(a2 + 24) = v17;
            *(_BYTE *)(a2 + 45) = 2;
            goto LABEL_21;
          }
          if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
            goto LABEL_57;
          if ( (v45 & 0xFu) <= 0xA )
          {
            if ( (v45 & 8) != 0 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              v17 = aC[(unsigned int)(v75 - 8)];
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 0;
              *(_WORD *)(a2 + 24) = v17;
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = v76 & 0xF;
              *(_BYTE *)(a2 + 112) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              goto LABEL_21;
            }
            if ( (_DWORD)v75 != 4 )
              goto LABEL_57;
            *(_WORD *)(a2 + 24) = 157;
            *(_BYTE *)(a2 + 41) = 3;
            *(_WORD *)(a2 + 46) = v76 & 0xF;
            *(_BYTE *)(a2 + 72) = 0;
            *(_BYTE *)(a2 + 45) = 2;
            return *(unsigned __int16 *)(a2 + 26);
          }
          v148 = (unsigned int)(v75 - 12);
          if ( (unsigned int)v148 > 2 )
            goto LABEL_57;
          *(_BYTE *)(a2 + 41) = 3;
          v17 = aC[v148];
          *(_WORD *)(a2 + 46) = v76 & 0xF;
          *(_BYTE *)(a2 + 72) = 2;
          *(_WORD *)(a2 + 24) = v17;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = 0;
          goto LABEL_21;
        case 0xC:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 77;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = v45 & 0xF;
          goto LABEL_25;
        case 0xD:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 80;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = v45 & 0xF;
          goto LABEL_25;
        case 0xE:
          v77 = v45 & 7;
          *(_WORD *)(a2 + 24) = 37;
          if ( (next_word & 0x80u) == 0 )
          {
            if ( v77 > 4u )
              return 0;
            v78 = v77 + 79;
          }
          else
          {
            v78 = v77 + 16;
          }
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 46) = ((int)next_word >> 8) & 0xF;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = v78;
          return *(unsigned __int16 *)(a2 + 26);
        case 0xF:
          *(_BYTE *)(a2 + 41) = 3;
          *(_WORD *)(a2 + 24) = 42;
          *(_WORD *)(a2 + 46) = v45 & 0xF;
          *(_BYTE *)(a2 + 72) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 86) = ((int)next_word >> 8) & 0xF;
          *(_BYTE *)(a2 + 112) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          return *(unsigned __int16 *)(a2 + 26);
      }
    case 5:
      *(_WORD *)(a2 + 24) = 56;
      v28 = next_word & 0xF;
      v29 = ((int)next_word >> 4) & 0xF;
      if ( get_dtype_size(2) == 2 )
      {
        v28 *= 2;
      }
      else if ( get_dtype_size(2) == 4 )
      {
        v28 *= 4;
      }
      else if ( get_dtype_size(2) == 8 )
      {
        v28 *= 8;
      }
      *(_BYTE *)(a2 + 41) = 4;
      v17 = *(_WORD *)(a2 + 24);
      *(_QWORD *)(a2 + 56) = v28;
      *(_WORD *)(a2 + 46) = v29;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = (v5 >> 8) & 0xF;
      goto LABEL_21;
    case 6:
      v30 = next_word & 0xF;
      v17 = aAab[v30];
      v31 = byte_11340[v30];
      *(_WORD *)(a2 + 24) = v17;
      *(_WORD *)(a2 + 46) = (v5 >> 4) & 0xF;
      v32 = 1;
      if ( v31 != -1 )
      {
        *(_BYTE *)(a2 + 72) = v31;
        v32 = 3;
      }
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 41) = v32;
      goto LABEL_20;
    case 7:
      *(_WORD *)(a2 + 24) = 1;
      goto LABEL_24;
    case 8:
      v18 = ((int)next_word >> 8) & 0xF;
      if ( v18 <= 5 )
      {
        switch ( ((int)next_word >> 8) & 0xF )
        {
          case 0:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 54;
            v48 = next_word & 0xF;
            *(_BYTE *)(a2 + 45) = 2;
            v49 = ((int)next_word >> 4) & 0xF;
            *(_WORD *)(a2 + 46) = 0;
            if ( get_dtype_size(0) == 2 )
            {
              v48 *= 2;
            }
            else if ( get_dtype_size(0) == 4 )
            {
              v48 *= 4;
            }
            else if ( get_dtype_size(0) == 8 )
            {
              v48 *= 8;
            }
            *(_BYTE *)(a2 + 81) = 4;
            v17 = *(_WORD *)(a2 + 24);
            *(_WORD *)(a2 + 86) = v49;
            *(_QWORD *)(a2 + 96) = v48;
            *(_BYTE *)(a2 + 85) = 0;
            goto LABEL_21;
          case 1:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = 0;
            v46 = ((int)next_word >> 4) & 0xF;
            *(_WORD *)(a2 + 24) = 55;
            v47 = next_word & 0xF;
            *(_BYTE *)(a2 + 45) = 2;
            if ( get_dtype_size(1) == 2 )
            {
              v47 *= 2;
            }
            else if ( get_dtype_size(1) == 4 )
            {
              v47 *= 4;
            }
            else if ( get_dtype_size(1) == 8 )
            {
              v47 *= 8;
            }
            *(_BYTE *)(a2 + 81) = 4;
            v17 = *(_WORD *)(a2 + 24);
            *(_WORD *)(a2 + 86) = v46;
            *(_QWORD *)(a2 + 96) = v47;
            *(_BYTE *)(a2 + 85) = 1;
            goto LABEL_21;
          case 3:
            if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
              return 0;
            v54 = (unsigned __int8)next_word;
            *(_WORD *)(a2 + 24) = 157;
            if ( get_dtype_size(2) == 2 )
            {
              v54 *= 2;
            }
            else if ( get_dtype_size(2) == 4 )
            {
              v54 *= 4;
            }
            else if ( get_dtype_size(2) == 8 )
            {
              v54 *= 8;
            }
            *(_BYTE *)(a2 + 41) = 4;
            v17 = *(_WORD *)(a2 + 24);
            *(_WORD *)(a2 + 46) = 92;
            *(_QWORD *)(a2 + 56) = v54;
            *(_BYTE *)(a2 + 45) = 2;
            break;
          case 4:
            *(_WORD *)(a2 + 24) = 54;
            v50 = next_word & 0xF;
            v51 = ((int)next_word >> 4) & 0xF;
            if ( get_dtype_size(0) == 2 )
            {
              v50 *= 2;
            }
            else if ( get_dtype_size(0) == 4 )
            {
              v50 *= 4;
            }
            else if ( get_dtype_size(0) == 8 )
            {
              v50 *= 8;
            }
            *(_BYTE *)(a2 + 41) = 4;
            *(_WORD *)(a2 + 46) = v51;
            goto LABEL_75;
          case 5:
            *(_WORD *)(a2 + 24) = 55;
            v52 = next_word & 0xF;
            v53 = ((int)next_word >> 4) & 0xF;
            if ( get_dtype_size(1) == 2 )
            {
              v52 *= 2;
            }
            else if ( get_dtype_size(1) == 4 )
            {
              v52 *= 4;
            }
            else if ( get_dtype_size(1) == 8 )
            {
              v52 *= 8;
            }
            *(_BYTE *)(a2 + 41) = 4;
            *(_WORD *)(a2 + 46) = v53;
            goto LABEL_80;
          default:
            goto LABEL_57;
        }
        goto LABEL_21;
      }
      if ( ((1LL << v18) & 0xAA00) != 0 )
      {
        v126 = *(_QWORD *)(a2 + 8);
        *(_BYTE *)(a2 + 41) = 7;
        *(_BYTE *)(a2 + 45) = 1;
        v17 = word_11338[((int)next_word >> 9) & 3];
        *(_WORD *)(a2 + 24) = v17;
        *(_QWORD *)(a2 + 56) = v126 + 2 * (char)next_word + 4;
        goto LABEL_21;
      }
      if ( ((1LL << v18) & 0xC0) != 0 )
      {
        if ( *(_DWORD *)(a1 + 280) != *(_DWORD *)(a1 + 276) )
          goto LABEL_57;
        if ( (next_word & 0x100) != 0 )
        {
          v125 = 148;
          if ( (next_word & 8) != 0 )
            v125 = 141;
        }
        else
        {
          v125 = 139;
          if ( (next_word & 8) != 0 )
            v125 = 146;
        }
        *(_WORD *)(a2 + 24) = v125;
        *(_QWORD *)(a2 + 48) = next_word & 7;
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = ((int)next_word >> 4) & 0xF;
      }
      else
      {
        if ( v18 != 8 )
          goto LABEL_57;
        *(_BYTE *)(a2 + 41) = 5;
        *(_WORD *)(a2 + 24) = 17;
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = (char)next_word;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = 0;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 9:
      v11 = (unsigned __int8)next_word;
      *(_WORD *)(a2 + 24) = 49;
      if ( get_dtype_size(1) == 2 )
      {
        v11 *= 2;
      }
      else if ( get_dtype_size(1) == 4 )
      {
        v11 *= 4;
      }
      else if ( get_dtype_size(1) == 8 )
      {
        v11 *= 8;
      }
      *(_BYTE *)(a2 + 41) = 4;
      *(_WORD *)(a2 + 46) = 89;
      *(_QWORD *)(a2 + 56) = v11;
      *(_BYTE *)(a2 + 45) = 1;
      if ( (*(_BYTE *)(a1 + 256) & 1) != 0 )
        goto LABEL_19;
      v12 = *(_QWORD *)(a2 + 8) + 16LL * *(_QWORD *)a2 + 4 + v11;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v12 != v13 )
      {
        v13 &= v12;
        if ( v12 == -1 )
          v13 = -1;
      }
      v14 = ea2node(v13);
      v15 = *(_QWORD *)(a2 + 16);
      v16 = *(_QWORD *)(a1 + 248);
      v151[0] = v14;
      netnode_supset(v16, v15, v151, 8, 321);
      v17 = *(_WORD *)(a2 + 24);
      if ( v17 == 57 )
        goto LABEL_300;
      if ( get_dtype_size(1) == 2 )
        goto LABEL_314;
      if ( get_dtype_size(1) != 4 )
        goto LABEL_19;
      goto LABEL_51;
    case 10:
      v6 = 8;
      goto LABEL_5;
    case 11:
      v6 = 10;
LABEL_5:
      *(_WORD *)(a2 + 24) = v6;
      v7 = next_word & 0xFFF;
      v8 = next_word | 0xFFFFFFFFFFFFF000LL;
      v9 = (next_word & 0x800) == 0;
      v10 = *(_QWORD *)(a2 + 8);
      if ( !v9 )
        v7 = v8;
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 1;
      *(_QWORD *)(a2 + 56) = v10 + 2 * v7 + 4;
      return *(unsigned __int16 *)(a2 + 26);
    case 12:
      switch ( HIBYTE(next_word) & 0xF )
      {
        case 0:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 51;
          v127 = (unsigned __int8)next_word;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = 0;
          if ( get_dtype_size(0) == 2 )
          {
            v127 *= 2;
          }
          else if ( get_dtype_size(0) == 4 )
          {
            v127 *= 4;
          }
          else if ( get_dtype_size(0) == 8 )
          {
            v127 *= 8;
          }
          *(_BYTE *)(a2 + 81) = 4;
          v17 = *(_WORD *)(a2 + 24);
          *(_WORD *)(a2 + 86) = 80;
          *(_QWORD *)(a2 + 96) = v127;
          *(_BYTE *)(a2 + 85) = 0;
          goto LABEL_21;
        case 1:
          *(_BYTE *)(a2 + 41) = 1;
          v55 = (unsigned __int8)next_word;
          *(_WORD *)(a2 + 24) = 52;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = 0;
          if ( get_dtype_size(1) == 2 )
          {
            v55 *= 2;
          }
          else if ( get_dtype_size(1) == 4 )
          {
            v55 *= 4;
          }
          else if ( get_dtype_size(1) == 8 )
          {
            v55 *= 8;
          }
          *(_BYTE *)(a2 + 81) = 4;
          v17 = *(_WORD *)(a2 + 24);
          *(_WORD *)(a2 + 86) = 80;
          *(_QWORD *)(a2 + 96) = v55;
          *(_BYTE *)(a2 + 85) = 1;
          goto LABEL_21;
        case 2:
          *(_BYTE *)(a2 + 41) = 1;
          v56 = (unsigned __int8)next_word;
          *(_WORD *)(a2 + 24) = 53;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = 0;
          if ( get_dtype_size(2) == 2 )
          {
            v56 *= 2;
          }
          else if ( get_dtype_size(2) == 4 )
          {
            v56 *= 4;
          }
          else if ( get_dtype_size(2) == 8 )
          {
            v56 *= 8;
          }
          *(_BYTE *)(a2 + 81) = 4;
          v17 = *(_WORD *)(a2 + 24);
          *(_WORD *)(a2 + 86) = 80;
          *(_QWORD *)(a2 + 96) = v56;
          *(_BYTE *)(a2 + 85) = 2;
          goto LABEL_21;
        case 3:
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 100;
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 48) = (unsigned __int8)next_word;
          return *(unsigned __int16 *)(a2 + 26);
        case 4:
          v50 = (unsigned __int8)next_word;
          *(_WORD *)(a2 + 24) = 51;
          if ( get_dtype_size(0) == 2 )
          {
            v50 *= 2;
          }
          else if ( get_dtype_size(0) == 4 )
          {
            v50 *= 4;
          }
          else if ( get_dtype_size(0) == 8 )
          {
            v50 *= 8;
          }
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 80;
LABEL_75:
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 56) = v50;
          goto LABEL_76;
        case 5:
          v52 = (unsigned __int8)next_word;
          *(_WORD *)(a2 + 24) = 52;
          if ( get_dtype_size(1) == 2 )
          {
            v52 *= 2;
          }
          else if ( get_dtype_size(1) == 4 )
          {
            v52 *= 4;
          }
          else if ( get_dtype_size(1) == 8 )
          {
            v52 *= 8;
          }
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 80;
LABEL_80:
          *(_BYTE *)(a2 + 45) = 1;
          *(_QWORD *)(a2 + 56) = v52;
          goto LABEL_76;
        case 6:
          v64 = (unsigned __int8)next_word;
          *(_WORD *)(a2 + 24) = 53;
          if ( get_dtype_size(2) == 2 )
          {
            v64 *= 2;
          }
          else if ( get_dtype_size(2) == 4 )
          {
            v64 *= 4;
          }
          else if ( get_dtype_size(2) == 8 )
          {
            v64 *= 8;
          }
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 80;
          v17 = *(_WORD *)(a2 + 24);
          *(_QWORD *)(a2 + 56) = v64;
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = 0;
          goto LABEL_21;
        case 7:
          v57 = (unsigned __int8)next_word;
          *(_WORD *)(a2 + 24) = 57;
          if ( get_dtype_size(2) == 2 )
          {
            v57 *= 2;
          }
          else if ( get_dtype_size(2) == 4 )
          {
            v57 *= 4;
          }
          else if ( get_dtype_size(2) == 8 )
          {
            v57 *= 8;
          }
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 89;
          *(_QWORD *)(a2 + 56) = v57;
          *(_BYTE *)(a2 + 45) = 2;
          if ( (*(_BYTE *)(a1 + 256) & 1) != 0 )
            goto LABEL_76;
          v58 = ((*(_QWORD *)(a2 + 8) + 4LL) & 0xFFFFFFFFFFFFFFFCLL) + 16LL * *(_QWORD *)a2 + v57;
          v59 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
          if ( v58 != v59 )
          {
            v59 &= v58;
            if ( v58 == -1 )
              v59 = -1;
          }
          v60 = ea2node(v59);
          v61 = *(_QWORD *)(a2 + 16);
          v62 = *(_QWORD *)(a1 + 248);
          v151[0] = v60;
          netnode_supset(v62, v61, v151, 8, 321);
          if ( *(_WORD *)(a2 + 24) == 57 )
          {
            *(_QWORD *)(a2 + 56) = v59;
            *(_BYTE *)(a2 + 41) = 2;
          }
          else
          {
            if ( get_dtype_size(2) == 2 )
            {
              word = (__int16)get_word(v59);
            }
            else
            {
              if ( get_dtype_size(2) != 4 )
                goto LABEL_76;
              word = (int)get_dword(v59);
            }
            *(_QWORD *)(a2 + 48) = word;
            *(_BYTE *)(a2 + 41) = 5;
          }
LABEL_76:
          *(_BYTE *)(a2 + 81) = 1;
          v17 = *(_WORD *)(a2 + 24);
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = 0;
          break;
        case 8:
        case 9:
        case 0xA:
        case 0xB:
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 0;
          v17 = word_11330[HIBYTE(next_word) & 3];
          *(_QWORD *)(a2 + 48) = (unsigned __int8)next_word;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 24) = v17;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 86) = 0;
          goto LABEL_21;
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 0;
          v17 = word_11328[HIBYTE(next_word) & 3];
          *(_QWORD *)(a2 + 48) = (unsigned __int8)next_word;
          *(_BYTE *)(a2 + 81) = 3;
          *(_WORD *)(a2 + 24) = v17;
          *(_WORD *)(a2 + 86) = 80;
          *(_BYTE *)(a2 + 112) = 3;
          *(_BYTE *)(a2 + 85) = 0;
          goto LABEL_21;
      }
      goto LABEL_21;
    case 13:
      v33 = (unsigned __int8)next_word;
      *(_WORD *)(a2 + 24) = 50;
      if ( get_dtype_size(2) == 2 )
      {
        v33 *= 2;
      }
      else if ( get_dtype_size(2) == 4 )
      {
        v33 *= 4;
      }
      else if ( get_dtype_size(2) == 8 )
      {
        v33 *= 8;
      }
      *(_BYTE *)(a2 + 41) = 4;
      *(_WORD *)(a2 + 46) = 89;
      *(_QWORD *)(a2 + 56) = v33;
      *(_BYTE *)(a2 + 45) = 2;
      if ( (*(_BYTE *)(a1 + 256) & 1) != 0 )
        goto LABEL_19;
      v34 = ((*(_QWORD *)(a2 + 8) + 4LL) & 0xFFFFFFFFFFFFFFFCLL) + 16LL * *(_QWORD *)a2 + v33;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v34 != v13 )
      {
        v13 &= v34;
        if ( v34 == -1 )
          v13 = -1;
      }
      v35 = ea2node(v13);
      v36 = *(_QWORD *)(a2 + 16);
      v37 = *(_QWORD *)(a1 + 248);
      v151[0] = v35;
      netnode_supset(v37, v36, v151, 8, 321);
      v17 = *(_WORD *)(a2 + 24);
      if ( v17 == 57 )
      {
LABEL_300:
        *(_QWORD *)(a2 + 56) = v13;
        *(_BYTE *)(a2 + 41) = 2;
LABEL_20:
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = (v5 >> 8) & 0xF;
LABEL_21:
        if ( v17 )
          return *(unsigned __int16 *)(a2 + 26);
        return 0;
      }
      if ( get_dtype_size(2) == 2 )
      {
LABEL_314:
        dword = (__int16)get_word(v13);
      }
      else
      {
        if ( get_dtype_size(2) != 4 )
        {
LABEL_19:
          v17 = *(_WORD *)(a2 + 24);
          goto LABEL_20;
        }
LABEL_51:
        dword = (int)get_dword(v13);
      }
      *(_QWORD *)(a2 + 48) = dword;
      *(_BYTE *)(a2 + 41) = 5;
      goto LABEL_19;
    case 14:
      *(_WORD *)(a2 + 24) = 48;
LABEL_24:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = (char)next_word;
LABEL_25:
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = ((int)next_word >> 8) & 0xF;
      return *(unsigned __int16 *)(a2 + 26);
    case 15:
      v39 = *(_DWORD *)(a1 + 280);
      if ( v39 != *(_DWORD *)(a1 + 268) && v39 != *(_DWORD *)(a1 + 272) && v39 != *(_DWORD *)(a1 + 276) )
        goto LABEL_57;
      v106 = next_word & 0xF;
      v107 = BYTE1(v5) & 0xF;
      v108 = (v5 >> 4) & 0xF;
      switch ( v106 )
      {
        case 0LL:
          v110 = 107;
          goto LABEL_247;
        case 1LL:
          v110 = 128;
          goto LABEL_247;
        case 2LL:
          v110 = 122;
          goto LABEL_247;
        case 3LL:
          v110 = 112;
          goto LABEL_247;
        case 4LL:
          v110 = 108;
          goto LABEL_247;
        case 5LL:
          v110 = 109;
LABEL_247:
          *(_WORD *)(a2 + 24) = v110;
          if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 94) - 1) <= 0xFFFFFFFFFFFFFFFDLL
            && (((unsigned __int8)(v5 >> 4) | BYTE1(v5)) & 1) != 0 )
          {
            return 0;
          }
          if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 93) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            *(_BYTE *)(a2 + 41) = 1;
            v124 = ((unsigned __int16)v108 >> 1) + 56;
            if ( ((v5 >> 4) & 1) != 0 )
              v124 = ((unsigned __int16)v108 >> 1) + 64;
            *(_WORD *)(a2 + 46) = v124;
            v111 = 4;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 1;
            v111 = 3;
            *(_WORD *)(a2 + 46) = v108 + 24;
          }
          *(_BYTE *)(a2 + 45) = v111;
          if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 93) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            *(_BYTE *)(a2 + 81) = 1;
            v123 = (v107 >> 1) + 56;
            if ( (v5 & 0x100) != 0 )
              v123 = (v107 >> 1) + 64;
            *(_WORD *)(a2 + 86) = v123;
            v112 = 4;
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 1;
            v112 = 3;
            *(_WORD *)(a2 + 86) = v107 + 24;
          }
          *(_BYTE *)(a2 + 85) = v112;
          v17 = *(_WORD *)(a2 + 24);
          goto LABEL_21;
        case 6LL:
        case 7LL:
        case 8LL:
        case 9LL:
        case 10LL:
        case 11LL:
        case 12LL:
          v149 = v106;
          if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 94) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v139 = 119;
            v109 = 1;
            v140 = 4;
          }
          else
          {
            if ( (_WORD)v149 == 12 )
            {
              *(_WORD *)(a2 + 24) = 119;
              v109 = 0;
LABEL_244:
              sub_5BE0(a2, a2 + 40, v108, v109);
LABEL_245:
              sub_5BE0(a2, a2 + 80, v107, v109);
              v17 = *(_WORD *)(a2 + 24);
              goto LABEL_21;
            }
            v139 = 120;
            v109 = 0;
            v140 = 3;
          }
          *(_WORD *)(a2 + 24) = v139;
          switch ( v149 )
          {
            case 7:
              sub_5BE0(a2, a2 + 40, v108, v109);
              *(_BYTE *)(a2 + 81) = 3;
              v17 = *(_WORD *)(a2 + 24);
              *(_WORD *)(a2 + 86) = v107;
              *(_BYTE *)(a2 + 112) = 3;
              *(_BYTE *)(a2 + 85) = v140;
              break;
            case 8:
              *(_BYTE *)(a2 + 41) = 3;
              *(_WORD *)(a2 + 46) = v108;
              *(_BYTE *)(a2 + 72) = 0;
              *(_BYTE *)(a2 + 45) = v140;
              goto LABEL_245;
            case 9:
              *(_BYTE *)(a2 + 41) = 3;
              *(_WORD *)(a2 + 46) = v108;
              *(_BYTE *)(a2 + 72) = 1;
              *(_BYTE *)(a2 + 45) = v140;
              goto LABEL_245;
            case 10:
              sub_5BE0(a2, a2 + 40, v108, v109);
              *(_BYTE *)(a2 + 81) = 3;
              v17 = *(_WORD *)(a2 + 24);
              *(_WORD *)(a2 + 86) = v107;
              *(_BYTE *)(a2 + 112) = 0;
              *(_BYTE *)(a2 + 85) = v140;
              break;
            case 11:
              sub_5BE0(a2, a2 + 40, v108, v109);
              *(_BYTE *)(a2 + 81) = 3;
              v17 = *(_WORD *)(a2 + 24);
              *(_WORD *)(a2 + 86) = v107;
              *(_BYTE *)(a2 + 112) = 2;
              *(_BYTE *)(a2 + 85) = v140;
              break;
            case 12:
              goto LABEL_244;
            default:
              *(_BYTE *)(a2 + 41) = 3;
              *(_WORD *)(a2 + 46) = v108;
              *(_BYTE *)(a2 + 72) = 3;
              *(_BYTE *)(a2 + 45) = v140;
              goto LABEL_245;
          }
          break;
        case 13LL:
          switch ( v108 )
          {
            case 0:
              *(_WORD *)(a2 + 24) = 127;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 78;
              sub_5BE0(a2, a2 + 80, BYTE1(v5) & 0xF, 0);
              v17 = *(_WORD *)(a2 + 24);
              goto LABEL_21;
            case 1:
              *(_WORD *)(a2 + 24) = 116;
              v121 = a2 + 40;
              v122 = 0;
              goto LABEL_281;
            case 2:
              *(_WORD *)(a2 + 24) = 117;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 78;
              sub_5BE0(a2, a2 + 80, BYTE1(v5) & 0xF, -1);
              v17 = *(_WORD *)(a2 + 24);
              goto LABEL_21;
            case 3:
              *(_WORD *)(a2 + 24) = 129;
              v121 = a2 + 40;
              v122 = -1;
              goto LABEL_281;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
              v119 = *(_QWORD *)(a2 + 16);
              *(_WORD *)(a2 + 24) = byte_1131C[v108 - 4];
              v120 = sub_5BB0(v119);
              if ( ((v5 >> 4) & 0xFu) > 6 && v120 )
                return 0;
              sub_5BE0(a2, a2 + 40, BYTE1(v5) & 0xF, v120);
              v17 = *(_WORD *)(a2 + 24);
              goto LABEL_21;
            case 10:
              if ( (v5 & 0x100) != 0 )
                return 0;
              *(_WORD *)(a2 + 24) = 111;
              goto LABEL_275;
            case 11:
              if ( (v5 & 0x100) != 0 )
                return 0;
              *(_WORD *)(a2 + 24) = 110;
              v121 = a2 + 40;
              v122 = 1;
LABEL_281:
              sub_5BE0(a2, v121, BYTE1(v5) & 0xF, v122);
              *(_BYTE *)(a2 + 81) = 1;
              v17 = *(_WORD *)(a2 + 24);
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = 78;
              goto LABEL_21;
            case 12:
            case 13:
              goto LABEL_57;
            case 14:
              if ( sub_5BB0(*(_QWORD *)(a2 + 16)) )
                return 0;
              *(_WORD *)(a2 + 24) = 113;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = (BYTE1(v5) & 3) + 72;
              goto LABEL_278;
            case 15:
              if ( (v5 & 0x100) != 0 )
              {
                switch ( BYTE1(v5) & 0xF )
                {
                  case 1:
                  case 5:
                  case 9:
                  case 0xD:
                    if ( sub_5BB0(*(_QWORD *)(a2 + 16)) )
                      return 0;
                    *(_WORD *)(a2 + 24) = 130;
                    *(_BYTE *)(a2 + 41) = 1;
                    *(_BYTE *)(a2 + 45) = 2;
                    *(_WORD *)(a2 + 46) = 76;
                    break;
                  case 3:
                    *(_WORD *)(a2 + 24) = 125;
                    return *(unsigned __int16 *)(a2 + 26);
                  case 7:
                    *(_WORD *)(a2 + 24) = 179;
                    return *(unsigned __int16 *)(a2 + 26);
                  case 0xB:
                    *(_WORD *)(a2 + 24) = 124;
                    return *(unsigned __int16 *)(a2 + 26);
                  default:
                    goto LABEL_57;
                }
LABEL_278:
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_WORD *)(a2 + 86) = ((v5 >> 10) & 3) + 72;
                return *(unsigned __int16 *)(a2 + 26);
              }
              if ( sub_5BB0(*(_QWORD *)(a2 + 16)) )
                return 0;
              *(_WORD *)(a2 + 24) = 136;
LABEL_275:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = 78;
              sub_5BE0(a2, a2 + 80, BYTE1(v5) & 0xF, 1);
              v17 = *(_WORD *)(a2 + 24);
              break;
          }
          goto LABEL_21;
        case 14LL:
          if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 93) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
            return 0;
          v113 = *(_QWORD *)(a2 + 16);
          *(_WORD *)(a2 + 24) = 118;
          if ( (unsigned __int64)(get_sreg(v113, 93) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v114 = 56;
            v115 = 4;
          }
          else
          {
            v114 = 24;
            v115 = 3;
          }
          *(_BYTE *)(a2 + 41) = 1;
          v116 = *(_QWORD *)(a2 + 16);
          *(_WORD *)(a2 + 46) = v114;
          *(_BYTE *)(a2 + 45) = v115;
          if ( (unsigned __int64)(get_sreg(v116, 93) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v144 = ((unsigned __int16)v108 >> 1) + 56;
            if ( ((v5 >> 4) & 1) != 0 )
              v144 = ((unsigned __int16)v108 >> 1) + 64;
            *(_WORD *)(a2 + 86) = v144;
            v117 = 4;
            *(_BYTE *)(a2 + 81) = 1;
          }
          else
          {
            *(_BYTE *)(a2 + 81) = 1;
            v117 = 3;
            *(_WORD *)(a2 + 86) = v108 + 24;
          }
          *(_BYTE *)(a2 + 85) = v117;
          if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 93) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v141 = (v107 >> 1) + 56;
            if ( (v5 & 0x100) != 0 )
              v141 = (v107 >> 1) + 64;
            *(_WORD *)(a2 + 126) = v141;
            v118 = 4;
            *(_BYTE *)(a2 + 121) = 1;
          }
          else
          {
            *(_BYTE *)(a2 + 121) = 1;
            v118 = 3;
            *(_WORD *)(a2 + 126) = v107 + 24;
          }
          *(_BYTE *)(a2 + 125) = v118;
          goto LABEL_57;
        default:
          goto LABEL_57;
      }
      goto LABEL_21;
  }
}
