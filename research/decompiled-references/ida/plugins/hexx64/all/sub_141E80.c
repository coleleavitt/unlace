__int64 __fastcall sub_141E80(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128i a7,
        __m128 a8)
{
  _QWORD *exception; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int i; // eax
  int v15; // r13d
  int v16; // ebx
  unsigned int v17; // eax
  __int64 v18; // rsi
  unsigned int v19; // r14d
  char v20; // dl
  unsigned __int64 v21; // rax
  _BYTE *v22; // rsi
  unsigned __int8 v23; // di
  _QWORD *v24; // rax
  _QWORD *v25; // r13
  _QWORD *v26; // rax
  __int64 (__fastcall **v27)(); // rsi
  __int64 v28; // rcx
  _QWORD *v29; // r15
  __int64 (__fastcall *v30)(); // r14
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // al
  __int64 v33; // rax
  int *v34; // r8
  int *v35; // rdi
  __int64 *v36; // r15
  int *v37; // r14
  __int64 v38; // rcx
  int v39; // ebx
  _DWORD *v40; // rdx
  _DWORD *v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64); // rdx
  __int64 (__fastcall *v45)(__int64, int); // r14
  __int64 v46; // rsi
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  int v50; // esi
  int v51; // r9d
  __int64 v52; // rdx
  __int64 v53; // rcx
  void *v54; // rbx
  unsigned __int64 v55; // r14
  __int64 v56; // rdi
  __int64 *v57; // r14
  __int64 v58; // rax
  __int64 v59; // rdi
  unsigned __int64 *v60; // r15
  unsigned int v61; // r13d
  __int64 v62; // rcx
  __int64 v63; // rsi
  unsigned __int64 v64; // r13
  unsigned __int64 v65; // rbx
  __m128 *v66; // rdx
  __m128 *v67; // rax
  __int64 v68; // r13
  __int64 v69; // rbx
  __m128 *v70; // rax
  const char *v71; // rcx
  _QWORD *v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rdx
  _DWORD *v76; // r14
  int v77; // eax
  __int64 v78; // rdi
  _QWORD *v79; // rdx
  int **v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 (__fastcall **v83)(); // rdx
  __int64 (__fastcall **v84)(); // rax
  _QWORD *v85; // rdx
  _QWORD *j; // rax
  _QWORD *v87; // rax
  __int64 v88; // rdx
  unsigned __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rax
  __m128i v92; // xmm0
  _QWORD *v93; // rax
  _QWORD *v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rax
  char *v97; // r14
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rax
  __m128i v101; // xmm0
  __int64 v102; // rsi
  _QWORD *v103; // r14
  __int64 v104; // r13
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 *v109; // rbx
  __int64 v110; // rdi
  __int64 v111; // r14
  __int32 v112; // eax
  size_t v113; // r13
  __int64 v114; // rax
  __int64 v115; // rax
  _QWORD *v116; // rax
  __int64 v117; // rdx
  _QWORD *v118; // rsi
  unsigned __int64 v119; // rcx
  __int64 v120; // [rsp+8h] [rbp-1D8h]
  __int64 v121; // [rsp+10h] [rbp-1D0h]
  _QWORD *v124; // [rsp+28h] [rbp-1B8h]
  int v125; // [rsp+34h] [rbp-1ACh]
  __int64 v126; // [rsp+38h] [rbp-1A8h]
  int v127; // [rsp+40h] [rbp-1A0h]
  unsigned int v128; // [rsp+44h] [rbp-19Ch]
  char v129; // [rsp+4Bh] [rbp-195h]
  int v130; // [rsp+4Ch] [rbp-194h]
  _QWORD *v131; // [rsp+50h] [rbp-190h]
  unsigned int v132; // [rsp+70h] [rbp-170h]
  int v133; // [rsp+74h] [rbp-16Ch]
  char v134; // [rsp+74h] [rbp-16Ch]
  unsigned __int8 *v135; // [rsp+78h] [rbp-168h] BYREF
  __m128i v136; // [rsp+80h] [rbp-160h] BYREF
  __m128i v137; // [rsp+90h] [rbp-150h] BYREF
  int v138; // [rsp+A0h] [rbp-140h]
  void *src; // [rsp+B0h] [rbp-130h] BYREF
  __int128 v140; // [rsp+B8h] [rbp-128h]
  __int64 v141; // [rsp+D0h] [rbp-110h] BYREF
  __int128 v142; // [rsp+D8h] [rbp-108h]
  __m128 *v143; // [rsp+F0h] [rbp-F0h] BYREF
  __int128 v144; // [rsp+F8h] [rbp-E8h]
  __int64 v145[2]; // [rsp+110h] [rbp-D0h] BYREF
  unsigned __int64 *v146; // [rsp+120h] [rbp-C0h] BYREF
  __int128 v147; // [rsp+128h] [rbp-B8h]
  __m128i v148; // [rsp+140h] [rbp-A0h] BYREF
  __int64 v149; // [rsp+150h] [rbp-90h]
  __int128 v150; // [rsp+158h] [rbp-88h]
  __int64 (__fastcall **v151)(); // [rsp+170h] [rbp-70h] BYREF
  __int128 v152; // [rsp+178h] [rbp-68h]
  __int128 v153; // [rsp+188h] [rbp-58h]
  __int64 *v154; // [rsp+198h] [rbp-48h]
  char v155; // [rsp+1A0h] [rbp-40h]
  unsigned __int64 v156; // [rsp+1A8h] [rbp-38h]

  v156 = __readfsqword(0x28u);
  v128 = 0;
  v126 = *(_QWORD *)(a1[5] + 1504);
  if ( (*(_BYTE *)(v126 + 49) & 0x10) != 0 )
  {
    v121 = sub_110340((__int64)a1, 0, (__int64)a3, a4, a5, a6, *(double *)a7.m128i_i64, a8);
    if ( v121 )
    {
      v137 = 0u;
      v11 = *(_QWORD *)(v121 + 8);
      ++*(_DWORD *)(v121 + 24);
      v138 = -1;
      v12 = 3 * v11;
      v13 = *(_QWORD *)v121;
      v148 = 0u;
      LODWORD(v149) = -1;
      v135 = (unsigned __int8 *)(v13 + 8 * v12 - 24);
      for ( i = sub_64960((_QWORD *)a2, 0); ; i = sub_64960((_QWORD *)a2, v15 + v19) )
      {
        v15 = i;
        if ( i == *(_DWORD *)(a2 + 8) )
          break;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v126 + 32LL))(v126, i);
        v17 = sub_64BA0((_QWORD *)a2, v15);
        v18 = v148.m128i_i64[0];
        if ( v16 <= (int)v17 )
          v17 = v16;
        v151 = nullptr;
        *(_QWORD *)&v153 = v15;
        BYTE8(v153) = 1;
        v19 = v17;
        v154 = (__int64 *)(v17 | 0xFFFFFFFF00000000LL);
        v155 = 1;
        v145[0] = (__int64)&v151;
        v152 = 0;
        if ( !v148.m128i_i64[0] )
        {
          v90 = qalloc();
          a8 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v90, (__m128i)(unsigned __int64)v90);
          if ( !v90 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_OWORD *)(v90 + 16) = 0;
          *(_OWORD *)(v90 + 32) = 0;
          *(_OWORD *)(v90 + 48) = 0;
          *(_QWORD *)v90 = v90 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v90 + 64) = 0;
          *(__m128 *)(v90 + 8) = a8;
          v148.m128i_i64[0] = v90;
          *(_QWORD *)v90 = v90 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v90 & 3LL;
          v91 = v148.m128i_i64[0];
          v92 = (__m128i)v148.m128i_u64[0];
          *(_QWORD *)v148.m128i_i64[0] &= ~1uLL;
          a7 = _mm_unpacklo_epi64(v92, v92);
          *(__m128i *)(v91 + 8) = a7;
          *(_QWORD *)v148.m128i_i64[0] |= 2uLL;
          v18 = v148.m128i_i64[0];
