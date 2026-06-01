unsigned __int64 __fastcall sub_48F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  int v5; // r8d
  int v6; // ecx
  int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r12
  __int16 v12; // bp
  __int16 v13; // ax
  __int64 v14; // r12
  __int16 v15; // bp
  __int16 v16; // ax
  __int64 v17; // r12
  __int16 v18; // bp
  __int64 v19; // rbp
  __int16 v20; // r12
  __int16 v21; // ax
  __int64 v22; // rbp
  __int16 v23; // r13
  __int16 v24; // ax
  __int64 v25; // rbp
  __int16 v26; // r13
  __int16 v27; // ax
  __int64 v28; // r13
  int v29; // r12d
  int v30; // ebp
  __int64 v31; // r12
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int8 v34; // dl
  __int64 v35; // rbp
  unsigned __int8 v36; // al
  __int64 v37; // r12
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int8 v40; // dl
  __int64 v41; // rbp
  unsigned __int8 v42; // al
  __int64 v43; // r13
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int8 v46; // dl
  __int64 v47; // rbp
  unsigned __int8 v48; // al
  char v49; // r12
  int v50; // r12d
  unsigned __int8 v51; // al
  __int64 v52; // rbp
  unsigned __int8 v53; // al
  char v54; // al
  __int64 v55; // r13
  int v56; // r12d
  int v57; // ebp
  unsigned __int8 v58; // al
  __int64 v59; // r13
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int8 v62; // dl
  __int64 v63; // rbp
  unsigned __int8 v64; // al
  char v65; // r12
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // r13
  unsigned __int64 v69; // rcx
  __int64 v70; // rsi
  unsigned __int8 v71; // cl
  __int64 v72; // r15
  unsigned __int8 v73; // al
  __int64 v74; // rsi
  __int64 v75; // r12
  __int16 v76; // bp
  __int64 v77; // r12
  unsigned __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int8 v80; // dl
  __int64 v81; // rbp
  unsigned __int8 v82; // al
  unsigned __int8 v83; // al
  __int64 v84; // rbp
  unsigned __int8 v85; // al
  __int64 v86; // rbp
  __int64 v87; // r13
  unsigned __int8 v88; // al
  __int64 v89; // rbp
  unsigned __int8 next_byte; // al
  __int64 v91; // r12
  unsigned __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int8 v94; // dl
  __int64 v95; // rbp
  unsigned __int8 v96; // al
  __int64 v97; // r12
  unsigned __int64 v98; // rcx
  __int64 v99; // rax
  unsigned __int8 v100; // dl
  __int64 v101; // rbp
  unsigned __int8 v102; // al
  int v103; // r13d
  __int64 v104; // rax
  __int64 v105; // r15
  unsigned __int8 v106; // dl
  __int64 v107; // r15
  __int64 v108; // r14
  unsigned __int8 v109; // al
  int v110; // edx
  unsigned __int8 v111; // cl
  __int64 v112; // rcx
  unsigned __int64 v113; // rdx
  __int64 v114; // rsi
  int v115; // r13d
  __int64 v116; // rsi
  __int64 v117; // r12
  int v118; // r13d
  __int64 v119; // rax
  __int64 v120; // r14
  __int16 v121; // r15
  __int16 v122; // ax
  int v123; // eax
  unsigned __int8 v124; // dl
  __int64 v125; // rdx
  unsigned __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // r13
  __int64 v129; // r15
  __int16 v130; // r14
  __int16 v131; // ax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rax
  char v137; // al
  __int64 v138; // r14
  int v139; // r13d
  int v140; // ebp
  unsigned __int8 v141; // al
  __int64 v142; // rax
  __int64 v143; // rbp
  __int16 v144; // r13
  __int16 v145; // ax
  __int64 v146; // rax
  __int64 v147; // [rsp+8h] [rbp-40h]
  __int64 v148; // [rsp+8h] [rbp-40h]

  result = 0;
  v5 = *(unsigned __int16 *)(a2 + 24);
  LOWORD(v6) = v5;
  while ( v5 != LODWORD(qword_B100[result]) )
  {
    if ( ++result == 32 )
    {
      LOBYTE(v7) = 0;
      goto LABEL_6;
    }
  }
  result = (int)result;
  v7 = HIDWORD(qword_B100[(int)result]);
