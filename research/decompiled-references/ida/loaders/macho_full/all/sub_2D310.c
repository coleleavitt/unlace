unsigned __int64 __fastcall sub_2D310(double a1, __int64 a2, __int64 a3, __int64 a4, const char *a5)
{
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v14; // rdi
  char *v15; // rdi
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  unsigned __int64 i; // r15
  int v23; // r12d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  size_t v29; // r14
  __int64 v30; // rdx
  unsigned __int64 j; // r15
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 k; // rbx
  __int64 *v38; // rax
  __int64 v39; // r12
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 m; // rbx
  __int64 *v44; // rax
  __int64 v45; // r12
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  int *v62; // r14
  _OWORD *v63; // rdx
  __int64 v64; // r12
  __int64 v65; // r14
  _QWORD *v66; // rax
  char *v67; // r15
  __int64 v68; // r12
  size_t v69; // r8
  __int128 v70; // rax
  int *v71; // r9
  __int64 v72; // r14
  __int64 v73; // rax
  size_t v74; // r12
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rsi
  size_t v78; // rdx
  __int64 v79; // r14
  __int64 v80; // rcx
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // r15
  const char *v85; // rsi
  const char *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // r15
  int *v90; // rsi
  unsigned __int64 v91; // rdi
  __int64 v92; // rax
  int *v93; // rax
  __int64 v94; // rsi
  _QWORD *v95; // r14
  __int64 v96; // rax
  __int64 dirtree; // rax
  __int64 v98; // rdx
  __int64 v99; // r15
  int *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __m128i *v105; // r12
  const char *v106; // rsi
  size_t v107; // [rsp+0h] [rbp-12B0h]
  signed __int64 v108; // [rsp+10h] [rbp-12A0h]
  __int64 v109; // [rsp+10h] [rbp-12A0h]
  __int64 v110; // [rsp+20h] [rbp-1290h]
  size_t v111; // [rsp+20h] [rbp-1290h]
  char *v112; // [rsp+28h] [rbp-1288h]
  const void **v113; // [rsp+30h] [rbp-1280h]
  __int64 v114; // [rsp+30h] [rbp-1280h]
  __int64 v115; // [rsp+38h] [rbp-1278h]
  void *v116; // [rsp+38h] [rbp-1278h]
  int *v117; // [rsp+38h] [rbp-1278h]
  __int64 v118; // [rsp+38h] [rbp-1278h]
  __int64 v119; // [rsp+38h] [rbp-1278h]
  __int64 v120; // [rsp+38h] [rbp-1278h]
  __int64 v121; // [rsp+48h] [rbp-1268h] BYREF
  __int64 v122; // [rsp+50h] [rbp-1260h] BYREF
  char v123; // [rsp+58h] [rbp-1258h]
  char *s; // [rsp+60h] [rbp-1250h]
  __int128 v125; // [rsp+68h] [rbp-1248h]
  int *v126; // [rsp+80h] [rbp-1230h]
  __int128 v127; // [rsp+88h] [rbp-1228h]
  _OWORD *v128; // [rsp+A0h] [rbp-1210h] BYREF
  __int128 v129; // [rsp+A8h] [rbp-1208h]
  __int64 (__fastcall **v130)(); // [rsp+C0h] [rbp-11F0h] BYREF
  __int64 v131; // [rsp+C8h] [rbp-11E8h]
  __int128 v132; // [rsp+D0h] [rbp-11E0h]
  __int64 v133; // [rsp+E0h] [rbp-11D0h]
  const char *v134; // [rsp+E8h] [rbp-11C8h]
  int v135; // [rsp+F0h] [rbp-11C0h]
  __m128i v136; // [rsp+F8h] [rbp-11B8h] BYREF
  int v137; // [rsp+108h] [rbp-11A8h]
  char v138; // [rsp+110h] [rbp-11A0h] BYREF
  char v139; // [rsp+158h] [rbp-1158h] BYREF
  int v140; // [rsp+170h] [rbp-1140h] BYREF
  __int64 v141; // [rsp+178h] [rbp-1138h]
  _OWORD **v142; // [rsp+180h] [rbp-1130h]
  __int64 (__fastcall **v143)(); // [rsp+190h] [rbp-1120h] BYREF
  __int64 v144; // [rsp+198h] [rbp-1118h]
  __int128 v145; // [rsp+1A0h] [rbp-1110h]
  __int64 v146; // [rsp+1B0h] [rbp-1100h]
  const char *v147; // [rsp+1B8h] [rbp-10F8h]
  int v148; // [rsp+1C0h] [rbp-10F0h]
  __m128i v149; // [rsp+1C8h] [rbp-10E8h]
  int v150; // [rsp+1D8h] [rbp-10D8h]
  char v151; // [rsp+1E0h] [rbp-10D0h] BYREF
  int v152; // [rsp+240h] [rbp-1070h] BYREF
  _QWORD *v153; // [rsp+248h] [rbp-1068h]
  __int64 v154; // [rsp+250h] [rbp-1060h]
  __int64 v155; // [rsp+258h] [rbp-1058h]
  _OWORD **v156; // [rsp+260h] [rbp-1050h]
  _BYTE v157[4104]; // [rsp+270h] [rbp-1040h] BYREF
  unsigned __int64 v158; // [rsp+1278h] [rbp-38h]

  v158 = __readfsqword(0x28u);
  v8 = strchr(a5, 40);
  if ( !v8 )
    sub_1A260((__int64)"invalid file format: %s", (__int64)a5, v9, v10, v11, v12, v107);
  v115 = (__int64)strstr(v8, "complete image");
  if ( v115 )
  {
    *(_BYTE *)(a3 + 160) = 1;
    return v158 - __readfsqword(0x28u);
  }
  if ( (unsigned __int8)netnode_exist() )
  {
    v21 = netnode_altval();
    if ( v21 )
    {
      if ( (unsigned __int8)is_loaded() )
      {
        v16 = "AUTOHIDE DATABASE\nHIDECANCEL\nThis section has already been loaded. Do you want to load it again?";
        if ( (int)sub_19F30() <= 0 )
          goto LABEL_27;
      }
      *(_QWORD *)(a3 + 152) = v21;
    }
    for ( i = netnode_supfirst(); i != -1; i = netnode_supnext() )
    {
      v23 = i;
      if ( i >= *(int *)(a4 + 632) )
      {
        sub_112F0((__int64)"Warning: invalid island number: %d\n", i);
      }
      else if ( *(_QWORD *)(a3 + 152) != -1 || !netnode_altval() || (int)sub_19F30() > 0 )
      {
        v57 = *(_QWORD *)(a3 + 64);
        v56 = *(_QWORD *)(a3 + 56);
        LODWORD(v128) = i;
        v24 = *(_QWORD *)(a3 + 72);
        v25 = v57 + 1;
        if ( (unsigned __int64)&v128 < v56 || (unsigned __int64)&v128 >= v56 + 4 * v24 )
        {
          if ( v24 < v25 )
          {
            v26 = qvector_reserve();
            v23 = (int)v128;
            *(_QWORD *)(a3 + 56) = v26;
            v56 = v26;
            v57 = *(_QWORD *)(a3 + 64);
          }
        }
        else if ( v24 < v25 )
        {
          v55 = qvector_reserve();
          *(_QWORD *)(a3 + 56) = v55;
          v56 = v55;
          v57 = *(_QWORD *)(a3 + 64);
        }
        *(_DWORD *)(v56 + 4 * v57) = v23;
        ++*(_QWORD *)(a3 + 64);
      }
    }
    v27 = netnode_supfirst();
    if ( v27 == -1 )
    {
LABEL_63:
      for ( j = netnode_supfirst(); j != -1; j = netnode_supnext() )
      {
        v35 = sub_1C420((_QWORD *)a4, j);
        if ( v35 && *((_BYTE *)v35 + 860) )
        {
          v32 = *(_QWORD *)v35[66] & *(_QWORD *)(*(_QWORD *)a4 + 16LL);
          if ( !netnode_altval() || (int)sub_19F30() > 0 )
          {
            v33 = *(_QWORD *)(a3 + 88);
            v34 = *(_QWORD *)(a3 + 80);
            if ( *(_QWORD *)(a3 + 96) < (unsigned __int64)(v33 + 1) )
            {
              v36 = qvector_reserve();
              *(_QWORD *)(a3 + 80) = v36;
              v34 = v36;
              v33 = *(_QWORD *)(a3 + 88);
            }
            *(_QWORD *)(v34 + 8 * v33) = v32;
            ++*(_QWORD *)(a3 + 88);
          }
        }
        else
        {
          sub_112F0((__int64)"Warning: invalid branch mapping address: %a\n", a1);
        }
      }
      for ( k = netnode_supfirst(); k != -1; k = netnode_supnext() )
      {
        v39 = netnode_altval();
        if ( !netnode_altval() || (int)sub_19F30() > 0 )
        {
          v51 = *(_QWORD *)(a3 + 112);
          v50 = *(_QWORD *)(a3 + 104);
          v128 = (_OWORD *)k;
          *(_QWORD *)&v129 = v39;
          v40 = *(_QWORD *)(a3 + 120);
          v41 = v51 + 1;
          if ( (unsigned __int64)&v128 < v50 || (unsigned __int64)&v128 >= v50 + 16 * v40 )
          {
            if ( v40 < v41 )
            {
              v42 = qvector_reserve();
              *(_QWORD *)(a3 + 104) = v42;
              v50 = v42;
              v51 = *(_QWORD *)(a3 + 112);
            }
            *(__m128i *)(v50 + 16 * v51) = _mm_load_si128((const __m128i *)&v128);
          }
          else
          {
            if ( v40 < v41 )
            {
              v49 = qvector_reserve();
              *(_QWORD *)(a3 + 104) = v49;
              v50 = v49;
              v51 = *(_QWORD *)(a3 + 112);
            }
            v38 = (__int64 *)(v50 + 16 * v51);
            *v38 = k;
            v38[1] = v39;
          }
          ++*(_QWORD *)(a3 + 112);
        }
      }
      v16 = (const char *)&qword_70;
      for ( m = netnode_supfirst(); m != -1; m = netnode_supnext() )
      {
        v45 = netnode_altval();
        if ( !netnode_altval() || (int)sub_19F30() > 0 )
        {
          v54 = *(_QWORD *)(a3 + 136);
          v53 = *(_QWORD *)(a3 + 128);
          v128 = (_OWORD *)m;
          *(_QWORD *)&v129 = v45;
          v46 = *(_QWORD *)(a3 + 144);
          v47 = v54 + 1;
          if ( (unsigned __int64)&v128 < v53 || (unsigned __int64)&v128 >= v53 + 16 * v46 )
          {
            if ( v46 < v47 )
            {
              v48 = qvector_reserve();
              *(_QWORD *)(a3 + 128) = v48;
              v53 = v48;
              v54 = *(_QWORD *)(a3 + 136);
            }
            *(__m128i *)(v53 + 16 * v54) = _mm_load_si128((const __m128i *)&v128);
          }
          else
          {
            if ( v46 < v47 )
            {
              v52 = qvector_reserve();
              *(_QWORD *)(a3 + 128) = v52;
              v53 = v52;
              v54 = *(_QWORD *)(a3 + 136);
            }
            v44 = (__int64 *)(v53 + 16 * v54);
            *v44 = m;
            v44[1] = v45;
          }
          ++*(_QWORD *)(a3 + 136);
        }
        v16 = (const char *)m;
      }
      goto LABEL_21;
    }
    while ( 1 )
    {
      if ( v27 < *(int *)(a4 + 560) )
      {
        v116 = nullptr;
        v28 = *(_QWORD *)(a4 + 600);
        v29 = *(_QWORD *)(v28 + 24LL * (int)v27 + 8);
        if ( v29 )
        {
          v113 = (const void **)(v28 + 24LL * (int)v27);
          v116 = (void *)qalloc_or_throw();
          memcpy(v116, *v113, v29);
        }
        if ( *(_QWORD *)(a3 + 152) == -1 && netnode_altval() && (int)sub_19F30() <= 0 )
        {
          if ( !v116 )
            goto LABEL_56;
        }
        else
        {
          sub_11E60(a3 + 8, v27);
          if ( v30 )
          {
            *(_DWORD *)(operator new(0x28u) + 32) = v27;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(a3 + 48);
          }
          if ( !v116 )
            goto LABEL_56;
        }
        qfree();
      }
      else
      {
        sub_112F0((__int64)"Warning: invalid module number: %d\n", v27);
      }
LABEL_56:
      v27 = netnode_supnext();
      if ( v27 == -1 )
        goto LABEL_63;
    }
  }
  *(_BYTE *)(a3 + 161) = 1;
  v125 = 0;
  s = nullptr;
  if ( (unsigned __int8)qgetenv() )
  {
    v14 = (char *)s1;
    if ( (_QWORD)v125 )
      v14 = s;
    *(_QWORD *)(a3 + 152) = strtoull(v14, nullptr, 16);
  }
  v108 = 0;
  if ( (unsigned __int8)qgetenv() )
  {
    v15 = (char *)s1;
    if ( (_QWORD)v125 )
      v15 = s;
    v108 = strtoull(v15, nullptr, 0);
  }
  v126 = nullptr;
  v127 = 0;
  if ( !(unsigned __int8)qgetenv() )
  {
    if ( *(_QWORD *)(a3 + 152) != -1 )
      goto LABEL_16;
    v128 = nullptr;
    v143 = (__int64 (__fastcall **)())&unk_65AF8;
    v144 = 0x2A010007FF000004LL;
    v129 = 0;
    v147 = "Choose module(s) to load";
    v145 = -1;
    v146 = 0;
    v148 = 2;
    v150 = -1;
    v93 = (int *)&v151;
    v149 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_65290), (__m128i)(unsigned __int64)&off_64A10);
    do
    {
      *(_QWORD *)v93 = 0;
      v93 += 6;
      *((_OWORD *)v93 - 1) = 0;
    }
    while ( &v152 != v93 );
    v152 = 0;
    v94 = ((HIDWORD(v144) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v144) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v144) != 0xFF )
        goto LABEL_192;
      BYTE3(v144) = ((HIDWORD(v144) >> 19) & 0x3F) - 1;
      HIDWORD(v144) &= 0xFE07FFFF;
    }
    v154 = a4;
    v143 = off_647B8;
    v155 = a3 + 8;
    v156 = &v128;
    v95 = (_QWORD *)operator new(8u);
    v96 = operator new(0x30u);
    *(_DWORD *)(v96 + 8) = 0;
    v94 = v96;
    *(_QWORD *)(v96 + 16) = 0;
    *(_OWORD *)(v96 + 24) = 0;
    *(_QWORD *)v96 = &off_64770;
    *(_QWORD *)(v96 + 40) = a4 + 600;
    dirtree = create_dirtree();
    v98 = v154;
    *v95 = dirtree;
    v153 = v95;
    v99 = *(int *)(v98 + 560);
    if ( *(_DWORD *)(v98 + 560) )
    {
      v120 = 0;
      do
      {
        qdirname();
        v123 = 0;
        v122 = -1;
        dirtree_resolve_path();
        if ( (unsigned __int8)dirtree_mkdir() )
          sub_112F0((__int64)"Coherency check failed: dirtree->mkdir(dirbuf) == DTE_OK\n", v157);
        if ( (unsigned __int8)dirtree_chdir() )
          sub_112F0((__int64)"Coherency check failed: dirtree->chdir(dirbuf) == DTE_OK\n", v157);
        v94 = v120;
        if ( (unsigned __int8)dirtree_link_inode() )
          sub_112F0((__int64)"Coherency check failed: dirtree->link(i) == DTE_OK\n", v120);
        ++v120;
      }
      while ( v99 != v120 );
    }
    v133 = 0;
    v130 = (__int64 (__fastcall **)())&unk_65AF8;
    v131 = 0x10003FF000004LL;
    v134 = "Modules marked for loading";
    v132 = -1;
    v100 = (int *)&v138;
    v135 = 2;
    v137 = -1;
    v136 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_65298), (__m128i)(unsigned __int64)&off_64A00);
    do
    {
      *(_QWORD *)v100 = 0;
      v100 += 6;
      *((_OWORD *)v100 - 1) = 0;
    }
    while ( &v140 != v100 );
    v140 = 0;
    if ( ((HIDWORD(v131) >> 19) & 0x3F) == 0 )
    {
LABEL_180:
      v141 = a4;
      v130 = off_64878;
      v94 = (__int64)sub_3C480;
      v121 = 0;
      v142 = &v128;
      if ( (int)sub_19E60(
                  (__int64)"DYLD shared cache modules selection\n"
                           "\n"
                           "%/%*<Shared cache modules:E3::::><|><Modules marked for loading:E4::::>\n"
                           "\n"
                           "<#(-1 retrieves all dependencies)#Depth of dependencies:D5::10::>\n",
                  sub_3C480,
                  &v143,
                  &v143,
                  0,
                  &v130,
                  0.0,
                  0,
                  &v121) > 0 )
      {
        v105 = (__m128i *)&v139;
        v130 = (__int64 (__fastcall **)())&unk_65AF8;
        do
        {
          if ( v105->m128i_i64[0] )
          {
            v105->m128i_i64[1] = 0;
            qfree();
          }
          v105 = (__m128i *)((char *)v105 - 24);
        }
        while ( &v136 != v105 );
        sub_13940((__int64)&v143);
        if ( v128 )
        {
          *(_QWORD *)&v129 = 0;
          qfree();
        }
        goto LABEL_16;
      }
LABEL_194:
      sub_1A260(0, v94, v101, v102, v103, v104, v107);
    }
    if ( BYTE3(v131) == 0xFF )
    {
      BYTE3(v131) = ((HIDWORD(v131) >> 19) & 0x3F) - 1;
      HIDWORD(v131) &= 0xFE07FFFF;
      goto LABEL_180;
    }
    if ( under_debugger )
