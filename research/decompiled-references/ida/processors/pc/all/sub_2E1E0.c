__int64 __fastcall sub_2E1E0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r14d
  __int64 v10; // rdx
  unsigned __int8 v11; // r12
  unsigned __int64 *v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  char v19; // al
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // r12
  unsigned __int64 v24; // r12
  __int64 v25; // r14
  bool v26; // cf
  __int64 v27; // r13
  __int64 v28; // rax
  int v29; // edx
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  char v33; // al
  char v34; // al
  char v35; // al
  unsigned int v36; // ecx
  int v37; // r8d
  int v38; // eax
  unsigned __int16 v39; // ax
  int v40; // ecx
  unsigned __int64 *v41; // rsi
  __int64 v42; // rcx
  unsigned __int64 *v43; // rdx
  unsigned __int64 *v44; // rax
  int v45; // eax
  __int64 v46; // rax
  int v47; // r12d
  __int64 i; // rax
  unsigned __int64 *v49; // r15
  unsigned __int64 v50; // r14
  int v51; // r13d
  __int64 v52; // r12
  unsigned __int64 v53; // r13
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rsi
  unsigned __int64 v58; // rax
  _QWORD *v59; // rsi
  __int64 v60; // r13
  __int64 v61; // rax
  __int16 v62; // ax
  __int64 v63; // rax
  int v64; // r12d
  unsigned __int64 v65; // r13
  unsigned __int64 v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 insn; // rax
  __int64 v77; // rdx
  __int64 v78; // rdi
  unsigned __int16 v79; // ax
  char v80; // al
  __int64 v81; // rax
  __int16 v82; // ax
  unsigned __int64 v83; // rax
  __int16 v84; // ax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int8 v88; // r13
  __int64 v89; // rsi
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // r12
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // rdx
  char *v95; // r9
  char *v96; // rsi
  int v97; // edi
  __int64 v98; // r14
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rax
  char v102; // al
  int v103; // edx
  unsigned int v104; // ecx
  unsigned __int64 *v105; // rax
  __int64 v106; // r13
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // r12
  __int64 v110; // r12
  int v111; // eax
  __int64 v112; // rcx
  unsigned __int64 v113; // [rsp+0h] [rbp-F0h]
  __int64 v114; // [rsp+0h] [rbp-F0h]
  unsigned __int8 v115; // [rsp+Fh] [rbp-E1h]
  __int64 v116; // [rsp+10h] [rbp-E0h] BYREF
  __int64 v117; // [rsp+18h] [rbp-D8h]
  _QWORD *v118; // [rsp+20h] [rbp-D0h]
  __int64 v119; // [rsp+28h] [rbp-C8h]
  char *v120; // [rsp+30h] [rbp-C0h]
  __int64 v121; // [rsp+40h] [rbp-B0h] BYREF
  __int64 v122; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v123; // [rsp+50h] [rbp-A0h]
  __int64 v124; // [rsp+60h] [rbp-90h]
  __int128 v125; // [rsp+68h] [rbp-88h]
  __int64 v126; // [rsp+78h] [rbp-78h]
  __int128 v127; // [rsp+80h] [rbp-70h]
  __int128 v128; // [rsp+90h] [rbp-60h]
  __int64 v129; // [rsp+A0h] [rbp-50h]
  __int16 v130; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v131; // [rsp+B0h] [rbp-40h]

  v3 = a1[18];
  v131 = __readfsqword(0x28u);
  v5 = a1[19];
  v123 = 0;
  v125 = 0;
  v127 = 0;
  v116 = v3;
  v122 = 0;
  v124 = 0;
  v126 = 0;
  v129 = 0xFFFFFFFFLL;
  v130 = 0;
  v128 = -1;
  v115 = sub_62EF0(v3, &v122, v5);
  if ( !v115 )
  {
LABEL_39:
    v20 = v126;
    goto LABEL_21;
  }
  v6 = v125;
  v113 = *(_QWORD *)a1[19];
  v7 = 0;
  if ( (_QWORD)v125 )
  {
    do
    {
      v8 = v7++;
      *(_BYTE *)(v124 + 32 * v8 + 28) = 0;
    }
    while ( v7 != v6 );
  }
  v9 = 0;
  v10 = 0;
  if ( (_QWORD)v127 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v115;
        v12 = (unsigned __int64 *)(v126 + 24 * v10);
        v13 = *v12;
        if ( *v12 >= v12[2] )
          break;
        while ( (unsigned int)decode_insn() )
        {
          v14 = v125;
          v15 = v13 + *(unsigned __int16 *)(a2 + 26);
          if ( (_QWORD)v125 )
          {
            v16 = 0;
            while ( 1 )
            {
              v17 = 32 * v16 + v124;
              if ( v15 == *(_QWORD *)(v17 + 8) )
              {
                if ( *(_BYTE *)(v17 + 28) )
                {
                  v11 = 0;
                  v13 += *(unsigned __int16 *)(a2 + 26);
                  goto LABEL_15;
                }
                *(_BYTE *)(v17 + 28) = 1;
                *(_QWORD *)(v124 + 32 * v16) = v13;
              }
              if ( v14 == ++v16 )
              {
                v13 += *(unsigned __int16 *)(a2 + 26);
                goto LABEL_14;
              }
            }
          }
          v13 += *(unsigned __int16 *)(a2 + 26);
LABEL_14:
          v11 &= v14 != 0;
LABEL_15:
          v18 = v12[2];
          if ( v13 >= v18 )
            goto LABEL_16;
        }
        v18 = v12[2];
LABEL_16:
        ++v9;
        v19 = v11 & (v13 >= v18);
        v10 = v9;
        if ( v9 >= (unsigned __int64)v127 )
          goto LABEL_33;
        if ( !v19 )
          goto LABEL_18;
      }
      v10 = ++v9;
    }
    while ( v9 < (unsigned __int64)v127 );
    v19 = v115;
