__int64 __fastcall sub_104A40(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6,
        char a7,
        __int64 a8,
        __int64 *a9)
{
  unsigned __int8 v12; // si
  unsigned __int8 v13; // al
  signed __int64 v14; // rdi
  signed __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  const __m128i *v23; // rax
  __int64 *v24; // rdi
  _QWORD *m128i_i64; // r13
  unsigned __int64 v26; // r12
  __m128i v27; // xmm0
  __int64 *v28; // rsi
  unsigned __int64 v29; // r12
  void *v30; // rbp
  _QWORD *v31; // rdi
  const void **v32; // r14
  unsigned __int8 v33; // al
  unsigned int v34; // ecx
  unsigned int v36; // r12d
  int v37; // eax
  int v38; // r13d
  __int64 i; // rax
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _DWORD *v43; // rax
  unsigned __int8 v44; // al
  _QWORD *v45; // rbx
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // r9
  _QWORD *v49; // r11
  _DWORD *v50; // rcx
  __int32 *v51; // rsi
  __int64 v52; // rcx
  __int32 v53; // ebx
  __int32 *v54; // rdx
  __int32 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  void *v59; // rbx
  __int64 v60; // rax
  size_t v61; // rbp
  int v62; // eax
  __int64 v63; // r14
  _QWORD *v64; // rdx
  _QWORD *v65; // rcx
  _QWORD *v66; // rax
  __int64 j; // rcx
  unsigned __int64 v68; // rsi
  void *v69; // rbx
  __m128i v70; // xmm0
  _QWORD *v71; // rbx
  int v72; // esi
  int v73; // ecx
  __int64 v74; // r14
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rdx
  _QWORD *v80; // rax
  _QWORD *v81; // rbp
  __int64 v82; // rax
  __int64 v83; // rbp
  __int64 v84; // r14
  __int8 v85; // si
  __int64 v86; // rax
  int v87; // esi
  __int64 v88; // rbp
  unsigned __int64 *v89; // r13
  unsigned int v90; // edx
  _QWORD *v91; // rax
  unsigned __int8 v92; // cl
  unsigned int v93; // edx
  _QWORD *v94; // r14
  __int64 v95; // rax
  unsigned __int8 v96; // dl
  _DWORD **v97; // rbp
  __int8 v98; // si
  __int64 v99; // rdx
  __int64 v100; // rdx
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // r10
  _DWORD *v103; // rdi
  __int64 v104; // rax
  int *v105; // rbp
  int *k; // r13
  int v107; // ebx
  __int64 v108; // rdx
  _DWORD *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // r8
  _DWORD *v112; // rsi
  _DWORD *v113; // rax
  _DWORD *v114; // rdx
  __int8 v115; // si
  __int64 v116; // rax
  __int64 v117; // rdx
  unsigned __int64 *v118; // [rsp+8h] [rbp-160h]
  _QWORD *v119; // [rsp+8h] [rbp-160h]
  _QWORD *v120; // [rsp+8h] [rbp-160h]
  int v121; // [rsp+8h] [rbp-160h]
  unsigned __int64 *v122; // [rsp+8h] [rbp-160h]
  _QWORD *v123; // [rsp+8h] [rbp-160h]
  __int64 v125; // [rsp+18h] [rbp-150h]
  _QWORD *v126; // [rsp+18h] [rbp-150h]
  _QWORD *v127; // [rsp+18h] [rbp-150h]
  int v128; // [rsp+18h] [rbp-150h]
  int v129; // [rsp+18h] [rbp-150h]
  __int64 v130; // [rsp+18h] [rbp-150h]
  __int64 v131; // [rsp+20h] [rbp-148h]
  __int64 v132; // [rsp+20h] [rbp-148h]
  __int8 v133; // [rsp+30h] [rbp-138h]
  __int64 v134; // [rsp+30h] [rbp-138h]
  __int64 v135; // [rsp+38h] [rbp-130h]
  int v136; // [rsp+44h] [rbp-124h]
  unsigned __int8 v137; // [rsp+44h] [rbp-124h]
  _QWORD *v138; // [rsp+48h] [rbp-120h]
  unsigned __int64 v139; // [rsp+48h] [rbp-120h]
  __int64 v140; // [rsp+50h] [rbp-118h]
  __int8 v141; // [rsp+50h] [rbp-118h]
  void *src; // [rsp+58h] [rbp-110h]
  _DWORD *v143; // [rsp+68h] [rbp-100h]
  __m128i v144; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v145; // [rsp+80h] [rbp-E8h]
  unsigned int v146; // [rsp+84h] [rbp-E4h]
  __int64 v147; // [rsp+88h] [rbp-E0h]
  int v148; // [rsp+90h] [rbp-D8h]
  char v149; // [rsp+96h] [rbp-D2h]
  char v150; // [rsp+97h] [rbp-D1h]
  _QWORD *v151; // [rsp+98h] [rbp-D0h]
  __int64 v152; // [rsp+A0h] [rbp-C8h]
  int v153; // [rsp+A8h] [rbp-C0h]
  int v154; // [rsp+ACh] [rbp-BCh]
  __int64 v155; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int8 v156; // [rsp+B8h] [rbp-B0h]
  void **v157; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v158; // [rsp+C8h] [rbp-A0h]
  __int64 v159; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v160; // [rsp+D8h] [rbp-90h]
  __int64 v161; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v162; // [rsp+F8h] [rbp-70h]
  __m128i v163; // [rsp+108h] [rbp-60h]
  unsigned __int64 v164; // [rsp+118h] [rbp-50h]
  char v165; // [rsp+120h] [rbp-48h]
  unsigned __int64 v166; // [rsp+128h] [rbp-40h]

  v144.m128i_i64[1] = a4;
  v151 = a5;
  v166 = __readfsqword(0x28u);
  v143 = *(_DWORD **)(a4 + 1504);
  if ( a1 != (__m128i *)(*a5 + 24LL * a1[1].m128i_i32[0]) )
  {
    if ( !under_debugger )
      sub_37E160(50988);
    goto LABEL_202;
  }
  if ( *(_BYTE *)(a3 + 8) != *(_BYTE *)(a2 + 32) )
  {
    if ( !under_debugger )
      sub_37E160(51891);
    goto LABEL_202;
  }
  sub_1003E0((unsigned __int64 *)a1, (__int64)v143);
  v12 = *(_BYTE *)(a2 + 32);
  v13 = *(_BYTE *)(a3 + 8);
  v133 = v12;
  if ( v12 < v13 || v13 < v12 )
LABEL_182:
    sub_FDB50();
  v14 = *(_QWORD *)(a2 + 24);
  v15 = *(_QWORD *)a3;
  v135 = v14;
  if ( v14 < *(_QWORD *)a3 )
  {
    v153 = -1;
  }
  else
  {
    if ( v14 > v15 )
    {
      v17 = v14 + *(int *)(a2 + 40);
      v18 = v15 + *(int *)(a3 + 12);
      v140 = v18;
      if ( v17 < v18 || v17 <= v18 )
      {
        v133 = *(_BYTE *)(a3 + 8);
        v135 = *(_QWORD *)a3;
        LOBYTE(v145) = v133;
        v153 = 1;
        goto LABEL_15;
      }
      v115 = v133;
      v135 = *(_QWORD *)a3;
      v133 = *(_BYTE *)(a3 + 8);
      LOBYTE(v145) = v115;
      v140 = v17;
      v153 = 1;
      goto LABEL_181;
    }
    v153 = 0;
  }
  v140 = *(_QWORD *)a3 + *(int *)(a3 + 12);
  v16 = v14 + *(int *)(a2 + 40);
  if ( *(_QWORD *)a3 < v14 )
  {
    if ( v140 < v16 )
    {
      v140 = v14 + *(int *)(a2 + 40);
      LOBYTE(v145) = v12;
      goto LABEL_15;
    }
  }
  else if ( v140 <= v16 )
  {
    if ( !under_debugger )
      sub_37E160(51972);
    goto LABEL_202;
  }
  LOBYTE(v145) = v13;
LABEL_181:
  if ( (_BYTE)v145 != v133 )
    goto LABEL_182;
LABEL_15:
  v152 = v140 - v135;
  v136 = v140 - v135;
  if ( v133 == 1 )
  {
    if ( (a7 & 1) == 0 && (int)sub_12F6F0(v143, 0, (unsigned int)v135, 0x7FFFFFFF, 0) < (int)v152
      || (unsigned __int8)sub_60860((_QWORD *)(v144.m128i_i64[1] + 296), v135, v136)
      && !(unsigned __int8)sub_60810((_QWORD *)(v144.m128i_i64[1] + 296), v135, v136) )
    {
      goto LABEL_56;
    }
    v62 = v143[17];
    if ( v62 > (int)v135 )
    {
      if ( v62 <= (int)v140 - 1 )
      {
        if ( !under_debugger )
          sub_37E160(51962);
        goto LABEL_202;
      }
      v63 = (*(unsigned int (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v143 + 184LL))(v143, (unsigned int)v135);
      v128 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v143 + 32LL))(v143, v63);
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v143 + 264LL))(v143, (unsigned int)v63) )
      {
        if ( !v128
          || (int)v135 < (unsigned __int64)(int)v63
          || v128 + (__int64)(int)v63 - 1 < (unsigned __int64)((int)v135 + (__int64)(int)v152 - 1) )
        {
          goto LABEL_56;
        }
      }
      else
      {
        v36 = v63 + v128;
        if ( (int)v140 > (int)v63 + v128 )
        {
          while ( 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v143 + 264LL))(v143, v36) )
              goto LABEL_56;
            v37 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v143 + 32LL))(v143, v36);
            if ( v37 <= 0 )
              break;
            v36 += v37;
            if ( (int)v140 <= (int)v36 )
              goto LABEL_100;
          }
          if ( !under_debugger )
            sub_37E160(51963);
          goto LABEL_202;
        }
      }
    }
