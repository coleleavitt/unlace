__int64 __fastcall sub_3780C0(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  __int64 v6; // rsi
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r12d
  unsigned int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  int *v19; // r14
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // rdx
  size_t v26; // r15
  __int64 v27; // rcx
  size_t v28; // r15
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdx
  int v32; // r15d
  int *v33; // rcx
  int *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rbp
  _QWORD *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r14
  const char *v45; // r12
  const char *v46; // rdx
  __int64 v47; // r15
  __int64 v48; // rbp
  unsigned __int64 v49; // rdx
  int v50; // r13d
  int v51; // r14d
  __int64 v52; // rax
  __int64 v53; // rbp
  unsigned __int64 v54; // rdx
  char v55; // cl
  unsigned int v56; // eax
  int v57; // eax
  bool v58; // al
  bool v59; // r15
  char v60; // r9
  char v61; // al
  __int64 v62; // rdi
  char v63; // r12
  int v64; // eax
  __int64 v65; // r12
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r15
  int v69; // edx
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // rbp
  __int64 v72; // r14
  _QWORD *v73; // r12
  __int64 v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // r12
  int v80; // eax
  int v81; // edx
  int v82; // edx
  int v83; // edx
  __int64 v84; // rcx
  __int64 v85; // rsi
  __m128i v86; // xmm0
  __m128i v87; // xmm1
  void *v88; // rax
  int v89; // edx
  unsigned int v90; // [rsp+4h] [rbp-31Ch]
  int v91; // [rsp+4h] [rbp-31Ch]
  __int64 *v92; // [rsp+8h] [rbp-318h]
  char v93; // [rsp+8h] [rbp-318h]
  char v94; // [rsp+8h] [rbp-318h]
  int tinfo_size; // [rsp+10h] [rbp-310h]
  int v96; // [rsp+14h] [rbp-30Ch]
  unsigned int v97; // [rsp+18h] [rbp-308h]
  int v98; // [rsp+1Ch] [rbp-304h]
  unsigned __int64 v99; // [rsp+28h] [rbp-2F8h]
  __int64 v100; // [rsp+30h] [rbp-2F0h]
  __int64 v101; // [rsp+30h] [rbp-2F0h]
  __int64 v102; // [rsp+30h] [rbp-2F0h]
  unsigned __int64 v103; // [rsp+38h] [rbp-2E8h]
  char v105; // [rsp+46h] [rbp-2DAh]
  unsigned __int8 tinfo_details; // [rsp+47h] [rbp-2D9h]
  int v107; // [rsp+64h] [rbp-2BCh] BYREF
  int v108; // [rsp+68h] [rbp-2B8h] BYREF
  signed __int64 v109; // [rsp+70h] [rbp-2B0h]
  __int64 v110; // [rsp+78h] [rbp-2A8h] BYREF
  __int128 v111; // [rsp+80h] [rbp-2A0h]
  __int64 v112; // [rsp+90h] [rbp-290h]
  __int64 v113; // [rsp+98h] [rbp-288h]
  __int64 v114; // [rsp+A0h] [rbp-280h]
  __int128 v115; // [rsp+A8h] [rbp-278h]
  __int64 v116; // [rsp+B8h] [rbp-268h]
  __m128i v117; // [rsp+C0h] [rbp-260h] BYREF
  char v118; // [rsp+D0h] [rbp-250h]
  __int64 v119; // [rsp+D8h] [rbp-248h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-240h]
  __int64 v121; // [rsp+F0h] [rbp-230h]
  void *v122; // [rsp+F8h] [rbp-228h]
  size_t v123[2]; // [rsp+100h] [rbp-220h]
  void *src; // [rsp+110h] [rbp-210h]
  size_t n[2]; // [rsp+118h] [rbp-208h]
  __int64 v126; // [rsp+128h] [rbp-1F8h]
  unsigned __int64 v127; // [rsp+130h] [rbp-1F0h]
  __int64 v128; // [rsp+138h] [rbp-1E8h]
  __int64 tinfo_property; // [rsp+148h] [rbp-1D8h] BYREF
  unsigned __int64 v130; // [rsp+150h] [rbp-1D0h]
  __int64 v131; // [rsp+158h] [rbp-1C8h]
  int v132; // [rsp+160h] [rbp-1C0h]
  __int64 v133; // [rsp+168h] [rbp-1B8h]
  __int128 v134; // [rsp+170h] [rbp-1B0h]
  void *v135; // [rsp+180h] [rbp-1A0h]
  __int128 v136; // [rsp+188h] [rbp-198h]
  __int64 v137; // [rsp+198h] [rbp-188h]
  unsigned __int64 v138; // [rsp+1A0h] [rbp-180h]
  __int64 v139; // [rsp+1A8h] [rbp-178h]
  __int64 v140; // [rsp+1B8h] [rbp-168h] BYREF
  __int64 v141; // [rsp+1C0h] [rbp-160h]
  __int64 v142; // [rsp+1C8h] [rbp-158h]
  __int64 v143; // [rsp+1D8h] [rbp-148h]
  __int64 v144; // [rsp+1E0h] [rbp-140h]
  __int64 v145; // [rsp+210h] [rbp-110h]
  __int64 v146; // [rsp+218h] [rbp-108h]
  __int64 v147; // [rsp+228h] [rbp-F8h]
  __int64 v148; // [rsp+230h] [rbp-F0h]
  __int64 v149[7]; // [rsp+240h] [rbp-E0h] BYREF
  __int128 v150; // [rsp+278h] [rbp-A8h]
  __int64 v151; // [rsp+288h] [rbp-98h]
  __int128 v152; // [rsp+290h] [rbp-90h]
  __int64 v153; // [rsp+2A0h] [rbp-80h]
  __int128 v154; // [rsp+2A8h] [rbp-78h]
  __int64 v155; // [rsp+2B8h] [rbp-68h]
  __int64 v156; // [rsp+2C0h] [rbp-60h]
  __int64 v157; // [rsp+2C8h] [rbp-58h]
  int v158; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v159; // [rsp+2E0h] [rbp-40h]

  v159 = __readfsqword(0x28u);
  v118 = 16;
  v110 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v116 = 0;
  v111 = 0;
  v115 = 0;
  v117 = 0;
  tinfo_details = get_tinfo_details();
  if ( !tinfo_details )
    goto LABEL_64;
  v6 = *(_QWORD *)(a1 + 1496);
  v105 = *(_BYTE *)(a1 + 320);
  if ( v105 )
  {
    v105 = 0;
  }
  else if ( (v118 & 0xF0u) - 208 <= 0x2F )
  {
    v105 = (*(_BYTE *)(v6 + 606) & 0x10) != 0;
  }
  sub_D10B0((__int64)&v140, v6, 0);
  memset(v149, 0, sizeof(v149));
  v151 = 0;
  v153 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v158 = 0;
  v150 = 0;
  v152 = 0;
  v154 = 0;
  sub_D1810(v149);
  if ( v105 )
  {
    v7 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
    if ( v7 == 208 || (v8 = 16, v9 = 112, v7 == 64) )
    {
      v8 = 64;
      v9 = 64;
    }
    *(_DWORD *)(a1 + 72) = v8;
    sub_D1A80(&v140, v9);
  }
  v98 = v112 & 0x200;
  v97 = *(_DWORD *)(a1 + 72);
  v96 = *(_DWORD *)(a1 + 440);
  if ( (_QWORD)v111 )
  {
    v90 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = v110 + 80 * v10;
      tinfo_size = get_tinfo_size();
      v12 = tinfo_size;
      sub_1C6010((__int64)&v108, a1, v11, (unsigned int)tinfo_size, 0.0);
      if ( *(_BYTE *)(a1 + 320) )
        goto LABEL_21;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) )
        break;
      if ( v105 )
        goto LABEL_126;
