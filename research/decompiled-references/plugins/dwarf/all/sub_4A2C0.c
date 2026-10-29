__int64 __fastcall sub_4A2C0(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rdx
  char *idati; // rax
  __int64 v6; // r13
  char v7; // dl
  bool v8; // zf
  int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  _QWORD *v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  size_t v18; // r9
  void *v19; // rax
  __int64 v20; // r14
  const char *v21; // rdx
  __int64 v22; // r15
  __int64 *v23; // rax
  const char *v24; // rsi
  unsigned __int64 v25; // r15
  __int64 v26; // r13
  __int64 i; // r8
  const __m128i *v28; // r12
  __m128i v29; // xmm0
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rdi
  const __m128i *v32; // rsi
  __int64 v33; // rcx
  __m128i v34; // xmm0
  unsigned __int64 v35; // xmm1_8
  __int64 v36; // rbx
  char *v37; // r15
  unsigned __int64 v38; // r12
  char *j; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  _QWORD *v42; // rsi
  __int64 v43; // r9
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rdi
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __m128i *v52; // r14
  __int64 v53; // rbx
  __int64 v54; // r12
  size_t v55; // r13
  __m128i v56; // xmm0
  __int32 v57; // eax
  __m128i v58; // xmm0
  __int32 v59; // eax
  __m128i v60; // xmm0
  __int8 *v61; // r15
  __m128i v62; // xmm0
  size_t v63; // r13
  void *v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // r13
  unsigned __int64 v67; // r14
  size_t v68; // r8
  const void *v69; // r12
  void *v70; // rax
  __int64 v71; // rax
  char v72; // si
  __int64 v73; // rcx
  __m128 v74; // xmm0
  const char *v75; // rbx
  __int64 *v76; // rax
  int v77; // ecx
  int v78; // r8d
  int v79; // r9d
  const char *v80; // rsi
  __int64 v81; // r13
  __int64 v82; // rbx
  __int64 v83; // rbp
  __int64 v84; // rdi
  __int64 v85; // rdi
  _QWORD *v86; // rdi
  __int64 v87; // r13
  __int64 v88; // rbp
  _QWORD *v89; // rbx
  __int64 v90; // rdi
  __int64 v91; // rdi
  char v92; // al
  __int64 v93; // rax
  __int64 v94; // rsi
  void *v95; // rax
  const char *v96; // r12
  __int64 *v97; // rax
  int v98; // ecx
  int v99; // r8d
  int v100; // r9d
  const char *v101; // rsi
  __int64 v102; // rdi
  int v103; // r13d
  const char *v104; // r12
  __int64 *v105; // rax
  int v106; // r9d
  const char *v107; // rsi
  __int64 v108; // r14
  _QWORD *v109; // r15
  const char *v110; // rbx
  char *v111; // r13
  const char *v112; // rsi
  _QWORD *v113; // rax
  int v114; // r13d
  _QWORD *v115; // rbx
  const char *v116; // rdx
  __int64 *v117; // rax
  const char *v118; // rsi
  __int64 v119; // r13
  const char *v120; // rcx
  const char *v121; // rdx
  __int64 *v122; // rax
  const char *v123; // rsi
  __int64 tinfo_size; // r13
  unsigned __int64 v125; // rsi
  char *v126; // rax
  char *v127; // rdx
  const char *v128; // r13
  const char *v129; // rbx
  __int64 *v130; // rax
  int v131; // r8d
  int v132; // r9d
  const char *v133; // rsi
  int v134; // ebx
  int v135; // r13d
  const char *v136; // rcx
  const char *v137; // rdx
  __int64 *v138; // rax
  const char *v139; // rsi
  const char *v140; // rbx
  const char *v141; // r13
  __int64 *v142; // rax
  int v143; // r8d
  int v144; // r9d
  const char *v145; // rsi
  char *v146; // rdi
  void *v147; // r12
  void *v148; // rbp
  char *v149; // rbx
  __int64 v150; // rdi
  __int64 v151; // rdi
  __int64 v152; // rax
  __int64 *v153; // rax
  const char *v154; // rbx
  __int64 *v155; // rax
  int v156; // ecx
  int v157; // r8d
  int v158; // r9d
  const char *v159; // rsi
  _WORD *src; // [rsp+8h] [rbp-150h]
  void *srca; // [rsp+8h] [rbp-150h]
  int srcb; // [rsp+8h] [rbp-150h]
  __int64 srcc; // [rsp+8h] [rbp-150h]
  void *srcf; // [rsp+8h] [rbp-150h]
  char *srcd; // [rsp+8h] [rbp-150h]
  void *srcg; // [rsp+8h] [rbp-150h]
  void *srce; // [rsp+8h] [rbp-150h]
  int v168; // [rsp+10h] [rbp-148h]
  __int64 v169; // [rsp+10h] [rbp-148h]
  __int64 v170; // [rsp+18h] [rbp-140h]
  char *v171; // [rsp+20h] [rbp-138h]
  int v172; // [rsp+20h] [rbp-138h]
  int v173; // [rsp+20h] [rbp-138h]
  int v174; // [rsp+20h] [rbp-138h]
  int v175; // [rsp+28h] [rbp-130h]
  int v176; // [rsp+28h] [rbp-130h]
  int v177; // [rsp+28h] [rbp-130h]
  int v178; // [rsp+30h] [rbp-128h]
  int v179; // [rsp+30h] [rbp-128h]
  __int64 v180; // [rsp+40h] [rbp-118h] BYREF
  __int128 v181; // [rsp+48h] [rbp-110h]
  __int64 v182; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v183; // [rsp+68h] [rbp-F0h]
  __int128 v184; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v185; // [rsp+88h] [rbp-D0h]
  int v186; // [rsp+90h] [rbp-C8h]
  __int64 tinfo_property; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v188; // [rsp+A8h] [rbp-B0h]
  __m128 v189; // [rsp+B8h] [rbp-A0h]
  __int64 v190; // [rsp+C8h] [rbp-90h]
  int v191; // [rsp+D0h] [rbp-88h]
  char *v192; // [rsp+E0h] [rbp-78h] BYREF
  void *v193[2]; // [rsp+E8h] [rbp-70h]
  __int128 v194; // [rsp+F8h] [rbp-60h]
  __int64 v195; // [rsp+108h] [rbp-50h]
  int v196; // [rsp+110h] [rbp-48h]
  unsigned __int64 v197; // [rsp+118h] [rbp-40h]

  v1 = *(unsigned __int8 *)(a1 + 142);
  v197 = __readfsqword(0x28u);
  if ( (unsigned __int8)v1 > 2u )
    return v1;
  if ( (*(_BYTE *)(a1 + 143) & 2) != 0 )
  {
    if ( (_BYTE)v1 )
      return v1;
    v3 = *(_QWORD *)(a1 + 152);
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 152);
    if ( !v3 )
      goto LABEL_11;
  }
  v71 = *(_QWORD *)(a1 + 144);
  v72 = 3;
  v73 = v71 + 8 * v3;
  do
  {
    if ( *(_BYTE *)(*(_QWORD *)v71 + 142LL) <= 1u )
      v72 = 1;
    v71 += 8;
  }
  while ( v71 != v73 );
  if ( (_BYTE)v1 == v72 )
    return 1;
  if ( v72 == 1 )
  {
LABEL_5:
    idati = *(char **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL) + 96LL);
    v193[0] = "";
    LOWORD(v193[1]) = 0;
    if ( !idati )
      idati = (char *)get_idati();
    v192 = idati;
    create_tinfo(a1 + 8, 13, 189, &v192);
    return 1;
  }
