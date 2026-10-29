// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_1444D0(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rdi
  int v7; // ebp
  __int64 *v8; // rsi
  __int64 v9; // rbx
  int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  const char **v14; // rbp
  unsigned int v15; // eax
  char v16; // al
  _QWORD *v18; // rsi
  int v19; // r10d
  __int64 *v20; // r8
  __int64 v21; // rdx
  __int64 i; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // rsi
  __int64 v26; // r10
  __int64 *v27; // r11
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r10
  char v31; // al
  int v32; // eax
  bool v33; // sf
  __int64 v34; // r9
  int v35; // r13d
  int *v36; // r11
  int v37; // r8d
  int *v38; // rax
  _BYTE *v39; // rcx
  unsigned __int8 *j; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  int *v43; // rax
  int v44; // eax
  char v45; // al
  __int16 v46; // dx
  _QWORD *v47; // rsi
  __int64 v48; // r14
  int v49; // ecx
  __int64 v50; // rbx
  int v51; // r12d
  __int64 v52; // r13
  char v53; // al
  __int64 *v54; // r12
  __int64 v55; // rbx
  __int64 v56; // r13
  __int64 v57; // rax
  unsigned __int8 *v58; // rbp
  __int64 *v59; // rax
  __int64 v60; // r15
  int v61; // eax
  __int64 *v62; // r15
  __int64 v63; // rax
  __int64 *v64; // rax
  unsigned __int8 *v65; // r12
  __int64 *v66; // rbp
  int v67; // esi
  __int64 v68; // rax
  __int64 *v69; // r15
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 *v72; // rax
  const char *v73; // rdx
  __int64 v74; // rax
  int v75; // eax
  __int64 k; // rdx
  int *v77; // rdx
  __int64 v78; // rax
  int *v79; // rsi
  __int64 v80; // r10
  char v81; // di
  char **v82; // rax
  char v83; // cl
  int v84; // r8d
  char *v85; // rdx
  __int64 v86; // rax
  int *v87; // r15
  __int64 v88; // r14
  _QWORD *v89; // rbx
  __int64 *v90; // rax
  __int64 *v91; // rax
  int v92; // r9d
  __int64 v93; // r12
  char *v94; // rcx
  const char *m; // rsi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rsi
  int v99; // eax
  __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rbp
  unsigned __int8 *v103; // r13
  __int64 *v104; // rbp
  __int64 *v105; // rdx
  __int64 **v106; // rax
  __int64 *v107; // rax
  __int64 *v108; // rax
  int v109; // ebp
  __int64 v110; // rax
  int *v111; // rdx
  int v112; // eax
  int v113; // eax
  int *v114; // rdx
  int *v115; // rax
  int *v116; // r15
  int *v117; // rbx
  _DWORD *v118; // rdi
  __int64 v119; // rax
  int *v120; // r14
  __int64 *v121; // rax
  int v122; // eax
  __int64 v123; // [rsp+8h] [rbp-F0h]
  __int64 v125; // [rsp+18h] [rbp-E0h]
  __int64 v126; // [rsp+18h] [rbp-E0h]
  int *v127; // [rsp+18h] [rbp-E0h]
  __int64 v128; // [rsp+20h] [rbp-D8h]
  __int64 v129; // [rsp+20h] [rbp-D8h]
  __int16 v130; // [rsp+20h] [rbp-D8h]
  int v131; // [rsp+20h] [rbp-D8h]
  __int64 *v132; // [rsp+28h] [rbp-D0h]
  __int16 v133; // [rsp+28h] [rbp-D0h]
  __int64 v134; // [rsp+28h] [rbp-D0h]
  int v135; // [rsp+28h] [rbp-D0h]
  int v136; // [rsp+28h] [rbp-D0h]
  __int64 v137; // [rsp+30h] [rbp-C8h]
  __int64 v138; // [rsp+30h] [rbp-C8h]
  __int64 v139; // [rsp+30h] [rbp-C8h]
  __int64 v140; // [rsp+30h] [rbp-C8h]
  int v141; // [rsp+30h] [rbp-C8h]
  __int64 *v142; // [rsp+30h] [rbp-C8h]
  unsigned int v143; // [rsp+38h] [rbp-C0h]
  __int64 v144; // [rsp+38h] [rbp-C0h]
  __int64 v145; // [rsp+38h] [rbp-C0h]
  int v146; // [rsp+38h] [rbp-C0h]
  __int64 v147; // [rsp+38h] [rbp-C0h]
  __int64 v148; // [rsp+38h] [rbp-C0h]
  __int64 v149; // [rsp+38h] [rbp-C0h]
  __int64 v150; // [rsp+38h] [rbp-C0h]
  __int64 *v151; // [rsp+40h] [rbp-B8h]
  __int64 v152; // [rsp+40h] [rbp-B8h]
  char *v153; // [rsp+40h] [rbp-B8h]
  __int64 v154; // [rsp+40h] [rbp-B8h]
  unsigned __int8 v155; // [rsp+48h] [rbp-B0h]
  __int64 v156; // [rsp+48h] [rbp-B0h]
  _DWORD *v157; // [rsp+50h] [rbp-A8h]
  const char *v158; // [rsp+50h] [rbp-A8h]
  int v159; // [rsp+58h] [rbp-A0h]
  const char *v160; // [rsp+58h] [rbp-A0h]
  int *v161; // [rsp+60h] [rbp-98h]
  int v162; // [rsp+68h] [rbp-90h]
  __int64 v163; // [rsp+68h] [rbp-90h]
  __int64 v164; // [rsp+70h] [rbp-88h]
  unsigned int v165; // [rsp+78h] [rbp-80h]
  __int64 *v166; // [rsp+78h] [rbp-80h]
  int v167; // [rsp+78h] [rbp-80h]
  int *v168; // [rsp+78h] [rbp-80h]
  int v169; // [rsp+80h] [rbp-78h]
  int v170; // [rsp+84h] [rbp-74h]
  _QWORD *v171; // [rsp+88h] [rbp-70h]
  __int64 v172; // [rsp+98h] [rbp-60h]
  _QWORD *v173; // [rsp+A0h] [rbp-58h]
  __int16 v174; // [rsp+A8h] [rbp-50h]
  int v175; // [rsp+ACh] [rbp-4Ch]
  int v176; // [rsp+B0h] [rbp-48h] BYREF
  int v177; // [rsp+B4h] [rbp-44h] BYREF
  unsigned __int64 v178; // [rsp+B8h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v178 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 4);
  v123 = *(_QWORD *)v4;
  v6 = *(_QWORD *)v4;
  *(_DWORD *)(a2 + 4) = v5 | 0x40;
  if ( *(_BYTE *)(v6 + 103) )
    return 2;
  v143 = 1;
  v174 = v5;
  v7 = v5 & 0x40;
  if ( (v5 & 0x40) != 0 )
    return v143;
  if ( *(_WORD *)(a1 + 36) )
  {
    v61 = *(_DWORD *)(v4 + 132) + 1;
    *(_DWORD *)(v4 + 132) = v61;
    *(_DWORD *)(a2 + 16) = v61;
  }
  v8 = *(__int64 **)(a2 + 104);
  v161 = *(int **)(a2 + 40);
  v171 = *(_QWORD **)(a2 + 32);
  if ( *(_QWORD *)(v4 + 392) && (*(_BYTE *)(a2 + 6) & 0x20) != 0 )
  {
    if ( !v8 )
    {
      v8 = sub_DC1C0(v123, 0x40u);
      *(_QWORD *)(a2 + 104) = v8;
      if ( !v8 )
        return 2;
    }
    *((_DWORD *)v8 + 1) = 1;
    v8 = *(__int64 **)(a2 + 104);
  }
  sub_DC9A0(v4, (__int64)v8, 0);
  v9 = (__int64)(v161 + 2);
  sub_C48E0(v4, v161);
  if ( *v161 > 0 )
  {
    v125 = a1;
    v10 = v7;
LABEL_10:
    if ( *(_QWORD *)(v9 + 32) )
      goto LABEL_9;
    v11 = *(_QWORD *)(v9 + 16);
    if ( !v11 )
    {
      v18 = *(_QWORD **)(v9 + 40);
      if ( v18 && *(_QWORD *)(v125 + 16) && (unsigned int)sub_CDAF0(v125, v18)
        || (unsigned int)sub_11EFD0(v4, (_QWORD *)v9) )
      {
        return 2;
      }
      goto LABEL_20;
    }
    v12 = *(_QWORD *)(v4 + 392);
    if ( !v12 || *(_DWORD *)(v4 + 48) || *(_QWORD *)(v9 + 8) || (*(_BYTE *)(v9 + 62) & 1) != 0 )
    {
LABEL_15:
      v13 = sub_144470((__int64 *)v4, 0, v9, a3);
      v14 = (const char **)v13;
      *(_QWORD *)(v9 + 32) = v13;
      if ( !v13 )
        return 2;
      v15 = *(_DWORD *)(v13 + 44);
      if ( v15 > 0xFFFE )
      {
        sub_DBD10(v4, "too many references to \"%s\": max 65535", *v14);
        *(_QWORD *)(v9 + 32) = 0;
        return 2;
      }
      *((_DWORD *)v14 + 11) = v15 + 1;
      v16 = *((_BYTE *)v14 + 63);
      if ( v16 == 1 )
        goto LABEL_65;
      if ( (*(_BYTE *)(v9 + 61) & 4) != 0 )
      {
        sub_DBD10(v4, "'%s' is not a function", *(const char **)(v9 + 16));
        return 2;
      }
      if ( v16 )
      {
LABEL_65:
        v130 = *(_WORD *)(v125 + 36);
        if ( (unsigned int)sub_136CC0(v4, (__int64)v14) )
          return 2;
        v45 = *((_BYTE *)v14 + 63);
        if ( v45 == 2 )
        {
          if ( *(char *)(v123 + 51) >= 0 && v14[12] != *(const char **)(*(_QWORD *)(v123 + 32) + 56LL) )
            sub_DBD10(v4, "access to view \"%s\" prohibited", *v14);
          *(_QWORD *)(v9 + 40) = sub_DD450(v123, (char *)v14[8], 0);
        }
        else if ( v45 == 1 && (*(_BYTE *)(v9 + 61) & 0x40) != 0 )
        {
          v73 = v14[10];
          if ( v73 )
          {
            if ( (unsigned int)v73[29] > (unsigned __int8)*(_QWORD *)(v123 + 48) >> 7 )
              sub_DBD10(v4, "unsafe use of virtual table \"%s\"", *v14);
          }
        }
        v46 = *((_WORD *)v14 + 27);
        *((_WORD *)v14 + 27) = -1;
        *(_WORD *)(v125 + 36) = 1;
        v47 = *(_QWORD **)(v9 + 40);
        if ( v47 && *(_QWORD *)(v125 + 16) )
        {
          v133 = v46;
          sub_CDAF0(v125, v47);
          v46 = v133;
        }
        *(_WORD *)(v125 + 36) = (unsigned __int8)v130;
        *((_WORD *)v14 + 27) = v46;
      }
      goto LABEL_20;
    }
    while ( 1 )
    {
      v19 = 0;
      v20 = (__int64 *)(v12 + 16);
      if ( *(int *)v12 > 0 )
        break;
LABEL_62:
      if ( !*(_DWORD *)(v12 + 4) )
      {
        v12 = *(_QWORD *)(v12 + 8);
        if ( v12 )
          continue;
      }
      goto LABEL_15;
    }
LABEL_31:
    v21 = *v20;
    for ( i = 0; ; ++i )
    {
      v23 = *(unsigned __int8 *)(v11 + i);
      v24 = *(unsigned __int8 *)(v21 + i);
      if ( (_DWORD)v23 == (_DWORD)v24 )
      {
        if ( !*(_BYTE *)(v11 + i) )
        {
          v25 = *(char **)(v12 + 48LL * v19 + 40);
          if ( v25 )
            goto LABEL_131;
          v144 = v19;
          v137 = v12 + 48LL * v19;
          v128 = *(_QWORD *)v4;
          if ( (*(_BYTE *)(v9 + 61) & 4) != 0 )
          {
            v25 = "'%s' is not a function";
            v21 = *(_QWORD *)(v9 + 16);
LABEL_131:
            sub_DBD10(v4, v25, v21);
            return 2;
          }
          v132 = sub_DC1C0(*(_QWORD *)v4, 0x68u);
          v26 = v144;
          if ( !v132 )
            return 2;
          v27 = *(__int64 **)(v137 + 48);
          if ( !v27 )
          {
            v121 = sub_DC1C0(v128, 0x14u);
            *(_QWORD *)(v137 + 48) = v121;
            if ( !v121
              || (v154 = v144,
                  v149 = v137,
                  v142 = v121,
                  !sub_DC930(
                     (__int64 *)v4,
                     (__int64 *)(v4 + 184),
                     (void (__fastcall *)(__int64, __int64))sub_C92C0,
                     (__int64)v121)) )
            {
              sub_C9250(v128, v132);
              return 2;
            }
            v27 = v142;
            v26 = v154;
            *((_BYTE *)v142 + 18) = *(_BYTE *)(v149 + 56);
          }
          v151 = v27;
          v145 = v26;
          *(_QWORD *)(v9 + 32) = v132;
          *((_DWORD *)v132 + 11) = 1;
          v138 = v12 + 48 * v26;
          v28 = sub_DC720(v128, *(const char **)(v138 + 16));
          *((_DWORD *)v132 + 12) |= 0x4200u;
          *v132 = (__int64)v28;
          *((_WORD *)v132 + 26) = -1;
          *((_WORD *)v132 + 29) = 200;
          v29 = sub_DD450(v128, *(char **)(v138 + 32), 0);
          *(_QWORD *)(v9 + 40) = v29;
          if ( *(_BYTE *)(v128 + 103) )
            return 2;
          *(_DWORD *)(v29 + 4) |= 0x4000000u;
          v30 = v145;
          v31 = *(_BYTE *)(v9 + 61);
          if ( (v31 & 2) != 0 )
          {
            sub_DBD10(v4, "no such index: \"%s\"", *(const char **)(v9 + 88));
            return 2;
          }
          *(_QWORD *)(v9 + 96) = v151;
          *(_BYTE *)(v9 + 61) = v31 | 0x80;
          v32 = *(_DWORD *)v151 + 1;
          v33 = *(int *)v151 < 0;
          *(_DWORD *)v151 = v32;
          if ( !(v33 ^ __OFSUB__(v32, 1) | (v32 == 1)) && *((_BYTE *)v151 + 18) == 1 )
            *((_BYTE *)v151 + 18) = 0;
          v34 = *(_QWORD *)(v9 + 40);
          v129 = v34;
          v155 = *(_BYTE *)v34 + 122;
          if ( v155 <= 1u )
          {
            v146 = v10;
            v35 = -1;
            while ( 1 )
            {
              v36 = *(int **)(v34 + 40);
              if ( *v36 <= 0 )
                goto LABEL_132;
              v37 = 0;
              while ( 2 )
              {
                v38 = &v36[26 * v37];
                if ( *((_QWORD *)v38 + 2) )
                  goto LABEL_49;
                v39 = *((_BYTE **)v38 + 3);
                if ( !v39 )
                  goto LABEL_49;
                for ( j = *(unsigned __int8 **)(v12 + 48 * v30 + 16); ; ++j )
                {
                  v41 = (unsigned __int8)*v39;
                  v42 = *j;
                  if ( (_DWORD)v41 == (_DWORD)v42 )
                    break;
                  if ( byte_1BF000[v41] != byte_1BF000[v42] )
                    goto LABEL_49;
LABEL_54:
                  ++v39;
                }
                if ( *v39 )
                  goto LABEL_54;
                v43 = &v36[26 * v37];
                *((_QWORD *)v43 + 5) = v132;
                ++*((_DWORD *)v132 + 11);
                *((_BYTE *)v43 + 69) |= 0x20u;
                v44 = *(_DWORD *)(v34 + 4);
                if ( (v44 & 0x2000) != 0 )
                {
                  sub_DBD10(v4, "multiple references to recursive table: %s", *(const char **)(v12 + 48 * v30 + 16));
                  return 2;
                }
                BYTE1(v44) |= 0x20u;
                *(_DWORD *)(v34 + 4) = v44;
                if ( v35 < 0 )
                {
                  v35 = *(_DWORD *)(v4 + 52);
                  *(_DWORD *)(v4 + 52) = v35 + 1;
                }
                v36[26 * v37 + 18] = v35;
LABEL_49:
                if ( ++v37 < *v36 )
                  continue;
                break;
              }
LABEL_132:
              if ( (*(_BYTE *)(v34 + 5) & 0x20) != 0 )
              {
                v34 = *(_QWORD *)(v34 + 80);
                if ( *(_BYTE *)v34 == *(_BYTE *)v129 )
                  continue;
              }
              v10 = v146;
              goto LABEL_135;
            }
          }
          v34 = *(_QWORD *)(v9 + 40);
LABEL_135:
          *(_QWORD *)(v12 + 48 * v30 + 40) = "circular reference: %s";
          v74 = *(_QWORD *)(v4 + 392);
          *(_QWORD *)(v4 + 392) = v12;
          v140 = v74;
          if ( (*(_BYTE *)(v129 + 5) & 0x20) != 0 )
          {
            *(_QWORD *)(v34 + 104) = *(_QWORD *)(v129 + 104);
            if ( v34 )
            {
              if ( *(_QWORD *)(v125 + 16) )
              {
                v152 = v30;
                v147 = v34;
                v75 = sub_CDAF0(v125, (_QWORD *)v34);
                v30 = v152;
                *(_QWORD *)(v147 + 104) = 0;
                if ( v75 )
                  goto LABEL_257;
              }
              else
              {
                *(_QWORD *)(v34 + 104) = 0;
              }
            }
            else
            {
              qword_68 = 0;
            }
          }
          else if ( v129 )
          {
            if ( *(_QWORD *)(v125 + 16) )
            {
              v150 = v30;
              v122 = sub_CDAF0(v125, (_QWORD *)v129);
              v30 = v150;
              if ( v122 )
                goto LABEL_257;
            }
          }
          *(_QWORD *)(v4 + 392) = v12;
          for ( k = v129; *(_QWORD *)(k + 80); k = *(_QWORD *)(k + 80) )
            ;
          v77 = *(int **)(k + 32);
          v78 = v12 + 48 * v30;
          v79 = *(int **)(v78 + 24);
          if ( v79 )
          {
            if ( v77 && *v77 != *v79 )
            {
              sub_DBD10(v4, "table %s has %d values for %d columns", *(const char **)(v78 + 16), *v77, *v79);
LABEL_257:
              *(_QWORD *)(v4 + 392) = v140;
              return 2;
            }
          }
          else
          {
            v79 = v77;
          }
          v148 = v30;
          sub_11EBA0(*(_QWORD *)v4, v79, (_WORD *)v132 + 27, (__int64 **)v132 + 1);
          v80 = v148;
          if ( v155 <= 1u )
          {
            *(_QWORD *)(v12 + 48 * v148 + 40) = (*(_BYTE *)(v129 + 5) & 0x20) != 0
                                              ? "multiple recursive references: %s"
                                              : "recursive reference in a subquery: %s";
            if ( v129 && *(_QWORD *)(v125 + 16) )
            {
              sub_CDAF0(v125, (_QWORD *)v129);
              v80 = v148;
            }
          }
          *(_QWORD *)(v12 + 48 * v80 + 40) = 0;
          *(_QWORD *)(v4 + 392) = v140;
LABEL_20:
          if ( (*(_BYTE *)(v9 + 61) & 2) != 0 && (unsigned int)sub_E4310(v4, (_QWORD *)v9) )
            return 2;
LABEL_9:
          ++v10;
          v9 += 104;
          if ( *v161 <= v10 )
            break;
          goto LABEL_10;
        }
      }
      else if ( byte_1BF000[v23] != byte_1BF000[v24] )
      {
        ++v19;
        v20 += 6;
        if ( v19 == *(_DWORD *)v12 )
          goto LABEL_62;
        goto LABEL_31;
      }
    }
  }
  v143 = *(_DWORD *)(v4 + 48);
  if ( v143 )
    return 2;
  v48 = *(_QWORD *)(a2 + 40);
  v49 = *(_DWORD *)v48;
  v50 = v48 + 112;
  v164 = v48 + 8;
  if ( *(_DWORD *)v48 - 1 > 0 )
  {
    v159 = 1;
    v126 = v4;
    while ( 1 )
    {
      v52 = *(_QWORD *)(v50 + 32);
      v131 = v159 - 1;
      if ( !*(_QWORD *)(v164 + 32) || !v52 )
        goto LABEL_99;
      v165 = (*(_BYTE *)(v50 + 60) & 0x20) == 0 ? 0x400000 : 1;
      v53 = *(_BYTE *)(v50 + 62) & 2;
      if ( (*(_BYTE *)(v50 + 60) & 4) != 0 )
      {
        if ( v53 || *(_QWORD *)(v50 + 72) )
        {
          sub_DBD10(v126, "a NATURAL join may not have an ON or USING clause", 0);
          return 2;
        }
        v54 = nullptr;
        if ( *(__int16 *)(v52 + 54) <= 0 )
        {
          if ( *(_DWORD *)(v126 + 48) )
            return 2;
LABEL_99:
          v51 = v159;
          goto LABEL_79;
        }
        v134 = v50;
        v55 = *(_QWORD *)(v50 + 32);
        v56 = 0;
        do
        {
          v57 = *(_QWORD *)(v55 + 8) + 16 * v56;
          if ( (*(_BYTE *)(v57 + 14) & 2) == 0 )
          {
            v58 = *(unsigned __int8 **)v57;
            if ( (unsigned int)sub_CFBE0(v48, 0, v131, *(unsigned __int8 **)v57, nullptr, nullptr, 1) )
            {
              v59 = sub_E0D90(v126, v54, nullptr);
              v54 = v59;
              if ( v59 )
              {
                v60 = 2LL * (*(_DWORD *)v59 - 1);
                v59[v60 + 1] = (__int64)sub_DC720(*(_QWORD *)v126, (const char *)v58);
              }
            }
          }
          ++v56;
        }
        while ( *(__int16 *)(v55 + 54) > (int)v56 );
        v52 = v55;
        v50 = v134;
        if ( v54 )
        {
          *(_BYTE *)(v134 + 62) |= 6u;
          *(_QWORD *)(v134 + 72) = v54;
        }
        if ( *(_DWORD *)(v126 + 48) )
          return 2;
        v53 = *(_BYTE *)(v134 + 62) & 2;
      }
      v157 = *(_DWORD **)(v50 + 72);
      if ( v53 )
      {
        v135 = 0;
        v139 = *(_QWORD *)v126;
        if ( **(int **)(v50 + 72) <= 0 )
        {
          v51 = v159;
          v49 = *(_DWORD *)v48;
          goto LABEL_79;
        }
        do
        {
          v65 = *(unsigned __int8 **)&v157[4 * v135 + 2];
          v162 = sub_CFB50(*(_QWORD *)(v52 + 8), *(_WORD *)(v52 + 54), v65);
          if ( v162 < 0 || !(unsigned int)sub_CFBE0(v48, 0, v131, v65, &v176, &v177, (*(_BYTE *)(v50 + 62) & 4) != 0) )
          {
            sub_DBD10(v126, "cannot join using column %s - column not present in both tables", (const char *)v65);
            return 2;
          }
          v66 = sub_DEE20(v139, v48, v176, v177);
          v67 = v176;
          if ( (*(_BYTE *)(v48 + 104LL * v176 + 70) & 8) != 0 )
          {
            v68 = *(_QWORD *)(*(_QWORD *)(v48 + 104LL * v176 + 48) + 32LL) + 24LL * v177;
            *(_BYTE *)(v68 + 25) |= 0x40u;
          }
          if ( (*(_BYTE *)(v48 + 68) & 0x40) != 0 )
          {
            v69 = nullptr;
            while ( (unsigned int)sub_CFBE0(v48, v67 + 1, v131, v65, &v176, &v177, (*(_BYTE *)(v50 + 62) & 4) != 0) )
            {
              v70 = v48 + 104LL * v176;
              if ( (*(_BYTE *)(v70 + 70) & 2) == 0 || (int)sub_C4870(*(_DWORD **)(v70 + 80), v65) < 0 )
              {
                sub_DBD10(v126, "ambiguous reference to %s in USING()", (const char *)v65);
                break;
              }
              v69 = sub_E0F20((__int64 *)v126, (int *)v69, (__int64)v66);
              v66 = sub_DEE20(v139, v48, v176, v177);
              v67 = v176;
              if ( (*(_BYTE *)(v48 + 104LL * v176 + 70) & 8) != 0 )
              {
                v71 = *(_QWORD *)(*(_QWORD *)(v48 + 104LL * v176 + 48) + 32LL) + 24LL * v177;
                *(_BYTE *)(v71 + 25) |= 0x40u;
              }
            }
            if ( v69 )
            {
              v72 = sub_E0F20((__int64 *)v126, (int *)v69, (__int64)v66);
              v66 = sub_E68C0(v126, v72, &off_23A8D0, 0);
            }
          }
          v51 = v159;
          v62 = sub_DEE20(v139, v48, v159, v162);
          if ( (*(_BYTE *)(v50 + 62) & 8) != 0 )
          {
            v63 = *(_QWORD *)(*(_QWORD *)(v50 + 40) + 32LL) + 24LL * v162;
            *(_BYTE *)(v63 + 25) |= 0x40u;
          }
          v64 = sub_F04A0((__int64 *)v126, 53, (__int64)v66, (__int64)v62);
          if ( v64 )
          {
            *((_DWORD *)v64 + 1) |= v165;
            *((_DWORD *)v64 + 13) = *((_DWORD *)v62 + 11);
          }
          ++v135;
          *(_QWORD *)(a2 + 48) = sub_F07D0(v126, *(_QWORD *)(a2 + 48), (__int64)v64);
        }
        while ( v135 < *v157 );
      }
      else
      {
        v51 = v159;
        if ( v157 )
        {
          sub_C4C40((__int64)v157, *(_DWORD *)(v50 + 64), v165);
          *(_QWORD *)(a2 + 48) = sub_F07D0(v126, *(_QWORD *)(a2 + 48), *(_QWORD *)(v50 + 72));
          *(_QWORD *)(v50 + 72) = 0;
        }
      }
      v49 = *(_DWORD *)v48;
LABEL_79:
      v50 += 104;
      v164 += 104;
      ++v159;
      if ( v49 - 1 <= v51 )
      {
        v4 = v126;
        break;
      }
    }
  }
  if ( *(int *)v171 <= 0 )
  {
    v175 = 0;
    v120 = *(int **)(a2 + 32);
    goto LABEL_239;
  }
  v81 = *(_BYTE *)v171[1];
  v163 = v171[1];
  if ( v81 == -76 )
  {
    v175 = 0;
  }
  else
  {
    v82 = (char **)(v171 + 4);
    v83 = *(_BYTE *)v171[1];
    v84 = 0;
    v85 = (char *)v171[1];
    do
    {
      if ( v83 == -115 && **((_BYTE **)v85 + 3) == 0xB4 )
        break;
      v84 |= *((_DWORD *)v85 + 1);
      if ( &v171[3 * (unsigned int)(*(_DWORD *)v171 - 1) + 4] == v82 )
      {
        v175 = v84;
        v120 = *(int **)(a2 + 32);
        goto LABEL_239;
      }
      v85 = *v82;
      v82 += 3;
      v83 = *v85;
    }
    while ( *v85 != -76 );
    v175 = v84;
  }
  v170 = 0;
  v173 = v171 + 1;
  v169 = *(_QWORD *)(*(_QWORD *)v4 + 48LL) & 0x44;
  v86 = v4;
  v87 = nullptr;
  v88 = v86;
  while ( 2 )
  {
    v175 |= *(_DWORD *)(v163 + 4);
    if ( v81 == -76 )
    {
      v153 = nullptr;
      if ( *v161 <= 0 )
        goto LABEL_247;
    }
    else
    {
      if ( v81 != -115 || **(_BYTE **)(v163 + 24) != 0xB4 )
      {
        v89 = &v173[3 * v170];
        v90 = sub_E0F20((__int64 *)v88, v87, v163);
        v87 = (int *)v90;
        if ( v90 )
        {
          v91 = &v90[3 * *(_DWORD *)v90 - 3];
          v91[2] = v89[1];
          *((_BYTE *)v91 + 25) = *((_BYTE *)v89 + 17) & 3 | *((_BYTE *)v91 + 25) & 0xFC;
          v89[1] = 0;
        }
        *v89 = 0;
        goto LABEL_165;
      }
      v153 = *(char **)(*(_QWORD *)(v163 + 16) + 8LL);
      if ( *v161 <= 0 )
      {
LABEL_219:
        if ( v153 )
        {
          sub_DBD10(v88, "no such table: %s", v153);
          goto LABEL_165;
        }
LABEL_247:
        sub_DBD10(v88, "no tables specified");
        goto LABEL_165;
      }
    }
    v92 = 0;
    v141 = 0;
    v127 = v161 + 2;
    do
    {
      v93 = *((_QWORD *)v127 + 4);
      v158 = *((const char **)v127 + 3);
      if ( !v158 )
        v158 = *(const char **)v93;
      if ( *(_BYTE *)(v123 + 103) )
        break;
      if ( (*((_BYTE *)v127 + 62) & 8) != 0 )
      {
        v160 = nullptr;
        v156 = *((_QWORD *)v127 + 5);
      }
      else
      {
        v94 = v153;
        if ( v153 )
        {
          for ( m = v158; ; ++m )
          {
            v96 = (unsigned __int8)*v94;
            v97 = *(unsigned __int8 *)m;
            if ( (_DWORD)v96 == (_DWORD)v97 )
            {
              if ( !*v94 )
                break;
            }
            else if ( byte_1BF000[v96] != byte_1BF000[v97] )
            {
              goto LABEL_217;
            }
            ++v94;
          }
        }
        v98 = *(_QWORD *)(v93 + 96);
        v156 = 0;
        v160 = "*";
        if ( v98 )
        {
          v99 = sub_CFB20(v123, v98);
          v160 = "*";
          if ( v99 >= 0 )
            v160 = *(const char **)(*(_QWORD *)(v123 + 32) + 32LL * v99);
        }
      }
      if ( *(__int16 *)(v93 + 54) <= 0 )
        goto LABEL_217;
      v100 = 0;
      while ( 1 )
      {
        v136 = v100;
        v102 = *(_QWORD *)(v93 + 8) + 16 * v100;
        v103 = *(unsigned __int8 **)v102;
        if ( v156 != 0 && v153 != nullptr )
        {
          v101 = *(_QWORD *)(v156 + 32);
          if ( (*(_BYTE *)(v101 + 24LL * (int)v100 + 25) & 3) != 2 )
            goto LABEL_186;
          v167 = v92;
          v112 = sub_CE380(v101 + 24 * v100 + 8, nullptr, (unsigned __int8 *)v153, nullptr);
          v92 = v167;
          if ( !v112 )
            goto LABEL_186;
          if ( (*(_BYTE *)(a2 + 6) & 2) != 0 )
            goto LABEL_193;
        }
        else if ( (*(_BYTE *)(a2 + 6) & 2) != 0 )
        {
          break;
        }
        if ( (*(_BYTE *)(v102 + 14) & 2) == 0 )
          break;
LABEL_186:
        if ( *(__int16 *)(v93 + 54) <= (int)++v100 )
          goto LABEL_217;
      }
      if ( v141 > 0 && !v153 && (*((_BYTE *)v127 + 62) & 2) != 0 && (int)sub_C4870(*((_DWORD **)v127 + 9), v103) >= 0 )
      {
        v92 = 1;
        goto LABEL_186;
      }
LABEL_193:
      v104 = sub_DEEF0(v123, 59, (const char *)v103);
      if ( *v161 <= 1 )
      {
LABEL_211:
        if ( *(_BYTE *)(v88 + 292) > 1u )
          goto LABEL_195;
      }
      else
      {
        if ( (v127[15] & 0x40) != 0 )
        {
          v113 = *v161 - 1 - v141;
          if ( v113 > 0 )
          {
            v168 = v87;
            v172 = v100;
            v114 = &v127[26 * (v113 - 1) + 26];
            v115 = v127;
            v116 = v114;
            do
            {
              v117 = v115 + 26;
              if ( (*((_BYTE *)v115 + 166) & 2) != 0 )
              {
                v118 = *((_DWORD **)v115 + 22);
                if ( v118 )
                {
                  if ( (int)sub_C4870(v118, v103) >= 0 )
                  {
                    v87 = v168;
                    v100 = v172;
                    goto LABEL_211;
                  }
                }
              }
              v115 = v117;
            }
            while ( v117 != v116 );
            v87 = v168;
            v100 = v172;
          }
        }
LABEL_195:
        v166 = sub_DEEF0(v123, 59, v158);
        v104 = sub_F04A0((__int64 *)v88, 141, (__int64)v166, (__int64)v104);
        if ( *(_BYTE *)(v88 + 292) > 1u )
        {
          v105 = *(__int64 **)(v163 + 16);
          if ( v105 )
          {
            v106 = *(__int64 ***)(v88 + 400);
            if ( v106 )
            {
              while ( v105 != *v106 )
              {
                v106 = (__int64 **)v106[3];
                if ( !v106 )
                  goto LABEL_202;
              }
              *v106 = v166;
            }
          }
        }
LABEL_202:
        if ( v160 )
        {
          v107 = sub_DEEF0(v123, 59, v160);
          v104 = sub_F04A0((__int64 *)v88, 141, (__int64)v107, (__int64)v104);
        }
      }
      v108 = sub_E0F20((__int64 *)v88, v87, (__int64)v104);
      v87 = (int *)v108;
      if ( v108 )
      {
        v109 = *(_DWORD *)v108 - 1;
        if ( (v174 & 0x800) != 0 && *(_BYTE *)(v88 + 292) <= 1u )
        {
          if ( v156 )
            v108[3 * v109 + 2] = (__int64)sub_DC720(v123, *(const char **)(*(_QWORD *)(v156 + 32) + 24LL * v136 + 16));
          else
            v108[3 * v109 + 2] = sub_E8280(v123, "%s.%s.%s", v160, v158, (const char *)v103);
          v92 = 1;
          BYTE1(v87[6 * v109 + 6]) = BYTE1(v87[6 * v109 + 6]) & 0xFC | 2;
        }
        else
        {
          if ( v169 == 4 )
            v110 = sub_E8280(v123, "%s.%s", v158, (const char *)v103);
          else
            v110 = (__int64)sub_DC720(v123, (const char *)v103);
          v92 = 1;
          v111 = &v87[6 * v109];
          *((_QWORD *)v111 + 2) = v110;
          *((_BYTE *)v111 + 25) &= 0xFCu;
        }
        goto LABEL_186;
      }
      v92 = 1;
LABEL_217:
      ++v141;
      v127 += 26;
    }
    while ( *v161 > v141 );
    if ( !v92 )
      goto LABEL_219;
LABEL_165:
    if ( *(_DWORD *)v171 > ++v170 )
    {
      v81 = *(_BYTE *)v173[3 * v170];
      v163 = v173[3 * v170];
      continue;
    }
    break;
  }
  v119 = v88;
  v120 = v87;
  v4 = v119;
  if ( v171 )
    sub_D7810(v123, v171);
  *(_QWORD *)(a2 + 32) = v120;
LABEL_239:
  if ( v120 )
  {
    if ( *v120 <= *(_DWORD *)(v123 + 144) )
    {
      if ( (v175 & 0x200004) != 0 )
        *(_DWORD *)(a2 + 4) |= 0x40000u;
      return v143;
    }
    sub_DBD10(v4, "too many columns in result set");
    return 2;
  }
  return v143;
}