LABEL_100:
    v13 = *(_BYTE *)(a3 + 8);
  }
  if ( v13 == 5 )
  {
    v19 = *(_QWORD *)a3;
    v20 = *(unsigned int *)(a3 + 12);
    if ( *(int *)(v144.m128i_i64[1] + 116) > 0 )
    {
      v21 = *(_QWORD *)(v144.m128i_i64[1] + 136);
      if ( v21 != v19 && v21 >= v19 && (_DWORD)v20 && (int)v20 + v19 - 1 >= v21 )
        goto LABEL_56;
    }
    v22 = *(_QWORD *)(v144.m128i_i64[1] + 144);
    if ( v22 != v19 && v22 >= v19 && (_DWORD)v20 && (int)v20 + v19 - 1 >= v22 )
      goto LABEL_56;
    if ( (unsigned __int8)sub_2242C0(v144.m128i_i64[1], v19, v20, 0) )
      goto LABEL_56;
  }
  v161 = 0;
  v165 = 1;
  v163.m128i_i64[0] = v135;
  v162 = 0;
  v163.m128i_i8[8] = v133;
  v164 = 0xFFFFFFFF00000001LL;
  v23 = (const __m128i *)sub_FFFA0((unsigned __int64 *)a1, (__int64)&v161);
  v24 = (__int64 *)a1->m128i_i64[0];
  m128i_i64 = v23->m128i_i64;
  if ( (const __m128i *)a1->m128i_i64[0] != v23 )
  {
    v26 = (unsigned __int64)&v23[1].m128i_u64[1];
    if ( v23[3].m128i_i8[8] == v133 && v23[3].m128i_i64[0] == v135 )
      goto LABEL_38;
    if ( !v23[2].m128i_i64[0] )
    {
      v161 = 0;
      v162 = 0;
      v27 = _mm_loadu_si128(v23 + 3);
      v164 = 0xFFFFFFFF00000001LL;
      v165 = 1;
      v163 = v27;
      v28 = sub_FE940(v24, (__int64)&v161);
      if ( v24 != v28 )
        sub_103CB0((unsigned __int64 **)a1, v28);
      goto LABEL_32;
    }
LABEL_56:
    v157 = nullptr;
    v158 = 0;
    sub_32A720(a2 + 24, &v157);
    v161 = 0;
    v162.m128i_i64[0] = 0;
    sub_32A720(a3, &v161);
    sub_1EB190(v143, a8, &v157, *(unsigned int *)(a2 + 40), &v161, *(unsigned int *)(a3 + 12));
    sub_102CE0(v144.m128i_i64[1], a2, (__int64)v151, a6);
    cleanup_argloc();
    cleanup_argloc();
    return 0;
  }
