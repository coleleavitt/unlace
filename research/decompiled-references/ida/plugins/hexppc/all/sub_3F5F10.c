__int64 __fastcall sub_3F5F10(const __m128i *a1, double a2)
{
  __int64 v2; // r15
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int128 v10; // rdi
  __int128 v11; // rdi
  __int128 v12; // rdi
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r12
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // r14
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rsi
  char v28; // al
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rdx
  char v34; // al
  int v35; // ecx
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // r14d
  bool v42; // zf
  __int64 v43; // rbp
  int v44; // eax
  __int128 v45; // rdi
  __int128 v46; // rdi
  char *v47; // rbp
  char v48; // al
  __int64 v49; // rsi
  __int64 v50; // rbx
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // rbp
  __int64 v54; // r12
  __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // r14
  int v58; // edx
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  char v63; // di
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdx
  bool v66; // dl
  __int64 v67; // rbx
  __int64 v68; // rsi
  char *v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rax
  int v72; // ecx
  unsigned int v73; // edx
  __int64 v74; // r8
  __int64 v75; // rcx
  int v76; // edx
  unsigned int v77; // eax
  __int64 v78; // rt1
  __int64 v79; // rcx
  int v80; // edx
  int v81; // eax
  __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rsi
  __int64 v85; // rbx
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rax
  int v89; // edx
  _DWORD *v90; // rax
  __int64 v91; // rsi
  _DWORD *v92; // rax
  __int128 v93; // rdi
  __int64 v94; // rdx
  __int64 v95; // rbx
  char *v96; // r12
  char *v97; // rbp
  __int64 v98; // rax
  int v99; // edx
  __int64 v100; // rbp
  __int64 v101; // r12
  int v102; // ecx
  int v103; // eax
  __int128 v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rbp
  int v107; // ebp
  __int128 v108; // rdi
  __int64 v109; // rax
  int v110; // eax
  __int128 v111; // rdi
  __int64 v112; // rax
  unsigned __int8 *v113; // rdi
  __int64 v114; // r12
  __int128 v115; // rdi
  __int64 v116; // rax
  unsigned __int8 *v117; // r12
  __int128 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rdx
  int v121; // eax
  __int64 v122; // r8
  int v123; // eax
  int v124; // ecx
  __int64 v125; // rax
  int v126; // eax
  int v127; // ecx
  __m128i v128; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int8 *v129; // [rsp+10h] [rbp-168h]
  __int64 v130; // [rsp+18h] [rbp-160h]
  __int64 v131; // [rsp+20h] [rbp-158h]
  __int64 v132; // [rsp+28h] [rbp-150h]
  __int64 v133; // [rsp+38h] [rbp-140h] BYREF
  __int64 v134; // [rsp+40h] [rbp-138h] BYREF
  unsigned __int8 *v135; // [rsp+48h] [rbp-130h] BYREF
  __int64 v136; // [rsp+50h] [rbp-128h] BYREF
  __int64 v137; // [rsp+58h] [rbp-120h]
  __int64 v138; // [rsp+60h] [rbp-118h] BYREF
  __int128 v139; // [rsp+68h] [rbp-110h]
  __int128 v140; // [rsp+78h] [rbp-100h]
  __m128i v141; // [rsp+118h] [rbp-60h]
  __int64 v142; // [rsp+128h] [rbp-50h]
  unsigned __int64 v143; // [rsp+138h] [rbp-40h]

  v143 = __readfsqword(0x28u);
  v2 = a1[2].m128i_i64[0];
  switch ( *(_DWORD *)v2 )
  {
    case 4:
      v33 = a1[2].m128i_i64[1];
      v34 = *(_BYTE *)(v2 + 32);
      v35 = *(_DWORD *)(v33 + 360);
      if ( v34 != 1 )
        goto LABEL_50;
      v34 = *(_BYTE *)(v2 + 64);
      if ( v35 != *(_DWORD *)(v2 + 40)
        || *(_QWORD *)(v33 + 4416) == -1
        || (v91 = *(_QWORD *)(v33 + 4440), v91 == -1)
        || v34 != 5 )
      {
        if ( v34 != 1 || v35 != *(_DWORD *)(v2 + 72) || *(_QWORD *)(v33 + 4416) == -1 )
          return 0;
      }
      else
      {
        if ( sub_1CC3E0(a1->m128i_i64[1], v91, *(_QWORD *)(v2 + 24)) == *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8LL) )
        {
          sub_119B60(v2);
          ++a1[3].m128i_i32[0];
          return 0;
        }
        v33 = a1[2].m128i_i64[1];
        v34 = *(_BYTE *)(v2 + 32);
        v35 = *(_DWORD *)(v33 + 360);
LABEL_50:
        if ( *(_BYTE *)(v2 + 64) != 1 || *(_DWORD *)(v2 + 72) != v35 || *(_QWORD *)(v33 + 4416) == -1 )
          goto LABEL_51;
      }
      v86 = *(_QWORD *)(v33 + 4440);
      if ( v86 == -1 )
        goto LABEL_51;
      if ( v34 != 5 )
        return 0;
      if ( sub_1CC3E0(a1->m128i_i64[1], v86, *(_QWORD *)(v2 + 24)) != *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) )
      {
        v34 = *(_BYTE *)(v2 + 32);
LABEL_51:
        if ( v34 == 5 )
        {
          v36 = *(_QWORD *)(a1[2].m128i_i64[1] + 4448);
          if ( v36 != -1 )
          {
            v37 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL);
            if ( v37 == sub_1CC3E0(a1->m128i_i64[1], v36, *(_QWORD *)(a1[2].m128i_i64[0] + 24)) )
            {
              v38 = a1[1].m128i_i64[0];
              if ( *(_DWORD *)(v38 + 376) == 1 )
              {
                v39 = *(_QWORD *)(v38 + 64);
                v40 = **(unsigned int **)(v38 + 368);
                if ( (unsigned int)v40 >= *(_DWORD *)(v39 + 64) )
                  sub_3E6760(a2);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 528) + 8 * v40) + 76LL) == 1 )
                {
                  v138 = 0;
                  v139 = 0u;
                  v140 = 0;
                  sub_1245A0(v38, &v138, v2 + 64, 0);
                  if ( !sub_A6350(a1[1].m128i_i64[0], &v138, a1[1].m128i_i64[1], 0, 1u) )
                  {
                    *(_DWORD *)v2 = 61;
                    sub_119360(v2 + 32);
                    v120 = a1[1].m128i_i64[0];
                    v121 = *(_DWORD *)(v120 + 24);
                    BYTE1(v121) &= ~2u;
                    LOBYTE(v121) = v121 | 0x80;
                    *(_DWORD *)(v120 + 24) = v121;
                    ++a1[3].m128i_i32[0];
                  }
                  sub_90100((__int64)&v138);
                }
              }
            }
          }
        }
        return 0;
      }
      v100 = a1[2].m128i_i64[1];
      v101 = *(_QWORD *)(v100 + 4416);
      sub_119360(v2 + 32);
      *(_BYTE *)(v2 + 32) = 6;
      v102 = 8 * *(_DWORD *)(v100 + 84);
      if ( (unsigned __int64)v102 <= 0x3F )
        v101 &= ~(-1LL << v102);
      *(_QWORD *)(v2 + 40) = v101;
      sub_118F10((char *)(v2 + 32), a1[2].m128i_i64[1]);
      ++a1[3].m128i_i32[0];
      return 0;
    case 5:
      if ( !*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 1496) + 144LL)
        && (unsigned __int8)sub_3F58B0(a1[2].m128i_i64[1], (const __m128i *)a1[1].m128i_i64[0], v2) )
      {
        goto LABEL_4;
      }
      return 0;
    case 0xC:
      v5 = a1[2].m128i_i64[1];
      if ( *(_BYTE *)(v2 + 32) != 4 || *(_BYTE *)(v2 + 48) != 4 )
        goto LABEL_7;
      v70 = *(_QWORD *)(v2 + 40);
      v71 = *(_QWORD *)(v2 + 56);
      v72 = *(_DWORD *)v70;
      v73 = *(_DWORD *)v71 - 9;
      if ( (unsigned int)(*(_DWORD *)v70 - 9) > 1 )
        goto LABEL_112;
      if ( *(_BYTE *)(v70 + 32) == 4 )
      {
        v70 = *(_QWORD *)(v70 + 40);
        v72 = *(_DWORD *)v70;
LABEL_112:
        if ( v73 <= 1 )
        {
          if ( *(_BYTE *)(v71 + 32) != 4 )
            goto LABEL_7;
          v71 = *(_QWORD *)(v71 + 40);
        }
        if ( v72 == 20 )
        {
          if ( *(_DWORD *)v71 != 24 )
            goto LABEL_7;
          v94 = v70;
          v70 = v71;
          v71 = v94;
          goto LABEL_116;
        }
      }
      else
      {
        if ( v73 > 1 || *(_BYTE *)(v71 + 32) != 4 )
          goto LABEL_7;
        v71 = *(_QWORD *)(v71 + 40);
      }
      if ( v72 != 24 || *(_DWORD *)v71 != 20 )
        goto LABEL_7;
