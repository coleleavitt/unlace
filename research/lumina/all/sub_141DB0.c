__int64 __fastcall sub_141DB0(__m128i *a1, __int64 a2, double a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r15
  __int8 v10; // al
  bool v11; // sf
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // rsi
  int v15; // ebx
  __int64 v16; // rbp
  unsigned int v17; // eax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // r12d
  const char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 (__fastcall *v33)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // al
  int v38; // eax
  __int64 v39; // r11
  __int64 v40; // rcx
  bool v41; // zf
  __int32 v42; // r13d
  __int64 v43; // rax
  unsigned __int64 *v44; // rax
  __int64 v45; // rdi
  int v46; // eax
  int v47; // ebp
  __int32 v48; // edx
  __int64 v49; // rbx
  unsigned __int8 *v50; // r12
  __int64 v51; // rdi
  int v52; // eax
  int v53; // edx
  int v54; // eax
  __int64 v55; // rdi
  int v56; // eax
  __int32 v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // rbp
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r11
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r11
  __int64 v69; // rsi
  __int64 v70; // r9
  __int64 v71; // rsi
  __int64 v72; // r8
  __int64 v73; // rsi
  __int64 v74; // rsi
  __int64 v75; // rdi
  bool v77; // cc
  __int32 v78; // r13d
  int v79; // r12d
  __int64 v80; // rbp
  __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  double v86; // rdx
  __int64 v87; // rdx
  __int16 v88; // ax
  const char *v89; // rsi
  __int64 v90; // r13
  __int64 v91; // r11
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // r12
  __int64 v95; // r13
  char *v96; // r8
  const char **v97; // rax
  const char *v98; // rcx
  const char *v99; // rdx
  char v100; // al
  const char **v101; // rax
  __int64 v102; // rax
  unsigned int v103; // ebx
  __int64 v104; // r13
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rsi
  __int64 v108; // rsi
  __int64 v109; // rsi
  __int64 v110; // [rsp-10h] [rbp-C8h]
  int v111; // [rsp-8h] [rbp-C0h]
  int v112; // [rsp+8h] [rbp-B0h]
  const char *v113; // [rsp+8h] [rbp-B0h]
  __int64 v114; // [rsp+10h] [rbp-A8h]
  __int64 v115; // [rsp+18h] [rbp-A0h]
  unsigned int v116; // [rsp+18h] [rbp-A0h]
  __int64 v117; // [rsp+20h] [rbp-98h]
  __int64 v118; // [rsp+28h] [rbp-90h]
  int v119; // [rsp+28h] [rbp-90h]
  __int64 v120; // [rsp+28h] [rbp-90h]
  __int64 v121; // [rsp+28h] [rbp-90h]
  __int64 v122; // [rsp+28h] [rbp-90h]
  __int64 v123; // [rsp+28h] [rbp-90h]
  __int64 v124; // [rsp+28h] [rbp-90h]
  __int64 v125; // [rsp+28h] [rbp-90h]
  __int64 v126; // [rsp+28h] [rbp-90h]
  __int64 v127; // [rsp+28h] [rbp-90h]
  __int64 v128; // [rsp+28h] [rbp-90h]
  __int64 v129; // [rsp+28h] [rbp-90h]
  __int64 v130; // [rsp+28h] [rbp-90h]
  unsigned int *v131; // [rsp+28h] [rbp-90h]
  __int64 v132; // [rsp+28h] [rbp-90h]
  __int64 v133; // [rsp+28h] [rbp-90h]
  __int64 v134; // [rsp+28h] [rbp-90h]
  __int64 v135; // [rsp+28h] [rbp-90h]
  __int64 v136; // [rsp+28h] [rbp-90h]
  __int64 v137; // [rsp+28h] [rbp-90h]
  __int64 v138; // [rsp+28h] [rbp-90h]
  __int64 v139; // [rsp+28h] [rbp-90h]
  unsigned int v140; // [rsp+30h] [rbp-88h]
  __int64 v141; // [rsp+30h] [rbp-88h]
  unsigned __int8 *v142; // [rsp+30h] [rbp-88h]
  unsigned int v143; // [rsp+30h] [rbp-88h]
  int v144; // [rsp+38h] [rbp-80h]
  __int64 v145; // [rsp+38h] [rbp-80h]
  __int64 v146; // [rsp+40h] [rbp-78h]
  unsigned int v147; // [rsp+48h] [rbp-70h]
  unsigned __int8 v148; // [rsp+4Fh] [rbp-69h]
  __m128i *v149[3]; // [rsp+50h] [rbp-68h] BYREF
  int v150; // [rsp+68h] [rbp-50h]
  __int16 v151; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v152; // [rsp+78h] [rbp-40h]

  v152 = __readfsqword(0x28u);
  if ( (unsigned int)sub_ECAE0(a1) )
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      86541,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
  v8 = *(_QWORD *)(a1->m128i_i64[0] + 24);
  v114 = a1->m128i_i64[0];
  if ( v8 )
    xmmword_241500(v8);
  v9 = a1->m128i_i64[0];
  v10 = a1[12].m128i_i8[5];
  v112 = 51;
  if ( v10 == 2 )
    goto LABEL_25;
  while ( 2 )
  {
    while ( v10 != 1 )
    {
      if ( v10 != 3 )
        goto LABEL_25;
      sub_11EAE0((__int64)a1, a2, (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))v4, v5, v6, v7);
      v10 = a1[12].m128i_i8[5];
    }
    if ( (a1[12].m128i_i8[6] & 3) != 0 )
    {
      v11 = a1[12].m128i_i8[4] < 0;
      a1[3].m128i_i32[1] = 17;
      v12 = 1;
      if ( v11 )
        v12 = sub_F15D0((__int64)a1, a2, v4, v5, v6, v7);
      goto LABEL_12;
    }
    if ( !*(_DWORD *)(v9 + 208) )
      *(_DWORD *)(v9 + 400) = 0;
    if ( (*(_BYTE *)(v9 + 110) & 0x82) != 0 && !*(_BYTE *)(v9 + 197) && a1[15].m128i_i64[1] )
    {
      a2 = (__int64)&a1[11].m128i_i64[1];
      sub_C20C0(*(_QWORD *)v9, &a1[11].m128i_i64[1], (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))v4);
    }
    ++*(_DWORD *)(v9 + 208);
    v37 = a1[12].m128i_i8[6];
    if ( (v37 & 0x40) == 0 )
    {
      ++*(_DWORD *)(v9 + 216);
      v37 = a1[12].m128i_i8[6];
    }
    if ( v37 < 0 )
    {
      ++*(_DWORD *)(v9 + 212);
      v37 = a1[12].m128i_i8[6];
    }
    a1[3].m128i_i32[0] = 0;
    a1[12].m128i_i8[5] = 2;
