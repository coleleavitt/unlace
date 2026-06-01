__int64 __fastcall sub_269F0(__int64 a1, char a2, unsigned __int64 *a3, __int64 *a4, _QWORD *a5)
{
  unsigned __int8 v5; // r14
  unsigned int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // r12
  __int16 v10; // ax
  __int64 v11; // r15
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // dl
  __int64 qword; // rax
  unsigned __int64 v18; // r11
  unsigned int v19; // r10d
  int v20; // ecx
  int v21; // ecx
  __int16 v22; // r8
  __int64 v23; // rsi
  unsigned __int16 v24; // ax
  __int16 v25; // ax
  bool v27; // cl
  __int64 v28; // rax
  __int16 v29; // ax
  unsigned int dword; // eax
  char v31; // r8
  char v32; // r8
  int flags; // eax
  int v34; // r14d
  unsigned __int64 v35; // r13
  char v36; // al
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 dtype_size; // rax
  char v44; // r8
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 *v49; // rax
  int v50; // eax
  bool v51; // al
  __int64 fchunk; // rax
  int v53; // eax
  __int64 v54; // rdi
  __int64 sreg; // rax
  __int64 v56; // rax
  char v57; // al
  __int64 ea_name; // rax
  char v59; // al
  unsigned int v60; // eax
  int v61; // eax
  bool v62; // al
  __int64 v66; // [rsp+20h] [rbp-E8h]
  bool v67; // [rsp+20h] [rbp-E8h]
  __int64 v68; // [rsp+20h] [rbp-E8h]
  char v69; // [rsp+28h] [rbp-E0h]
  __int64 v70; // [rsp+28h] [rbp-E0h]
  char v71; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v72; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v73; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v74; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v75; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v76; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v77; // [rsp+28h] [rbp-E0h]
  __int64 v78; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v79; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v80; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v81; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v82; // [rsp+30h] [rbp-D8h]
  __int16 v83; // [rsp+38h] [rbp-D0h]
  __int64 v84; // [rsp+38h] [rbp-D0h]
  __int64 v85; // [rsp+38h] [rbp-D0h]
  __int64 v86; // [rsp+38h] [rbp-D0h]
  bool v87; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v88; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v89; // [rsp+40h] [rbp-C8h]
  __int64 v90; // [rsp+40h] [rbp-C8h]
  int v91; // [rsp+48h] [rbp-C0h]
  __int64 v92; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v93; // [rsp+50h] [rbp-B8h]
  __int64 v94; // [rsp+50h] [rbp-B8h]
  __int16 v95; // [rsp+50h] [rbp-B8h]
  unsigned int v96; // [rsp+58h] [rbp-B0h]
  __int64 v97; // [rsp+58h] [rbp-B0h]
  unsigned int v98; // [rsp+58h] [rbp-B0h]
  __int64 v99; // [rsp+58h] [rbp-B0h]
  __int16 v100; // [rsp+58h] [rbp-B0h]
  __int16 v101; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v102; // [rsp+58h] [rbp-B0h]
  __int64 v103; // [rsp+60h] [rbp-A8h]
  __int64 v104; // [rsp+60h] [rbp-A8h]
  __int64 v105; // [rsp+60h] [rbp-A8h]
  __int16 v106; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v107; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v108; // [rsp+60h] [rbp-A8h]
  unsigned int v109; // [rsp+60h] [rbp-A8h]
  char v110; // [rsp+68h] [rbp-A0h]
  char v111; // [rsp+68h] [rbp-A0h]
  char v112; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v113; // [rsp+68h] [rbp-A0h]
  unsigned int v114; // [rsp+68h] [rbp-A0h]
  unsigned int v115; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v116; // [rsp+70h] [rbp-98h]
  unsigned __int64 v117; // [rsp+70h] [rbp-98h]
  __int64 v118; // [rsp+70h] [rbp-98h]
  unsigned int v119; // [rsp+70h] [rbp-98h]
  unsigned int v120; // [rsp+70h] [rbp-98h]
  int v121; // [rsp+70h] [rbp-98h]
  int v122; // [rsp+70h] [rbp-98h]
  unsigned int v123; // [rsp+78h] [rbp-90h]
  unsigned int v124; // [rsp+78h] [rbp-90h]
  __int64 v125; // [rsp+78h] [rbp-90h]
  int v126; // [rsp+78h] [rbp-90h]
  unsigned __int16 v127; // [rsp+78h] [rbp-90h]
  __int64 v128; // [rsp+78h] [rbp-90h]
  int v129; // [rsp+80h] [rbp-88h]
  int v130; // [rsp+80h] [rbp-88h]
  char v131; // [rsp+80h] [rbp-88h]
  __int64 v132; // [rsp+80h] [rbp-88h]
  unsigned __int64 v133; // [rsp+80h] [rbp-88h]
  char v134; // [rsp+80h] [rbp-88h]
  __int64 v135; // [rsp+88h] [rbp-80h]
  __int64 v136; // [rsp+88h] [rbp-80h]
  __int64 v137; // [rsp+88h] [rbp-80h]
  __int64 v138; // [rsp+88h] [rbp-80h]
  char v139; // [rsp+88h] [rbp-80h]
  unsigned int v140; // [rsp+88h] [rbp-80h]
  char v141; // [rsp+90h] [rbp-78h]
  char v142; // [rsp+90h] [rbp-78h]
  char v143; // [rsp+90h] [rbp-78h]
  char v144; // [rsp+90h] [rbp-78h]
  int v145; // [rsp+98h] [rbp-70h]
  __int64 v146; // [rsp+A0h] [rbp-68h]
  char v147; // [rsp+AEh] [rbp-5Ah]
  char v148; // [rsp+AFh] [rbp-59h]

  v5 = 1;
  LOBYTE(v7) = a2;
  v8 = a1 + 8;
  if ( (*(_BYTE *)(a1 + 42) & 4) == 0 )
    v5 = (getinf() & 0x1006) == 4098;
  if ( (a2 & 2) == 0 )
  {
LABEL_8:
    v9 = *(_QWORD *)(a1 + 24);
    goto LABEL_9;
  }
  if ( *(_WORD *)(a1 + 32) == 31 && *(_BYTE *)(a1 + 89) == 2 )
    return 0;
  v9 = sub_22C40(*(_QWORD *)(a1 + 24), v5);
  if ( *(_QWORD *)(a1 + 24) != v9 )
  {
    if ( (int)decode_insn() <= 0 )
      return 0;
    goto LABEL_8;
  }
LABEL_9:
  v10 = *(_WORD *)(a1 + 32);
  LODWORD(v11) = -1;
  if ( v10 == 43 )
  {
    if ( (unsigned int)bitcount() != 1 )
      return 0;
    LODWORD(v11) = log2floor();
    if ( (int)decode_insn() <= 0 )
      return 0;
    v10 = *(_WORD *)(a1 + 32);
  }
  if ( v10 == 910 && ((*(_WORD *)(a1 + 54) & 0xFFFD) != 1 || (int)decode_insn() <= 0) || !(unsigned __int8)sub_21C20(v8) )
    return 0;
  v12 = *(_WORD *)(a1 + 32);
  if ( v12 == 2 )
  {
    if ( !v5 || (int)decode_insn() <= 0 || *(_WORD *)(a1 + 32) != 30 || *(_BYTE *)(a1 + 89) != 2 )
      return 0;
    goto LABEL_17;
  }
  if ( v12 == 44 )
    goto LABEL_72;
  if ( v12 > 0x2Cu )
  {
    if ( v12 > 0x51u )
    {
      if ( v12 == 497 )
      {
        v16 = *(_BYTE *)(a1 + 53);
        v67 = v16 != 7 && v16 != 2;
        if ( !v67 )
        {
          v13 = *(_QWORD *)a1;
          v19 = -1;
          v14 = -1;
          v70 = -1;
          goto LABEL_76;
        }
      }
      return 0;
    }
    if ( v12 <= 0x4Fu )
      return 0;
LABEL_72:
    v70 = -1;
    v14 = *(_QWORD *)(a1 + 24);
    v19 = 1;
LABEL_73:
    v16 = *(_BYTE *)(a1 + 53);
    if ( v16 == 2 || v16 == 7 )
    {
      v27 = v12 == 23 || v12 == 80;
      v13 = *(_QWORD *)a1;
      v67 = v27;
      goto LABEL_76;
    }
    return 0;
  }
  if ( v12 == 23 )
  {
    v19 = -1;
    v14 = -1;
    v70 = *(_QWORD *)(a1 + 24);
    goto LABEL_73;
  }
  if ( (unsigned __int16)(v12 - 30) > 1u )
    return 0;
LABEL_17:
  v13 = *(_QWORD *)a1;
  v14 = *(_QWORD *)(a1 + 104) + 16LL * *(_QWORD *)(a1 + 8);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL);
  if ( v15 != v14 )
  {
    if ( v14 == -1 )
      goto LABEL_89;
    v14 &= v15;
    v16 = *(_BYTE *)(a1 + 53);
    if ( v16 == 2 )
      goto LABEL_91;
    if ( v16 == 7 )
      goto LABEL_21;
    return 0;
  }
  v16 = *(_BYTE *)(a1 + 53);
  v67 = v16 != 7 && v16 != 2;
  if ( v67 )
    return 0;
  if ( v14 == -1 )
  {
    v70 = -1;
    v19 = 0;
    goto LABEL_76;
  }