LABEL_33:
    if ( !v19 )
    {
LABEL_18:
      if ( (debug & 8) != 0 )
        sub_224B0((__int64)"%a: corrupt SEH unwind info, ignoring it\n", NAN);
      goto LABEL_20;
    }
  }
  if ( !(_QWORD)v125 )
  {
    if ( (unsigned int)(v129 - 4) <= 1 )
      goto LABEL_162;
    goto LABEL_72;
  }
  v22 = v124;
  v23 = 0;
  do
  {
    if ( !*(_BYTE *)(v124 + 32 * v23 + 28) )
      goto LABEL_18;
    ++v23;
  }
  while ( v23 != (_QWORD)v125 );
  v24 = v23 - 1;
  LOBYTE(v25) = 0;
  while ( 1 )
  {
    v27 = 32 * v24;
    v28 = 32 * v24 + v22;
    v29 = *(_DWORD *)(v28 + 16);
    if ( v29 == 109 )
    {
      if ( (debug & 8) == 0 )
        goto LABEL_20;
      sub_224B0((__int64)"%a: unsupported unwind-entry '%c'\n", NAN, v113);
LABEL_98:
      if ( (unsigned int)(v129 - 4) <= 1 )
      {
LABEL_20:
        v115 = 0;
        v20 = v126;
        goto LABEL_21;
      }
LABEL_72:
      if ( (debug & 8) != 0 )
        sub_224B0((__int64)"%a: skipped unwind info because frame pointer is not rsp-based\n", NAN);
      goto LABEL_20;
    }
    if ( v29 == 115 )
    {
      v30 = *(_QWORD *)v28;
      if ( *(_QWORD *)v28 < v113 )
        goto LABEL_91;
      while ( 1 )
      {
        decode_insn();
        v31 = *(unsigned __int16 *)(a2 + 24);
        if ( (unsigned __int16)v31 <= 0x22Bu )
        {
          if ( (unsigned __int16)v31 <= 0x229u && (_WORD)v31 != 444 && (_WORD)v31 != 451 && (_WORD)v31 != 122 )
            goto LABEL_51;
        }
        else
        {
          LOWORD(v31) = v31 - 910;
          if ( (unsigned __int16)v31 > 0x17u )
            goto LABEL_51;
          v32 = 8388633;
          if ( !_bittest64(&v32, v31) )
            goto LABEL_51;
        }
        v33 = *(_BYTE *)(a2 + 81);
        if ( ((unsigned __int8)(v33 - 12) <= 1u || v33 == 1)
          && *(unsigned __int16 *)(a2 + 86) == *(_DWORD *)(v124 + v27 + 24) )
        {
          v34 = *(_BYTE *)(a2 + 41);
          switch ( v34 )
          {
            case 4:
              goto LABEL_273;
            case 2:
              if ( *(_BYTE *)(a2 + 72) )
              {
                LOBYTE(v36) = (*(char *)(a2 + 73) >> 3) & 7;
                if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 2) != 0 )
                {
                  LOBYTE(v36) = v36 | 8;
LABEL_86:
                  v36 = (char)v36;
                  goto LABEL_66;
                }
                if ( (_BYTE)v36 != 4 )
                  goto LABEL_86;
              }
              break;
            case 3:
LABEL_273:
              if ( *(_BYTE *)(a2 + 72) )
              {
                v35 = *(_BYTE *)(a2 + 73);
                v36 = v35 & 7;
                if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
                {
                  if ( (*(_BYTE *)(a2 + 33) & 1) != 0 )
                    v36 = v35 & 7 | 8;
                  if ( (*(_BYTE *)(a2 + 33) & 2) != 0 )
                  {
                    if ( v113 == v30 )
                      goto LABEL_91;
                    goto LABEL_52;
                  }
                }
                if ( (v35 & 0x38) == 0x20 )
                  goto LABEL_66;
              }
              else
              {
                v39 = *(_WORD *)(a2 + 46);
                v40 = *(_DWORD *)(a2 + 28) & 0x1018;
                if ( v40 != 4096 && v40 != 8 )
                {
                  v36 = v39;
                  v37 = -1;
                  if ( !(_BYTE)v25 )
                    goto LABEL_67;
LABEL_93:
                  v37 = v129;
                  goto LABEL_67;
                }
                if ( v39 == 0xFFFF )
                {
                  sub_21490();
LABEL_160:
                  sub_21470(a2);
                }
                if ( v39 > 7u )
                  goto LABEL_160;
                v36 = dword_94FA0[v39];
                if ( v36 == -1 )
                {
                  switch ( v39 )
                  {
                    case 0u:
                    case 2u:
                      goto LABEL_264;
                    case 1u:
                    case 3u:
                      v36 = 7;
                      goto LABEL_66;
                    default:
                      goto LABEL_51;
                  }
                }
                if ( v39 > 3u )
                  goto LABEL_66;
              }
              break;
          }
        }
LABEL_51:
        if ( v113 == v30 )
          goto LABEL_91;
LABEL_52:
        if ( decode_prev_insn() != -1 )
        {
          v30 = *(_QWORD *)(a2 + 16);
          if ( v30 >= v113 )
            continue;
        }
LABEL_91:
        if ( (debug & 8) != 0 )
        {
          sub_224B0((__int64)"%a: did not find instruction decribed in unwind info for saving\n", NAN);
          goto LABEL_98;
        }
        goto LABEL_20;
      }
    }
    LOBYTE(v25) = (v29 == 102) | v25;
    v26 = v24-- == 0;
    if ( v26 )
      break;