LABEL_116:
      if ( *(_BYTE *)(v71 + 32) != 4 || *(_BYTE *)(v71 + 48) != 4 )
        goto LABEL_7;
      v74 = *(_QWORD *)(v71 + 40);
      v75 = *(_QWORD *)(v71 + 56);
      v76 = *(_DWORD *)v74;
      v77 = *(_DWORD *)v75 - 9;
      if ( (unsigned int)(*(_DWORD *)v74 - 9) > 1 )
        goto LABEL_119;
      if ( *(_BYTE *)(v74 + 32) != 4 )
      {
        if ( v77 > 1 )
          goto LABEL_7;
LABEL_226:
        if ( *(_BYTE *)(v75 + 32) != 4 )
          goto LABEL_7;
        v75 = *(_QWORD *)(v75 + 40);
        goto LABEL_120;
      }
      v74 = *(_QWORD *)(v74 + 40);
      v76 = *(_DWORD *)v74;
LABEL_119:
      if ( v77 <= 1 )
        goto LABEL_226;
LABEL_120:
      if ( v76 == 32 )
      {
        if ( *(_DWORD *)v75 != 29 )
          goto LABEL_7;
LABEL_124:
        v130 = v75;
        v128.m128i_i64[0] = v74;
        if ( !(unsigned __int8)sub_11C340((char *)(v74 + 48), &v138, 1u)
          || (v129 = (unsigned __int8 *)v138) != nullptr
          || (v119 = v130 + 32,
              v130 = v128.m128i_i64[0],
              v128.m128i_i64[0] = v70 + 32,
              !sub_122120((unsigned __int8 *)(v70 + 32), v119, 0)) )
        {
          v5 = a1[2].m128i_i64[1];
          goto LABEL_7;
        }
        if ( !(unsigned __int8)sub_14EBF0(v70, &v134) || *(_BYTE *)(v130 + 32) != 4 )
          goto LABEL_250;
        v122 = *(_QWORD *)(v130 + 40);
        if ( *(_DWORD *)v122 == 20 )
        {
          v130 = *(_QWORD *)(v130 + 40);
          if ( sub_122120((unsigned __int8 *)(v122 + 32), v128.m128i_i64[0], 0)
            && (unsigned __int8)sub_11C340((char *)(v130 + 48), &v135, 0) )
          {
            goto LABEL_275;
          }
        }
        else if ( *(_DWORD *)v122 == 9 )
        {
          v123 = *(_DWORD *)(v122 + 36);
          if ( (unsigned int)(v123 - 1) <= 1 || v123 == 4 )
          {
            v130 = *(_QWORD *)(v130 + 40);
            sub_120000((__int64)&v138, (unsigned __int8 *)v128.m128i_i64[0]);
            if ( (unsigned __int8)sub_123970((unsigned __int64)&v138, v5, *(_QWORD *)(v70 + 24), *(_DWORD *)(v130 + 36))
              && sub_122120((unsigned __int8 *)&v138, v130 + 32, 0) )
            {
              v124 = 8 * *(_DWORD *)(v130 + 36);
              if ( (unsigned __int64)v124 <= 0x3F )
                v125 = 1LL << v124;
              else
                v125 = 0;
              v135 = (unsigned __int8 *)(v125 - 1);
              sub_119360((__int64)&v138);
LABEL_275:
              if ( (unsigned __int64)(int)v134 <= 0x3F )
                v129 = (unsigned __int8 *)(1LL << v134);
              if ( v129 - 1 == v135 )
              {
                sub_120000((__int64)&v136, (unsigned __int8 *)v128.m128i_i64[0]);
                *(_QWORD *)&v139 = 0;
                v138 = 0xFFFFFFFF00000000LL;
                sub_11CFD0((__int64)&v138, v5, 1LL << v134, SHIDWORD(v136), *(_QWORD *)(v2 + 24), 0);
                *(_DWORD *)v2 = 16;
                sub_118FD0((char *)(v2 + 32), (char *)&v136);
                sub_118FD0((char *)(v2 + 48), (char *)&v138);
                v126 = *(_DWORD *)(v2 + 36);
                v127 = *(_DWORD *)(v2 + 68);
                if ( v126 != v127 )
                {
                  *(_DWORD *)(v2 + 68) = v126;
                  sub_127CB0(v2, v5, 10, v127, 1);
                }
                sub_119360((__int64)&v138);
                sub_119360((__int64)&v136);
LABEL_4:
                ++a1[3].m128i_i32[0];
                return 0;
              }
              goto LABEL_250;
            }
            sub_119360((__int64)&v138);
          }
        }
LABEL_250:
        v5 = a1[2].m128i_i64[1];
        goto LABEL_7;
      }
      if ( v76 == 29 && *(_DWORD *)v75 == 32 )
      {
        v78 = v74;
        v74 = v75;
        v75 = v78;
        goto LABEL_124;
      }