LABEL_5:
          sub_1073D0(&v148, v18, 1, v145);
          goto LABEL_6;
        }
        if ( !v148.m128i_i64[1] )
          goto LABEL_5;
        v20 = 1;
        v21 = *(_QWORD *)v148.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v21 & 2) != 0 )
          goto LABEL_15;
        while ( 1 )
        {
          v23 = *(_BYTE *)(v21 + 56);
          if ( v23 <= 1u )
          {
            if ( !v23 )
              goto LABEL_16;
            if ( v15 >= *(_QWORD *)(v21 + 48) )
              break;
          }
          v22 = *(_BYTE **)(v21 + 8);
          v20 = 1;
          if ( (*v22 & 2) != 0 )
            goto LABEL_25;
LABEL_17:
          v21 = (unsigned __int64)v22;
        }
        if ( v15 > *(_QWORD *)(v21 + 48) )
        {
LABEL_16:
          v22 = *(_BYTE **)(v21 + 16);
          v20 = 0;
          if ( (*v22 & 2) != 0 )
            goto LABEL_25;
          goto LABEL_17;
        }
        if ( v21 )
          continue;
LABEL_25:
        v18 = v21;
LABEL_15:
        sub_1073D0(&v148, v18, v20, v145);
LABEL_6:
        if ( v151 )
        {
          *(_QWORD *)&v152 = 0;
          qfree((__int64)v151);
        }
      }
      v24 = *(_QWORD **)v135;
      if ( *(_QWORD *)v135 )
      {
        if ( *((_QWORD *)v135 + 1) )
        {
          v25 = (_QWORD *)v24[1];
          if ( v24 != v25 )
          {
            do
            {
              v151 = nullptr;
              v136.m128i_i64[0] = (__int64)(v25 + 3);
              v152 = 0;
              v26 = sub_1041A0((unsigned __int64 *)&v148, (__int64)(v25 + 3));
              v27 = v151;
              v28 = v152;
              v29 = v26;
              while ( (_QWORD *)v148.m128i_i64[0] != v29 )
              {
                v30 = (__int64 (__fastcall *)())(v29 + 3);
                v31 = *(_BYTE *)(v136.m128i_i64[0] + 32);
                v32 = *((_BYTE *)v29 + 56);
                if ( v32 >= v31
                  && (v31 < v32
                   || *(_QWORD *)(v136.m128i_i64[0] + 24) + *(int *)(v136.m128i_i64[0] + 40) <= (__int64)v29[6]) )
                {
                  break;
                }
                v83 = &v27[v28];
                if ( v83 == v27 )
                  goto LABEL_144;
                v84 = v27;
                while ( v30 != *v84 )
                {
                  if ( v83 == ++v84 )
                    goto LABEL_144;
                }
                if ( v83 == v84 )
                {
LABEL_144:
                  if ( *((_QWORD *)&v152 + 1) < (unsigned __int64)(v28 + 1) )
                  {
                    v151 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v151, (__int64)v27, v28 + 1, 8);
                    v83 = &v151[v152];
                  }
                  *v83 = v30;
                  v27 = v151;
                  v28 = v152 + 1;
                  *(_QWORD *)&v152 = v152 + 1;
                }
                if ( (*v29 & 2) == 0 )
                {
                  v85 = (_QWORD *)v29[2];
                  if ( (*(_BYTE *)v85 & 2) != 0 )
                  {
                    v87 = (_QWORD *)(*v29 & 0xFFFFFFFFFFFFFFFCLL);
                    v88 = *v87;
                    if ( (*v87 & 2) == 0 )
                    {
                      while ( (_QWORD *)v87[2] == v29 )
                      {
                        v29 = v87;
                        v89 = v88 & 0xFFFFFFFFFFFFFFFCLL;
                        v88 = *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v88 & 2) != 0 )
                        {
                          v29 = (_QWORD *)v89;
                          goto LABEL_142;
                        }
                        v87 = (_QWORD *)v89;
                      }
                    }
                    v29 = v87;
                  }
                  else
                  {
                    for ( j = (_QWORD *)v85[1]; (*(_BYTE *)j & 2) == 0; j = (_QWORD *)j[1] )
                      v85 = j;
                    v29 = v85;
                  }
                }
LABEL_142:
                ;
              }
              if ( v28 )
              {
                v33 = 0;
                v133 = 0;
                v34 = *(int **)v136.m128i_i64[0];
                v35 = *(int **)(v136.m128i_i64[0] + 8);
                do
                {
                  v36 = (__int64 *)v27[v33];
                  v37 = v34;
                  if ( 4LL * (_QWORD)v35 )
                  {
                    do
                    {
                      v38 = v36[1];
                      v39 = *v37;
                      v40 = (_DWORD *)(*v36 + 4 * v38);
                      if ( (_DWORD *)*v36 == v40 )
                        goto LABEL_129;
                      v41 = (_DWORD *)*v36;
                      while ( v39 != *v41 )
                      {
                        if ( v40 == ++v41 )
                          goto LABEL_129;
                      }
                      if ( v40 == v41 )
                      {
LABEL_129:
                        if ( v36[2] < (unsigned __int64)(v38 + 1) )
                        {
                          v81 = qvector_reserve((__int64)v36, *v36, v38 + 1, 4);
                          v82 = v36[1];
                          *v36 = v81;
                          v40 = (_DWORD *)(v81 + 4 * v82);
                        }
                        v80 = (int **)v136.m128i_i64[0];
                        *v40 = v39;
                        ++v36[1];
                        v34 = *v80;
                        v35 = v80[1];
                      }
                      ++v37;
                    }
                    while ( v37 != &v34[(_QWORD)v35] );
                    v27 = v151;
                  }
                  v33 = ++v133;
                }
                while ( v133 < (unsigned __int64)v152 );
              }
              if ( v27 )
              {
                *(_QWORD *)&v152 = 0;
                qfree((__int64)v27);
              }
              if ( (*v25 & 2) == 0 )
              {
                v42 = (_QWORD *)v25[2];
                if ( (*(_BYTE *)v42 & 2) != 0 )
                {
                  v93 = (_QWORD *)(*v25 & 0xFFFFFFFFFFFFFFFCLL);
                  v94 = v25;
                  v95 = *v93;
                  if ( (*v93 & 2) == 0 )
                  {
                    while ( (_QWORD *)v93[2] == v94 )
                    {
                      v94 = v93;
                      v25 = (_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCLL);
                      v95 = *(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v95 & 2) != 0 )
                        goto LABEL_49;
                      v93 = v25;
                    }
                  }
                  v25 = v93;
                }
                else
                {
                  do
                  {
                    v25 = v42;
                    v42 = (_QWORD *)v42[1];
                  }
                  while ( (*(_BYTE *)v42 & 2) == 0 );
                }
              }