LABEL_42:
    v22 = v124;
  }
  while ( 2 )
  {
    if ( (unsigned int)(v129 - 4) > 1 )
      goto LABEL_72;
    v30 = v125 - 1;
    if ( (__int64)v125 - 1 >= 0 )
    {
      v118 = a1 + 6;
      goto LABEL_104;
    }
LABEL_162:
    if ( !(_QWORD)v127 )
      goto LABEL_39;
    LODWORD(v117) = 0;
    v75 = v115;
    v25 = 0;
    v77 = 0;
    v113 = 0;
    v46 = v126;
    while ( 1 )
    {
      v27 = v46 + 24 * v77;
      v30 = *(_QWORD *)v27;
      if ( *(_QWORD *)v27 < *(_QWORD *)(v27 + 16) )
        break;
LABEL_238:
      LODWORD(v117) = v117 + 1;
      v77 = (int)v117;
      if ( (int)v117 >= (unsigned __int64)v127 )
        goto LABEL_116;
    }
    while ( 2 )
    {
      v78 = a2;
      if ( !(unsigned int)decode_insn() )
        goto LABEL_115;
      v79 = *(_WORD *)(a2 + 24);
      if ( v79 == 134 )
      {
        v25 -= 8;
        v75 = 0;
        goto LABEL_170;
      }
      if ( v79 > 0x86u )
      {
        if ( v79 == 143 )
        {
          v25 += 8;
          v83 = v113 + 8;
          if ( !(_BYTE)v75 )
            v83 = v113;
          v113 = v83;
        }
        else if ( v79 == 209 && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 4 )
        {
          v80 = *(_BYTE *)(a2 + 81);
          if ( v80 == 1 )
          {
            if ( *(_WORD *)(a2 + 86) )
              goto LABEL_115;
            v86 = v125 - 1;
            if ( (__int64)v125 - 1 < 0 )
              goto LABEL_115;
            v87 = v124 + 32 * v125 - 32;
            while ( *(_QWORD *)v87 != v30 || *(_DWORD *)(v87 + 16) != 97 )
            {
              --v86;
              v87 -= 32;
              if ( v86 == -1 )
                goto LABEL_115;
            }
            v75 = 0;
            v25 += *(unsigned int *)(v87 + 20);
          }
          else
          {
            if ( v80 != 5 )
              goto LABEL_115;
            v81 = v25 + *(_QWORD *)(a2 + 88);
            if ( *(_DWORD *)(*(_QWORD *)(a1[18] + 32LL) + 24LL) != 8 )
              goto LABEL_181;
LABEL_200:
            v25 = v81;
            v75 = 0;
          }
        }
LABEL_170:
        v30 += *(unsigned __int16 *)(a2 + 26);
        if ( v30 >= *(_QWORD *)(v27 + 16) )
        {
          v46 = v126;
          goto LABEL_238;
        }
        continue;
      }
      break;
    }
    if ( v79 == 92 )
    {
      if ( *(_BYTE *)(a2 + 41) != 1 )
        goto LABEL_170;
      v84 = *(_WORD *)(a2 + 46);
      if ( v84 == 5 )
      {
        v102 = *(_BYTE *)(a2 + 81);
        if ( v102 != 4 && (v102 != 2 || !*(_BYTE *)(a2 + 112)) )
          goto LABEL_170;
        v78 = a2;
        v118 = (_QWORD *)(a2 + 80);
        if ( (unsigned int)sub_22A40(a2, a2 + 80) == -1 )
        {
          v121 = 0;
          v78 = a2;
          v104 = sub_229C0(a2, a2 + 80);
          v105 = (unsigned __int64 *)a1[19];
          if ( v105 )
          {
            v78 = v116;
            v104 = sub_2C040(v116, *v105, *(_QWORD *)(a2 + 16), v104, -1, &v121);
          }
          if ( v104 == 4 )
          {
            v106 = a1[18];
            v107 = v25 - v121;
            v108 = *(_QWORD *)(a2 + 96);
            if ( *(_DWORD *)(*(_QWORD *)(v106 + 32) + 24LL) != 8 )
            {
              v107 = (int)v107;
              v108 = (int)v108;
            }
            v121 = v108;
            v109 = v107 - v108;
            if ( v108 > 0 || (v116 = v107, sub_22E80(a1)) )
            {
              v110 = v109 - sub_22E80(a1);
              if ( *(_DWORD *)(*(_QWORD *)(v106 + 32) + 24LL) != 8 )
                v110 = (int)v110;
              v88 = v115;
            }
            else
            {
              v111 = sub_215A0(*(_DWORD *)(a2 + 28));
              v110 = v109 - v112 - v111;
              if ( *(_DWORD *)(*(_QWORD *)(v106 + 32) + 24LL) != 8 )
                v110 = (int)v110;
              v88 = 0;
            }
            a1[20] = v110;
            goto LABEL_211;
          }
        }
        if ( *(_BYTE *)(a2 + 41) != 1 )
          goto LABEL_170;
        v84 = *(_WORD *)(a2 + 46);
      }
      if ( v84 != 4 )
        goto LABEL_170;
      if ( *(_BYTE *)(a2 + 81) != 4 )
        goto LABEL_115;
      if ( *(_BYTE *)(a2 + 112) )
      {
        LODWORD(v85) = *(_BYTE *)(a2 + 113) & 7;
        if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 1) != 0 )
          goto LABEL_115;
      }
      else
      {
        v103 = *(_DWORD *)(a2 + 28) & 0x1018;
        v85 = *(unsigned __int16 *)(a2 + 86);
        if ( v103 == 4096 || v103 == 8 )
        {
          if ( (_WORD)v85 == 0xFFFF )
            goto LABEL_198;
          if ( (unsigned __int16)v85 > 7u )
          {
            sub_21470(v78);
LABEL_260:
            insn = decode_prev_insn();
            if ( insn == -1 )
              goto LABEL_134;
LABEL_152:
            if ( *(_WORD *)(a2 + 24) == 122
              && *(_BYTE *)(a2 + 41) == 1
              && !*(_WORD *)(a2 + 46)
              && *(_BYTE *)(a2 + 81) == 5 )
            {
              if ( v25 != -1 )
              {
                v117 = insn;
                v113 = v116 + 104;
                sub_226C0();
              }
              sub_226C0();
              sub_22F60(a1, v75, -1, *(unsigned int *)(v27 + 20));
              goto LABEL_113;
            }
LABEL_134:
            v52 = *(unsigned int *)(v27 + 20);
            v53 = *(_QWORD *)v27;
            v54 = sub_22F00((__int64)a1);
            v55 = a1[1];
            v25 = v54;
            v56 = a1[2];
            if ( a1[3] < (unsigned __int64)(v56 + 1) )
            {
              v72 = qvector_reserve();
              a1[1] = v72;
              v55 = v72;
              v56 = a1[2];
            }
            v57 = 32 * v56 + v55;
            *(_QWORD *)v57 = v53;
            *(_QWORD *)(v57 + 8) = v25;
            *(_QWORD *)(v57 + 16) = v52;
            *(_DWORD *)(v57 + 24) = 0xFFFF;
            ++a1[2];
            while ( 1 )
            {
LABEL_113:
              v26 = v30-- == 0;
              if ( v26 )
              {
                if ( (unsigned int)(v129 - 4) > 1 )
                  goto LABEL_115;
                goto LABEL_162;
              }
LABEL_104:
              v41 = (unsigned __int64 *)a1[6];
              v42 = a1[7];
              v27 = v124 + 32 * v30;
              v43 = &v41[v42];
              v24 = *(_QWORD *)v27;
              if ( v41 == v43 )
                goto LABEL_129;
              v44 = (unsigned __int64 *)a1[6];
              while ( v24 != *v44 )
              {
                if ( v43 == ++v44 )
                  goto LABEL_129;
              }
              if ( v43 == v44 )
              {
LABEL_129:
                if ( a1[8] < (unsigned __int64)(v42 + 1) )
                {
                  v70 = qvector_reserve();
                  v71 = a1[7];
                  a1[6] = v70;
                  v43 = (unsigned __int64 *)(v70 + 8 * v71);
                }
                *v43 = v24;
                ++a1[7];
                v24 = *(_QWORD *)v27;
              }
              LOBYTE(v121) = 1;
              netnode_supset();
              v45 = *(_DWORD *)(v27 + 16);
              if ( v45 == 112 )
              {
                v64 = *(_DWORD *)(v27 + 24);
                v65 = *(_QWORD *)v27;
                v66 = sub_22F00((__int64)a1);
                v67 = a1[1];
                v25 = v66;
                v68 = a1[2];
                if ( a1[3] < (unsigned __int64)(v68 + 1) )
                {
                  v74 = qvector_reserve();
                  a1[1] = v74;
                  v67 = v74;
                  v68 = a1[2];
                }
                v69 = v67 + 32 * v68;
                *(_QWORD *)v69 = v65;
                *(_QWORD *)(v69 + 8) = v25;
                *(_QWORD *)(v69 + 16) = 8;
                *(_WORD *)(v69 + 24) = v64;
                *(_WORD *)(v69 + 26) = 0;
                ++a1[2];
                continue;
              }
              if ( v45 > 112 )
                break;
              if ( v45 == 97 )
              {
                if ( decode_prev_insn() == -1 )
                  goto LABEL_134;
                if ( *(_WORD *)(a2 + 24) != 209 )
                  goto LABEL_134;
                if ( *(_BYTE *)(a2 + 41) != 1 )
                  goto LABEL_134;
                if ( *(_WORD *)(a2 + 46) != 4 )
                  goto LABEL_134;
                if ( *(_BYTE *)(a2 + 81) != 1 )
                  goto LABEL_134;
                if ( *(_WORD *)(a2 + 86) )
                  goto LABEL_134;
                v75 = *(_QWORD *)(a2 + 16);
                insn = decode_prev_insn();
                v25 = insn;
                if ( insn == -1 )
                  goto LABEL_134;
                if ( *(_WORD *)(a2 + 24) == 16 )
                  goto LABEL_260;
                v25 = -1;
                goto LABEL_152;
              }
              if ( v45 != 102 )
                goto LABEL_262;
            }
            if ( v45 == 115 )
            {
              LODWORD(v25) = *(_DWORD *)(v27 + 24);
              v113 = *(_QWORD *)v27;
              v58 = sub_22F00((__int64)a1);
              v59 = (_QWORD *)a1[1];
              v60 = v58 - *(unsigned int *)(v27 + 20);
              LOWORD(v117) = ((v60 >> 63) & 2) + 1;
              v61 = a1[2];
              if ( a1[3] < (unsigned __int64)(v61 + 1) )
              {
                v73 = qvector_reserve();
                a1[1] = v73;
                v59 = (_QWORD *)v73;
                v61 = a1[2];
              }
              v119 = (__int64)v59;
              memmove(v59 + 4, v59, 32 * v61);
              *v59 = v113;
              v62 = v117;
              v59[1] = v60;
              v59[2] = (unsigned int)(v25 - 64) < 0x10 ? 16LL : 8LL;
              *((_WORD *)v59 + 12) = v25;
              *((_WORD *)v59 + 13) = v62;
              v63 = a1[4];
              ++a1[2];
              if ( v63 != -1 )
                a1[4] = v63 + 1;
              goto LABEL_113;
            }
LABEL_262:
            if ( under_debugger )
              BUG();
            interr();
LABEL_264:
            v36 = 6;
LABEL_66:
            v37 = -1;
            if ( (_BYTE)v25 )
              goto LABEL_93;
LABEL_67:
            v38 = sub_2C040(v116, v113, v30, v36, v37, 0);
            if ( v38 != 4 && (!(_BYTE)v25 || (_DWORD)v129 != v38) )
              goto LABEL_51;
            *(_QWORD *)(v124 + v27) = v30;
            v26 = v24-- == 0;
            if ( !v26 )
              goto LABEL_42;
            continue;
          }
          LODWORD(v85) = dword_94FA0[v85];
        }
      }
      if ( (_DWORD)v85 != 4 )
        goto LABEL_115;