LABEL_7:
      v6 = a1[1].m128i_i64[1];
      v134 = 0;
      v7 = a1[1].m128i_i64[0];
      v128.m128i_i64[0] = v6;
      v135 = nullptr;
      v8 = sub_118EA0(v2, &v134, 34);
      if ( v8 )
      {
        v9 = v134;
        if ( *(_BYTE *)v134 == 4 )
        {
          v92 = *(_DWORD **)(v134 + 8);
          if ( *v92 == 12 )
          {
            v9 = (__int64)(v92 + 8);
            v135 = (unsigned __int8 *)(v92 + 12);
            v134 = (__int64)(v92 + 8);
          }
        }
      }
      else
      {
        v87 = sub_118EA0(v2, &v134, 12);
        if ( !v87 )
          goto LABEL_12;
        v8 = sub_118EA0(v87, &v135, 34);
        if ( !v8 )
          goto LABEL_12;
        v9 = v134;
      }
      *((_QWORD *)&v10 + 1) = v7;
      *(_QWORD *)&v10 = v5;
      if ( sub_3E6A20(v10, v128.m128i_i64[0], v9, (char *)(v8 + 32), 1)
        && (*((_QWORD *)&v11 + 1) = v7,
            *(_QWORD *)&v11 = v5,
            v129 = (unsigned __int8 *)(v8 + 48),
            sub_3E6A20(v11, v128.m128i_i64[0], (__int64)v135, (char *)(v8 + 48), 0))
        || (*((_QWORD *)&v12 + 1) = v7,
            *(_QWORD *)&v12 = v5,
            sub_3E6A20(v12, v128.m128i_i64[0], (__int64)v135, (char *)(v8 + 32), 1))
        && (*((_QWORD *)&v93 + 1) = v7,
            *(_QWORD *)&v93 = v5,
            v129 = (unsigned __int8 *)(v8 + 48),
            sub_3E6A20(v93, v128.m128i_i64[0], v134, (char *)(v8 + 48), 0)) )
      {
        sub_120000((__int64)&v136, (unsigned __int8 *)(v8 + 32));
        sub_120000((__int64)&v138, v129);
        *(_DWORD *)v2 = 39;
        sub_118FD0((char *)(v2 + 32), (char *)&v136);
        sub_118FD0((char *)(v2 + 48), (char *)&v138);
        sub_119360((__int64)&v138);
        sub_119360((__int64)&v136);
        goto LABEL_4;
      }