LABEL_11:
  v6 = 0;
  sub_30FF0(a1);
  v7 = *(_BYTE *)(a1 + 143);
  v182 = 0;
  LODWORD(v185) = 0;
  v183 = 0;
  *(_BYTE *)(a1 + 143) = v7 | 1;
  v184 = 0;
  v8 = *(_QWORD *)(a1 + 152) == 0;
  v181 = 0;
  HIDWORD(v185) = ((v7 & 4) != 0) << 7;
  v9 = *(_DWORD *)(a1 + 136);
  v186 = 1;
  v180 = 0;
  v10 = (unsigned int)(8 * v9);
  if ( v8 )
  {
    *((_QWORD *)&v184 + 1) = 0;
    goto LABEL_89;
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v6);
    if ( *(_BYTE *)(v11 + 142) != 5
      && (*(_DWORD *)(v11 + 136) || *(_QWORD *)(v11 + 176) == v10)
      && (*(_DWORD *)(v11 + 140) & 0x100FFFF) != 0x100001C )
    {
      *(_BYTE *)(a1 + 143) &= ~1u;
      v12 = *(unsigned int *)(a1 + 136);
      if ( v12 < *(_QWORD *)(v11 + 168) || v10 < *(_QWORD *)(v11 + 184) || v10 < *(_QWORD *)(v11 + 176) )
      {
        if ( (debug & 0x400000) != 0 )
        {
          v20 = *(_QWORD *)(v11 + 176);
          v21 = ::src;
          v22 = *(_QWORD *)(v11 + 184);
          if ( *(_QWORD *)(v11 + 48) )
            v21 = *(const char **)(v11 + 40);
          v168 = (int)v21;
          srcb = *(_QWORD *)(v11 + 168);
          v23 = sub_34340(v11);
          v24 = ::src;
          if ( v23[1] )
            v24 = (const char *)*v23;
          sub_88B80(
            (unsigned int)"Warning: field %s'%s' (loc 0x%llx bsize %llu boff %llu) doesn't fit, skipped. \n",
            (_DWORD)v24,
            v168,
            srcb,
            v22,
            v20);
        }
        goto LABEL_38;
      }
      if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 136) )
        break;
      srcf = (void *)v11;
      v92 = sub_310C0(a1, v11);
      v11 = (__int64)srcf;
      if ( v92 )
        break;
    }