LABEL_198:
      if ( (unsigned int)sub_22A40(a2, a2 + 80) != -1 )
        goto LABEL_115;
      v81 = v25 - *(_QWORD *)(a2 + 96);
      if ( *(_DWORD *)(*(_QWORD *)(a1[18] + 32LL) + 24LL) == 8 )
        goto LABEL_200;
      goto LABEL_181;
    }
    break;
  }
  if ( v79 != 122 )
  {
    if ( v79 != 6 || *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 4 )
      goto LABEL_170;
    if ( *(_BYTE *)(a2 + 81) != 5 )
      goto LABEL_115;
    v81 = v25 - *(_QWORD *)(a2 + 88);
    if ( *(_DWORD *)(*(_QWORD *)(a1[18] + 32LL) + 24LL) == 8 )
      goto LABEL_200;
LABEL_181:
    v25 = (int)v81;
    v75 = 0;
    goto LABEL_170;
  }
  if ( *(_BYTE *)(a2 + 41) != 1 )
    goto LABEL_170;
  v82 = *(_WORD *)(a2 + 46);
  if ( v82 != 5 )
  {
    if ( v82 == 4 )
      goto LABEL_115;
    goto LABEL_170;
  }
  if ( *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) != 4 )
    goto LABEL_170;
  v88 = 0;
