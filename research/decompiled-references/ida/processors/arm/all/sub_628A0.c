__int64 __fastcall sub_628A0(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v9; // r8
  unsigned int v10; // r9d
  int v11; // r11d
  char v12; // bp
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // r13
  int v16; // ecx
  __int64 v17; // r14
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rdx
  _BYTE *v21; // rsi
  char v22; // cl
  char v23; // cl
  char v24; // cl
  __int64 v25; // rdx
  int v26; // ecx
  unsigned __int8 v27; // cl
  char v28; // si
  char v29; // cl
  int v30; // ecx
  unsigned __int8 v31; // cl
  char v32; // si
  char v33; // cl
  int v34; // ecx
  unsigned __int8 v35; // cl
  char v36; // si
  __int64 v37; // rdx
  char v38; // cl

  *(_BYTE *)(a1 + 1) = 5;
  if ( (unsigned int)(a3 - 1) > 2 )
  {
    if ( under_debugger )
      BUG();
    interr(10355);
    if ( unk_289B && ((*(_QWORD *)"t_insn" & 0x100000001LL) != 0 || (aGetOpinfo[1] & 1) != 0) )
      return 0;
    v9 = (unk_28A7 >> 20) & 3;
    v10 = aSetFrameSize[0] & 0xF;
    v11 = word_8E000[16 * ((unk_28A7 >> 8) & 0xF) + ((unk_28A7 >> 20) & 3 | (4 * unk_28A3) | (unk_28A7 >> 1) & 8)];
    if ( !(_WORD)v11 )
      return 0;
    v12 = 20 - ((unk_28A7 & 0x100000) != 0);
    v13 = *(_QWORD *)"set_noret_insn" + 80LL;
    v14 = *(_DWORD *)"sn" | (16 * *(_DWORD *)"o");
    v15 = *(_QWORD *)"set_noret_insn" + 120LL;
    v16 = *(_DWORD *)"et_opinfo" | 0x46567000;
    if ( (unsigned __int16)(v11 - 382) <= 0x16u )
    {
      v17 = 4227081;
      if ( _bittest64(&v17, (unsigned int)(v11 - 382)) )
      {
        v13 = *(_QWORD *)"set_noret_insn" + 120LL;
        v15 = *(_QWORD *)"set_noret_insn" + 80LL;
      }
    }
    if ( unk_289B )
    {
      if ( (aSetNoretInsn[12] & 1) != 0 )
        return 0;
      *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 41LL) = 1;
      *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 45LL) = 8;
      *(_WORD *)(*(_QWORD *)"set_noret_insn" + 46LL) = v14 / 2 + 45;
      if ( !unk_289B )
      {
        *(_BYTE *)(v13 + 1) = 1;
        *(_WORD *)(v13 + 6) = (*(_WORD *)"t_insn" | 0xF740) + 61;
        if ( v10 > 0xB )
        {
          *(_BYTE *)(v13 + 5) = 4;
          if ( unk_289B )
            goto LABEL_20;
          goto LABEL_30;
        }
        goto LABEL_33;
      }
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 41LL) = 1;
      *(_WORD *)(*(_QWORD *)"set_noret_insn" + 46LL) = v14 + 61;
      if ( v10 <= 0xB )
      {
        *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 45LL) = 7;
        if ( !unk_289B )
        {
          *(_BYTE *)(v13 + 1) = 1;
          *(_WORD *)(v13 + 6) = (*(_WORD *)"t_insn" | 0xF740) + 61;
LABEL_33:
          *(_BYTE *)(v13 + 5) = 7;
          if ( unk_289B )
          {
LABEL_20:
            if ( (aGetOpinfo[1] & 1) == 0 )
            {
              *(_BYTE *)(v15 + 1) = 1;
              *(_WORD *)(v15 + 6) = v16 / 2 + 45;
              v18 = 8;
              goto LABEL_22;
            }
            return 0;
          }
          *(_BYTE *)(v15 + 1) = 1;
          *(_WORD *)(v15 + 6) = (*(_WORD *)"et_opinfo" | 0x7000) + 61;
          goto LABEL_35;
        }
      }
      else
      {
        *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 45LL) = 4;
        if ( !unk_289B )
        {
          *(_BYTE *)(v13 + 1) = 1;
          *(_WORD *)(v13 + 6) = (*(_WORD *)"t_insn" | 0xF740) + 61;
          *(_BYTE *)(v13 + 5) = 4;
LABEL_30:
          *(_BYTE *)(v15 + 1) = 1;
          *(_WORD *)(v15 + 6) = (*(_WORD *)"et_opinfo" | 0x7000) + 61;
          goto LABEL_39;
        }
      }
    }
    if ( (aSetNoretInsn[8] & 1) != 0 )
      return 0;
    *(_BYTE *)(v13 + 1) = 1;
    *(_BYTE *)(v13 + 5) = 8;
    *(_WORD *)(v13 + 6) = (*(_DWORD *)"t_insn" | 0x6F5F740) / 2 + 45;
    if ( unk_289B )
      goto LABEL_20;
    *(_BYTE *)(v15 + 1) = 1;
    *(_WORD *)(v15 + 6) = (*(_WORD *)"et_opinfo" | 0x7000) + 61;
    if ( v10 > 0xB )
    {
LABEL_39:
      *(_BYTE *)(v15 + 5) = 4;
      if ( (unsigned __int16)v11 <= 0x17Du )
      {
        if ( (unsigned __int16)v11 > 0x163u )
        {
          switch ( v11 )
          {
            case 356:
LABEL_65:
              v20 = *(_BYTE **)"set_noret_insn";
              v21 = *(_BYTE **)"set_noret_insn";
              if ( v10 > 0xB )
              {
                LOWORD(v11) = 356;
                *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 33LL) = v12 | 0x80;
                v20 = *(_BYTE **)"set_noret_insn";
                v21 = *(_BYTE **)"set_noret_insn";
                goto LABEL_48;
              }
              if ( unk_28A3 )
              {
                *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 33LL) = -111;
                v20 = *(_BYTE **)"set_noret_insn";
                LOWORD(v11) = 356;
                v21 = *(_BYTE **)"set_noret_insn";
                goto LABEL_48;
              }
              LOWORD(v11) = 356;
              v23 = byte_8E214[v9];
              if ( v23 )
                goto LABEL_52;
              goto LABEL_48;
            case 364:
LABEL_63:
              v20 = *(_BYTE **)"set_noret_insn";
              LOWORD(v11) = 364;
              v21 = *(_BYTE **)"set_noret_insn";
              if ( (*(_DWORD *)"t_insn" | 0x6F5F740) == v16 )
              {
                *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 121LL) = 0;
                v20 = *(_BYTE **)"set_noret_insn";
                LOWORD(v11) = 351;
                v21 = *(_BYTE **)"set_noret_insn";
              }
              goto LABEL_48;
            case 366:
LABEL_59:
              if ( !unk_289B )
                goto LABEL_60;
              return 0;
            case 368:
            case 369:
LABEL_53:
              if ( !unk_289B )
                goto LABEL_54;
              return 0;
            case 373:
              goto LABEL_72;
            case 376:
            case 381:
              goto LABEL_51;
            default:
              goto LABEL_47;
          }
        }
        v38 = v11 - 41;
        if ( (unsigned __int16)(v11 - 297) > 0x34u )
          goto LABEL_47;
        v25 = 1LL << v38;
        if ( ((1LL << v38) & 0x3030000180005LL) != 0 )
          goto LABEL_72;
        goto LABEL_70;
      }
      if ( (unsigned __int16)v11 <= 0x1CEu )
      {
        if ( (unsigned __int16)v11 > 0x1A9u )
        {
          v19 = 1LL << ((unsigned __int8)v11 + 86);
          if ( (v19 & 0x16B8000000LL) == 0 )
          {
            if ( (v19 & 0xC00) != 0 )
              goto LABEL_72;
LABEL_46:
            if ( (v19 & 1) == 0 )
              goto LABEL_47;
            v20 = *(_BYTE **)"set_noret_insn";
            LOWORD(v11) = 426;
            v23 = byte_8E210[v9];
            v21 = *(_BYTE **)"set_noret_insn";
            if ( !v23 )
              goto LABEL_48;
LABEL_52:
            v20[33] = v23 | 0x80;
            v20 = *(_BYTE **)"set_noret_insn";
            v21 = *(_BYTE **)"set_noret_insn";
            goto LABEL_48;
          }
LABEL_94:
          *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 33LL) = -125;
          goto LABEL_47;
        }
        if ( (unsigned __int16)(v11 - 382) > 0x24u )
          goto LABEL_47;
        v37 = 1LL << ((unsigned __int8)v11 - 126);
        if ( (v37 & 0x40C089) != 0 )
          goto LABEL_72;