LABEL_196:
      BUG();
    interr();
LABEL_192:
    if ( !under_debugger )
    {
      interr();
      goto LABEL_194;
    }
    goto LABEL_196;
  }
  v128 = nullptr;
  v129 = 0;
  if ( !(_QWORD)v125 || (v67 = s, v112 = &s[v125 - 1], s >= v112) )
  {
LABEL_109:
    v60 = v127;
    goto LABEL_110;
  }
  v68 = 0;
  while ( 1 )
  {
    *(_QWORD *)&v70 = strchr(v67, 58);
    v72 = v70;
    if ( !(_QWORD)v70 )
      break;
    v69 = v70 - (_QWORD)v67;
    if ( (char *)v70 != v67 )
      goto LABEL_129;
LABEL_126:
    v67 = (char *)(v72 + 1);
    if ( v72 + 1 >= (unsigned __int64)v112 )
      goto LABEL_136;
  }
  v69 = v112 - v67;
LABEL_129:
  if ( *((_QWORD *)&v129 + 1) < (unsigned __int64)(v68 + 1) )
  {
    v111 = v69;
    v115 = qvector_reserve();
    v68 = v129;
    v128 = (_OWORD *)v115;
    v69 = v111;
  }
  v73 = 3 * v68;
  v74 = v69;
  v75 = v115 + 8 * v73;
  *(_OWORD *)(v75 + 8) = 0;
  *(_QWORD *)v75 = 0;
  *(_QWORD *)&v129 = v129 + 1;
  v76 = *(_QWORD *)(v75 + 8);
  v118 = v76;
  if ( v76 )
  {
    v118 = v76 - 1;
    v74 = v76 - 1 + v69;
  }
  v77 = *(_QWORD *)v75;
  v78 = v74 + 1;
  if ( v74 != -1 )
  {
    v107 = v69;
    v92 = qvector_reserve();
    v69 = v107;
    v77 = v92;
    v78 = v74 + 1;
    *(_QWORD *)v75 = v92;
  }
  *(_QWORD *)(v75 + 8) = v78;
  *(_BYTE *)(v77 + v74) = 0;
  memmove((void *)(*(_QWORD *)v75 + v118), v67, v69);
  v68 = v129;
  v115 = (__int64)v128;
  if ( v72 )
    goto LABEL_126;
