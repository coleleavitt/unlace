__int64 __fastcall sub_4ED20(__int64 a1)
{
  unsigned int v2; // r15d
  unsigned __int64 v3; // r11
  unsigned int v4; // ebx
  _DWORD *v5; // rsi
  unsigned __int64 v6; // r11
  void *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  size_t v10; // rbp
  unsigned __int64 v11; // r11
  _DWORD *v12; // r15
  int v13; // r9d
  int v14; // edi
  int v15; // r13d
  __int64 *v16; // r10
  int v17; // r8d
  int v18; // ebp
  __int64 v19; // rsi
  _QWORD *v20; // r15
  _BYTE *v21; // rax
  signed int v22; // ecx
  unsigned __int8 *v24; // rdx
  int v25; // r13d
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned int v29; // esi
  unsigned __int16 v30; // di
  int v31; // r13d
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned int v35; // r11d
  __int64 v36; // rcx
  int v37; // edx
  bool v38; // zf
  int v39; // edx
  _BYTE *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rax
  _DWORD *v46; // r8
  unsigned __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rdi
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  int v54; // r11d
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // r11d
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // r11d
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  int v64; // ecx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  int v67; // r10d
  unsigned __int64 v68; // r13
  signed __int64 v69; // rsi
  _DWORD *v70; // rdx
  __int64 v71; // rcx
  signed __int64 v72; // rax
  unsigned __int64 v73; // rdx
  bool v74; // cc
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rsi
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // rax
  int v82; // eax
  int v83; // ecx
  int v84; // edx
  __int64 *v85; // rdx
  __int64 v86; // r9
  __int64 v87; // rax
  unsigned __int64 v88; // rdi
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rcx
  unsigned __int8 *v91; // r10
  unsigned __int8 *v92; // rax
  _QWORD *v93; // rbx
  unsigned int v94; // edi
  int v95; // edx
  int v96; // esi
  int v97; // edx
  __int64 v98; // rdx
  int v99; // ecx
  __int16 v100; // dx
  int v101; // esi
  int v102; // edx
  signed int v103; // ecx
  _QWORD *v104; // r13
  int v105; // r11d
  int v106; // r8d
  int v107; // edi
  int v108; // esi
  unsigned int v109; // r9d
  unsigned int v110; // r15d
  unsigned __int64 v111; // rdx
  int v112; // eax
  int v113; // ecx
  unsigned __int64 v114; // rbp
  int v115; // eax
  int v116; // ecx
  unsigned __int64 v117; // rdx
  int v118; // r8d
  int v119; // eax
  int v120; // ecx
  unsigned __int64 v121; // rbp
  unsigned __int64 v122; // rsi
  unsigned __int64 v123; // rbp
  __int64 v124; // rcx
  int v125; // edx
  _DWORD *v126; // rdx
  int v127; // esi
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rdi
  unsigned __int64 v130; // rdx
  unsigned __int16 v131; // ax
  unsigned __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rax
  _BYTE *v135; // rdx
  __int64 *v136; // rax
  __int64 v137; // rsi
  __int64 v138; // rcx
  __int64 v139; // r11
  int v140; // r12d
  _BYTE *v141; // rax
  int v142; // r9d
  char *v143; // r15
  _BYTE *v144; // rsi
  char v145; // cl
  __int64 v146; // [rsp+0h] [rbp-3E8h]
  unsigned __int64 v147; // [rsp+0h] [rbp-3E8h]
  __int64 v148; // [rsp+18h] [rbp-3D0h]
  __int64 v149; // [rsp+28h] [rbp-3C0h]
  unsigned int v150; // [rsp+28h] [rbp-3C0h]
  unsigned __int16 v151; // [rsp+32h] [rbp-3B6h]
  unsigned __int16 v152; // [rsp+34h] [rbp-3B4h]
  unsigned __int16 v153; // [rsp+36h] [rbp-3B2h]
  unsigned __int64 v154; // [rsp+38h] [rbp-3B0h]
  _QWORD v155[12]; // [rsp+40h] [rbp-3A8h] BYREF
  _QWORD v156[96]; // [rsp+A0h] [rbp-348h] BYREF
  int v157; // [rsp+3A0h] [rbp-48h] BYREF
  unsigned __int64 v158; // [rsp+3A8h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 52);
  v158 = __readfsqword(0x28u);
  v148 = a1 + 120;
LABEL_2:
  while ( v2 != 829978210 )
  {
    if ( v2 <= 0x31787662 )
    {
      if ( v2 )
      {
        if ( v2 == 762869346 )
        {
          v3 = *(_QWORD *)(a1 + 16);
          goto LABEL_7;
        }
        return 4294967293LL;
      }
LABEL_36:
      v3 = *(_QWORD *)(a1 + 16);
      goto LABEL_37;
    }
    if ( v2 == 846755426 )
      break;
    if ( v2 != 1853388386 )
      return 4294967293LL;
    v3 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v69 = *(unsigned int *)(a1 + 47356);
      v70 = *(_DWORD **)a1;
      if ( (_DWORD)v69 && v3 <= (unsigned __int64)v70 )
        return 0xFFFFFFFFLL;
      memset(v155, 0, 0x58u);
      v155[0] = v70;
      v71 = *(unsigned int *)(a1 + 47352);
      v72 = v3 - (_QWORD)v70;
      v73 = (unsigned __int64)v70 + v69;
      v74 = v72 <= v69;
      v75 = *(_QWORD *)(a1 + 32);
      if ( !v74 )
        v3 = v73;
      v76 = *(_QWORD *)(a1 + 24);
      v155[1] = v3;
      v155[3] = v75;
      v77 = *(_QWORD *)(a1 + 40);
      v155[2] = v76;
      v155[4] = v77;
      if ( v77 - v76 > v71 )
        v155[4] = v71 + v76;
      v155[9] = *(unsigned int *)(a1 + 47360);
      sub_4FF40(v155);
      v78 = v155[2];
      v79 = v155[0] - *(_QWORD *)a1;
      v80 = v155[2] - *(_QWORD *)(a1 + 24);
      v81 = *(unsigned int *)(a1 + 47356);
      if ( v79 > v81 || v80 > *(unsigned int *)(a1 + 47352) )
        return 4294967293LL;
      v82 = v81 - v79;
      v83 = v155[9];
      v84 = *(_DWORD *)(a1 + 47352) - v80;
      *(_QWORD *)a1 = v155[0];
      *(_QWORD *)(a1 + 24) = v78;
      *(_DWORD *)(a1 + 47356) = v82;
      *(_DWORD *)(a1 + 47352) = v84;
      *(_DWORD *)(a1 + 47360) = v83;
      if ( v82 )
      {
        if ( v84 && !LODWORD(v155[10]) )
          return 4294967294LL;
        return 4294967293LL;
      }
      if ( v84 || !LODWORD(v155[10]) )
        return 4294967293LL;
      *(_DWORD *)(a1 + 52) = 0;
      v3 = *(_QWORD *)(a1 + 16);
LABEL_37:
      v46 = *(_DWORD **)a1;
      v47 = *(_QWORD *)a1 + 4LL;
      if ( v47 > v3 )
        return 0xFFFFFFFFLL;
      v2 = *v46;
      if ( *v46 == 611874402 )
      {
        *(_QWORD *)a1 = v47;
        *(_DWORD *)(a1 + 48) = 1;
        return 0;
      }
      if ( v2 == 762869346 )
        break;
      if ( v2 != 1853388386 )
      {
        if ( ((v2 - 829978210) & 0xFEFFFFFF) != 0 )
          return 4294967293LL;
        if ( v2 == 846755426 )
        {
          if ( v3 >= (unsigned __int64)(v46 + 8) )
          {
            v48 = (unsigned int)v46[6];
            if ( v3 >= (unsigned __int64)v46 + v48 )
            {
              memset(v156, 0, sizeof(v156));
              LODWORD(v156[0]) = 829978210;
              v157 = 0;
              v88 = *((_QWORD *)v46 + 1);
              v89 = *((_QWORD *)v46 + 2);
              v90 = *((_QWORD *)v46 + 3);
              HIDWORD(v156[0]) = v46[1];
              HIDWORD(v156[1]) = v88 & 0xFFFFF;
              HIDWORD(v156[3]) = ((v88 >> 60) & 7) - 7;
              LOWORD(v156[4]) = v89 & 0x3FF;
              LODWORD(v156[2]) = (v88 >> 40) & 0xFFFFF;
              v49 = (v88 >> 20) & 0xFFFFF;
              HIDWORD(v156[2]) = v49;
              WORD1(v156[4]) = (v89 >> 10) & 0x3FF;
              v50 = (v89 >> 40) & 0xFFFFF;
              LODWORD(v156[3]) = v50;
              WORD2(v156[4]) = (v89 >> 20) & 0x3FF;
              LODWORD(v156[5]) = ((v89 >> 60) & 7) - 7;
              HIWORD(v156[4]) = (v89 >> 30) & 0x3FF;
              WORD2(v156[5]) = WORD2(v90) & 0x3FF;
              HIWORD(v156[5]) = (v90 >> 42) & 0x3FF;
              v91 = (unsigned __int8 *)v46 + (unsigned int)v90;
              LOWORD(v156[6]) = (v90 >> 52) & 0x3FF;
              LODWORD(v156[1]) = v49 + v50;
              v92 = (unsigned __int8 *)(v46 + 8);
              if ( v46 + 8 != (_DWORD *)v91 )
              {
                v93 = v156;
                v94 = 0;
                v95 = 0;
                while ( 1 )
                {
                  if ( v91 > v92 && (v96 = v95 + 8, v95 + 8 <= 32) )
                  {
                    while ( 1 )
                    {
                      v97 = *v92++;
                      v94 |= v97 << (v96 - 8);
                      if ( v91 == v92 || v96 + 8 > 32 )
                        break;
                      v96 += 8;
                    }
                  }
                  else
                  {
                    v96 = v95;
                  }
                  v98 = v94 & 0x1F;
                  v99 = byte_57760[v98];
                  if ( v99 == 8 )
                    v100 = ((unsigned __int8)v94 >> 4) + 8;
                  else
                    v100 = v99 == 14 ? ((v94 >> 4) & 0x3FF) + 24 : byte_57740[v98];
                  *((_WORD *)v93 + 25) = v100;
                  if ( v96 < v99 )
                    return 4294967293LL;
                  v93 = (_QWORD *)((char *)v93 + 2);
                  v101 = v96 - v99;
                  v94 >>= v99;
                  v95 = v101;
                  if ( &v156[90] == v93 )
                  {
                    if ( v101 <= 7 && v91 == v92 )
                    {
                      LODWORD(v49) = HIDWORD(v156[2]);
                      LODWORD(v50) = v156[3];
                      goto LABEL_45;
                    }
                    return 4294967293LL;
                  }
                }
              }
              goto LABEL_45;
            }
          }
        }
        else if ( v3 >= (unsigned __int64)(v46 + 193) )
        {
          qmemcpy(v156, v46, sizeof(v156));
          v48 = 772;
          LODWORD(v49) = HIDWORD(v156[2]);
          v157 = v46[192];
          LODWORD(v50) = v156[3];
LABEL_45:
          if ( v3 >= (unsigned __int64)v46 + v48 + (unsigned int)v50 + (unsigned int)v49 )
          {
            v51 = 0;
            v52 = (_QWORD *)((char *)&v156[6] + 2);
            do
            {
              v53 = *(unsigned __int16 *)v52;
              v52 = (_QWORD *)((char *)v52 + 2);
              v51 += v53;
            }
            while ( (_QWORD *)((char *)&v156[11] + 2) != v52 );
            v54 = ((v51 > 0x40) << 10)
                | ((LOWORD(v156[6]) > 0xFFu) << 9)
                | ((HIWORD(v156[5]) > 0x3Fu) << 8)
                | ((WORD2(v156[5]) > 0x3Fu) << 7)
                | ((HIWORD(v156[4]) > 0x3FFu) << 6)
                | (32 * (WORD2(v156[4]) > 0x3FFu))
                | (16 * (WORD1(v156[4]) > 0x3FFu))
                | (8 * (LOWORD(v156[4]) > 0x3FFu))
                | (4 * (LODWORD(v156[2]) > 0x2710))
                | (2 * (HIDWORD(v156[1]) > 0x9C40))
                | (LODWORD(v156[0]) != 829978210);
            v55 = 0;
            do
            {
              v56 = *(unsigned __int16 *)v52;
              v52 = (_QWORD *)((char *)v52 + 2);
              v55 += v56;
            }
            while ( (_QWORD *)((char *)&v156[16] + 2) != v52 );
            v57 = ((v55 > 0x40) << 11) | v54;
            v58 = 0;
            do
            {
              v59 = *(unsigned __int16 *)v52;
              v52 = (_QWORD *)((char *)v52 + 2);
              v58 += v59;
            }
            while ( (_QWORD *)((char *)&v156[32] + 2) != v52 );
            v60 = ((v58 > 0x100) << 12) | v57;
            v61 = 0;
            do
            {
              v62 = *(unsigned __int16 *)v52;
              v52 = (_QWORD *)((char *)v52 + 2);
              v61 += v62;
            }
            while ( (_QWORD *)((char *)&v157 + 2) != v52 );
            if ( ((v61 > 0x400) << 13) | v60 )
              return 4294967293LL;
            v63 = a1 + 3192;
            *(_DWORD *)(a1 + 56) = v156[2];
            *(_QWORD *)a1 = (char *)v46 + v48;
            *(_DWORD *)(a1 + 60) = v50;
            sub_4FCE0(1024, 256, (char *)&v156[32] + 2, a1 + 3192);
            sub_4FDF0(64, 20, (char *)&v156[6] + 2, &unk_57990, &unk_57940, v148);
            sub_4FDF0(64, 20, (char *)&v156[11] + 2, &unk_57910, &unk_578C0, a1 + 632);
            sub_4FDF0(256, 64, (char *)&v156[16] + 2, &unk_57880, &unk_57780, a1 + 1144);
            v64 = HIDWORD(v156[3]);
            v65 = *(_QWORD *)a1 + HIDWORD(v156[2]);
            v38 = HIDWORD(v156[3]) == 0;
            v147 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v65;
            if ( v38 )
            {
              if ( v65 < v147 + 7 )
                return 4294967293LL;
              v68 = v65 - 7;
              v67 = 56;
              LODWORD(v155[0]) = *(_DWORD *)(v65 - 7);
              WORD2(v155[0]) = *(_WORD *)(v65 - 3);
              BYTE6(v155[0]) = *(_BYTE *)(v65 - 1);
              v66 = v155[0] & 0xFFFFFFFFFFFFFFLL;
              LODWORD(v155[1]) = 56;
              v155[0] &= 0xFFFFFFFFFFFFFFuLL;
            }
            else
            {
              if ( v65 < v147 + 8 )
                return 4294967293LL;
              v66 = *(_QWORD *)(v65 - 8);
              v67 = v64 + 64;
              LODWORD(v155[1]) = v64 + 64;
              v155[0] = v66;
              if ( (unsigned int)(v64 + 8) > 7 )
                return 4294967293LL;
              v68 = v65 - 8;
              if ( v66 >> v67 )
                return 4294967293LL;
            }
            if ( HIDWORD(v156[1]) )
            {
              v103 = (63 - v67) & 0xFFFFFFF8;
              v104 = (_QWORD *)(v68 - (v103 >> 3));
              if ( v147 > (unsigned __int64)v104 )
                return 4294967293LL;
              LOWORD(v105) = v156[4];
              LOWORD(v106) = WORD1(v156[4]);
              LOWORD(v107) = WORD2(v156[4]);
              LOWORD(v108) = HIWORD(v156[4]);
              v109 = 0;
              v150 = v2;
              v110 = HIDWORD(v156[1]);
              while ( 1 )
              {
                v111 = (v66 << v103) | qword_57520[v103] & *v104;
                v112 = *(_DWORD *)(v63 + 4LL * (unsigned __int16)v105);
                v113 = v67 + v103 - (unsigned __int8)v112;
                v105 = (v111 >> v113) + (v112 >> 16);
                v114 = qword_57520[v113] & v111;
                *(_BYTE *)(a1 + v109 + 7288) = BYTE1(v112);
                v115 = *(_DWORD *)(v63 + 4LL * (unsigned __int16)v106);
                v116 = v113 - (unsigned __int8)v115;
                v117 = qword_57520[v116] & v114;
                v118 = v115;
                *(_BYTE *)(a1 + v109 + 1 + 7288) = BYTE1(v115);
                v119 = *(_DWORD *)(v63 + 4LL * (unsigned __int16)v107);
                v106 = (v114 >> v116) + (v118 >> 16);
                v120 = v116 - (unsigned __int8)v119;
                v121 = qword_57520[v120] & v117;
                v107 = (v117 >> v120) + (v119 >> 16);
                *(_BYTE *)(a1 + v109 + 2 + 7288) = BYTE1(v119);
                LODWORD(v117) = *(_DWORD *)(v63 + 4LL * (unsigned __int16)v108);
                v122 = qword_57520[v120 - (unsigned __int8)v117] & v121;
                v67 = v120 - (unsigned __int8)v117;
                LODWORD(v155[1]) = v67;
                v123 = v121 >> ((unsigned __int8)v120 - (unsigned __int8)v117);
                v124 = v109 + 3;
                v109 += 4;
                v66 = v122;
                v155[0] = v122;
                v108 = v123 + ((int)v117 >> 16);
                *(_BYTE *)(a1 + v124 + 7288) = BYTE1(v117);
                if ( v109 >= v110 )
                  break;
                v103 = (63 - v67) & 0xFFFFFFF8;
                v104 = (_QWORD *)((char *)v104 - (v103 >> 3));
                if ( v147 > (unsigned __int64)v104 )
                  return 4294967293LL;
              }
              v2 = v150;
            }
            v126 = *(_DWORD **)a1;
            v127 = v156[5];
            *(_QWORD *)(a1 + 64) = a1 + 7288;
            v128 = (unsigned __int64)v126 + LODWORD(v156[3]);
            if ( v127 )
            {
              if ( v128 < (unsigned __int64)(v126 + 2) )
                return 4294967293LL;
              v129 = *(_QWORD *)(v128 - 8);
              LODWORD(v155[1]) = v127 + 64;
              v155[0] = v129;
              if ( (unsigned int)(v127 + 8) > 7 )
                return 4294967293LL;
              v130 = v128 - 8;
              if ( v129 >> ((unsigned __int8)v127 + 64) )
                return 4294967293LL;
            }
            else
            {
              if ( v128 < (unsigned __int64)v126 + 7 )
                return 4294967293LL;
              v130 = v128 - 7;
              LODWORD(v155[0]) = *(_DWORD *)(v128 - 7);
              WORD2(v155[0]) = *(_WORD *)(v128 - 3);
              BYTE6(v155[0]) = *(_BYTE *)(v128 - 1);
              LODWORD(v155[1]) = 56;
              v155[0] &= 0xFFFFFFFFFFFFFFuLL;
            }
            v131 = WORD2(v156[5]);
            *(_DWORD *)(a1 + 76) = 0;
            *(_DWORD *)(a1 + 72) = 0;
            *(_DWORD *)(a1 + 80) = -1;
            *(_DWORD *)(a1 + 52) = v2;
            *(_DWORD *)(a1 + 108) = __PAIR32__(HIWORD(v156[5]), v131);
            *(_WORD *)(a1 + 112) = v156[6];
            v132 = v130 - *(_QWORD *)a1;
            v133 = v155[1];
            *(_DWORD *)(a1 + 104) = v132;
            v134 = v155[0];
            *(_QWORD *)(a1 + 96) = v133;
            *(_QWORD *)(a1 + 88) = v134;
            goto LABEL_2;
          }
        }
        return 0xFFFFFFFFLL;
      }
      if ( v3 < (unsigned __int64)(v46 + 3) )
        return 0xFFFFFFFFLL;
      *(_DWORD *)(a1 + 47352) = v46[1];
      v125 = v46[2];
      *(_DWORD *)(a1 + 47360) = 0;
      *(_QWORD *)a1 = v46 + 3;
      *(_DWORD *)(a1 + 52) = 1853388386;
      *(_DWORD *)(a1 + 47356) = v125;
    }
    if ( v3 < (unsigned __int64)(v46 + 2) )
      return 0xFFFFFFFFLL;
    v102 = v46[1];
    *(_QWORD *)a1 = v46 + 2;
    *(_DWORD *)(a1 + 52) = 762869346;
    *(_DWORD *)(a1 + 47364) = v102;
LABEL_7:
    v4 = *(_DWORD *)(a1 + 47364);
    if ( !v4 )
    {
      *(_DWORD *)(a1 + 52) = 0;
      goto LABEL_37;
    }
    v5 = *(_DWORD **)a1;
    if ( v3 <= *(_QWORD *)a1 )
      return 0xFFFFFFFFLL;
    v6 = v3 - (_QWORD)v5;
    v7 = *(void **)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 40);
    if ( v6 < v4 )
      v4 = v6;
    if ( v8 <= (unsigned __int64)v7 )
      return 4294967294LL;
    v9 = v8 - (_QWORD)v7;
    v10 = v4;
    if ( v9 < v4 )
    {
      v4 = v9;
      v10 = (unsigned int)v9;
    }
    memcpy(v7, v5, v10);
    *(_QWORD *)a1 += v10;
    *(_QWORD *)(a1 + 24) += v10;
    v2 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 47364) -= v4;
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_DWORD **)a1;
  if ( v11 <= *(_QWORD *)a1 || *(unsigned int *)(a1 + 60) > v11 - (unsigned __int64)v12 )
    return 0xFFFFFFFFLL;
  v13 = *(_DWORD *)(a1 + 72);
  v14 = *(_DWORD *)(a1 + 76);
  v15 = *(_DWORD *)(a1 + 96);
  v16 = *(__int64 **)(a1 + 64);
  v17 = *(_DWORD *)(a1 + 56);
  v18 = *(_DWORD *)(a1 + 80);
  v151 = *(_WORD *)(a1 + 108);
  v19 = v13;
  v152 = *(_WORD *)(a1 + 110);
  v153 = *(_WORD *)(a1 + 112);
  v149 = *(_QWORD *)(a1 + 88);
  v154 = *(_QWORD *)(a1 + 8);
  v20 = (_QWORD *)((char *)v12 + *(unsigned int *)(a1 + 104));
  v21 = *(_BYTE **)(a1 + 24);
  v146 = *(_QWORD *)(a1 + 40) - 32LL - (_QWORD)v21;
  if ( *(_QWORD *)(a1 + 72) )
    goto LABEL_26;
