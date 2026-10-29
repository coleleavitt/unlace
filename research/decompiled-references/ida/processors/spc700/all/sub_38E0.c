__int64 __fastcall sub_38E0(__int64 a1, double a2, double a3)
{
  __int64 v3; // rbp
  __int64 next_byte; // rsi
  __int64 *v5; // rax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  __int64 v9; // r13
  unsigned __int8 v10; // al
  int v11; // eax
  __int64 v12; // r13
  __int16 v13; // cx
  __int64 result; // rax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r13
  unsigned __int16 v18; // ax
  __int64 v19; // r13
  unsigned __int16 v20; // ax
  __int64 v21; // rdx
  unsigned __int16 next_word; // ax
  __int16 v23; // dx
  __int64 v24; // rdx
  int v25; // r13d
  __int64 v26; // r15
  __int64 v27; // rbp
  int v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // dl
  __int64 v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int8 v35; // al
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r13
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r13
  __int16 v51; // cx
  __int64 v52; // rax

  v3 = 0;
  *(_BYTE *)(a1 + 45) = 0;
  next_byte = (unsigned __int8)insn_get_next_byte();
  v5 = &qword_8780[2 * next_byte];
  v6 = *(_DWORD *)v5;
  v7 = *((_DWORD *)v5 + 2);
  *(_WORD *)(a1 + 24) = v6;
  if ( v7 != -1 )
  {
    *(_BYTE *)(a1 + 41) = 1;
    v3 = 1;
    *(_WORD *)(a1 + 46) = v7;
  }
  v8 = HIDWORD(qword_8780[2 * next_byte]);
  switch ( v8 )
  {
    case 0:
      v19 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v19 + 41) = 2;
      next_word = insn_get_next_word();
      *(_QWORD *)(v19 + 56) = next_word;
      v23 = *(_WORD *)(a1 + 24);
      if ( v23 != 64 && v23 != 31 )
        goto LABEL_11;
      v24 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v24 + 41) = 7;
      *(_QWORD *)(v24 + 64) = next_word;
      goto LABEL_12;
    case 1:
    case 2:
      v17 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v17 + 41) = 4;
      LODWORD(v3) = v3 + 1;
      *(_WORD *)(v17 + 46) = (v8 != 1) + 104;
      v18 = insn_get_next_word();
      *(_BYTE *)(v17 + 45) = 0;
      *(_QWORD *)(v17 + 56) = v18;
      result = *(unsigned __int16 *)(a1 + 26);
      goto LABEL_5;
    case 3:
      v36 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v36 + 41) = 4;
      *(_WORD *)(v36 + 46) = 106;
      *(_QWORD *)(v36 + 56) = (unsigned __int16)insn_get_next_word();
      *(_BYTE *)(v36 + 45) = *(_WORD *)(a1 + 24) == 64;
      LODWORD(v3) = v3 + 1;
      result = *(unsigned __int16 *)(a1 + 26);
      goto LABEL_5;
    case 4:
      v20 = insn_get_next_word();
      v21 = a1 + 40LL * (int)v3;
      *(_WORD *)(v21 + 46) = ((next_byte & 0xBF) == 42) + 108;
      *(_BYTE *)(v21 + 41) = 4;
      *(_QWORD *)(v21 + 56) = v20 & 0x1FFF;
      *(_QWORD *)(v21 + 48) = v20 >> 13;
      *(_BYTE *)(v21 + 45) = 0;
      goto LABEL_12;
    case 5:
      v25 = v3 + 1;
      if ( (_WORD)v6 == 78 )
      {
        v3 = a1 + 40 * v3;
        *(_BYTE *)(v3 + 41) = 4;
        *(_WORD *)(v3 + 46) = 111;
        v52 = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(v3 + 48) = (unsigned __int8)v52;
        BYTE1(v52) = -1;
        *(_QWORD *)(v3 + 56) = v52;
        LODWORD(v3) = v25;
        result = *(unsigned __int16 *)(a1 + 26);
      }
      else
      {
        v26 = (int)v3;
        v27 = a1 + 40LL * (int)v3;
        *(_WORD *)(v27 + 46) = 100;
        *(_BYTE *)(v27 + 41) = 4;
        *(_QWORD *)(v27 + 56) = (unsigned __int8)insn_get_next_byte();
        v28 = *(unsigned __int16 *)(a1 + 24);
        if ( (_WORD)v28 == 1 )
        {
          v30 = 1;
        }
        else
        {
          v29 = (unsigned int)(v28 - 47);
          v30 = 0;
          if ( (unsigned __int16)v29 <= 0x3Cu )
          {
            v31 = 0x1000000000810081LL;
            v30 = _bittest64(&v31, v29);
          }
        }
        LODWORD(v3) = v25;
        *(_BYTE *)(a1 + 40 * v26 + 45) = v30;
        result = *(unsigned __int16 *)(a1 + 26);
      }
      goto LABEL_5;
    case 6:
    case 7:
      v19 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v19 + 41) = 4;
      *(_WORD *)(v19 + 46) = (v8 != 6) + 101;
      goto LABEL_10;
    case 8:
      v19 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v19 + 41) = 4;
      *(_WORD *)(v19 + 46) = 103;
      goto LABEL_10;
    case 9:
      v19 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v19 + 41) = 4;
      *(_WORD *)(v19 + 46) = 107;
