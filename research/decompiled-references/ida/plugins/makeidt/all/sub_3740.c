__int64 __fastcall sub_3740(__int64 a1, const char *a2, const char *a3)
{
  __int64 v4; // r13
  __int64 entry_ordinal; // rax
  unsigned __int64 v6; // rbx
  __int64 entry; // r12
  char *func; // rax
  char *v9; // rbp
  void *v10; // r8
  __int64 first_fcref_from; // rax
  char *v12; // rsi
  __int64 v13; // rdi
  char *v14; // rax
  char *v15; // rdx
  void **v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  int *v19; // rbp
  __int64 v20; // rbx
  int *i; // r15
  _QWORD *v22; // rbx
  _QWORD *v23; // rbp
  __int64 v24; // rdi
  int v26; // eax
  __int64 v27; // rax
  int v28; // ebp
  __int64 v29; // r12
  char *v30; // rax
  char *v31; // r9
  void *v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r12
  size_t v35; // r10
  size_t v36; // r12
  char *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // r12
  int v41; // eax
  int v42; // r12d
  size_t v43; // r12
  unsigned __int64 v44; // r12
  char *v45; // rax
  __m128i v46; // xmm0
  __m128 v47; // xmm1
  int *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  void *v52; // r12
  unsigned __int64 v53; // r15
  __int64 v54; // rax
  char *v55; // rdi
  void *v56; // rdx
  int tinfo_property; // eax
  unsigned int v58; // edx
  __int64 v59; // rax
  int v60; // eax
  char *v61; // r12
  char *v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r8
  char *v65; // rdx
  char *v66; // rax
  char *v67; // rdx
  _BYTE *v68; // r8
  char *v69; // r12
  char *v70; // rsi
  size_t v71; // rdx
  char v72; // al
  char *v73; // r8
  __int64 v74; // rax
  __int64 v75; // r9
  __int64 v76; // rax
  unsigned __int64 v77; // r11
  size_t v78; // r9
  size_t v79; // r8
  char *v80; // rsi
  char *v81; // r12
  char *v82; // rdi
  size_t v83; // r9
  int v84; // eax
  int v85; // edx
  unsigned __int64 v86; // rax
  int v87; // r8d
  __int64 v88; // rdx
  void *v89; // rdx
  size_t v90; // r8
  __int64 v91; // r12
  size_t v92; // r9
  char *v93; // rsi
  char *v94; // rsi
  char *v95; // rdi
  int v96; // r12d
  size_t v97; // r12
  void *v98; // r15
  void *v99; // rax
  int v100; // eax
  size_t v101; // rax
  size_t v102; // r12
  char *v103; // rdi
  char *v104; // rdi
  char *v105; // rdi
  size_t v106; // rdx
  char *v107; // r12
  char *v108; // rax
  unsigned __int64 v109; // rcx
  char *v110; // rdx
  signed __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rax
  const char *v114; // rsi
  char *v115; // rdi
  void *v116; // r8
  void *v117; // [rsp+0h] [rbp-5A8h]
  char *v118; // [rsp+0h] [rbp-5A8h]
  _BYTE *v119; // [rsp+0h] [rbp-5A8h]
  _BYTE *v120; // [rsp+0h] [rbp-5A8h]
  void *v121; // [rsp+0h] [rbp-5A8h]
  _BYTE *v122; // [rsp+0h] [rbp-5A8h]
  char *v123; // [rsp+0h] [rbp-5A8h]
  void *v124; // [rsp+0h] [rbp-5A8h]
  char *v125; // [rsp+0h] [rbp-5A8h]
  void *v126; // [rsp+0h] [rbp-5A8h]
  _BYTE *v127; // [rsp+0h] [rbp-5A8h]
  void *v128; // [rsp+0h] [rbp-5A8h]
  void *v129; // [rsp+0h] [rbp-5A8h]
  void *v130; // [rsp+0h] [rbp-5A8h]
  __int64 entry_qty; // [rsp+8h] [rbp-5A0h]
  unsigned __int64 v132; // [rsp+20h] [rbp-588h]
  signed __int64 v133; // [rsp+20h] [rbp-588h]
  size_t v134; // [rsp+20h] [rbp-588h]
  signed __int64 v135; // [rsp+20h] [rbp-588h]
  size_t v136; // [rsp+20h] [rbp-588h]
  unsigned __int64 v137; // [rsp+28h] [rbp-580h]
  void *v138; // [rsp+28h] [rbp-580h]
  __int64 v139; // [rsp+28h] [rbp-580h]
  signed __int64 v140; // [rsp+28h] [rbp-580h]
  int v141; // [rsp+28h] [rbp-580h]
  unsigned __int64 v142; // [rsp+28h] [rbp-580h]
  size_t v143; // [rsp+28h] [rbp-580h]
  char *v144; // [rsp+28h] [rbp-580h]
  unsigned __int64 v145; // [rsp+28h] [rbp-580h]
  unsigned __int64 v146; // [rsp+28h] [rbp-580h]
  char v147; // [rsp+37h] [rbp-571h]
  char *srcd; // [rsp+48h] [rbp-560h]
  void *srcf; // [rsp+48h] [rbp-560h]
  void *src; // [rsp+48h] [rbp-560h]
  char *srca; // [rsp+48h] [rbp-560h]
  void *srcb; // [rsp+48h] [rbp-560h]
  size_t srcc; // [rsp+48h] [rbp-560h]
  void *srcg; // [rsp+48h] [rbp-560h]
  void *srce; // [rsp+48h] [rbp-560h]
  void *srck; // [rsp+48h] [rbp-560h]
  void *srch; // [rsp+48h] [rbp-560h]
  void *srcj; // [rsp+48h] [rbp-560h]
  void *srci; // [rsp+48h] [rbp-560h]
  size_t v162; // [rsp+58h] [rbp-550h]
  __int64 v163; // [rsp+58h] [rbp-550h]
  __int64 v164; // [rsp+58h] [rbp-550h]
  char *v165; // [rsp+58h] [rbp-550h]
  char *endptr; // [rsp+68h] [rbp-540h] BYREF
  char *s1; // [rsp+70h] [rbp-538h]
  __m128i v168; // [rsp+78h] [rbp-530h] BYREF
  char *v169; // [rsp+90h] [rbp-518h]
  size_t n[3]; // [rsp+98h] [rbp-510h]
  char *s; // [rsp+B0h] [rbp-4F8h]
  __int128 v172; // [rsp+B8h] [rbp-4F0h]
  char *s2; // [rsp+D0h] [rbp-4D8h] BYREF
  __int128 v174; // [rsp+D8h] [rbp-4D0h]
  char *v175; // [rsp+F0h] [rbp-4B8h] BYREF
  __int128 v176; // [rsp+F8h] [rbp-4B0h]
  void *v177; // [rsp+110h] [rbp-498h] BYREF
  __m128i v178; // [rsp+118h] [rbp-490h] BYREF
  int v179; // [rsp+128h] [rbp-480h]
  __int64 v180; // [rsp+130h] [rbp-478h] BYREF
  int v181; // [rsp+138h] [rbp-470h] BYREF
  void *v182; // [rsp+140h] [rbp-468h]
  int *v183; // [rsp+148h] [rbp-460h]
  int *v184; // [rsp+150h] [rbp-458h]
  __int64 v185; // [rsp+158h] [rbp-450h]
  unsigned __int64 v186; // [rsp+568h] [rbp-40h]

  v186 = __readfsqword(0x28u);
  if ( !qfopen() )
    return sub_3330((__int64)"Cannot open %s for writing!", a3);
  netnode_check();
  if ( !netnode_altval() )
    sub_3270();
  v181 = 0;
  v182 = nullptr;
  v183 = &v181;
  v184 = &v181;
  v185 = 0;
  entry_qty = get_entry_qty();
  v4 = 0;
  if ( entry_qty )
  {
    while ( 1 )
    {
      entry_ordinal = get_entry_ordinal();
      v177 = nullptr;
      v6 = entry_ordinal;
      v179 = -1;
      v178 = 0;
      entry = get_entry();
      if ( entry != getinf() )
        break;
LABEL_32:
      if ( v177 )
        qfree();
      if ( entry_qty == ++v4 )
        goto LABEL_35;
    }
    s1 = nullptr;
    v168 = 0;
    get_entry_name();
    v169 = nullptr;
    *(_OWORD *)n = 0;
    if ( (((unsigned __int16)get_flags_ex() >> 8) & 0x80u) == 0 )
      get_ea_name();
    if ( !(unsigned __int8)get_tinfo() )
    {
      func = (char *)get_func();
      v9 = func;
      if ( func && entry != *(_QWORD *)func )
        goto LABEL_49;
      v10 = (void *)entry;
      v176 = 0;
      v175 = nullptr;
LABEL_23:
      v117 = v10;
      v175 = (char *)qvector_reserve();
      v17 = v176;
      v12 = v175;
      v10 = v117;
      while ( 1 )
      {
        *(_QWORD *)&v12[8 * v17] = v10;
        *(_QWORD *)&v176 = v176 + 1;
        if ( !v9 || v9[16] >= 0 )
          break;
        first_fcref_from = get_first_fcref_from();
        v12 = v175;
        v13 = first_fcref_from;
        if ( first_fcref_from == -1 )
          goto LABEL_134;
        v14 = &v175[8 * v176];
        if ( v14 != v175 )
        {
          v15 = v175;
          while ( v13 != *(_QWORD *)v15 )
          {
            v15 += 8;
            if ( v14 == v15 )
              goto LABEL_20;
          }
          if ( v14 != v15 )
            goto LABEL_134;
        }
LABEL_20:
        v16 = (void **)get_func();
        v12 = v175;
        if ( !v16 || v9 == (char *)v16 )
          goto LABEL_134;
        v17 = v176;
        v9 = (char *)v16;
        v10 = *v16;
        if ( *((_QWORD *)&v176 + 1) < (unsigned __int64)(v176 + 1) )
          goto LABEL_23;
      }
      v26 = guess_tinfo();
      v12 = v175;
      if ( v26 != 2 )
      {
LABEL_134:
        if ( v12 )
        {
          *(_QWORD *)&v176 = 0;
          qfree();
        }
        goto LABEL_49;
      }
      if ( v175 )
      {
        *(_QWORD *)&v176 = 0;
        qfree();
      }
    }
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      tinfo_property = get_tinfo_property();
      v58 = tinfo_property & 0xFFFFFFF0;
      if ( (tinfo_property & 0xFFFFFFF0) > 0x70 )
      {
        if ( v58 != 224 && (tinfo_property & 0xFFFFFFE0) != 0x80 )
          goto LABEL_49;
      }
      else
      {
        if ( v58 <= 0x4F )
          goto LABEL_49;
        v59 = 0x100010001LL;
        if ( !_bittest64(&v59, v58 - 80) )
          goto LABEL_49;
      }
      v60 = get_tinfo_property();
      v28 = v60;
      if ( v60 )
      {
        v147 = 1;
        if ( v60 != -1 )
          goto LABEL_53;
        goto LABEL_50;
      }
    }
LABEL_49:
    v147 = 0;
LABEL_50:
    v27 = get_func();
    v28 = -1;
    if ( v27 && (*(_QWORD *)(v27 + 48) || (*(_BYTE *)(v27 + 17) & 0x40) != 0) )
      v28 = *(_QWORD *)(v27 + 48);
LABEL_53:
    s = nullptr;
    v172 = 0;
    get_entry_forwarder();
    v29 = v172;
    if ( (unsigned __int64)v172 <= 1 )
      goto LABEL_72;
    v118 = s;
    v30 = strchr(s, 46);
    if ( !v30 )
      goto LABEL_72;
    v31 = v118;
    v32 = (void *)(v30 - v118);
    if ( v30 - v118 == -1 )
      goto LABEL_72;
    v33 = v29 - 1;
    v34 = (unsigned __int64)v32 + 1;
    s2 = nullptr;
    v174 = 0;
    if ( (unsigned __int64)v32 + 1 > v33 )
      v34 = v33;
    v35 = v33 - v34;
    if ( v33 != v34 )
    {
      v55 = nullptr;
      v56 = (void *)(v35 + 1);
      if ( v35 != -1 )
      {
        v126 = (void *)(v35 + 1);
        v162 = v33 - v34;
        srce = v32;
        v144 = v31;
        s2 = (char *)qvector_reserve();
        v35 = v162;
        v55 = s2;
        v32 = srce;
        v31 = v144;
        v56 = v126;
      }
      *(_QWORD *)&v174 = v56;
      v138 = v32;
      v119 = (_BYTE *)v35;
      memmove(v55, &v31[v34], v35);
      v32 = v138;
      v119[(_QWORD)s2] = 0;
      if ( !(_QWORD)v172 )
      {
        v175 = nullptr;
        v176 = 0;
        goto LABEL_102;
      }
      v31 = s;
      v33 = v172 - 1;
    }
    v175 = nullptr;
    if ( (unsigned __int64)v32 <= v33 )
      v33 = (unsigned __int64)v32;
    v176 = 0;
    v36 = v33;
    if ( v33 )
    {
      srcd = v31;
      v137 = v33 + 1;
      v175 = (char *)qvector_reserve();
      *(_QWORD *)&v176 = v137;
      memmove(v175, srcd, v36);
      v175[v36] = 0;
      v37 = v175;
      if ( (_QWORD)v176 )
      {
        v38 = v176 - 1;
        v39 = v176 + 3;
        v40 = v176 + 4;
      }
      else
      {
        v38 = 0;
        v40 = 5;
        v39 = 4;
      }
      if ( *((_QWORD *)&v176 + 1) >= v40 )
        goto LABEL_65;
      goto LABEL_103;
    }
LABEL_102:
    v39 = 4;
    v40 = 5;
    v38 = 0;
LABEL_103:
    srcf = (void *)v39;
    v139 = v38;
    v175 = (char *)qvector_reserve();
    v39 = (__int64)srcf;
    v37 = v175;
    v38 = v139;
LABEL_65:
    *(_QWORD *)&v176 = v40;
    v37[v39] = 0;
    *(_DWORD *)&v175[v38] = 1952737582;
    v41 = sub_35E0(a1, (const __m128i *)&v175, (__int64)&s2);
    v42 = v41;
    if ( v41 != -1 && v41 != v28 )
    {
      sub_3270();
      v28 = v42;
    }
    if ( v175 )
    {
      *(_QWORD *)&v176 = 0;
      qfree();
    }
    if ( s2 )
    {
      *(_QWORD *)&v174 = 0;
      qfree();
    }
LABEL_72:
    v43 = n[0];
    if ( n[0] <= 1 )
      goto LABEL_73;
    s2 = nullptr;
    v174 = 0;
    v120 = (_BYTE *)qalloc_or_throw();
    memcpy(v120, v169, v43);
    v175 = nullptr;
    v176 = 0;
    v175 = (char *)qalloc_or_throw();
    *((_QWORD *)&v176 + 1) = v43;
    memcpy(v175, v120, v43);
    *(_QWORD *)&v176 = v43;
    if ( *v120 == 95 || *v120 == 64 )
    {
      v78 = v43 - 1;
      v79 = 0;
      if ( v43 != 2 )
      {
        memmove(v175, v175 + 1, v43 - 2);
        v78 = v43 - 1;
        v79 = v43 - 2;
      }
      v80 = v175;
      if ( *((_QWORD *)&v176 + 1) < v78 )
      {
        srcg = (void *)v79;
        v143 = v78;
        v175 = (char *)qvector_reserve();
        v79 = (size_t)srcg;
        v80 = v175;
        v78 = v143;
      }
      *(_QWORD *)&v176 = v78;
      v80[v79] = 0;
      if ( !(_QWORD)v176 )
      {
        v141 = -1;
        v61 = v175;
        goto LABEL_155;
      }
    }
    v61 = v175;
    v62 = strrchr(v175, 64);
    if ( !v62 )
    {
      v141 = -1;
      v65 = (char *)v176;
      goto LABEL_118;
    }
    if ( v62 - v61 == -1 )
    {
      v141 = -1;
      v65 = (char *)v176;
LABEL_117:
      if ( !v65 )
      {
LABEL_155:
        *(_QWORD *)&v174 = 0;
        goto LABEL_120;
      }
LABEL_118:
      srca = v65;
      v66 = strchr(v61, 64);
      v67 = srca;
      if ( !v66 || v66 - v61 == -1 )
      {
        srcc = (size_t)(srca - 1);
        if ( v67 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_155;
        v104 = s2;
        if ( *((_QWORD *)&v174 + 1) < (unsigned __int64)v67 )
        {
          v165 = v67;
          s2 = (char *)qvector_reserve();
          v67 = v165;
          v104 = s2;
        }
        *(_QWORD *)&v174 = v67;
        memmove(v104, v61, srcc);
        s2[srcc] = 0;
        v61 = v175;
      }
LABEL_120:
      if ( v61 )
      {
        *(_QWORD *)&v176 = 0;
        qfree();
      }
      if ( v120 )
        qfree();
      v68 = (_BYTE *)v174;
      if ( v168.m128i_i64[0] <= 1uLL )
      {
        if ( (unsigned __int64)v174 <= 1 )
        {
          v97 = n[0];
          if ( !n[0] || (srcb = (void *)(n[0] - 1), n[0] == 1) )
          {
            v168.m128i_i64[0] = 0;
          }
          else
          {
            v103 = s1;
            v125 = v169;
            if ( v168.m128i_i64[1] < n[0] )
            {
              s1 = (char *)qvector_reserve();
              v103 = s1;
            }
            v168.m128i_i64[0] = v97;
            memmove(v103, v125, (size_t)srcb);
            s1[v97 - 1] = 0;
          }
          goto LABEL_199;
        }
        v81 = s2;
        v82 = s1;
        v83 = v174 - 1;
        if ( v168.m128i_i64[1] < (unsigned __int64)v174 )
        {
          srch = (void *)(v174 - 1);
          v127 = (_BYTE *)v174;
          s1 = (char *)qvector_reserve();
          v83 = (size_t)srch;
          v82 = s1;
          v68 = v127;
        }
        v168.m128i_i64[0] = (__int64)v68;
        v122 = v68;
        memmove(v82, v81, v83);
        v122[(_QWORD)s1 - 1] = 0;
        sub_3270();
        goto LABEL_160;
      }
      v69 = s1;
      if ( (unsigned __int64)v174 > 1 && !strcmp(s1, s2) )
        goto LABEL_160;
      v70 = (char *)&::s1;
      if ( n[0] )
        v70 = v169;
      v121 = (void *)n[0];
      if ( !strcmp(v69, v70) )
        goto LABEL_160;
      v71 = (size_t)v121;
      if ( *v69 != 95 )
      {
        if ( v121 )
        {
          v73 = v169;
          v72 = *v169;
          if ( *v169 != 95 )
            goto LABEL_195;
        }
        else
        {
          v72 = byte_81E9;
          if ( byte_81E9 != 95 )
          {
            v73 = v169;
            goto LABEL_195;
          }
        }
        v176 = 0;
        v175 = nullptr;
        v175 = (char *)qvector_reserve();
        *(_QWORD *)&v176 = 2;
        *v175 = 95;
        v175[1] = 0;
        v89 = (void *)v168.m128i_i64[0];
        if ( v168.m128i_i64[0] )
        {
          v90 = v168.m128i_i64[0] - 1;
          if ( v168.m128i_i64[0] != 1 )
          {
            v91 = v176;
            v92 = v168.m128i_i64[0] - 1;
            if ( (_QWORD)v176 )
            {
              v91 = v176 - 1;
              v92 = v90 + v176 - 1;
              v89 = (void *)(v168.m128i_i64[0] + v176 - 1);
            }
            v93 = v175;
            if ( *((_QWORD *)&v176 + 1) < (unsigned __int64)v89 )
            {
              srci = (void *)(v168.m128i_i64[0] - 1);
              v136 = v92;
              v130 = v89;
              v175 = (char *)qvector_reserve();
              v90 = (size_t)srci;
              v93 = v175;
              v92 = v136;
              v89 = v130;
            }
            *(_QWORD *)&v176 = v89;
            v93[v92] = 0;
            memcpy(&v175[v91], s1, v90);
          }
        }
        v94 = (char *)&::s1;
        if ( n[0] )
          v94 = v169;
        v95 = v175;
        if ( !(_QWORD)v176 )
          v95 = (char *)&::s1;
        v123 = v175;
        v96 = strcmp(v95, v94);
        if ( v123 )
        {
          *(_QWORD *)&v176 = 0;
          qfree();
        }
        if ( !v96 )
          goto LABEL_160;
        v71 = n[0];
      }
      v73 = v169;
      if ( v71 )
      {
        if ( *v169 != 63 )
          goto LABEL_199;
        goto LABEL_219;
      }
      v72 = byte_81E9;
LABEL_195:
      if ( v72 != 63 )
        goto LABEL_199;
LABEL_219:
      v124 = v73 + 1;
      v101 = strlen(v73 + 1);
      v102 = v101;
      if ( !v101 )
      {
        *(_QWORD *)&v174 = 0;
LABEL_199:
        sub_3270();
        goto LABEL_160;
      }
      v105 = s2;
      v106 = v101 + 1;
      if ( *((_QWORD *)&v174 + 1) < v101 + 1 )
      {
        v134 = v101 + 1;
        s2 = (char *)qvector_reserve();
        v106 = v134;
        v105 = s2;
      }
      *(_QWORD *)&v174 = v106;
      memmove(v105, v124, v102);
      s2[v102] = 0;
      if ( !(_QWORD)v174 )
        goto LABEL_199;
      v107 = s2;
      v132 = v174;
      v108 = strchr(s2, 64);
      v109 = v132;
      v110 = v107;
      if ( !v108 )
        goto LABEL_199;
      v111 = v108 - v107;
      if ( v108 - v107 == -1 )
        goto LABEL_199;
      if ( v111 )
      {
        v116 = (void *)(v111 + 1);
        if ( v132 < v111 + 1 )
        {
          if ( *((_QWORD *)&v174 + 1) < (unsigned __int64)v116 )
          {
            v135 = v108 - v107;
            v129 = (void *)(v111 + 1);
            s2 = (char *)qvector_reserve();
            v109 = v174;
            v110 = s2;
            v111 = v135;
            v116 = v129;
          }
          v128 = v116;
          v133 = v111;
          memset(&v110[v109], 0, (size_t)v116 - v109);
          v108 = &s2[v133];
          *(_QWORD *)&v174 = v128;
        }
        else if ( v132 != v111 + 1 )
        {
          *(_QWORD *)&v174 = v111 + 1;
        }
        *v108 = 0;
        v112 = v174;
      }
      else
      {
        if ( !v107 )
        {
          v113 = v168.m128i_i64[0];
          goto LABEL_267;
        }
        *(_QWORD *)&v174 = 0;
        qfree();
        s2 = nullptr;
        v112 = v174;
        *((_QWORD *)&v174 + 1) = 0;
      }
      v113 = v168.m128i_i64[0];
      if ( !v112 )
      {
        v114 = &::s1;
        if ( !v168.m128i_i64[0] )
          goto LABEL_160;
        goto LABEL_256;
      }
      v107 = s2;
LABEL_267:
      v114 = v107;
      v115 = (char *)&::s1;
      if ( !v113 )
      {
LABEL_257:
        if ( strcmp(v115, v114) )
          goto LABEL_199;
LABEL_160:
        if ( v141 != -1 )
        {
          if ( v28 != v141 && v28 != -1 )
            sub_3270();
          v28 = v141;
          goto LABEL_165;
        }
        if ( v147 || v28 == -1 )
        {
LABEL_165:
          if ( s2 )
          {
            *(_QWORD *)&v174 = 0;
            qfree();
          }
LABEL_73:
          v44 = v168.m128i_i64[0];
          if ( v168.m128i_i64[0] <= 1uLL )
          {
            sub_3270();
          }
          else
          {
            v45 = (char *)v177;
            v179 = v28;
            v46 = _mm_loadu_si128(&v178);
            v47 = _mm_loadh_ps((const double *)&v168.m128i_i64[1]);
            v177 = s1;
            s1 = v45;
            v178 = (__m128i)v47;
            v168 = v46;
          }
          if ( s )
          {
            *(_QWORD *)&v172 = 0;
            qfree();
          }
          clear_tinfo_t();
          if ( v169 )
          {
            n[0] = 0;
            qfree();
          }
          if ( s1 )
          {
            v168.m128i_i64[0] = 0;
            qfree();
          }
          if ( v44 <= 1 )
            goto LABEL_32;
          v48 = (int *)v182;
          v19 = &v181;
          if ( v182 )
          {
            do
            {
              while ( 1 )
              {
                v49 = *((_QWORD *)v48 + 2);
                v50 = *((_QWORD *)v48 + 3);
                if ( *((_QWORD *)v48 + 4) >= v6 )
                  break;
                v48 = *((int **)v48 + 3);
                if ( !v50 )
                  goto LABEL_87;
              }
              v19 = v48;
              v48 = *((int **)v48 + 2);
            }
            while ( v49 );
LABEL_87:
            if ( v19 != &v181 && v6 >= *((_QWORD *)v19 + 4) )
              goto LABEL_28;
          }
          v51 = operator new(0x48u);
          *(_QWORD *)(v51 + 32) = v6;
          v52 = (void *)v51;
          *(_QWORD *)(v51 + 40) = 0;
          *(_DWORD *)(v51 + 64) = -1;
          *(_OWORD *)(v51 + 48) = 0;
          if ( v19 == &v181 )
          {
            if ( v185 )
            {
              v18 = v184;
              v19 = nullptr;
              if ( *((_QWORD *)v184 + 4) < v6 )
                goto LABEL_26;
            }
          }
          else
          {
            v53 = *((_QWORD *)v19 + 4);
            if ( v6 >= v53 )
            {
              if ( v53 < v6 )
              {
                if ( v184 != v19 )
                {
                  v74 = std::_Rb_tree_increment();
                  v18 = (_QWORD *)v74;
                  if ( v6 >= *(_QWORD *)(v74 + 32) )
                    goto LABEL_25;
                  if ( *((_QWORD *)v19 + 3) )
                  {
                    v19 = (int *)v74;
                    goto LABEL_26;
                  }
                }
                if ( v19 )
                  goto LABEL_27;
              }
LABEL_95:
              if ( v52 )
                operator delete(v52, 0x48u);
              goto LABEL_28;
            }
            v18 = v19;
            if ( v183 == v19 )
              goto LABEL_26;
            v54 = std::_Rb_tree_decrement();
            v18 = (_QWORD *)v54;
            if ( *(_QWORD *)(v54 + 32) < v6 )
            {
              if ( *(_QWORD *)(v54 + 24) )
              {
                if ( !v19 )
                  goto LABEL_95;
LABEL_27:
                v19 = (int *)v52;
                std::_Rb_tree_insert_and_rebalance();
                ++v185;
LABEL_28:
                if ( v19 + 10 != (int *)&v177 )
                {
                  v20 = v178.m128i_i64[0];
                  if ( v178.m128i_i64[0] > 1uLL )
                  {
                    v98 = v177;
                    v99 = *((void **)v19 + 5);
                    if ( *((_QWORD *)v19 + 7) < v178.m128i_i64[0] )
                    {
                      v99 = (void *)qvector_reserve();
                      *((_QWORD *)v19 + 5) = v99;
                    }
                    *((_QWORD *)v19 + 6) = v20;
                    memmove(v99, v98, v20 - 1);
                    *(_BYTE *)(*((_QWORD *)v19 + 5) + v20 - 1) = 0;
                  }
                  else
                  {
                    *((_QWORD *)v19 + 6) = 0;
                  }
                }
                v19[16] = v179;
                goto LABEL_32;
              }
              v19 = nullptr;
LABEL_26:
              if ( !v18 )
                goto LABEL_95;
              goto LABEL_27;
            }
          }
LABEL_25:
          v19 = (int *)sub_2940((__int64)&v180, v6);
          goto LABEL_26;
        }
        v176 = 0;
        v175 = nullptr;
        v84 = demangle_name();
        if ( v84 > 0 )
        {
          v85 = BYTE1(v84);
          v86 = v84 & 0xF;
          v87 = 4 * v85;
          if ( (_DWORD)v86 == 5 )
          {
            if ( v87 < 8 )
              v87 = 8;
            if ( v28 == v87 - 8 )
              goto LABEL_174;
            goto LABEL_173;
          }
          if ( v28 != v87 )
          {
            v88 = -525;
            if ( _bittest64(&v88, v86) )
LABEL_173:
              sub_3270();
          }
        }
LABEL_174:
        if ( v175 )
        {
          *(_QWORD *)&v176 = 0;
          qfree();
        }
        goto LABEL_165;
      }
LABEL_256:
      v115 = s1;
      goto LABEL_257;
    }
    endptr = nullptr;
    v140 = v62 - v61;
    src = (void *)(v62 - v61 + 1);
    v63 = strtoul(v62 + 1, &endptr, 10);
    v61 = v175;
    v64 = v63;
    if ( *endptr )
    {
      v141 = -1;
LABEL_116:
      v65 = (char *)v176;
      goto LABEL_117;
    }
    v75 = v140;
    if ( !v140 )
      goto LABEL_208;
    v76 = v176;
    v77 = (unsigned __int64)src;
    if ( (_QWORD)v176 )
    {
      if ( v175[v140 - 1] == 64 )
      {
        v77 = v140;
        v75 = v140 - 1;
        if ( v140 == 1 )
          goto LABEL_208;
      }
      if ( (unsigned __int64)v176 >= v77 )
      {
        if ( (_QWORD)v176 != v77 )
          *(_QWORD *)&v176 = v77;
LABEL_148:
        v61[v75] = 0;
        v61 = v175;
LABEL_211:
        if ( *v120 == 64 )
        {
          v100 = 8;
          if ( v64 >= 8 )
            v100 = v64;
          LODWORD(v64) = v100 - 8;
        }
        v141 = v64;
        goto LABEL_116;
      }
    }
    else if ( v140 == 1 )
    {
      if ( byte_81E9 == 64 )
      {
LABEL_208:
        if ( v175 )
        {
          v142 = v64;
          *(_QWORD *)&v176 = 0;
          qfree();
          v175 = nullptr;
          v64 = v142;
          *((_QWORD *)&v176 + 1) = 0;
        }
        v61 = nullptr;
        goto LABEL_211;
      }
      v77 = 2;
      v75 = 1;
    }
    else if ( v175[v140 - 1] == 64 )
    {
      v77 = v140;
      v75 = v140 - 1;
    }
    if ( *((_QWORD *)&v176 + 1) < v77 )
    {
      v164 = v75;
      srcj = (void *)v64;
      v146 = v77;
      v175 = (char *)qvector_reserve();
      v61 = v175;
      v75 = v164;
      v76 = v176;
      v64 = (unsigned __int64)srcj;
      v77 = v146;
    }
    v163 = v75;
    srck = (void *)v64;
    v145 = v77;
    memset(&v61[v76], 0, v77 - v76);
    v64 = (unsigned __int64)srck;
    v61 = v175;
    v75 = v163;
    *(_QWORD *)&v176 = v145;
    goto LABEL_148;
  }
LABEL_35:
  if ( qfopen() )
  {
    get_root_filename();
    sub_3270();
    for ( i = v183; i != &v181; i = (int *)std::_Rb_tree_increment() )
    {
      sub_3270();
      if ( i[16] >= 0 )
        sub_3270();
      sub_3270();
    }
    sub_3270();
    qfclose();
    qfclose();
    v22 = v182;
    if ( v182 )
    {
      do
      {
        v23 = v22;
        sub_2FB0((_QWORD *)v22[3]);
        v24 = v22[5];
        v22 = (_QWORD *)v22[2];
        if ( v24 )
        {
          v23[6] = 0;
          qfree();
        }
        operator delete(v23, 0x48u);
      }
      while ( v22 );
    }
  }
  else
  {
    sub_3330((__int64)"Cannot open %s for writing!", a2);
    sub_2FB0(v182);
  }
  return v186 - __readfsqword(0x28u);
}