LABEL_13:
      if ( v98 )
        goto LABEL_20;
      v13 = v118 & 0xF0;
      if ( (v118 & 0xF0) == 0xC0 )
        v13 = HIDWORD(v112);
      if ( v13 <= 0x10 )
        v13 = getinf();
      if ( v97 != v13 )
      {
LABEL_20:
        v14 = sub_1C3500(&v108, 0.0);
        if ( v14 != -1 && *(_QWORD *)(a1 + 144) > v14 )
          goto LABEL_94;
      }
LABEL_21:
      v15 = tinfo_size;
      v92 = (__int64 *)(a1 + 432);
      if ( tinfo_size <= 0 )
        v15 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
      v16 = sub_1F06C0(v92, &v108, v15, 0, 0.0);
      v107 = v16;
      if ( v16 >= v96 )
      {
        v17 = 13LL * v16;
        v18 = *(_QWORD *)(a1 + 432);
        v19 = (int *)(v18 + 8 * v17);
        if ( *v19 == 1 )
        {
          v56 = v118 & 0xF0;
          if ( (v118 & 0xF0) == 0xC0 )
            v56 = HIDWORD(v112);
          if ( v56 <= 0x10 )
          {
            v56 = getinf();
            if ( v56 <= 0x10 )
              v56 = getinf();
          }
          if ( v56 != 176 && v56 != 256 && !(unsigned __int8)getinf_flag() )
            goto LABEL_121;
          v57 = v97;
          if ( v97 <= 0x10 )
            v57 = getinf();
          if ( v57 == 176 || v57 == 256 || (unsigned __int8)getinf_flag() )
          {
LABEL_121:
            if ( !v98 || v108 != 1 )
            {
              if ( !under_debugger )
                sub_383060(0xCD98u, 0.0);
LABEL_232:
              BUG();
            }
            if ( (v109 & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL)) >= v109 )
            {
              if ( !under_debugger )
                sub_383060(0xCD99u, 0.0);
              goto LABEL_232;
            }
          }
          goto LABEL_94;
        }
        if ( !(unsigned __int8)sub_1F0DE0(v18 + 8 * v17, 0.0)
          || (unsigned __int8)sub_1C4AE0(v19, v19[22], &v108, tinfo_size, 0.0) )
        {
          if ( !under_debugger )
            sub_383060(0xC980u, 0.0);
          goto LABEL_232;
        }