LABEL_12:
      if ( a1[1].m128i_i64[1] == v2 && *(_BYTE *)(v2 + 32) == 4 )
      {
        v95 = *(_QWORD *)(v2 + 40);
        if ( (unsigned int)(*(_DWORD *)v95 - 12) <= 1 )
        {
          if ( *(_BYTE *)(v2 + 48) == 10 && **(_BYTE **)(v2 + 56) == 6 )
          {
            v97 = (char *)(v95 + 48);
            if ( (unsigned __int8)sub_11C340((char *)(v95 + 48), nullptr, 1u) )
            {
              v97 = (char *)(v95 + 32);
              v96 = (char *)(v2 + 48);
LABEL_191:
              sub_118FD0(v97, v96);
              goto LABEL_4;
            }
            v96 = (char *)(v2 + 48);
            if ( (unsigned __int8)sub_11C340((char *)(v95 + 32), nullptr, 1u) )
              goto LABEL_191;
          }
          else
          {
            v96 = (char *)(v2 + 48);
            if ( (unsigned __int8)sub_11C340((char *)(v2 + 48), nullptr, 1u) )
            {
              if ( *(_BYTE *)(v95 + 48) == 10 && **(_BYTE **)(v95 + 56) == 6 )
              {
                v97 = (char *)(v95 + 32);
                goto LABEL_191;
              }
              if ( *(_BYTE *)(v95 + 32) == 10 && **(_BYTE **)(v95 + 40) == 6 )
              {
                v97 = (char *)(v95 + 48);
                if ( !(unsigned __int8)sub_11C340((char *)(v95 + 48), nullptr, 1u) )
                  goto LABEL_191;
              }
            }
          }
        }
      }
      if ( (unsigned __int8)sub_3F5D40(a1[2].m128i_i64[1], a1[1].m128i_i64[0], v2) )
        goto LABEL_4;