LABEL_19:
  if ( !v17 )
  {
LABEL_35:
    *(_QWORD *)(a1 + 24) = v21;
    *(_QWORD *)a1 += *(unsigned int *)(a1 + 60);
    *(_DWORD *)(a1 + 52) = 0;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v22 = (63 - v15) & 0xFFFFFFF8;
    v20 = (_QWORD *)((char *)v20 - (v22 >> 3));
    if ( v154 > (unsigned __int64)v20 )
      return 4294967293LL;
    v24 = (unsigned __int8 *)(v148 + 8LL * v151);
    v25 = v22 + v15 - *v24;
    v26 = ((unsigned __int64)(v149 << v22) | qword_57520[v22] & *v20) >> v25;
    v27 = qword_57520[v25] & ((v149 << v22) | qword_57520[v22] & *v20);
    v28 = v24[1];
    v29 = v26;
    v13 = *((_DWORD *)v24 + 1) + (LODWORD(qword_57520[v28]) & v26);
    v30 = *((_WORD *)v24 + 1) + (v29 >> v28);
    v19 = v13;
    v151 = v30;
    if ( (unsigned __int64)v16 + v13 >= a1 + 47352 )
      return 4294967293LL;
    v31 = v25 - *(unsigned __int8 *)(a1 + 8LL * v152 + 632);
    v32 = v27 >> v31;
    v33 = qword_57520[v31] & v27;
    v34 = *(unsigned __int8 *)(a1 + 8LL * v152 + 633);
    v35 = v32;
    v14 = *(_DWORD *)(a1 + 8LL * v152 + 636) + (LODWORD(qword_57520[v34]) & v32);
    v152 = *(_WORD *)(a1 + 8LL * v152 + 634) + (v35 >> v34);
    v15 = v31 - *(unsigned __int8 *)(a1 + 8LL * v153 + 1144);
    v36 = *(unsigned __int8 *)(a1 + 8LL * v153 + 1145);
    v149 = qword_57520[v15] & v33;
    LODWORD(v33) = v33 >> v15;
    v37 = LODWORD(qword_57520[v36]) & v33;
    v38 = *(_DWORD *)(a1 + 8LL * v153 + 1148) + v37 == 0;
    v39 = *(_DWORD *)(a1 + 8LL * v153 + 1148) + v37;
    v153 = *(_WORD *)(a1 + 8LL * v153 + 1146) + ((unsigned int)v33 >> v36);
    if ( !v38 )
      v18 = v39;
    --v17;
LABEL_26:
    v40 = &v21[v19];
    if ( (unsigned int)v18 > (__int64)&v21[v19 - *(_QWORD *)(a1 + 32)] )
      return 4294967293LL;
    v41 = v13 + v14;
    if ( v41 <= v146 )
    {
      v146 -= v41;
      v85 = v16;
      do
      {
        v86 = *v85;
        v21 += 8;
        ++v85;
        *((_QWORD *)v21 - 1) = v86;
      }
      while ( v40 > v21 );
      v16 = (__int64 *)((char *)v16 + v19);
      if ( v18 > 7 || v18 >= v14 )
      {
        v135 = &v40[v14];
        v136 = (__int64 *)&v40[-v18];
        do
        {
          v137 = *v136;
          v40 += 8;
          ++v136;
          *((_QWORD *)v40 - 1) = v137;
        }
        while ( v135 > v40 );
        v21 = v135;
      }
      else
      {
        v87 = 0;
        if ( v14 )
        {
          do
          {
            v40[v87] = v40[v87 - v18];
            ++v87;
          }
          while ( v87 != v14 );
          v21 = &v40[v87];
        }
        else
        {
          v21 = v40;
        }
      }
      goto LABEL_19;
    }
    v42 = v146 + 32;
    if ( v146 + 32 < v19 )
      break;
    v43 = 0;
    if ( v19 )
    {
      do
      {
        v21[v43] = *((_BYTE *)v16 + v43);
        ++v43;
      }
      while ( v43 != v19 );
    }
    v16 = (__int64 *)((char *)v16 + v19);
    v44 = v42 - v19;
    if ( v44 < v14 )
    {
      v140 = v17;
      v139 = v149;
      v144 = &v21[v19];
      v141 = &v40[v44];
      if ( v44 )
      {
        do
        {
          v145 = v144[-v18];
          *v144++ = v145;
        }
        while ( v141 != v144 );
      }
      else
      {
        v141 = v40;
      }
      v14 -= v44;
      v142 = 0;
      goto LABEL_136;
    }
    v45 = 0;
    if ( v14 )
    {
      do
      {
        v40[v45] = v40[v45 - v18];
        ++v45;
      }
      while ( v45 != v14 );
    }
    else
    {
      v45 = 0;
    }
    v21 = &v40[v45];
    v146 = v44 - v14 - 32;
    if ( !v17 )
      goto LABEL_35;
  }
  v138 = 0;
  v139 = v149;
  v140 = v17;
  if ( v146 == -32 )
  {
    v138 = 0;
  }
  else
  {
    do
    {
      v21[v138] = *((_BYTE *)v16 + v138);
      ++v138;
    }
    while ( v138 != v42 );
  }
  v141 = &v21[v138];
  v16 = (__int64 *)((char *)v16 + v138);
  v142 = v13 - v42;
LABEL_136:
  v143 = (char *)v20 - *(_QWORD *)a1;
  *(_QWORD *)(a1 + 24) = v141;
  *(_DWORD *)(a1 + 72) = v142;
  *(_DWORD *)(a1 + 76) = v14;
  *(_DWORD *)(a1 + 80) = v18;
  *(_QWORD *)(a1 + 88) = v139;
  *(_DWORD *)(a1 + 96) = v15;
  *(_WORD *)(a1 + 108) = v151;
  *(_DWORD *)(a1 + 56) = v140;
  *(_DWORD *)(a1 + 104) = (_DWORD)v143;
  *(_QWORD *)(a1 + 64) = v16;
  *(_WORD *)(a1 + 110) = v152;
  *(_WORD *)(a1 + 112) = v153;
  return 4294967294LL;
}