LABEL_21:
  if ( v16 == 2 )
  {
LABEL_91:
    v71 = v16;
    v68 = v14;
    dword = get_dword();
    v14 = v68;
    v16 = v71;
    v18 = dword;
    goto LABEL_23;
  }
  v69 = v16;
  v66 = v14;
  qword = get_qword();
  v16 = v69;
  v14 = v66;
  v18 = qword;
LABEL_23:
  v78 = v14;
  v19 = 0;
  v67 = 0;
  v70 = -1;
  if ( v18 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL) )
    goto LABEL_25;
LABEL_24:
  v18 = -1;
  while ( 1 )
  {
LABEL_25:
    v20 = *(unsigned __int16 *)(a1 + 54);
    v83 = *(_WORD *)(a1 + 54);
    v87 = (_DWORD)v11 != v20 && (_DWORD)v11 != -1;
    if ( v87 )
      return 0;
    v91 = *(unsigned __int16 *)(a1 + 54);
    if ( v20 == 15 )
    {
      v111 = 0;
      v23 = 0;
      v94 = -1;
      v84 = v78;
      v97 = -1;
      v92 = -1;
      v104 = -1;
      goto LABEL_80;
    }
    v110 = v16;
    v103 = v14;
    v96 = v19;
    v93 = v18;
    if ( (int)decode_insn() <= 0 )
      return 0;
    v19 = v96;
    v18 = v93;
    v14 = v103;
    v16 = v110;
    v21 = v91;
    v22 = v83;
    if ( v96 != 1 )
    {
      v92 = -1;
      v23 = 0;
      v84 = v78;
LABEL_30:
      v24 = *(_WORD *)(a1 + 32);
      v94 = -1;
      if ( v70 == -1 || v24 != 269 )
        goto LABEL_32;
      if ( *(_BYTE *)(a1 + 49) != 1 || v22 != *(_WORD *)(a1 + 54) )
        return 0;
LABEL_194:
      if ( *(_BYTE *)(a1 + 89) != 5 )
        return 0;
      v130 = v21;
      v144 = v16;
      v94 = *(_QWORD *)(a1 + 24);
      v138 = v14;
      v86 = *(_QWORD *)(a1 + 96);
      v120 = v19;
      v113 = v18;
      v106 = v22;
      v99 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL);
      if ( !sub_269D0() )
        return 0;
      v47 = v86;
      v84 = -1;
      v22 = v106;
      v19 = v120;
      v14 = v138;
      v16 = v144;
      v48 = (v113 + (v47 << 16)) & v99;
      v24 = *(_WORD *)(a1 + 32);
      v18 = v48;
      v21 = v130;
LABEL_32:
      if ( v24 != 14 )
        goto LABEL_33;
      goto LABEL_149;
    }
    v24 = *(_WORD *)(a1 + 32);
    if ( v24 != 14 )
    {
      if ( v70 == -1 )
      {
        if ( v24 != 41 )
        {
          if ( v24 > 0x29u )
            return 0;
          v94 = -1;
          v23 = 0;
          v92 = -1;
          v84 = v78;
          goto LABEL_35;
        }
        v94 = -1;
        v23 = 0;
        v92 = -1;
        v84 = v78;
      }
      else
      {
        if ( v24 == 269 )
        {
          if ( *(_BYTE *)(a1 + 49) != 1 || v91 != *(unsigned __int16 *)(a1 + 54) )
            return 0;
          v92 = -1;
          v23 = 0;
          goto LABEL_194;
        }
        if ( v24 != 41 )
        {
          if ( v24 > 0x29u )
            return 0;
          v94 = -1;
          v23 = 0;
          v92 = -1;
          v84 = v78;
          goto LABEL_35;
        }
        v94 = -1;
        v23 = 0;
        v92 = -1;
        v84 = v78;
      }
LABEL_111:
      if ( *(_BYTE *)(a1 + 49) != 1 || v21 != *(unsigned __int16 *)(a1 + 54) )
        return 0;
      v97 = -1;
      v111 = 0;
      v104 = -1;
      goto LABEL_80;
    }
    if ( *(_BYTE *)(a1 + 49) != 1 )
      return 0;
    v92 = -1;
    v94 = -1;
    if ( v21 != *(unsigned __int16 *)(a1 + 54) )
      goto LABEL_151;
    if ( *(_BYTE *)(a1 + 89) == 1 && v83 == *(_WORD *)(a1 + 94) )
    {
      if ( *(_BYTE *)(a1 + 129) == 5 )
      {
        if ( v18 == -1 )
        {
          v92 = -1;
          v23 = 0;
        }
        else
        {
          v16 = *(_BYTE *)(a1 + 53);
          v92 = v103;
          v23 = v18;
          v14 = *(_QWORD *)(a1 + 24);
          v19 = 2;
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL) & (v18 + *(_QWORD *)(a1 + 136));
        }
        v134 = v16;
        v128 = v14;
        v122 = v21;
        v109 = v19;
        v102 = v18;
        v95 = v83;
        if ( !sub_269D0() )
          return 0;
        v84 = -1;
        v22 = v95;
        v18 = v102;
        v19 = v109;
        v21 = v122;
        v14 = v128;
        v16 = v134;
        goto LABEL_30;
      }
      v92 = -1;
      v94 = -1;
    }