LABEL_32:
  v29 = *(_QWORD *)(a2 + 8);
  v30 = nullptr;
  v161 = 0;
  v163.m128i_i64[0] = v135;
  v162 = 0;
  v163.m128i_i8[8] = v133;
  v164 = *(_QWORD *)(a2 + 40);
  v165 = *(_BYTE *)(a2 + 48);
  if ( v29 )
  {
    v30 = (void *)qalloc_or_throw();
    memcpy(v30, *(const void **)a2, 4 * v29);
    if ( v161 )
    {
      v162.m128i_i64[0] = 0;
      qfree();
    }
  }
  v161 = (__int64)v30;
  v157 = (void **)&v161;
  v162 = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
  m128i_i64 = (_QWORD *)sub_1036B0(a1, (__int64)&v161, (__int64 **)&v157);
  if ( v161 )
  {
    v162.m128i_i64[0] = 0;
    qfree();
  }
  if ( a9 )
    sub_5FF90(a9, a1[1].m128i_i32[0]);
  v26 = (unsigned __int64)(m128i_i64 + 3);
LABEL_38:
  v154 = *(_DWORD *)(v26 + 40);
  *(_DWORD *)(v26 + 40) = v152;
  v138 = sub_102AC0(m128i_i64);
  v31 = (_QWORD *)a1->m128i_i64[0];
  if ( v138 != (_QWORD *)a1->m128i_i64[0] )
  {
    v150 = 1;
    v148 = -1;
    v146 = 0;
    v149 = 0;
    v147 = -1;
    v144.m128i_i64[0] = 0;
    src = nullptr;
    while ( 1 )
    {
      v32 = (const void **)(v138 + 3);
      v33 = *((_BYTE *)v138 + 56);
      if ( v33 >= (unsigned __int8)v145 && ((unsigned __int8)v145 < v33 || v138[6] >= v140) )
        break;
      v38 = 0;
      for ( i = 0; (unsigned __int64)v38 < v138[4]; i = v38 )
      {
        v40 = *((_DWORD *)*v32 + i);
        v41 = *(_QWORD *)(v26 + 8);
        v42 = *(_QWORD *)v26 + 4 * v41;
        if ( *(_QWORD *)v26 == v42 )
          goto LABEL_73;
        v43 = *(_DWORD **)v26;
        while ( v40 != *v43 )
        {
          if ( (_DWORD *)v42 == ++v43 )
            goto LABEL_73;
        }
        if ( v43 == (_DWORD *)v42 )
        {
LABEL_73:
          v131 = *(_QWORD *)v26 + 4 * v41;
          v46 = *a6;
          v125 = *(_QWORD *)(v26 + 8);
          v161 = 0;
          HIDWORD(v164) = -1;
          v118 = (unsigned __int64 *)(v46 + 24LL * v40);
          v163.m128i_i64[0] = v135;
          v165 = 1;
          v163.m128i_i8[8] = v133;
          v162 = 0;
          LODWORD(v164) = v140 - v135;
          v47 = sub_FFFA0(v118, (__int64)&v161);
          v48 = v47;
          if ( v47 != (_QWORD *)*v118 )
          {
            v49 = v47 + 3;
            if ( v47 != (_QWORD *)-24LL )
            {
              v50 = (_DWORD *)v131;
              if ( *(_QWORD *)(v26 + 16) < (unsigned __int64)(v125 + 1) )
              {
                v126 = v47;
                v119 = v47 + 3;
                v56 = qvector_reserve();
                v57 = *(_QWORD *)(v26 + 8);
                v48 = v126;
                *(_QWORD *)v26 = v56;
                v49 = v119;
                v50 = (_DWORD *)(v56 + 4 * v57);
              }
              *v50 = v40;
              ++*(_QWORD *)(v26 + 8);
              v51 = (__int32 *)v48[3];
              v52 = v49[1];
              v53 = a1[1].m128i_i32[0];
              v54 = &v51[v52];
              if ( v51 == v54 )
                goto LABEL_82;
              v55 = (__int32 *)v48[3];
              while ( v53 != *v55 )
              {
                if ( v54 == ++v55 )
                  goto LABEL_82;
              }
              if ( v54 == v55 )
              {
LABEL_82:
                if ( v49[2] < (unsigned __int64)(v52 + 1) )
                {
                  v127 = v48;
                  v120 = v49;
                  v60 = qvector_reserve();
                  v49 = v120;
                  v127[3] = v60;
                  v54 = (__int32 *)(v60 + 4LL * v120[1]);
                }
                *v54 = v53;
                ++v49[1];
              }
            }
          }
        }
        ++v38;
      }
      if ( (v138[9] & 4) != 0 )
        *(_BYTE *)(v26 + 48) |= 4u;
      v44 = *((_BYTE *)v138 + 56);
      if ( v44 >= (unsigned __int8)v145 && ((unsigned __int8)v145 < v44 || v138[6] + *((int *)v138 + 16) > v140) )
      {
        v58 = v138[4];
        v59 = nullptr;
        v144.m128i_i64[0] = v58;
        if ( v58 )
        {
          v61 = 4 * v58;
          v59 = (void *)qalloc_or_throw();
          memcpy(v59, *v32, v61);
        }
        if ( src )
          qfree();
        src = v59;
        v147 = v138[6];
        v149 = *((_BYTE *)v138 + 56);
        v146 = *((_DWORD *)v138 + 16);
        v148 = *((_DWORD *)v138 + 17);
        v150 = *((_BYTE *)v138 + 72);
      }
      v45 = sub_102AC0(v138);
      sub_103CB0((unsigned __int64 **)a1, v138);
      if ( a9 )
        sub_5FF90(a9, a1[1].m128i_i32[0]);
      v31 = (_QWORD *)a1->m128i_i64[0];
      if ( (_QWORD *)a1->m128i_i64[0] == v45 )
        break;
      v138 = v45;
    }
    if ( v153 != 1 )
    {
LABEL_44:
      v137 = 0;
      if ( !v149 )
        goto LABEL_45;
      v69 = nullptr;
      v161 = 0;
      v163.m128i_i64[0] = v140;
      v162 = 0;
      v163.m128i_i8[8] = v145;
      v164 = __PAIR64__(v148, v146);
      v165 = v150;
      if ( v144.m128i_i64[0] )
      {
        v69 = (void *)qalloc_or_throw();
        memcpy(v69, src, 4 * v144.m128i_i64[0]);
        if ( v161 )
        {
          v162.m128i_i64[0] = 0;
          qfree();
        }
      }
      v70 = _mm_loadl_epi64(&v144);
      v161 = (__int64)v69;
      v157 = (void **)&v161;
      v162 = _mm_unpacklo_epi64(v70, v70);
      v139 = sub_1036B0(a1, (__int64)&v161, (__int64 **)&v157);
      if ( v161 )
      {
        v162.m128i_i64[0] = 0;
        qfree();
      }
      v71 = (_QWORD *)(v139 + 24);
      if ( v149 != (_BYTE)v145 )
        sub_FDB50();
      v72 = v147;
      *(_DWORD *)(v139 + 68) = -1;
      v73 = *(_DWORD *)(v139 + 64);
      *(_BYTE *)(v139 + 72) &= ~2u;
      v74 = v144.m128i_i64[1];
      v75 = (unsigned int)(v73 - (v140 - v72));
      *(_DWORD *)(v139 + 64) = v75;
      v76 = *(_QWORD *)(v74 + 1440);
      v157 = nullptr;
      v160 = 0;
      v158 = 0;
      v159 = 0;
      sub_32A4F0(v139 + 48, v76, &v157, v75);
      v77 = a1[1].m128i_u32[0];
      if ( (unsigned int)v77 >= *(_DWORD *)(v74 + 64) )
        sub_FDB70();
      v78 = *(_QWORD *)(*(_QWORD *)(v144.m128i_i64[1] + 528) + 8 * v77);
      v79 = (_QWORD *)(v78 + 240);
      v80 = (_QWORD *)(v78 + 160);
      if ( (a7 & 2) == 0 )
        v79 = v80;
      v81 = v79;
      if ( (unsigned __int8)sub_60580(&v157, v79) )
      {
        v82 = *(_QWORD *)(v139 + 32);
      }
      else
      {
        v137 = sub_3136F0(&v159, v81 + 2);
        v82 = *(_QWORD *)(v139 + 32);
        v87 = v82 - 1;
        v121 = v82 - 1;
        if ( !v137 )
        {
          v134 = 4LL * (unsigned int)v87;
          if ( v87 >= 0 )
          {
            do
            {
              v88 = *(_QWORD *)(v139 + 48);
              v129 = *(_DWORD *)(*v71 + v134);
              v89 = (unsigned __int64 *)(*a6 + 24LL * v129);
              v90 = *(_DWORD *)(v139 + 64);
              v163.m128i_i8[8] = *(_BYTE *)(v139 + 56);
              v141 = v163.m128i_i8[8];
              v161 = 0;
              v164 = v90 | 0xFFFFFFFF00000000LL;
              v145 = v90;
              v163.m128i_i64[0] = v88;
              v165 = 1;
              v162 = 0;
              v91 = sub_FFFA0(v89, (__int64)&v161);
              v92 = v141;
              v93 = v145;
              v94 = v91;
              if ( (_QWORD *)*v89 != v91 )
              {
                while ( 1 )
                {
                  v95 = v88 + (int)v93;
                  v96 = *((_BYTE *)v94 + 56);
                  v97 = (_DWORD **)(v94 + 3);
                  if ( v96 >= v92 && (v92 < v96 || v95 <= v94[6]) )
                    break;
                  if ( *(_BYTE *)(v26 + 32) != *((_BYTE *)v94 + 56)
                    || !*(_DWORD *)(v26 + 40)
                    || !*((_DWORD *)v94 + 16)
                    || (v101 = *(_QWORD *)(v26 + 24), v102 = v94[6], *(int *)(v26 + 40) + v101 - 1 < v102)
                    || *((int *)v94 + 16) + v102 - 1 < v101 )
                  {
                    v98 = *((_BYTE *)v94 + 56);
                    v99 = *((int *)v94 + 16);
                    v156 = v92;
                    v100 = v94[6] + v99;
                    v155 = v95;
                    v161 = v100;
                    v162.m128i_i8[0] = v98;
                    if ( !(unsigned __int8)sub_100240((unsigned __int64 *)a1, &v155, &v161, v129) )
                    {
                      v103 = *v97;
                      v104 = v94[3] + 4LL * v94[4];
                      if ( *v97 != (_DWORD *)v104 )
                      {
                        while ( a1[1].m128i_i32[0] != *v103 )
                        {
                          if ( (_DWORD *)v104 == ++v103 )
                            goto LABEL_146;
                        }
                        if ( (_DWORD *)v104 != v103 )
                        {
                          memmove(v103, v103 + 1, v104 - (_QWORD)v103 - 4);
                          --v94[4];
                        }
                      }
                    }
                  }
LABEL_146:
                  v94 = sub_102AC0(v94);
                  if ( v94 == (_QWORD *)*v89 )
                    break;
                  v93 = *(_DWORD *)(v139 + 64);
                  v88 = *(_QWORD *)(v139 + 48);
                  v92 = *(_BYTE *)(v139 + 56);
                }
              }
              --v121;
              v134 -= 4;
            }
            while ( v121 != -1 );
          }
          sub_103CB0((unsigned __int64 **)a1, (__int64 *)v139);
          goto LABEL_131;
        }
      }
      v83 = (unsigned int)(v82 - 1);
      v84 = 4 * v83;
      if ( (int)v83 >= 0 )
      {
        do
        {
          v85 = *(_BYTE *)(v139 + 56);
          v86 = *(int *)(*v71 + v84);
          v161 = *(_QWORD *)(v139 + 48) + *(int *)(v139 + 64);
          v162.m128i_i8[0] = v85;
          if ( !(unsigned __int8)sub_100240(
                                   (unsigned __int64 *)(*a6 + 24 * v86),
                                   (__int64 *)(v139 + 48),
                                   &v161,
                                   a1[1].m128i_i32[0]) )
          {
            memmove(
              (void *)(v84 + *(_QWORD *)(v139 + 24)),
              (const void *)(v84 + *(_QWORD *)(v139 + 24) + 4),
              4LL * *(_QWORD *)(v139 + 32) - 4 - v84);
            --*(_QWORD *)(v139 + 32);
          }
          LODWORD(v83) = v83 - 1;
          v84 -= 4;
        }
        while ( (_DWORD)v83 != -1 );
      }
      v137 = sub_1006A0(v144.m128i_i64[1], v151, a6, a1[1].m128i_u32[0], (__int64)v71, 0);
LABEL_131:
      sub_8F940((__int64)&v157);
      goto LABEL_45;
    }
    goto LABEL_104;
  }
  if ( v153 == 1 )
  {
    v150 = 1;
    v146 = 0;
    v147 = -1;
    v149 = 0;
    v148 = -1;
    src = nullptr;
    v144.m128i_i64[0] = 0;
LABEL_104:
    v161 = 0;
    v165 = 1;
    v163.m128i_i64[0] = v135;
    v162 = 0;
    v163.m128i_i8[8] = v133;
    v164 = 0xFFFFFFFF00000001LL;
    v64 = sub_FE940(v31, (__int64)&v161);
    if ( v64 != v31 )
    {
      if ( v31 )
      {
        if ( !a1->m128i_i64[1] )
        {
LABEL_109:
          if ( (*v64 & 2) != 0 )
          {
            v66 = (_QWORD *)v64[2];
          }
          else
          {
            v65 = (_QWORD *)v64[1];
            if ( (*(_BYTE *)v65 & 2) != 0 )
            {
              v66 = (_QWORD *)(*v64 & 0xFFFFFFFFFFFFFFFCLL);
              for ( j = *v66; (j & 2) == 0; v66 = (_QWORD *)v68 )
              {
                if ( v64 != (_QWORD *)v66[1] )
                  break;
                v64 = v66;
                v68 = j & 0xFFFFFFFFFFFFFFFCLL;
                j = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFFCLL);
              }
            }
            else
            {
              do
              {
                v66 = v65;
                v65 = (_QWORD *)v65[2];
              }
              while ( (*(_BYTE *)v65 & 2) == 0 );
            }
          }
          v105 = (int *)v66[3];
          for ( k = &v105[v66[4]]; k != v105; ++v105 )
          {
            v107 = *v105;
            v108 = *(_QWORD *)v26 + 4LL * *(_QWORD *)(v26 + 8);
            if ( *(_QWORD *)v26 == v108 )
              goto LABEL_169;
            v109 = *(_DWORD **)v26;
            while ( v107 != *v109 )
            {
              if ( (_DWORD *)v108 == ++v109 )
                goto LABEL_169;
            }
            if ( (_DWORD *)v108 == v109 )
            {
LABEL_169:
              v132 = *(_QWORD *)(v26 + 8);
              v130 = *(_QWORD *)v26 + 4 * v132;
              v122 = (unsigned __int64 *)(*a6 + 24LL * v107);
              v110 = sub_FFFA0(v122, v26);
              if ( v110 != (_QWORD *)*v122 )
              {
                v111 = v110 + 3;
                if ( v110 != (_QWORD *)-24LL )
                {
                  v112 = (_DWORD *)v110[3];
                  v113 = &v112[v110[4]];
                  if ( v112 != v113 )
                  {
                    v114 = (_DWORD *)v130;
                    while ( a1[1].m128i_i32[0] != *v112 )
                    {
                      if ( v113 == ++v112 )
                        goto LABEL_167;
                    }
                    if ( v112 != v113 )
                    {
                      if ( *(_QWORD *)(v26 + 16) < (unsigned __int64)(v132 + 1) )
                      {
                        v123 = v111;
                        v116 = qvector_reserve();
                        v117 = *(_QWORD *)(v26 + 8);
                        v111 = v123;
                        *(_QWORD *)v26 = v116;
                        v114 = (_DWORD *)(v116 + 4 * v117);
                      }
                      *v114 = v107;
                      ++*(_QWORD *)(v26 + 8);
                      if ( (v111[6] & 4) != 0 )
                        *(_BYTE *)(v26 + 48) |= 4u;
                    }
                  }
                }
              }
            }
LABEL_167:
            ;
          }
          goto LABEL_44;
        }
        v31 = (_QWORD *)v31[1];
      }
      if ( v64 == v31 )
        goto LABEL_44;
      goto LABEL_109;
    }
    if ( !under_debugger )
      sub_37E160(52035);
LABEL_202:
    BUG();
  }
  src = nullptr;
  v137 = 0;
LABEL_45:
  v34 = a1[1].m128i_u32[0];
  if ( v34 && v154 < (int)v152 )
    v137 |= sub_1006A0(v144.m128i_i64[1], v151, a6, v34, v26, v154);
  sub_102D70(v144.m128i_i64[1], v26, (__int64)v151, a6);
  sub_1003E0((unsigned __int64 *)a1, (__int64)v143);
  if ( src )
    qfree();
  return (unsigned int)v137 + 1;
}

