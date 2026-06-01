__m128i *__fastcall sub_273A40(__m128i *a1, __int64 a2)
{
  __m128i v3; // xmm0
  __int64 v4; // rax
  __m128i *v5; // rbx
  int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // r14
  bool v16; // zf
  const __m128i *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // rsi
  int v23; // ecx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int32 v26; // eax
  __int64 v27; // r14
  __int64 v28; // rax
  __int32 v29; // eax
  __int64 (*v30)(); // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // edx
  __m128i *v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  int tinfo_property; // eax
  unsigned __int64 v39; // rax
  char tinfo_details; // al
  int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int32 v61; // ecx
  __int32 v62; // ecx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // rdi
  __int64 v76; // r8
  __int64 v77; // r12
  __int64 v78; // rbx
  _QWORD *v79; // r15
  __int64 v80; // rdi
  __int64 v81; // rdi
  const __m128i *v82; // r8
  char v83; // al
  __int64 v84; // rsi
  int v85; // r15d
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v90; // rdx
  __int64 v91; // r9
  __int64 v92; // r15
  __int64 v93; // rax
  bool v94; // al
  int v95; // r15d
  __int64 v96; // r14
  __int64 v97; // rdi
  __int64 v98; // r14
  __int64 v99; // r15
  _QWORD *v100; // rbx
  __int64 v101; // rdi
  __int64 v102; // rdi
  const __m128i *v103; // r8
  __int64 v104; // r9
  bool v105; // al
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // r12
  __int64 v110; // r13
  _QWORD *v111; // r15
  __int64 v112; // rdi
  __int64 v113; // rdi
  __int64 v114; // [rsp+8h] [rbp-188h]
  __int64 v115; // [rsp+20h] [rbp-170h]
  _QWORD *v116; // [rsp+20h] [rbp-170h]
  __int64 v117; // [rsp+20h] [rbp-170h]
  __int64 v118; // [rsp+20h] [rbp-170h]
  __int64 v119; // [rsp+20h] [rbp-170h]
  __int64 v120; // [rsp+20h] [rbp-170h]
  __int64 v121; // [rsp+20h] [rbp-170h]
  __int64 v122; // [rsp+20h] [rbp-170h]
  __int64 v123; // [rsp+20h] [rbp-170h]
  __int64 v124; // [rsp+20h] [rbp-170h]
  __int64 v125; // [rsp+20h] [rbp-170h]
  __int64 v126; // [rsp+20h] [rbp-170h]
  const __m128i *v127; // [rsp+20h] [rbp-170h]
  __int64 v128; // [rsp+20h] [rbp-170h]
  __int64 v129; // [rsp+28h] [rbp-168h]
  __int64 v130; // [rsp+30h] [rbp-160h]
  __m128i *v131; // [rsp+40h] [rbp-150h]
  __int8 *v132; // [rsp+50h] [rbp-140h]
  int tinfo_size; // [rsp+5Ch] [rbp-134h]
  int v134; // [rsp+60h] [rbp-130h]
  __m128i *v135; // [rsp+60h] [rbp-130h]
  __int64 v136; // [rsp+70h] [rbp-120h]
  const __m128i *v137; // [rsp+70h] [rbp-120h]
  __m128i *v138; // [rsp+70h] [rbp-120h]
  __int64 v139; // [rsp+70h] [rbp-120h]
  __m128i *v140; // [rsp+78h] [rbp-118h] BYREF
  unsigned __int64 v141; // [rsp+80h] [rbp-110h] BYREF
  __int64 v142; // [rsp+88h] [rbp-108h] BYREF
  __int64 v143; // [rsp+90h] [rbp-100h] BYREF
  __int64 v144; // [rsp+98h] [rbp-F8h]
  __int64 v145; // [rsp+A0h] [rbp-F0h]
  __int64 v146; // [rsp+A8h] [rbp-E8h] BYREF
  _BYTE *v147; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v148; // [rsp+B8h] [rbp-D8h]
  __int128 v149; // [rsp+D0h] [rbp-C0h]
  __int64 v150; // [rsp+E0h] [rbp-B0h]
  int v151; // [rsp+E8h] [rbp-A8h]
  __int16 v152; // [rsp+ECh] [rbp-A4h]
  _OWORD v153[2]; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v154; // [rsp+110h] [rbp-80h]
  __int64 v155; // [rsp+118h] [rbp-78h]
  __int128 v156; // [rsp+120h] [rbp-70h]
  __int64 v157; // [rsp+130h] [rbp-60h]
  __int128 v158; // [rsp+138h] [rbp-58h]
  char v159; // [rsp+148h] [rbp-48h]
  unsigned __int64 v160; // [rsp+158h] [rbp-38h]

  v140 = (__m128i *)a2;
  v160 = __readfsqword(0x28u);
  *(_QWORD *)&v153[0] = 0;
  v147 = nullptr;
  v149 = 0;
  copy_tinfo_t();
  v150 = 0;
  copy_tinfo_t();
  v151 = 0;
  v152 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  v3.m128i_i64[0] = 0;
  v147 = nullptr;
  v148 = 0;
  v147 = (_BYTE *)qvector_reserve((__int64)&v147, 0, 2, 1);
  *(_QWORD *)&v148 = 2;
  *v147 = 120;
  v147[1] = 0;
  sub_26AE90(
    (__int64 *)v153,
    a1[2].m128i_i64[0],
    *(_QWORD *)(a1->m128i_i64[1] + 64),
    (__int64 *)a1[1].m128i_i64[0],
    &a1[28].m128i_i8[2],
    -1);
  v131 = a1 + 9;
  copy_tinfo_t();
  clear_tinfo_t();
  tinfo_size = get_tinfo_size();
  if ( !a1[9].m128i_i8[0] )
  {
    v4 = a1[1].m128i_i64[1];
    if ( *(_DWORD *)(v4 + 8) == 2 && *(_QWORD *)(v4 + 24) == a1[2].m128i_i64[1] )
      tinfo_size = get_tinfo_size();
  }
  dstr_tinfo();
  v134 = 0;
  v129 = *(_QWORD *)(a1->m128i_i64[0] + 112);
  v130 = (__int64)v140;
  v5 = v140;
  v132 = &a1[8].m128i_i8[8];
LABEL_4:
  if ( v5->m128i_i32[2] == 52 )
  {
LABEL_69:
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( a1[27].m128i_i32[2] )
      {
        if ( !under_debugger )
          sub_383060(0xC40Fu, *(double *)v3.m128i_i64);
LABEL_211:
        BUG();
      }
      a1[27].m128i_i32[2] = 1;
      sub_255850(v5->m128i_i64, v5[1].m128i_i64[1], *(double *)v3.m128i_i64);
      v36 = (unsigned int)(v5->m128i_i32[2] - 51);
      if ( (unsigned int)v36 > 0xE || (v37 = 25473, !_bittest64(&v37, v36)) )
      {
        if ( (v5[3].m128i_i8[8] & 2) == 0 )
        {
          if ( (get_tinfo_property() & 0x2F) != 0xD
            || (tinfo_property = get_tinfo_property(),
                !(unsigned __int8)sub_32A490((__int64)v5[3].m128i_i64, tinfo_property)) )
          {
            if ( !under_debugger )
              sub_383060(0xC410u, *(double *)v3.m128i_i64);
            goto LABEL_211;
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v6 = sub_26CA00((__int64)a1);
    v142 = 0;
    v136 = v6;
    v7 = v6;
    v141 = v6;
    copy_tinfo_t();
    v8 = a1[5].m128i_i64[1];
    v9 = a1[6].m128i_i64[0];
    v10 = v8 - v9;
    v143 = v8 - v9;
    if ( v8 - v9 < 0 && !a1[27].m128i_i32[2] )
    {
      v115 = v8;
      tinfo_details = get_tinfo_details();
      v8 = v115;
      if ( tinfo_details )
      {
        v41 = v151;
        if ( v151 )
        {
          v42 = v151;
          if ( v151 >= v9 - v115 )
          {
            v43 = a1[6].m128i_i64[0];
            v44 = a1[5].m128i_i64[1];
LABEL_92:
            v144 = 0;
            if ( v42 > v43 )
              v42 = v43;
            v145 = 0;
            v146 = 0;
            v153[0] = 0;
            a1[6].m128i_i64[0] = v43 - v42;
            a1[5].m128i_i64[1] = v44 + v41 - (int)v42;
            copy_tinfo_t();
            *(_QWORD *)&v153[1] = 0;
            copy_tinfo_t();
            DWORD2(v153[1]) = 0;
            WORD6(v153[1]) = 0;
            clear_tinfo_t();
            clear_tinfo_t();
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            v159 = 16;
            v154 = 0;
            memset(v153, 0, sizeof(v153));
            v155 = 0;
            v157 = 0;
            v156 = 0;
            v158 = 0;
            copy_tinfo_t();
            v45 = *((_QWORD *)&v153[0] + 1);
            HIDWORD(v153[1]) = 0;
            v46 = *(_QWORD *)&v153[0];
            v159 = v159 & 0xF | 0x70;
            if ( *(_QWORD *)&v153[1] < (unsigned __int64)(*((_QWORD *)&v153[0] + 1) + 1LL) )
            {
              *(_QWORD *)&v153[0] = qvector_reserve(
                                      (__int64)v153,
                                      *(__int64 *)&v153[0],
                                      *((_QWORD *)&v153[0] + 1) + 1LL,
                                      80);
              v45 = *((_QWORD *)&v153[0] + 1);
              v46 = *(_QWORD *)&v153[0];
            }
            v47 = v46 + 80 * v45;
            *(_DWORD *)v47 = 0;
            *(_QWORD *)(v47 + 8) = 0;
            *(_QWORD *)(v47 + 16) = 0;
            *(_QWORD *)(v47 + 40) = 0;
            *(_QWORD *)(v47 + 64) = 0;
            *(_DWORD *)(v47 + 72) = 0;
            *(_OWORD *)(v47 + 24) = 0;
            *(_OWORD *)(v47 + 48) = 0;
            v116 = (_QWORD *)v47;
            ++*((_QWORD *)&v153[0] + 1);
            copy_tinfo_t();
            v48 = v116[2];
            if ( v116[4] <= 3u )
            {
              v48 = qvector_reserve((__int64)(v116 + 2), v48, 4, 1);
              v116[2] = v48;
            }
            v116[3] = 4;
            *(_WORD *)v48 = 29808;
            *(_BYTE *)(v48 + 2) = 114;
            *(_BYTE *)(v116[2] + 3LL) = 0;
            v146 = 0;
            create_tinfo();
            v117 = sub_2426C0(0);
            v51 = j__qalloc_or_throw(64, (__int64)&v146, v49, v50);
            *(_QWORD *)v51 = -1;
            v52 = v117;
            *(_DWORD *)(v51 + 8) = 57;
            *(_QWORD *)(v51 + 24) = v117;
            *(_QWORD *)(v51 + 12) = -1;
            *(_QWORD *)(v51 + 32) = 0;
            *(_QWORD *)(v51 + 40) = 0;
            *(_QWORD *)(v51 + 48) = 0;
            *(_DWORD *)(v51 + 56) = 0;
            v118 = v51;
            v54 = qalloc_or_throw(40, (__int64)&v146, v52, v53);
            *(_QWORD *)v54 = 0;
            *(_QWORD *)(v54 + 24) = 0;
            *(_DWORD *)(v54 + 32) = 0;
            *(_OWORD *)(v54 + 8) = 0;
            *(_QWORD *)(v118 + 32) = v54;
            copy_tinfo_t();
            v55 = v118;
            v56 = *(__int64 **)(v118 + 32);
            v57 = v56[1];
            v58 = *v56;
            if ( v56[2] < (unsigned __int64)(v57 + 1) )
            {
              v108 = qvector_reserve((__int64)v56, v58, v57 + 1, 72);
              v55 = v118;
              v58 = v108;
              *v56 = v108;
              v57 = v56[1];
            }
            v3.m128i_i64[0] = 0;
            v114 = v55;
            v59 = v58 + 72 * v57;
            *(_QWORD *)v59 = -1;
            *(_DWORD *)(v59 + 8) = 0;
            *(_QWORD *)(v59 + 12) = -1;
            *(_QWORD *)(v59 + 40) = 0;
            *(_QWORD *)(v59 + 48) = 0;
            *(_DWORD *)(v59 + 56) = 0;
            *(_BYTE *)(v59 + 60) = 0;
            *(_QWORD *)(v59 + 64) = 0;
            *(_OWORD *)(v59 + 24) = 0;
            ++v56[1];
            v119 = v59;
            copy_tinfo_t();
            v60 = v5->m128i_i64[0];
            v5->m128i_i64[0] = *(_QWORD *)v119;
            v61 = *(_DWORD *)(v119 + 8);
            *(_QWORD *)v119 = v60;
            LODWORD(v60) = v5->m128i_i32[2];
            v5->m128i_i32[2] = v61;
            v62 = *(_DWORD *)(v119 + 12);
            *(_DWORD *)(v119 + 8) = v60;
            LODWORD(v60) = v5->m128i_i32[3];
            v5->m128i_i32[3] = v62;
            v63 = *(_QWORD *)(v119 + 24);
            *(_DWORD *)(v119 + 12) = v60;
            v64 = v5[1].m128i_i64[1];
            v5[1].m128i_i64[1] = v63;
            v65 = *(_QWORD *)(v119 + 32);
            *(_QWORD *)(v119 + 24) = v64;
            v66 = v5[2].m128i_i64[0];
            v5[2].m128i_i64[0] = v65;
            v67 = *(_QWORD *)(v119 + 40);
            *(_QWORD *)(v119 + 32) = v66;
            v68 = v5[2].m128i_i64[1];
            v5[2].m128i_i64[1] = v67;
            v69 = *(_QWORD *)(v119 + 48);
            *(_QWORD *)(v119 + 40) = v68;
            v70 = v5[3].m128i_i64[0];
            v5[3].m128i_i64[0] = v69;
            LODWORD(v69) = *(_DWORD *)(v119 + 56);
            *(_QWORD *)(v119 + 48) = v70;
            LODWORD(v70) = v5[3].m128i_i32[2];
            v5[3].m128i_i32[2] = v69;
            *(_DWORD *)(v119 + 56) = v70;
            v71 = v114;
            if ( v5 )
            {
              sub_255630((__int64)v5, 0.0);
              clear_tinfo_t();
              j__qfree((__int64)v5);
              v71 = v114;
            }
            v72 = v144;
            *(_DWORD *)(v71 + 56) |= 1u;
            v73 = *(_QWORD *)(v71 + 48);
            v120 = v71;
            *(_QWORD *)(v71 + 48) = v72;
            v144 = v73;
            clear_tinfo_t();
            v74 = v120;
            if ( v157 )
            {
              *(_QWORD *)&v158 = 0;
              qfree(v157);
              v74 = v120;
            }
            v121 = v74;
            cleanup_argloc();
            clear_tinfo_t();
            v75 = *(_QWORD *)&v153[0];
            v76 = v121;
            if ( *(_QWORD *)&v153[0] )
            {
              v77 = *((_QWORD *)&v153[0] + 1);
              if ( *((_QWORD *)&v153[0] + 1) )
              {
                v78 = 0;
                do
                {
                  v79 = (_QWORD *)(v75 + 80 * v78);
                  clear_tinfo_t();
                  v80 = v79[5];
                  if ( v80 )
                  {
                    v79[6] = 0;
                    qfree(v80);
                  }
                  v81 = v79[2];
                  if ( v81 )
                  {
                    v79[3] = 0;
                    qfree(v81);
                  }
                  ++v78;
                  cleanup_argloc();
                  v75 = *(_QWORD *)&v153[0];
                }
                while ( v77 != v78 );
                v76 = v121;
              }
              v122 = v76;
              *((_QWORD *)&v153[0] + 1) = 0;
              qfree(v75);
              v76 = v122;
            }
            v123 = v76;
            clear_tinfo_t();
            v82 = (const __m128i *)v123;
            v140 = (__m128i *)v123;
            goto LABEL_132;
          }
        }
      }
    }
    if ( v136 <= 0 )
      goto LABEL_120;
    v11 = v10 / v136;
    v12 = v10 / v136;
    v13 = 0xFFFFFFFF80000000LL;
    if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 24) + 24LL) == 8 )
      v13 = 0x8000000000000000LL;
    if ( a1[4].m128i_i64[0] )
    {
      if ( v10 < 0 && v9 - v8 < v136 )
      {
        v94 = sub_26AAE0(a1->m128i_i64[0], (_QWORD *)a1[3].m128i_i64[1], v136, *(double *)v3.m128i_i64);
        v12 = v10 / v136;
        if ( v94 )
        {
          v11 = v10 / v136;
LABEL_136:
          v12 = v11 - 1;
          v15 = 0;
          goto LABEL_13;
        }
      }
    }
    else if ( v10 < 0 && v11 * v136 != v10 )
    {
      v16 = v13 == 0x8000000000000000LL;
      v39 = 0x8000000000000001LL;
      if ( !v16 )
        v39 = -2147483647;
      if ( v39 != v10 && v11 * v136 - v136 < 0 )
        goto LABEL_136;
    }
    v14 = a1[6].m128i_i64[0];
    if ( !v14 )
      goto LABEL_79;
    v15 = v14 != a1[5].m128i_i64[1] && a1[5].m128i_i64[1] < v136 && v136 != 1;
    if ( v15 )
    {
      if ( !(v14 % v136) )
      {
        v12 = -v14 / v136;
        goto LABEL_13;
      }
LABEL_79:
      v15 = 0;
    }
LABEL_13:
    v16 = a1[27].m128i_i32[3] == 1;
    v143 = v12;
    if ( v16
      && v5->m128i_i32[2] == 65
      && (*(_BYTE *)(*(_QWORD *)(v5[1].m128i_i64[1] + 432) + 104LL * v5[2].m128i_i32[0] + 25) & 1) != 0 )
    {
      v124 = v12;
      v83 = sub_26D3F0((__int64)a1, &v143, (__int64 *)&v141, &v142);
      v12 = v124;
      if ( v83 )
      {
        v84 = v5[3].m128i_i64[0];
        v85 = get_tinfo_size();
        v88 = j__qalloc_or_throw(64, v84, v86, v87);
        *(_QWORD *)v88 = -1;
        *(_QWORD *)(v88 + 40) = 0;
        *(_DWORD *)(v88 + 8) = 51;
        *(_QWORD *)(v88 + 12) = -1;
        *(_QWORD *)(v88 + 24) = v5;
        *(_QWORD *)(v88 + 32) = 0;
        *(_QWORD *)(v88 + 48) = 0;
        *(_DWORD *)(v88 + 56) = 0;
        v140 = (__m128i *)v88;
        *(_DWORD *)(v88 + 40) = v85;
        v137 = (const __m128i *)v88;
        sub_2441C0(v88, *(_QWORD *)(a1->m128i_i64[0] + 112), 0, *(double *)v3.m128i_i64);
        v82 = v137;
        v137[3].m128i_i32[2] |= 1u;
        goto LABEL_132;
      }
    }
    if ( !a1[27].m128i_i32[2] && !a1[28].m128i_i8[5] && !v15 && v12 >= 0 )
    {
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v41 = v151;
        if ( v151 )
        {
          v44 = a1[5].m128i_i64[1];
          v42 = v151;
          v43 = a1[6].m128i_i64[0];
          v107 = v151 + v44 - v43;
          if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 24) + 24LL) != 8 )
            v107 = (int)v107;
          if ( v107 >= 0 )
            goto LABEL_92;
        }
      }
    }
    if ( a1[4].m128i_i64[0] )
    {
      v17 = (const __m128i *)a1[3].m128i_i64[1];
      v153[0] = _mm_loadu_si128(v17);
      v3 = _mm_loadu_si128(v17 + 1);
      v153[1] = v3;
      if ( sub_26D4E0(a1->m128i_i64, v153, &v143, (__int64 *)&v141, &v142, *(double *)v3.m128i_i64)
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
      {
        v20 = v141;
        v126 = v143;
        v103 = sub_270E10(
                 a1->m128i_i64,
                 v5,
                 (__int64 *)v153,
                 v141,
                 (__int64)&a1[6].m128i_i64[1],
                 v143,
                 *(double *)v3.m128i_i64,
                 0);
        v104 = v126;
        if ( v103 )
        {
          v127 = v103;
          v139 = v104;
          memmove((void *)a1[3].m128i_i64[1], (const void *)(a1[3].m128i_i64[1] + 32), 32 * a1[4].m128i_i64[0]-- - 32);
          v91 = v139;
          v82 = v127;
          goto LABEL_127;
        }
      }
    }
    if ( (get_tinfo_property() & 0x2F) == 0xD
      && (a1[27].m128i_i8[12] & 2) == 0
      && (unsigned __int8)a1[9].m128i_i64[0]
      && (unsigned __int64)v148 > 1 )
    {
      if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] && !a1[4].m128i_i64[0]
        || (*(_QWORD *)&v153[0] = 0,
            *(_QWORD *)&v153[0] = get_tinfo_property(),
            v18 = get_tinfo_property() & 0x3F,
            clear_tinfo_t(),
            (_BYTE)v18 != 1) )
      {
        if ( (a1[27].m128i_i32[1] != 0) == a1[28].m128i_i8[5] || get_tinfo_property() )
        {
          v146 = 0;
          copy_tinfo_t();
          if ( !a1[27].m128i_i32[1] && (a1[27].m128i_i32[2] || a1[28].m128i_i8[5]) )
          {
            sub_32C540(v153, *(_QWORD *)(a1->m128i_i64[0] + 112), &v146);
            copy_tinfo_t();
            clear_tinfo_t();
          }
          if ( (unsigned __int8)sub_32A510(a1->m128i_i64[0]) )
          {
            if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] )
            {
LABEL_162:
              clear_tinfo_t();
              goto LABEL_120;
            }
            clear_tinfo_t();
            goto LABEL_34;
          }
          clear_tinfo_t();
        }
      }
    }
    if ( !(unsigned __int8)sub_26D610((__int64)a1, &v143, (__int64 *)&v141, &v142) )
      goto LABEL_34;
    v19 = a1[5].m128i_i64[0];
    v20 = v141;
    v21 = v143;
    v22 = a1[5].m128i_i64[1];
    v23 = 8 * *(_DWORD *)(*(_QWORD *)(v19 + 112) + 84LL) - 1;
    if ( (unsigned __int64)v23 <= 0x3F )
    {
      v24 = v143 * v141;
      v25 = 1LL << v23;
      if ( *(_DWORD *)(*(_QWORD *)(v19 + 24) + 24LL) == 8 )
      {
        if ( (v25 & (v24 ^ v143)) != 0 )
          goto LABEL_34;
        v90 = (v22 ^ (v22 - v24)) & v25;
      }
      else
      {
        if ( (v25 & ((int)v24 ^ (unsigned __int64)v143)) != 0 )
          goto LABEL_34;
        v90 = (v22 ^ ((int)v22 - (int)v24)) & v25;
      }
      if ( v90 )
        goto LABEL_34;
    }
    if ( a1[6].m128i_i64[0] == v22 )
    {
      v128 = v143;
      v105 = sub_26D070((__int64)a1);
      v21 = v128;
      if ( !v105 )
        goto LABEL_120;
    }
    v125 = v21;
    v82 = sub_270E10(
            a1->m128i_i64,
            v5,
            nullptr,
            1u,
            (__int64)&a1[6].m128i_i64[1],
            v21,
            *(double *)v3.m128i_i64,
            v21 == 0);
    v91 = v125;
    if ( v82 )
    {
LABEL_127:
      v92 = v91 * v20;
      if ( v15 )
      {
        v106 = a1[6].m128i_i64[0];
        if ( -v92 > v106 )
          sub_269F20(*(double *)v3.m128i_i64);
        a1[6].m128i_i64[0] = v106 + v92;
        goto LABEL_130;
      }
      v93 = a1[5].m128i_i64[1];
      if ( v92 > v93 )
      {
        if ( !under_debugger )
          sub_383060(0xC407u, *(double *)v3.m128i_i64);
        goto LABEL_211;
      }
      a1[5].m128i_i64[1] = v93 - v92;
LABEL_130:
      v16 = v82->m128i_i32[2] == 58;
      v140 = (__m128i *)v82;
      if ( v16 )
        ++v134;
LABEL_132:
      v138 = (__m128i *)v82;
      clear_tinfo_t();
      v5 = v138;
      goto LABEL_4;
    }
