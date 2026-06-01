__int64 __fastcall sub_378600(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // r12d
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int *v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  size_t v22; // r15
  unsigned __int64 v23; // rcx
  size_t v24; // r15
  __int64 v25; // r14
  int *v26; // rsi
  __int64 v27; // rdx
  int v28; // r15d
  int *v29; // rcx
  int *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbp
  _QWORD *v34; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r14
  const char *v39; // r12
  const char *v40; // rdx
  __int64 v41; // r15
  __int64 v42; // rbp
  unsigned __int64 v43; // rdx
  unsigned int v44; // r13d
  int v45; // r14d
  __int64 v46; // rax
  __int64 v47; // rbp
  unsigned __int64 v48; // rdx
  char v49; // cl
  unsigned int v50; // eax
  int v51; // eax
  bool v52; // al
  bool v53; // r15
  char v54; // r9
  char v55; // al
  __int64 v56; // rdi
  char v57; // r12
  int v58; // eax
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // r15
  int v62; // edx
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // rbp
  __int64 v65; // r14
  _QWORD *v66; // r12
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // r12
  int v71; // eax
  int v72; // edx
  int v73; // edx
  int v74; // edx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  int v79; // edx
  int v80; // [rsp+4h] [rbp-31Ch]
  int v81; // [rsp+4h] [rbp-31Ch]
  __int64 *v82; // [rsp+8h] [rbp-318h]
  char v83; // [rsp+8h] [rbp-318h]
  char v84; // [rsp+8h] [rbp-318h]
  int tinfo_size; // [rsp+10h] [rbp-310h]
  int v86; // [rsp+14h] [rbp-30Ch]
  unsigned int v87; // [rsp+18h] [rbp-308h]
  int v88; // [rsp+1Ch] [rbp-304h]
  unsigned __int64 v89; // [rsp+28h] [rbp-2F8h]
  unsigned __int64 v90; // [rsp+30h] [rbp-2F0h]
  __int64 v91; // [rsp+30h] [rbp-2F0h]
  unsigned __int64 v92; // [rsp+30h] [rbp-2F0h]
  unsigned __int64 v93; // [rsp+38h] [rbp-2E8h]
  char v95; // [rsp+46h] [rbp-2DAh]
  unsigned __int8 tinfo_details; // [rsp+47h] [rbp-2D9h]
  int v97; // [rsp+64h] [rbp-2BCh] BYREF
  int v98; // [rsp+68h] [rbp-2B8h] BYREF
  signed __int64 v99; // [rsp+70h] [rbp-2B0h]
  __int64 v100; // [rsp+78h] [rbp-2A8h] BYREF
  __int128 v101; // [rsp+80h] [rbp-2A0h]
  __int64 v102; // [rsp+90h] [rbp-290h]
  __int64 v103; // [rsp+98h] [rbp-288h]
  __int64 v104; // [rsp+A0h] [rbp-280h]
  __int128 v105; // [rsp+A8h] [rbp-278h]
  __int64 v106; // [rsp+B8h] [rbp-268h]
  __m128i v107; // [rsp+C0h] [rbp-260h] BYREF
  char v108; // [rsp+D0h] [rbp-250h]
  __int64 v109; // [rsp+D8h] [rbp-248h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-240h]
  __int64 v111; // [rsp+F0h] [rbp-230h]
  void *v112; // [rsp+F8h] [rbp-228h]
  size_t v113[2]; // [rsp+100h] [rbp-220h]
  void *src; // [rsp+110h] [rbp-210h]
  size_t n[2]; // [rsp+118h] [rbp-208h]
  __int64 v116; // [rsp+128h] [rbp-1F8h]
  unsigned __int64 v117; // [rsp+130h] [rbp-1F0h]
  __int64 v118; // [rsp+138h] [rbp-1E8h]
  __int64 tinfo_property; // [rsp+148h] [rbp-1D8h] BYREF
  unsigned __int64 v120; // [rsp+150h] [rbp-1D0h]
  __int64 v121; // [rsp+158h] [rbp-1C8h]
  int v122; // [rsp+160h] [rbp-1C0h]
  void *v123; // [rsp+168h] [rbp-1B8h]
  __int128 v124; // [rsp+170h] [rbp-1B0h]
  void *v125; // [rsp+180h] [rbp-1A0h]
  __int128 v126; // [rsp+188h] [rbp-198h]
  __int64 v127; // [rsp+198h] [rbp-188h]
  unsigned __int64 v128; // [rsp+1A0h] [rbp-180h]
  __int64 v129; // [rsp+1A8h] [rbp-178h]
  _QWORD v130[17]; // [rsp+1B8h] [rbp-168h] BYREF
  _QWORD v131[7]; // [rsp+240h] [rbp-E0h] BYREF
  __int128 v132; // [rsp+278h] [rbp-A8h]
  __int64 v133; // [rsp+288h] [rbp-98h]
  __int128 v134; // [rsp+290h] [rbp-90h]
  __int64 v135; // [rsp+2A0h] [rbp-80h]
  __int128 v136; // [rsp+2A8h] [rbp-78h]
  __int64 v137; // [rsp+2B8h] [rbp-68h]
  __int64 v138; // [rsp+2C0h] [rbp-60h]
  __int64 v139; // [rsp+2C8h] [rbp-58h]
  int v140; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v141; // [rsp+2E0h] [rbp-40h]

  v141 = __readfsqword(0x28u);
  v108 = 16;
  v100 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v106 = 0;
  v101 = 0;
  v105 = 0;
  v107 = 0;
  tinfo_details = get_tinfo_details();
  if ( !tinfo_details )
    goto LABEL_64;
  v4 = *(_QWORD *)(a1 + 1496);
  v95 = *(_BYTE *)(a1 + 320);
  if ( v95 )
  {
    v95 = 0;
  }
  else if ( (v108 & 0xF0u) - 208 <= 0x2F )
  {
    v95 = (*(_BYTE *)(v4 + 606) & 0x10) != 0;
  }
  sub_D0AF0((__int64)v130, v4, 0);
  memset(v131, 0, sizeof(v131));
  v133 = 0;
  v135 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v132 = 0;
  v134 = 0;
  v136 = 0;
  sub_D1250(v131);
  if ( v95 )
  {
    v5 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
    if ( v5 == 208 || (v6 = 16, v7 = 112, v5 == 64) )
    {
      v6 = 64;
      v7 = 64;
    }
    *(_DWORD *)(a1 + 72) = v6;
    sub_D14C0(v130, v7);
  }
  v88 = v102 & 0x200;
  v87 = *(_DWORD *)(a1 + 72);
  v86 = *(_DWORD *)(a1 + 440);
  if ( (_QWORD)v101 )
  {
    v80 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = v100 + 80 * v8;
      tinfo_size = get_tinfo_size();
      v10 = tinfo_size;
      sub_1C5A50((__int64)&v98, a1, v9, tinfo_size);
      if ( *(_BYTE *)(a1 + 320) )
        goto LABEL_21;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) )
        break;
      if ( v95 )
        goto LABEL_126;