LABEL_211:
  if ( sub_22F00((__int64)a1) == v25 )
    sub_22F60(a1, v30, -1, 0);
  v89 = a1[1];
  v90 = a1[2];
  v91 = 0;
  v92 = v89;
  if ( v90 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v92 + 26) & 1) == 0 )
      {
        v93 = *(_QWORD *)(v92 + 8);
        if ( v93 == v25 || *(_WORD *)(v92 + 24) == 0xFFFF && v93 < v25 && *(_QWORD *)(v92 + 16) + v93 > v25 )
          break;
      }
      ++v91;
      v92 += 32;
      if ( v91 == v90 )
        goto LABEL_115;
    }
    if ( v91 < v90 )
    {
      v94 = v89 + 32 * v91;
      v119 = 32 * v91;
      v114 = *(_QWORD *)(v94 + 8);
      if ( v114 != v25 )
      {
        v95 = (char *)(v92 - v89);
        v117 = *(_QWORD *)v94;
        v116 = *(_QWORD *)(v94 + 16);
        LODWORD(v118) = *(_DWORD *)(v94 + 24);
        if ( a1[3] < v90 + 1 )
        {
          v120 = v95;
          v101 = qvector_reserve();
          a1[1] = v101;
          v89 = v101;
          v95 = v120;
          v90 = a1[2];
        }
        v120 = &v95[v89];
        memmove(v120 + 32, v120, 32 * v90 - (_QWORD)v95);
        v96 = v120;
        v97 = (int)v118;
        *(_QWORD *)v120 = v117;
        *((_DWORD *)v96 + 6) = v97;
        v98 = v25 - v114;
        *(__m128 *)(v96 + 8) = _mm_loadh_ps((const double *)&v116);
        v99 = a1[18];
        ++a1[2];
        if ( *(_DWORD *)(*(_QWORD *)(v99 + 32) + 24LL) != 8 )
          v98 = (int)v98;
        v100 = v119;
        ++v91;
        *(_QWORD *)(a1[1] + v119 + 16) = v98;
        *(_QWORD *)(v100 + 32 + a1[1] + 8) += v98;
        *(_QWORD *)(a1[1] + v100 + 32 + 16) -= v98;
      }
      if ( !v88 )
        a1[4] = v91;
      sub_216A0(a1 + 6, v30);
    }
  }
LABEL_115:
  v46 = v126;
LABEL_116:
  v20 = v46;
  v47 = 0;
  for ( i = 0; v47 < (unsigned __int64)v127; i = v47 )
  {
    v49 = (unsigned __int64 *)(v20 + 24 * i);
    v50 = *v49;
    if ( *v49 < v49[1] )
    {
      v51 = 0;
      do
      {
        if ( v50 >= v49[2] && ++v51 > 4 )
          break;
        if ( (*(_BYTE *)a1 & 4) != 0 || !(unsigned int)decode_insn() )
          break;
        if ( (unsigned __int8)sub_2A780((__int64)a1, a2) )
          v50 = *(_QWORD *)(a2 + 16);
        v50 += *(unsigned __int16 *)(a2 + 26);
      }
      while ( v50 < v49[1] );
      v20 = v126;
    }
    ++v47;
  }
LABEL_21:
  if ( v20 )
  {
    *(_QWORD *)&v127 = 0;
    qfree();
  }
  if ( v124 )
  {
    *(_QWORD *)&v125 = 0;
    qfree();
  }
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree();
  }
  return v115;
}