LABEL_49:
              ;
            }
            while ( *(_QWORD **)v135 != v25 );
          }
        }
      }
      v43 = v148.m128i_i64[1];
      v120 = v148.m128i_i64[0];
      v137 = v148;
      v44 = *(__int64 (__fastcall **)(__int64))(*a1 + 88);
      v45 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
      if ( v44 == sub_134210 )
        v46 = (*(unsigned int (__fastcall **)(unsigned __int64 *))(*a1 + 56))(a1) - 1;
      else
        v46 = (unsigned int)v44((__int64)a1);
      if ( v45 == sub_134310 )
        v125 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8LL * (int)v46) + 352LL);
      else
        v125 = v45((__int64)a1, v46);
      if ( v120 && v43 )
      {
        v128 = 0;
        v124 = *(_QWORD **)(v120 + 8);
        if ( v124 != (_QWORD *)v120 )
        {
          while ( 1 )
          {
            v131 = v124 + 3;
            if ( *((_BYTE *)v124 + 56) != 1 )
              sub_134690(*(double *)a7.m128i_i64);
            if ( !sub_64930((_QWORD *)a2, *((_DWORD *)v124 + 12)) )
              break;
            v47 = v124[4];
            if ( v47 )
            {
              if ( v47 == 1 && !*(_DWORD *)*v131 )
                goto LABEL_124;
            }
            else if ( v125 )
            {
              goto LABEL_124;
            }
            if ( *((_BYTE *)v124 + 56) != 1 )
              sub_134690(*(double *)a7.m128i_i64);
            v127 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v126 + 32LL))(
                     v126,
                     *((unsigned int *)v124 + 12));
            v48 = *((_DWORD *)v124 + 16);
            if ( v48 > 0 )
            {
              v130 = 0;
              do
              {
                v49 = v48 - v130;
                if ( v49 > v127 )
                  v49 = v127;
                v132 = v49;
                if ( *((_BYTE *)v124 + 56) != 1 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCAB4u, *(double *)a7.m128i_i64);
                  goto LABEL_236;
                }
                v50 = *((_DWORD *)v124 + 12) + v130;
                v145[0] = 0;
                v145[1] = 0;
                sub_63E80(v145, v50, v49, *(double *)a7.m128i_i64);
                a7.m128i_i64[0] = 0;
                v146 = nullptr;
                src = nullptr;
                v141 = 0;
                v147 = 0;
                v140 = 0;
                v142 = 0;
                v129 = sub_138470(a1, v131, v145, (__int64 *)&src, (unsigned __int64 *)&v141, v51, 0.0, a8);
                if ( !v129 )
                {
                  if ( v141 )
                  {
                    *(_QWORD *)&v142 = 0;
                    qfree(v141);
                  }
                  if ( src )
                  {
                    *(_QWORD *)&v140 = 0;
                    qfree((__int64)src);
                  }
                  if ( v146 )
                  {
                    *(_QWORD *)&v147 = 0;
                    qfree((__int64)v146);
                  }
                  goto LABEL_123;
                }
                a7.m128i_i64[0] = 0;
                v143 = nullptr;
                v144 = 0;
                if ( !v128 )
                {
                  if ( a3 )
                  {
                    v54 = nullptr;
                    v55 = v140;
                    if ( (_QWORD)v140 )
                    {
                      v113 = 16 * v140;
                      v54 = (void *)qalloc_or_throw(16 * v140, v128, v52, v53);
                      memcpy(v54, src, v113);
                    }
                    a7 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
                    v56 = *a3;
                    if ( *a3 )
                    {
                      a3[1] = 0;
                      v136 = a7;
                      qfree(v56);
                      a7 = _mm_load_si128(&v136);
                    }
                    *a3 = (__int64)v54;
                    *(__m128i *)(a3 + 1) = a7;
                  }
                  v128 = 1;
                }
                v57 = (__int64 *)v141;
                if ( !(16LL * (_QWORD)v142) )
                {
                  if ( !v125 )
                  {
                    v97 = (char *)src;
                    if ( 16LL * (_QWORD)v140 )
                      goto LABEL_182;
                  }
                  goto LABEL_102;
                }
                do
                {
                  a7.m128i_i64[0] = 0;
                  v136.m128i_i32[0] = *(_DWORD *)(*v57 + 72);
                  v58 = v57[1];
                  v148 = 0u;
                  v149 = 0;
                  v150 = 0;
                  v59 = *v57;
                  v135 = (unsigned __int8 *)(v58 + 32);
                  sub_123EA0(v59, v148.m128i_i64, v58 + 32, 1, 0xFFFF0000, 0.0);
                  v60 = (unsigned __int64 *)src;
                  if ( !(16LL * (_QWORD)v140) )
                    goto LABEL_97;
                  while ( 1 )
                  {
                    if ( !sub_125B60(v135, v60[1] + 64, 0, *(double *)a7.m128i_i64) )
                      goto LABEL_96;
                    v61 = *(_DWORD *)(*v60 + 72);
                    v151 = nullptr;
                    *(_QWORD *)&v152 = 0;
                    v134 = sub_6FC30((__int64)a1, (__int64 *)&v151, v61, v136.m128i_u32[0], *(double *)a7.m128i_i64);
                    qfree((__int64)v151);
                    if ( !v134 )
                      goto LABEL_96;
                    v152 = 0u;
                    v151 = &off_4DDA80;
                    v153 = 0u;
                    v154 = &v141;
                    if ( (unsigned int)sub_179EC0(
                                         (__int64 *)a1,
                                         (__int64 *)&v151,
                                         (__int64)&v148,
                                         v61,
                                         v136.m128i_u32[0],
                                         *(_QWORD *)(v60[1] + 8),
                                         v57[1],
                                         3,
                                         0)
                      || (unsigned int)sub_179EC0(
                                         (__int64 *)a1,
                                         (__int64 *)&v151,
                                         (__int64)&v148,
                                         v136.m128i_i32[0],
                                         0xFFFFFFFF,
                                         *(_QWORD *)(v57[1] + 8),
                                         0,
                                         2,
                                         0)
                      || sub_17C4E0(
                           (__int64 *)a1,
                           (__int64)v145,
                           v136.m128i_i32[0],
                           0xFFFFFFFF,
                           *(_QWORD *)(v60[1] + 8),
                           0,
                           2u,
                           0)
                      && sub_17C4E0(
                           (__int64 *)a1,
                           (__int64)v145,
                           v61,
                           v136.m128i_u32[0],
                           *(_QWORD *)(v60[1] + 8),
                           v57[1],
                           1u,
                           0) )
                    {
                      break;
                    }
                    v62 = v144;
                    v63 = (__int64)v143;
                    v64 = *v60;
                    v65 = v60[1];
                    v66 = &v143[v144];
                    if ( v143 != v66 )
                    {
                      v67 = v143;
                      while ( *(_DWORD *)(v64 + 72) != *(_DWORD *)(v67->m128_u64[0] + 72) || v65 != v67->m128_u64[1] )
                      {
                        if ( v66 == ++v67 )
                          goto LABEL_159;
                      }
                      if ( v67 != v66 )
                      {
                        v68 = *v57;
                        v69 = v57[1];
LABEL_91:
                        v70 = (__m128 *)v63;
                        do
                        {
                          if ( *(_DWORD *)(v68 + 72) == *(_DWORD *)(v70->m128_u64[0] + 72) && v70->m128_u64[1] == v69 )
                          {
                            if ( v70 == v66 )
                              goto LABEL_162;
                            goto LABEL_96;
                          }
                          ++v70;
                        }
                        while ( v70 != v66 );
                        v96 = v62 + 1;
                        if ( *((_QWORD *)&v144 + 1) >= (unsigned __int64)(v62 + 1) )
                          goto LABEL_163;
LABEL_165:
                        v143 = (__m128 *)qvector_reserve((__int64)&v143, v63, v96, 16);
                        v66 = &v143[v144];
                        goto LABEL_163;
                      }
                    }
LABEL_159:
                    if ( *((_QWORD *)&v144 + 1) < (unsigned __int64)(v144 + 1) )
                    {
                      v143 = (__m128 *)qvector_reserve((__int64)&v143, (__int64)v143, v144 + 1, 16);
                      v66 = &v143[v144];
                    }
                    a7 = _mm_unpacklo_epi64((__m128i)v64, (__m128i)v65);
                    *v66 = (__m128)a7;
                    v63 = (__int64)v143;
                    *(_QWORD *)&v144 = v144 + 1;
                    v62 = v144;
                    v68 = *v57;
                    v69 = v57[1];
                    v66 = &v143[v144];
                    if ( v66 != v143 )
                      goto LABEL_91;
LABEL_162:
                    v96 = v62 + 1;
                    if ( *((_QWORD *)&v144 + 1) < (unsigned __int64)(v62 + 1) )
                      goto LABEL_165;
LABEL_163:
                    a7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v68, (__m128i)(unsigned __int64)v69);
                    *v66 = (__m128)a7;
                    *(_QWORD *)&v144 = v144 + 1;
LABEL_96:
                    v60 += 2;
                    if ( v60 == (unsigned __int64 *)((char *)src + 16 * (_QWORD)v140) )
                      goto LABEL_97;
                  }
                  v129 = 0;
LABEL_97:
                  if ( v149 )
                  {
                    *(_QWORD *)&v150 = 0;
                    qfree(v149);
                  }
                  v57 += 2;
                  qfree(v148.m128i_i64[0]);
                }
                while ( v57 != (__int64 *)(v141 + 16 * v142) );
                if ( !v125 )
                {
                  v97 = (char *)src;
                  if ( 16LL * (_QWORD)v140 )
                  {
                    do
                    {
LABEL_182:
                      v98 = *((_QWORD *)v97 + 1);
                      v151 = nullptr;
                      v152 = 0u;
                      v153 = 0;
                      v99 = *(_QWORD *)v97;
                      v136.m128i_i64[0] = v98;
                      sub_123EA0(v99, (__int64 *)&v151, v98 + 64, 1, 0xFFFF0000, *(double *)a7.m128i_i64);
                      if ( !sub_17C4E0(
                              (__int64 *)a1,
                              (__int64)&v151,
                              *(_DWORD *)(*(_QWORD *)v97 + 72LL),
                              0xFFFFFFFF,
                              *(_QWORD *)(*((_QWORD *)v97 + 1) + 8LL),
                              0,
                              3u,
                              0) )
                      {
                        v100 = v144;
                        v101 = _mm_loadl_epi64((const __m128i *)v97);
                        a8 = (__m128)_mm_loadl_epi64((const __m128i *)(v97 + 8));
                        v102 = (__int64)v143;
                        if ( *((_QWORD *)&v144 + 1) < (unsigned __int64)(v144 + 1) )
                        {
                          v135 = (unsigned __int8 *)a8.m128_u64[0];
                          v136.m128i_i64[0] = v101.m128i_i64[0];
                          v143 = (__m128 *)qvector_reserve((__int64)&v143, (__int64)v143, v144 + 1, 16);
                          v102 = (__int64)v143;
                          a8 = (__m128)_mm_loadl_epi64((const __m128i *)&v135);
                          v101 = _mm_loadl_epi64(&v136);
                          v100 = v144;
                        }
                        a7 = _mm_unpacklo_epi64(v101, (__m128i)a8);
                        *(__m128i *)(v102 + 16 * v100) = a7;
                        *(_QWORD *)&v144 = v144 + 1;
                      }
                      if ( *((_QWORD *)&v152 + 1) )
                      {
                        *(_QWORD *)&v153 = 0;
                        qfree(*((__int64 *)&v152 + 1));
                      }
                      qfree((__int64)v151);
                      v97 += 16;
                    }
                    while ( v97 != (char *)src + 16 * (_QWORD)v140 );
                  }
                }
                if ( v129 )
                {
LABEL_102:
                  if ( !(_QWORD)v144 )
                    goto LABEL_103;
                  v103 = *(_QWORD **)(a1[5] + 920);
                  if ( *((_BYTE *)v124 + 56) != 1 )
                    sub_134690(*(double *)a7.m128i_i64);
                  v104 = v124[6];
                  LODWORD(v151) = v104;
                  v105 = v103[2];
                  v106 = v103[1];
                  if ( v103[3] < (unsigned __int64)(v105 + 1) )
                  {
                    v115 = qvector_reserve((__int64)(v103 + 1), v106, v105 + 1, 4);
                    v103[1] = v115;
                    v106 = v115;
                    v105 = v103[2];
                  }
                  *(_DWORD *)(v106 + 4 * v105) = v104;
                  v107 = v144;
                  v108 = (__int64)v143;
                  ++v103[2];
                  v109 = (__int64 *)v108;
                  if ( 16 * v107 )
                  {
                    while ( 1 )
                    {
                      v110 = v109[1];
                      if ( *(_DWORD *)v110 )
                      {
                        if ( *(_DWORD *)v110 != 4 )
                        {
                          if ( !under_debugger )
                            sub_383060(0xC4FAu, *(double *)a7.m128i_i64);
                          goto LABEL_236;
                        }
                        if ( *(_DWORD *)(v110 + 36) < (signed int)v132 )
                        {
                          if ( !under_debugger )
                            sub_383060(0xC4FBu, *(double *)a7.m128i_i64);
                          goto LABEL_236;
                        }
                        if ( *(_DWORD *)(v110 + 68) == v132 )
                          goto LABEL_198;
                        if ( *((_BYTE *)v124 + 56) != 1 )
                        {
                          if ( !under_debugger )
                            sub_383060(0xCAB4u, *(double *)a7.m128i_i64);
                          goto LABEL_236;
                        }
                        if ( *(_BYTE *)(v110 + 64) == 1 && *(_DWORD *)(v110 + 72) == *((_DWORD *)v124 + 12) )
                        {
LABEL_198:
                          v111 = *v109;
                          sub_11D5A0(v110);
                          v112 = *(_DWORD *)(v111 + 24);
                          v107 = v144;
                          v128 = 2;
                          v108 = (__int64)v143;
                          v136.m128i_i32[0] = v112;
                          BYTE1(v112) &= ~2u;
                          LOBYTE(v112) = v112 | 0x80;
                          *(_DWORD *)(v111 + 24) = v112;
                        }
                      }
                      v109 += 2;
                      v78 = v108;
                      if ( v109 == (__int64 *)(v108 + 16 * v107) )
                        goto LABEL_115;
                    }
                  }
                  v78 = v108;
                }
                else
                {
LABEL_103:
                  if ( ((unsigned __int8)sub_64780(v145, (_QWORD *)(v126 + 224))
                     || (unsigned __int8)sub_318470(&v146, v126 + 240))
                    && v125 )
                  {
                    a7.m128i_i64[0] = 0;
                    v151 = nullptr;
                    v152 = 0;
                    if ( *((_BYTE *)v124 + 56) != 1 )
                      sub_134690(0.0);
                    sub_1338F0((_DWORD *)v126, (__int64 *)&v151, *((_DWORD *)v124 + 12) + v130, v132);
                    v71 = s1;
                    if ( (_QWORD)v152 )
                      v71 = (const char *)v151;
                    sub_3311F0((_QWORD *)a1[5], 0xFFFFFFFFFFFFFFFFLL, 0xEu, v71);
                    v72 = *(_QWORD **)(a1[5] + 920);
                    v73 = v72[5];
                    v74 = v72[4];
                    v75 = v73 + 1;
                    if ( v72[6] < (unsigned __int64)(v73 + 1) )
                    {
                      v114 = qvector_reserve((__int64)(v72 + 4), v74, v75, 8);
                      v72[4] = v114;
                      v74 = v114;
                      v73 = v72[5];
                      v75 = v73 + 1;
                    }
                    v72[5] = v75;
                    v76 = (_DWORD *)(v74 + 8 * v73);
                    v76[1] = v132;
                    if ( *((_BYTE *)v124 + 56) != 1 )
                      sub_134690(0.0);
                    v77 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v126 + 176LL))(
                            v126,
                            (unsigned int)(*((_DWORD *)v124 + 12) + v130),
                            v132);
                    *v76 = v77;
                    if ( v77 == -1 )
                    {
                      if ( !under_debugger )
                        sub_383060(0xC4F9u, 0.0);
                      goto LABEL_236;
                    }
                    if ( v151 )
                    {
                      *(_QWORD *)&v152 = 0;
                      qfree((__int64)v151);
                    }
                  }
                  v78 = (__int64)v143;
                }