LABEL_27:
        v20 = *(_QWORD *)(a1 + 440);
        v107 = v20;
        v21 = (int)v20;
        v22 = (int)v20 + 1;
        if ( v22 != v20 )
        {
          v119 = 0;
          v121 = 1;
          v23 = *(_QWORD *)(a1 + 432);
          v122 = nullptr;
          src = nullptr;
          v126 = 0;
          v127 = 0xFFFFFFFF00000000LL;
          v128 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
          *(_OWORD *)v123 = 0;
          *(_OWORD *)n = 0;
          if ( v22 < v20 )
          {
            v101 = v11;
            v70 = (int)v20 + 1;
            v71 = v20;
            v99 = v70;
            v72 = 104 * v22;
            while ( 1 )
            {
              v73 = (_QWORD *)(v23 + v72);
              clear_tinfo_t();
              v74 = v73[7];
              if ( v74 )
              {
                v73[8] = 0;
                qfree(v74);
              }
              v75 = v73[4];
              if ( v75 )
              {
                v73[5] = 0;
                qfree(v75);
              }
              ++v70;
              v72 += 104;
              cleanup_argloc();
              if ( v70 >= v71 )
                break;
              v23 = *(_QWORD *)(a1 + 432);
            }
            v11 = v101;
            v12 = tinfo_size;
            *(_QWORD *)(a1 + 440) = v99;
          }
          else if ( (unsigned __int64)&v119 < v23 || (unsigned __int64)&v119 >= v23 + 104LL * *(_QWORD *)(a1 + 448) )
          {
            sub_88870(v92, v22, (__int64)&v119);
          }
          else
          {
            v24 = &v119;
            v100 = (int)v20 + 1;
            LODWORD(tinfo_property) = 0;
            copy_argloc();
            v26 = v123[0];
            v133 = 0;
            v27 = v100;
            v134 = 0;
            v131 = si128.m128i_i64[1];
            v132 = v121;
            if ( v123[0] )
            {
              v88 = (void *)qalloc_or_throw(v123[0], (__int64)&v119, v25, v100);
              v24 = (__int64 *)v122;
              v133 = (__int64)v88;
              *((_QWORD *)&v134 + 1) = v26;
              memcpy(v88, v122, v26);
              *(_QWORD *)&v134 = v26;
              v27 = v100;
            }
            v28 = n[0];
            v135 = nullptr;
            v136 = 0;
            if ( n[0] )
            {
              v102 = v27;
              v135 = (void *)qalloc_or_throw(n[0], (__int64)v24, v25, v27);
              *((_QWORD *)&v136 + 1) = v28;
              memcpy(v135, src, v28);
              *(_QWORD *)&v136 = v28;
              v27 = v102;
            }
            v103 = v27;
            v137 = 0;
            copy_tinfo_t();
            v138 = v127;
            v139 = v128;
            sub_88870(v92, v103, (__int64)&tinfo_property);
            clear_tinfo_t();
            if ( v135 )
            {
              *(_QWORD *)&v136 = 0;
              qfree((__int64)v135);
            }
            if ( v133 )
            {
              *(_QWORD *)&v134 = 0;
              qfree(v133);
            }
            cleanup_argloc();
          }
          clear_tinfo_t();
          if ( src )
          {
            n[0] = 0;
            qfree((__int64)src);
          }
          if ( v122 )
          {
            v123[0] = 0;
            qfree((__int64)v122);
          }
          cleanup_argloc();
          v21 = v107;
        }
        v29 = *(_QWORD *)(a1 + 432) + 104 * v21;
        copy_argloc();
        *(_QWORD *)(v29 + 88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
        if ( (*(_BYTE *)a1 & 1) != 0 )
          *(_QWORD *)(v29 + 16) = *(_QWORD *)(a1 + 40);
        *(_DWORD *)(v29 + 24) |= 0x100u;
        v30 = *(_QWORD *)(a1 + 456);
        v31 = *(_QWORD *)(a1 + 464);
        v32 = v107;
        v33 = (int *)(v30 + 4 * v31);
        if ( (int *)v30 != v33 )
        {
          v34 = *(int **)(a1 + 456);
          while ( v107 != *v34 )
          {
            if ( v33 == ++v34 )
              goto LABEL_163;
          }
          if ( v33 != v34 )
          {
            if ( !under_debugger )
              sub_383060(0xC993u, 0.0);
            goto LABEL_232;
          }
        }
LABEL_163:
        v66 = v31 + 1;
        if ( *(_QWORD *)(a1 + 472) < v66 )
        {
          v76 = qvector_reserve(a1 + 456, v30, v66, 4);
          v77 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v76;
          v33 = (int *)(v76 + 4 * v77);
        }
        *v33 = v32;
        v67 = *(_QWORD *)(a1 + 1264);
        ++*(_QWORD *)(a1 + 464);
        v68 = *(_QWORD *)(a1 + 1256);
        if ( !(96 * v67) )
          goto LABEL_172;
        while ( (unsigned int)sub_3307E0((int *)v68, (int *)v29, 0.0) )
        {
          v68 += 96;
          if ( v68 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
            goto LABEL_172;
        }
        if ( v68
          && ((*(_BYTE *)(v68 + 88) & 4) != 0
           || *(_BYTE *)(v68 + 48) && (unsigned __int8)sub_3736B0(a1, (__int64)&v110, v90, v68 + 48)) )
        {
          sub_1F0800(a1, v29, v68, 1);
          v69 = *(_DWORD *)(v29 + 88);
          v16 = v107;
          if ( v69 > v12 )
          {
            v16 = sub_1F06C0(v92, (int *)v29, v69, 0, 0.0);
            if ( v107 != v16 )
            {
              if ( !under_debugger )
                sub_383060(0xCD78u, 0.0);
              goto LABEL_232;
            }
          }
          tinfo_size = *(_DWORD *)(v68 + 80);
        }
        else
        {
LABEL_172:
          v16 = v107;
        }
        goto LABEL_79;
      }
      if ( v16 < 0 )
        goto LABEL_27;
LABEL_79:
      v42 = 13LL * v16;
      v43 = *(_QWORD *)(a1 + 432);
      v44 = v43 + 8 * v42;
      if ( *(_DWORD *)(v44 + 92) )
      {
        if ( !under_debugger )
          sub_383060(0xC428u, 0.0);
        goto LABEL_232;
      }
      if ( !(unsigned int)sub_1C2AD0((int *)(v43 + 8 * v42), &v108, 0.0) )
      {
        if ( (*(_BYTE *)(v44 + 24) & 2) != 0 )
          goto LABEL_82;
        v58 = sub_32CB80((_BYTE *)(v11 + 64), *(_QWORD *)(a1 + 1496), 0.0, a5);
        v59 = v58;
        if ( *(char *)(v44 + 25) >= 0 )
        {
          if ( tinfo_size > 0 )
            goto LABEL_148;
          goto LABEL_150;
        }
        if ( v58 && (get_tinfo_property() & 0xF) == 0xA )
        {
          if ( tinfo_size <= 0 )
          {
            v60 = 2;
            if ( *(_BYTE *)(a1 + 320) )
              v60 = 16;
            goto LABEL_140;
          }
LABEL_148:
          if ( (unsigned int)sub_1F5580(a1, &v107, tinfo_size, 0.0, a5) )
          {
            cleanup_argloc();
            tinfo_details = 0;
            goto LABEL_56;
          }
          if ( v44 != *(_QWORD *)(a1 + 432) + 104LL * v107 )
          {
            if ( !under_debugger )
              sub_383060(0xCA06u, 0.0);
            goto LABEL_232;
          }
LABEL_150:
          v60 = 2;
          if ( *(_BYTE *)(a1 + 320) )
            v60 = 16;
          if ( v59 )
          {
LABEL_140:
            v93 = v60;
            v61 = sub_1EF950(v44, *(_QWORD *)(a1 + 1504), (_BYTE *)(v11 + 64), v97, v60, 0.0);
            v60 = v93;
            if ( !v61 )
              goto LABEL_153;
            if ( (a3 & 2) == 0
              || (v62 = *(_QWORD *)(v11 + 64), !(_BYTE)v62)
              || (v62 & 0xE) == 0 && (v62 & 0x30) != 0
              || (tinfo_property = 0,
                  tinfo_property = get_tinfo_property(),
                  v63 = get_tinfo_property(),
                  clear_tinfo_t(),
                  (v63 & 0x3F) == 0x30)
              || !*(_BYTE *)(a1 + 320) && sub_36F6B0(*(_QWORD *)(a1 + 1504), v11, v97, 1u, 0.0) )
            {
LABEL_154:
              v64 = *(_DWORD *)(v44 + 24) & 2;
              goto LABEL_155;
            }
            *(_DWORD *)(v44 + 24) = *(_DWORD *)(v44 + 24) & 0xFFFBFFFD | 2;
          }
          else
          {
LABEL_153:
            if ( *(_BYTE *)(v44 + 80) )
              goto LABEL_154;
            v78 = *(_QWORD *)(a1 + 1504);
            v79 = *(int *)(v78 + 80);
            if ( tinfo_size <= 0 )
              tinfo_size = *(_DWORD *)(v44 + 88);
            v94 = v60;
            sub_1EEAF0(&tinfo_property, (_DWORD *)v44, (_QWORD *)v78, tinfo_size, 0, 0.0);
            if ( !sub_1EF950(v44, *(_QWORD *)(a1 + 1504), &tinfo_property, v97, v94, 0.0)
              && !(unsigned __int8)sub_1EF5A0((_DWORD *)v44, *(_QWORD **)(a1 + 1504), v79, v97, v94, 0.0) )
            {
              if ( *(_DWORD *)v44 != 1 || !((int)sub_1C3500((_DWORD *)v44, 0.0) % v79) )
              {
                if ( !under_debugger )
                  sub_383060(0xCD97u, 0.0);
                goto LABEL_232;
              }
              sub_1EF5A0((_DWORD *)v44, *(_QWORD **)(a1 + 1504), 1, v97, 0, 0.0);
            }
            clear_tinfo_t();
            v64 = *(_DWORD *)(v44 + 24) & 2;
LABEL_155:
            if ( !v64 )
            {
              v65 = *(_QWORD *)(a1 + 1256);
              if ( 96LL * *(_QWORD *)(a1 + 1264) )
              {
                while ( (unsigned int)sub_3307E0((int *)v65, (int *)v44, 0.0) )
                {
                  v65 += 96;
                  if ( v65 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
                    goto LABEL_82;
                }
                if ( v65 && (*(_BYTE *)(v65 + 88) & 4) != 0 )
                  *(_DWORD *)(v44 + 24) |= 0x40000u;
              }
            }
          }
        }
LABEL_82:
        if ( v90 )
        {
LABEL_86:
          if ( (*(_BYTE *)(v44 + 24) & 4) != 0 )
            goto LABEL_92;
          if ( *(_QWORD *)(v11 + 24) )
          {
            v45 = *(const char **)(v11 + 16);
            goto LABEL_89;
          }
        }
        else
        {
          if ( *(_QWORD *)(v11 + 24) )
          {
            v45 = *(const char **)(v11 + 16);
            if ( !strcmp(v45, "this") )
            {
              sub_36A560(v44);
              goto LABEL_86;
            }
            if ( (*(_BYTE *)(v44 + 24) & 4) != 0 )
            {
LABEL_92:
              if ( (*(_BYTE *)(v11 + 72) & 0x10) != 0 )
                *(_DWORD *)(v44 + 24) |= 0x1000000u;
              goto LABEL_94;
            }
LABEL_89:
            v46 = v45;
LABEL_90:
            if ( !(unsigned __int8)sub_213D50((_QWORD *)a1, v44, v46, 4) )
              sub_214580((_QWORD *)a1, v107, 0.0);
            goto LABEL_92;
          }
          if ( (*(_BYTE *)(v44 + 24) & 4) != 0 )
            goto LABEL_92;
        }
        v46 = s1;
        goto LABEL_90;
      }
      if ( (a3 & 1) != 0 )
      {
        if ( !under_debugger )
          sub_383060(0xC429u, 0.0);
        goto LABEL_232;
      }
LABEL_94:
      cleanup_argloc();
      v10 = (int)++v90;
      if ( (int)v90 >= (unsigned __int64)v111 )
        goto LABEL_95;
    }
    if ( sub_36F6B0(*(_QWORD *)(a1 + 1504), v11, v97, 0, 0.0) )
      goto LABEL_94;
    if ( !v105 )
      goto LABEL_13;
LABEL_126:
    if ( !(unsigned __int8)sub_D3C00((__int64)&v140, (__int64)&v108, tinfo_size) )
      goto LABEL_94;
    goto LABEL_13;
  }