LABEL_14:
      v13 = a1[2].m128i_i64[1];
      if ( *(_DWORD *)(v2 + 36) == *(_DWORD *)(v13 + 84)
        && (unsigned __int8)sub_3F4F20(v13, &v136, &v138, v2, a1->m128i_i64[1]) )
      {
        v14 = *(_DWORD *)v2;
        v15 = v136;
        if ( *(_DWORD *)v2 == 13 )
        {
          v15 = v136 - v138;
          v136 -= v138;
          v103 = *(_DWORD *)v2;
        }
        else if ( v14 == 19 )
        {
          v15 = v138 | v136;
          v136 |= v138;
          v103 = *(_DWORD *)v2;
        }
        else
        {
          if ( v14 != 12 )
          {
            v16 = a1[2].m128i_i64[1];
            goto LABEL_20;
          }
          v15 = v138 + v136;
          v136 += v138;
          v103 = *(_DWORD *)v2;
        }
        v16 = a1[2].m128i_i64[1];
        if ( v103 == 13 && *(_BYTE *)(v2 + 48) == 10 && **(_BYTE **)(v2 + 56) == 6 )
        {
          sub_11CFD0(v2 + 32, a1[2].m128i_i64[1], v15, *(_DWORD *)(v2 + 36), *(_QWORD *)(v2 + 24), 0);
LABEL_23:
          *(_DWORD *)v2 = 4;
          sub_119360(v2 + 48);
          v18 = a1[1].m128i_i64[0];
          ++a1[3].m128i_i32[0];
          v19 = *(_DWORD *)(v18 + 24);
          BYTE1(v19) &= ~2u;
          LOBYTE(v19) = v19 | 0x80;
          *(_DWORD *)(v18 + 24) = v19;
          return 0;
        }
LABEL_20:
        sub_119360(v2 + 32);
        *(_BYTE *)(v2 + 32) = 6;
        v17 = 8 * *(_DWORD *)(v16 + 84);
        if ( (unsigned __int64)v17 <= 0x3F )
          v15 &= ~(-1LL << v17);
        *(_QWORD *)(v2 + 40) = v15;
        sub_118F10((char *)(v2 + 32), a1[2].m128i_i64[1]);
        goto LABEL_23;
      }
      return 0;
    case 0xD:
    case 0x13:
      goto LABEL_14;
    case 0x14:
      v52 = sub_3F4FE0(a1[2].m128i_i64[1], (int **)&v135, (_DWORD *)v2);
      if ( v52 != -1 && *v135 == 1 )
      {
        v79 = a1[2].m128i_i64[1];
        if ( *(_DWORD *)(v79 + 468) == *((_DWORD *)v135 + 2) )
        {
          v80 = *(_DWORD *)(v79 + 472) + 31 - v52;
          v81 = 9;
          if ( *(_DWORD *)(v2 + 68) == 1 )
            v81 = 4;
          *(_DWORD *)v2 = v81;
          v138 = 0x100000001LL;
          LODWORD(v139) = v80;
          sub_121740(v2 + 32, (unsigned __int8 *)&v138);
          sub_119360((__int64)&v138);
          sub_119360(v2 + 48);
          v82 = a1[1].m128i_i64[0];
          ++a1[3].m128i_i32[0];
          v83 = *(_DWORD *)(v82 + 24);
          BYTE1(v83) &= ~2u;
          LOBYTE(v83) = v83 | 0x80;
          *(_DWORD *)(v82 + 24) = v83;
        }
      }
      if ( *(_BYTE *)(v2 + 32) != 4 )
        return 0;
      if ( **(_DWORD **)(v2 + 40) != 56 )
        return 0;
      v53 = a1[1].m128i_i64[0];
      if ( !(unsigned __int8)sub_11C340((char *)(v2 + 48), &v136, 0) )
        return 0;
      v54 = *(_QWORD *)(v2 + 40);
      if ( *(_BYTE *)(v54 + 64) != 8 )
        return 0;
      v55 = *(_QWORD *)(v54 + 72);
      v56 = *(_DWORD *)(v55 + 284);
      if ( (unsigned int)(v56 - 27) > 1 )
        return 0;
      v57 = *(_QWORD *)(v55 + 24);
      if ( !(unsigned __int8)sub_11C340((char *)(v57 + 80), &v138, 0) )
        return 0;
      v58 = 8 * *(_DWORD *)(v2 + 36);
      v59 = 0;
      if ( (unsigned __int64)v58 <= 0x3F )
        v59 = 1LL << v58;
      v60 = v59 - 1;
      v61 = v60 << v138;
      if ( v56 != 27 )
        v61 = v60 >> v138;
      if ( (v136 & ~v61) == 0 )
      {
        v66 = v56 == 27;
        goto LABEL_109;
      }
      v62 = 0;
      v63 = v58 - v138;
      v138 = v58 - v138;
      if ( (unsigned __int64)v58 <= 0x3F )
        v62 = 1LL << v58;
      v64 = v62 - 1;
      v65 = v64 >> v63;
      if ( v56 != 27 )
        v65 = v64 << v63;
      if ( (v136 & ~v65) == 0 )
      {
        v66 = v56 != 27;
LABEL_109:
        LOBYTE(v130) = v66;
        v67 = j__qalloc_or_throw();
        v68 = *(_QWORD *)(v54 + 24);
        v128.m128i_i64[0] = v67 + 32;
        v129 = (unsigned __int8 *)(v67 + 48);
        *(_QWORD *)(v67 + 40) = 0;
        *(_QWORD *)(v67 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v67 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v67 + 56) = 0;
        *(_QWORD *)(v67 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v67 + 72) = 0;
        sub_32C520(v67, v68);
        v69 = (char *)v128.m128i_i64[0];
        *(_DWORD *)v67 = 23 - (unsigned __int8)v130;
        sub_118FD0(v69, *(char **)(*(_QWORD *)(v54 + 72) + 24LL));
        sub_11CFD0(
          (__int64)v129,
          *(_QWORD *)(*(_QWORD *)(v53 + 64) + 1504LL),
          v138,
          *(_DWORD *)(v57 + 84),
          *(_QWORD *)(v54 + 24),
          0);
        *(_DWORD *)(v67 + 68) = *(_DWORD *)(v2 + 36);
        sub_119360(v2 + 32);
        *(_BYTE *)(v2 + 32) = 4;
        *(_QWORD *)(v2 + 40) = v67;
        *(_DWORD *)(v2 + 36) = *(_DWORD *)(v67 + 68);
        goto LABEL_4;
      }
      return 0;
    case 0x17:
    case 0x27:
      v20 = sub_118E60(a1[2].m128i_i64[0], &v135);
      if ( !v20 )
        return 0;
      v21 = *(_DWORD *)v2;
      if ( *(_DWORD *)v2 != 23 )
        goto LABEL_26;
      if ( (unsigned __int8)sub_11C340((char *)v20, &v138, 1u) && v138 == 30
        || (unsigned __int8)sub_11C340((char *)v20, &v138, 1u) && v138 == 31 )
      {
        goto LABEL_31;
      }
      v21 = *(_DWORD *)v2;
