unsigned __int64 __fastcall sub_FF080(_QWORD *a1, __m128i a2)
{
  int tinfo_property; // eax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // eax
  int *v9; // rdx
  _DWORD *v10; // rcx
  bool v11; // zf
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  unsigned int v26; // eax
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rax
  __m128i v30; // xmm4
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rdi
  __m128i v36; // xmm7
  __int64 v37; // r13
  unsigned __int64 v38; // r12
  __int64 v39; // rdi
  __int64 v40; // r14
  __int64 j; // r12
  __int64 v42; // rax
  __m128i v43; // xmm7
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // r12
  void *v47; // r13
  __int64 v48; // rdi
  __m128i v49; // xmm0
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // r12
  void *v53; // r13
  __int64 v54; // rdi
  __m128i v55; // xmm0
  const void *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // r12
  void *v60; // r13
  __int64 v61; // rdi
  __m128i v62; // xmm0
  void *v63; // r13
  unsigned __int64 v64; // r12
  __int64 v65; // rdi
  __m128i v66; // xmm0
  const void *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // r12
  void *v71; // r13
  __int64 v72; // rdi
  __int64 v73; // r14
  __int64 v74; // rax
  __m128i v75; // xmm6
  __int64 v76; // rdi
  __int64 v77; // r15
  __int64 k; // r13
  __int64 *v79; // r12
  __int64 v80; // rdi
  __int64 v81; // rdi
  __m128i v82; // xmm7
  __int64 v83; // rdi
  __int64 v84; // rcx
  __int64 v85; // r12
  __int64 v86; // r13
  __int64 v87; // rdx
  __int64 v88; // r15
  __int64 v89; // rdx
  void *v90; // rax
  size_t v91; // rdx
  void *v92; // rax
  size_t v93; // rdx
  void *v94; // rax
  void *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 i; // r14
  __int64 v99; // r12
  __int64 v100; // r13
  __int64 v101; // r14
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  void *v105; // rax
  size_t v106; // rdx
  int v107; // eax
  int v108; // r8d
  __m128i v109; // [rsp+0h] [rbp-138h] BYREF
  int *v110; // [rsp+10h] [rbp-128h]
  int v111; // [rsp+1Ch] [rbp-11Ch]
  size_t n; // [rsp+20h] [rbp-118h]
  __int64 v113; // [rsp+28h] [rbp-110h]
  _QWORD *v114; // [rsp+30h] [rbp-108h]
  __int64 v115; // [rsp+38h] [rbp-100h]
  size_t v116; // [rsp+40h] [rbp-F8h]
  __int64 *v117; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v118; // [rsp+50h] [rbp-E8h]
  bool v119; // [rsp+5Ah] [rbp-DEh]
  char v120; // [rsp+5Bh] [rbp-DDh]
  int v121; // [rsp+5Ch] [rbp-DCh]
  __m128i *v122; // [rsp+60h] [rbp-D8h]
  __int64 *v123; // [rsp+68h] [rbp-D0h]
  __int64 v124; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v125; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v126; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v127; // [rsp+90h] [rbp-A8h]
  __int64 v128; // [rsp+98h] [rbp-A0h]
  __int64 v129[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v130; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v131; // [rsp+B8h] [rbp-80h]
  __m128i v132; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v133; // [rsp+E0h] [rbp-58h] BYREF
  int v134; // [rsp+E8h] [rbp-50h]
  __int16 v135; // [rsp+ECh] [rbp-4Ch]
  unsigned __int64 v136; // [rsp+F8h] [rbp-40h]

  v114 = a1;
  v136 = __readfsqword(0x28u);
  if ( a1[153] )
  {
    v124 = 0;
    v117 = &v124;
    if ( !(unsigned __int8)sub_F35D0((__int64)a1) )
      goto LABEL_5;
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64 )
      goto LABEL_5;
    v132.m128i_i64[0] = 0;
    v132.m128i_i64[0] = get_tinfo_property();
    v120 = get_tinfo_property() & 0x3F;
    v122 = &v132;
    clear_tinfo_t();
    if ( !v114[153] )
      goto LABEL_5;
    v121 = 0;
    v4 = 0;
    v123 = v129;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v114[152] + 8 * v4);
      v131 = 0;
      v129[1] = 0;
      v118 = v5;
      v6 = v114[65];
      v130 = 0;
      v129[0] = 0;
      v7 = *(_QWORD *)(v6 + 8);
      if ( !v7 )
        goto LABEL_132;
      v119 = 0;
      do
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v7 + 56);
          if ( !v17 )
            goto LABEL_27;
          if ( *(_DWORD *)v17 == 55 )
          {
            v17 = *(_QWORD *)(v17 + 16);
            if ( !v17 )
              break;
          }
          if ( (*(_BYTE *)(v17 + 4) & 0x40) != 0 )
          {
            v8 = *(_DWORD *)v17;
            if ( *(_DWORD *)v17 != 4 )
            {
              if ( v8 == 67 )
              {
                if ( *(_DWORD *)(v17 + 68) != *(_DWORD *)(v17 + 36) )
                {
LABEL_95:
                  if ( !under_debugger )
                    sub_383060(0xC3B9u, *(double *)a2.m128i_i64);
                  goto LABEL_140;
                }
              }
              else
              {
                v9 = (int *)v17;
                if ( (unsigned int)(v8 - 8) > 2 )
                {
LABEL_14:
                  v10 = v9 + 8;
                  if ( v8 != 56 )
                  {
                    if ( v8 != 57 )
                      goto LABEL_95;
                    v10 = v9 + 12;
                  }
                  if ( *(_BYTE *)v10 == 6 && *((_QWORD *)v10 + 1) == v118 && (v120 != 1 || v9[17] <= 0) )
                  {
                    v11 = v8 == 57;
                    v12 = v130;
                    v13 = v131;
                    v132.m128i_i64[0] = v7;
                    v132.m128i_i64[1] = v17;
                    v119 = v11;
                    v14 = v131 + 1;
                    if ( (unsigned __int64)v122 < v130 || (unsigned __int64)v122 >= v130 + 16LL * *((_QWORD *)&v131 + 1) )
                    {
                      if ( *((_QWORD *)&v131 + 1) < v14 )
                      {
                        v130 = qvector_reserve((__int64)&v130, v130, v131 + 1, 16);
                        v12 = v130;
                        v13 = v131;
                      }
                      a2 = _mm_load_si128(&v132);
                      *(__m128i *)(v12 + 16 * v13) = a2;
                    }
                    else
                    {
                      if ( *((_QWORD *)&v131 + 1) < v14 )
                      {
                        v130 = qvector_reserve((__int64)&v130, v130, v131 + 1, 16);
                        v12 = v130;
                        v13 = v131;
                      }
                      v15 = (__int64 *)(v12 + 16 * v13);
                      *v15 = v7;
                      v15[1] = v17;
                    }
                    v16 = v123;
                    *(_QWORD *)&v131 = v131 + 1;
                    sub_6FCF0(v114[98], *(_DWORD *)(v7 + 72), v123, *(double *)a2.m128i_i64);
                    sub_64190(v16, *(_DWORD *)(v7 + 72), *(double *)a2.m128i_i64);
                  }
                  goto LABEL_27;
                }
              }
            }
            if ( *(_BYTE *)(v17 + 32) != 4 )
            {
              if ( !under_debugger )
                sub_383060(0xC3B8u, *(double *)a2.m128i_i64);
LABEL_140:
              BUG();
            }
            v9 = *(int **)(v17 + 40);
            v8 = *v9;
            goto LABEL_14;
          }