LABEL_13:
      if ( v88 )
        goto LABEL_20;
      v11 = v108 & 0xF0;
      if ( (v108 & 0xF0) == 0xC0 )
        v11 = HIDWORD(v102);
      if ( v11 <= 0x10 )
        v11 = getinf();
      if ( v87 != v11 )
      {
LABEL_20:
        v12 = sub_1C2F40(&v98);
        if ( v12 != -1 && *(_QWORD *)(a1 + 144) > v12 )
          goto LABEL_94;
      }
LABEL_21:
      v13 = tinfo_size;
      v82 = (__int64 *)(a1 + 432);
      if ( tinfo_size <= 0 )
        v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
      v14 = sub_1F0A80(v82, &v98, v13, 0);
      v97 = v14;
      if ( v14 >= v86 )
      {
        v15 = 13LL * v14;
        v16 = *(_QWORD *)(a1 + 432);
        v17 = (int *)(v16 + 8 * v15);
        if ( *v17 == 1 )
        {
          v50 = v108 & 0xF0;
          if ( (v108 & 0xF0) == 0xC0 )
            v50 = HIDWORD(v102);
          if ( v50 <= 0x10 )
          {
            v50 = getinf();
            if ( v50 <= 0x10 )
              v50 = getinf();
          }
          if ( v50 != 176 && v50 != 256 && !(unsigned __int8)getinf_flag() )
            goto LABEL_121;
          v51 = v87;
          if ( v87 <= 0x10 )
            v51 = getinf();
          if ( v51 == 176 || v51 == 256 || (unsigned __int8)getinf_flag() )
          {
LABEL_121:
            if ( !v88 || v98 != 1 )
            {
              if ( !under_debugger )
                sub_3835A0(52632);
LABEL_232:
              BUG();
            }
            if ( (v99 & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL)) >= v99 )
            {
              if ( !under_debugger )
                sub_3835A0(52633);
              goto LABEL_232;
            }
          }
          goto LABEL_94;
        }
        if ( !(unsigned __int8)sub_1F11A0(v16 + 8 * v15) || (unsigned __int8)sub_1C4520(v17, v17[22], &v98, tinfo_size) )
        {
          if ( !under_debugger )
            sub_3835A0(51584);
          goto LABEL_232;
        }
