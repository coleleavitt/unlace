__int64 __fastcall sub_149220(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __m128 a8)
{
  _QWORD *exception; // rdi
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r15
  bool v19; // zf
  __m128i si128; // xmm0
  __int64 *v21; // rsi
  __int64 v22; // r8
  int v23; // r9d
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r12
  unsigned __int64 v28; // rcx
  _QWORD *v29; // r13
  unsigned __int64 *v30; // r13
  unsigned __int64 v31; // rax
  _QWORD *v32; // rbx
  __int64 (__fastcall *v33)(__int64); // rax
  __int32 v34; // eax
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 *v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  __m128i *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 (__fastcall *v43)(__int64); // rsi
  __int64 (__fastcall *v44)(__int64); // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // r13
  int v56; // r8d
  int v57; // r9d
  int v58; // r13d
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 *v61; // rdi
  __int64 v62; // rax
  __int64 *v63; // rax
  int v64; // eax
  unsigned int v65; // r13d
  __int64 v66; // rax
  char v67; // bl
  int v69; // eax
  __m128i *v70; // rdx
  __int64 v71; // rcx
  __int64 (__fastcall *v72)(__int64, int); // rax
  int v73; // eax
  __int64 (__fastcall *v74)(__int64, int, int); // rax
  int v75; // eax
  unsigned __int64 v76; // r13
  void *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r13
  _QWORD *v81; // r13
  __int64 v82; // rax
  _QWORD *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r8
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  const char *v89; // rcx
  int v90; // eax
  _QWORD *v91; // rsi
  int v92; // r8d
  int v93; // r9d
  __int64 v94; // rdi
  void (*v95)(); // rax
  _QWORD *v96; // rax
  unsigned __int64 *v97; // r12
  __int64 v98; // rsi
  _QWORD *v99; // rdx
  _QWORD *i; // rax
  __int64 v101; // rcx
  _QWORD *v102; // rax
  __int64 v103; // rdx
  _QWORD *v104; // rsi
  unsigned __int64 v105; // rcx
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // edx
  char v111; // cl
  __int64 *v112; // rsi
  bool v113; // cc
  _BYTE *v114; // rsi
  char v115; // dl
  __int64 v116; // rax
  __m128i v117; // xmm1
  unsigned __int64 v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rdi
  int v122; // eax
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // r15
  unsigned __int64 v125; // rax
  _QWORD *v126; // rbx
  _QWORD *v127; // rdi
  _QWORD *v128; // rdi
  __int64 *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rax
  unsigned __int64 *v132; // rax
  __int64 v133; // [rsp-8h] [rbp-1A8h]
  _QWORD *v134; // [rsp+0h] [rbp-1A0h]
  _QWORD *v135; // [rsp+18h] [rbp-188h]
  __int64 v136; // [rsp+20h] [rbp-180h]
  __int64 *v137; // [rsp+20h] [rbp-180h]
  __int64 v138; // [rsp+20h] [rbp-180h]
  __int64 v139; // [rsp+28h] [rbp-178h]
  unsigned __int64 v140; // [rsp+28h] [rbp-178h]
  __int64 v141; // [rsp+28h] [rbp-178h]
  size_t n[2]; // [rsp+30h] [rbp-170h] BYREF
  __int64 v143; // [rsp+40h] [rbp-160h]
  _QWORD *v144; // [rsp+48h] [rbp-158h]
  __int64 *v145; // [rsp+50h] [rbp-150h]
  __int64 *v146; // [rsp+58h] [rbp-148h]
  unsigned int v147; // [rsp+60h] [rbp-140h] BYREF
  int v148; // [rsp+64h] [rbp-13Ch] BYREF
  int *v149; // [rsp+68h] [rbp-138h] BYREF
  unsigned __int64 *v150; // [rsp+70h] [rbp-130h] BYREF
  __int128 v151; // [rsp+78h] [rbp-128h]
  __int64 v152; // [rsp+90h] [rbp-110h] BYREF
  __int128 v153; // [rsp+98h] [rbp-108h]
  int v154; // [rsp+A8h] [rbp-F8h]
  __int64 v155[2]; // [rsp+B0h] [rbp-F0h] BYREF
  __int64 *v156; // [rsp+C0h] [rbp-E0h] BYREF
  __int128 v157; // [rsp+C8h] [rbp-D8h]
  __int64 v158[2]; // [rsp+E0h] [rbp-C0h] BYREF
  __int64 v159; // [rsp+F0h] [rbp-B0h] BYREF
  __m128i v160; // [rsp+F8h] [rbp-A8h]
  __int64 v161; // [rsp+110h] [rbp-90h] BYREF
  __int64 v162; // [rsp+118h] [rbp-88h]
  unsigned __int64 *v163; // [rsp+120h] [rbp-80h] BYREF
  __m128i v164; // [rsp+128h] [rbp-78h] BYREF
  const char *v165; // [rsp+140h] [rbp-60h] BYREF
  __int128 v166; // [rsp+148h] [rbp-58h] BYREF
  __int128 v167; // [rsp+158h] [rbp-48h]
  unsigned __int64 v168; // [rsp+168h] [rbp-38h]

  v168 = __readfsqword(0x28u);
  v10 = (__int64 *)a1[5];
  v147 = 0;
  sub_144130(v10, nullptr, &v147, a4, a5, a6, a7, a8);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1[5] + 936) + 24LL))(*(_QWORD *)(a1[5] + 936));
  v15 = a1[5];
  v155[0] = 0;
  v155[1] = 0;
  v16 = *(_QWORD *)(v15 + 128);
  v17 = *(_QWORD *)(v15 + 1440);
  v156 = nullptr;
  v157 = 0;
  v18 = v16;
  if ( v16 + v17 - 1 >= v17 )
  {
    v156 = (__int64 *)qvector_reserve((__int64)&v156, 0, 1, 16);
    v11 = 16 * v157;
    *(__m128i *)&v156[2 * v157] = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v18);
    v15 = a1[5];
    *(_QWORD *)&v157 = v157 + 1;
  }
  v19 = *(_BYTE *)(v15 + 320) == 0;
  v158[0] = 0;
  v158[1] = 0;
  v159 = 0;
  v160 = 0;
  if ( !v19 )
    sub_1390C0(v15, (__int64)v158, nullptr, v15 + 328, 0xFFFFFFFFFFFFFFFFLL, 0);
  v152 = 0;
  v154 = 0;
  v153 = 0;
  v143 = sub_1108E0((__int64)a1, 0, v11, v12, v13, v14, 0.0, a8);
  if ( !v143 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
    BUG();
  }
  si128.m128i_i64[0] = 0;
  v21 = (__int64 *)&v165;
  ++*(_DWORD *)(v143 + 24);
  LODWORD(v167) = 0;
  v165 = nullptr;
  v166 = 0;
  nullsub_40();
  sub_66C80((__int64)&v165, 0.0);
  for ( LODWORD(v144) = 1; ; LODWORD(v144) = (_DWORD)v144 + 1 )
  {
    v24 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v24 != sub_101AA0 )
      break;
    v25 = a1[5];
    v26 = v25;
    if ( (int)v144 >= *(_DWORD *)(v25 + 64) )
      goto LABEL_78;