LABEL_97:
        if ( (v37 & 0x80400) != 0 )
          goto LABEL_72;
        if ( (_WORD)v11 != 418 )
          goto LABEL_47;
LABEL_60:
        v20 = *(_BYTE **)"set_noret_insn";
        v21 = *(_BYTE **)"set_noret_insn";
        if ( v10 > 0xB )
        {
LABEL_73:
          v20[33] = v12 | 0x80;
          v20 = *(_BYTE **)"set_noret_insn";
          v21 = *(_BYTE **)"set_noret_insn";
          goto LABEL_48;
        }
        v23 = byte_8E214[v9];
        if ( !v23 )
          goto LABEL_48;
        goto LABEL_52;
      }
LABEL_50:
      if ( (unsigned __int16)(v11 - 881) > 1u )
        goto LABEL_47;
LABEL_51:
      v20 = *(_BYTE **)"set_noret_insn";
      v23 = byte_8E21C[v9];
      v21 = *(_BYTE **)"set_noret_insn";
      if ( !v23 )
        goto LABEL_48;
      goto LABEL_52;
    }
LABEL_35:
    v18 = 7;
LABEL_22:
    *(_BYTE *)(v15 + 5) = v18;
    if ( (unsigned __int16)v11 <= 0x17Du )
    {
      if ( (unsigned __int16)v11 > 0x163u )
      {
        switch ( v11 )
        {
          case 356:
            goto LABEL_65;
          case 364:
            goto LABEL_63;
          case 366:
            goto LABEL_59;
          case 368:
          case 369:
            goto LABEL_53;
          case 373:
            goto LABEL_54;
          case 376:
          case 381:
            goto LABEL_51;
          default:
            goto LABEL_47;
        }
      }
      v24 = v11 - 41;
      if ( (unsigned __int16)(v11 - 297) > 0x34u )
        goto LABEL_47;
      v25 = 1LL << v24;
      if ( ((1LL << v24) & 0x3030000180005LL) == 0 )
      {
LABEL_70:
        if ( (v25 & 0x14000000040200LL) == 0 )
        {
          if ( (v25 & 0x3000000060LL) != 0 )
            goto LABEL_72;
LABEL_47:
          v20 = *(_BYTE **)"set_noret_insn";
          v21 = *(_BYTE **)"set_noret_insn";
          goto LABEL_48;
        }
        goto LABEL_60;
      }
LABEL_54:
      if ( v10 > 0xB )
      {
LABEL_72:
        v20 = *(_BYTE **)"set_noret_insn";
        goto LABEL_73;
      }
      if ( unk_28A3 )
        v23 = byte_8E218[v9];
      else
        v23 = byte_8E21C[v9];
      v20 = *(_BYTE **)"set_noret_insn";
      v21 = *(_BYTE **)"set_noret_insn";
      if ( v23 )
        goto LABEL_52;
LABEL_48:
      v22 = v20[33];
      if ( v22 < 0 )
      {
        v26 = v22 & 0x7F;
        if ( !v26 )
          goto LABEL_86;
        v27 = v26 - 1;
        v28 = 7;
        if ( v27 <= 0x14u )
          v28 = byte_8DB20[v27];
        v20[45] = v28;
        v20 = *(_BYTE **)"set_noret_insn";
        v29 = *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 33LL);
        v21 = *(_BYTE **)"set_noret_insn";
        if ( v29 >= 0 )
          goto LABEL_49;
        v30 = v29 & 0x7F;
        if ( v30 )
        {
          v31 = v30 - 1;
          v32 = 7;
          if ( v31 <= 0x14u )
            v32 = byte_8DB20[v31];
          *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 85LL) = v32;
          v20 = *(_BYTE **)"set_noret_insn";
          v33 = *(_BYTE *)(*(_QWORD *)"set_noret_insn" + 33LL);
          v21 = *(_BYTE **)"set_noret_insn";
          if ( v33 >= 0 )
            goto LABEL_49;
        }
        else
        {
LABEL_86:
          v33 = v20[33];
        }
        v34 = v33 & 0x7F;
        v21 = v20;
        if ( v34 )
        {
          v35 = v34 - 1;
          v36 = 7;
          if ( v35 <= 0x14u )
            v36 = byte_8DB20[v35];
          v20[125] = v36;
          v21 = *(_BYTE **)"set_noret_insn";
        }
      }
