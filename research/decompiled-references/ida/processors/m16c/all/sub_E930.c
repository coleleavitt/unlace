__int64 __fastcall sub_E930(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  int v4; // r14d
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v11; // r14d
  int next_word; // r12d
  char v13; // r14
  __int64 v14; // r15
  unsigned __int8 v15; // al
  unsigned __int16 v16; // cx
  __int16 v17; // dx
  __int64 v18; // rax
  __int16 v19; // dx
  __int64 v20; // rax
  __int16 v21; // r14
  unsigned __int16 v22; // ax
  char v23; // dl
  int v24; // r12d
  __int64 v25; // rbp
  int v26; // ecx
  unsigned __int8 v27; // al
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // ax
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // ax
  unsigned __int8 v32; // al
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // r15d
  __int16 v36; // ax
  __int16 v37; // dx
  __int64 v38; // rax
  __int16 v39; // r12
  __int64 v40; // rbp
  __int64 v41; // rax
  __int16 v42; // r12
  __int64 v43; // rbp
  unsigned __int8 v44; // al
  int v45; // r14d
  unsigned __int8 v46; // al
  int v47; // r15d
  int v48; // r15d
  int v49; // r15d
  int v50; // r15d
  int v51; // r15d
  __int16 v52; // dx
  __int64 v53; // rax
  __int16 v54; // bx
  _BYTE *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int16 v58; // dx
  __int64 v59; // rax
  unsigned __int8 v60; // al
  char v61; // al
  unsigned __int8 v62; // al
  unsigned __int8 v63; // al
  unsigned __int8 v64; // al
  char v65; // al
  int v66; // r14d
  __int64 v67; // rax
  unsigned __int8 next_byte; // al
  char v69; // al
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rbp
  unsigned __int16 byte; // ax
  _BYTE *v74; // rax
  char v75; // dl
  __int64 v76; // rax

  v2 = *(_QWORD *)(a1 + 4352);
  v3 = *(int *)(a1 + 4360);
  v4 = *(_DWORD *)(a1 + 4328);
  switch ( a2 )
  {
    case 1:
      next_word = (__int16)insn_get_next_word();
      goto LABEL_99;
    case 2:
      v66 = (unsigned __int16)insn_get_next_word();
      next_word = (v66 | ((unsigned __int8)insn_get_next_byte() << 16)) << 8 >> 8;
LABEL_99:
      *(_BYTE *)(v2 + 40 * v3 + 45) = sub_E870(
                                        a1,
                                        *(unsigned int **)(a1 + 4344),
                                        v2,
                                        *(unsigned __int8 *)(v2 + 40 * v3 + 40));
      goto LABEL_100;
    case 3:
      next_byte = insn_get_next_byte();
      if ( v4 == 6 )
      {
        v21 = 22;
        v23 = 1;
        v24 = (char)next_byte;
      }
      else
      {
        v21 = 22;
        v23 = 1;
        v24 = next_byte;
      }
      goto LABEL_29;
    case 4:
      v64 = insn_get_next_byte();
      if ( v4 == 6 )
      {
        v21 = 23;
        v23 = 1;
        v24 = (char)v64;
      }
      else
      {
        v21 = 23;
        v23 = 1;
        v24 = v64;
      }
      goto LABEL_29;
    case 5:
      v63 = insn_get_next_byte();
      if ( v4 == 6 )
      {
        v21 = 25;
        v23 = 1;
        v24 = (char)v63;
      }
      else
      {
        v21 = 25;
        v23 = 1;
        v24 = v63;
      }
      goto LABEL_29;
    case 6:
      v62 = insn_get_next_byte();
      if ( v4 == 6 )
      {
        v21 = 26;
        v23 = 1;
        v24 = (char)v62;
      }
      else
      {
        v21 = 26;
        v23 = 1;
        v24 = v62;
      }
      goto LABEL_29;
    case 7:
      v21 = 29;
      v61 = insn_get_next_byte();
      v23 = 1;
      v24 = v61;
      goto LABEL_29;
    case 8:
      v21 = 28;
      v60 = insn_get_next_byte();
      v23 = 1;
      v24 = v60;
      goto LABEL_29;
    case 9:
      v21 = 30;
      v65 = insn_get_next_byte();
      v23 = 1;
      v24 = v65;
      goto LABEL_29;
    case 10:
      v31 = insn_get_next_word();
      if ( v4 == 6 )
      {
        v21 = 22;
        v23 = 2;
        v24 = (__int16)v31;
      }
      else
      {
        v21 = 22;
        v23 = 2;
        v24 = v31;
      }
      goto LABEL_29;
    case 11:
      v30 = insn_get_next_word();
      if ( v4 == 6 )
      {
        v21 = 23;
        v23 = 2;
        v24 = (__int16)v30;
      }
      else
      {
        v21 = 23;
        v23 = 2;
        v24 = v30;
      }
      goto LABEL_29;
    case 12:
      v29 = insn_get_next_word();
      if ( v4 == 6 )
      {
        v21 = 25;
        v23 = 2;
        v24 = (__int16)v29;
      }
      else
      {
        v21 = 25;
        v23 = 2;
        v24 = v29;
      }
      goto LABEL_29;
    case 13:
      v28 = insn_get_next_word();
      if ( v4 == 6 )
      {
        v21 = 26;
        v23 = 2;
        v24 = (__int16)v28;
      }
      else
      {
        v21 = 26;
        v23 = 2;
        v24 = v28;
      }
      goto LABEL_29;
    case 14:
      v21 = 28;
      v22 = insn_get_next_word();
      v23 = 2;
      v24 = v22;
      goto LABEL_29;
    case 15:
      v21 = 29;
      v36 = insn_get_next_word();
      v23 = 2;
      v24 = v36;
      goto LABEL_29;
    case 16:
      v35 = (unsigned __int16)insn_get_next_word();
      v24 = v35 | ((unsigned __int8)insn_get_next_byte() << 16);
      if ( v4 == 6 )
      {
        v21 = 22;
        v23 = 3;
        v24 = v24 << 8 >> 8;
      }
      else
      {
        v21 = 22;
        v23 = 3;
      }
      goto LABEL_29;
    case 17:
      v51 = (unsigned __int16)insn_get_next_word();
      v24 = v51 | ((unsigned __int8)insn_get_next_byte() << 16);
      if ( v4 == 6 )
      {
        v21 = 23;
        v23 = 3;
        v24 = v24 << 8 >> 8;
      }
      else
      {
        v21 = 23;
        v23 = 3;
      }
      goto LABEL_29;
    case 18:
      v49 = (unsigned __int16)insn_get_next_word();
      v24 = v49 | ((unsigned __int8)insn_get_next_byte() << 16);
      if ( v4 == 6 )
      {
        v21 = 22;
        v23 = 4;
        v24 = v24 << 8 >> 8;
      }
      else
      {
        v21 = 22;
        v23 = 4;
      }
      goto LABEL_29;
    case 19:
      v50 = (unsigned __int16)insn_get_next_word();
      v24 = v50 | ((unsigned __int8)insn_get_next_byte() << 16);
      if ( v4 == 6 )
      {
        v21 = 23;
        v23 = 4;
        v24 = v24 << 8 >> 8;
      }
      else
      {
        v21 = 23;
        v23 = 4;
      }
      goto LABEL_29;
    case 20:
      v48 = (unsigned __int16)insn_get_next_word();
      v24 = v48 | ((unsigned __int8)insn_get_next_byte() << 16);
      if ( v4 == 6 )
      {
        v21 = 25;
        v23 = 4;
        v24 = v24 << 8 >> 8;
      }
      else
      {
        v21 = 25;
        v23 = 4;
      }
      goto LABEL_29;
    case 21:
      v47 = (unsigned __int16)insn_get_next_word();
      v24 = v47 | ((unsigned __int8)insn_get_next_byte() << 16);
      if ( v4 == 6 )
      {
        v21 = 26;
        v23 = 4;
        v24 = v24 << 8 >> 8;
      }
      else
      {
        v21 = 26;
        v23 = 4;
      }
      goto LABEL_29;
    case 22:
      v45 = (unsigned __int16)insn_get_next_word();
      v46 = insn_get_next_byte();
      v23 = 4;
      v24 = v45 | (v46 << 16);
      v21 = 28;
LABEL_29:
      v25 = v2 + 40 * v3;
      *(_BYTE *)(v25 + 72) = v23;
      v26 = *(unsigned __int8 *)(v25 + 40);
      *(_BYTE *)(v25 + 41) = 4;
      v27 = sub_E870(a1, *(unsigned int **)(a1 + 4344), v2, v26);
      *(_QWORD *)(v25 + 56) = v24;
      *(_BYTE *)(v25 + 45) = v27;
      *(_WORD *)(v25 + 46) = v21;
      return 1;
    case 23:
      v13 = 1;
      next_word = (unsigned __int16)insn_get_next_word();
      goto LABEL_6;
    case 24:
    case 25:
      v11 = (unsigned __int16)insn_get_next_word();
      next_word = v11 | ((unsigned __int8)insn_get_next_byte() << 16);
      v13 = 2;
LABEL_6:
      v14 = v2 + 40 * v3;
      v15 = sub_E870(a1, *(unsigned int **)(a1 + 4344), v2, *(unsigned __int8 *)(v14 + 40));
      *(_BYTE *)(v14 + 45) = v15;
      v16 = *(_WORD *)(v2 + 24) - 68;
      if ( v16 > 0x1Bu )
        goto LABEL_100;
      if ( ((1LL << v16) & 0x2D) != 0 )
      {
        v75 = 7;
      }
      else
      {
        if ( ((1LL << v16) & 0x12) == 0 )
        {
          if ( *(_WORD *)(v2 + 24) == 95 )
          {
            *(_BYTE *)(v14 + 45) = v13;
            *(_BYTE *)(v14 + 41) = 5;
            *(_QWORD *)(v14 + 48) = next_word;
          }
          else
          {
LABEL_100:
            v67 = v2 + 40 * v3;
            *(_BYTE *)(v67 + 41) = 2;
            *(_QWORD *)(v67 + 56) = next_word;
          }
          return 1;
        }
        v75 = 2;
      }
      if ( (unsigned int)v15 - 1 <= 1 )
      {
        v76 = v2 + 40 * v3;
        *(_BYTE *)(v76 + 41) = v75;
        *(_QWORD *)(v76 + 56) = next_word;
        return 1;
      }
      return 0;
    case 26:
      goto LABEL_25;
    case 27:
      goto LABEL_21;
    case 28:
      v72 = v2 + 40 * v3;
      *(_BYTE *)(v72 + 41) = 1;
      byte = get_byte();
      *(_BYTE *)(v72 + 45) = 0;
      *(_WORD *)(v72 + 46) = 9 - ((byte >> 2) & 1);
      return 1;
    case 29:
      if ( (*(_BYTE *)(v2 + 30) & 1) == 0 )
        goto LABEL_21;
      goto LABEL_13;
    case 30:
      if ( (*(_BYTE *)(v2 + 30) & 1) != 0 )
        goto LABEL_26;
LABEL_25:
      v19 = 8;
      goto LABEL_17;
    case 31:
      goto LABEL_16;
    case 32:
      goto LABEL_27;
    case 33:
      v19 = 12;
      goto LABEL_17;
    case 34:
      v19 = 13;
      goto LABEL_17;
    case 35:
      v19 = 14;
      goto LABEL_17;
    case 36:
      v19 = 15;
      goto LABEL_17;
    case 37:
      if ( (*(_BYTE *)(v2 + 30) & 1) != 0 )
        goto LABEL_23;
LABEL_27:
      v19 = 11;
      goto LABEL_17;
    case 38:
      if ( (*(_BYTE *)(v2 + 30) & 1) == 0 )
        goto LABEL_16;
      goto LABEL_19;
    case 39:
      if ( (*(_BYTE *)(v2 + 30) & 1) != 0 )
        goto LABEL_13;
LABEL_16:
      v19 = 10;
      goto LABEL_17;
    case 40:
      if ( (*(_BYTE *)(v2 + 30) & 1) != 0 )
        goto LABEL_19;
LABEL_21:
      v19 = 9;
LABEL_17:
      v20 = v2 + 40 * v3;
      *(_BYTE *)(v20 + 41) = 1;
      *(_WORD *)(v20 + 46) = v19;
      *(_BYTE *)(v20 + 45) = 0;
      return 1;
    case 41:
      v58 = 16;
      goto LABEL_86;
    case 42:
      v58 = 17;
      goto LABEL_86;
    case 43:
      v58 = 18;
      goto LABEL_86;
    case 44:
      v58 = 19;
      goto LABEL_86;
    case 45:
      v37 = 20;
      goto LABEL_47;
    case 46:
      v37 = 21;
      goto LABEL_47;
    case 47:
      v37 = 24;
      goto LABEL_47;
    case 48:
      v37 = 27;
LABEL_47:
      v38 = v2 + 40 * v3;
      *(_BYTE *)(v38 + 41) = 1;
      *(_WORD *)(v38 + 46) = v37;
      *(_BYTE *)(v38 + 45) = 7;
      return 1;
    case 49:
      v52 = 22;
      goto LABEL_72;
    case 50:
      v52 = 23;
      goto LABEL_72;
    case 51:
      v52 = 25;
      goto LABEL_72;
    case 52:
      v52 = 26;
      goto LABEL_72;
    case 53:
LABEL_26:
      v17 = 0;
      goto LABEL_14;
    case 54:
LABEL_13:
      v17 = 1;
      goto LABEL_14;
    case 55:
LABEL_19:
      v17 = 2;
      goto LABEL_14;
    case 56:
LABEL_23:
      v17 = 3;
      goto LABEL_14;
    case 57:
      v17 = 4;
      goto LABEL_14;
    case 58:
      v17 = 5;
      goto LABEL_14;
    case 59:
      v17 = 6;
      goto LABEL_14;
    case 60:
      v17 = 7;
LABEL_14:
      v18 = v2 + 40 * v3;
      *(_BYTE *)(v18 + 41) = 1;
      *(_WORD *)(v18 + 46) = v17;
      *(_BYTE *)(v18 + 45) = 1;
      return 1;
    case 61:
      v52 = 30;
LABEL_72:
      v53 = v2 + 40 * v3;
      *(_WORD *)(v53 + 46) = v52;
      *(_BYTE *)(v53 + 41) = 1;
      *(_BYTE *)(v53 + 45) = (*(_DWORD *)(a1 + 4328) > 3u) + 1;
      return 1;
    case 62:
      v58 = 36;
LABEL_86:
      v59 = v2 + 40 * v3;
      *(_BYTE *)(v59 + 41) = 1;
      *(_WORD *)(v59 + 46) = v58;
      *(_BYTE *)(v59 + 45) = 2;
      return 1;
    case 63:
      v42 = 22;
      goto LABEL_55;
    case 64:
      v42 = 23;
      goto LABEL_55;
    case 65:
      v42 = 25;
      goto LABEL_55;
    case 66:
      v42 = 26;
      goto LABEL_55;
    case 67:
      v42 = 24;
LABEL_55:
      v43 = v2 + 40 * v3;
      v44 = sub_E870(a1, *(unsigned int **)(a1 + 4344), *(_QWORD *)(a1 + 4352), *(unsigned __int8 *)(v43 + 40));
      *(_BYTE *)(v43 + 41) = 3;
      *(_BYTE *)(v43 + 45) = v44;
      *(_WORD *)(v43 + 46) = v42;
      return 1;
    case 68:
      v39 = 0;
      goto LABEL_50;
    case 69:
      v39 = 1;
      goto LABEL_50;
    case 70:
      v39 = 2;
      goto LABEL_50;
    case 71:
      v39 = 3;
      goto LABEL_50;
    case 72:
      v39 = 22;
      goto LABEL_50;
    case 73:
      v39 = 23;
LABEL_50:
      v40 = v2 + 40 * v3;
      *(_BYTE *)(v40 + 41) = 5;
      *(_BYTE *)(v40 + 45) = 0;
      *(_QWORD *)(v40 + 48) = (unsigned __int8)insn_get_next_byte();
      v41 = v2 + 40LL * (*(_DWORD *)(a1 + 4360) + 1);
      *(_BYTE *)(v41 + 41) = 1;
      *(_WORD *)(v41 + 46) = v39;
      *(_BYTE *)(v41 + 45) = 0;
      return 2;
    case 74:
      v54 = 22;
      goto LABEL_77;
    case 75:
      v54 = 23;
LABEL_77:
      v55 = (_BYTE *)(v2 + 40 * v3);
      v55[41] = 4;
      v55[72] = 1;
      v55[45] = 0;
      v56 = (unsigned __int8)insn_get_next_byte();
      goto LABEL_78;
    case 76:
      v32 = insn_get_next_byte();
      v33 = v2 + 40 * v3;
      *(_BYTE *)(v33 + 41) = 5;
      *(_BYTE *)(v33 + 45) = 0;
      *(_QWORD *)(v33 + 48) = v32 & 7;
      v34 = v2 + 40LL * (*(_DWORD *)(a1 + 4360) + 1);
      *(_BYTE *)(v34 + 41) = 4;
      *(_BYTE *)(v34 + 72) = 1;
      *(_BYTE *)(v34 + 45) = 0;
      *(_QWORD *)(v34 + 56) = v32 >> 3;
      *(_WORD *)(v34 + 46) = 28;
      return 2;
    case 77:
      v69 = insn_get_next_byte();
      v70 = v2 + 40 * v3;
      *(_BYTE *)(v70 + 41) = 5;
      *(_BYTE *)(v70 + 45) = 0;
      *(_QWORD *)(v70 + 48) = v69 & 7;
      v71 = v2 + 40LL * (*(_DWORD *)(a1 + 4360) + 1);
      *(_BYTE *)(v71 + 41) = 4;
      *(_BYTE *)(v71 + 72) = 1;
      *(_BYTE *)(v71 + 45) = 0;
      *(_QWORD *)(v71 + 56) = v69 >> 3;
      *(_WORD *)(v71 + 46) = 29;
      return 2;
    case 78:
      v54 = 22;
      goto LABEL_109;
    case 79:
      v54 = 23;
LABEL_109:
      v74 = (_BYTE *)(v2 + 40 * v3);
      v74[41] = 4;
      v74[72] = 2;
      v74[45] = 0;
      v56 = (unsigned __int16)insn_get_next_word();
LABEL_78:
      v57 = v2 + 40 * v3;
      *(_QWORD *)(v57 + 56) = v56;
      *(_WORD *)(v57 + 46) = v54;
      return 1;
    case 80:
    case 81:
      v5 = insn_get_next_word();
      v6 = v2 + 40 * v3;
      v7 = v5 & 7;
      *(_BYTE *)(v6 + 41) = 5;
      v8 = v5 >> 3;
      *(_BYTE *)(v6 + 45) = 0;
      *(_QWORD *)(v6 + 48) = v7;
      v9 = v2 + 40LL * (*(_DWORD *)(a1 + 4360) + 1);
      if ( a2 == 80 )
      {
        *(_QWORD *)(v9 + 56) = v8;
        *(_BYTE *)(v9 + 41) = 4;
        *(_BYTE *)(v9 + 72) = 2;
        *(_BYTE *)(v9 + 45) = 0;
        *(_WORD *)(v9 + 46) = 28;
      }
      else
      {
        *(_BYTE *)(v9 + 41) = 2;
        *(_QWORD *)(v9 + 56) = v8;
        *(_BYTE *)(v9 + 45) = 0;
      }
      return 2;
    default:
      return 0;
  }
}