LABEL_26:
    v38 = v37 & 0xC;
    if ( !v38 )
    {
      ++*(_DWORD *)(v9 + 220);
      v54 = sub_137020(a1);
      --*(_DWORD *)(v9 + 220);
      v12 = v54;
      if ( v54 == 100 )
        goto LABEL_111;
      if ( a1[11].m128i_i64[1] > 0 )
      {
        a2 = (__int64)a1;
        sub_C3DE0(v9, (__int64)a1, (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))v4);
      }
      if ( v12 != 101 )
        goto LABEL_96;
      goto LABEL_58;
    }
    v39 = a1[6].m128i_i64[1];
    a2 = a1->m128i_i64[0];
    v115 = a1->m128i_i64[0];
    v117 = v39 + 56;
    v40 = 1;
    if ( (_BYTE)v38 != 4 )
      v40 = *(_BYTE *)(a2 + 51) & 1;
    if ( v39 != -56 )
    {
      a2 = 8;
      v140 = v40;
      v118 = a1[6].m128i_i64[1];
      sub_CD520(v39 + 56, 8, v4, v40, v6, v7);
      v40 = v140;
      v39 = v118;
    }
    v41 = a1[3].m128i_i32[1] == 7;
    a1[10].m128i_i64[0] = 0;
    if ( v41 )
    {
      if ( !*(_BYTE *)(v115 + 103) && !*(_BYTE *)(v115 + 104) )
      {
        sub_DBE60(v115);
        if ( a1[11].m128i_i64[1] <= 0 )
          goto LABEL_95;
        goto LABEL_121;
      }
      goto LABEL_94;
    }
    v42 = a1[9].m128i_i32[0];
    v6 = a1[12].m128i_i8[6] & 0xC;
    if ( (_DWORD)v40 )
    {
      v43 = a1[6].m128i_i64[1];
      v7 = v43 + 504;
      if ( v43 == -504 || (*(_BYTE *)(v43 + 524) & 0x10) == 0 )
      {
        v40 = 0;
        a2 = 0;
      }
      else
      {
        a2 = *(_QWORD *)(v43 + 512);
        v4 = (unsigned __int64)*(int *)(v43 + 520) >> 3;
        v40 = (unsigned int)v4;
        if ( (int)v4 > 0 )
        {
          v44 = *(unsigned __int64 **)(v43 + 512);
          v45 = a2 + 8LL * (unsigned int)(v4 - 1) + 8;
          do
          {
            v4 = *v44++;
            v42 += *(_DWORD *)(v4 + 8);
          }
          while ( (unsigned __int64 *)v45 != v44 );
        }
      }
    }
    else
    {
      v7 = 0;
      a2 = 0;
    }
    v46 = a1[3].m128i_i32[0];
    while ( 1 )
    {
      v47 = v46 + 1;
      if ( v46 >= v42 )
        break;
      v48 = a1[9].m128i_i32[0];
      if ( v46 >= v48 )
      {
        v51 = *(_QWORD *)a2;
        LODWORD(v49) = v46 - v48;
        v52 = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
        if ( (int)v49 >= v52 )
        {
          v53 = 0;
          do
          {
            ++v53;
            LODWORD(v49) = v49 - v52;
            v51 = *(_QWORD *)(a2 + 8LL * v53);
            v52 = *(_DWORD *)(v51 + 8);
          }
          while ( v52 <= (int)v49 );
        }
        v4 = *(_QWORD *)v51;
      }
      else
      {
        v4 = a1[8].m128i_u64[1];
        LODWORD(v49) = v46;
      }
      v49 = (int)v49;
      v50 = (unsigned __int8 *)(v4 + 24LL * (int)v49);
      if ( v7 && v50[1] == 0xFC )
      {
        if ( (int)v40 <= 0 )
        {
          if ( !(_DWORD)v40 )
            goto LABEL_71;
        }
        else
        {
          v55 = *((_QWORD *)v50 + 2);
          if ( *(_QWORD *)a2 != v55 )
          {
            v4 = a2 + 8;
            v56 = 0;
            while ( (_DWORD)v40 != ++v56 )
            {
              v4 += 8LL;
              if ( v55 == *(_QWORD *)(v4 - 8) )
                goto LABEL_44;
            }
LABEL_71:
            v148 = v6;
            v146 = v39;
            v147 = v40 + 1;
            v144 = v40;
            v141 = v7;
            a2 = (unsigned int)(8 * (v40 + 1));
            v119 = 8 * (v40 + 1);
            v57 = sub_E0020(v7, a2, v40 != 0);
            a1[3].m128i_i32[1] = v57;
            if ( v57 )
            {
              v77 = a1[11].m128i_i64[1] <= 0;
              a1[3].m128i_i32[0] = v47;
              if ( v77 )
                goto LABEL_95;
              goto LABEL_121;
            }
            v7 = v141;
            v39 = v146;
            v6 = v148;
            a2 = *(_QWORD *)(v141 + 8);
            *(_QWORD *)(a2 + 8LL * v144) = *((_QWORD *)v50 + 2);
            v40 = v147;
            *(_WORD *)(v141 + 20) = *(_WORD *)(v141 + 20) & 0xF240 | 0x10;
            *(_DWORD *)(v141 + 16) = v119;
            v42 += *(_DWORD *)(*((_QWORD *)v50 + 2) + 8LL);
          }
        }
      }
LABEL_44:
      if ( (_BYTE)v6 == 8 )
      {
        v4 = *v50;
        if ( (_BYTE)v4 != 0xB8 )
        {
          v46 = v47;
          if ( v47 <= 1 || (_BYTE)v4 != 64 )
            continue;
        }
      }
      a1[3].m128i_i32[0] = v47;
      if ( !*(_DWORD *)(v115 + 400) )
      {
        v149[0] = nullptr;
        v149[1] = nullptr;
        v149[2] = (__m128i *)0x3B9ACA0000000000LL;
        v150 = 0;
        v151 = 0;
        switch ( v50[1] )
        {
          case 0xF1:
            v130 = v39;
            v101 = *(const char ***)(*((_QWORD *)v50 + 2) + 8LL);
            goto LABEL_174;
          case 0xF2:
            v131 = *((unsigned int **)v50 + 2);
            v143 = *v131;
            if ( *v131 )
            {
              v102 = (int)v49;
              v103 = 1;
              v145 = v39;
              v104 = v102;
              do
              {
                v105 = 91;
                v106 = v131[v103];
                if ( v103 != 1 )
                  v105 = 44;
                ++v103;
                sub_DBBA0((__int64)v149, "%c%u", v105, v106);
              }
              while ( v143 >= v103 );
              v39 = v145;
              v49 = v104;
            }
            v132 = v39;
            sub_DFD90((__int64)v149, "]", 1);
            v39 = v132;
            goto LABEL_74;
          case 0xF3:
            v124 = v39;
            v86 = **((double **)v50 + 2);
            goto LABEL_153;
          case 0xF4:
            v125 = v39;
            a3 = **((double **)v50 + 2);
            goto LABEL_155;
          case 0xF5:
            v126 = v39;
            sub_DBBA0((__int64)v149, "vtab:%p", *(const void **)(*((_QWORD *)v50 + 2) + 16LL));
            v39 = v126;
            goto LABEL_74;
          case 0xF6:
            v87 = *((_QWORD *)v50 + 2);
            v88 = *(_WORD *)(v87 + 20);
            if ( (v88 & 2) == 0 )
            {
              if ( (v88 & 0x24) != 0 )
              {
                v124 = v39;
                v86 = *(double *)v87;
LABEL_153:
                sub_DBBA0((__int64)v149, "%lld", *(_QWORD *)&v86);
                v39 = v124;
                goto LABEL_74;
              }
              if ( (v88 & 8) != 0 )
              {
                v125 = v39;
                a3 = *(double *)v87;
LABEL_155:
                sub_DBBA0((__int64)v149, "%.16g", a3);
                v39 = v125;
                goto LABEL_74;
              }
              v89 = "(blob)";
              if ( (v88 & 1) != 0 )
                v89 = "NULL";
LABEL_160:
              v127 = v39;
              sub_DFDD0((__int64)v149, v89);
              v39 = v127;
LABEL_74:
              if ( (v151 & 7) != 0 && !*(_BYTE *)(v115 + 103) && !*(_BYTE *)(v115 + 104) )
              {
                v121 = v39;
                sub_DBE60(v115);
                v39 = v121;
              }
              goto LABEL_78;
            }
            v89 = *(const char **)(v87 + 8);
LABEL_159:
            if ( v89 )
              goto LABEL_160;
LABEL_78:
            v122 = v39;
            v60 = sub_DC130((__int64)v149);
            v63 = v122;
            if ( (a1[12].m128i_i8[6] & 0xC) == 8 )
            {
              v107 = *((int *)v50 + 1);
              if ( (*(_WORD *)(v122 + 76) & 0x9000) != 0 )
              {
                sub_C9430(v117, v107, v58, v59, v61, v62);
                v63 = v122;
              }
              else
              {
                *(_QWORD *)(v122 + 56) = v107;
                *(_WORD *)(v122 + 76) = 4;
              }
              v108 = *((int *)v50 + 2);
              if ( (*(_WORD *)(v63 + 132) & 0x9000) != 0 )
              {
                v139 = v63;
                sub_C9430(v63 + 112, v108, v58, v59, v61, v62);
                v63 = v139;
              }
              else
              {
                *(_QWORD *)(v63 + 112) = v108;
                *(_WORD *)(v63 + 132) = 4;
              }
              v109 = *((int *)v50 + 3);
              if ( (*(_WORD *)(v63 + 188) & 0x9000) != 0 )
              {
                v138 = v63;
                sub_C9430(v63 + 168, v109, v58, v59, v61, v62);
                v63 = v138;
              }
              else
              {
                *(_QWORD *)(v63 + 168) = v109;
                *(_WORD *)(v63 + 188) = 4;
              }
              a2 = (__int64)v60;
              sub_F11D0(v63 + 224, v60, -1, 1, (__int64 (__fastcall *)(__int64))sub_C91C0, v62);
              a1[12].m128i_i16[0] = 4;
            }
            else
            {
              if ( (*(_WORD *)(v122 + 76) & 0x9000) != 0 )
              {
                sub_C9430(v117, v49, v58, v59, v61, v62);
                v63 = v122;
              }
              else
              {
                *(_QWORD *)(v122 + 56) = v49;
                *(_WORD *)(v122 + 76) = 4;
              }
              v123 = v63;
              sub_F11D0(v63 + 112, off_23A020[*v50], -1, 1, nullptr, v62);
              v68 = v123;
              v69 = *((int *)v50 + 1);
              if ( (*(_WORD *)(v123 + 188) & 0x9000) != 0 )
              {
                sub_C9430(v123 + 168, v69, v64, v65, v66, v67);
                v68 = v123;
              }
              else
              {
                v70 = 4;
                *(_QWORD *)(v123 + 168) = v69;
                *(_WORD *)(v123 + 188) = 4;
              }
              v71 = *((int *)v50 + 2);
              if ( (*(_WORD *)(v68 + 244) & 0x9000) != 0 )
              {
                v136 = v68;
                sub_C9430(v68 + 224, v71, v64, v65, v66, v70);
                v68 = v136;
              }
              else
              {
                v72 = 4;
                *(_QWORD *)(v68 + 224) = v71;
                *(_WORD *)(v68 + 244) = 4;
              }
              v73 = *((int *)v50 + 3);
              if ( (*(_WORD *)(v68 + 300) & 0x9000) != 0 )
              {
                v135 = v68;
                sub_C9430(v68 + 280, v73, v64, v65, v72, v70);
                v68 = v135;
              }
              else
              {
                *(_QWORD *)(v68 + 280) = v73;
                *(_WORD *)(v68 + 300) = 4;
              }
              v74 = *((unsigned __int16 *)v50 + 1);
              if ( (*(_WORD *)(v68 + 412) & 0x9000) != 0 )
              {
                v134 = v68;
                sub_C9430(v68 + 392, v74, v64, v65, v72, v70);
                v68 = v134;
              }
              else
              {
                *(_QWORD *)(v68 + 392) = v74;
                v74 = 4;
                *(_WORD *)(v68 + 412) = 4;
              }
              if ( (*(_WORD *)(v68 + 468) & 0x9000) != 0 )
              {
                v137 = v68;
                sub_C93F0(v68 + 448, v74, v64, v65, v72, v70);
                v68 = v137;
              }
              else
              {
                *(_WORD *)(v68 + 468) = 1;
              }
              a2 = (__int64)v60;
              sub_F11D0(v68 + 336, v60, -1, 1, (__int64 (__fastcall *)(__int64))sub_C91C0, v70);
              v4 = 8;
              a1[12].m128i_i16[0] = 8;
            }
            a1[10].m128i_i64[0] = v117;
            if ( *(_BYTE *)(v115 + 103) )
            {
              a1[3].m128i_i32[1] = 7;
              goto LABEL_94;
            }
            a1[3].m128i_i32[1] = 0;
            break;
          case 0xF8:
            v90 = *((_QWORD *)v50 + 2);
            v128 = v39;
            sub_DBBA0((__int64)v149, "k(%d", *(unsigned __int16 *)(v90 + 6));
            v91 = v128;
            if ( *(_WORD *)(v90 + 6) )
            {
              v92 = (int)v49;
              v142 = v50;
              v93 = v90;
              v94 = 0;
              v95 = v92;
              do
              {
                v96 = "";
                v97 = *(const char ***)(v93 + 8LL * (int)v94 + 32);
                if ( v97 )
                {
                  v96 = (char *)*v97;
                  if ( !strcmp(*v97, "BINARY") )
                    v96 = "B";
                }
                v98 = "N.";
                v99 = "-";
                v100 = *(_BYTE *)(*(_QWORD *)(v93 + 24) + v94);
                if ( (v100 & 2) == 0 )
                  v98 = "";
                if ( (v100 & 1) == 0 )
                  v99 = "";
                sub_DBBA0((__int64)v149, ",%s%s%s", v99, v98, v96);
                ++v94;
              }
              while ( *(unsigned __int16 *)(v93 + 6) > (int)v94 );
              v91 = v128;
              v50 = v142;
              v49 = v95;
            }
            v129 = v91;
            sub_DFD90((__int64)v149, ")", 1);
            v39 = v129;
            goto LABEL_74;
          case 0xF9:
            v101 = *((const char ***)v50 + 2);
            v130 = v39;
LABEL_174:
            sub_DBBA0((__int64)v149, "%s(%d)", v101[7], *(char *)v101);
            v39 = v130;
            goto LABEL_74;
          case 0xFB:
            v89 = **((const char ***)v50 + 2);
            goto LABEL_159;
          case 0xFC:
            v89 = "program";
            goto LABEL_159;
          case 0xFD:
            v133 = v39;
            sub_DBBA0((__int64)v149, "%d", *((_DWORD *)v50 + 4));
            v39 = v133;
            goto LABEL_74;
          case 0xFE:
            v120 = v39;
            sub_DBBA0(
              (__int64)v149,
              "%.18s-%s",
              **((const char ***)v50 + 2),
              (const char *)*(&off_23A600 + *(unsigned __int8 *)(*((_QWORD *)v50 + 2) + 8LL)));
            v39 = v120;
            goto LABEL_74;
          default:
            v89 = *((const char **)v50 + 2);
            goto LABEL_159;
        }
LABEL_111:
        *(_DWORD *)(v9 + 80) = 100;
        v13 = 100;
        goto LABEL_112;
      }
      a2 = (__int64)"interrupted";
      a1[3].m128i_i32[1] = 9;
      sub_E8160(a1->m128i_i64, "interrupted", v4, v40);
LABEL_94:
      if ( a1[11].m128i_i64[1] <= 0 )
      {
LABEL_95:
        v12 = 1;
LABEL_96:
        if ( a1[12].m128i_i8[4] < 0 )
          v12 = sub_F15D0((__int64)a1, a2, v4, v40, v6, v7);
        goto LABEL_60;
      }
LABEL_121:
      a2 = (__int64)a1;
      sub_C3DE0(v9, (__int64)a1, (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))v4);
      goto LABEL_95;
    }
    v77 = a1[11].m128i_i64[1] <= 0;
    a1[3].m128i_i32[1] = 0;
    a1[3].m128i_i32[0] = v47;
    if ( !v77 )
    {
      a2 = (__int64)a1;
      sub_C3DE0(v9, (__int64)a1, (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))v4);
      if ( !*(_BYTE *)(v9 + 101) )
        goto LABEL_59;
      goto LABEL_125;
    }