LABEL_149:
    if ( *(_BYTE *)(a1 + 49) != 1 )
      return 0;
    if ( v21 != *(unsigned __int16 *)(a1 + 54) )
      goto LABEL_151;
    if ( *(_BYTE *)(a1 + 89) != 1 )
      return 0;
    v53 = *(unsigned __int16 *)(a1 + 94);
    if ( (_WORD)v53 == 15 )
    {
      v59 = *(_BYTE *)(a1 + 129);
      if ( v59 == 1 )
      {
        if ( v21 != *(unsigned __int16 *)(a1 + 134) )
          goto LABEL_151;
      }
      else if ( v59 )
      {
        goto LABEL_151;
      }
    }
    else if ( v21 != v53 || *(_BYTE *)(a1 + 129) != 1 || *(_WORD *)(a1 + 134) != 15 )
    {
      goto LABEL_151;
    }
    v54 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(*(_QWORD *)a1 + 212LL)
      && (v131 = v16,
          v125 = v14,
          v121 = v21,
          v114 = v19,
          v107 = v18,
          v100 = v22,
          sreg = get_sreg(),
          v22 = v100,
          v18 = v107,
          v19 = v114,
          v21 = v121,
          v14 = v125,
          v16 = v131,
          (unsigned __int64)(sreg - 1) > 0xFFFFFFFFFFFFFFFDLL) )
    {
      v56 = 8;
    }
    else
    {
      v56 = 4;
    }
    v23 = v54 + v56;
    if ( v18 != -1 )
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL) & (v23 + v18);
    v139 = v16;
    v132 = v14;
    v126 = v21;
    v115 = v19;
    v108 = v18;
    v101 = v22;
    if ( !sub_269D0() )
      return 0;
    v84 = -1;
    v24 = *(_WORD *)(a1 + 32);
    v16 = v139;
    v14 = v132;
    v21 = v126;
    v19 = v115;
    v18 = v108;
    v22 = v101;