LABEL_34:
    if ( (get_tinfo_property() & 0x2F) != 0xD )
      goto LABEL_120;
    v26 = a1[27].m128i_i32[3];
    if ( v134 <= 0 )
    {
      if ( v26 == 3 )
        goto LABEL_120;
    }
    else if ( v26 )
    {
      goto LABEL_120;
    }
    v27 = a1[5].m128i_i64[1];
    v28 = a1[6].m128i_i64[0];
    if ( v27 > 0 && v27 < v28 )
    {
      if ( v136 > v27 )
        goto LABEL_42;
      v27 -= v28;
      if ( v27 < 0 )
        goto LABEL_120;
      if ( v136 > v27 )
        goto LABEL_42;
LABEL_41:
      if ( !get_tinfo_property() )
        goto LABEL_120;
      goto LABEL_42;
    }
    v27 -= v28;
    if ( v27 < 0 )
      break;
    if ( v136 <= v27 )
      goto LABEL_41;
LABEL_42:
    v29 = v5->m128i_i32[2];
    if ( v29 != 52 && a1[27].m128i_i32[2] && a1[27].m128i_i32[3] == 1 && (v29 != 64 || !(unsigned __int8)is_spec_ea()) )
      goto LABEL_120;
    if ( tinfo_size == v7 )
    {
      v30 = *(__int64 (**)())(*(_QWORD *)v129 + 296LL);
      if ( v30 != sub_269EE0 && !((unsigned __int8 (__fastcall *)(__int64, __m128i *, __int64))v30)(v129, &v5[3], v27) )
        goto LABEL_120;
    }
    if ( (unsigned __int8)sub_26D870((__int64)a1, v27, *(double *)v3.m128i_i64) )
      goto LABEL_120;
    if ( !v27 && !a1[27].m128i_i32[1] && (unsigned __int64)v148 > 1 && !a1[10].m128i_i64[0] )
    {
      if ( (!a1[4].m128i_i64[0] || !(*(_QWORD *)(a1[3].m128i_i64[1] + 24) % v136))
        && (!(unsigned __int8)a1[9].m128i_i64[0] || (get_tinfo_property() & 0x3F) == 1)
        || *(_DWORD *)(a1[2].m128i_i64[0] + 8) == 52 )
      {
        goto LABEL_120;
      }
      if ( !a1[28].m128i_i8[5] )
      {
        v31 = a1[1].m128i_i64[0];
        v32 = *(_DWORD *)(v31 + 8) - 1;
        if ( v32 >= 0 )
        {
          v33 = *(_QWORD *)v31 + 8LL * (unsigned int)v32;
          do
          {
            if ( !*(_QWORD *)v33 )
              break;
            v34 = *(_DWORD *)(*(_QWORD *)v33 + 8LL);
            if ( v34 == 51 )
              goto LABEL_66;
            if ( v34 != 48 )
              break;
            --v32;
            v33 -= 8;
          }
          while ( v32 != -1 );
        }
        if ( *(_DWORD *)(a1[1].m128i_i64[1] + 8) == 80
          && !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 64) + 8LL) + 320LL)
          || !(unsigned __int8)sub_26D9B0(a1->m128i_i64) )
        {
          goto LABEL_120;
        }
      }
    }
