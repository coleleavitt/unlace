__int64 __fastcall sub_5380(__int64 a1)
{
  unsigned __int8 next_byte; // dl
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // al
  unsigned __int8 v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int8 v35; // al
  unsigned __int8 v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // al
  unsigned __int8 v48; // al
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int8 v51; // al
  unsigned __int8 v52; // al
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int8 v71; // al
  __int64 v72; // rax
  unsigned __int8 v73; // al
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int8 v79; // al
  unsigned __int8 v80; // al
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int8 v99; // al
  __int64 v100; // rax
  unsigned __int8 v101; // al
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 sreg; // rax

  next_byte = insn_get_next_byte();
  if ( next_byte <= 9u )
    return 0;
  switch ( next_byte )
  {
    case 0xAu:
      *(_WORD *)(a1 + 24) = 20;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sreg = get_sreg();
      sub_51B0(a1, a1 + 40, 0, sreg == 0);
      break;
    case 0xBu:
      *(_WORD *)(a1 + 24) = 20;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v125 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v125 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xCu:
    case 0xDu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Cu:
    case 0x1Du:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
    case 0x29u:
    case 0x2Cu:
    case 0x2Du:
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
    case 0x3Cu:
    case 0x3Du:
    case 0x40u:
    case 0x41u:
    case 0x42u:
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x49u:
    case 0x4Cu:
    case 0x4Du:
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
    case 0x61u:
    case 0x62u:
    case 0x63u:
    case 0x64u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Cu:
    case 0x6Du:
    case 0x6Eu:
    case 0x6Fu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x74u:
    case 0x75u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x79u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x7Eu:
    case 0x7Fu:
    case 0x85u:
    case 0x87u:
    case 0x95u:
    case 0x97u:
    case 0xA5u:
    case 0xA7u:
    case 0xB5u:
    case 0xB7u:
    case 0xC5u:
    case 0xC7u:
    case 0xD5u:
    case 0xD7u:
    case 0xE5u:
    case 0xE7u:
    case 0xF5u:
    case 0xF7u:
      return 0;
    case 0xEu:
      *(_WORD *)(a1 + 24) = 20;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v124 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v124 == 0);
      break;
    case 0xFu:
      *(_WORD *)(a1 + 24) = 20;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v123 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v123 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x1Au:
      *(_WORD *)(a1 + 24) = 150;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v122 = get_sreg();
      sub_51B0(a1, a1 + 40, 0, v122 == 0);
      break;
    case 0x1Bu:
      *(_WORD *)(a1 + 24) = 150;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v121 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v121 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x1Eu:
      *(_WORD *)(a1 + 24) = 150;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v120 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v120 == 0);
      break;
    case 0x1Fu:
      *(_WORD *)(a1 + 24) = 150;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v119 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v119 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x2Au:
      *(_WORD *)(a1 + 24) = 106;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v118 = get_sreg();
      sub_51B0(a1, a1 + 40, 0, v118 == 0);
      break;
    case 0x2Bu:
      *(_WORD *)(a1 + 24) = 106;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v117 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v117 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x2Eu:
      *(_WORD *)(a1 + 24) = 106;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v116 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v116 == 0);
      break;
    case 0x2Fu:
      *(_WORD *)(a1 + 24) = 106;
      v115 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v115 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x3Au:
      *(_WORD *)(a1 + 24) = 153;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v114 = get_sreg();
      sub_51B0(a1, a1 + 40, 0, v114 == 0);
      break;
    case 0x3Bu:
      *(_WORD *)(a1 + 24) = 153;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v113 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v113 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x3Eu:
      *(_WORD *)(a1 + 24) = 153;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v112 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v112 == 0);
      break;
    case 0x3Fu:
      *(_WORD *)(a1 + 24) = 153;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v111 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v111 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x4Au:
      *(_WORD *)(a1 + 24) = 23;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v110 = get_sreg();
      sub_51B0(a1, a1 + 40, 0, v110 == 0);
      break;
    case 0x4Bu:
      *(_WORD *)(a1 + 24) = 23;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v109 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v109 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x4Eu:
      *(_WORD *)(a1 + 24) = 23;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v108 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v108 == 0);
      break;
    case 0x4Fu:
      *(_WORD *)(a1 + 24) = 23;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v107 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v107 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0x80u:
      *(_WORD *)(a1 + 24) = 3;
      v105 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v105 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v106 = get_sreg();
      sub_51B0(a1, a1 + 80, 3, v106 == 0);
      break;
    case 0x81u:
      *(_WORD *)(a1 + 24) = 3;
      v103 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v103 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v104 = get_sreg();
      sub_51B0(a1, a1 + 80, 4, v104 == 0);
      break;
    case 0x82u:
      *(_WORD *)(a1 + 24) = 3;
      v102 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v102 == 0) + 1;
      sub_51B0(a1, a1 + 80, 6, 5);
      break;
    case 0x83u:
      *(_WORD *)(a1 + 24) = 3;
      v100 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v100 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v101 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v101;
      *(_BYTE *)(a1 + 113) = 0;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 6;
      break;
    case 0x84u:
      *(_WORD *)(a1 + 24) = 3;
      v98 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v98 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v99 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v99;
      *(_BYTE *)(a1 + 113) = 1;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0x86u:
      *(_WORD *)(a1 + 24) = 3;
      v96 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v96 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v97 = get_sreg();
      sub_4C30(a1, a1 + 80, 2, v97 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0x88u:
      *(_WORD *)(a1 + 24) = 3;
      v94 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v94 == 0) + 1;
      v95 = get_sreg();
      sub_51B0(a1, a1 + 80, 3, v95 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0x89u:
      *(_WORD *)(a1 + 24) = 3;
      v93 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v93 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      sub_51B0(a1, a1 + 80, 6, 5);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0x8Au:
      *(_WORD *)(a1 + 24) = 3;
      v91 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v91 == 0) + 1;
      v92 = get_sreg();
      sub_51B0(a1, a1 + 80, 0, v92 == 0);
      break;
    case 0x8Bu:
      *(_WORD *)(a1 + 24) = 3;
      v89 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v89 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v90 = get_sreg();
      sub_51B0(a1, a1 + 80, 1, v90 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0x8Cu:
      *(_WORD *)(a1 + 24) = 3;
      v87 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v87 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v88 = get_sreg();
      sub_4C30(a1, a1 + 80, 3, v88 == 0);
      break;
    case 0x8Du:
      *(_WORD *)(a1 + 24) = 3;
      v85 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v85 == 0) + 1;
      v86 = get_sreg();
      sub_4C30(a1, a1 + 80, 4, v86 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0x8Eu:
      *(_WORD *)(a1 + 24) = 3;
      v83 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v83 == 0) + 1;
      v84 = get_sreg();
      sub_4C30(a1, a1 + 80, 0, v84 == 0);
      break;
    case 0x8Fu:
      *(_WORD *)(a1 + 24) = 3;
      v81 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v81 == 0) + 1;
      v82 = get_sreg();
      sub_4C30(a1, a1 + 80, 1, v82 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0x90u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      sub_51B0(a1, a1 + 80, 3, 2);
      break;
    case 0x91u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      sub_51B0(a1, a1 + 80, 4, 2);
      break;
    case 0x92u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_51B0(a1, a1 + 80, 6, 5);
      break;
    case 0x93u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      v80 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v80;
      *(_BYTE *)(a1 + 113) = 0;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 6;
      break;
    case 0x94u:
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 5;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 2;
      v79 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v79;
      *(_BYTE *)(a1 + 113) = 1;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0x96u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_4C30(a1, a1 + 80, 2, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0x98u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_51B0(a1, a1 + 80, 3, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0x99u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_51B0(a1, a1 + 80, 6, 5);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0x9Au:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      sub_51B0(a1, a1 + 80, 0, 2);
      break;
    case 0x9Bu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_51B0(a1, a1 + 80, 1, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0x9Cu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      sub_4C30(a1, a1 + 80, 3, 2);
      break;
    case 0x9Du:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      sub_4C30(a1, a1 + 80, 4, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0x9Eu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_4C30(a1, a1 + 80, 0, 2);
      break;
    case 0x9Fu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 5;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      sub_4C30(a1, a1 + 80, 1, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0xA0u:
      *(_WORD *)(a1 + 24) = 161;
      v77 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v77 == 0) + 1;
      v78 = get_sreg();
      sub_51B0(a1, a1 + 80, 3, v78 == 0);
      break;
    case 0xA1u:
      *(_WORD *)(a1 + 24) = 161;
      v75 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v75 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v76 = get_sreg();
      sub_51B0(a1, a1 + 80, 4, v76 == 0);
      break;
    case 0xA2u:
      *(_WORD *)(a1 + 24) = 161;
      v74 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v74 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      sub_51B0(a1, a1 + 80, 6, 5);
      break;
    case 0xA3u:
      *(_WORD *)(a1 + 24) = 161;
      v72 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v72 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v73 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v73;
      *(_BYTE *)(a1 + 113) = 0;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 6;
      break;
    case 0xA4u:
      *(_WORD *)(a1 + 24) = 161;
      v70 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v70 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v71 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v71;
      *(_BYTE *)(a1 + 113) = 1;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0xA6u:
      *(_WORD *)(a1 + 24) = 161;
      v68 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v68 == 0) + 1;
      v69 = get_sreg();
      sub_4C30(a1, a1 + 80, 2, v69 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0xA8u:
      *(_WORD *)(a1 + 24) = 161;
      v66 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v66 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v67 = get_sreg();
      sub_51B0(a1, a1 + 80, 3, v67 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0xA9u:
      *(_WORD *)(a1 + 24) = 161;
      v65 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v65 == 0) + 1;
      sub_51B0(a1, a1 + 80, 6, 5);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0xAAu:
      *(_WORD *)(a1 + 24) = 161;
      v63 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v63 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v64 = get_sreg();
      sub_51B0(a1, a1 + 80, 0, v64 == 0);
      break;
    case 0xABu:
      *(_WORD *)(a1 + 24) = 161;
      v61 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v61 == 0) + 1;
      v62 = get_sreg();
      sub_51B0(a1, a1 + 80, 1, v62 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0xACu:
      *(_WORD *)(a1 + 24) = 161;
      v59 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v59 == 0) + 1;
      v60 = get_sreg();
      sub_4C30(a1, a1 + 80, 3, v60 == 0);
      break;
    case 0xADu:
      *(_WORD *)(a1 + 24) = 161;
      v57 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v57 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v58 = get_sreg();
      sub_4C30(a1, a1 + 80, 4, v58 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0xAEu:
      *(_WORD *)(a1 + 24) = 161;
      v55 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = (v55 == 0) + 1;
      *(_WORD *)(a1 + 46) = 0;
      v56 = get_sreg();
      sub_4C30(a1, a1 + 80, 0, v56 == 0);
      break;
    case 0xAFu:
      *(_WORD *)(a1 + 24) = 161;
      v53 = get_sreg();
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = (v53 == 0) + 1;
      v54 = get_sreg();
      sub_4C30(a1, a1 + 80, 1, v54 == 0);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0xB0u:
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 163;
      *(_WORD *)(a1 + 46) = 2;
      *(_BYTE *)(a1 + 41) = 1;
      sub_51B0(a1, a1 + 80, 3, 2);
      break;
    case 0xB1u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 163;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_51B0(a1, a1 + 80, 4, 2);
      break;
    case 0xB2u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 163;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      sub_51B0(a1, a1 + 80, 6, 5);
      break;
    case 0xB3u:
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      *(_WORD *)(a1 + 24) = 163;
      *(_BYTE *)(a1 + 41) = 1;
      v52 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v52;
      *(_BYTE *)(a1 + 113) = 0;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 6;
      break;
    case 0xB4u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 163;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      v51 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v51;
      *(_BYTE *)(a1 + 113) = 1;
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0xB6u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 163;
      *(_WORD *)(a1 + 46) = 2;
      sub_4C30(a1, a1 + 80, 2, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0xB8u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 163;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_51B0(a1, a1 + 80, 3, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0xB9u:
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 163;
      *(_WORD *)(a1 + 46) = 2;
      sub_51B0(a1, a1 + 80, 6, 5);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 4;
      break;
    case 0xBAu:
      *(_WORD *)(a1 + 24) = 163;
      *(_DWORD *)(a1 + 28) = 4;
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 2;
      sub_51B0(a1, a1 + 80, 0, 2);
      break;
    case 0xBBu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 163;
      *(_WORD *)(a1 + 46) = 2;
      sub_51B0(a1, a1 + 80, 1, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0xBCu:
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 24) = 163;
      *(_WORD *)(a1 + 46) = 2;
      *(_BYTE *)(a1 + 41) = 1;
      sub_4C30(a1, a1 + 80, 3, 2);
      break;
    case 0xBDu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 163;
      *(_WORD *)(a1 + 46) = 2;
      *(_DWORD *)(a1 + 28) = 4;
      sub_4C30(a1, a1 + 80, 4, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0xBEu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 24) = 163;
      *(_DWORD *)(a1 + 28) = 4;
      *(_WORD *)(a1 + 46) = 2;
      sub_4C30(a1, a1 + 80, 0, 2);
      break;
    case 0xBFu:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = 2;
      *(_WORD *)(a1 + 24) = 163;
      *(_DWORD *)(a1 + 28) = 4;
      sub_4C30(a1, a1 + 80, 1, 2);
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 126) = 3;
      break;
    case 0xC0u:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v50 = get_sreg();
      sub_51B0(a1, a1 + 40, 3, v50 == 0);
      break;
    case 0xC1u:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v49 = get_sreg();
      sub_51B0(a1, a1 + 40, 4, v49 == 0);
      break;
    case 0xC2u:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sub_51B0(a1, a1 + 40, 6, 5);
      break;
    case 0xC3u:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v48 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v48;
      *(_BYTE *)(a1 + 73) = 0;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 6;
      break;
    case 0xC4u:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v47 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v47;
      *(_BYTE *)(a1 + 73) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xC6u:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v46 = get_sreg();
      sub_4C30(a1, a1 + 40, 2, v46 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xC8u:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v45 = get_sreg();
      sub_51B0(a1, a1 + 40, 3, v45 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xC9u:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sub_51B0(a1, a1 + 40, 6, 5);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xCAu:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v44 = get_sreg();
      sub_51B0(a1, a1 + 40, 0, v44 == 0);
      break;
    case 0xCBu:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v43 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v43 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xCCu:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v42 = get_sreg();
      sub_4C30(a1, a1 + 40, 3, v42 == 0);
      break;
    case 0xCDu:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v41 = get_sreg();
      sub_4C30(a1, a1 + 40, 4, v41 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xCEu:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v40 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v40 == 0);
      break;
    case 0xCFu:
      *(_WORD *)(a1 + 24) = 113;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v39 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v39 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xD0u:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v38 = get_sreg();
      sub_51B0(a1, a1 + 40, 3, v38 == 0);
      break;
    case 0xD1u:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v37 = get_sreg();
      sub_51B0(a1, a1 + 40, 4, v37 == 0);
      break;
    case 0xD2u:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sub_51B0(a1, a1 + 40, 6, 5);
      break;
    case 0xD3u:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v36 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v36;
      *(_BYTE *)(a1 + 73) = 0;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 6;
      break;
    case 0xD4u:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v35 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v35;
      *(_BYTE *)(a1 + 73) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xD6u:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v34 = get_sreg();
      sub_4C30(a1, a1 + 40, 2, v34 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xD8u:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v33 = get_sreg();
      sub_51B0(a1, a1 + 40, 3, v33 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xD9u:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sub_51B0(a1, a1 + 40, 6, 5);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xDAu:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v32 = get_sreg();
      sub_51B0(a1, a1 + 40, 0, v32 == 0);
      break;
    case 0xDBu:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v31 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v31 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xDCu:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v30 = get_sreg();
      sub_4C30(a1, a1 + 40, 3, v30 == 0);
      break;
    case 0xDDu:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v29 = get_sreg();
      sub_4C30(a1, a1 + 40, 4, v29 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xDEu:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v28 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v28 == 0);
      break;
    case 0xDFu:
      *(_WORD *)(a1 + 24) = 114;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v27 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v27 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xE0u:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v26 = get_sreg();
      sub_51B0(a1, a1 + 40, 3, v26 == 0);
      break;
    case 0xE1u:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v25 = get_sreg();
      sub_51B0(a1, a1 + 40, 4, v25 == 0);
      break;
    case 0xE2u:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sub_51B0(a1, a1 + 40, 6, 5);
      break;
    case 0xE3u:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v24 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v24;
      *(_BYTE *)(a1 + 73) = 0;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 6;
      break;
    case 0xE4u:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v23 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v23;
      *(_BYTE *)(a1 + 73) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xE6u:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v22 = get_sreg();
      sub_4C30(a1, a1 + 40, 2, v22 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xE8u:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v21 = get_sreg();
      sub_51B0(a1, a1 + 40, 3, v21 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xE9u:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sub_51B0(a1, a1 + 40, 6, 5);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xEAu:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v20 = get_sreg();
      sub_51B0(a1, a1 + 40, 0, v20 == 0);
      break;
    case 0xEBu:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v19 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v19 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xECu:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v18 = get_sreg();
      sub_4C30(a1, a1 + 40, 3, v18 == 0);
      break;
    case 0xEDu:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v17 = get_sreg();
      sub_4C30(a1, a1 + 40, 4, v17 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xEEu:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v16 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v16 == 0);
      break;
    case 0xEFu:
      *(_WORD *)(a1 + 24) = 77;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v15 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v15 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xF0u:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v14 = get_sreg();
      sub_51B0(a1, a1 + 40, 3, v14 == 0);
      break;
    case 0xF1u:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v13 = get_sreg();
      sub_51B0(a1, a1 + 40, 4, v13 == 0);
      break;
    case 0xF2u:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sub_51B0(a1, a1 + 40, 6, 5);
      break;
    case 0xF3u:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v12 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v12;
      *(_BYTE *)(a1 + 73) = 0;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 6;
      break;
    case 0xF4u:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v11 = insn_get_next_byte();
      *(_BYTE *)(a1 + 41) = 8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v11;
      *(_BYTE *)(a1 + 73) = 1;
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xF6u:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v10 = get_sreg();
      sub_4C30(a1, a1 + 40, 2, v10 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xF8u:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v9 = get_sreg();
      sub_51B0(a1, a1 + 40, 3, v9 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xF9u:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      sub_51B0(a1, a1 + 40, 6, 5);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 4;
      break;
    case 0xFAu:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v8 = get_sreg();
      sub_51B0(a1, a1 + 40, 0, v8 == 0);
      break;
    case 0xFBu:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v7 = get_sreg();
      sub_51B0(a1, a1 + 40, 1, v7 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xFCu:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v6 = get_sreg();
      sub_4C30(a1, a1 + 40, 3, v6 == 0);
      break;
    case 0xFDu:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v5 = get_sreg();
      sub_4C30(a1, a1 + 40, 4, v5 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
    case 0xFEu:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v4 = get_sreg();
      sub_4C30(a1, a1 + 40, 0, v4 == 0);
      break;
    case 0xFFu:
      *(_WORD *)(a1 + 24) = 78;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v3 = get_sreg();
      sub_4C30(a1, a1 + 40, 1, v3 == 0);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      break;
  }
  return *(unsigned __int16 *)(a1 + 26);
}