LABEL_27:
        v18 = *(_QWORD *)(a1 + 440);
        v97 = v18;
        v19 = (int)v18;
        v20 = (int)v18 + 1;
        if ( v20 != v18 )
        {
          v109 = 0;
          v111 = 1;
          v21 = *(_QWORD *)(a1 + 432);
          v112 = nullptr;
          src = nullptr;
          v116 = 0;
          v117 = 0xFFFFFFFF00000000LL;
          v118 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
          *(_OWORD *)v113 = 0;
          *(_OWORD *)n = 0;
          if ( v20 < v18 )
          {
            v91 = v9;
            v63 = (int)v18 + 1;
            v64 = v18;
            v89 = v63;
            v65 = 104 * v20;
            while ( 1 )
            {
              v66 = (_QWORD *)(v21 + v65);
              clear_tinfo_t();
              if ( v66[7] )
              {
                v66[8] = 0;
                qfree();
              }
              if ( v66[4] )
              {
                v66[5] = 0;
                qfree();
              }
              ++v63;
              v65 += 104;
              cleanup_argloc();
              if ( v63 >= v64 )
                break;
              v21 = *(_QWORD *)(a1 + 432);
            }
            v9 = v91;
            v10 = tinfo_size;
            *(_QWORD *)(a1 + 440) = v89;
          }
          else if ( (unsigned __int64)&v109 < v21 || (unsigned __int64)&v109 >= v21 + 104LL * *(_QWORD *)(a1 + 448) )
          {
            sub_882B0(v82, v20, (__int64)&v109);
          }
          else
          {
            v90 = (int)v18 + 1;
            LODWORD(tinfo_property) = 0;
            copy_argloc();
            v22 = v113[0];
            v123 = nullptr;
            v23 = v90;
            v124 = 0;
            v121 = si128.m128i_i64[1];
            v122 = v111;
            if ( v113[0] )
            {
              v123 = (void *)qalloc_or_throw();
              *((_QWORD *)&v124 + 1) = v22;
              memcpy(v123, v112, v22);
              *(_QWORD *)&v124 = v22;
              v23 = v90;
            }
            v24 = n[0];
            v125 = nullptr;
            v126 = 0;
            if ( n[0] )
            {
              v92 = v23;
              v125 = (void *)qalloc_or_throw();
              *((_QWORD *)&v126 + 1) = v24;
              memcpy(v125, src, v24);
              *(_QWORD *)&v126 = v24;
              v23 = v92;
            }
            v93 = v23;
            v127 = 0;
            copy_tinfo_t();
            v128 = v117;
            v129 = v118;
            sub_882B0(v82, v93, (__int64)&tinfo_property);
            clear_tinfo_t();
            if ( v125 )
            {
              *(_QWORD *)&v126 = 0;
              qfree();
            }
            if ( v123 )
            {
              *(_QWORD *)&v124 = 0;
              qfree();
            }
            cleanup_argloc();
          }
          clear_tinfo_t();
          if ( src )
          {
            n[0] = 0;
            qfree();
          }
          if ( v112 )
          {
            v113[0] = 0;
            qfree();
          }
          cleanup_argloc();
          v19 = v97;
        }
        v25 = *(_QWORD *)(a1 + 432) + 104 * v19;
        copy_argloc();
        *(_QWORD *)(v25 + 88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
        if ( (*(_BYTE *)a1 & 1) != 0 )
          *(_QWORD *)(v25 + 16) = *(_QWORD *)(a1 + 40);
        *(_DWORD *)(v25 + 24) |= 0x100u;
        v26 = *(int **)(a1 + 456);
        v27 = *(_QWORD *)(a1 + 464);
        v28 = v97;
        v29 = &v26[v27];
        if ( v26 != v29 )
        {
          v30 = *(int **)(a1 + 456);
          while ( v97 != *v30 )
          {
            if ( v29 == ++v30 )
              goto LABEL_163;
          }
          if ( v29 != v30 )
          {
            if ( !under_debugger )
              sub_3835A0(51603);
            goto LABEL_232;
          }
        }
LABEL_163:
        if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v27 + 1) )
        {
          v67 = qvector_reserve();
          v68 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v67;
          v29 = (int *)(v67 + 4 * v68);
        }
        *v29 = v28;
        v60 = *(_QWORD *)(a1 + 1264);
        ++*(_QWORD *)(a1 + 464);
        v61 = *(_QWORD *)(a1 + 1256);
        if ( !(96 * v60) )
          goto LABEL_172;
        while ( (unsigned int)sub_330B00((int *)v61, (int *)v25) )
        {
          v61 += 96;
          if ( v61 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
            goto LABEL_172;
        }
        if ( v61
          && ((*(_BYTE *)(v61 + 88) & 4) != 0
           || *(_BYTE *)(v61 + 48) && (unsigned __int8)sub_373BF0(a1, (__int64)&v100, v80, v61 + 48)) )
        {
          sub_1F0BC0(a1, v25, v61, 1);
          v62 = *(_DWORD *)(v25 + 88);
          v14 = v97;
          if ( v62 > v10 )
          {
            v14 = sub_1F0A80(v82, (int *)v25, v62, 0);
            if ( v97 != v14 )
            {
              if ( !under_debugger )
                sub_3835A0(52600);
              goto LABEL_232;
            }
          }
          tinfo_size = *(_DWORD *)(v61 + 80);
        }
        else
        {
LABEL_172:
          v14 = v97;
        }
        goto LABEL_79;
      }
      if ( v14 < 0 )
        goto LABEL_27;