LABEL_26:
      if ( v21 == 39 && (unsigned __int8)sub_11C340((char *)v20, &v138, 1u) && !v138 )
      {
LABEL_31:
        if ( *v135 == 1 )
        {
          v22 = a1[2].m128i_i64[1];
          if ( *(_DWORD *)(v22 + 468) == *((_DWORD *)v135 + 2) || (v135[1] & 8) != 0 )
          {
            v23 = *(_DWORD *)(v22 + 472);
            v136 = 0x100000001LL;
            LODWORD(v137) = v23;
            if ( *(_DWORD *)v2 != 23
              || (v107 = *(_DWORD *)(v22 + 472)
                       + 31
                       - sub_326890(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL), *(_DWORD *)(v20 + 4), 1),
                  v138 = 0x100000001LL,
                  LODWORD(v139) = v107,
                  sub_121740((__int64)&v136, (unsigned __int8 *)&v138),
                  sub_119360((__int64)&v138),
                  *(_DWORD *)(a1[2].m128i_i64[1] + 472) == v107)
              || (*(_QWORD *)&v108 = a1[1].m128i_i64[0],
                  *((_QWORD *)&v108 + 1) = &v136,
                  v138 = v2,
                  (v109 = sub_125A00(v108, (__int64)&v138, 0)) != 0)
              && (*(_BYTE *)(v109 + 4) & 0x10) != 0
              && ((v110 = *(_DWORD *)v109, (unsigned int)(v110 - 35) <= 1) || v110 == 33) )
            {
              v24 = 9;
              if ( *(_DWORD *)(v2 + 68) == 1 )
                v24 = 4;
              *(_DWORD *)v2 = v24;
              sub_121740(v2 + 32, (unsigned __int8 *)&v136);
              sub_119360(v2 + 48);
              v25 = a1[1].m128i_i64[0];
              ++a1[3].m128i_i32[0];
              v26 = *(_DWORD *)(v25 + 24);
              BYTE1(v26) &= ~2u;
              LOBYTE(v26) = v26 | 0x80;
              *(_DWORD *)(v25 + 24) = v26;
              sub_119360((__int64)&v136);
            }
            else
            {
              sub_119360((__int64)&v136);
            }
          }
        }
      }
      return 0;
    case 0x20:
      if ( (unsigned __int8)sub_11C340((char *)(v2 + 48), &v138, 0) && !v138 )
      {
        v47 = (char *)(v2 + 32);
        if ( *(_BYTE *)(v2 + 32) == 4 )
        {
          v90 = *(_DWORD **)(v2 + 40);
          if ( *v90 == 9 )
            v47 = (char *)(v90 + 8);
        }
        if ( *((_DWORD *)v47 + 1) == 1
          && *v47 == 1
          && (unsigned __int8)sub_119290(a1[2].m128i_i64[1], *((_DWORD *)v47 + 2)) )
        {
          *(_QWORD *)&v139 = 0;
          v138 = 0xFFFFFFFF00000000LL;
          sub_118FD0((char *)&v138, v47);
          sub_118FD0((char *)(v2 + 32), (char *)&v138);
          sub_119360(v2 + 48);
          *(_DWORD *)v2 = 4;
          ++a1[3].m128i_i32[0];
          sub_119360((__int64)&v138);
        }
      }
      return 0;
    case 0x36:
      v48 = *(_BYTE *)(v2 + 64);
      if ( v48 == 1 )
      {
        v88 = a1[2].m128i_i64[1];
        v89 = *(_DWORD *)(v2 + 72);
        v51 = a1[2].m128i_i64[0];
        if ( v89 == *(_DWORD *)(v88 + 456)
          || v89 == *(_DWORD *)(v88 + 452) && (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 920) + 120LL) & 1) == 0 )
        {
          goto LABEL_89;
        }
      }
      else if ( v48 == 5 )
      {
        v49 = *(_QWORD *)(a1[2].m128i_i64[1] + 4448);
        if ( v49 != -1 )
        {
          v50 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8LL);
          if ( v50 == sub_1CC3E0(a1->m128i_i64[1], v49, *(_QWORD *)(v2 + 24)) )
          {
            v51 = a1[2].m128i_i64[0];
LABEL_89:
            sub_32C540(a1[1].m128i_i64[0], v51);
            ++a1[3].m128i_i32[0];
            return 0;
          }
        }
      }
      return 0;
    case 0x38:
      if ( *(_BYTE *)(v2 + 32) == 6 )
      {
        v29 = *(_QWORD *)(v2 + 40);
        goto LABEL_42;
      }
      if ( !(unsigned __int8)sub_3FE010(a1[1].m128i_i64[0], v2, a1[1].m128i_i64[1] == v2, &unk_421E80, 0) )
        return 0;
      goto LABEL_4;
    case 0x39:
      v27 = a1[1].m128i_i64[1];
      if ( v27 != v2
        && (*(_DWORD *)v27 != 4 && (*(_DWORD *)v27 != 67 || *(_DWORD *)(v27 + 36) != *(_DWORD *)(v27 + 68))
         || *(_QWORD *)(v27 + 40) != v2) )
      {
        goto LABEL_39;
      }
      v28 = *(_BYTE *)(v2 + 48);
      if ( (*(_BYTE *)(v2 + 4) & 0x40) == 0 )
        goto LABEL_40;
      if ( v28 == 1 )
      {
        v98 = a1[2].m128i_i64[1];
        v99 = *(_DWORD *)(v2 + 56);
        if ( v99 == *(_DWORD *)(v98 + 456)
          || v99 == *(_DWORD *)(v98 + 452)
          && ((*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 920) + 120LL) & 1) == 0 || *(_BYTE *)(v2 + 64) == 8) )
        {
          goto LABEL_139;
        }
      }
      else
      {
        if ( v28 == 5 )
        {
          v84 = *(_QWORD *)(a1[2].m128i_i64[1] + 4448);
          if ( v84 == -1 )
            return 0;
          v85 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8LL);
          if ( v85 == sub_1CC3E0(a1->m128i_i64[1], v84, *(_QWORD *)(v2 + 24)) )
          {
            v2 = a1[2].m128i_i64[0];
            v27 = a1[1].m128i_i64[1];
LABEL_139:
            sub_FD5F0(a1[1].m128i_i64[0], v27, v2);
            ++a1[3].m128i_i32[0];
            return 0;
          }
LABEL_39:
          v28 = *(_BYTE *)(v2 + 48);
        }