LABEL_6:
  if ( (unsigned __int16)v5 <= 2u )
  {
    if ( (_WORD)v5 )
      goto LABEL_9;
LABEL_16:
    v9 = 0;
    goto LABEL_10;
  }
  result = (unsigned int)(v5 - 22);
  if ( (unsigned __int16)(v5 - 22) > 0x38u )
    goto LABEL_16;
  v8 = 0x104000000802081LL;
  if ( !_bittest64(&v8, result) )
  {
    if ( (_WORD)v5 == 36 )
    {
      switch ( a3 )
      {
        case 0LL:
        case 22LL:
          return sub_4810(a2, a2 + 40, 0);
        case 1LL:
        case 23LL:
          v10 = 80;
LABEL_12:
          result = sub_4810(a2, a2 + v10, 0);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 2LL:
          v9 = 1;
LABEL_35:
          result = a2 + 40 * v9;
          *(_BYTE *)(result + 41) = 1;
          *(_WORD *)(result + 46) = 0;
          *(_BYTE *)(result + 45) = 1;
          goto LABEL_13;
        case 3LL:
          v9 = 1;
LABEL_37:
          result = a2 + 40 * v9;
          *(_BYTE *)(result + 41) = 1;
          *(_WORD *)(result + 46) = 1;
          *(_BYTE *)(result + 45) = 1;
          goto LABEL_13;
        case 4LL:
          *(_BYTE *)(a2 + 81) = 2;
          v87 = a2 + 80;
          v9 = 1;
LABEL_137:
          v142 = 0x104000000802081LL;
          v88 = _bittest64(&v142, (unsigned int)(v5 - 22));
          if ( (unsigned __int16)(v5 - 22) >= 0x39u )
            v88 = 0;
LABEL_82:
          v89 = a2 + 40 * v9;
          *(_BYTE *)(v89 + 45) = v88;
          next_byte = insn_get_next_byte();
          *(_BYTE *)(v89 + 72) |= v7;
          *(_QWORD *)(v89 + 56) = next_byte;
          result = sub_47C0(a2, v87);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 5LL:
          *(_BYTE *)(a2 + 121) = 2;
          v68 = 2;
          v9 = 1;
          v147 = a2 + 120;
          v69 = 14;
          v66 = 2;
          v67 = 8;
LABEL_64:
          v70 = 0x104000000802081LL;
          v71 = _bittest64(&v70, v69);
LABEL_65:
          v72 = a2 + 40 * v66;
          *(_BYTE *)(v72 + 45) = v71;
          v73 = insn_get_next_byte();
          *(_BYTE *)(v72 + 72) |= v7;
          *(_QWORD *)(v72 + 56) = v73;
          sub_47C0(a2, v147);
          v74 = a2 + 8 * (v67 + v68);
          goto LABEL_66;
        case 6LL:
          *(_BYTE *)(a2 + 81) = 4;
          v31 = a2 + 80;
          v32 = 14;
          v9 = 1;
LABEL_42:
          v33 = 0x104000000802081LL;
          v34 = _bittest64(&v33, v32);
LABEL_43:
          v35 = a2 + 40 * v9;
          *(_BYTE *)(v35 + 45) = v34;
          v36 = insn_get_next_byte();
          *(_WORD *)(v35 + 46) = 2;
          *(_QWORD *)(v35 + 56) = v36;
          result = sub_47C0(a2, v31);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 7LL:
          *(_BYTE *)(a2 + 81) = 4;
          v97 = a2 + 80;
          v98 = 14;
          v9 = 1;
LABEL_89:
          v99 = 0x104000000802081LL;
          v100 = _bittest64(&v99, v98);
LABEL_90:
          v101 = a2 + 40 * v9;
          *(_BYTE *)(v101 + 45) = v100;
          v102 = insn_get_next_byte();
          *(_WORD *)(v101 + 46) = 3;
          *(_QWORD *)(v101 + 56) = v102;
          result = sub_47C0(a2, v97);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 8LL:
          *(_BYTE *)(a2 + 81) = 2;
          v59 = a2 + 80;
          v60 = 14;
          v9 = 1;
LABEL_60:
          v61 = 0x104000000802081LL;
          v62 = _bittest64(&v61, v60);
LABEL_61:
          v63 = a2 + 40 * v9;
          *(_BYTE *)(v63 + 45) = v62;
          v64 = insn_get_next_byte();
          v65 = *(_BYTE *)(v63 + 72) | v7;
          *(_QWORD *)(v63 + 56) = v64;
          *(_BYTE *)(v63 + 72) = v65 | 2;
          result = sub_47C0(a2, v59);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 9LL:
          *(_BYTE *)(a2 + 81) = 4;
          v91 = a2 + 80;
          v92 = 14;
          v9 = 1;
LABEL_85:
          v93 = 0x104000000802081LL;
          v94 = _bittest64(&v93, v92);
LABEL_86:
          v95 = a2 + 40 * v9;
          *(_BYTE *)(v95 + 45) = v94;
          v96 = insn_get_next_byte();
          *(_BYTE *)(v95 + 72) |= 4u;
          *(_WORD *)(v95 + 46) = 2;
          *(_QWORD *)(v95 + 56) = v96;
          result = sub_47C0(a2, v91);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 10LL:
          *(_BYTE *)(a2 + 81) = 4;
          v77 = a2 + 80;
          v78 = 14;
          v9 = 1;
LABEL_71:
          v79 = 0x104000000802081LL;
          v80 = _bittest64(&v79, v78);
LABEL_72:
          v81 = a2 + 40 * v9;
          *(_BYTE *)(v81 + 45) = v80;
          v82 = insn_get_next_byte();
          *(_BYTE *)(v81 + 72) |= 8u;
          *(_QWORD *)(v81 + 56) = v82;
          *(_WORD *)(v81 + 46) = 3;
          result = sub_47C0(a2, v77);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 11LL:
          *(_BYTE *)(a2 + 81) = 2;
          v43 = a2 + 80;
          v44 = 14;
          v9 = 1;
LABEL_50:
          v45 = 0x104000000802081LL;
          v46 = _bittest64(&v45, v44);
LABEL_51:
          v47 = a2 + 40 * v9;
          *(_BYTE *)(v47 + 45) = v46;
          v48 = insn_get_next_byte();
          v49 = *(_BYTE *)(v47 + 72) | v7;
          *(_QWORD *)(v47 + 56) = v48;
          *(_BYTE *)(v47 + 72) = v49 | 2;
          result = sub_47C0(a2, v43);
          *(_DWORD *)(a2 + 28) |= 1u;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 12LL:
          *(_BYTE *)(a2 + 81) = 4;
          v37 = a2 + 80;
          v38 = 14;
          v9 = 1;
LABEL_46:
          v39 = 0x104000000802081LL;
          v40 = _bittest64(&v39, v38);
          goto LABEL_47;
        case 13LL:
          v9 = 1;
LABEL_142:
          v143 = a2 + 40 * v9;
          *(_BYTE *)(v143 + 41) = 2;
          *(_BYTE *)(v143 + 45) = 1;
          v144 = (unsigned __int8)insn_get_next_byte();
          v145 = insn_get_next_byte();
          *(_BYTE *)(v143 + 72) |= v7;
          result = (unsigned __int16)(v144 | (v145 << 8));
          *(_QWORD *)(v143 + 56) = (unsigned __int16)result;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 14LL:
          v128 = 80;
          v9 = 1;
          v127 = 2;
LABEL_107:
          v129 = a2 + 40 * v127;
          *(_BYTE *)(v129 + 41) = 2;
          *(_BYTE *)(v129 + 45) = 1;
          v130 = (unsigned __int8)insn_get_next_byte();
          v131 = insn_get_next_byte();
          *(_BYTE *)(v129 + 72) |= v7;
          v74 = a2 + v128;
          *(_QWORD *)(v129 + 56) = (unsigned __int16)(v130 | (v131 << 8));
LABEL_66:
          sub_4810(a2, v74, 0);
          result = 5 * v9;
          *(_BYTE *)(a2 + 40 * v9 + 41) = 8;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 15LL:
          v9 = 1;
LABEL_24:
          v14 = a2 + 40 * v9;
          *(_BYTE *)(v14 + 41) = 4;
          *(_BYTE *)(v14 + 45) = 1;
          v15 = (unsigned __int8)insn_get_next_byte();
          v16 = insn_get_next_byte();
          *(_WORD *)(v14 + 46) = 2;
          result = (unsigned __int16)(v15 | (v16 << 8));
          *(_QWORD *)(v14 + 56) = (unsigned __int16)result;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 16LL:
          v9 = 1;
LABEL_22:
          v11 = a2 + 40 * v9;
          *(_BYTE *)(v11 + 41) = 4;
          *(_BYTE *)(v11 + 45) = 1;
          v12 = (unsigned __int8)insn_get_next_byte();
          v13 = insn_get_next_byte();
          *(_WORD *)(v11 + 46) = 3;
          result = (unsigned __int16)(v12 | (v13 << 8));
          *(_QWORD *)(v11 + 56) = (unsigned __int16)result;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 17LL:
          v9 = 1;
LABEL_126:
          *(_BYTE *)(a2 + 40 * v9 + 41) = 2;
          if ( (unsigned __int16)v5 <= 2u )
          {
            v137 = ((_WORD)v5 == 0) + 1;
          }
          else if ( (unsigned __int16)(v5 - 22) > 0x38u )
          {
            v137 = 2;
          }
          else
          {
            v136 = 0x104000000802081LL;
            v137 = 2 - _bittest64(&v136, (unsigned int)(v5 - 22));
          }
          v138 = a2 + 40 * v9;
          *(_BYTE *)(v138 + 45) = v137;
          v139 = (unsigned __int8)insn_get_next_byte();
          v140 = (unsigned __int8)insn_get_next_byte();
          v141 = insn_get_next_byte();
          *(_BYTE *)(v138 + 72) |= v7;
          result = v139 | (v141 << 16) | (v140 << 8);
          *(_QWORD *)(v138 + 56) = result;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 18LL:
          *(_BYTE *)(a2 + 81) = 4;
          v9 = 1;
LABEL_123:
          if ( (unsigned __int16)(v5 - 22) > 0x38u )
          {
            v54 = 2;
          }
          else
          {
            v135 = 0x104000000802081LL;
            v54 = 2 - _bittest64(&v135, (unsigned int)(v5 - 22));
          }
LABEL_57:
          v55 = a2 + 40 * v9;
          *(_BYTE *)(v55 + 45) = v54;
          v56 = (unsigned __int8)insn_get_next_byte();
          v57 = (unsigned __int8)insn_get_next_byte();
          v58 = insn_get_next_byte();
          *(_WORD *)(v55 + 46) = 2;
          result = v56 | (v58 << 16) | (v57 << 8);
          *(_QWORD *)(v55 + 56) = result;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 19LL:
          v9 = 1;
LABEL_33:
          v25 = a2 + 40 * v9;
          *(_BYTE *)(v25 + 41) = 2;
          *(_BYTE *)(v25 + 45) = 1;
          v26 = (unsigned __int8)insn_get_next_byte();
          v27 = insn_get_next_byte();
          *(_BYTE *)(v25 + 72) |= (unsigned __int8)v7 | 2;
          result = (unsigned __int16)(v26 | (v27 << 8));
          *(_QWORD *)(v25 + 56) = (unsigned __int16)result;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 20LL:
          v9 = 1;
LABEL_30:
          v22 = a2 + 40 * v9;
          *(_BYTE *)(v22 + 41) = 2;
          *(_BYTE *)(v22 + 45) = 1;
          v23 = (unsigned __int8)insn_get_next_byte();
          v24 = insn_get_next_byte();
          *(_BYTE *)(v22 + 72) |= (unsigned __int8)v7 | 2;
          *(_QWORD *)(v22 + 56) = (unsigned __int16)(v23 | (v24 << 8));
          v6 = *(unsigned __int16 *)(a2 + 24);
          result = (unsigned int)(v6 - 33);
          if ( (unsigned __int16)(v6 - 33) > 1u )
            goto LABEL_13;
          *(_DWORD *)(a2 + 28) |= 1u;
          return result;
        case 21LL:
          v9 = 1;
LABEL_28:
          v19 = a2 + 40 * v9;
          *(_BYTE *)(v19 + 41) = 4;
          *(_BYTE *)(v19 + 45) = 1;
          v20 = (unsigned __int8)insn_get_next_byte();
          v21 = insn_get_next_byte();
          *(_BYTE *)(v19 + 72) |= 4u;
          *(_WORD *)(v19 + 46) = 2;
          result = (unsigned __int16)(v20 | (v21 << 8));
          *(_QWORD *)(v19 + 56) = (unsigned __int16)result;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 24LL:
          v114 = 80;
LABEL_98:
          result = sub_4810(a2, a2 + v114, 1);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 25LL:
          *(_BYTE *)(a2 + 81) = 7;
          v9 = 1;
LABEL_146:
          v146 = 0x104000000802081LL;
          v83 = _bittest64(&v146, (unsigned int)(v5 - 22));
          if ( (unsigned __int16)(v5 - 22) >= 0x39u )
            v83 = 0;
LABEL_75:
          v84 = a2 + 40 * v9;
          *(_BYTE *)(v84 + 45) = v83;
          goto LABEL_76;
        case 26LL:
          v9 = 1;
LABEL_26:
          v17 = a2 + 40 * v9;
          *(_BYTE *)(v17 + 41) = 7;
          *(_BYTE *)(v17 + 45) = 1;
          v18 = (unsigned __int8)insn_get_next_byte();
          result = (__int16)(v18 | ((unsigned __int16)insn_get_next_byte() << 8));
          *(_QWORD *)(v17 + 56) = result + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          *(_DWORD *)(a2 + 28) |= 1u;
          goto LABEL_13;
        case 27LL:
          *(_BYTE *)(a2 + 121) = 2;
          v105 = 80;
          v103 = 3;
          v9 = 1;
          v104 = 2;
LABEL_119:
          v134 = 0x104000000802081LL;
          v106 = _bittest64(&v134, (unsigned int)(v5 - 22));
          if ( (unsigned __int16)(v5 - 22) >= 0x39u )
            v106 = 0;
LABEL_93:
          v107 = a2 + v105;
          v108 = a2 + 40 * v104;
          *(_BYTE *)(v108 + 45) = v106;
          v109 = insn_get_next_byte();
          *(_BYTE *)(v108 + 72) |= v7;
          *(_QWORD *)(v108 + 56) = v109;
          sub_47C0(a2, v107);
          sub_4810(a2, v107, 0);
          *(_BYTE *)(a2 + 40 * v9 + 41) = 8;
          *(_BYTE *)(a2 + 40LL * v103 + 41) = 7;
          v110 = *(unsigned __int16 *)(a2 + 24);
          v111 = (_WORD)v110 != 0;
          if ( (unsigned __int16)v110 > 2u )
          {
            v112 = 0x104000000802081LL;
            v113 = (unsigned int)(v110 - 22);
            v111 = _bittest64(&v112, v113);
            if ( (unsigned __int16)v113 >= 0x39u )
              v111 = 0;
          }
          v84 = a2 + 40LL * v103;
          *(_BYTE *)(v84 + 45) = v111;
          goto LABEL_76;
        case 28LL:
          v118 = 3;
          v9 = 1;
          v119 = 2;
          v148 = 80;
LABEL_102:
          v120 = a2 + 40 * v119;
          *(_BYTE *)(v120 + 41) = 2;
          *(_BYTE *)(v120 + 45) = 1;
          v121 = (unsigned __int8)insn_get_next_byte();
          v122 = insn_get_next_byte();
          *(_BYTE *)(v120 + 72) |= v7;
          *(_QWORD *)(v120 + 56) = (unsigned __int16)(v121 | (v122 << 8));
          sub_4810(a2, a2 + v148, 0);
          *(_BYTE *)(a2 + 40 * v9 + 41) = 8;
          *(_BYTE *)(a2 + 40LL * v118 + 41) = 7;
          v123 = *(unsigned __int16 *)(a2 + 24);
          v124 = (_WORD)v123 != 0;
          if ( (unsigned __int16)v123 > 2u )
          {
            v125 = 0x104000000802081LL;
            v126 = (unsigned int)(v123 - 22);
            v124 = _bittest64(&v125, v126);
            if ( (unsigned __int16)v126 >= 0x39u )
              v124 = 0;
          }
          v84 = a2 + 40LL * v118;
          *(_BYTE *)(v84 + 45) = v124;
LABEL_76:
          result = (char)insn_get_next_byte();
          *(_QWORD *)(v84 + 56) = (char)result + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 29LL:
          *(_BYTE *)(a2 + 81) = 4;
          v9 = 1;
LABEL_114:
          v133 = 0x104000000802081LL;
          v85 = _bittest64(&v133, (unsigned int)(v5 - 22));
          if ( (unsigned __int16)(v5 - 22) >= 0x39u )
            v85 = 0;
LABEL_79:
          v86 = a2 + 40 * v9;
          *(_BYTE *)(v86 + 45) = v85;
          result = (unsigned __int8)insn_get_next_byte();
          *(_WORD *)(v86 + 46) = 4;
          *(_QWORD *)(v86 + 56) = (unsigned __int8)result;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 30LL:
          *(_BYTE *)(a2 + 81) = 4;
          v50 = 2;
          v9 = 1;
LABEL_109:
          v132 = 0x104000000802081LL;
          v51 = _bittest64(&v132, (unsigned int)(v5 - 22));
          if ( (unsigned __int16)(v5 - 22) >= 0x39u )
            v51 = 0;
LABEL_54:
          v52 = a2 + 40 * v9;
          *(_BYTE *)(v52 + 45) = v51;
          v53 = insn_get_next_byte();
          *(_BYTE *)(v52 + 72) |= 4u;
          *(_QWORD *)(v52 + 56) = v53;
          *(_WORD *)(v52 + 46) = 4;
          result = a2 + 40LL * v50;
          *(_BYTE *)(result + 41) = 1;
          *(_WORD *)(result + 46) = 3;
          *(_BYTE *)(result + 45) = 1;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        case 31LL:
          v117 = 160;
          v115 = 3;
          v116 = 80;
          v9 = 1;
LABEL_100:
          sub_4810(a2, a2 + v116, 0);
          *(_BYTE *)(a2 + 40 * v9 + 72) |= 1u;
          sub_4810(a2, a2 + v117, 0);
          result = 5LL * v115;
          *(_BYTE *)(a2 + 40LL * v115 + 72) |= 1u;
          LOWORD(v6) = *(_WORD *)(a2 + 24);
          goto LABEL_13;
        default:
LABEL_169:
          if ( under_debugger )
            BUG();
          interr();
          return sub_5990(10027);
      }
    }
    goto LABEL_16;
  }