LABEL_115:
                if ( v78 )
                {
                  *(_QWORD *)&v144 = 0;
                  qfree(v78);
                }
                if ( v141 )
                {
                  *(_QWORD *)&v142 = 0;
                  qfree(v141);
                }
                if ( src )
                {
                  *(_QWORD *)&v140 = 0;
                  qfree((__int64)src);
                }
                if ( v146 )
                {
                  *(_QWORD *)&v147 = 0;
                  qfree((__int64)v146);
                }
LABEL_123:
                qfree(v145[0]);
                v130 += v127;
                v48 = *((_DWORD *)v124 + 16);
              }
              while ( v48 > v130 );
            }
LABEL_124:
            if ( (*v124 & 2) == 0 )
            {
              v79 = (_QWORD *)v124[2];
              if ( (*(_BYTE *)v79 & 2) != 0 )
              {
                v116 = (_QWORD *)(*v124 & 0xFFFFFFFFFFFFFFFCLL);
                v117 = *v116;
                if ( (*v116 & 2) == 0 )
                {
                  v118 = v124;
                  while ( v118 == (_QWORD *)v116[2] )
                  {
                    v118 = v116;
                    v119 = v117 & 0xFFFFFFFFFFFFFFFCLL;
                    v117 = *(_QWORD *)(v117 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v117 & 2) != 0 )
                    {
                      v124 = (_QWORD *)v119;
                      goto LABEL_127;
                    }
                    v116 = (_QWORD *)v119;
                  }
                }
                v124 = v116;
              }
              else
              {
                do
                {
                  v124 = v79;
                  v79 = (_QWORD *)v79[1];
                }
                while ( (*(_BYTE *)v79 & 2) == 0 );
              }
            }
LABEL_127:
            if ( (_QWORD *)v120 == v124 )
              goto LABEL_211;
          }
          if ( !under_debugger )
            sub_383060(0xC4F8u, *(double *)a7.m128i_i64);
LABEL_236:
          BUG();
        }
      }
      else
      {
        v128 = 0;
      }
LABEL_211:
      sub_E0E30(v137.m128i_i64);
      sub_104E10(v121, *(double *)a7.m128i_i64);
      return v128;
    }
    if ( !under_debugger )
      sub_383060(0xC50Eu, *(double *)a7.m128i_i64);
    goto LABEL_236;
  }
  return v128;
}