LABEL_49:
      *((_WORD *)v21 + 12) = v11;
      return *(unsigned __int16 *)(*(_QWORD *)"set_noret_insn" + 26LL);
    }
    if ( (unsigned __int16)v11 <= 0x1CEu )
    {
      if ( (unsigned __int16)v11 > 0x1A9u )
      {
        v19 = 1LL << ((unsigned __int8)v11 + 86);
        if ( (v19 & 0x16B8000000LL) == 0 )
        {
          if ( (v19 & 0xC00) != 0 )
            goto LABEL_54;
          goto LABEL_46;
        }
        goto LABEL_94;
      }
      if ( (unsigned __int16)(v11 - 382) > 0x24u )
        goto LABEL_47;
      v37 = 1LL << ((unsigned __int8)v11 - 126);
      if ( (v37 & 0x40C089) != 0 )
        goto LABEL_54;
      goto LABEL_97;
    }
    goto LABEL_50;
  }
  v6 = a3;
  if ( (_DWORD)a3 == 1 )
  {
    v7 = sub_62710(a2, 32, a3, a4, a5, a6);
  }
  else
  {
    v7 = sub_62710(a2, dword_8E200[(int)a3], (int)a3, a4, a5, a6);
    if ( v6 != 2 )
    {
      *(_QWORD *)(a1 + 8) = v7;
      *(_BYTE *)(a1 + 5) = 4;
      return 4;
    }
  }
  *(_QWORD *)(a1 + 8) = v7;
  *(_BYTE *)(a1 + 5) = 3;
  return 3;
}
