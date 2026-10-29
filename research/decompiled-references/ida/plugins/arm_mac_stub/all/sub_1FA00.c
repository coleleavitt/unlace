unsigned __int64 __fastcall sub_1FA00(
        size_t a1,
        __int64 a2,
        signed int a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8,
        _QWORD *a9,
        unsigned int a10)
{
  size_t v10; // rbp
  size_t v11; // rcx
  __int64 v12; // rax
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  char *v19; // rdx
  char *v20; // r14
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  size_t v24; // r15
  const char *v25; // r13
  __int64 (__fastcall *v26)(__int64, char *); // rax
  char *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r15
  unsigned __int64 v31; // r13
  void *v32; // r8
  void *v33; // rdi
  char *v35; // rax
  __int64 v36; // r14
  char *v37; // rbx
  char *v38; // rdx
  __int64 *v39; // r15
  __int64 v40; // r14
  char *v41; // rbx
  __int64 v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rax
  size_t v50; // r11
  __int64 v51; // r9
  unsigned __int64 v52; // r10
  __int64 v53; // rsi
  __int64 v54; // rax
  size_t v55; // r11
  __int64 v56; // r9
  const void *v57; // r12
  unsigned __int64 v58; // r10
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // r15
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 (*v68)(); // r8
  int v69; // eax
  int v70; // r15d
  __int64 v71; // r15
  void *v72; // rsi
  __int64 v73; // r9
  __int64 v74; // r12
  int *v75; // r8
  int v76; // r15d
  __int64 (__fastcall *v77)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  void *v81; // rsi
  void *v82; // rdi
  void *v83; // r11
  _QWORD *v84; // rax
  int *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rax
  int *v88; // rax
  __int64 v89; // rdx
  int v90; // eax
  int v91; // edx
  size_t v92; // r15
  size_t v93; // r8
  __m128i si128; // xmm0
  int *v95; // rax
  int v96; // edx
  int *v97; // r15
  void *v98; // rdi
  void *v99; // rax
  _QWORD *v100; // rcx
  void *v101; // rax
  void *v102; // rax
  int v103; // r15d
  __int64 v104; // rax
  int v105; // ecx
  int *v106; // r12
  __int64 v107; // rdx
  int v108; // eax
  int v109; // esi
  int v110; // edx
  size_t v111; // r12
  __m128i v112; // xmm0
  int *v113; // rax
  unsigned __int64 v114; // rdx
  int *v115; // r15
  __int64 v116; // rcx
  __int64 v117; // rax
  int v118; // ecx
  int *v119; // r12
  __int64 v120; // rax
  unsigned int v121; // eax
  int v122; // esi
  size_t v123; // r12
  __m128i v124; // xmm0
  int *v125; // r12
  void *v126; // rax
  void *v127; // rsi
  void *v128; // rax
  void *v129; // rsi
  __int64 v130; // rcx
  char *v131; // rdi
  _QWORD *v132; // rax
  int v133; // eax
  int v134; // ebx
  int v135; // eax
  int v136; // eax
  __int64 v137; // rcx
  __int64 (__fastcall *v138)(__int64, unsigned int, __int64, __int64); // r11
  unsigned __int64 v139; // r13
  const void *v140; // r14
  __int64 v141; // rdx
  int v142; // eax
  unsigned __int64 v143; // r15
  int *v144; // rbp
  int *v145; // rax
  const void *v146; // rsi
  void *v148; // [rsp+8h] [rbp-190h]
  int v149; // [rsp+8h] [rbp-190h]
  void *v150; // [rsp+8h] [rbp-190h]
  int v151; // [rsp+8h] [rbp-190h]
  _QWORD *v152; // [rsp+10h] [rbp-188h]
  __m128i v155; // [rsp+30h] [rbp-168h] BYREF
  char *v156; // [rsp+40h] [rbp-158h]
  void *v157; // [rsp+48h] [rbp-150h]
  size_t n[2]; // [rsp+50h] [rbp-148h] BYREF
  size_t v159[2]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v160; // [rsp+70h] [rbp-128h]
  char v161; // [rsp+7Bh] [rbp-11Dh]
  unsigned int v162; // [rsp+7Ch] [rbp-11Ch] BYREF
  __int64 v163; // [rsp+80h] [rbp-118h] BYREF
  __int128 v164; // [rsp+88h] [rbp-110h]
  __int64 v165; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v166; // [rsp+A8h] [rbp-F0h]
  unsigned int *v167; // [rsp+C0h] [rbp-D8h] BYREF
  int v168; // [rsp+C8h] [rbp-D0h] BYREF
  void *v169; // [rsp+D0h] [rbp-C8h]
  int *v170; // [rsp+D8h] [rbp-C0h]
  int *v171; // [rsp+E0h] [rbp-B8h]
  __int64 v172; // [rsp+E8h] [rbp-B0h]
  int v173; // [rsp+F0h] [rbp-A8h] BYREF
  void *src; // [rsp+F8h] [rbp-A0h]
  size_t v175[2]; // [rsp+100h] [rbp-98h]
  _QWORD v176[3]; // [rsp+110h] [rbp-88h] BYREF
  char v177; // [rsp+128h] [rbp-70h] BYREF
  unsigned __int64 v178; // [rsp+158h] [rbp-40h]

  v10 = a1;
  v11 = a1 + 344;
  v155.m128i_i64[0] = a2;
  v162 = a3;
  v178 = __readfsqword(0x28u);
  v12 = *(_QWORD *)(a1 + 352);
  v173 = -2;
  src = (void *)-1LL;
  *(_OWORD *)v175 = 0;
  if ( !v12 )
  {
    v14 = a1 + 344;
LABEL_22:
    v167 = &v162;
    v14 = sub_1F4E0((_QWORD *)(v10 + 336), v14, (__int64)&unk_3AFA4, (int **)&v167);
    goto LABEL_8;
  }
  v14 = a1 + 344;
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v12 + 16);
      v16 = *(_QWORD *)(v12 + 24);
      if ( a3 > *(_DWORD *)(v12 + 32) )
        break;
      v14 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v15 )
        goto LABEL_6;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v16 );