LABEL_79:
      v36 = 13LL * v14;
      v37 = *(_QWORD *)(a1 + 432);
      v38 = v37 + 8 * v36;
      if ( *(_DWORD *)(v38 + 92) )
      {
        if ( !under_debugger )
          sub_3835A0(50216);
        goto LABEL_232;
      }
      if ( !(unsigned int)sub_1C2510((int *)(v37 + 8 * v36), &v98) )
      {
        if ( (*(_BYTE *)(v38 + 24) & 2) != 0 )
          goto LABEL_82;
        v52 = sub_32CEA0((_BYTE *)(v9 + 64), *(_QWORD *)(a1 + 1496));
        v53 = v52;
        if ( *(char *)(v38 + 25) >= 0 )
        {
          if ( tinfo_size > 0 )
            goto LABEL_148;
          goto LABEL_150;
        }
        if ( v52 && (get_tinfo_property() & 0xF) == 0xA )
        {
          if ( tinfo_size <= 0 )
          {
            v54 = 2;
            if ( *(_BYTE *)(a1 + 320) )
              v54 = 16;
            goto LABEL_140;
          }
LABEL_148:
          if ( (unsigned int)sub_1F5940(a1, &v97, tinfo_size) )
          {
            cleanup_argloc();
            tinfo_details = 0;
            goto LABEL_56;
          }
          if ( v38 != *(_QWORD *)(a1 + 432) + 104LL * v97 )
          {
            if ( !under_debugger )
              sub_3835A0(51718);
            goto LABEL_232;
          }
LABEL_150:
          v54 = 2;
          if ( *(_BYTE *)(a1 + 320) )
            v54 = 16;
          if ( v53 )
          {
LABEL_140:
            v83 = v54;
            v55 = sub_1EFD10(v38, *(_QWORD *)(a1 + 1504), (_BYTE *)(v9 + 64), v87, v54);
            v54 = v83;
            if ( !v55 )
              goto LABEL_153;
            if ( (a3 & 2) == 0
              || (v56 = *(_QWORD *)(v9 + 64), !(_BYTE)v56)
              || (v56 & 0xE) == 0 && (v56 & 0x30) != 0
              || (tinfo_property = 0,
                  tinfo_property = get_tinfo_property(),
                  v57 = get_tinfo_property(),
                  clear_tinfo_t(),
                  (v57 & 0x3F) == 0x30)
              || !*(_BYTE *)(a1 + 320) && sub_36FBF0(*(_QWORD *)(a1 + 1504), v9, v87, 1u) )
            {
LABEL_154:
              v58 = *(_DWORD *)(v38 + 24) & 2;
              goto LABEL_155;
            }
            *(_DWORD *)(v38 + 24) = *(_DWORD *)(v38 + 24) & 0xFFFBFFFD | 2;
          }
          else
          {
LABEL_153:
            if ( *(_BYTE *)(v38 + 80) )
              goto LABEL_154;
            v69 = *(_QWORD *)(a1 + 1504);
            v70 = *(int *)(v69 + 80);
            if ( tinfo_size <= 0 )
              tinfo_size = *(_DWORD *)(v38 + 88);
            v84 = v54;
            sub_1EEEB0(&tinfo_property, (_DWORD *)v38, (_QWORD *)v69, tinfo_size, 0);
            if ( !sub_1EFD10(v38, *(_QWORD *)(a1 + 1504), &tinfo_property, v87, v84)
              && !(unsigned __int8)sub_1EF960((_DWORD *)v38, *(_QWORD **)(a1 + 1504), v70, v87, v84) )
            {
              if ( *(_DWORD *)v38 != 1 || !((int)sub_1C2F40((_DWORD *)v38) % v70) )
              {
                if ( !under_debugger )
                  sub_3835A0(52631);
                goto LABEL_232;
              }
              sub_1EF960((_DWORD *)v38, *(_QWORD **)(a1 + 1504), 1u, v87, 0);
            }
            clear_tinfo_t();
            v58 = *(_DWORD *)(v38 + 24) & 2;
LABEL_155:
            if ( !v58 )
            {
              v59 = *(_QWORD *)(a1 + 1256);
              if ( 96LL * *(_QWORD *)(a1 + 1264) )
              {
                while ( (unsigned int)sub_330B00((int *)v59, (int *)v38) )
                {
                  v59 += 96;
                  if ( v59 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
                    goto LABEL_82;
                }
                if ( v59 && (*(_BYTE *)(v59 + 88) & 4) != 0 )
                  *(_DWORD *)(v38 + 24) |= 0x40000u;
              }
            }
          }
        }
LABEL_82:
        if ( v80 )
        {
LABEL_86:
          if ( (*(_BYTE *)(v38 + 24) & 4) != 0 )
            goto LABEL_92;
          if ( *(_QWORD *)(v9 + 24) )
          {
            v39 = *(const char **)(v9 + 16);
            goto LABEL_89;
          }
        }
        else
        {
          if ( *(_QWORD *)(v9 + 24) )
          {
            v39 = *(const char **)(v9 + 16);
            if ( !strcmp(v39, "this") )
            {
              sub_36AAA0(v38);
              goto LABEL_86;
            }
            if ( (*(_BYTE *)(v38 + 24) & 4) != 0 )
            {
LABEL_92:
              if ( (*(_BYTE *)(v9 + 72) & 0x10) != 0 )
                *(_DWORD *)(v38 + 24) |= 0x1000000u;
              goto LABEL_94;
            }
LABEL_89:
            v40 = v39;
LABEL_90:
            if ( !(unsigned __int8)sub_214110((_QWORD *)a1, v38, v40, 4) )
              sub_214940((_QWORD *)a1, v97);
            goto LABEL_92;
          }
          if ( (*(_BYTE *)(v38 + 24) & 4) != 0 )
            goto LABEL_92;
        }
        v40 = s1;
        goto LABEL_90;
      }
      if ( (a3 & 1) != 0 )
      {
        if ( !under_debugger )
          sub_3835A0(50217);
        goto LABEL_232;
      }
LABEL_94:
      cleanup_argloc();
      v8 = ++v80;
      if ( v80 >= (unsigned __int64)v101 )
        goto LABEL_95;
    }
    if ( sub_36FBF0(*(_QWORD *)(a1 + 1504), v9, v87, 0) )
      goto LABEL_94;
    if ( !v95 )
      goto LABEL_13;