LABEL_9:
    v27 = *(_QWORD *)(*(_QWORD *)(v25 + 528) + 8LL * (int)v144);
    v136 = (int)v144;
    v28 = v143;
    v139 = 24LL * (int)v144;
    v29 = *(_QWORD **)v143;
    v163 = nullptr;
    v161 = 0;
    v30 = &v29[(unsigned __int64)v139 / 8];
    v164 = 0;
    v162 = 0;
    v31 = *v30;
    if ( *v30 && v30[1] )
    {
      v32 = *(_QWORD **)(v31 + 8);
      v145 = &v161;
      if ( (_QWORD *)v31 != v32 )
      {
LABEL_12:
        while ( 1 )
        {
          v113 = v32[4] <= 1u;
          v146 = v32 + 3;
          if ( v113 )
            break;
LABEL_13:
          if ( (*v32 & 2) != 0 )
          {
LABEL_16:
            if ( (_QWORD *)*v30 == v32 )
              goto LABEL_17;
          }
          else
          {
            v26 = v32[2];
            if ( (*(_BYTE *)v26 & 2) == 0 )
            {
              do
              {
                v32 = (_QWORD *)v26;
                v26 = *(_QWORD *)(v26 + 8);
              }
              while ( (*(_BYTE *)v26 & 2) == 0 );
              goto LABEL_16;
            }
            v54 = (__int64 *)(*v32 & 0xFFFFFFFFFFFFFFFCLL);
            v26 = *v54;
            if ( (*v54 & 2) == 0 )
            {
              while ( (_QWORD *)v54[2] == v32 )
              {
                v32 = v54;
                v28 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v26 & 2) != 0 )
                {
                  v32 = (_QWORD *)v28;
                  if ( *v30 != v28 )
                    goto LABEL_12;
                  goto LABEL_17;
                }
                v54 = (__int64 *)v28;
              }
            }
            v32 = v54;
            if ( (__int64 *)*v30 == v54 )
              goto LABEL_17;
          }
        }
        v165 = nullptr;
        v166 = 0u;
        v167 = 0;
        sub_103D60((__int64)(v32 + 3), v25, (__int64 *)&v165);
        sub_64700((__int64 *)&v165, (__int64 *)(v27 + 240));
        n[0] = (size_t)&v166 + 8;
        sub_3180C0((__int64 *)&v166 + 1, v27 + 256, v40, v41);
        if ( (unsigned __int8)sub_64880(&v165) && !(_QWORD)v167 )
          goto LABEL_40;
        if ( v146[1] != 1 )
        {
LABEL_52:
          sub_64280(v145, (__int64 *)&v165, *(double *)si128.m128i_i64);
          sub_316CB0((__int64 *)&v163, (__int64 **)n[0], v52, v53);
          if ( *((_QWORD *)&v166 + 1) )
          {
            *(_QWORD *)&v167 = 0;
            qfree(*((__int64 *)&v166 + 1));
          }
          goto LABEL_42;
        }
        if ( *(_DWORD *)*v146 == (_DWORD)v144 )
        {
          if ( (unsigned __int8)sub_139390(v27, v30, (__int64)v146, *(double *)si128.m128i_i64, a8) )
            goto LABEL_52;
        }
        else
        {
          v42 = *a1;
          v43 = sub_134210;
          LODWORD(v146) = *(_DWORD *)*v146;
          v44 = *(__int64 (__fastcall **)(__int64))(v42 + 88);
          if ( v44 == sub_134210 )
          {
            v45 = (*(__int64 (__fastcall **)(__int64 *))(v42 + 56))(a1);
            v49 = (unsigned int)v146;
            v50 = v45 - 1;
          }
          else
          {
            v50 = v44((__int64)a1);
            v49 = (unsigned int)v146;
          }
          if ( (_DWORD)v49 == v50 )
          {
            v51 = a1[5];
            if ( (*(_BYTE *)(v51 + 1) & 0x40) != 0 )
            {
LABEL_49:
              if ( *(_BYTE *)(v51 + 320) )
                v146 = v158;
              else
                v146 = (__int64 *)(sub_1D5170(v51, (__int64)v43, v49, v46) + 160);
              sub_64640((__int64 *)&v165, v146, v49, v46, v47, v48);
              sub_317C60((__int64 *)n[0], (__int64)(v146 + 2));
              goto LABEL_52;
            }
            v146 = *(__int64 **)(v51 + 1504);
            sub_64700((__int64 *)&v165, v146 + 23);
            v43 = (__int64 (__fastcall *)(__int64))(v146 + 25);
            sub_3180C0((__int64 *)n[0], (__int64)(v146 + 25), v70, v71);
            if ( !(unsigned __int8)sub_64880(&v165) || (_QWORD)v167 )
            {
              v51 = a1[5];
              goto LABEL_49;
            }
          }
        }