LABEL_95:
  v47 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL);
  if ( (unsigned __int8)getinf() )
    LODWORD(v48) = (unsigned __int8)getinf();
  else
    v48 = *(_QWORD *)(v47 + 120);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (a3 & 1) == 0 )
      goto LABEL_55;
    v80 = v112;
    v83 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v112;
    v82 = v83 & 1;
    goto LABEL_208;
  }
  v49 = *(_QWORD *)(v47 + 120);
  v50 = v48;
  if ( v49 >= (int)v48 || (v91 = v48 - v49, !*(_QWORD *)(a1 + 440)) )
  {
    if ( (a3 & 1) == 0 )
    {
LABEL_110:
      sub_376E40(a1, 0, 0);
      goto LABEL_56;
    }
    v80 = v112;
    v81 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v112;
    v82 = v81 & 1;
LABEL_205:
    if ( v82 )
      *(_DWORD *)(a1 + 400) = v80 | 2;
    goto LABEL_110;
  }
  v51 = 0;
  v52 = 0;
  while ( 1 )
  {
    v53 = *(_QWORD *)(a1 + 432) + 104 * v52;
    if ( *(_DWORD *)(v53 + 88) == v49 && *(_DWORD *)v53 == 1 )
      break;
    v52 = ++v51;
    if ( (unsigned __int64)v51 >= *(_QWORD *)(a1 + 440) )
      goto LABEL_108;
LABEL_102:
    v49 = *(_QWORD *)(v47 + 120);
  }
  v130 = 0;
  v54 = *(_QWORD *)(v53 + 8) + v49;
  LODWORD(tinfo_property) = 1;
  v130 = v54;
  if ( (unsigned int)sub_1F06C0((__int64 *)(a1 + 432), (int *)&tinfo_property, v91, 0, 0.0) == -1 )
    sub_1EF5A0((_DWORD *)v53, *(_QWORD **)(a1 + 1504), v50, v97, 2, 0.0);
  ++v51;
  cleanup_argloc();
  v52 = v51;
  if ( (unsigned __int64)v51 < *(_QWORD *)(a1 + 440) )
    goto LABEL_102;