LABEL_126:
    if ( !(unsigned __int8)sub_D3640((__int64)v130, (__int64)&v98, tinfo_size) )
      goto LABEL_94;
    goto LABEL_13;
  }
LABEL_95:
  v41 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL);
  if ( (unsigned __int8)getinf() )
    LODWORD(v42) = (unsigned __int8)getinf();
  else
    v42 = *(_QWORD *)(v41 + 120);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (a3 & 1) == 0 )
      goto LABEL_55;
    v71 = v102;
    v74 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v102;
    v73 = v74 & 1;
    goto LABEL_208;
  }
  v43 = *(_QWORD *)(v41 + 120);
  v44 = v42;
  if ( v43 >= (int)v42 || (v81 = v42 - v43, !*(_QWORD *)(a1 + 440)) )
  {
    if ( (a3 & 1) == 0 )
    {
LABEL_110:
      sub_377380(a1, 0, 0);
      goto LABEL_56;
    }
    v71 = v102;
    v72 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v102;
    v73 = v72 & 1;
LABEL_205:
    if ( v73 )
      *(_DWORD *)(a1 + 400) = v71 | 2;
    goto LABEL_110;
  }
  v45 = 0;
  v46 = 0;
  while ( 1 )
  {
    v47 = *(_QWORD *)(a1 + 432) + 104 * v46;
    if ( *(_DWORD *)(v47 + 88) == v43 && *(_DWORD *)v47 == 1 )
      break;
    v46 = ++v45;
    if ( (unsigned __int64)v45 >= *(_QWORD *)(a1 + 440) )
      goto LABEL_108;
LABEL_102:
    v43 = *(_QWORD *)(v41 + 120);
  }
  v120 = 0;
  v48 = *(_QWORD *)(v47 + 8) + v43;
  LODWORD(tinfo_property) = 1;
  v120 = v48;
  if ( (unsigned int)sub_1F0A80((__int64 *)(a1 + 432), (int *)&tinfo_property, v81, 0) == -1 )
    sub_1EF960((_DWORD *)v47, *(_QWORD **)(a1 + 1504), v44, v87, 2);
  ++v45;
  cleanup_argloc();
  v46 = v45;
  if ( (unsigned __int64)v45 < *(_QWORD *)(a1 + 440) )
    goto LABEL_102;