LABEL_38:
    if ( (unsigned __int64)++v6 >= *(_QWORD *)(a1 + 152) )
    {
      v25 = 0;
      v26 = v182;
      for ( i = v183; v25 < (unsigned __int64)v181; ++v25 )
      {
        v28 = *(const __m128i **)(v180 + 8 * v25);
        v29 = _mm_loadu_si128(v28 + 11);
        v30 = v29.m128i_i64[0];
        v31 = _mm_add_epi64(v29, _mm_srli_si128(v29, 8)).m128i_u64[0];
        if ( i )
        {
          v32 = (const __m128i *)v26;
          v33 = 0;
          while ( 1 )
          {
            v34 = _mm_loadu_si128(v32);
            v35 = _mm_add_epi64(_mm_srli_si128(v34, 8), v34).m128i_u64[0];
            if ( v34.m128i_i64[0] < v31 && v30 < v35 )
              break;
            ++v33;
            v32 += 9;
            if ( v33 == i )
              goto LABEL_70;
          }
          if ( v33 != i )
            continue;
LABEL_70:
          v65 = i + 1;
        }
        else
        {
          v65 = 1;
        }
        if ( *((_QWORD *)&v183 + 1) < v65 )
        {
          v182 = qvector_reserve(&v182, v26, v65, 144);
          i = v183;
          v26 = v182;
        }
        v66 = 144 * i + v26;
        *(_QWORD *)(v66 + 16) = 0;
        *(_QWORD *)(v66 + 40) = 0;
        *(_QWORD *)(v66 + 112) = 1;
        *(_DWORD *)(v66 + 120) = -1;
        *(_QWORD *)(v66 + 128) = 0;
        *(_BYTE *)(v66 + 136) = 0;
        *(_OWORD *)v66 = 0;
        *(_OWORD *)(v66 + 24) = 0;
        *(_OWORD *)(v66 + 48) = 0;
        *(_OWORD *)(v66 + 64) = 0;
        *(_QWORD *)&v183 = v183 + 1;
        copy_tinfo_t(v66 + 64, &v28->m128i_u64[1]);
        *(_QWORD *)v66 = v28[11].m128i_i64[0];
        *(_QWORD *)(v66 + 8) = v28[11].m128i_i64[1];
        if ( (unsigned __int64 *)(v66 + 16) != &v28[2].m128i_u64[1] )
        {
          v67 = v28[3].m128i_u64[0];
          if ( v67 )
          {
            v68 = v67 - 1;
            if ( v67 != 1 )
            {
              v69 = (const void *)v28[2].m128i_i64[1];
              v70 = *(void **)(v66 + 16);
              if ( *(_QWORD *)(v66 + 32) < v67 )
              {
                v70 = (void *)qvector_reserve(v66 + 16, *(_QWORD *)(v66 + 16), v67, 1);
                *(_QWORD *)(v66 + 16) = v70;
                v68 = v67 - 1;
              }
              *(_QWORD *)(v66 + 24) = v67;
              memmove(v70, v69, v68);
              *(_BYTE *)(*(_QWORD *)(v66 + 16) + v67 - 1) = 0;
              v26 = v182;
              i = v183;
              continue;
            }
          }
          *(_QWORD *)(v66 + 24) = 0;
        }
        v26 = v182;
        i = v183;
      }
      v36 = v26 + 144 * i;
      if ( v26 != v36 )
      {
        v193[1] = nullptr;
        sub_3C7F0((__int64 *)&v192, v26, (__int64)(0x8E38E38E38E38E39LL * ((144 * i) >> 4) + 1) / 2);
        v37 = (char *)v193[1];
        v38 = 144 * (__int64)v193[0];
        if ( v192 == v193[0] )
        {
          sub_49B80(v26, v26 + v38, v36, (__int64)v193[1], (__int64 (__fastcall *)(__int64, __int64))sub_27F90);
        }
        else if ( v193[1] )
        {
          sub_49C00(v26, v36, (__int64)v193[1], (__int64)v193[0], (__int64 (__fastcall *)(__int64, __int64))sub_27F90);
        }
        else
        {
          sub_4A1F0(v26, v36, (__int64 (__fastcall *)(__int64, __int64))sub_27F90);
        }
        for ( j = v37; &v37[v38] != j; j += 144 )
        {
          clear_tinfo_t(j + 64);
          v40 = *((_QWORD *)j + 5);
          if ( v40 )
          {
            *((_QWORD *)j + 6) = 0;
            qfree(v40);
          }
          v41 = *((_QWORD *)j + 2);
          if ( v41 )
          {
            *((_QWORD *)j + 3) = 0;
            qfree(v41);
          }
        }
        operator delete(v37, v38);
        i = v183;
      }
      *((_QWORD *)&v184 + 1) = 0;
      if ( i )
      {
        v42 = (_QWORD *)v182;
        v43 = i - 1;
        if ( i == 1 )
        {
          srcc = 1;
          v152 = *(_QWORD *)(v182 + 8) + *(_QWORD *)v182;
          v188 = 0;
          tinfo_property = 0;
          *((_QWORD *)&v184 + 1) = (unsigned __int64)(v152 + 7) >> 3;
          *(_QWORD *)&v184 = *(unsigned int *)(a1 + 136);
        }
        else
        {
          v44 = *(_QWORD *)v182;
          v45 = (_QWORD *)(v182 + 8);
          v46 = v182 + 144 * i - 136;
          do
          {
            v47 = v44;
            v48 = v44 + *v45;
            v44 = v45[17];
            if ( v44 < v48 )
              *v45 = v44 - v47;
            v45 += 18;
          }
          while ( v45 != (_QWORD *)v46 );
          v49 = *(unsigned int *)(a1 + 136);
          v50 = v42[18 * v43] + v42[18 * v43 + 1];
          *(_QWORD *)&v184 = v49;
          srcc = v183;
          v188 = 0;
          *((_QWORD *)&v184 + 1) = (unsigned __int64)(v50 + 7) >> 3;
          tinfo_property = 0;
          if ( !(_QWORD)v183 )
            goto LABEL_90;
        }
        v51 = qalloc_or_throw(144 * srcc);
        *((_QWORD *)&v188 + 1) = srcc;
        v52 = (__m128i *)(v51 + 64);
        v53 = 0;
        tinfo_property = v51;
        v54 = -64 - v51;
        do
        {
          v61 = &v52->m128i_i8[v54 + v182];
          v62 = _mm_loadu_si128((const __m128i *)v61);
          v52[-3].m128i_i64[0] = 0;
          v52[-4] = v62;
          *(__m128i *)((char *)&v52[-3] + 8) = 0;
          v63 = *((_QWORD *)v61 + 3);
          if ( v63 )
          {
            v64 = (void *)qalloc_or_throw(*((_QWORD *)v61 + 3));
            v52[-3].m128i_i64[0] = (__int64)v64;
            v52[-2].m128i_i64[0] = v63;
            memcpy(v64, *((const void **)v61 + 2), v63);
            v52[-3].m128i_i64[1] = v63;
          }
          v52[-2].m128i_i64[1] = 0;
          v52[-1] = 0;
          v55 = *((_QWORD *)v61 + 6);
          if ( v55 )
          {
            v95 = (void *)qalloc_or_throw(*((_QWORD *)v61 + 6));
            v52[-2].m128i_i64[1] = (__int64)v95;
            v52[-1].m128i_i64[1] = v55;
            memcpy(v95, *((const void **)v61 + 5), v55);
            v52[-1].m128i_i64[0] = v55;
          }
          v52->m128i_i64[0] = 0;
          copy_tinfo_t(v52, v61 + 64);
          v56 = _mm_loadu_si128((const __m128i *)(v61 + 72));
          ++v53;
          v52 += 9;
          v52[-6].m128i_i64[1] = *((_QWORD *)v61 + 15);
          v57 = *((_DWORD *)v61 + 32);
          *(__m128i *)((char *)v52 - 136) = v56;
          v58 = _mm_loadu_si128((const __m128i *)(v61 + 88));
          v52[-5].m128i_i32[0] = v57;
          v59 = *((_DWORD *)v61 + 33);
          *(__m128i *)((char *)v52 - 120) = v58;
          v60 = _mm_loadu_si128((const __m128i *)(v61 + 104));
          v52[-5].m128i_i32[1] = v59;
          LOBYTE(v59) = v61[136];
          *(__m128i *)((char *)v52 - 104) = v60;
          v52[-5].m128i_i8[8] = v59;
        }
        while ( v53 != srcc );
        *(_QWORD *)&v188 = v53;
        v49 = v184;
LABEL_90:
        v74 = _mm_loadh_ps((const double *)&v184 + 1);
        v190 = v185;
        v189 = v74;
        v191 = v186;
        if ( !(unsigned __int8)create_tinfo(a1 + 8, 13, 13, &v182) )
        {
          if ( (debug & 0x400000) != 0 )
          {
            v75 = ::src;
            if ( *(_QWORD *)(a1 + 48) )
              v75 = *(const char **)(a1 + 40);
            v76 = sub_34340(a1);
            v80 = ::src;
            if ( v76[1] )
              v80 = (const char *)*v76;
            sub_88B80(
              (unsigned int)"Error structure DIE %s constructing IDA type %s\n",
              (_DWORD)v80,
              (_DWORD)v75,
              v77,
              v78,
              v79);
          }
          v1 = 5;
          v170 = tinfo_property;
LABEL_98:
          if ( v170 )
          {
            v81 = v188;
            v82 = v170 + 64;
            v83 = 0;
            if ( (_QWORD)v188 )
            {
              do
              {
                clear_tinfo_t(v82);
                v84 = *(_QWORD *)(v82 - 24);
                if ( v84 )
                {
                  *(_QWORD *)(v82 - 16) = 0;
                  qfree(v84);
                }
                v85 = *(_QWORD *)(v82 - 48);
                if ( v85 )
                {
                  *(_QWORD *)(v82 - 40) = 0;
                  qfree(v85);
                }
                ++v83;
                v82 += 144;
              }
              while ( v81 != v83 );
            }
            qfree(v170);
          }
          goto LABEL_106;
        }
        if ( !set_tinfo_property(a1 + 8, 2, 4) && (debug & 0x400000) != 0 )
        {
          v96 = ::src;
          if ( *(_QWORD *)(a1 + 48) )
            v96 = *(const char **)(a1 + 40);
          v97 = sub_34340(a1);
          v101 = ::src;
          if ( v97[1] )
            v101 = (const char *)*v97;
          sub_88B80(
            (unsigned int)"Warning structure DIE %s calculating alignment IDA type %s\n",
            (_DWORD)v101,
            (_DWORD)v96,
            v98,
            v99,
            v100);
        }
        v102 = *(_QWORD *)(a1 + 8);
        v192 = nullptr;
        v195 = 0;
        v196 = 1;
        *(_OWORD *)v193 = 0;
        v194 = 0;
        get_tinfo_details(v102, 13, &v192);
        v103 = v194;
        if ( (_QWORD)v194 != v49 && (debug & 0x400000) != 0 )
        {
          v104 = ::src;
          if ( *(_QWORD *)(a1 + 48) )
            v104 = *(const char **)(a1 + 40);
          v105 = sub_34340(a1);
          v107 = ::src;
          if ( v105[1] )
            v107 = (const char *)*v105;
          sub_88B80(
            (unsigned int)"Warning structure DIE %s size mismatch on creation %s : 0x%zX != 0x%zX\n",
            (_DWORD)v107,
            (_DWORD)v104,
            v49,
            v103,
            v106);
        }
        v108 = 0;
        v169 = v188;
        v109 = (_QWORD *)tinfo_property;
        v170 = tinfo_property;
        if ( !(_QWORD)v188 )
        {
LABEL_201:
          v146 = v192;
          if ( v192 )
          {
            v147 = v193[0];
            if ( v193[0] )
            {
              v148 = nullptr;
              do
              {
                v149 = &v146[144 * (_QWORD)v148];
                clear_tinfo_t(v149 + 64);
                v150 = *((_QWORD *)v149 + 5);
                if ( v150 )
                {
                  *((_QWORD *)v149 + 6) = 0;
                  qfree(v150);
                }
                v151 = *((_QWORD *)v149 + 2);
                if ( v151 )
                {
                  *((_QWORD *)v149 + 3) = 0;
                  qfree(v151);
                }
                v148 = (char *)v148 + 1;
                v146 = v192;
              }
              while ( v147 != v148 );
            }
            v193[0] = nullptr;
            qfree(v146);
          }
          v1 = 3;
          goto LABEL_98;
        }
        while ( 1 )
        {
          v125 = v109[3];
          if ( v125 <= 1 )
          {
            if ( !v193[0] )
              goto LABEL_176;
            v126 = v192;
            v127 = nullptr;
            while ( *((_QWORD *)v126 + 3) > 1u || *(_QWORD *)v126 != *v109 || *((_QWORD *)v126 + 1) != v109[1] )
            {
              ++v127;
              v126 += 144;
              if ( v127 == v193[0] )
                goto LABEL_176;
            }
            if ( v127 == v193[0] )
            {
LABEL_176:
              if ( (debug & 0x400000) != 0 )
              {
                v128 = ::src;
                if ( v125 )
                  v128 = (const char *)v109[2];
                v129 = ::src;
                if ( *(_QWORD *)(a1 + 48) )
                  v129 = *(const char **)(a1 + 40);
                v130 = sub_34340(a1);
                v133 = ::src;
                if ( v130[1] )
                  v133 = (const char *)*v130;
                sub_88B80(
                  (unsigned int)"Warning structure DIE %s missing anonymous on creation %s.%s\n",
                  (_DWORD)v133,
                  (_DWORD)v129,
                  (_DWORD)v128,
                  v131,
                  v132);
              }
            }
            goto LABEL_167;
          }
          if ( v193[0] )
            break;
          if ( (debug & 0x400000) != 0 )
            goto LABEL_213;
LABEL_167:
          ++v108;
          v109 += 18;
          if ( v169 == v108 )
            goto LABEL_201;
        }
        v171 = (char *)v193[0];
        srcd = nullptr;
        v110 = (const char *)v109[2];
        v111 = v192;
        while ( 1 )
        {
          v112 = ::src;
          if ( *((_QWORD *)v111 + 3) )
            v112 = *((const char **)v111 + 2);
          if ( !strcmp(v110, v112) )
            break;
          ++srcd;
          v111 += 144;
          if ( srcd == v171 )
            goto LABEL_192;
        }
        v113 = v111;
        v114 = (int)v110;
        v115 = v113;
        if ( *v109 != *v113 )
        {
          if ( (debug & 0x400000) == 0 )
            goto LABEL_165;
          v116 = ::src;
          if ( *(_QWORD *)(a1 + 48) )
            v116 = *(const char **)(a1 + 40);
          v178 = (int)v116;
          v175 = *v113;
          v172 = *v109;
          v117 = sub_34340(a1);
          v118 = ::src;
          if ( v117[1] )
            v118 = (const char *)*v117;
          sub_88B80(
            (unsigned int)"Warning structure DIE %s member offset mismatch on creation %s.%s : 0x%llx != 0x%llx\n",
            (_DWORD)v118,
            v178,
            v114,
            v172,
            v175);
        }
        v119 = v109[1];
        if ( v119 != v115[1] && (debug & 0x400000) != 0 )
        {
          v120 = ::src;
          if ( v109[3] )
            v120 = (const char *)v109[2];
          v121 = ::src;
          if ( *(_QWORD *)(a1 + 48) )
            v121 = *(const char **)(a1 + 40);
          v179 = (int)v120;
          v176 = (int)v121;
          v173 = v115[1];
          v122 = sub_34340(a1);
          v123 = ::src;
          if ( v122[1] )
            v123 = (const char *)*v122;
          sub_88B80(
            (unsigned int)"Warning structure DIE %s member size mismatch on creation %s.%s : 0x%llx != 0x%llx\n",
            (_DWORD)v123,
            v176,
            v179,
            v119,
            v173);
        }
LABEL_165:
        tinfo_size = get_tinfo_size(0, v109[8], 0);
        if ( tinfo_size != get_tinfo_size(0, v115[8], 0) )
        {
          if ( (debug & 0x400000) == 0 )
            goto LABEL_167;
          v134 = get_tinfo_size(0, v115[8], 0);
          v135 = get_tinfo_size(0, v109[8], 0);
          v136 = ::src;
          if ( v109[3] )
            v136 = (const char *)v109[2];
          v137 = ::src;
          if ( *(_QWORD *)(a1 + 48) )
            v137 = *(const char **)(a1 + 40);
          v177 = (int)v136;
          v174 = (int)v137;
          v138 = sub_34340(a1);
          v139 = ::src;
          if ( v138[1] )
            v139 = (const char *)*v138;
          sub_88B80(
            (unsigned int)"Warning structure DIE %s member type size mismatch on creation %s.%s : 0x%zX != 0x%zX\n",
            (_DWORD)v139,
            v174,
            v177,
            v135,
            v134);
        }
        if ( srcd != v193[0] )
          goto LABEL_167;
LABEL_192:
        if ( (debug & 0x400000) == 0 )
          goto LABEL_167;
        v140 = ::src;
        if ( v109[3] )
LABEL_213:
          v140 = (const char *)v109[2];
        v141 = ::src;
        if ( *(_QWORD *)(a1 + 48) )
          v141 = *(const char **)(a1 + 40);
        v142 = sub_34340(a1);
        v145 = ::src;
        if ( v142[1] )
          v145 = (const char *)*v142;
        sub_88B80(
          (unsigned int)"Warning structure DIE %s missing member name on creation %s.%s\n",
          (_DWORD)v145,
          (_DWORD)v141,
          (_DWORD)v140,
          v143,
          v144);
        goto LABEL_167;
      }
LABEL_89:
      v49 = *(unsigned int *)(a1 + 136);
      tinfo_property = 0;
      v188 = 0;
      *(_QWORD *)&v184 = v49;
      goto LABEL_90;
    }
  }
  if ( *(_QWORD *)(v11 + 160) )
  {
    v93 = v181;
    v94 = v180;
    if ( *((_QWORD *)&v181 + 1) < (unsigned __int64)(v181 + 1) )
    {
      srcg = (void *)v11;
      v180 = qvector_reserve(&v180, v180, v181 + 1, 8);
      v94 = v180;
      v11 = (__int64)srcg;
      v93 = v181;
    }
    *(_QWORD *)(v94 + 8 * v93) = v11;
    *(_QWORD *)&v181 = v181 + 1;
    goto LABEL_38;
  }
  v13 = v183;
  v14 = (_QWORD *)v182;
  if ( *((_QWORD *)&v183 + 1) < (unsigned __int64)(v183 + 1) )
  {
    srce = (void *)v11;
    v182 = qvector_reserve(&v182, v182, v183 + 1, 144);
    v13 = v183;
    v14 = (_QWORD *)v182;
    v11 = (__int64)srce;
  }
  v15 = &v14[18 * v13];
  src = (_WORD *)v11;
  v15[2] = 0;
  v15[5] = 0;
  v15[14] = 1;
  *((_DWORD *)v15 + 30) = -1;
  v15[16] = 0;
  *((_BYTE *)v15 + 136) = 0;
  *(_OWORD *)v15 = 0;
  *(_OWORD *)(v15 + 3) = 0;
  *((_OWORD *)v15 + 3) = 0;
  *((_OWORD *)v15 + 4) = 0;
  *(_QWORD *)&v183 = v183 + 1;
  if ( (unsigned __int8)sub_350A0(v11, (__int64)(v15 + 8)) )
  {
    if ( src[70] == 28 )
      *((_DWORD *)v15 + 33) |= 0x20u;
    v16 = *((_QWORD *)src + 22);
    *v15 = v16;
    v15[1] = *((_QWORD *)src + 23);
    if ( v15 + 2 != (_QWORD *)(src + 20) )
    {
      v17 = *((_QWORD *)src + 6);
      if ( !v17 || (v18 = v17 - 1, v17 == 1) )
      {
        v15[3] = 0;
      }
      else
      {
        srca = *((void **)src + 5);
        v19 = (void *)v15[2];
        if ( v15[4] < v17 )
        {
          v19 = (void *)qvector_reserve(v15 + 2, v19, v17, 1);
          v15[2] = v19;
          v18 = v17 - 1;
        }
        v15[3] = v17;
        memmove(v19, srca, v18);
        *(_BYTE *)(v15[2] + v17 - 1) = 0;
        v16 = *v15;
      }
    }
    if ( v10 == v16 && (get_tinfo_property(v15[8], 2) & 0xF) == 0xB && (unsigned int)get_tinfo_property(v15[8], 12) )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(v15[8], 11);
      v192 = nullptr;
      v193[0] = nullptr;
      copy_tinfo_t(&v192, &tinfo_property);
      create_tinfo(v15 + 8, 11, 11, &v192);
      clear_tinfo_t(&v192);
      v15[1] = 0;
      clear_tinfo_t(&tinfo_property);
    }
    goto LABEL_38;
  }
  if ( (debug & 0x400000) != 0 )
  {
    v153 = sub_34340((__int64)src);
    v154 = ::src;
    if ( v153[1] )
      v154 = (const char *)*v153;
    v155 = sub_34340(a1);
    v159 = ::src;
    if ( v155[1] )
      v159 = (const char *)*v155;
    sub_88B80(
      (unsigned int)"Error structure DIE %s propagating type info from DIE %s\n",
      (_DWORD)v159,
      (_DWORD)v154,
      v156,
      v157,
      v158);
  }
  v1 = 5;
LABEL_106:
  if ( v180 )
  {
    *(_QWORD *)&v181 = 0;
    qfree(v180);
  }
  v86 = (_QWORD *)v182;
  if ( v182 )
  {
    v87 = v183;
    if ( (_QWORD)v183 )
    {
      v88 = 0;
      do
      {
        v89 = &v86[18 * v88];
        clear_tinfo_t(v89 + 8);
        v90 = v89[5];
        if ( v90 )
        {
          v89[6] = 0;
          qfree(v90);
        }
        v91 = v89[2];
        if ( v91 )
        {
          v89[3] = 0;
          qfree(v91);
        }
        ++v88;
        v86 = (_QWORD *)v182;
      }
      while ( v87 != v88 );
    }
    *(_QWORD *)&v183 = 0;
    qfree(v86);
  }
  return v1;
}