LABEL_108:
  v55 = *(_BYTE *)(a1 + 320);
  if ( (a3 & 1) != 0 )
  {
    v80 = v112;
    v89 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v112;
    v82 = v89 & 1;
    if ( v55 )
    {
LABEL_208:
      if ( (v80 & 1) != 0 )
      {
        v84 = *(_QWORD *)(a1 + 336);
        v85 = v116;
        *(_DWORD *)a1 |= 0x20u;
        v86 = _mm_loadu_si128((const __m128i *)(a1 + 344));
        v87 = _mm_loadu_si128(&v117);
        *(_QWORD *)(a1 + 336) = v85;
        v116 = v84;
        *(__m128i *)(a1 + 344) = v87;
        v117 = v86;
      }
      if ( v82 )
        *(_DWORD *)(a1 + 400) = v80 | 2;
      goto LABEL_55;
    }
    goto LABEL_205;
  }
  if ( !v55 )
    goto LABEL_110;
LABEL_55:
  *(_DWORD *)(a1 + 4) |= 0x40u;
LABEL_56:
  sub_1990E0(v149);
  if ( v147 )
  {
    v148 = 0;
    qfree(v147);
  }
  if ( v145 )
  {
    v146 = 0;
    qfree(v145);
  }
  if ( v143 )
  {
    v144 = 0;
    qfree(v143);
  }
  if ( v141 )
  {
    v142 = 0;
    qfree(v141);
  }
LABEL_64:
  if ( v116 )
  {
    v117.m128i_i64[0] = 0;
    qfree(v116);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v35 = v110;
  if ( v110 )
  {
    v36 = v111;
    if ( (_QWORD)v111 )
    {
      v37 = 0;
      do
      {
        v38 = (_QWORD *)(v35 + 80 * v37);
        clear_tinfo_t();
        v39 = v38[5];
        if ( v39 )
        {
          v38[6] = 0;
          qfree(v39);
        }
        v40 = v38[2];
        if ( v40 )
        {
          v38[3] = 0;
          qfree(v40);
        }
        ++v37;
        cleanup_argloc();
        v35 = v110;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v111 = 0;
    qfree(v35);
  }
  return tinfo_details;
}