LABEL_40:
        if ( *((_QWORD *)&v166 + 1) )
        {
          *(_QWORD *)&v167 = 0;
          qfree(*((__int64 *)&v166 + 1));
        }
LABEL_42:
        qfree((__int64)v165);
        v25 = a1[5];
        goto LABEL_13;
      }
LABEL_17:
      if ( (*(_BYTE *)(v25 + 1) & 0x10) == 0 )
      {
LABEL_63:
        sub_64640(v145, v155, v26, v28, v22, v23);
        sub_317C60((__int64 *)&v163, (__int64)&v156);
        goto LABEL_64;
      }
    }
    else
    {
      v145 = &v161;
      if ( (*(_BYTE *)(v25 + 1) & 0x10) == 0 )
        goto LABEL_63;
    }
    v33 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v33 == sub_101AA0 )
      v34 = *(_DWORD *)(v25 + 64);
    else
      v34 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v33)(a1, v25, v26);
    v35 = (unsigned int)v144;
    if ( v34 - 2 != (_DWORD)v144
      || ((v26 = (__int64)sub_1342F0, v72 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96), v72 != sub_1342F0)
        ? (v25 = (unsigned int)v144, v73 = v72((__int64)a1, (int)v144))
        : (v35 = v136, v73 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8 * v136) + 376LL)),
          v73 != 1
       || ((v26 = (__int64)sub_134330, v74 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112), v74 != sub_134330)
         ? (v25 = (unsigned int)v144, v75 = v74((__int64)a1, (int)v144, 0))
         : (v75 = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8 * v136) + 368LL)),
           v35 = (unsigned int)((_DWORD)v144 + 1),
           LODWORD(v146) = v35,
           (_DWORD)v35 != v75)) )
    {
      if ( !(_QWORD)v153 )
        sub_110970(a1, (__int64)&v152, 32, v35, v22, v23, *(double *)si128.m128i_i64, a8);
      v146 = (__int64 *)(v152 + v139);
      v36 = *(__int64 **)(v152 + v139);
      if ( v36 )
      {
        v35 = (__int64)v146;
        if ( v146[1] )
        {
          v37 = (__int64 *)v36[1];
          if ( v36 != v37 )
          {
            n[0] = (size_t)v155;
            do
            {
              v26 = (__int64)(v37 + 3);
              if ( !v37[4] )
              {
                sub_105300((__int64)&v165, a1[5], v26);
                sub_64280(v145, (__int64 *)&v165, *(double *)si128.m128i_i64);
                sub_316CB0((__int64 *)&v163, (__int64 **)&v166 + 1, v38, v39);
                if ( *((_QWORD *)&v166 + 1) )
                {
                  *(_QWORD *)&v167 = 0;
                  qfree(*((__int64 *)&v166 + 1));
                }
                qfree((__int64)v165);
              }
              if ( (*v37 & 2) == 0 )
              {
                v26 = v37[2];
                if ( (*(_BYTE *)v26 & 2) != 0 )
                {
                  v63 = (__int64 *)(*v37 & 0xFFFFFFFFFFFFFFFCLL);
                  v26 = *v63;
                  if ( (*v63 & 2) == 0 )
                  {
                    while ( (__int64 *)v63[2] == v37 )
                    {
                      v37 = (__int64 *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                      v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v26 & 2) != 0 )
                        goto LABEL_34;
                      v35 = (__int64)v63;
                      v63 = v37;
                      v37 = (__int64 *)v35;
                    }
                  }
                  v37 = v63;
                }
                else
                {
                  do
                  {
                    v37 = (__int64 *)v26;
                    v26 = *(_QWORD *)(v26 + 8);
                  }
                  while ( (*(_BYTE *)v26 & 2) == 0 );
                }
              }
LABEL_34:
              ;
            }
            while ( (__int64 *)*v146 != v37 );
          }
        }
      }
      goto LABEL_64;
    }
    if ( (*(_BYTE *)(a1[5] + 5) & 0x10) != 0 )
    {
      if ( !v160.m128i_i64[0] )
      {
        v76 = *(_QWORD *)(v27 + 224);
        v77 = nullptr;
        if ( v76 )
        {
          n[0] = 16 * v76;
          v77 = (void *)qalloc_or_throw(16 * v76, v25, 16 * v76, v35);
          memcpy(v77, *(const void **)(v27 + 216), n[0]);
        }
        si128 = _mm_unpacklo_epi64((__m128i)v76, (__m128i)v76);
        if ( v159 )
        {
          *(__m128i *)n = si128;
          v160.m128i_i64[0] = 0;
          qfree(v159);
          si128 = _mm_load_si128((const __m128i *)n);
        }
        v159 = (__int64)v77;
        v160 = si128;
      }
      sub_64640(v155, v158, v26, v35, v22, v23);
      sub_317C60((__int64 *)&v156, (__int64)&v159);
    }
    sub_64280(v145, v155, *(double *)si128.m128i_i64);
    n[0] = (size_t)&v163;
    sub_316CB0((__int64 *)&v163, &v156, v78, v79);
    v55 = a1[5];
    if ( *(_QWORD *)(v27 + 56) )
    {
      v80 = *(_QWORD *)(*(_QWORD *)(v55 + 528) + 8LL * (int)v146);
      v146 = (__int64 *)(v80 + 160);
      if ( !(unsigned __int8)sub_64880((_QWORD *)(v80 + 160)) || *(_QWORD *)(v80 + 184) )
      {
        v81 = (_QWORD *)sub_129150(v27, v146, *(_QWORD *)(v27 + 56), 0, 0, 0, *(double *)si128.m128i_i64, a8, 0x101u);
        v26 = v133;
        if ( v81 )
        {
          if ( *((_BYTE *)v81 + 32) == 10 && (v82 = v81[5], *(_BYTE *)v82 == 5) )
          {
            v146 = v81 + 4;
LABEL_122:
            v83 = *(_QWORD **)(v27 + 64);
            v84 = *(_QWORD *)(*(_QWORD *)(v82 + 8) + 8LL);
            v85 = v83[16];
            if ( v84 < v85 )
            {
              v86 = v85 - v84;
              v87 = *(_QWORD *)(*(_QWORD *)(v83[187] + 24LL) + 16LL) & (v83[180] + v84);
              v167 = 0;
              v88 = v87;
              v140 = v87;
              v165 = nullptr;
              v166 = 0u;
              if ( v86 + v87 - 1 >= v87 )
              {
                v138 = v86;
                v131 = qvector_reserve((__int64)&v166 + 8, 0, 1, 16);
                v88 = v140;
                *((_QWORD *)&v166 + 1) = v131;
                v86 = v138;
                v83 = (_QWORD *)(16 * v167);
                v132 = (unsigned __int64 *)(16 * v167 + v131);
                *v132 = v140;
                v132[1] = v138;
                *(_QWORD *)&v167 = v167 + 1;
              }
              sub_64640(v145, (__int64 *)&v165, (__int64)v83, v88, v86, v23);
              sub_317C60((__int64 *)n[0], (__int64)&v166 + 8);
              sub_93B40((__int64 *)&v165);
            }
            v150 = nullptr;
            v151 = 0;
            sub_1B2660(v146[1], (char *)&v150, 4u);
            si128.m128i_i64[0] = 0;
            v165 = nullptr;
            v166 = 0;
            tag_remove();
            v89 = s1;
            if ( (_QWORD)v166 )
              v89 = v165;
            sub_3311F0(*(_QWORD **)(v27 + 64), v81[3], 0x2Fu, v89);
            if ( v165 )
            {
              *(_QWORD *)&v166 = 0;
              qfree((__int64)v165);
            }
            if ( v150 )
            {
              *(_QWORD *)&v151 = 0;
              qfree((__int64)v150);
            }
          }
          else if ( *((_BYTE *)v81 + 48) == 10 )
          {
            v82 = v81[7];
            if ( *(_BYTE *)v82 == 5 )
            {
              v146 = v81 + 6;
              goto LABEL_122;
            }
          }
        }
      }
LABEL_64:
      v55 = a1[5];
    }
    sub_64640(v145, (__int64 *)(v55 + 256), v26, v35, v22, v23);
    v21 = (__int64 *)(v55 + 272);
    sub_317C60((__int64 *)&v163, v55 + 272);
    if ( (unsigned __int8)sub_64880(v145) && !v164.m128i_i64[0] )
    {
      v61 = v163;
    }
    else
    {
      v21 = *(__int64 **)(a1[5] + 1504);
      v58 = sub_A53D0(
              (const __m128i *)v27,
              (__int64)v21,
              *(unsigned int **)(v27 + 56),
              v145,
              v56,
              v57,
              *(double *)si128.m128i_i64,
              a8);
      if ( v58 )
      {
        v69 = *(_DWORD *)(v27 + 24);
        v21 = (__int64 *)"global dead elimination result, total dead: %d";
        BYTE1(v69) &= ~2u;
        LOBYTE(v69) = v69 | 0x80;
        *(_DWORD *)(v27 + 24) = v69;
        sub_A2520(v27, "global dead elimination result, total dead: %d");
      }
      v59 = *(_QWORD *)(v27 + 80);
      v147 += v58;
      *(_QWORD *)(v27 + 80) = v161;
      v161 = v59;
      v60 = *(_QWORD *)(v27 + 88);
      *(_QWORD *)(v27 + 88) = v162;
      v162 = v60;
      v61 = *(unsigned __int64 **)(v27 + 96);
      v62 = *(_QWORD *)(v27 + 112);
      *(_QWORD *)(v27 + 96) = v163;
      si128 = _mm_loadu_si128(&v164);
      *(__m128i *)(v27 + 104) = si128;
      v163 = v61;
      v164.m128i_i64[1] = v62;
    }
    if ( v61 )
    {
      v164.m128i_i64[0] = 0;
      qfree((__int64)v61);
    }
    qfree(v161);
  }
  v64 = ((__int64 (__fastcall *)(__int64 *, __int64 *))v24)(a1, v21);
  v25 = a1[5];
  v26 = v25;
  if ( (int)v144 < v64 )
    goto LABEL_9;