LABEL_33:
    if ( v24 == 41 )
      goto LABEL_111;
    if ( v24 > 0x29u )
    {
      if ( v24 != 470 || v19 == 1 )
        return 0;
      goto LABEL_111;
    }
LABEL_35:
    if ( v24 > 0x1Fu )
      return 0;
    if ( v24 <= 0x1Du )
    {
      if ( v24 == 14 )
      {
        if ( *(_BYTE *)(a1 + 49) != 1 )
          return 0;
LABEL_151:
        if ( *(_WORD *)(a1 + 54) != 15 || *(_BYTE *)(a1 + 89) != 1 )
          return 0;
        v37 = *(unsigned __int16 *)(a1 + 94);
        if ( (_WORD)v37 == 15 )
        {
          if ( *(_BYTE *)(a1 + 129) != 1 || v21 != *(unsigned __int16 *)(a1 + 134) )
            return 0;
        }
        else if ( v21 != v37 || *(_BYTE *)(a1 + 129) != 1 || *(_WORD *)(a1 + 134) != 15 )
        {
          return 0;
        }
        v38 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(*(_QWORD *)a1 + 212LL)
          && (v112 = v16,
              v105 = v14,
              v98 = v19,
              v89 = v18,
              v85 = *(_QWORD *)(a1 + 24),
              v39 = get_sreg(),
              v38 = v85,
              v18 = v89,
              v19 = v98,
              v14 = v105,
              v16 = v112,
              (unsigned __int64)(v39 - 1) > 0xFFFFFFFFFFFFFFFDLL) )
        {
          v40 = 8;
        }
        else
        {
          v40 = 4;
        }
        v23 = v38 + v40;
        if ( v18 == -1 )
        {
          v97 = -1;
          v104 = -1;
          v84 = -1;
          v111 = 0;
        }
        else
        {
          v111 = 0;
          v97 = -1;
          v104 = -1;
          v84 = -1;
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL) & (v23 + v18);
        }
        goto LABEL_80;
      }
      if ( v24 != 23 )
        return 0;
      v104 = -1;
      v111 = 0;
      v97 = -1;