LABEL_9:
  result = *(unsigned __int8 *)(a1 + 260);
  *(_BYTE *)(a2 + 41) = 1;
  v9 = 1;
  *(_BYTE *)(a2 + 45) = 1;
  *(_WORD *)(a2 + 46) = result;
LABEL_10:
  switch ( a3 )
  {
    case 0LL:
    case 22LL:
      return result;
    case 1LL:
    case 23LL:
      v10 = 40LL * ((int)v9 + 1);
      goto LABEL_12;
    case 2LL:
      goto LABEL_35;
    case 3LL:
      goto LABEL_37;
    case 4LL:
      v87 = a2 + 40LL * ((int)v9 + 1);
      *(_BYTE *)(a2 + 40 * v9 + 41) = 2;
      if ( (unsigned __int16)v5 > 2u )
        goto LABEL_137;
      v88 = (_WORD)v5 != 0;
      goto LABEL_82;
    case 5LL:
      v66 = (int)v9 + 1;
      v67 = 4 * v66;
      v68 = v66;
      v147 = a2 + 8 * (5 * v66 + 5);
      *(_BYTE *)(a2 + 40 * v66 + 41) = 2;
      if ( (unsigned __int16)v5 <= 2u )
      {
        v71 = (_WORD)v5 != 0;
      }
      else
      {
        v69 = (unsigned int)(v5 - 22);
        if ( (unsigned __int16)(v5 - 22) <= 0x38u )
          goto LABEL_64;
        v71 = 0;
      }
      goto LABEL_65;
    case 6LL:
      v31 = a2 + 40LL * ((int)v9 + 1);
      *(_BYTE *)(a2 + 40 * v9 + 41) = 4;
      if ( (unsigned __int16)v5 <= 2u )
      {
        v34 = (_WORD)v5 != 0;
      }
      else
      {
        v32 = (unsigned int)(v5 - 22);
        if ( (unsigned __int16)(v5 - 22) <= 0x38u )
          goto LABEL_42;
        v34 = 0;
      }
      goto LABEL_43;
    case 7LL:
      v97 = a2 + 40LL * ((int)v9 + 1);
      *(_BYTE *)(a2 + 40 * v9 + 41) = 4;
      if ( (unsigned __int16)v5 <= 2u )
      {
        v100 = (_WORD)v5 != 0;
      }
      else
      {
        v98 = (unsigned int)(v5 - 22);
        if ( (unsigned __int16)(v5 - 22) <= 0x38u )
          goto LABEL_89;
        v100 = 0;
      }
      goto LABEL_90;
    case 8LL:
      v59 = a2 + 40LL * ((int)v9 + 1);
      *(_BYTE *)(a2 + 40 * v9 + 41) = 2;
      if ( (unsigned __int16)v5 <= 2u )
      {
        v62 = (_WORD)v5 != 0;
      }
      else
      {
        v60 = (unsigned int)(v5 - 22);
        if ( (unsigned __int16)(v5 - 22) <= 0x38u )
          goto LABEL_60;
        v62 = 0;
      }
      goto LABEL_61;
    case 9LL:
      v91 = a2 + 40LL * ((int)v9 + 1);
      *(_BYTE *)(a2 + 40 * v9 + 41) = 4;
      if ( (unsigned __int16)v5 <= 2u )
      {
        v94 = (_WORD)v5 != 0;
      }
      else
      {
        v92 = (unsigned int)(v5 - 22);
        if ( (unsigned __int16)(v5 - 22) <= 0x38u )
          goto LABEL_85;
        v94 = 0;
      }
      goto LABEL_86;
    case 10LL:
      v77 = a2 + 40LL * ((int)v9 + 1);
      *(_BYTE *)(a2 + 40 * v9 + 41) = 4;
      if ( (unsigned __int16)v5 <= 2u )
      {
        v80 = (_WORD)v5 != 0;
      }
      else
      {
        v78 = (unsigned int)(v5 - 22);
        if ( (unsigned __int16)(v5 - 22) <= 0x38u )
          goto LABEL_71;
        v80 = 0;
      }
      goto LABEL_72;
    case 11LL:
      v43 = a2 + 40LL * ((int)v9 + 1);
      *(_BYTE *)(a2 + 40 * v9 + 41) = 2;
      if ( (unsigned __int16)v5 <= 2u )
      {
        v46 = (_WORD)v5 != 0;
      }
      else
      {
        v44 = (unsigned int)(v5 - 22);
        if ( (unsigned __int16)(v5 - 22) <= 0x38u )
          goto LABEL_50;
        v46 = 0;
      }
      goto LABEL_51;
    case 12LL:
      v37 = a2 + 40LL * ((int)v9 + 1);
      *(_BYTE *)(a2 + 40 * v9 + 41) = 4;
      if ( (unsigned __int16)v5 <= 2u )
      {
        v40 = (_WORD)v5 != 0;
      }
      else
      {
        v38 = (unsigned int)(v5 - 22);
        if ( (unsigned __int16)(v5 - 22) <= 0x38u )
          goto LABEL_46;
        v40 = 0;
      }
      break;
    case 13LL:
      if ( (unsigned __int16)(v5 - 33) > 1u )
        goto LABEL_142;
      v75 = a2 + 40 * v9;
      *(_BYTE *)(v75 + 41) = 7;
      *(_BYTE *)(v75 + 45) = 1;
      v76 = (unsigned __int8)insn_get_next_byte();
      result = (unsigned __int16)(v76 | ((unsigned __int16)insn_get_next_byte() << 8));
      *(_QWORD *)(v75 + 56) = (unsigned __int16)result;
      LOWORD(v6) = *(_WORD *)(a2 + 24);
      goto LABEL_13;
    case 14LL:
      v127 = (int)v9 + 1;
      v128 = 40 * v127;
      goto LABEL_107;
    case 15LL:
      goto LABEL_24;
    case 16LL:
      goto LABEL_22;
    case 17LL:
      if ( (unsigned __int16)(v5 - 33) > 1u )
        goto LABEL_126;
      v28 = a2 + 40 * v9;
      *(_BYTE *)(v28 + 41) = 7;
      *(_BYTE *)(v28 + 45) = 2;
      v29 = (unsigned __int8)insn_get_next_byte();
      v30 = (unsigned __int8)insn_get_next_byte();
      result = v29 | ((unsigned __int8)insn_get_next_byte() << 16) | (v30 << 8);
      *(_QWORD *)(v28 + 56) = result;
      LOWORD(v6) = *(_WORD *)(a2 + 24);
      *(_DWORD *)(a2 + 28) |= 1u;
      goto LABEL_13;
    case 18LL:
      *(_BYTE *)(a2 + 40 * v9 + 41) = 4;
      if ( (unsigned __int16)v5 > 2u )
        goto LABEL_123;
      v54 = ((_WORD)v5 == 0) + 1;
      goto LABEL_57;
    case 19LL:
      goto LABEL_33;
    case 20LL:
      goto LABEL_30;
    case 21LL:
      goto LABEL_28;
    case 24LL:
      v114 = 40LL * ((int)v9 + 1);
      goto LABEL_98;
    case 25LL:
      *(_BYTE *)(a2 + 40 * v9 + 41) = 7;
      if ( (unsigned __int16)v5 > 2u )
        goto LABEL_146;
      v83 = (_WORD)v5 != 0;
      goto LABEL_75;
    case 26LL:
      goto LABEL_26;
    case 27LL:
      v103 = v9 + 2;
      v104 = (int)v9 + 1;
      v105 = 40 * v104;
      *(_BYTE *)(a2 + 40 * v104 + 41) = 2;
      if ( (unsigned __int16)v5 > 2u )
        goto LABEL_119;
      v106 = (_WORD)v5 != 0;
      goto LABEL_93;
    case 28LL:
      v118 = v9 + 2;
      v119 = (int)v9 + 1;
      v148 = 40 * v119;
      goto LABEL_102;
    case 29LL:
      *(_BYTE *)(a2 + 40 * v9 + 41) = 4;
      if ( (unsigned __int16)v5 > 2u )
        goto LABEL_114;
      v85 = (_WORD)v5 != 0;
      goto LABEL_79;
    case 30LL:
      v50 = v9 + 1;
      *(_BYTE *)(a2 + 40 * v9 + 41) = 4;
      if ( (unsigned __int16)v5 > 2u )
        goto LABEL_109;
      v51 = (_WORD)v5 != 0;
      goto LABEL_54;
    case 31LL:
      v115 = v9 + 2;
      v116 = 40LL * ((int)v9 + 1);
      v117 = 40LL * ((int)v9 + 3);
      goto LABEL_100;
    default:
      goto LABEL_169;
  }
LABEL_47:
  v41 = a2 + 40 * v9;
  *(_BYTE *)(v41 + 45) = v40;
  v42 = insn_get_next_byte();
  *(_BYTE *)(v41 + 72) |= 8u;
  *(_QWORD *)(v41 + 56) = v42;
  *(_WORD *)(v41 + 46) = 3;
  result = sub_47C0(a2, v37);
  *(_DWORD *)(a2 + 28) |= 1u;
  LOWORD(v6) = *(_WORD *)(a2 + 24);
LABEL_13:
  if ( (_WORD)v6 == 36 )
    return sub_4810(a2, a2 + 40, 0);
  return result;
}