LABEL_78:
  v65 = v147;
  if ( v147 )
  {
    if ( (*(_BYTE *)(v25 + 1) & 0x10) != 0 )
    {
      sub_190300(v25, (const __m128i *)v25);
      v26 = a1[5];
    }
    v66 = *(_QWORD *)(v26 + 784);
    if ( v66 )
    {
      *(_DWORD *)(v66 + 48) = 63;
      v26 = a1[5];
    }
  }
  v67 = *(_BYTE *)(v26 + 320);
  if ( v67 )
  {
    if ( (*(_BYTE *)(v26 + 1) & 0x40) != 0 )
    {
      v90 = get_tinfo_property() & 0xFFFFFFF0;
      if ( v90 != 64 && v90 != 208 )
      {
        v91 = (_QWORD *)a1[5];
        si128.m128i_i64[0] = 0;
        v161 = 0;
        v163 = nullptr;
        v162 = 0;
        v145 = &v161;
        v164 = 0;
        sub_134DA0(&v161, v91, 0.0);
        v94 = *(_QWORD *)(a1[5] + 1504);
        v95 = *(void (**)())(*(_QWORD *)v94 + 120LL);
        if ( v95 != nullsub_74 )
          ((void (__fastcall *)(__int64, __int64 *))v95)(v94, v145);
        v134 = *(_QWORD **)v143;
        v96 = **(_QWORD ***)v143;
        if ( !v96 )
          goto LABEL_139;
        if ( !v134[1] )
          goto LABEL_139;
        v135 = (_QWORD *)v96[1];
        if ( v96 == v135 )
          goto LABEL_139;
        v141 = 0;
        v97 = nullptr;
        while ( 1 )
        {
          v19 = v135[4] == 0;
          v144 = v135 + 3;
          if ( !v19 )
            break;
LABEL_146:
          if ( (*v135 & 2) == 0 )
          {
            v99 = (_QWORD *)v135[2];
            if ( (*(_BYTE *)v99 & 2) != 0 )
            {
              v102 = (_QWORD *)(*v135 & 0xFFFFFFFFFFFFFFFCLL);
              v103 = *v102;
              if ( (*v102 & 2) == 0 )
              {
                v104 = v135;
                while ( (_QWORD *)v102[2] == v104 )
                {
                  v104 = v102;
                  v105 = v103 & 0xFFFFFFFFFFFFFFFCLL;
                  v103 = *(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v103 & 2) != 0 )
                  {
                    v135 = (_QWORD *)v105;
                    goto LABEL_151;
                  }
                  v102 = (_QWORD *)v105;
                }
              }
              v135 = v102;
            }
            else
            {
              for ( i = (_QWORD *)v99[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v99 = i;
              v135 = v99;
            }
          }
LABEL_151:
          v101 = (__int64)v135;
          if ( v135 == (_QWORD *)*v134 )
          {
            if ( v97 )
            {
              if ( !v141 )
              {
                sub_93B40(v145);
LABEL_155:
                qfree((__int64)v97);
                goto LABEL_85;
              }
              v118 = v97[1];
              while ( v97 != (unsigned __int64 *)v118 )
              {
                v119 = a1[5];
                v120 = *(unsigned int *)(v118 + 24);
                if ( (unsigned int)v120 >= *(_DWORD *)(v119 + 64) )
                  sub_1346B0(0.0);
                v121 = *(_QWORD *)(*(_QWORD *)(v119 + 528) + 8 * v120);
                v122 = sub_A4D50(v121, *(int **)(v121 + 48), (__int64 *)(v118 + 32), v101, v92, v93);
                v147 += v122;
                v65 = v147;
                if ( (*(_QWORD *)v118 & 2) == 0 )
                {
                  v123 = *(_QWORD *)(v118 + 16);
                  if ( (*(_BYTE *)v123 & 2) != 0 )
                  {
                    v129 = (__int64 *)(*(_QWORD *)v118 & 0xFFFFFFFFFFFFFFFCLL);
                    v130 = *v129;
                    if ( (*v129 & 2) != 0 || v129[2] != v118 )
                    {
LABEL_200:
                      v118 = (unsigned __int64)v129;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v118 = v130 & 0xFFFFFFFFFFFFFFFCLL;
                        v130 = *(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v130 & 2) != 0 )
                          break;
                        v101 = (__int64)v129;
                        v129 = (__int64 *)v118;
                        if ( *(_QWORD *)(v118 + 16) != v101 )
                          goto LABEL_200;
                      }
                    }
                  }
                  else
                  {
                    do
                    {
                      v118 = v123;
                      v123 = *(_QWORD *)(v123 + 8);
                    }
                    while ( (*(_BYTE *)v123 & 2) == 0 );
                  }
                }
              }
              sub_93B40(v145);
              v124 = *v97;
              v125 = *v97 & 0xFFFFFFFFFFFFFFFCLL;
              v126 = (_QWORD *)v125;
              if ( (*(_BYTE *)v125 & 2) != 0 )
                goto LABEL_155;
              v127 = *(_QWORD **)(v125 + 8);
              if ( (*(_BYTE *)v127 & 2) != 0 )
              {
                v128 = *(_QWORD **)(v125 + 16);
                if ( (*(_BYTE *)v128 & 2) != 0 )
                {
LABEL_210:
                  sub_93B40(v126 + 4);
                  *v126 |= 2uLL;
LABEL_197:
                  if ( v124 > 3 )
                    qfree((__int64)v126);
                  goto LABEL_155;
                }
              }
              else
              {
                sub_137120(v127);
                v128 = (_QWORD *)v126[2];
                if ( (*(_BYTE *)v128 & 2) != 0 )
                  goto LABEL_196;
              }
              sub_137120(v128);
LABEL_196:
              if ( (*(_BYTE *)v126 & 2) != 0 )
                goto LABEL_197;
              goto LABEL_210;
            }
LABEL_139:
            sub_93B40(v145);
            goto LABEL_85;
          }
        }
        v98 = a1[5];
        v165 = nullptr;
        v166 = 0u;
        v167 = 0;
        sub_103D60((__int64)(v135 + 3), v98, (__int64 *)&v165);
        if ( (unsigned __int8)sub_64780(v145, &v165)
          || (n[0] = (size_t)&v166 + 8, (unsigned __int8)sub_318470(&v163, (__int64)&v166 + 8))
          || (v106 = 0, LODWORD(v146) = 0, !v144[1]) )
        {
LABEL_145:
          sub_93B40((__int64 *)&v165);
          goto LABEL_146;
        }
        while ( 1 )
        {
          v110 = *(_DWORD *)(*v144 + 4 * v106);
          v148 = v110;
          v149 = &v148;
          if ( v97 )
          {
            if ( v141 )
            {
              v107 = *v97 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (*(_BYTE *)v107 & 2) != 0 )
              {
                v107 = (unsigned __int64)v97;
                v115 = 1;
              }
              else
              {
                v111 = v67;
                v112 = (__int64 *)(v107 + 24);
                v113 = v110 <= *(_DWORD *)(v107 + 24);
                if ( v110 < *(_DWORD *)(v107 + 24) )
                {
LABEL_172:
                  v114 = *(_BYTE **)(v107 + 8);
                  v111 = v67;
                  goto LABEL_173;
                }
                while ( !v113 )
                {
                  v114 = *(_BYTE **)(v107 + 16);
                  v111 = 0;
LABEL_173:
                  if ( (*v114 & 2) != 0 )
                    goto LABEL_180;
                  v107 = (unsigned __int64)v114;
                  v112 = (__int64 *)(v114 + 24);
                  v113 = v110 <= *(_DWORD *)v112;
                  if ( v110 < *(_DWORD *)v112 )
                    goto LABEL_172;
                }
                v137 = v112;
                if ( v107 )
                  goto LABEL_167;
LABEL_180:
                v115 = v111;
              }
              v150 = v97;
              *(_QWORD *)&v151 = v141;
              v107 = sub_148FF0((__m128i *)&v150, (unsigned __int64 *)v107, v115, &v149);
              goto LABEL_166;
            }
          }
          else
          {
            v116 = qalloc();
            v97 = (unsigned __int64 *)v116;
            v117 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v116, (__m128i)(unsigned __int64)v116);
            if ( !v116 )
            {
              exception = __cxa_allocate_exception(8u);
              *exception = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            si128.m128i_i64[0] = 0;
            *(_QWORD *)(v116 + 64) = 0;
            *(_OWORD *)(v116 + 16) = 0;
            *(_OWORD *)(v116 + 32) = 0;
            *(_OWORD *)(v116 + 48) = 0;
            *(__m128i *)(v116 + 8) = v117;
            *(_QWORD *)v116 = v116 & 0xFFFFFFFFFFFFFFFCLL | 2;
          }
          v150 = v97;
          *(_QWORD *)&v151 = v141;
          v107 = sub_148FF0((__m128i *)&v150, v97, 1, &v149);
LABEL_166:
          v97 = v150;
          v141 = v151;
          v137 = (__int64 *)(v107 + 24);
LABEL_167:
          sub_64280((__int64 *)(v107 + 32), (__int64 *)&v165, 0.0);
          sub_316CB0(v137 + 3, (__int64 **)n[0], v108, v109);
          LODWORD(v146) = (_DWORD)v146 + 1;
          v106 = (int)v146;
          if ( (unsigned __int64)(int)v146 >= v144[1] )
            goto LABEL_145;
        }
      }
    }
  }
LABEL_85:
  sub_104E10(v143, *(double *)si128.m128i_i64);
  sub_66C80((__int64)&v152, *(double *)si128.m128i_i64);
  if ( v159 )
  {
    v160.m128i_i64[0] = 0;
    qfree(v159);
  }
  qfree(v158[0]);
  if ( v156 )
  {
    *(_QWORD *)&v157 = 0;
    qfree((__int64)v156);
  }
  qfree(v155[0]);
  return v65;
}