LABEL_40:
      if ( (_DWORD)v11 == -1 )
        return 0;
      if ( *(_BYTE *)(a1 + 49) != 1 )
        return 0;
      if ( *(_BYTE *)(a1 + 89) != 1 )
        return 0;
      if ( *(unsigned __int16 *)(a1 + 94) != v21 )
        return 0;
      v141 = v16;
      v135 = v14;
      v123 = v19;
      v116 = v18;
      v88 = *(_WORD *)(a1 + 54);
      if ( !sub_269D0()
        || *(_WORD *)(a1 + 32) != 42
        || (unsigned int)bitcount() != 1
        || (_DWORD)v11 != (unsigned int)log2floor()
        || !sub_269D0() )
      {
        return 0;
      }
      v21 = v88;
      v25 = *(_WORD *)(a1 + 32);
      LODWORD(v11) = -1;
      v16 = v141;
      v14 = v135;
      v19 = v123;
      v18 = v116;
LABEL_50:
      if ( v25 != 470 && v25 != 41 || *(_BYTE *)(a1 + 49) != 1 || v21 != *(unsigned __int16 *)(a1 + 54) )
        return 0;
      goto LABEL_80;
    }
    if ( *(_BYTE *)(a1 + 49) != 1 || *(_BYTE *)(a1 + 89) != 4 || v22 != *(_WORD *)(a1 + 94) )
      return 0;
    v118 = *(_QWORD *)(a1 + 104);
    if ( v18 != -1 )
    {
      if ( !*(_QWORD *)(a1 + 104) )
      {
        v97 = -1;
        v44 = *(_BYTE *)(a1 + 53);
        goto LABEL_175;
      }
      if ( v19 == 1 )
      {
        v92 = v14;
      }
      else if ( v19 == 2 )
      {
LABEL_174:
        v44 = *(_BYTE *)(a1 + 53);
        v97 = v14;
        v23 = v18;
        v19 = 1;
        v14 = *(_QWORD *)(a1 + 24);
        v16 = v44;
LABEL_175:
        v111 = v44;
        v104 = v18 + v118;
        goto LABEL_176;
      }
      v14 = -1;
      goto LABEL_174;
    }
    v97 = -1;
    v44 = *(_BYTE *)(a1 + 53);
    v104 = -1;
    v111 = 0;