LABEL_58:
    if ( !*(_BYTE *)(v9 + 101) )
      goto LABEL_59;
LABEL_125:
    v78 = 0;
    v79 = 0;
    if ( *(int *)(v9 + 40) <= 0 )
    {
      a1[3].m128i_i32[1] = 0;
      goto LABEL_59;
    }
    while ( 2 )
    {
      while ( 2 )
      {
        v4 = *(_QWORD *)(v9 + 32);
        v80 = 32LL * v79;
        v81 = *(_QWORD *)(v4 + v80 + 8);
        if ( !v81 )
        {
LABEL_135:
          if ( ++v79 >= *(_DWORD *)(v9 + 40) )
            goto LABEL_142;
          continue;
        }
        break;
      }
      if ( !*(_BYTE *)(v81 + 17) )
      {
        v4 = *(_QWORD *)(**(_QWORD **)(v81 + 8) + 296LL);
        if ( !v4 )
          goto LABEL_135;
        goto LABEL_128;
      }
      sub_CC740(*(_QWORD *)(v4 + v80 + 8));
      v4 = *(_QWORD *)(**(_QWORD **)(v81 + 8) + 296LL);
      if ( v4 )
      {
LABEL_128:
        v40 = *(unsigned int *)(v4 + 24);
        *(_DWORD *)(v4 + 24) = 0;
        if ( *(_BYTE *)(v81 + 17) )
        {
          v41 = (*(_DWORD *)(v81 + 20))-- == 1;
          if ( v41 )
          {
            v116 = v40;
            sub_CC7D0(v81, a2, v4);
            v40 = v116;
          }
        }
        if ( (int)v40 > 0 )
        {
          v6 = *(_QWORD *)(v9 + 352);
          if ( !v78 )
          {
            if ( v6 )
            {
              a2 = v9;
              v78 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v6)(
                      *(_QWORD *)(v9 + 360),
                      v9,
                      *(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL * v79));
            }
          }
        }
        goto LABEL_135;
      }
      if ( !*(_BYTE *)(v81 + 17) )
        goto LABEL_135;
      v41 = (*(_DWORD *)(v81 + 20))-- == 1;
      if ( !v41 )
        goto LABEL_135;
      ++v79;
      sub_CC7D0(v81, a2, 0);
      if ( v79 < *(_DWORD *)(v9 + 40) )
        continue;
      break;
    }