LABEL_136:
  v110 = v115 + 24 * v68;
  if ( v110 == v115 )
    goto LABEL_109;
  v79 = v115;
  do
  {
    v80 = *(_QWORD *)(a4 + 600);
    v81 = v80 + 24LL * *(_QWORD *)(a4 + 608);
    if ( v80 == v81 )
    {
LABEL_187:
      v106 = s1;
      if ( *(_QWORD *)(v79 + 8) )
        v106 = *(const char **)v79;
      sub_1A260((__int64)"Invalid module: %s", (__int64)v106, *((__int64 *)&v70 + 1), v80, v69, (__int64)v71, v107);
    }
    v114 = *(_QWORD *)(a4 + 600);
    v119 = *(_QWORD *)(v79 + 8);
    v82 = a4;
    v83 = v114;
    v84 = v82;
    while ( *(_QWORD *)(v83 + 8) )
    {
      v85 = *(const char **)v83;
      v86 = s1;
      if ( v119 )
        goto LABEL_146;
LABEL_141:
      if ( !strcmp(v86, v85) )
        goto LABEL_147;
      v83 += 24;
      if ( v81 == v83 )
        goto LABEL_187;
    }
    if ( v119 )
    {
      v85 = s1;
LABEL_146:
      v86 = *(const char **)v79;
      goto LABEL_141;
    }
LABEL_147:
    v87 = v84;
    v88 = v83;
    v80 = v114;
    a4 = v87;
    if ( v81 == v88 )
      goto LABEL_187;
    *((_QWORD *)&v70 + 1) = v88 - v114;
    v80 = 0xAAAAAAAAAAAAAAABLL * ((v88 - v114) >> 3);
    v89 = v80;
    if ( v70 < 0 || *(int *)(v87 + 560) <= v80 )
      goto LABEL_187;
    v70 = v127;
    v90 = v126;
    v122 = v80;
    v91 = v127 + 1;
    if ( &v122 < (__int64 *)v126 || (v71 = &v126[2 * *((_QWORD *)&v127 + 1)], &v122 >= (__int64 *)v71) )
    {
      if ( *((_QWORD *)&v127 + 1) < v91 )
      {
        v126 = (int *)qvector_reserve();
        v90 = v126;
        v80 = v122;
        *(_QWORD *)&v70 = v127;
      }
      *(_QWORD *)&v90[2 * v70] = v80;
    }
    else
    {
      if ( *((_QWORD *)&v127 + 1) < v91 )
      {
        v126 = (int *)qvector_reserve();
        v90 = v126;
        *(_QWORD *)&v70 = v127;
      }
      *(_QWORD *)&v90[2 * v70] = v89;
    }
    v79 += 24;
    v60 = v127 + 1;
    *(_QWORD *)&v127 = v127 + 1;
  }
  while ( v110 != v79 );