LABEL_176:
    if ( v24 == 30 )
    {
      v148 = v44;
      v147 = v16;
      v146 = v14;
      v145 = v21;
      v140 = v19;
      v133 = v18;
      if ( (*(_BYTE *)(a1 + 36) & 0xA0) != 0 )
        return 0;
      v127 = *(_WORD *)(a1 + 54);
      v87 = sub_269D0();
      if ( !v87 )
        return 0;
      v18 = v133;
      v19 = v140;
      v14 = v146;
      v16 = v147;
      v44 = v148;
      if ( !v5 )
        goto LABEL_242;
      if ( *(_WORD *)(a1 + 32) == 14 )
      {
        if ( *(_BYTE *)(a1 + 49) != 1 )
          goto LABEL_242;
        v61 = *(unsigned __int16 *)(a1 + 54);
        if ( v145 == v61
          && *(_BYTE *)(a1 + 89) == 1
          && v145 == *(unsigned __int16 *)(a1 + 94)
          && *(_BYTE *)(a1 + 129) == 5
          && v118 == *(_QWORD *)(a1 + 136) )
        {
          v62 = sub_269D0();
          v18 = v133;
          v19 = v140;
          v14 = v146;
          v16 = v147;
          v44 = v148;
          if ( !v62 )
            return 0;
          goto LABEL_243;
        }
        if ( (*(_QWORD *)(a1 + 32) & 0x100000000FFFFLL) != 0x10000000001D6LL )
          goto LABEL_242;
      }
      else
      {
        if ( (*(_QWORD *)(a1 + 32) & 0x100000000FFFFLL) != 0x10000000001D6LL || *(_BYTE *)(a1 + 49) != 1 )
          goto LABEL_242;
        v61 = *(unsigned __int16 *)(a1 + 54);
      }
      if ( v127 == v61 && *(_BYTE *)(a1 + 89) == 1 && v145 == *(unsigned __int16 *)(a1 + 94) )
      {
LABEL_243:
        v21 = v127;
        goto LABEL_179;
      }
LABEL_242:
      if ( v145 != v127 )
        return 0;
      goto LABEL_243;
    }
    if ( v118 && (*(_BYTE *)(a1 + 36) & 0x20) == 0 )
      return 0;
LABEL_179:
    if ( v44 != 2 && v44 != 7 )
      return 0;
    if ( v18 != -1 )
      v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL) & (v18 + v118);
    if ( v84 != -1 )
    {
      v143 = v16;
      v137 = v14;
      v129 = v21;
      v119 = v19;
      if ( v44 == 2 )
      {
        v60 = get_dword();
        v19 = v119;
        v21 = v129;
        v14 = v137;
        v18 = v60;
        v16 = v143;
      }
      else
      {
        v45 = get_qword();
        v19 = v119;
        v16 = v143;
        v14 = v137;
        v18 = v45;
        v21 = v129;
      }
      v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL);
      if ( v46 < v18 )
        return 0;
      if ( v18 == v46 )
        v18 = -1;
    }
    if ( v87 )
    {
      v25 = *(_WORD *)(a1 + 32);
      if ( v25 != 23 )
        goto LABEL_50;
      goto LABEL_40;
    }
LABEL_80:
    if ( (_DWORD)v11 != -1 )
      return 0;
    v11 = *(unsigned __int16 *)(a1 + 34) + *(_QWORD *)(a1 + 24);
    if ( v11 == v78 )
    {
      v142 = v16;
      v136 = v14;
      v124 = v19;
      v117 = v18;
      v90 = getseg();
      v41 = getseg();
      v18 = v117;
      v19 = v124;
      v14 = v136;
      v16 = v142;
      if ( v90 == v41 )
      {
        v42 = -1;
        if ( v84 != v78 )
          v42 = v84;
        v84 = v42;
        dtype_size = get_dtype_size();
        v19 = v124;
        v16 = v142;
        v14 = v136;
        v11 = dtype_size + v78;
        v18 = v117;
      }
    }
    v7 &= 1u;
    if ( !v7 )
      goto LABEL_93;
    v29 = *(_WORD *)(a1 + 32);
    if ( v29 == 470 || v29 == 41 || v29 == 31 || v29 == 14 && *(_BYTE *)(a1 + 49) == 1 && *(_WORD *)(a1 + 54) == 15 )
      break;
    if ( under_debugger )
      BUG();
    v13 = interr();