LABEL_10:
      *(_QWORD *)(v19 + 56) = (unsigned __int8)insn_get_next_byte();
LABEL_11:
      *(_BYTE *)(v19 + 45) = 0;
LABEL_12:
      result = *(unsigned __int16 *)(a1 + 26);
      LODWORD(v3) = v3 + 1;
      goto LABEL_5;
    case 10:
      v32 = a1 + 40LL * ((int)v3 + 1);
      *(_BYTE *)(v32 + 41) = 4;
      *(_WORD *)(v32 + 46) = 100;
      *(_QWORD *)(v32 + 56) = (unsigned __int8)insn_get_next_byte();
      goto LABEL_24;
    case 11:
    case 12:
      v9 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v9 + 41) = 4;
      *(_WORD *)(v9 + 46) = (v8 == 12) + 100;
      v10 = insn_get_next_byte();
      *(_BYTE *)(v9 + 45) = 0;
      *(_QWORD *)(v9 + 56) = v10;
      v11 = v3 + 1;
      LODWORD(v3) = v3 + 2;
      v12 = a1 + 40LL * v11;
      *(_BYTE *)(v12 + 41) = 7;
      v13 = (char)insn_get_next_byte();
      result = *(unsigned __int16 *)(a1 + 26);
      *(_QWORD *)(v12 + 56) = (unsigned __int16)(v13 + result + *(_WORD *)(a1 + 8));
      goto LABEL_5;
    case 13:
      v37 = (int)v3;
      LODWORD(v3) = v3 + 1;
      v38 = a1 + 40 * v37;
      *(_BYTE *)(v38 + 41) = 5;
      v39 = insn_get_next_byte();
      *(_BYTE *)(v38 + 45) = 0;
      *(_QWORD *)(v38 + 48) = v39;
      result = *(unsigned __int16 *)(a1 + 26);
      goto LABEL_5;
    case 14:
      v32 = a1 + 40LL * ((int)v3 + 1);
      *(_BYTE *)(v32 + 41) = 5;
      *(_QWORD *)(v32 + 48) = (unsigned __int8)insn_get_next_byte();
LABEL_24:
      v33 = (int)v3;
      *(_BYTE *)(v32 + 45) = 0;
      LODWORD(v3) = v3 + 2;
      v34 = a1 + 40 * v33;
      *(_BYTE *)(v34 + 41) = 4;
      *(_WORD *)(v34 + 46) = 100;
      v35 = insn_get_next_byte();
      *(_BYTE *)(v34 + 45) = 0;
      *(_QWORD *)(v34 + 56) = v35;
      result = *(unsigned __int16 *)(a1 + 26);
      goto LABEL_5;
    case 15:
      result = *(unsigned __int16 *)(a1 + 26);
      if ( (_WORD)v6 == 114 )
      {
        v40 = (int)v3;
        LODWORD(v3) = v3 + 1;
        v41 = (unsigned __int8)next_byte >> 4;
        v42 = a1 + 40 * v40;
        *(_WORD *)(v42 + 46) = 110;
        *(_QWORD *)(v42 + 48) = v41;
        *(_BYTE *)(v42 + 41) = 4;
        *(_QWORD *)(v42 + 56) = 65502 - 2 * v41;
      }
      goto LABEL_5;
    case 16:
      v43 = (int)v3;
      LODWORD(v3) = v3 + 1;
      v44 = a1 + 40 * v43;
      *(_BYTE *)(v44 + 41) = 3;
      *(_WORD *)(v44 + 46) = 100;
      result = *(unsigned __int16 *)(a1 + 26);
      goto LABEL_5;
    case 18:
      v45 = (int)v3;
      LODWORD(v3) = v3 + 1;
      v46 = a1 + 40 * v45;
      *(_BYTE *)(v46 + 41) = 3;
      *(_WORD *)(v46 + 46) = 102;
      result = *(unsigned __int16 *)(a1 + 26);
      goto LABEL_5;
    case 19:
      v47 = a1 + 40LL * (int)v3;
      *(_BYTE *)(v47 + 41) = 3;
      *(_WORD *)(v47 + 46) = 100;
      LODWORD(v47) = v3 + 1;
      LODWORD(v3) = v3 + 2;
      v48 = a1 + 40LL * (int)v47;
      *(_BYTE *)(v48 + 41) = 3;
      *(_WORD *)(v48 + 46) = 101;
      result = *(unsigned __int16 *)(a1 + 26);
      goto LABEL_5;
    case 20:
      v49 = (int)v3;
      LODWORD(v3) = v3 + 1;
      v50 = a1 + 40 * v49;
      *(_BYTE *)(v50 + 41) = 7;
      v51 = (char)insn_get_next_byte();
      result = *(unsigned __int16 *)(a1 + 26);
      *(_QWORD *)(v50 + 56) = (unsigned __int16)(v51 + result + *(_WORD *)(a1 + 8));
LABEL_5:
      v15 = HIDWORD(qword_8780[2 * next_byte + 1]);
      if ( v15 != -1 )
      {
        v16 = a1 + 40LL * (int)v3;
        *(_BYTE *)(v16 + 41) = 1;
        *(_WORD *)(v16 + 46) = v15;
      }
      break;
    default:
      sub_37F0((__int64)"ana: bad code 0x%x, @: 0x%a (IP=%a)", next_byte, a2, a3);
      result = 0;
      break;
  }
  return result;
}