LABEL_27:
          v7 = *(_QWORD *)(v7 + 8);
          if ( !v7 )
            goto LABEL_32;
        }
        v7 = *(_QWORD *)(v7 + 8);
      }
      while ( v7 );
LABEL_32:
      if ( !(_QWORD)v131 )
      {
        v7 = v129[0];
LABEL_132:
        qfree(v7);
        v83 = v130;
        if ( v130 )
          goto LABEL_89;
        goto LABEL_90;
      }
      if ( (*((_BYTE *)v114 + 757) & 1) != 0 )
        goto LABEL_34;
      v126 = 0;
      copy_tinfo_t();
      if ( v119 )
      {
        v127 = 0;
        v128 = 0;
        v132 = 0;
        copy_tinfo_t();
        v133 = 0;
        v109.m128i_i64[0] = (__int64)&v133;
        copy_tinfo_t();
        v134 = 0;
        v135 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      sub_F34C0((__int64)v114, v118, &v126, 0x8000002u, *(double *)a2.m128i_i64);
      clear_tinfo_t();
      if ( (_QWORD)v131 )
      {
LABEL_34:
        v111 = 0;
        v18 = 0;
        do
        {
          v19 = (__int64 *)(v130 + 16 * v18);
          v113 = *v19;
          v20 = v19[1];
          LODWORD(v19) = *(_DWORD *)v20;
          v115 = v20;
          v110 = (int *)v20;
          if ( (unsigned int)((_DWORD)v19 - 56) > 1 )
            v110 = *(int **)(v20 + 40);
          v21 = v113;
          v22 = sub_FDF80(v114, v113, v115, (__int64)v110, *(double *)a2.m128i_i64);
          v25 = v22;
          if ( !v111 )
          {
            v26 = *(_DWORD *)(v22 + 20);
            v23 = v26;
            LOBYTE(v23) = v26 & 0x7F;
            if ( (_DWORD)v23 != 96 && v26 != 80 )
            {
              v21 = *(unsigned int *)(v113 + 72);
              v107 = sub_D6D40((__int64)v114, v21, *(double *)a2.m128i_i64);
              if ( v107 > 0 )
              {
                v23 = *(_QWORD *)(v25 + 32);
                v108 = v23;
                if ( (int)v23 > 0 )
                {
                  v23 = *(_QWORD *)(v25 + 24) + 56LL;
                  LODWORD(v24) = 0;
                  do
                  {
                    v21 = (unsigned int)(*(_DWORD *)v23 - 3);
                    if ( (unsigned int)v21 > 1 )
                    {
                      if ( *(_DWORD *)v23 != 1 )
                      {
                        if ( !under_debugger )
                          sub_383060(0xC746u, *(double *)a2.m128i_i64);
                        goto LABEL_140;
                      }
                      if ( v107 <= *(_QWORD *)(v23 + 8) )
                      {
                        if ( *(_DWORD *)(v25 + 8) > (int)v24 )
                          *(_DWORD *)(v25 + 8) = v24;
                        sub_336290(&v125, v25);
                        if ( (*((_BYTE *)v114 + 757) & 1) == 0 )
                        {
                          v126 = 0;
                          copy_tinfo_t();
                          if ( v119 )
                          {
                            v127 = 0;
                            v128 = 0;
                            v132 = 0;
                            copy_tinfo_t();
                            v133 = 0;
                            v109.m128i_i64[0] = (__int64)&v133;
                            copy_tinfo_t();
                            v134 = 0;
                            v135 = 0;
                            clear_tinfo_t();
                            clear_tinfo_t();
                            copy_tinfo_t();
                            create_tinfo();
                            clear_tinfo_t();
                            clear_tinfo_t();
                            clear_tinfo_t();
                          }
                          sub_F34C0((__int64)v114, v118, &v126, 0x8000002u, *(double *)a2.m128i_i64);
                          clear_tinfo_t();
                        }
                        sub_BB120((_QWORD *)v25);
                        j__qfree(v25);
                        v21 = v113;
                        v25 = sub_FDF80(v114, v113, v115, (__int64)v110, *(double *)a2.m128i_i64);
                        clear_tinfo_t();
                        break;
                      }
                    }
                    v24 = (unsigned int)(v24 + 1);
                    v23 += 80;
                  }
                  while ( v108 != (_DWORD)v24 );
                }
              }
            }
          }
          if ( *((_BYTE *)v110 + 64) != 8 )
          {
            if ( !under_debugger )
              sub_383060(0xC3BAu, *(double *)a2.m128i_i64);
            goto LABEL_140;
          }
          v27 = 0;
          v28 = *((_QWORD *)v110 + 9);
          *(_QWORD *)v28 = *(_QWORD *)v25;
          *(_DWORD *)(v28 + 8) = *(_DWORD *)(v25 + 8);
          *(_DWORD *)(v28 + 12) = *(_DWORD *)(v25 + 12);
          *(_DWORD *)(v28 + 16) = *(_DWORD *)(v25 + 16);
          *(_DWORD *)(v28 + 20) = *(_DWORD *)(v25 + 20);
          v29 = *(_QWORD *)(v25 + 32);
          v109.m128i_i64[0] = v29;
          if ( v29 )
          {
            v27 = qalloc_or_throw(80 * v29, v21, v23, v24);
            v99 = v27;
            v100 = 0;
            do
            {
              v101 = *(_QWORD *)(v25 + 24) + v99 - v27;
              sub_123A40(v99, (unsigned __int8 *)v101, v23, v101);
              v102 = *(_QWORD *)(v101 + 16);
              *(_QWORD *)(v99 + 24) = 0;
              *(_QWORD *)(v99 + 16) = v102;
              n = v99 + 24;
              copy_tinfo_t();
              *(_QWORD *)(v99 + 32) = 0;
              *(_OWORD *)(v99 + 40) = 0;
              v104 = *(_QWORD *)(v101 + 40);
              if ( v104 )
              {
                v116 = *(_QWORD *)(v101 + 40);
                v105 = (void *)qalloc_or_throw(v116, v101 + 24, v104, v103);
                v106 = v116;
                *(_QWORD *)(v99 + 32) = v105;
                *(_QWORD *)(v99 + 48) = v106;
                memcpy(v105, *(const void **)(v101 + 32), v106);
                *(_QWORD *)(v99 + 40) = v116;
              }
              *(_DWORD *)(v99 + 56) = 0;
              v21 = v101 + 56;
              copy_argloc();
              ++v100;
              v99 += 80;
              *(_DWORD *)(v99 - 8) = *(_DWORD *)(v101 + 72);
            }
            while ( v109.m128i_i64[0] != v100 );
          }
          v30 = _mm_loadl_epi64(&v109);
          v31 = *(_QWORD *)(v28 + 24);
          v109 = _mm_unpacklo_epi64(v30, v30);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v28 + 32);
            if ( v32 )
            {
              v33 = 0;
              do
              {
                v34 = v31 + 80 * v33;
                cleanup_argloc();
                v35 = *(_QWORD *)(v34 + 32);
                if ( v35 )
                {
                  *(_QWORD *)(v34 + 40) = 0;
                  qfree(v35);
                }
                ++v33;
                clear_tinfo_t();
                sub_11CDA0(v34);
                v31 = *(_QWORD *)(v28 + 24);
              }
              while ( v32 != v33 );
            }
            *(_QWORD *)(v28 + 32) = 0;
            qfree(v31);
          }
          v36 = _mm_load_si128(&v109);
          *(_QWORD *)(v28 + 24) = v27;
          v37 = 0;
          *(__m128i *)(v28 + 32) = v36;
          v38 = *(_QWORD *)(v25 + 56);
          if ( v38 )
          {
            v37 = qalloc_or_throw(16 * v38, v21, v23, v24);
            for ( i = 0; i != v38; ++i )
              sub_123A40(v37 + 16 * i, (unsigned __int8 *)(16 * i + *(_QWORD *)(v25 + 48)), v96, v97);
          }
          v39 = *(_QWORD *)(v28 + 48);
          v109 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
          if ( v39 )
          {
            v40 = *(_QWORD *)(v28 + 56);
            if ( v40 )
            {
              for ( j = 0; j != v40; ++j )
              {
                v42 = j;
                sub_11CDA0(16 * v42 + v39);
                v39 = *(_QWORD *)(v28 + 48);
              }
            }
            *(_QWORD *)(v28 + 56) = 0;
            qfree(v39);
          }
          v43 = _mm_load_si128(&v109);
          *(_QWORD *)(v28 + 48) = v37;
          *(__m128i *)(v28 + 56) = v43;
          copy_tinfo_t();
          copy_argloc();
          sub_648D0((__int64 *)(v28 + 96), (const void **)(v25 + 96), *(double *)a2.m128i_i64);
          v46 = *(_QWORD *)(v25 + 120);
          v47 = nullptr;
          if ( v46 )
          {
            v47 = (void *)qalloc_or_throw(16 * v46, v25 + 96, v44, v45);
            memcpy(v47, *(const void **)(v25 + 112), 16 * v46);
          }
          v48 = *(_QWORD *)(v28 + 112);
          v49 = _mm_unpacklo_epi64((__m128i)v46, (__m128i)v46);
          if ( v48 )
          {
            *(_QWORD *)(v28 + 120) = 0;
            v109 = v49;
            qfree(v48);
            v49 = _mm_load_si128(&v109);
          }
          *(_QWORD *)(v28 + 112) = v47;
          *(__m128i *)(v28 + 120) = v49;
          sub_648D0((__int64 *)(v28 + 136), (const void **)(v25 + 136), *(double *)v49.m128i_i64);
          v52 = *(_QWORD *)(v25 + 160);
          v53 = nullptr;
          if ( v52 )
          {
            v53 = (void *)qalloc_or_throw(16 * v52, v25 + 136, v50, v51);
            memcpy(v53, *(const void **)(v25 + 152), 16 * v52);
          }
          v54 = *(_QWORD *)(v28 + 152);
          v55 = _mm_unpacklo_epi64((__m128i)v52, (__m128i)v52);
          if ( v54 )
          {
            *(_QWORD *)(v28 + 160) = 0;
            v109 = v55;
            qfree(v54);
            v55 = _mm_load_si128(&v109);
          }
          *(_QWORD *)(v28 + 152) = v53;
          v56 = (const void *)(v25 + 176);
          *(__m128i *)(v28 + 160) = v55;
          sub_648D0((__int64 *)(v28 + 176), (const void **)(v25 + 176), *(double *)v55.m128i_i64);
          v59 = *(_QWORD *)(v25 + 200);
          v60 = nullptr;
          if ( v59 )
          {
            v95 = (void *)qalloc_or_throw(16 * v59, (__int64)v56, v57, v58);
            v56 = *(const void **)(v25 + 192);
            v60 = v95;
            memcpy(v95, v56, 16 * v59);
          }
          v61 = *(_QWORD *)(v28 + 192);
          v62 = _mm_unpacklo_epi64((__m128i)v59, (__m128i)v59);
          if ( v61 )
          {
            *(_QWORD *)(v28 + 200) = 0;
            v109 = v62;
            qfree(v61);
            v62 = _mm_load_si128(&v109);
          }
          *(_QWORD *)(v28 + 192) = v60;
          v63 = nullptr;
          *(__m128i *)(v28 + 200) = v62;
          v64 = *(_QWORD *)(v25 + 224);
          if ( v64 )
          {
            v63 = (void *)qalloc_or_throw(16 * v64, (__int64)v56, v57, v58);
            memcpy(v63, *(const void **)(v25 + 216), 16 * v64);
          }
          v65 = *(_QWORD *)(v28 + 216);
          v66 = _mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
          if ( v65 )
          {
            *(_QWORD *)(v28 + 224) = 0;
            v109 = v66;
            qfree(v65);
            v66 = _mm_load_si128(&v109);
          }
          *(_QWORD *)(v28 + 216) = v63;
          v67 = (const void *)(v25 + 240);
          *(__m128i *)(v28 + 224) = v66;
          sub_648D0((__int64 *)(v28 + 240), (const void **)(v25 + 240), *(double *)v66.m128i_i64);
          v70 = *(_QWORD *)(v25 + 264);
          v71 = nullptr;
          if ( v70 )
          {
            v94 = (void *)qalloc_or_throw(16 * v70, (__int64)v67, v68, v69);
            v67 = *(const void **)(v25 + 256);
            v71 = v94;
            memcpy(v94, v67, 16 * v70);
          }
          v72 = *(_QWORD *)(v28 + 256);
          a2 = _mm_unpacklo_epi64((__m128i)v70, (__m128i)v70);
          if ( v72 )
          {
            *(_QWORD *)(v28 + 264) = 0;
            v109 = a2;
            qfree(v72);
            a2 = _mm_load_si128(&v109);
          }
          *(_QWORD *)(v28 + 256) = v71;
          v73 = 0;
          *(__m128i *)(v28 + 264) = a2;
          *(_DWORD *)(v28 + 280) = *(_DWORD *)(v25 + 280);
          *(_DWORD *)(v28 + 284) = *(_DWORD *)(v25 + 284);
          v74 = *(_QWORD *)(v25 + 296);
          v109.m128i_i64[0] = v74;
          if ( v74 )
          {
            v73 = qalloc_or_throw(48 * v74, (__int64)v67, v68, v69);
            v85 = v73;
            v86 = 0;
            do
            {
              v88 = *(_QWORD *)(v25 + 288) + v85 - v73;
              *(_OWORD *)(v85 + 8) = 0;
              *(_QWORD *)v85 = 0;
              v89 = *(_QWORD *)(v88 + 8);
              if ( v89 )
              {
                n = *(_QWORD *)(v88 + 8);
                v90 = (void *)qalloc_or_throw(n, (__int64)v67, v89, v84);
                v91 = n;
                *(_QWORD *)v85 = v90;
                *(_QWORD *)(v85 + 16) = v91;
                v67 = *(const void **)v88;
                memcpy(v90, *(const void **)v88, v91);
                *(_QWORD *)(v85 + 8) = n;
              }
              *(_QWORD *)(v85 + 24) = 0;
              *(_OWORD *)(v85 + 32) = 0;
              v87 = *(_QWORD *)(v88 + 32);
              if ( v87 )
              {
                n = *(_QWORD *)(v88 + 32);
                v92 = (void *)qalloc_or_throw(n, (__int64)v67, v87, v84);
                v93 = n;
                *(_QWORD *)(v85 + 24) = v92;
                *(_QWORD *)(v85 + 40) = v93;
                v67 = *(const void **)(v88 + 24);
                memcpy(v92, v67, v93);
                *(_QWORD *)(v85 + 32) = n;
              }
              ++v86;
              v85 += 48;
            }
            while ( v109.m128i_i64[0] != v86 );
          }
          v75 = _mm_loadl_epi64(&v109);
          v76 = *(_QWORD *)(v28 + 288);
          v109 = _mm_unpacklo_epi64(v75, v75);
          if ( v76 )
          {
            v77 = *(_QWORD *)(v28 + 296);
            if ( v77 )
            {
              for ( k = 0; k != v77; ++k )
              {
                v79 = (__int64 *)(v76 + 48 * k);
                v80 = v79[3];
                if ( v80 )
                {
                  v79[4] = 0;
                  qfree(v80);
                }
                v81 = *v79;
                if ( *v79 )
                {
                  v79[1] = 0;
                  qfree(v81);
                }
                v76 = *(_QWORD *)(v28 + 288);
              }
            }
            *(_QWORD *)(v28 + 296) = 0;
            qfree(v76);
          }
          v82 = _mm_load_si128(&v109);
          *(_QWORD *)(v28 + 288) = v73;
          *(__m128i *)(v28 + 296) = v82;
          sub_BB120((_QWORD *)v25);
          j__qfree(v25);
          if ( (unsigned __int8)sub_11C750(v110, v114[188], 0) )
            sub_FECE0(v113, v115, (__int64)v110, *(double *)a2.m128i_i64);
          v18 = ++v111;
        }
        while ( v111 < (unsigned __int64)v131 );
      }
      qfree(v129[0]);
      v83 = v130;
      if ( v130 )
      {
LABEL_89:
        *(_QWORD *)&v131 = 0;
        qfree(v83);
      }
LABEL_90:
      v4 = ++v121;
      if ( (unsigned __int64)v121 >= v114[153] )
      {
LABEL_5:
        clear_tinfo_t();
        return v136 - __readfsqword(0x28u);
      }
    }
  }
  return v136 - __readfsqword(0x28u);
}