LABEL_89:
    v67 = *(_BYTE *)(a1 + 53) != 2 && *(_BYTE *)(a1 + 53) != 7;
    if ( v67 )
      return 0;
    v70 = -1;
    v16 = *(_BYTE *)(a1 + 53);
    v19 = 0;
LABEL_76:
    v78 = -1;
    v28 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 16LL);
    v18 = v28 & *(_QWORD *)(a1 + 96);
    if ( v18 == v28 )
      goto LABEL_24;
  }
  if ( !v5 )
  {
    if ( v14 != -1 )
    {
      v31 = 2;
      v79 = v18;
      if ( v16 != 2 )
        v31 = 9;
      sub_268A0(*(_QWORD *)a1, v14, v19, v23, v31);
      v18 = v79;
    }
    if ( v104 != -1 )
    {
      v32 = 2;
      if ( v111 != 2 )
        v32 = 9;
      v80 = v18;
      sub_268A0(*(_QWORD *)a1, v104, 0, 0, v32);
      v18 = v80;
    }
    if ( v92 != -1 )
    {
      v81 = v18;
      num_flag();
      set_op_type();
      v18 = v81;
    }
    if ( v97 != -1 )
    {
      v82 = v18;
      num_flag();
      set_op_type();
      v18 = v82;
    }
    if ( v70 != -1 )
    {
      v72 = v18;
      op_offset();
      v18 = v72;
    }
    if ( v94 != -1 )
    {
      v73 = v18;
      op_offset();
      v18 = v73;
    }
  }
  v74 = v18;
  flags = get_flags_ex();
  v18 = v74;
  v34 = flags;
  if ( v74 != -1 )
  {
    if ( v74 > 1 || (v50 = getinf(), v18 = v74, v50 == 18) && (v51 = sub_21F70(), v18 = v74, !v51) )
    {
      v75 = v18;
      sub_260B0(*(_QWORD *)a1, v8, v18, 1);
      v35 = v75 & 0xFFFFFFFFFFFFFFFELL;
      sub_26200(a1, v75 & 0xFFFFFFFFFFFFFFFELL, 0, 1);
      v36 = is_debugger_on();
      v18 = v75;
      if ( v36 )
      {
        v57 = is_mapped();
        v18 = v75;
        if ( v57 )
        {
          if ( (v34 & 0x4000) == 0 )
          {
            ea_name = get_ea_name();
            v18 = v75;
            if ( ea_name > 0 )
            {
              strchr(nullptr, 95);
              set_name();
              v18 = v75;
            }
          }
        }
      }
      if ( (v18 & 1) != 0 )
      {
        v77 = v18;
        sub_22650(v35);
        v18 = v77;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 24) == v9 && *(_WORD *)(a1 + 32) == 31 )
  {
LABEL_93:
    if ( a3 )
      *a3 = v18;
    if ( a4 )
LABEL_96:
      *a4 = v84;
    if ( a5 )
LABEL_98:
      *a5 = v11 - v9;
    return 2 - (unsigned int)v67;
  }
  if ( !v67 )
  {
    if ( (v34 & 0x10000) != 0 || (v76 = v18, fchunk = get_fchunk(), v18 = v76, fchunk) )
    {
      v49 = a3;
      if ( a3 )
        goto LABEL_199;
    }
    else
    {
      auto_mark_range();
      auto_mark_range();
      v49 = a3;
      if ( a3 )
      {
        v18 = v76;
LABEL_199:
        *v49 = v18;
        if ( a4 )
          goto LABEL_96;
        goto LABEL_200;
      }
    }
    if ( a4 )
      *a4 = v84;
LABEL_200:
    if ( a5 )
      goto LABEL_98;
    return 2;
  }
  if ( a3 )
  {
    *a3 = v18;
    if ( a4 )
      goto LABEL_96;
    goto LABEL_141;
  }
  if ( a4 )
  {
    *a4 = v84;
    if ( a5 )
      goto LABEL_98;
  }
  else
  {
LABEL_141:
    if ( a5 )
      goto LABEL_98;
  }
  return v7;
}