LABEL_142:
    a1[3].m128i_i32[1] = v78;
    v12 = 1;
    if ( !v78 )
LABEL_59:
      v12 = 101;
LABEL_60:
    *(_DWORD *)(v9 + 80) = v12;
    a2 = a1[3].m128i_u32[1];
    if ( (*(_BYTE *)(a1->m128i_i64[0] + 103) || (_DWORD)a2)
      && (unsigned int)sub_D42C0(a1->m128i_i64[0], a2, v4, v40, v6, v7) == 7 )
    {
      v11 = a1[12].m128i_i8[4] < 0;
      a1[3].m128i_i32[1] = 7;
      if ( v11 )
        v12 = 7;
    }
LABEL_12:
    v13 = *(_DWORD *)(v9 + 88) & v12;
    if ( v13 == 17 )
    {
      if ( --v112 )
      {
        LODWORD(v14) = 0;
        v15 = a1[3].m128i_i32[0];
        if ( a1 )
          v14 = a1[15].m128i_i64[1];
        v16 = a1->m128i_i64[0];
        v17 = sub_157230(a1->m128i_i64[0], v14, -1, a1[12].m128i_u8[4], (_DWORD)a1, (unsigned int)v149, 0);
        v20 = v110;
        v21 = v111;
        if ( v17 )
        {
          v22 = v17;
          if ( v17 == 7 && !*(_BYTE *)(v16 + 103) && !*(_BYTE *)(v16 + 104) )
            sub_DBE60(v16);
          v23 = (const char *)sub_D9DB0(*(_QWORD *)(v114 + 392), 1u, a3, v20, v21, v18, v19);
          a2 = a1[10].m128i_i64[1];
          if ( a2 )
          {
            v113 = v23;
            sub_C9250(v114, (_QWORD *)a2);
            v23 = v113;
          }
          if ( *(_BYTE *)(v114 + 103) )
          {
            a1[10].m128i_i64[1] = 0;
            a1[3].m128i_i32[1] = 7;
            v13 = 7;
          }
          else
          {
            a1[10].m128i_i64[1] = (__int64)sub_DC720(v114, v23);
            a2 = v22;
            v13 = sub_D42C0(v114, v22, v82, v83, v84, v85);
            a1[3].m128i_i32[1] = v13;
          }
          break;
        }
        sub_C6D30(v149[0], a1);
        a2 = (__int64)a1;
        sub_C9790((__int64)v149[0]->m128i_i64, a1, v24, v25, v26, v27);
        v28 = v149[0];
        v149[0][3].m128i_i32[1] = 0;
        sub_11E630((__int64)v28, (__int64)a1, v29, v30, v31, v32);
        sub_11EAE0((__int64)a1, (__int64)a1, v33, v34, v35, v36);
        if ( v15 >= 0 )
          a1[12].m128i_i8[3] = -2;
        v10 = a1[12].m128i_i8[5];
        v9 = a1->m128i_i64[0];
        if ( v10 != 2 )
          continue;
LABEL_25:
        v37 = a1[12].m128i_i8[6];
        goto LABEL_26;
      }
    }
    break;
  }
LABEL_112:
  v75 = *(_QWORD *)(v114 + 24);
  if ( v75 )
    xmmword_241510(v75, a2, v4);
  return v13;
}
