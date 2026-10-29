__int64 __fastcall sub_6D40(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 next_word; // ax
  int v4; // ebx
  __int16 v5; // dx
  int v6; // ecx
  int v7; // edi
  __int16 v8; // si
  __int16 v9; // ax
  int v10; // edx
  int v11; // ebx
  int v12; // r8d
  __int16 v13; // di
  int v14; // edx
  __int16 v15; // cx
  __int16 v16; // si
  __int16 v17; // dx
  unsigned __int16 v18; // r13
  unsigned __int16 v19; // r13
  __int16 v20; // bx
  int v21; // ecx
  unsigned __int16 v22; // r13
  unsigned __int16 v23; // r13
  unsigned __int16 v24; // r13
  unsigned __int16 v25; // r13
  unsigned __int16 v26; // r13
  unsigned __int16 v27; // r13
  __int16 v28; // bx
  int v29; // ecx
  unsigned __int16 v30; // r13
  unsigned __int16 v31; // r13
  unsigned __int16 v32; // r13
  unsigned __int16 v33; // r13
  __int16 v34; // bx
  int v35; // ecx
  unsigned __int16 v36; // r13
  __int16 v37; // bx
  int v38; // ecx
  int v39; // ebx
  __int64 v40; // rcx
  signed int v41; // edx
  int v42; // ebx
  __int64 v43; // rcx
  signed int v44; // edx
  int v45; // ebx
  __int64 v46; // rcx
  signed int v47; // edx
  int v48; // ebx
  __int64 v49; // rcx
  signed int v50; // edx
  int v51; // ebx
  __int64 v52; // rcx
  signed int v53; // edx
  int v54; // ebx
  __int64 v55; // rcx
  signed int v56; // edx
  int v57; // ebx
  __int64 v58; // rcx
  signed int v59; // edx
  int v60; // ebx
  __int64 v61; // rcx
  signed int v62; // edx
  int v63; // ebx
  __int64 v64; // rcx
  signed int v65; // edx
  int v66; // ebx
  __int64 v67; // rcx
  signed int v68; // edx
  int v69; // ebx
  __int64 v70; // rcx
  signed int v71; // edx
  int v72; // ebx
  signed int v73; // edx
  __int64 v74; // rcx
  int v75; // ebx
  __int64 v76; // rcx
  signed int v77; // edx
  int v78; // ebx
  __int64 v79; // rcx
  signed int v80; // edx
  unsigned __int16 v81; // bx
  __int16 v82; // dx
  __int16 v83; // dx
  unsigned __int16 word; // r13
  unsigned __int16 v85; // r13
  int v86; // ebx
  __int64 v87; // rcx
  signed int v88; // edx
  __int16 v89; // cx
  __int64 v90; // rdx
  __int16 v91; // cx
  __int64 v92; // rdx
  __int16 v93; // cx
  __int64 v94; // rdx
  __int16 v95; // cx
  __int64 v96; // rdx
  __int16 v97; // cx
  __int64 v98; // rdx
  __int16 v99; // cx
  __int64 v100; // rdx
  __int16 v101; // cx
  __int64 v102; // rdx
  __int16 v103; // cx
  __int64 v104; // rdx
  __int16 v105; // cx
  __int64 v106; // rdx
  __int16 v107; // cx
  __int64 v108; // rdx
  __int16 v109; // cx
  __int64 v110; // rdx
  __int16 v111; // cx
  __int64 v112; // rdx
  __int16 v113; // cx
  __int64 v114; // rdx
  __int16 v115; // cx
  __int64 v116; // rdx
  __int16 v117; // cx
  __int64 v118; // rdx

  next_word = insn_get_next_word();
  v4 = next_word;
  v5 = next_word >> 11;
  switch ( next_word >> 11 )
  {
    case 0:
      if ( (next_word & 0x10) != 0 )
      {
        switch ( next_word & 0xF )
        {
          case 0:
            *(_BYTE *)(a1 + 41) = 5;
            result = *(unsigned __int16 *)(a1 + 26);
            *(_WORD *)(a1 + 24) = 320;
            *(_BYTE *)(a1 + 45) = 0;
            *(_QWORD *)(a1 + 48) = BYTE1(v4);
            break;
          case 1:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 320;
            *(_WORD *)(a1 + 46) = HIBYTE(next_word) + 24;
            result = *(unsigned __int16 *)(a1 + 26);
            break;
          case 2:
            *(_BYTE *)(a1 + 41) = 5;
            result = *(unsigned __int16 *)(a1 + 26);
            *(_WORD *)(a1 + 24) = 343;
            *(_BYTE *)(a1 + 45) = 0;
            *(_QWORD *)(a1 + 48) = BYTE1(v4);
            break;
          case 3:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 343;
            *(_WORD *)(a1 + 46) = HIBYTE(next_word) + 24;
            result = *(unsigned __int16 *)(a1 + 26);
            break;
          case 4:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 341;
            *(_WORD *)(a1 + 46) = HIBYTE(next_word) + 24;
            result = *(unsigned __int16 *)(a1 + 26);
            break;
          case 5:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 336;
            *(_WORD *)(a1 + 46) = HIBYTE(next_word) + 24;
            result = *(unsigned __int16 *)(a1 + 26);
            break;
          case 6:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 323;
            *(_WORD *)(a1 + 46) = HIBYTE(next_word) + 24;
            result = *(unsigned __int16 *)(a1 + 26);
            break;
          case 7:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 342;
            *(_WORD *)(a1 + 46) = HIBYTE(next_word) + 24;
            result = *(unsigned __int16 *)(a1 + 26);
            break;
          case 8:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 349;
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 46) = HIBYTE(next_word) + 24;
            *(_WORD *)(a1 + 86) = 7;
            result = *(unsigned __int16 *)(a1 + 26);
            break;
          case 9:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 349;
            *(_WORD *)(a1 + 46) = 7;
            *(_BYTE *)(a1 + 81) = 1;
            *(_WORD *)(a1 + 86) = HIBYTE(next_word) + 24;
            result = *(unsigned __int16 *)(a1 + 26);
            break;
          case 0xA:
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 349;
            *(_WORD *)(a1 + 46) = HIBYTE(next_word) + 24;
            *(_WORD *)(a1 + 86) = 6;
            result = *(unsigned __int16 *)(a1 + 26);
            *(_BYTE *)(a1 + 81) = 1;
            break;
          default:
            result = 0;
            break;
        }
      }
      else
      {
        v81 = HIBYTE(next_word);
        if ( HIBYTE(next_word) == 2 )
        {
          *(_BYTE *)(a1 + 41) = 0;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 24) = 339;
        }
        else if ( v81 > 2u )
        {
          result = 0;
          if ( v81 == 3 )
          {
            *(_BYTE *)(a1 + 41) = 0;
            result = *(unsigned __int16 *)(a1 + 26);
            *(_WORD *)(a1 + 24) = 342;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 41) = 0;
          if ( v81 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
            *(_WORD *)(a1 + 24) = 332;
          }
          else
          {
            *(_WORD *)(a1 + 24) = 312;
            result = *(unsigned __int16 *)(a1 + 26);
          }
        }
      }
      break;
    case 1:
      switch ( next_word & 0xF )
      {
        case 0:
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = 294;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_WORD *)(a1 + 86) = ((unsigned __int8)next_word >> 5) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          break;
        case 1:
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = 289;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_WORD *)(a1 + 86) = ((unsigned __int8)next_word >> 5) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          break;
        case 2:
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = 321;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_WORD *)(a1 + 86) = ((unsigned __int8)next_word >> 5) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          break;
        case 3:
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = 322;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_WORD *)(a1 + 86) = ((unsigned __int8)next_word >> 5) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          break;
        case 4:
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = 328;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_WORD *)(a1 + 86) = ((unsigned __int8)next_word >> 5) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          break;
        case 5:
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = 329;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_WORD *)(a1 + 86) = ((unsigned __int8)next_word >> 5) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          break;
        case 6:
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = 337;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_WORD *)(a1 + 86) = ((unsigned __int8)next_word >> 5) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          break;
        case 7:
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 24) = 338;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_WORD *)(a1 + 86) = ((unsigned __int8)next_word >> 5) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          break;
        case 8:
          result = 0;
          break;
        case 9:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 289;
          *(_BYTE *)(a1 + 81) = 5;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = ((unsigned __int16)v4 >> 4) & 0xF;
          break;
        case 0xA:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 321;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_QWORD *)(a1 + 88) = ((unsigned __int16)v4 >> 4) & 0xF;
          break;
        case 0xB:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 322;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_QWORD *)(a1 + 88) = ((unsigned __int16)v4 >> 4) & 0xF;
          break;
        case 0xC:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 328;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_QWORD *)(a1 + 88) = ((unsigned __int16)v4 >> 4) & 0xF;
          break;
        case 0xD:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 329;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_QWORD *)(a1 + 88) = ((unsigned __int16)v4 >> 4) & 0xF;
          break;
        case 0xE:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 337;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_QWORD *)(a1 + 88) = ((unsigned __int16)v4 >> 4) & 0xF;
          break;
        case 0xF:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 338;
          *(_BYTE *)(a1 + 81) = 5;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = ((unsigned __int16)v4 >> 4) & 0xF;
          break;
      }
      break;
    case 2:
      v17 = next_word & 3;
      if ( v17 == 2 )
      {
        *(_WORD *)(a1 + 24) = 333;
        v83 = (((int)next_word >> 2) & 7) + 24;
        *(_BYTE *)(a1 + 121) = 1;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 46) = (((int)next_word >> 8) & 7) + 24;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 86) = ((v4 >> 5) & 7) + 24;
        *(_WORD *)(a1 + 126) = v83;
        if ( ((v4 >> 5) & 7) == 0 )
        {
          *(_WORD *)(a1 + 86) = v83;
          *(_WORD *)(a1 + 24) = 330;
          *(_BYTE *)(a1 + 121) = 0;
        }
      }
      else if ( v17 == 3 )
      {
        *(_WORD *)(a1 + 24) = 351;
        v82 = (((int)next_word >> 2) & 7) + 24;
        *(_BYTE *)(a1 + 121) = 1;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 46) = (((int)next_word >> 8) & 7) + 24;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 86) = ((v4 >> 5) & 7) + 24;
        *(_WORD *)(a1 + 126) = v82;
        if ( ((v4 >> 5) & 7) == 0 )
        {
          *(_WORD *)(a1 + 86) = v82;
          *(_WORD *)(a1 + 24) = 317;
          *(_BYTE *)(a1 + 121) = 0;
        }
      }
      else
      {
        result = 0;
        if ( (v4 & 3) == 0 )
        {
          *(_BYTE *)(a1 + 121) = 1;
          *(_WORD *)(a1 + 24) = 286;
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 46) = (BYTE1(v4) & 7) + 24;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 126) = (((int)(unsigned __int16)v4 >> 2) & 7) + 24;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 86) = (((int)(unsigned __int16)v4 >> 5) & 7) + 24;
        }
      }
      break;
    case 3:
      v10 = next_word;
      v11 = (int)next_word >> 8;
      v12 = (int)next_word >> 2;
      v13 = next_word & 3;
      result = *(unsigned __int16 *)(a1 + 26);
      v14 = ((v10 >> 5) & 7) + 24;
      v15 = (v11 & 7) + 24;
      v16 = (v12 & 7) + 24;
      switch ( v13 )
      {
        case 2:
          *(_BYTE *)(a1 + 121) = 1;
          *(_WORD *)(a1 + 24) = 283;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = v15;
          *(_WORD *)(a1 + 86) = v14;
          *(_WORD *)(a1 + 126) = v16;
          break;
        case 3:
          *(_BYTE *)(a1 + 121) = 1;
          *(_WORD *)(a1 + 24) = 282;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = v15;
          *(_WORD *)(a1 + 86) = v14;
          *(_WORD *)(a1 + 126) = v16;
          break;
        case 1:
          *(_BYTE *)(a1 + 121) = 1;
          *(_WORD *)(a1 + 24) = 346;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = v15;
          *(_WORD *)(a1 + 86) = v14;
          *(_WORD *)(a1 + 126) = v16;
          if ( (v11 & 7) != 0 )
          {
            if ( v14 == 24 )
            {
              *(_WORD *)(a1 + 86) = v16;
              *(_WORD *)(a1 + 24) = 317;
              *(_BYTE *)(a1 + 121) = 0;
              if ( (((unsigned __int8)v12 ^ (unsigned __int8)v11) & 7) == 0 )
              {
                *(_BYTE *)(a1 + 81) = 0;
                *(_WORD *)(a1 + 24) = 331;
              }
            }
          }
          else
          {
            *(_WORD *)(a1 + 46) = v14;
            *(_WORD *)(a1 + 24) = 317;
            *(_WORD *)(a1 + 86) = v16;
            *(_BYTE *)(a1 + 121) = 0;
            if ( (((unsigned __int8)v12 ^ (unsigned __int8)v11) & 7) == 0 )
            {
              *(_BYTE *)(a1 + 81) = 0;
              *(_WORD *)(a1 + 24) = 350;
            }
          }
          break;
        default:
          *(_BYTE *)(a1 + 121) = 1;
          *(_WORD *)(a1 + 24) = 340;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 46) = v15;
          *(_WORD *)(a1 + 86) = v14;
          *(_WORD *)(a1 + 126) = v16;
          if ( (v11 & 7) == 0 )
          {
            *(_WORD *)(a1 + 46) = v14;
            *(_WORD *)(a1 + 24) = 318;
            *(_WORD *)(a1 + 86) = v16;
            *(_BYTE *)(a1 + 121) = 0;
          }
          break;
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      switch ( (next_word >> 9) & 0xF )
      {
        case 0:
          v72 = next_word & 0x1FF;
          *(_BYTE *)(a1 + 41) = 7;
          v73 = 2 * v72;
          *(_WORD *)(a1 + 24) = 290;
          v74 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v72 >> 7) & 2) != 0 )
            v73 = (2 * (_WORD)v72) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v74 + v73;
          result = v74;
          break;
        case 1:
          v69 = next_word & 0x1FF;
          v70 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          *(_WORD *)(a1 + 24) = 291;
          v71 = 2 * v69;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v69 >> 7) & 2) != 0 )
            v71 = (2 * (_WORD)v69) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v70 + v71;
          result = v70;
          break;
        case 2:
          v45 = next_word & 0x1FF;
          v46 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v47 = 2 * v45;
          *(_WORD *)(a1 + 24) = 309;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v45 >> 7) & 2) != 0 )
            v47 = (2 * (_WORD)v45) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v46 + v47;
          result = v46;
          break;
        case 3:
          v42 = next_word & 0x1FF;
          v43 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v44 = 2 * v42;
          *(_WORD *)(a1 + 24) = 292;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v42 >> 7) & 2) != 0 )
            v44 = (2 * (_WORD)v42) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v43 + v44;
          result = v43;
          break;
        case 4:
          v78 = next_word & 0x1FF;
          v79 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v80 = 2 * v78;
          *(_WORD *)(a1 + 24) = 310;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v78 >> 7) & 2) != 0 )
            v80 = (2 * (_WORD)v78) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v79 + v80;
          result = v79;
          break;
        case 5:
          v39 = next_word & 0x1FF;
          v40 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v41 = 2 * v39;
          *(_WORD *)(a1 + 24) = 308;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v39 >> 7) & 2) != 0 )
            v41 = (2 * (_WORD)v39) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v40 + v41;
          result = v40;
          break;
        case 6:
          v66 = next_word & 0x1FF;
          v67 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v68 = 2 * v66;
          *(_WORD *)(a1 + 24) = 313;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v66 >> 7) & 2) != 0 )
            v68 = (2 * (_WORD)v66) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v67 + v68;
          result = v67;
          break;
        case 7:
          v63 = next_word & 0x1FF;
          v64 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v65 = 2 * v63;
          *(_WORD *)(a1 + 24) = 314;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v63 >> 7) & 2) != 0 )
            v65 = (2 * (_WORD)v63) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v64 + v65;
          result = v64;
          break;
        case 8:
          v60 = next_word & 0x1FF;
          v61 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v62 = 2 * v60;
          *(_WORD *)(a1 + 24) = 300;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v60 >> 7) & 2) != 0 )
            v62 = (2 * (_WORD)v60) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v61 + v62;
          result = v61;
          break;
        case 9:
          v57 = next_word & 0x1FF;
          v58 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v59 = 2 * v57;
          *(_WORD *)(a1 + 24) = 306;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v57 >> 7) & 2) != 0 )
            v59 = (2 * (_WORD)v57) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v58 + v59;
          result = v58;
          break;
        case 0xA:
          v54 = next_word & 0x1FF;
          v55 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v56 = 2 * v54;
          *(_WORD *)(a1 + 24) = 298;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v54 >> 7) & 2) != 0 )
            v56 = (2 * (_WORD)v54) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v55 + v56;
          result = v55;
          break;
        case 0xB:
          v51 = next_word & 0x1FF;
          v52 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v53 = 2 * v51;
          *(_WORD *)(a1 + 24) = 307;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v51 >> 7) & 2) != 0 )
            v53 = (2 * (_WORD)v51) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v52 + v53;
          result = v52;
          break;
        case 0xC:
          v48 = next_word & 0x1FF;
          v49 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v50 = 2 * v48;
          *(_WORD *)(a1 + 24) = 299;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v48 >> 7) & 2) != 0 )
            v50 = (2 * (_WORD)v48) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v49 + v50;
          result = v49;
          break;
        case 0xD:
          v75 = next_word & 0x1FF;
          v76 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v77 = 2 * v75;
          *(_WORD *)(a1 + 24) = 304;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v75 >> 7) & 2) != 0 )
            v77 = (2 * (_WORD)v75) | 0xFFFFFC00;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v76 + v77;
          result = v76;
          break;
        default:
          v86 = next_word & 0x3FF;
          v87 = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 41) = 7;
          v88 = 2 * v86;
          *(_WORD *)(a1 + 24) = 311;
          *(_BYTE *)(a1 + 45) = 9;
          if ( (((unsigned __int16)v86 >> 7) & 4) != 0 )
            v88 = (2 * (_WORD)v86) | 0xFFFFF800;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 8) + v87 + v88;
          result = v87;
          break;
      }
      break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      v6 = next_word;
      result = *(unsigned __int16 *)(a1 + 26);
      v7 = (((int)(unsigned __int16)v4 >> 5) & 7) + 24;
      v8 = (((int)(unsigned __int16)v4 >> 8) & 7) + 24;
      switch ( v5 & 7 )
      {
        case 0:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 324;
          *(_WORD *)(a1 + 46) = v8;
          *(_BYTE *)(a1 + 81) = 9;
          *(_BYTE *)(a1 + 114) = 1;
          *(_WORD *)(a1 + 86) = v7;
          *(_BYTE *)(a1 + 121) = 9;
          *(_BYTE *)(a1 + 125) = 0;
          *(_BYTE *)(a1 + 154) = 2;
          *(_QWORD *)(a1 + 128) = v4 & 0x1F;
          break;
        case 1:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 327;
          *(_WORD *)(a1 + 46) = v8;
          *(_BYTE *)(a1 + 81) = 9;
          *(_BYTE *)(a1 + 114) = 1;
          *(_WORD *)(a1 + 86) = v7;
          *(_BYTE *)(a1 + 121) = 9;
          *(_BYTE *)(a1 + 125) = 0;
          *(_BYTE *)(a1 + 154) = 2;
          *(_QWORD *)(a1 + 128) = v4 & 0x1F;
          break;
        case 2:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 344;
          *(_WORD *)(a1 + 46) = v8;
          *(_BYTE *)(a1 + 81) = 9;
          *(_BYTE *)(a1 + 114) = 1;
          *(_WORD *)(a1 + 86) = v7;
          *(_BYTE *)(a1 + 121) = 9;
          *(_BYTE *)(a1 + 125) = 0;
          *(_BYTE *)(a1 + 154) = 2;
          *(_QWORD *)(a1 + 128) = v4 & 0x1F;
          break;
        case 3:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 345;
          *(_WORD *)(a1 + 46) = v8;
          *(_BYTE *)(a1 + 81) = 9;
          *(_BYTE *)(a1 + 114) = 1;
          *(_WORD *)(a1 + 86) = v7;
          *(_BYTE *)(a1 + 121) = 9;
          *(_BYTE *)(a1 + 125) = 0;
          *(_BYTE *)(a1 + 154) = 2;
          *(_QWORD *)(a1 + 128) = v4 & 0x1F;
          break;
        case 4:
          v37 = v4 & 3;
          v38 = ((v6 >> 2) & 7) + 24;
          if ( v37 == 2 )
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 324;
            *(_WORD *)(a1 + 46) = v8;
            *(_BYTE *)(a1 + 81) = 9;
            *(_BYTE *)(a1 + 114) = 1;
            *(_WORD *)(a1 + 86) = v7;
            *(_BYTE *)(a1 + 121) = 9;
            *(_BYTE *)(a1 + 154) = 16;
            *(_WORD *)(a1 + 126) = v38;
          }
          else if ( v37 == 3 )
          {
            *(_BYTE *)(a1 + 121) = 1;
            *(_WORD *)(a1 + 24) = 293;
            *(_BYTE *)(a1 + 81) = 1;
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = v8;
            *(_WORD *)(a1 + 86) = v7;
            *(_WORD *)(a1 + 126) = v38;
          }
          else
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 324;
            *(_WORD *)(a1 + 46) = v8;
            *(_BYTE *)(a1 + 81) = 9;
            *(_BYTE *)(a1 + 114) = 1;
            *(_WORD *)(a1 + 86) = v7;
            *(_BYTE *)(a1 + 121) = 9;
            if ( v37 == 1 )
              *(_BYTE *)(a1 + 154) = 8;
            else
              *(_BYTE *)(a1 + 154) = 4;
            *(_WORD *)(a1 + 126) = v38;
          }
          break;
        case 5:
          v28 = v4 & 3;
          v29 = ((v6 >> 2) & 7) + 24;
          if ( v28 == 2 )
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 327;
            *(_WORD *)(a1 + 46) = v8;
            *(_BYTE *)(a1 + 81) = 9;
            *(_BYTE *)(a1 + 114) = 1;
            *(_WORD *)(a1 + 86) = v7;
            *(_BYTE *)(a1 + 121) = 9;
            *(_BYTE *)(a1 + 154) = 16;
            *(_WORD *)(a1 + 126) = v29;
          }
          else if ( v28 == 3 )
          {
            *(_BYTE *)(a1 + 121) = 1;
            *(_WORD *)(a1 + 24) = 295;
            *(_BYTE *)(a1 + 81) = 1;
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = v8;
            *(_WORD *)(a1 + 86) = v7;
            *(_WORD *)(a1 + 126) = v29;
          }
          else
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 327;
            *(_WORD *)(a1 + 46) = v8;
            *(_BYTE *)(a1 + 81) = 9;
            *(_BYTE *)(a1 + 114) = 1;
            *(_WORD *)(a1 + 86) = v7;
            *(_BYTE *)(a1 + 121) = 9;
            if ( v28 == 1 )
              *(_BYTE *)(a1 + 154) = 8;
            else
              *(_BYTE *)(a1 + 154) = 4;
            *(_WORD *)(a1 + 126) = v29;
          }
          break;
        case 6:
          v34 = v4 & 3;
          v35 = ((v6 >> 2) & 7) + 24;
          if ( v34 == 2 )
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 344;
            *(_WORD *)(a1 + 46) = v8;
            *(_BYTE *)(a1 + 81) = 9;
            *(_BYTE *)(a1 + 114) = 1;
            *(_WORD *)(a1 + 86) = v7;
            *(_BYTE *)(a1 + 121) = 9;
            *(_BYTE *)(a1 + 154) = 16;
            *(_WORD *)(a1 + 126) = v35;
          }
          else if ( v34 == 3 )
          {
            *(_BYTE *)(a1 + 121) = 1;
            *(_WORD *)(a1 + 24) = 296;
            *(_BYTE *)(a1 + 81) = 1;
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = v8;
            *(_WORD *)(a1 + 86) = v7;
            *(_WORD *)(a1 + 126) = v35;
          }
          else
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 344;
            *(_WORD *)(a1 + 46) = v8;
            *(_BYTE *)(a1 + 81) = 9;
            *(_BYTE *)(a1 + 114) = 1;
            *(_WORD *)(a1 + 86) = v7;
            *(_BYTE *)(a1 + 121) = 9;
            if ( v34 == 1 )
              *(_BYTE *)(a1 + 154) = 8;
            else
              *(_BYTE *)(a1 + 154) = 4;
            *(_WORD *)(a1 + 126) = v35;
          }
          break;
        case 7:
          v20 = v4 & 3;
          v21 = ((v6 >> 2) & 7) + 24;
          if ( v20 == 2 )
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 345;
            *(_WORD *)(a1 + 46) = v8;
            *(_BYTE *)(a1 + 81) = 9;
            *(_BYTE *)(a1 + 114) = 1;
            *(_WORD *)(a1 + 86) = v7;
            *(_BYTE *)(a1 + 121) = 9;
            *(_BYTE *)(a1 + 154) = 16;
            *(_WORD *)(a1 + 126) = v21;
          }
          else if ( v20 == 3 )
          {
            *(_BYTE *)(a1 + 121) = 1;
            *(_WORD *)(a1 + 24) = 297;
            *(_BYTE *)(a1 + 81) = 1;
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 46) = v8;
            *(_WORD *)(a1 + 86) = v7;
            *(_WORD *)(a1 + 126) = v21;
          }
          else
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_WORD *)(a1 + 24) = 345;
            *(_WORD *)(a1 + 46) = v8;
            *(_BYTE *)(a1 + 81) = 9;
            *(_BYTE *)(a1 + 114) = 1;
            *(_WORD *)(a1 + 86) = v7;
            *(_BYTE *)(a1 + 121) = 9;
            if ( v20 == 1 )
              *(_BYTE *)(a1 + 154) = 8;
            else
              *(_BYTE *)(a1 + 154) = 4;
            *(_WORD *)(a1 + 126) = v21;
          }
          break;
      }
      break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      v9 = (HIBYTE(next_word) & 7) + 24;
      switch ( v5 & 7 )
      {
        case 0:
          *(_WORD *)(a1 + 46) = v9;
          *(_WORD *)(a1 + 24) = 288;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)v4;
          word = get_word();
          if ( ((word ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v109 = *(_WORD *)(a1 + 24);
            v110 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(word << 8);
            while ( v109 != *((_WORD *)qword_10500 + v110) )
            {
              v110 += 2;
              if ( v110 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v110 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 1:
          *(_WORD *)(a1 + 46) = v9;
          *(_WORD *)(a1 + 24) = 287;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)v4;
          v23 = get_word();
          if ( ((v23 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v95 = *(_WORD *)(a1 + 24);
            v96 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v23 << 8);
            while ( v95 != *((_WORD *)qword_10500 + v96) )
            {
              v96 += 2;
              if ( v96 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v96 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 2:
          *(_WORD *)(a1 + 46) = v9;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 24) = 303;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)v4;
          break;
        case 3:
          *(_WORD *)(a1 + 46) = v9;
          *(_WORD *)(a1 + 24) = 302;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)v4;
          v22 = get_word();
          if ( ((v22 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v93 = *(_WORD *)(a1 + 24);
            v94 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v22 << 8);
            while ( v93 != *((_WORD *)qword_10500 + v94) )
            {
              v94 += 2;
              if ( v94 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v94 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 4:
          *(_WORD *)(a1 + 46) = v9;
          *(_WORD *)(a1 + 24) = 335;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)v4;
          v26 = get_word();
          if ( ((v26 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v99 = *(_WORD *)(a1 + 24);
            v100 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v26 << 8);
            while ( v99 != *((_WORD *)qword_10500 + v100) )
            {
              v100 += 2;
              if ( v100 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v100 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 5:
          *(_WORD *)(a1 + 46) = v9;
          *(_WORD *)(a1 + 24) = 334;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)v4;
          v25 = get_word();
          if ( ((v25 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v111 = *(_WORD *)(a1 + 24);
            v112 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v25 << 8);
            while ( v111 != *((_WORD *)qword_10500 + v112) )
            {
              v112 += 2;
              if ( v112 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v112 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 6:
          *(_WORD *)(a1 + 46) = v9;
          *(_WORD *)(a1 + 24) = 353;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)v4;
          v19 = get_word();
          if ( ((v19 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v103 = *(_WORD *)(a1 + 24);
            v104 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v19 << 8);
            while ( v103 != *((_WORD *)qword_10500 + v104) )
            {
              v104 += 2;
              if ( v104 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v104 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 7:
          *(_WORD *)(a1 + 46) = v9;
          *(_WORD *)(a1 + 24) = 352;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)v4;
          v18 = get_word();
          if ( ((v18 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v91 = *(_WORD *)(a1 + 24);
            v92 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v18 << 8);
            while ( v91 != *((_WORD *)qword_10500 + v92) )
            {
              v92 += 2;
              if ( v92 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v92 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
      }
      break;
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
      switch ( v5 & 7 )
      {
        case 0:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 348;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)next_word;
          v85 = get_word();
          if ( ((v85 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v117 = *(_WORD *)(a1 + 24);
            v118 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v85 << 8);
            while ( v117 != *((_WORD *)qword_10500 + v118) )
            {
              v118 += 2;
              if ( v118 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v118 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 1:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 347;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)next_word;
          v32 = get_word();
          if ( ((v32 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v101 = *(_WORD *)(a1 + 24);
            v102 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v32 << 8);
            while ( v101 != *((_WORD *)qword_10500 + v102) )
            {
              v102 += 2;
              if ( v102 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v102 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 2:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 316;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)next_word;
          v33 = get_word();
          if ( ((v33 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v105 = *(_WORD *)(a1 + 24);
            v106 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v33 << 8);
            while ( v105 != *((_WORD *)qword_10500 + v106) )
            {
              v106 += 2;
              if ( v106 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v106 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 3:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 319;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)next_word;
          v27 = get_word();
          if ( ((v27 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v107 = *(_WORD *)(a1 + 24);
            v108 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v27 << 8);
            while ( v107 != *((_WORD *)qword_10500 + v108) )
            {
              v108 += 2;
              if ( v108 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v108 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 4:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 285;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)next_word;
          v36 = get_word();
          if ( ((v36 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v113 = *(_WORD *)(a1 + 24);
            v114 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v36 << 8);
            while ( v113 != *((_WORD *)qword_10500 + v114) )
            {
              v114 += 2;
              if ( v114 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v114 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 5:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 284;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)next_word;
          v30 = get_word();
          if ( ((v30 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v97 = *(_WORD *)(a1 + 24);
            v98 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v30 << 8);
            while ( v97 != *((_WORD *)qword_10500 + v98) )
            {
              v98 += 2;
              if ( v98 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v98 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 6:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 326;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)next_word;
          v31 = get_word();
          if ( ((v31 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v115 = *(_WORD *)(a1 + 24);
            v116 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v31 << 8);
            while ( v115 != *((_WORD *)qword_10500 + v116) )
            {
              v116 += 2;
              if ( v116 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v116 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
        case 7:
          *(_BYTE *)(a1 + 41) = 1;
          *(_WORD *)(a1 + 24) = 325;
          *(_WORD *)(a1 + 46) = (HIBYTE(next_word) & 7) + 24;
          *(_BYTE *)(a1 + 81) = 5;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = (unsigned __int8)next_word;
          v24 = get_word();
          if ( ((v24 ^ (unsigned __int16)v4) & 0xF700) != 0 )
          {
            result = *(unsigned __int16 *)(a1 + 26);
          }
          else
          {
            insn_get_next_word();
            *(_BYTE *)(a1 + 85) = 1;
            v89 = *(_WORD *)(a1 + 24);
            v90 = 0;
            *(_QWORD *)(a1 + 88) = (unsigned __int8)v4 + (unsigned __int16)(v24 << 8);
            while ( v89 != *((_WORD *)qword_10500 + v90) )
            {
              v90 += 2;
              if ( v90 == 14 )
                return *(unsigned __int16 *)(a1 + 26);
            }
            *(_WORD *)(a1 + 24) = *((_WORD *)qword_10500 + (int)v90 + 1);
            result = *(unsigned __int16 *)(a1 + 26);
          }
          break;
      }
      break;
  }
  return result;
}