LABEL_40:
        if ( v28 == 6 )
        {
          v29 = *(_QWORD *)(v2 + 56);
LABEL_42:
          v30 = sub_3E63A0(v29, nullptr);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v2 + 24);
            v128 = _mm_loadu_si128(a1 + 1);
            sub_4004C0(&v138, *(_QWORD *)(v128.m128i_i64[0] + 64), v31);
            v32 = _mm_load_si128(&v128);
            v142 = v2;
            v141 = v32;
            v138 = (__int64)&off_4D74D8;
            if ( !(unsigned int)sub_4023E0(&v138, v30) )
              ++a1[3].m128i_i32[0];
            v142 = 0;
            v138 = (__int64)&off_4D74D8;
            v141 = 0;
            sub_4005B0(&v138);
          }
        }
      }
      return 0;
    case 0x46:
      v41 = *(unsigned __int8 *)(*(_QWORD *)(a1->m128i_i64[1] + 1496) + 144LL);
      if ( (_BYTE)v41 || *(_DWORD *)(v2 + 36) != 8 || *(_BYTE *)(v2 + 48) != 13 )
        return 0;
      v128.m128i_i64[0] = a1[1].m128i_i64[1];
      v129 = (unsigned __int8 *)a1[1].m128i_i64[0];
      if ( !(unsigned int)ecmp() )
        goto LABEL_64;
      if ( (unsigned int)ecmp() )
        return 0;
      v41 = 1;