LABEL_66:
    v35 = (__m128i *)sub_272C50(a1, v130, (__int64 *)&v140, v7, v27, v131, tinfo_size, (__int64)&v147);
    v5 = v35;
    if ( !v35 )
    {
      v5 = v140;
      goto LABEL_120;
    }
    v140 = v35;
    v35->m128i_i64[0] = a1[8].m128i_i64[0];
    if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] )
    {
      *(_QWORD *)&v153[0] = 0;
      *(_QWORD *)&v153[0] = get_tinfo_property();
      if ( !(unsigned int)lexcompare_tinfo() )
        goto LABEL_162;
      clear_tinfo_t();
    }
    clear_tinfo_t();
    v134 = 0;
    if ( v5->m128i_i32[2] == 52 )
      goto LABEL_69;
  }
  if ( !a1[4].m128i_i64[0] )
    goto LABEL_120;
  v3.m128i_i64[0] = 0;
  memset(v153, 0, 24);
  sub_3349B0((__int64)v153, v132, 0, nullptr, 0);
  if ( !*((_QWORD *)&v153[0] + 1) )
  {
    v97 = *(_QWORD *)&v153[0];
    if ( *(_QWORD *)&v153[0] )
      goto LABEL_195;
    goto LABEL_120;
  }
  v95 = 0;
  v96 = 0;
  do
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
      break;
    v96 = ++v95;
  }
  while ( (unsigned __int64)v95 < *((_QWORD *)&v153[0] + 1) );
  v97 = *(_QWORD *)&v153[0];
  if ( v96 != *((_QWORD *)&v153[0] + 1) )
  {
    if ( *(_QWORD *)&v153[0] )
    {
      if ( *((_QWORD *)&v153[0] + 1) )
      {
        v135 = v5;
        v98 = 0;
        v99 = *((_QWORD *)&v153[0] + 1);
        do
        {
          v100 = (_QWORD *)(v97 + (v98 << 6));
          clear_tinfo_t();
          v101 = v100[4];
          if ( v101 )
          {
            v100[5] = 0;
            qfree(v101);
          }
          v102 = v100[1];
          if ( v102 )
          {
            v100[2] = 0;
            qfree(v102);
          }
          ++v98;
          v97 = *(_QWORD *)&v153[0];
        }
        while ( v98 != v99 );
        v5 = v135;
      }
      *((_QWORD *)&v153[0] + 1) = 0;
      qfree(v97);
    }
    v27 = 0;
    goto LABEL_42;
  }
  if ( *(_QWORD *)&v153[0] )
  {
    if ( *((_QWORD *)&v153[0] + 1) )
    {
      v109 = 0;
      v110 = *((_QWORD *)&v153[0] + 1);
      do
      {
        v111 = (_QWORD *)(v97 + (v109 << 6));
        clear_tinfo_t();
        v112 = v111[4];
        if ( v112 )
        {
          v111[5] = 0;
          qfree(v112);
        }
        v113 = v111[1];
        if ( v113 )
        {
          v111[2] = 0;
          qfree(v113);
        }
        ++v109;
        v97 = *(_QWORD *)&v153[0];
      }
      while ( v109 != v110 );
    }
LABEL_195:
    *((_QWORD *)&v153[0] + 1) = 0;
    qfree(v97);
  }
LABEL_120:
  clear_tinfo_t();
  if ( v147 )
  {
    *(_QWORD *)&v148 = 0;
    qfree((__int64)v147);
  }
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v5;
}