LABEL_108:
  v49 = *(_BYTE *)(a1 + 320);
  if ( (a3 & 1) != 0 )
  {
    v71 = v102;
    v79 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v102;
    v73 = v79 & 1;
    if ( v49 )
    {
LABEL_208:
      if ( (v71 & 1) != 0 )
      {
        v75 = *(_QWORD *)(a1 + 336);
        v76 = v106;
        *(_DWORD *)a1 |= 0x20u;
        v77 = _mm_loadu_si128((const __m128i *)(a1 + 344));
        v78 = _mm_loadu_si128(&v107);
        *(_QWORD *)(a1 + 336) = v76;
        v106 = v75;
        *(__m128i *)(a1 + 344) = v78;
        v107 = v77;
      }
      if ( v73 )
        *(_DWORD *)(a1 + 400) = v71 | 2;
      goto LABEL_55;
    }
    goto LABEL_205;
  }
  if ( !v49 )
    goto LABEL_110;
LABEL_55:
  *(_DWORD *)(a1 + 4) |= 0x40u;
LABEL_56:
  sub_198B20(v131);
  if ( v130[14] )
  {
    v130[15] = 0;
    qfree();
  }
  if ( v130[11] )
  {
    v130[12] = 0;
    qfree();
  }
  if ( v130[4] )
  {
    v130[5] = 0;
    qfree();
  }
  if ( v130[1] )
  {
    v130[2] = 0;
    qfree();
  }
LABEL_64:
  if ( v106 )
  {
    v107.m128i_i64[0] = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v31 = v100;
  if ( v100 )
  {
    v32 = v101;
    if ( (_QWORD)v101 )
    {
      v33 = 0;
      do
      {
        v34 = (_QWORD *)(v31 + 80 * v33);
        clear_tinfo_t();
        if ( v34[5] )
        {
          v34[6] = 0;
          qfree();
        }
        if ( v34[2] )
        {
          v34[3] = 0;
          qfree();
        }
        ++v33;
        cleanup_argloc();
        v31 = v100;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v101 = 0;
    qfree();
  }
  return tinfo_details;
}