LABEL_6:
  if ( v11 == v14 || a3 < *(_DWORD *)(v14 + 32) )
    goto LABEL_22;
LABEL_8:
  v17 = *(_QWORD *)(v14 + 48);
  v18 = *(_QWORD *)(v14 + 56);
  if ( v18 < v17 + 1 )
  {
    v35 = (char *)qvector_reserve();
    v36 = *(_QWORD *)(v14 + 48);
    v37 = *(char **)(v14 + 56);
    v38 = v35;
    *(_QWORD *)(v14 + 56) = v18;
    v39 = *(__int64 **)(v14 + 40);
    v40 = v36 - 1;
    if ( v40 >= 0 )
    {
      v157 = v35;
      v156 = v37;
      v41 = v35;
      n[0] = v10;
      v42 = v40;
      do
      {
        v43 = *v39;
        *v39 = 0;
        *(_QWORD *)v41 = v43;
        *((_QWORD *)v41 + 1) = v39[1];
        v44 = v39[2];
        *(_OWORD *)(v39 + 1) = 0;
        *((_QWORD *)v41 + 2) = v44;
        *((_QWORD *)v41 + 3) = v39[3];
        *((_QWORD *)v41 + 4) = v39[4];
        v41[40] = *((_BYTE *)v39 + 40);
        if ( *v39 )
        {
          v45 = v39[1];
          if ( v45 )
          {
            v46 = 0;
            v47 = *v39;
            do
            {
              v48 = v47 + 32 * v46;
              if ( *(int *)v48 >= -1 && *(_QWORD *)(v48 + 8) )
              {
                *(_QWORD *)(v48 + 16) = 0;
                qfree();
                v47 = *v39;
              }
              ++v46;
            }
            while ( v45 != v46 );
          }
          v39[1] = 0;
          qfree();
        }
        v39 += 6;
        v41 += 48;
      }
      while ( v42-- != 0 );
      v37 = v156;
      v38 = (char *)v157;
      v10 = n[0];
    }
    v156 = v38;
    qfree();
    v19 = v156;
    v17 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)(v14 + 56) = v37;
    *(_QWORD *)(v14 + 40) = v19;
  }
  else
  {
    v19 = *(char **)(v14 + 40);
  }
  v20 = &v19[48 * v17];
  *(_OWORD *)(v20 + 8) = 0;
  *(_QWORD *)v20 = 0;
  v20[40] = 0;
  *(_OWORD *)(v20 + 24) = -1;
  ++*(_QWORD *)(v14 + 48);
  v21 = *(_DWORD *)(v10 + 220);
  v168 = 0;
  v170 = &v168;
  v169 = nullptr;
  v171 = &v168;
  v172 = 0;
  if ( (v21 & 0xFFFFFFF) == 7 )
  {
    v24 = 54;
    v25 = "last event was an exception, cannot perform an appcall";
    goto LABEL_24;
  }
  v22 = *(_QWORD *)(v10 + 680);
  v23 = (int)v22;
  if ( !v22 )
    v23 = *(int *)(v10 + 776);
  sub_1F760((__int64 *)v20, v23);
  LODWORD(v156) = (*(__int64 (__fastcall **)(size_t, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 224LL))(
                    v10,
                    v162,
                    0xFFFFFFFFLL,
                    *(_QWORD *)v20,
                    0);
  v24 = 24;
  v25 = "failed to read registers";
  if ( (_DWORD)v156 != 1 )
    goto LABEL_24;
  v26 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 456LL);
  if ( v26 == sub_1C2F0 )
    v27 = *(char **)(*(_QWORD *)v20 + 32LL * *(int *)(v10 + 780) + 8);
  else
    v27 = (char *)v26(v10, v20);
  if ( v27 == (char *)-1LL )
    goto LABEL_63;
  v28 = *(int *)(v10 + 276);
  v163 = 0;
  v157 = v27;
  v29 = a6[1] + (int)v28 - 1;
  v164 = 0;
  v30 = v29 & -(int)v28;
  v31 = (unsigned __int64)&v27[-v30 - v28] & 0xFFFFFFFFFFFFFFF0LL;
  *((_QWORD *)v20 + 4) = v31 + v30;
  v161 = relocate_relobj();
  v32 = v157;
  if ( !v161 )
  {
    if ( v163 )
    {
      *(_QWORD *)&v164 = 0;
      qfree();
    }
    v24 = 45;
    v25 = "failed to allocate memory for stack arguments";
    goto LABEL_24;
  }
  v50 = *(int *)(v10 + 276);
  if ( *(_DWORD *)(v10 + 276) )
  {
    v51 = v164;
    v52 = v164 + v50;
    if ( __CFADD__((_QWORD)v164, v50) )
    {
      if ( (unsigned __int64)v164 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v164 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v164 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_50;
      }
      v52 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v53 = v163;
    v54 = v164;
    if ( *((_QWORD *)&v164 + 1) < v52 )
    {
      v160 = v164;
      v159[0] = (size_t)v157;
      n[0] = v50;
      v157 = (void *)v52;
      v163 = qvector_reserve();
      v53 = v163;
      v51 = v160;
      v54 = v164;
      v32 = (void *)v159[0];
      v50 = n[0];
      v52 = (unsigned __int64)v157;
    }
    v160 = v51;
    v159[0] = (size_t)v32;
    n[0] = v50;
    v157 = (void *)v52;
    memset((void *)(v53 + v54), 0, v52 - v54);
    v50 = n[0];
    v32 = (void *)v159[0];
    v51 = v160;
    *(_QWORD *)&v164 = v157;
LABEL_50:
    v157 = v32;
    memcpy((void *)(v51 + v163), v20 + 32, v50);
    v32 = v157;
  }
  v55 = a6[1];
  if ( !v55 )
    goto LABEL_57;
  v56 = v164;
  v57 = (const void *)*a6;
  v58 = v164 + v55;
  if ( __CFADD__((_QWORD)v164, v55) )
  {
    if ( (unsigned __int64)v164 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v164 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v164 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_56;
    }
    v58 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v59 = v163;
  v60 = v164;
  if ( *((_QWORD *)&v164 + 1) < v58 )
  {
    v160 = v164;
    v159[0] = v55;
    n[0] = (size_t)v32;
    v157 = (void *)v58;
    v163 = qvector_reserve();
    v59 = v163;
    v56 = v160;
    v60 = v164;
    v55 = v159[0];
    v32 = (void *)n[0];
    v58 = (unsigned __int64)v157;
  }
  v160 = v56;
  v159[0] = v55;
  n[0] = (size_t)v32;
  v157 = (void *)v58;
  memset((void *)(v59 + v60), 0, v58 - v60);
  v32 = (void *)n[0];
  v55 = v159[0];
  v56 = v160;
  *(_QWORD *)&v164 = v157;
LABEL_56:
  v157 = v32;
  memcpy((void *)(v56 + v163), v57, v55);
  v32 = v157;
LABEL_57:
  v61 = *(int *)(v10 + 276);
  v62 = v164;
  v63 = v61 + v30;
  if ( (unsigned __int64)v164 < v63 )
  {
    v66 = v163;
    if ( *((_QWORD *)&v164 + 1) < v63 )
    {
      v157 = v32;
      v163 = qvector_reserve();
      v62 = v164;
      v66 = v163;
      v32 = v157;
    }
    v157 = v32;
    memset((void *)(v66 + v62), 0, v63 - v62);
    *(_QWORD *)&v164 = v63;
    v32 = v157;
    v61 = *(int *)(v10 + 276);
  }
  else if ( v63 != (_QWORD)v164 )
  {
    *(_QWORD *)&v164 = v63;
  }
  v64 = v31 - v61;
  *((_QWORD *)v20 + 3) = v31 - v61;
  if ( v31 - v61 >= (unsigned __int64)v32 )
  {
    if ( v163 )
    {
      *(_QWORD *)&v164 = 0;
      qfree();
    }
LABEL_63:
    v24 = 30;
    v25 = "failed to allocate stack frame";
    goto LABEL_24;
  }
  v67 = 0;
  v68 = *(__int64 (**)())(*(_QWORD *)v10 + 448LL);
  v69 = 0;
  if ( v68 != sub_1A550 )
  {
    v69 = ((__int64 (__fastcall *)(size_t, char *, unsigned int **, __int64 *))v68)(v10, v20, &v167, &v163);
    v67 = v69;
    v64 = v69 + *((_QWORD *)v20 + 3);
  }
  v70 = v164;
  *((_QWORD *)v20 + 3) = v64;
  v71 = (unsigned int)(v70 - v69);
  if ( (int)v71 > 0
    && v71 != (*(__int64 (__fastcall **)(size_t, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 296LL))(
                v10,
                v64,
                v163 + v67,
                v71,
                0) )
  {
    if ( v163 )
    {
      *(_QWORD *)&v164 = 0;
      qfree();
    }
    v24 = 31;
    v25 = "failed to setup stack arguments";
    goto LABEL_24;
  }
  v72 = nullptr;
  (*(void (__fastcall **)(size_t, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v10 + 312LL))(
    v10,
    0,
    4,
    *((_QWORD *)v20 + 4),
    0xFFFFFFFFLL);
  if ( a5[1] )
  {
    v74 = 0;
    while ( 1 )
    {
      v75 = (int *)(*a5 + 32 * v74);
      v76 = *v75;
      if ( *v75 == *(_DWORD *)(v10 + 780) || v76 == *(_DWORD *)(v10 + 784) )
      {
        if ( v163 )
        {
          *(_QWORD *)&v164 = 0;
          qfree();
        }
        v103 = 3;
        goto LABEL_151;
      }
      v77 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 608LL);
      if ( v77 == sub_1DA10 )
      {
        v78 = *(_QWORD *)(v10 + 680);
        if ( !v78 )
          sub_1B060(
            (__int64)"debmod_t::get_reginfo is not implemented",
            (__int64)v72,
            0,
            (__int64)sub_1DA10,
            (__int64)v75,
            v73,
            a8);
        if ( v76 >= v78 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        v79 = *(_QWORD *)(v10 + 672) + 32LL * v76;
      }
      else
      {
        v157 = (void *)(*a5 + 32 * v74);
        v79 = ((__int64 (__fastcall *)(size_t, _QWORD))v77)(v10, (unsigned int)v76);
        v75 = (int *)v157;
      }
      v80 = *(unsigned __int8 *)(v79 + 13);
      if ( (unsigned __int8)v80 <= 0x12u )
      {
        v81 = &unk_48038;
        if ( _bittest64((const __int64 *)&v81, v80) )
          break;
      }
      if ( *((_QWORD *)v75 + 2) > 8u || (*(_BYTE *)(v79 + 9) & 1) != 0 )
      {
        if ( v173 >= -1 && src )
        {
          v157 = v75;
          v175[0] = 0;
          qfree();
          v75 = (int *)v157;
        }
        v82 = nullptr;
        src = nullptr;
        *(_OWORD *)v175 = 0;
        v83 = *((void **)v75 + 2);
        v173 = 0;
        if ( v83 )
        {
LABEL_89:
          n[0] = (size_t)v75;
          v157 = v83;
          src = (void *)qvector_reserve();
          memset((char *)src + v175[0], 0, (size_t)v157 - v175[0]);
          v75 = (int *)n[0];
          v82 = src;
          v175[0] = (size_t)v157;
          v83 = *(void **)(n[0] + 16);
        }
LABEL_90:
        memcpy(v82, *((const void **)v75 + 1), (size_t)v83);
        goto LABEL_91;
      }
      if ( v173 >= -1 )
      {
        if ( src )
        {
          v157 = v75;
          v175[0] = 0;
          qfree();
          v75 = (int *)v157;
        }
        v173 = -2;
      }
      v157 = v75;
      __memcpy_chk();
      if ( *((_DWORD *)v157 + 1) )
        src = (char *)src + v31;
LABEL_91:
      v84 = v169;
      v85 = &v168;
      if ( !v169 )
        goto LABEL_98;
      do
      {
        while ( 1 )
        {
          v72 = (void *)v84[2];
          v86 = v84[3];
          if ( v76 > *((_DWORD *)v84 + 8) )
            break;
          v85 = (int *)v84;
          v84 = (_QWORD *)v84[2];
          if ( !v72 )
            goto LABEL_96;
        }
        v84 = (_QWORD *)v84[3];
      }
      while ( v86 );
LABEL_96:
      if ( v85 == &v168 || v76 < v85[8] )
      {
LABEL_98:
        n[0] = (size_t)v85;
        v87 = operator new(0x48u);
        *(_DWORD *)(v87 + 32) = v76;
        v72 = (void *)n[0];
        *(_DWORD *)(v87 + 40) = -2;
        *(_QWORD *)(v87 + 48) = -1;
        *(_OWORD *)(v87 + 56) = 0;
        v157 = (void *)v87;
        v88 = (int *)sub_1C5B0(&v167, (__int64)v72, v76);
        v85 = v88;
        if ( v89 )
        {
          v72 = v157;
          std::_Rb_tree_insert_and_rebalance();
          v85 = (int *)v157;
          ++v172;
        }
        else if ( v157 )
        {
          v72 = &qword_48;
          v98 = v157;
          v157 = v88;
          operator delete(v98, 0x48u);
          v85 = (int *)v157;
        }
      }
      if ( &v173 != v85 + 10 )
      {
        v90 = v173;
        v91 = v85[10];
        if ( v173 < -1 )
        {
          if ( v91 >= -1 && *((_QWORD *)v85 + 6) )
          {
            *((_QWORD *)v85 + 7) = 0;
            v157 = v85;
            qfree();
            v90 = v173;
            v85 = (int *)v157;
          }
          *((_QWORD *)v85 + 6) = src;
        }
        else
        {
          v92 = v175[0];
          if ( v91 < -1 )
          {
            *((_QWORD *)v85 + 6) = 0;
            *(_OWORD *)(v85 + 14) = 0;
            if ( v92 )
            {
              v157 = v85;
              v99 = (void *)qalloc_or_throw();
              v100 = v157;
              v72 = src;
              *((_QWORD *)v157 + 6) = v99;
              v100[8] = v92;
              memcpy(v99, v72, v92);
              v85 = (int *)v157;
              v90 = v173;
              *((_QWORD *)v157 + 7) = v92;
            }
          }
          else
          {
            v93 = 0;
            if ( v175[0] )
            {
              v157 = v85;
              v101 = (void *)qalloc_or_throw();
              v72 = src;
              v102 = memcpy(v101, src, v92);
              v85 = (int *)v157;
              v93 = (size_t)v102;
            }
            si128 = _mm_unpacklo_epi64((__m128i)v92, (__m128i)v92);
            if ( *((_QWORD *)v85 + 6) )
            {
              *((_QWORD *)v85 + 7) = 0;
              n[0] = v93;
              v157 = v85;
              *(__m128i *)v159 = si128;
              qfree();
              si128 = _mm_load_si128((const __m128i *)v159);
              v93 = n[0];
              v85 = (int *)v157;
            }
            *((_QWORD *)v85 + 6) = v93;
            v90 = v173;
            *(__m128i *)(v85 + 14) = si128;
          }
        }
        v85[10] = v90;
      }
      if ( (unsigned __int64)++v74 >= a5[1] )
        goto LABEL_110;
    }
    if ( v173 >= -1 && src )
    {
      v157 = v75;
      v175[0] = 0;
      qfree();
      v75 = (int *)v157;
    }
    v82 = nullptr;
    src = nullptr;
    *(_OWORD *)v175 = 0;
    v83 = *((void **)v75 + 2);
    v173 = -1;
    if ( v83 )
      goto LABEL_89;
    goto LABEL_90;
  }
LABEL_110:
  if ( v173 >= -1 )
  {
    if ( src )
    {
      v175[0] = 0;
      qfree();
    }
    v173 = -2;
  }
  src = *((void **)v20 + 3);
  v95 = (int *)v169;
  if ( v169 )
  {
    v96 = *(_DWORD *)(v10 + 780);
    v97 = &v168;
    do
    {
      if ( v96 <= v95[8] )
      {
        v97 = v95;
        v95 = *((int **)v95 + 2);
      }
      else
      {
        v95 = *((int **)v95 + 3);
      }
    }
    while ( v95 );
    if ( v97 != &v168 && v96 >= v97[8] )
      goto LABEL_157;
  }
  else
  {
    v97 = &v168;
  }
  v104 = operator new(0x48u);
  v105 = *(_DWORD *)(v10 + 780);
  v106 = (int *)v104;
  *(_DWORD *)(v104 + 40) = -2;
  *(_DWORD *)(v104 + 32) = v105;
  *(_QWORD *)(v104 + 48) = -1;
  *(_OWORD *)(v104 + 56) = 0;
  v97 = (int *)sub_1C5B0(&v167, (__int64)v97, v105);
  if ( v107 )
  {
    v97 = v106;
    std::_Rb_tree_insert_and_rebalance();
    ++v172;
  }
  else if ( v106 )
  {
    operator delete(v106, 0x48u);
  }
LABEL_157:
  v157 = &v173;
  if ( &v173 != v97 + 10 )
  {
    v108 = v173;
    v109 = v97[10];
    v110 = v173;
    if ( v173 < -1 )
    {
      if ( v109 >= -1 )
      {
        if ( *((_QWORD *)v97 + 6) )
        {
          *((_QWORD *)v97 + 7) = 0;
          qfree();
          v108 = v173;
        }
        v110 = v108;
      }
      *((_QWORD *)v97 + 6) = src;
    }
    else
    {
      v111 = v175[0];
      if ( v109 < -1 )
      {
        *((_QWORD *)v97 + 6) = 0;
        *(_OWORD *)(v97 + 14) = 0;
        if ( v111 )
        {
          v126 = (void *)qalloc_or_throw();
          *((_QWORD *)v97 + 6) = v126;
          v127 = src;
          *((_QWORD *)v97 + 8) = v111;
          memcpy(v126, v127, v111);
          *((_QWORD *)v97 + 7) = v111;
          v110 = v173;
        }
      }
      else
      {
        v148 = nullptr;
        if ( v175[0] )
        {
          v148 = (void *)qalloc_or_throw();
          memcpy(v148, src, v111);
        }
        v112 = _mm_unpacklo_epi64((__m128i)v111, (__m128i)v111);
        if ( *((_QWORD *)v97 + 6) )
        {
          *((_QWORD *)v97 + 7) = 0;
          *(__m128i *)n = v112;
          qfree();
          v112 = _mm_load_si128((const __m128i *)n);
        }
        v110 = v173;
        *(__m128i *)(v97 + 14) = v112;
        *((_QWORD *)v97 + 6) = v148;
      }
    }
    v97[10] = v110;
  }
  src = (void *)v155.m128i_i64[0];
  v113 = (int *)v169;
  if ( v169 )
  {
    v114 = *(unsigned int *)(v10 + 784);
    v115 = &v168;
    do
    {
      v116 = *((_QWORD *)v113 + 3);
      if ( (int)v114 <= v113[8] )
      {
        v115 = v113;
        v113 = *((int **)v113 + 2);
      }
      else
      {
        v113 = *((int **)v113 + 3);
      }
    }
    while ( v113 );
    if ( v115 != &v168 && (int)v114 >= v115[8] )
      goto LABEL_179;
  }
  else
  {
    v115 = &v168;
  }
  v117 = operator new(0x48u);
  v118 = *(_DWORD *)(v10 + 784);
  v119 = (int *)v117;
  *(_DWORD *)(v117 + 40) = -2;
  *(_DWORD *)(v117 + 32) = v118;
  *(_QWORD *)(v117 + 48) = -1;
  *(_OWORD *)(v117 + 56) = 0;
  v149 = v118;
  v120 = sub_1C5B0(&v167, (__int64)v115, v118);
  v115 = (int *)v120;
  if ( v114 )
  {
    if ( !v120 && &v168 != (int *)v114 )
      LODWORD(v156) = v149 < *(_DWORD *)(v114 + 32);
    v115 = v119;
    std::_Rb_tree_insert_and_rebalance();
    ++v172;
  }
  else if ( v119 )
  {
    operator delete(v119, 0x48u);
  }
LABEL_179:
  if ( v157 != v115 + 10 )
  {
    v121 = v173;
    v122 = v115[10];
    v114 = (unsigned int)v173;
    if ( v173 < -1 )
    {
      if ( v122 >= -1 )
      {
        if ( *((_QWORD *)v115 + 6) )
        {
          *((_QWORD *)v115 + 7) = 0;
          qfree();
          v121 = v173;
        }
        v114 = v121;
      }
      *((_QWORD *)v115 + 6) = src;
    }
    else
    {
      v123 = v175[0];
      if ( v122 < -1 )
      {
        *((_QWORD *)v115 + 6) = 0;
        *(_OWORD *)(v115 + 14) = 0;
        if ( v123 )
        {
          v128 = (void *)qalloc_or_throw();
          *((_QWORD *)v115 + 6) = v128;
          v129 = src;
          *((_QWORD *)v115 + 8) = v123;
          memcpy(v128, v129, v123);
          *((_QWORD *)v115 + 7) = v123;
          v114 = (unsigned int)v173;
        }
      }
      else
      {
        v150 = nullptr;
        if ( v175[0] )
        {
          v150 = (void *)qalloc_or_throw();
          memcpy(v150, src, v123);
        }
        v124 = _mm_unpacklo_epi64((__m128i)v123, (__m128i)v123);
        if ( *((_QWORD *)v115 + 6) )
        {
          *((_QWORD *)v115 + 7) = 0;
          v155 = v124;
          qfree();
          v124 = _mm_load_si128(&v155);
        }
        v114 = (unsigned int)v173;
        *(__m128i *)(v115 + 14) = v124;
        *((_QWORD *)v115 + 6) = v150;
      }
    }
    v115[10] = v114;
  }
  v125 = v170;
  if ( v170 != &v168 )
  {
    while ( (*(unsigned int (__fastcall **)(size_t, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v10 + 232LL))(
              v10,
              v162,
              (unsigned int)v125[8],
              v125 + 10,
              0) == 1 )
    {
      v20[40] = 1;
      v125 = (int *)std::_Rb_tree_increment();
      if ( v125 == &v168 )
        goto LABEL_195;
    }
    if ( v163 )
    {
      *(_QWORD *)&v164 = 0;
      qfree();
    }
    v103 = 6;
LABEL_151:
    v25 = off_45E60[v103];
    if ( !v25 || (v24 = strlen(off_45E60[v103])) == 0 )
    {
      *(_QWORD *)(a8 + 8) = 0;
LABEL_27:
      (*(void (__fastcall **)(size_t, _QWORD))(*(_QWORD *)v10 + 432LL))(v10, v162);
      v31 = -1;
      goto LABEL_28;
    }
LABEL_24:
    v33 = *(void **)a8;
    if ( *(_QWORD *)(a8 + 16) < v24 + 1 )
    {
      v65 = qvector_reserve();
      *(_QWORD *)a8 = v65;
      v33 = (void *)v65;
    }
    *(_QWORD *)(a8 + 8) = v24 + 1;
    memmove(v33, v25, v24);
    *(_BYTE *)(*(_QWORD *)a8 + v24) = 0;
    goto LABEL_27;
  }
LABEL_195:
  v103 = a10 & 1;
  if ( (a10 & 1) != 0 )
  {
    if ( v163 )
      goto LABEL_197;
    goto LABEL_28;
  }
  *(_BYTE *)(v10 + 216) = 1;
  v156 = (char *)(v10 + 200);
  LODWORD(v157) = (*(__int64 (__fastcall **)(size_t, size_t, unsigned __int64, __int64))(*(_QWORD *)v10 + 168LL))(
                    v10,
                    v10 + 200,
                    v114,
                    v116);
  if ( (_DWORD)v157 != 1 )
  {
    if ( v163 )
    {
      *(_QWORD *)&v164 = 0;
      qfree();
    }
    v24 = 32;
    v25 = "failed to resume the application";
    goto LABEL_24;
  }
  v130 = 12;
  v176[2] = 0;
  v131 = &v177;
  v176[0] = 0xFFFFFFFFLL;
  while ( v130 )
  {
    *(_DWORD *)v131 = 0;
    v131 += 4;
    --v130;
  }
  v132 = a9;
  v176[1] = -1;
  if ( !a9 )
    v132 = v176;
  v152 = v132;
  v133 = a10 & 4;
  if ( (a10 & 4) != 0 )
  {
    v134 = HIWORD(a10);
    if ( HIWORD(a10) )
    {
      v155.m128i_i64[0] = get_nsec_stamp() + 1000000LL * (unsigned int)v134;
      v133 = 1;
    }
    else
    {
      v134 = 0;
      v133 = 1;
      v155.m128i_i64[0] = 0;
    }
  }
  else
  {
    v134 = 40;
    v155.m128i_i64[0] = 0;
  }
  v151 = 2 * v133;
  while ( 1 )
  {
    v135 = (*(__int64 (__fastcall **)(size_t, _QWORD *, _QWORD))(*(_QWORD *)v10 + 136LL))(v10, v152, (unsigned int)v134);
    if ( v135 )
      break;
LABEL_243:
    if ( v151 )
    {
      if ( v134 <= 0 || (v151 = 2, v134 = (v155.m128i_i64[0] - get_nsec_stamp()) / 1000000, v134 <= 0) )
      {
        if ( (*(int (__fastcall **)(size_t, _QWORD))(*(_QWORD *)v10 + 152LL))(v10, 0) <= 0 )
        {
          v103 = 12;
LABEL_274:
          free_debug_event();
          if ( !v163 )
            goto LABEL_151;
          goto LABEL_275;
        }
        v151 = 2;
        v103 = 12;
      }
    }
  }
  if ( v135 == -1 )
  {
    v103 = 8;
    goto LABEL_274;
  }
  LODWORD(n[0]) = *((_DWORD *)v152 + 5);
  v136 = n[0] & 0xFFFFFFF;
  if ( (n[0] & 0xFFFFFFF) == 2 )
    goto LABEL_301;
  if ( v136 == 4 )
  {
    if ( *((_DWORD *)v152 + 1) == v162 )
    {
LABEL_301:
      sub_EA00(v10, v152, 8);
      v31 = -1;
      goto LABEL_251;
    }
    if ( v103 == 12 )
    {
LABEL_303:
      sub_EA00(v10, v152, 10);
      set_debug_event_code();
      set_debug_event_code();
      v161 = 0;
      v103 = 12;
      goto LABEL_251;
    }
    v137 = *((_QWORD *)v20 + 4);
    v138 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64, __int64))(*(_QWORD *)v10 + 464LL);
    if ( v138 == sub_1C2B0 )
      goto LABEL_241;
    goto LABEL_261;
  }
  if ( v103 == 12 )
    goto LABEL_303;
  v137 = *((_QWORD *)v20 + 4);
  v138 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64, __int64))(*(_QWORD *)v10 + 464LL);
  if ( v138 != sub_1C2B0 )
  {
LABEL_261:
    if ( (unsigned __int8)v138(v10, v162, (__int64)v152, v137) )
      goto LABEL_250;
    LODWORD(n[0]) = *((_DWORD *)v152 + 5);
    if ( (n[0] & 0xFFFFFFF) == 7 )
      goto LABEL_263;
    goto LABEL_241;
  }
  if ( v136 == 5 )
  {
    if ( v137 == v152[1] )
      goto LABEL_250;
    goto LABEL_241;
  }
  if ( v136 != 7 )
  {
LABEL_241:
    v103 = sub_EA00(v10, v152, 10);
    if ( v103 )
    {
      v103 = 7;
      goto LABEL_274;
    }
    (*(void (__fastcall **)(size_t, _QWORD *))(*(_QWORD *)v10 + 168LL))(v10, v152);
    set_debug_event_code();
    goto LABEL_243;
  }
  if ( v152[4] != v137 && v152[1] != v137 )
  {
LABEL_263:
    if ( (a10 & 2) == 0 && (_QWORD *)a8 != v152 + 5 )
    {
      v139 = v152[6];
      if ( v139 > 1 )
      {
        v140 = (const void *)v152[5];
        if ( *(_QWORD *)(a8 + 16) < v139 )
          *(_QWORD *)a8 = qvector_reserve();
        *(_QWORD *)(a8 + 8) = v139;
        memmove(*(void **)a8, v140, v139 - 1);
        *(_BYTE *)(*(_QWORD *)a8 + v139 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a8 + 8) = 0;
      }
    }
    set_debug_event_code();
    *(_BYTE *)(v10 + 216) = 1;
    free_debug_event();
    if ( v163 )
    {
      *(_QWORD *)&v164 = 0;
      qfree();
    }
    goto LABEL_27;
  }
LABEL_250:
  set_debug_event_code();
  v161 = 0;
LABEL_251:
  if ( v103 || v161 )
  {
    free_debug_event();
    if ( !v163 )
    {
LABEL_276:
      if ( !v103 )
        goto LABEL_28;
      goto LABEL_151;
    }
LABEL_275:
    *(_QWORD *)&v164 = 0;
    qfree();
    goto LABEL_276;
  }
  if ( a4 > 0
    && (a6[1] < (unsigned __int64)a4
     || a4 != (*(__int64 (__fastcall **)(size_t, unsigned __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 296LL))(
                v10,
                v31,
                *a6,
                a4,
                0)) )
  {
    free_debug_event();
    if ( v163 )
    {
      v103 = 5;
      *(_QWORD *)&v164 = 0;
      qfree();
      goto LABEL_151;
    }
    LODWORD(v157) = 5;
LABEL_305:
    v103 = (int)v157;
    goto LABEL_151;
  }
  if ( a7 && a7[1] )
  {
    v141 = *(_QWORD *)(v10 + 680);
    v165 = 0;
    v166 = 0;
    v142 = v141;
    if ( !v141 )
      v142 = *(_DWORD *)(v10 + 776);
    sub_1F760(&v165, v142);
    v143 = 0;
    if ( (*(int (__fastcall **)(size_t, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 224LL))(
           v10,
           v162,
           0xFFFFFFFFLL,
           v165,
           0) <= 0 )
    {
      sub_1F470(&v165);
      free_debug_event();
      if ( v163 )
      {
        v103 = 1;
        *(_QWORD *)&v164 = 0;
        qfree();
        goto LABEL_151;
      }
      goto LABEL_305;
    }
    while ( v143 < a7[1] )
    {
      v144 = (int *)(*a7 + 32 * v143);
      v145 = (int *)(v165 + 32LL * *v144);
      v146 = v145 + 2;
      if ( *v145 >= -1 )
        v146 = *((const void **)v145 + 1);
      ++v143;
      memcpy(*((void **)v144 + 1), v146, *((_QWORD *)v144 + 2));
      v144[1] = 0;
    }
    sub_1F470(&v165);
  }
  free_debug_event();
  if ( !v163 )
    goto LABEL_28;
LABEL_197:
  *(_QWORD *)&v164 = 0;
  qfree();
LABEL_28:
  sub_1CCA0((void **)v169);
  if ( v173 >= -1 && src )
  {
    v175[0] = 0;
    qfree();
  }
  return v31;
}

