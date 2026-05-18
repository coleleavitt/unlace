unsigned __int64 __fastcall sub_14EFA0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r13
  int v5; // r14d
  __int64 v6; // rbp
  __int64 *v7; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // r11d
  __int64 v13; // rsi
  __int64 v14; // rax
  signed int v15; // eax
  int v16; // r11d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // edx
  const char *v22; // rax
  __int64 v23; // rdx
  int v24; // r11d
  int v25; // r11d
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // r12
  _BYTE *v32; // rax
  __int64 v33; // rdx
  int v34; // r14d
  int v35; // edx
  unsigned int v36; // eax
  __int64 i; // r10
  unsigned int v38; // ecx
  int v39; // r11d
  __int64 v40; // r10
  int v41; // r11d
  __int64 v42; // r10
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // r13
  unsigned int v46; // r8d
  int v47; // ecx
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // r14
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r10
  __int64 v55; // r10
  int v56; // r11d
  unsigned int v57; // edx
  _QWORD *j; // r9
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // r10
  int v64; // edx
  signed int v65; // eax
  signed int v66; // esi
  _BYTE *v67; // rax
  unsigned int v68; // eax
  int v69; // ecx
  int v70; // eax
  _BYTE *v71; // rdx
  __int64 *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  int v76; // eax
  __int64 v77; // r8
  unsigned int v78; // eax
  signed int v79; // eax
  int v80; // eax
  unsigned int v81; // eax
  char v82; // [rsp+8h] [rbp-120h]
  const char *v83; // [rsp+8h] [rbp-120h]
  int v84; // [rsp+8h] [rbp-120h]
  __int64 v85; // [rsp+8h] [rbp-120h]
  __int64 v86; // [rsp+8h] [rbp-120h]
  __int64 v87; // [rsp+8h] [rbp-120h]
  __int64 v88; // [rsp+8h] [rbp-120h]
  __int64 v89; // [rsp+8h] [rbp-120h]
  __int64 v90; // [rsp+8h] [rbp-120h]
  unsigned __int8 *v91; // [rsp+10h] [rbp-118h]
  __int64 v92; // [rsp+10h] [rbp-118h]
  int v93; // [rsp+18h] [rbp-110h]
  __int64 *v94; // [rsp+18h] [rbp-110h]
  unsigned int v95; // [rsp+20h] [rbp-108h]
  __int64 v96; // [rsp+20h] [rbp-108h]
  int v97; // [rsp+20h] [rbp-108h]
  int v98; // [rsp+20h] [rbp-108h]
  int v99; // [rsp+20h] [rbp-108h]
  unsigned int v100; // [rsp+2Ch] [rbp-FCh]
  int v101; // [rsp+30h] [rbp-F8h]
  unsigned int v102; // [rsp+30h] [rbp-F8h]
  __int64 v103; // [rsp+30h] [rbp-F8h]
  int v104; // [rsp+30h] [rbp-F8h]
  int v105; // [rsp+38h] [rbp-F0h]
  int v106; // [rsp+38h] [rbp-F0h]
  unsigned int v107; // [rsp+38h] [rbp-F0h]
  int v108; // [rsp+38h] [rbp-F0h]
  signed int v109; // [rsp+3Ch] [rbp-ECh]
  unsigned int v110; // [rsp+40h] [rbp-E8h]
  __int64 v111; // [rsp+40h] [rbp-E8h]
  int v112; // [rsp+48h] [rbp-E0h]
  __int64 v113; // [rsp+48h] [rbp-E0h]
  int v114; // [rsp+48h] [rbp-E0h]
  int v115; // [rsp+48h] [rbp-E0h]
  unsigned int v116; // [rsp+48h] [rbp-E0h]
  int v117; // [rsp+48h] [rbp-E0h]
  int v118; // [rsp+48h] [rbp-E0h]
  int v119; // [rsp+48h] [rbp-E0h]
  __int16 v120; // [rsp+52h] [rbp-D6h]
  unsigned int v121; // [rsp+54h] [rbp-D4h]
  int v122; // [rsp+58h] [rbp-D0h]
  __int64 v123; // [rsp+58h] [rbp-D0h]
  int v124; // [rsp+58h] [rbp-D0h]
  __int64 v125; // [rsp+60h] [rbp-C8h]
  __int64 v126; // [rsp+60h] [rbp-C8h]
  __int64 v127; // [rsp+60h] [rbp-C8h]
  __int64 v128; // [rsp+68h] [rbp-C0h]
  unsigned int v129; // [rsp+70h] [rbp-B8h]
  int v130; // [rsp+74h] [rbp-B4h]
  _QWORD *v131; // [rsp+80h] [rbp-A8h]
  __int64 v132; // [rsp+88h] [rbp-A0h]
  unsigned int v133; // [rsp+98h] [rbp-90h] BYREF
  int v134; // [rsp+9Ch] [rbp-8Ch] BYREF
  __int128 v135; // [rsp+A0h] [rbp-88h]
  _QWORD v136[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v137; // [rsp+C0h] [rbp-68h]
  __int128 v138; // [rsp+D0h] [rbp-58h]
  __int64 v139; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v140; // [rsp+E8h] [rbp-40h]

  v3 = a2;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD *)a1;
  v140 = __readfsqword(0x28u);
  v133 = 0;
  v134 = 0;
  v135 = 0;
  if ( !v5 )
  {
    v9 = a1;
    v10 = sub_145BE0((__int64 *)a1, (__int64)a2, 0.0);
    v11 = v10;
    if ( !v10 )
      goto LABEL_50;
    v91 = sub_E60E0((__int64 *)a1, v10, 128, nullptr, nullptr);
    v82 = *(_BYTE *)(v11 + 63);
    if ( v91 )
    {
      v5 = 1;
    }
    else if ( (*(_BYTE *)(*(_QWORD *)a1 + 49LL) & 0x40) != 0 && !*(_BYTE *)(v11 + 63) )
    {
      v5 = sub_CF7D0(v11, 0, 0) != 0;
    }
    if ( (unsigned int)sub_136CC0(a1, v11) )
      goto LABEL_50;
    v12 = sub_E6130((_BYTE *)a1, (const char **)v11, v91 != nullptr);
    if ( v12 )
      goto LABEL_50;
    v13 = *(_QWORD *)(v11 + 96);
    v14 = -1048576;
    v95 = -32768;
    if ( v13 )
    {
      v15 = sub_CFB20(v6, v13);
      v12 = 0;
      v95 = v15;
      v14 = 32LL * v15;
    }
    v93 = v12;
    v101 = sub_E4020(a1, 9, *(_QWORD *)v11, 0, *(_QWORD *)(*(_QWORD *)(v6 + 32) + v14));
    v16 = v93;
    if ( v101 == 1 )
      goto LABEL_50;
    v17 = *(_DWORD *)(a1 + 52);
    v18 = v17 + 1;
    v100 = v17;
    *(_DWORD *)(a1 + 52) = v17 + 1;
    *((_DWORD *)v3 + 18) = v17;
    v19 = *(_QWORD *)(v11 + 16);
    v110 = v18;
    if ( v19 )
    {
      v20 = *(_DWORD *)(a1 + 52) + 1;
      do
      {
        v21 = v20 + v16++;
        *(_DWORD *)(a1 + 52) = v21;
        v19 = *(_QWORD *)(v19 + 40);
      }
      while ( v19 );
    }
    if ( v82 == 2 )
    {
      v22 = *(const char **)v11;
      v23 = *(_QWORD *)(a1 + 360);
      *((_QWORD *)&v135 + 1) = a1;
      *(_QWORD *)&v135 = v23;
      *(_QWORD *)(a1 + 360) = v22;
    }
    v94 = *(__int64 **)(a1 + 16);
    if ( !v94 )
    {
      v108 = v16;
      v94 = sub_E2050((__int64 *)a1);
      v16 = v108;
      if ( !v94 )
        goto LABEL_50;
    }
    if ( !*(_BYTE *)(a1 + 30) )
      *((_BYTE *)v94 + 198) |= 0x10u;
    v105 = v16;
    sub_11C930(a1, v5, v95);
    v24 = v105;
    if ( v82 == 2 )
    {
      sub_136B80((__int64 *)a1, (const char **)v11, *(_QWORD *)(v11 + 96), a3, v100);
      v24 = v105;
      v134 = v100;
      v133 = v100;
    }
    v106 = v24;
    v136[0] = a1;
    v136[1] = v3;
    v137 = 0;
    v139 = 0;
    v138 = 0;
    v109 = sub_E45E0((__int64)v136, a3);
    v25 = v106;
    if ( v109 )
      goto LABEL_50;
    v107 = 0;
    if ( (*(_BYTE *)(v6 + 52) & 1) != 0 )
    {
      v107 = 0;
      if ( !*(_BYTE *)(a1 + 30) && !*(_QWORD *)(a1 + 168) && !*(_BYTE *)(a1 + 213) )
      {
        v119 = v25;
        v81 = *(_DWORD *)(a1 + 56) + 1;
        *(_DWORD *)(a1 + 56) = v81;
        v107 = v81;
        sub_E1710((__int64)v94, 71, 0, v81, 0);
        v25 = v119;
      }
    }
    if ( !v101 && !a3 )
    {
      if ( v5 )
      {
        v34 = 20;
LABEL_59:
        v35 = *(_DWORD *)(a1 + 56);
        v36 = v35 + 1;
        v102 = v35 + 1;
        if ( *(char *)(v11 + 48) >= 0 )
        {
          *(_DWORD *)(a1 + 56) = v36;
          v99 = v25;
          sub_E1710((__int64)v94, 75, 0, v36, 0);
          v68 = v102;
          v122 = 0;
          v121 = 0;
          v102 = 0;
          v40 = 0;
          v120 = 1;
          v39 = v99;
          v129 = v68;
        }
        else
        {
          for ( i = *(_QWORD *)(v11 + 16); i; i = *(_QWORD *)(i + 40) )
          {
            if ( (*(_BYTE *)(i + 99) & 3) == 2 )
              break;
          }
          v38 = *(__int16 *)(i + 94);
          v112 = v25;
          v96 = i;
          v120 = *(_WORD *)(i + 94);
          *(_DWORD *)(a1 + 56) = v38 + v35;
          v121 = *(_DWORD *)(a1 + 52);
          *(_DWORD *)(a1 + 52) = v121 + 1;
          v122 = sub_E1710((__int64)v94, 118, v121, v38, 0);
          sub_F2600(a1, v96, 0.0);
          v39 = v112;
          v40 = v96;
          v129 = 0;
        }
        v113 = v40;
        v97 = v39;
        v111 = sub_12EFF0(a1, (_DWORD)v3, a3, 0, 0, 0, v34, v110);
        v41 = v97;
        v42 = v113;
        if ( v111 )
        {
          v128 = *(_QWORD *)(v111 + 48);
          v98 = *(unsigned __int8 *)(v111 + 74);
          if ( v98 != 1 )
          {
            v43 = *(_QWORD *)(a1 + 160);
            if ( !v43 )
              v43 = a1;
            *(_BYTE *)(v43 + 32) = 1;
          }
          if ( (*(_BYTE *)(v111 + 76) & 1) != 0 )
          {
            v125 = v113;
            v114 = v41;
            sub_E1710((__int64)v94, 143, v100, 0, 0);
            v42 = v125;
            v41 = v114;
          }
          if ( v107 )
          {
            v126 = v42;
            v115 = v41;
            sub_E1710((__int64)v94, 86, v107, 1u, 0);
            v42 = v126;
            v41 = v115;
          }
          if ( v42 )
          {
            if ( v120 > 0 )
            {
              v132 = a3;
              v131 = v3;
              v44 = 0;
              v130 = v41;
              v45 = v42;
              do
              {
                v46 = v102 + v44;
                v47 = *(__int16 *)(*(_QWORD *)(v45 + 8) + 2 * v44++);
                sub_127530(v94, v11, v100, v47, v46, 0.0);
              }
              while ( v44 != (unsigned int)(v120 - 1) + 1LL );
              v42 = v45;
              v41 = v130;
              v9 = a1;
              v3 = v131;
              a3 = v132;
            }
            if ( !v98 )
            {
              v48 = *(_QWORD *)v9;
              v123 = v42;
              v49 = *(_DWORD *)(v9 + 56) + 1;
              *(_DWORD *)(v9 + 56) = v49;
              v116 = v49;
              v50 = sub_E3A30(v48, v42);
              v51 = sub_E1710((__int64)v94, 97, v102, v120, v116);
              sub_DCC50((__int64)v94, v51, v50, (unsigned int)v120, v52, v53);
              sub_E1770(v94, 138, v121, v116, v102, v120);
              v54 = v123;
              v120 = 0;
LABEL_81:
              v103 = v54;
              v7 = nullptr;
              sub_133C90(v111, 0.0);
              v55 = v103;
              v124 = 0;
              goto LABEL_82;
            }
          }
          else
          {
            v118 = v41;
            v78 = *(_DWORD *)(a1 + 56) + 1;
            *(_DWORD *)(a1 + 56) = v78;
            v102 = v78;
            sub_127530(v94, v11, v100, -1, v78, 0.0);
            v41 = v118;
            v42 = 0;
            if ( !v98 )
            {
              sub_E1710((__int64)v94, 156, v129, v102, 0);
              v116 = v102;
              v120 = 1;
              v54 = 0;
              goto LABEL_81;
            }
          }
          v127 = v42;
          v117 = v41;
          v72 = sub_DBF10(v6, v41 + 2);
          v7 = v72;
          if ( !v72 )
          {
            sub_133C90(v111, 0.0);
            v33 = *((_QWORD *)&v135 + 1);
            goto LABEL_51;
          }
          memset(v72, 1, v117 + 1);
          v55 = v127;
          *((_BYTE *)v7 + v117 + 1) = 0;
          if ( (int)v128 >= 0 )
            *((_BYTE *)v7 + (int)(v128 - v100)) = 0;
          if ( v128 >= 0 )
            *((_BYTE *)v7 + (int)(HIDWORD(v128) - v100)) = 0;
          if ( v122 )
          {
            sub_D0600(*v94, v94 + 17, v122, v73, v74, v75);
            v55 = v127;
          }
          v124 = *(_DWORD *)(v9 + 68) - 1;
          *(_DWORD *)(v9 + 68) = v124;
          v116 = v102;
LABEL_82:
          if ( v82 == 2 )
            goto LABEL_88;
          v56 = 0;
          if ( v98 == 2 )
          {
            v89 = v55;
            v80 = sub_E1710((__int64)v94, 14, 0, 0, 0);
            v55 = v89;
            v56 = v80;
          }
          if ( *(_BYTE *)(v11 + 63) == 1 )
          {
            v134 = -999;
            v133 = -999;
          }
          else
          {
            v104 = v56;
            v88 = v55;
            sub_F26F0(v9, v11, 113, 8u, v100, v7, 0.0, &v133, (unsigned int *)&v134);
            v56 = v104;
            v55 = v88;
          }
          if ( v98 == 2 )
          {
            v69 = *((_DWORD *)v94 + 36);
            v70 = v69 - 1;
            if ( v69 - 1 == v56 )
            {
              *((_DWORD *)v94 + 36) = v56;
            }
            else
            {
              v71 = byte_241F50;
              if ( v56 >= 0 )
                v70 = v56;
              if ( !*(_BYTE *)(*v94 + 103) )
                v71 = (_BYTE *)(v94[17] + 24LL * v70);
              *((_DWORD *)v71 + 2) = v69;
            }
          }
          else
          {
LABEL_88:
            if ( !v98 )
            {
              v85 = v55;
              if ( v55 )
              {
                v109 = sub_E1710((__int64)v94, 35, v121, 0, 0);
                if ( *(_BYTE *)(v11 + 63) == 1 )
                  sub_E1710((__int64)v94, 94, v121, 0, v116);
                else
                  sub_E1710((__int64)v94, 134, v121, v116, 0);
                v55 = v85;
              }
              else
              {
                v79 = sub_E1710((__int64)v94, 45, v129, 0, v116);
                v55 = 0;
                v109 = v79;
              }
              goto LABEL_93;
            }
          }
          if ( *(_BYTE *)(v11 + 63) == 1 )
            goto LABEL_94;
          v57 = v133;
          if ( !*((_BYTE *)v7 + (int)(v133 - v100)) )
          {
LABEL_124:
            v87 = v55;
            sub_14EB50(
              v9,
              v11,
              (__int64)v91,
              v57,
              v134,
              v116,
              0.0,
              v120,
              *(_BYTE *)(v9 + 30) == 0,
              0xBu,
              v98,
              SHIDWORD(v128));
            v63 = v87;
            goto LABEL_103;
          }
          v90 = v55;
          sub_E1770(v94, 27, v133, v124, v116, v120);
          v55 = v90;
LABEL_93:
          v57 = v133;
          if ( *(_BYTE *)(v11 + 63) == 1 )
          {
LABEL_94:
            for ( j = *(_QWORD **)(v11 + 80); j; j = (_QWORD *)j[5] )
            {
              if ( v6 == *j )
                break;
            }
            v92 = (__int64)j;
            v86 = v55;
            sub_E3B50(v9, v11);
            v59 = *(_QWORD *)(v9 + 160);
            if ( !v59 )
              v59 = v9;
            *(_BYTE *)(v59 + 33) = 1;
            if ( v98 == 1 )
            {
              sub_E1710((__int64)v94, 122, v100, 0, 0);
              if ( !*(_QWORD *)(v9 + 160) )
                *(_BYTE *)(v9 + 32) = 0;
              v76 = sub_E1710((__int64)v94, 7, 0, 1u, v116);
              sub_DCC50((__int64)v94, v76, v92, 4294967285LL, v77, v92);
              v62 = *((int *)v94 + 36);
              v63 = v86;
              if ( (int)v62 <= 0 )
              {
LABEL_137:
                sub_E0BB0((__int64)v94, v124);
                sub_133C90(v111, 0.0);
LABEL_110:
                if ( !*(_BYTE *)(v9 + 30) && !*(_QWORD *)(v9 + 168) && *(_QWORD *)(v9 + 152) )
                  sub_21CEE((__int64 *)v9);
                if ( v107 )
                  sub_F1F70((__int64)v94, v107, "rows deleted");
                v33 = *((_QWORD *)&v135 + 1);
LABEL_51:
                if ( v33 )
                {
                  *((_QWORD *)&v135 + 1) = 0;
                  *(_QWORD *)(v33 + 360) = v135;
                }
                sub_D8260(v6, v3);
                if ( !a3 )
                  goto LABEL_4;
                goto LABEL_3;
              }
            }
            else
            {
              v60 = sub_E1710((__int64)v94, 7, 0, 1u, v116);
              sub_DCC50((__int64)v94, v60, v92, 4294967285LL, v61, v92);
              v62 = *((int *)v94 + 36);
              v63 = v86;
              if ( (int)v62 <= 0 )
                goto LABEL_103;
            }
            *(_WORD *)(v94[17] + 24 * v62 - 22) = 2;
LABEL_103:
            if ( !v98 )
            {
              if ( v63 )
              {
                sub_E1710((__int64)v94, 38, v121, v109 + 1, 0);
                v64 = *((_DWORD *)v94 + 36);
                v65 = v64 - 1;
                if ( v109 >= 0 )
                  v65 = v109;
                v66 = v65;
                v67 = byte_241F50;
                if ( !*(_BYTE *)(*v94 + 103) )
                  v67 = (_BYTE *)(v94[17] + 24LL * v66);
              }
              else
              {
                sub_E1710((__int64)v94, 8, 0, v109, 0);
                v64 = *((_DWORD *)v94 + 36);
                if ( v109 < 0 )
                  v109 = v64 - 1;
                v67 = byte_241F50;
                if ( !*(_BYTE *)(*v94 + 103) )
                  v67 = (_BYTE *)(v94[17] + 24LL * v109);
              }
              *((_DWORD *)v67 + 2) = v64;
              goto LABEL_110;
            }
            goto LABEL_137;
          }
          goto LABEL_124;
        }
LABEL_50:
        v33 = *((_QWORD *)&v135 + 1);
        v7 = nullptr;
        goto LABEL_51;
      }
      if ( *(_BYTE *)(v11 + 63) != 1 )
      {
        if ( v95 != 1 )
          sub_E30E0(a1, v95, *(_DWORD *)(v11 + 40), 1u, *(_QWORD *)v11);
        if ( *(char *)(v11 + 48) >= 0 )
        {
          v83 = *(const char **)v11;
          v26 = v107;
          if ( !v107 )
            v26 = -1;
          v27 = sub_E1710((__int64)v94, 145, *(_DWORD *)(v11 + 40), v95, v26);
          sub_DCC50((__int64)v94, v27, (__int64)v83, 0xFFFFFFFFLL, v28, v29);
        }
        if ( *(_QWORD *)(v11 + 16) )
        {
          v30 = -1;
          if ( v107 )
            v30 = v107;
          v84 = v30;
          v31 = *(_QWORD *)(v11 + 16);
          do
          {
            sub_E1710((__int64)v94, 145, *(_DWORD *)(v31 + 88), v95, 0);
            if ( (*(_BYTE *)(v31 + 99) & 3) == 2 && *(char *)(v11 + 48) < 0 )
            {
              v32 = byte_241F50;
              if ( !*(_BYTE *)(*v94 + 103) )
                v32 = (_BYTE *)(v94[17] + 24LL * (*((_DWORD *)v94 + 36) - 1));
              *((_DWORD *)v32 + 3) = v84;
            }
            v31 = *(_QWORD *)(v31 + 40);
          }
          while ( v31 );
          a3 = 0;
        }
        v7 = nullptr;
        goto LABEL_110;
      }
    }
    v34 = (v5 | BYTE8(v138) & 0x40) == 0 ? 28 : 20;
    goto LABEL_59;
  }
  v7 = nullptr;
  sub_D8260(v6, a2);
  if ( !a3 )
    return __readfsqword(0x28u) ^ v140;
LABEL_3:
  sub_D7720(v6, a3);
LABEL_4:
  if ( v7 )
    sub_C9250(v6, v7);
  return __readfsqword(0x28u) ^ v140;
}