LABEL_110:
  if ( v108 < -1 )
  {
    v109 = -1;
  }
  else
  {
    v61 = -1;
    if ( *(int *)(a4 + 560) >= v108 )
      v61 = v108;
    v109 = v61;
  }
  v62 = v126;
  v117 = &v126[2 * v60];
  if ( v117 != v126 )
  {
    do
    {
      sub_2CE00((_QWORD *)a4, a3 + 8, *v62, v109);
      v62 += 2;
    }
    while ( v117 != v62 );
  }
  v63 = v128;
  if ( v128 )
  {
    v64 = v129;
    if ( (_QWORD)v129 )
    {
      v65 = 0;
      do
      {
        v66 = (_QWORD *)v63 + 3 * v65;
        if ( *v66 )
        {
          v66[1] = 0;
          qfree();
          v63 = v128;
        }
        ++v65;
      }
      while ( v64 != v65 );
    }
    *(_QWORD *)&v129 = 0;
    qfree();
  }
LABEL_16:
  v16 = "$ dscu";
  if ( (unsigned __int8)netnode_check() )
  {
    v129 = 0;
    v128 = nullptr;
    v128 = (_OWORD *)qvector_reserve();
    memset((char *)v128 + v129, 0, 16 - v129);
    v58 = _mm_loadu_si128((const __m128i *)(a4 + 104));
    *(_QWORD *)&v129 = 16;
    *v128 = v58;
    netnode_supset();
    netnode_supset();
    netnode_supset();
    v59 = 0;
    if ( *(_QWORD *)(a3 + 48) == 1 )
      v59 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 32LL) + 1;
    v121 = v59;
    netnode_supset();
    v16 = (_BYTE *)(&dword_0 + 1);
    find_plugin();
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      qfree();
    }
  }
  if ( v126 )
  {
    *(_QWORD *)&v127 = 0;
    qfree();
  }
  if ( s )
  {
    *(_QWORD *)&v125 = 0;
    qfree();
  }
LABEL_21:
  if ( *(_QWORD *)(a3 + 152) == -1
    && !*(_QWORD *)(a3 + 48)
    && !*(_QWORD *)(a3 + 64)
    && !*(_QWORD *)(a3 + 88)
    && !*(_QWORD *)(a3 + 112)
    && !*(_QWORD *)(a3 + 136) )
  {
LABEL_27:
    sub_1A260(0, (__int64)v16, v17, v18, v19, v20, v107);
  }
  return v158 - __readfsqword(0x28u);
}