LABEL_64:
      v42 = *(_BYTE *)(v2 + 32) == 4;
      v130 = *(_QWORD *)(*((_QWORD *)v129 + 8) + 1504LL);
      v133 = v128.m128i_i64[0];
      if ( v42 )
      {
        v43 = *(_QWORD *)(v2 + 40);
        v44 = *(_DWORD *)(v43 + 68);
        if ( v44 != 8 )
        {
          if ( !v43 )
            return 0;
          goto LABEL_67;
        }
LABEL_236:
        if ( !sub_3E60D0(v43) )
          return 0;
        v114 = *(_QWORD *)(v43 + 40);
        if ( !(_BYTE)v41 || *(_DWORD *)v43 == 21 )
        {
          v117 = (unsigned __int8 *)(v114 + 32);
LABEL_244:
          *((_QWORD *)&v118 + 1) = v133;
          v136 = 0xFFFFFFFF00000000LL;
          v137 = 0;
          if ( v128.m128i_i64[0] != v133 )
          {
            *(_QWORD *)&v118 = v129;
            if ( !(unsigned __int8)sub_152300(v118, (__int64)v117, v133, v128.m128i_i64[0], 0) )
            {
              sub_119360((__int64)&v136);
              return 0;
            }
          }
          sub_121740((__int64)&v136, v117);
          goto LABEL_74;
        }
        *(_QWORD *)&v115 = v129;
        *((_QWORD *)&v115 + 1) = v114 + 32;
        v116 = sub_125A00(v115, (__int64)&v133, 0);
        v43 = v116;
        if ( !v116 || *(_DWORD *)(v116 + 68) != 4 )
          return 0;
LABEL_241:
        if ( *(_DWORD *)v43 != 21 )
          return 0;
        if ( !(unsigned __int8)sub_11C340((char *)(v43 + 48), &v138, 0) )
          return 0;
        v117 = (unsigned __int8 *)(v43 + 32);
        if ( v138 != 0x80000000LL )
          return 0;
        goto LABEL_244;
      }
      v131 = v2 + 32;
      sub_120000((__int64)&v136, (unsigned __int8 *)(v2 + 32));
      sub_120000((__int64)&v138, (unsigned __int8 *)(v2 + 32));
      if ( !(unsigned __int8)sub_123870((unsigned __int64)&v136, v130, SHIDWORD(v136) / 2)
        || !(unsigned __int8)sub_123E10((unsigned __int64)&v138, v130, SHIDWORD(v138) / 2, 0)
        || (*(_QWORD *)&v104 = v129,
            *((_QWORD *)&v104 + 1) = &v138,
            v134 = v128.m128i_i64[0],
            v105 = sub_125A00(v104, (__int64)&v134, 0),
            (v106 = v105) == 0)
        || (*(_DWORD *)(v105 + 68) != 8 || !sub_122120((unsigned __int8 *)(v105 + 64), v131, 0) || !sub_3E60D0(v106))
        && (*(_DWORD *)(v106 + 68) != 4
         || *(_DWORD *)v106 != 4
         || !(unsigned __int8)sub_11C340((char *)(v106 + 32), &v135, 0)
         || v135 != (unsigned __int8 *)1127219200)
        || (*(_QWORD *)&v111 = v129,
            *((_QWORD *)&v111 + 1) = &v136,
            v112 = sub_125A00(v111, (__int64)&v133, 0),
            (v43 = v112) == 0)
        || (v132 = v112 + 64,
            v113 = (unsigned __int8 *)(v112 + 64),
            !sub_122120((unsigned __int8 *)(v112 + 64), (__int64)&v136, 0))
        && !sub_122120(v113, v131, 0) )
      {
        sub_119360((__int64)&v138);
        sub_119360((__int64)&v136);
        return 0;
      }
      sub_119360((__int64)&v138);
      sub_119360((__int64)&v136);
      v44 = *(_DWORD *)(v43 + 68);
      if ( v44 == 8 )
        goto LABEL_236;
LABEL_67:
      if ( v44 != 4 )
        return 0;
      if ( (_BYTE)v41 )
        goto LABEL_241;
      *((_QWORD *)&v45 + 1) = v133;
      v137 = 0;
      v136 = 0xFFFFFFFF00000000LL;
      if ( v128.m128i_i64[0] != v133 )
      {
        v138 = 0;
        *(_QWORD *)&v45 = v129;
        v139 = 0;
        v140 = 0;
        if ( !(unsigned __int8)sub_152300(v45, v43 + 32, v133, v128.m128i_i64[0], (__int64)&v138)
          || (*((_QWORD *)&v46 + 1) = v133,
              *(_QWORD *)&v46 = v129,
              !(unsigned __int8)sub_152300(v46, v43 + 48, v133, v128.m128i_i64[0], 0)) )
        {
          sub_151DC0((unsigned int *)&v138);
          sub_119360((__int64)&v136);
          return 0;
        }
        sub_151E70((int *)&v138);
        sub_151DC0((unsigned int *)&v138);
      }
      sub_1228A0((__int64)&v136, (unsigned __int8 *)v43);
LABEL_74:
      *(_DWORD *)v2 = 66 - v41;
      if ( SHIDWORD(v136) <= 3 )
        sub_11CDA0((char *)&v136, v130, 9, *(_QWORD *)(v2 + 24), 4);
      sub_118FD0((char *)(v2 + 32), (char *)&v136);
      sub_119360(v2 + 48);
      sub_119360((__int64)&v136);
      ++a1[3].m128i_i32[0];
      return 0;
    default:
      return 0;
  }
}

