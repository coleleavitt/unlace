__int64 __fastcall sub_426C0(__int64 a1, __int64 a2)
{
  const char *file_ext; // rax
  __int64 v5; // r12
  const char *v6; // r13
  int v7; // r13d
  const char *v8; // r12
  char *v9; // r15
  char *v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  int v13; // r13d
  int v14; // r14d
  _WORD *v15; // r12
  __int64 (__fastcall *v16)(__int64, void *, int); // rax
  char *v17; // r15
  unsigned __int64 v18; // rcx
  void *v19; // rdi
  char v20; // r13
  void **v21; // rbx
  void **v22; // r14
  void *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // r15
  void *v27; // rdi
  __int64 v28; // rsi
  unsigned int v29; // ebx
  const char *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // r14
  __int64 v37; // r14
  const char *v38; // rsi
  const char *v39; // rdx
  const char *v40; // rsi
  char *v41; // r15
  char *v42; // r14
  int v43; // r15d
  __int64 v44; // r15
  size_t v45; // r12
  const char **v46; // r12
  __int64 v47; // r15
  const char *v48; // r14
  char *v49; // rax
  const char *v50; // r15
  int v51; // esi
  __int64 v52; // r15
  char *v53; // r12
  const char *v54; // r14
  char *v55; // rax
  char *v56; // rdx
  const char **v57; // r12
  __int64 v58; // r14
  const char *v59; // r15
  char *v60; // rax
  const char *v61; // rdi
  size_t v62; // rax
  size_t v63; // r14
  void *v64; // rdi
  size_t v65; // r12
  const char **v66; // r14
  __int64 v67; // r12
  const char *v68; // r15
  char *v69; // rax
  const char **v70; // r14
  __int64 v71; // r13
  const char *v72; // r12
  char *v73; // rax
  const char *v74; // r13
  size_t v75; // r12
  __int64 v76; // r15
  size_t v77; // r14
  __int64 v78; // rsi
  size_t v79; // rdx
  int v80; // r13d
  const char *v81; // r14
  char *v82; // rax
  size_t v83; // rax
  size_t v84; // r14
  void *v85; // rdi
  size_t v86; // r15
  int v87; // r14d
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  unsigned __int64 *v90; // rdx
  void *v91; // rax
  char *v92; // rdi
  __int64 v93; // rdx
  size_t v94; // rax
  unsigned __int64 v95; // r10
  size_t v96; // r12
  __int64 v97; // r15
  size_t v98; // r14
  __int64 v99; // rsi
  __int64 v100; // rax
  void *v101; // r13
  void *v102; // rdi
  __int64 v103; // rax
  const char **v104; // r14
  __int64 v105; // r12
  const char *v106; // r15
  char *v107; // rax
  int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int16 v113; // ax
  __int16 *v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rax
  __int16 v119; // ax
  __int16 *v120; // rdx
  unsigned __int64 v121; // rax
  unsigned __int64 *v122; // rdx
  char *v123; // [rsp+0h] [rbp-130h]
  unsigned __int64 v124; // [rsp+0h] [rbp-130h]
  char v125; // [rsp+17h] [rbp-119h]
  unsigned __int8 v126; // [rsp+18h] [rbp-118h]
  __int64 v127; // [rsp+20h] [rbp-110h]
  unsigned __int8 v128; // [rsp+20h] [rbp-110h]
  char *v129; // [rsp+20h] [rbp-110h]
  char *s; // [rsp+28h] [rbp-108h]
  char *sa; // [rsp+28h] [rbp-108h]
  char *sb; // [rsp+28h] [rbp-108h]
  const char *v133; // [rsp+30h] [rbp-100h] BYREF
  __int128 v134; // [rsp+38h] [rbp-F8h]
  void *dest; // [rsp+50h] [rbp-E0h]
  __int128 v136; // [rsp+58h] [rbp-D8h]
  __int64 (__fastcall **v137)(); // [rsp+70h] [rbp-C0h] BYREF
  void *v138[2]; // [rsp+78h] [rbp-B8h]
  void *v139; // [rsp+88h] [rbp-A8h]
  __int128 v140; // [rsp+90h] [rbp-A0h]
  char *s1; // [rsp+A0h] [rbp-90h]
  __int64 v142; // [rsp+A8h] [rbp-88h]
  void *v143; // [rsp+B0h] [rbp-80h]
  __int64 v144; // [rsp+B8h] [rbp-78h]
  __int64 v145; // [rsp+C8h] [rbp-68h]
  __int64 v146; // [rsp+D0h] [rbp-60h]
  __int16 v147; // [rsp+D8h] [rbp-58h]
  char *v148; // [rsp+E0h] [rbp-50h]
  __int64 v149; // [rsp+E8h] [rbp-48h]
  __int16 v150; // [rsp+F0h] [rbp-40h]
  unsigned __int64 v151; // [rsp+F8h] [rbp-38h]

  v151 = __readfsqword(0x28u);
  v134 = 0;
  v133 = nullptr;
  file_ext = (const char *)get_file_ext();
  v5 = *(_QWORD *)(a2 + 8);
  if ( file_ext && !strcasecmp(file_ext, "apk") )
  {
    v6 = nptr;
    dest = nullptr;
    v136 = 0;
    if ( v5 )
      v6 = *(const char **)a2;
    if ( open_linput() )
    {
      *(_OWORD *)v138 = 0;
      v137 = nullptr;
      if ( (unsigned int)zip_extract_archive_entry() )
      {
        v39 = nptr;
        if ( v138[0] )
          v39 = (const char *)v137;
        sub_11340((__int64)"%s: %s\n", v6, v39);
        close_linput();
      }
      else
      {
        close_linput();
        if ( (unsigned __int64)v136 > 1 )
        {
          if ( (unsigned __int8)sub_3ED60((__int64 *)&v133, (__int64)dest, v136) )
          {
            if ( dest )
            {
              *(_QWORD *)&v136 = 0;
              qfree();
            }
            goto LABEL_11;
          }
          sub_11270((__int64)"Could not unpack AndroidManifest.xml");
          goto LABEL_85;
        }
      }
    }
    v40 = nptr;
    if ( *(_QWORD *)(a2 + 8) )
      v40 = *(const char **)a2;
    sub_11270((__int64)"Could not extract AndroidManifest.xml from %s", v40);
LABEL_85:
    if ( dest )
    {
      *(_QWORD *)&v136 = 0;
      qfree();
    }
    goto LABEL_67;
  }
  v30 = (const char *)qbasename();
  if ( strcasecmp(v30, "AndroidManifest.xml") )
  {
    sub_11270((__int64)"Please specify an *.apk file or AndroidManifest.xml");
LABEL_67:
    v29 = 0;
    goto LABEL_68;
  }
  fopenRB();
  make_linput();
  v31 = (__int64)v133;
  v32 = qlsize();
  v33 = (__int64)v133;
  if ( v32 )
  {
    v35 = v134;
    v36 = v32 + 1;
    if ( (unsigned __int64)v134 < v32 + 1 )
    {
      if ( *((_QWORD *)&v134 + 1) < v36 )
      {
        v33 = qvector_reserve();
        v133 = (const char *)v33;
        v35 = v134;
      }
      memset((void *)(v33 + v35), 0, v36 - v35);
      *(_QWORD *)&v134 = v32 + 1;
      v31 = (__int64)v133;
    }
    else if ( v36 != (_QWORD)v134 )
    {
      *(_QWORD *)&v134 = v32 + 1;
    }
    *(_BYTE *)(v31 + v32) = 0;
  }
  v37 = qlread();
  close_linput();
  if ( v32 != v37 )
  {
    v38 = nptr;
    if ( *(_QWORD *)(a2 + 8) )
      v38 = *(const char **)a2;
    sub_11270((__int64)"Could not read file %s completely", v38);
    goto LABEL_67;
  }
LABEL_11:
  v7 = v134;
  v8 = nptr;
  if ( (_QWORD)v134 )
    v8 = v133;
  v9 = (char *)operator new(0x18u);
  s = v9;
  *((_QWORD *)v9 + 1) = v8;
  *(_QWORD *)v9 = off_7DBA8;
  *((_QWORD *)v9 + 2) = &v8[v7];
  v137 = &off_7DBD8;
  v138[0] = nullptr;
  v138[1] = nullptr;
  v139 = nullptr;
  s1 = nullptr;
  v142 = 0x100000001LL;
  v140 = 0;
  v10 = (char *)operator new[](1u);
  *v10 = 0;
  s1 = v10;
  v143 = nullptr;
  v144 = 0x100000001LL;
  v143 = (void *)operator new[](1u);
  *(_BYTE *)v143 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 257;
  v148 = nullptr;
  v149 = 0;
  v150 = 257;
  if ( !v9 )
    goto LABEL_27;
  v11 = *(_QWORD *)v9;
  HIDWORD(v140) = 1;
  v12 = *(__int64 (__fastcall **)(__int64))(v11 + 24);
  if ( v12 == sub_3CAA0 )
    v13 = *((_QWORD *)v9 + 2) - *((_DWORD *)v9 + 2);
  else
    v13 = v12((__int64)v9);
  v14 = v13 + 4;
  v15 = (_WORD *)operator new[](v13 + 4);
  v16 = *(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)v9 + 16LL);
  if ( v16 != sub_3CB90 )
  {
    v108 = v16((__int64)v9, v15, v13);
    goto LABEL_214;
  }
  if ( v13 < 0 )
    goto LABEL_186;
  v17 = *((char **)v9 + 1);
  v18 = *((_QWORD *)s + 2);
  if ( (unsigned __int64)v17 >= v18 )
    goto LABEL_186;
  v127 = *((_QWORD *)s + 2);
  if ( v18 - (unsigned __int64)v17 >= v13 )
  {
    memcpy(v15, v17, v13);
    *((_QWORD *)s + 1) = &v17[v13];
    v108 = v13;
LABEL_214:
    if ( v108 )
    {
      *((_BYTE *)v15 + v13 + 3) = 0;
      *((_BYTE *)v15 + v13 + 2) = 0;
      *((_BYTE *)v15 + v13 + 1) = 0;
      *((_BYTE *)v15 + v13) = 0;
      if ( v14 <= 3 )
      {
        if ( v14 <= 1 )
          goto LABEL_25;
LABEL_23:
        if ( *v15 == 0xFFFE )
        {
          v87 = v14 >> 1;
          DWORD2(v140) = 2;
          if ( HIDWORD(v140) <= 5 )
          {
            v112 = 43;
            if ( _bittest64(&v112, HIDWORD(v140)) )
            {
              v113 = v15[1];
              v114 = v15 + 1;
              if ( v113 )
              {
                do
                {
                  *v114++ = __ROL2__(v113, 8);
                  v113 = *v114;
                }
                while ( *v114 );
              }
            }
          }
          v91 = (void *)operator new[](v87);
          v138[0] = v91;
          v92 = s;
          v115 = 0;
          do
          {
            *((_BYTE *)v91 + v115) = v15[v115 + 1];
            ++v115;
            v91 = v138[0];
          }
          while ( v115 != v87 );
        }
        else
        {
          if ( *v15 != 0xFEFF )
            goto LABEL_25;
          v87 = v14 >> 1;
          DWORD2(v140) = 3;
          if ( HIDWORD(v140) > 5 || (v109 = 43, !_bittest64(&v109, HIDWORD(v140))) )
          {
            v119 = v15[1];
            v120 = v15 + 1;
            if ( v119 )
            {
              do
              {
                *v120++ = __ROL2__(v119, 8);
                v119 = *v120;
              }
              while ( *v120 );
            }
          }
          v91 = (void *)operator new[](v87);
          v138[0] = v91;
          v92 = s;
          v110 = 0;
          do
          {
            *((_BYTE *)v91 + v110) = v15[v110 + 1];
            ++v110;
            v91 = v138[0];
          }
          while ( v110 != v87 );
        }
        goto LABEL_185;
      }
LABEL_21:
      if ( *(_QWORD *)v15 == -131072 )
      {
        v87 = v14 >> 2;
        DWORD2(v140) = 4;
        if ( HIDWORD(v140) <= 5 )
        {
          v88 = 43;
          if ( _bittest64(&v88, HIDWORD(v140)) )
          {
            v89 = *((_QWORD *)v15 + 1);
            v90 = (unsigned __int64 *)(v15 + 4);
            if ( v89 )
            {
              do
              {
                *v90++ = (v89 >> 8) | (v89 << 8);
                v89 = *v90;
              }
              while ( *v90 );
            }
          }
        }
        v91 = (void *)operator new[](v87);
        v138[0] = v91;
        v92 = s;
        v93 = 0;
        do
        {
          *((_BYTE *)v91 + v93) = *(_QWORD *)&v15[4 * v93 + 4];
          ++v93;
          v91 = v138[0];
        }
        while ( v87 != v93 );
      }
      else
      {
        if ( *(_QWORD *)v15 != 65279 )
          goto LABEL_23;
        v87 = v14 >> 2;
        DWORD2(v140) = 5;
        if ( HIDWORD(v140) > 5 || (v116 = 43, !_bittest64(&v116, HIDWORD(v140))) )
        {
          v121 = *((_QWORD *)v15 + 1);
          v122 = (unsigned __int64 *)(v15 + 4);
          if ( v121 )
          {
            do
            {
              *v122++ = (v121 >> 8) | (v121 << 8);
              v121 = *v122;
            }
            while ( *v122 );
          }
        }
        v91 = (void *)operator new[](v87);
        v138[0] = v91;
        v92 = s;
        v117 = 0;
        do
        {
          *((_BYTE *)v91 + v117) = *(_QWORD *)&v15[4 * v117 + 4];
          ++v117;
          v91 = v138[0];
        }
        while ( v117 != v87 );
      }
LABEL_185:
      s = v92;
      v139 = v91;
      LODWORD(v140) = v87;
    }
LABEL_186:
    if ( v15 )
      operator delete[](v15);
    goto LABEL_26;
  }
  memcpy(v15, v17, v18 - (_QWORD)v17);
  *((_QWORD *)s + 1) = v127;
  *((_BYTE *)v15 + v13 + 3) = 0;
  *((_BYTE *)v15 + v13 + 2) = 0;
  *((_BYTE *)v15 + v13 + 1) = 0;
  *((_BYTE *)v15 + v13) = 0;
  if ( v14 > 3 )
    goto LABEL_21;
LABEL_25:
  DWORD2(v140) = 0;
  v139 = v15;
  v138[0] = v15;
  LODWORD(v140) = v13 + 4;
LABEL_26:
  operator delete(s, 0x18u);
  sub_40440((__int64)&v137);
  v138[1] = v139;
LABEL_27:
  v19 = *(void **)a1;
  dest = nullptr;
  v136 = 0;
  if ( v19 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree();
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree();
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree();
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  *(_BYTE *)(a1 + 72) = 0;
  v20 = 0;
  v126 = 0;
  v128 = 0;
  v125 = 0;
LABEL_34:
  while ( v138[1] && LODWORD(v138[1]) - (int)v139 < (unsigned int)(v140 - 1) && *(_BYTE *)v138[1] )
  {
    sub_41E40((__int64)&v137);
    if ( DWORD1(v140) == 1 )
    {
      v42 = s1;
      if ( !strcmp(s1, "manifest") )
      {
        if ( SHIDWORD(v149) <= 0 )
          goto LABEL_114;
        v46 = (const char **)v148;
        v47 = (__int64)&v148[32 * (HIDWORD(v149) - 1) + 32];
        while ( 1 )
        {
          v48 = *v46;
          v49 = strchr(*v46, 58);
          if ( v49 )
            v48 = v49 + 1;
          if ( !strcmp("package", v48) )
            break;
          v46 += 4;
          if ( v46 == (const char **)v47 )
          {
            v50 = "";
            goto LABEL_132;
          }
        }
        v50 = v46[2];
        if ( !v50 )
          goto LABEL_114;
LABEL_132:
        v62 = strlen(v50);
        v63 = v62;
        if ( v62 )
        {
          v64 = *(void **)a1;
          v65 = v62 + 1;
          if ( *(_QWORD *)(a1 + 16) < v62 + 1 )
          {
            v103 = qvector_reserve();
            *(_QWORD *)a1 = v103;
            v64 = (void *)v103;
          }
          *(_QWORD *)(a1 + 8) = v65;
          memmove(v64, v50, v63);
          *(_BYTE *)(*(_QWORD *)a1 + v63) = 0;
        }
        else
        {
LABEL_114:
          *(_QWORD *)(a1 + 8) = 0;
        }
      }
      else if ( !strcmp(v42, "application") )
      {
        v51 = HIDWORD(v149);
        if ( SHIDWORD(v149) <= 0 )
        {
          v75 = 0;
          sa = "";
LABEL_157:
          v76 = *(_QWORD *)(a1 + 56);
          v77 = v75;
          if ( v76 )
            v77 = --v76 + v75;
          v78 = *(_QWORD *)(a1 + 48);
          v79 = v77 + 1;
          if ( *(_QWORD *)(a1 + 64) < v77 + 1 )
          {
            v100 = qvector_reserve();
            *(_QWORD *)(a1 + 48) = v100;
            v79 = v77 + 1;
            v78 = v100;
          }
          *(_QWORD *)(a1 + 56) = v79;
          *(_BYTE *)(v78 + v77) = 0;
          memmove((void *)(v76 + *(_QWORD *)(a1 + 48)), sa, v75);
        }
        else
        {
          v52 = (__int64)&v148[32 * (HIDWORD(v149) - 1) + 32];
          v123 = v148;
          v53 = v148;
          while ( 1 )
          {
            v54 = *(const char **)v53;
            v55 = strchr(*(const char **)v53, 58);
            if ( v55 )
              v54 = v55 + 1;
            if ( !strcmp("name", v54) )
              break;
            v53 += 32;
            if ( (char *)v52 == v53 )
            {
              sa = "";
              goto LABEL_156;
            }
          }
          v56 = v123;
          sa = *((char **)v53 + 2);
          if ( *sa != 46 || (v95 = *(_QWORD *)(a1 + 8)) == 0 || (v96 = v95 - 1, v95 == 1) )
          {
            if ( !sa )
              goto LABEL_123;
            goto LABEL_156;
          }
          v97 = *(_QWORD *)(a1 + 56);
          v98 = v95 - 1;
          if ( v97 )
          {
            --v97;
            v98 = v96 + v97;
            v95 += v97;
          }
          v99 = *(_QWORD *)(a1 + 48);
          if ( *(_QWORD *)(a1 + 64) < v95 )
          {
            v124 = v95;
            v118 = qvector_reserve();
            *(_QWORD *)(a1 + 48) = v118;
            v95 = v124;
            v99 = v118;
          }
          *(_QWORD *)(a1 + 56) = v95;
          *(_BYTE *)(v99 + v98) = 0;
          memcpy((void *)(v97 + *(_QWORD *)(a1 + 48)), *(const void **)a1, v96);
          if ( sa )
          {
LABEL_156:
            v75 = strlen(sa);
            goto LABEL_157;
          }
        }
        v51 = HIDWORD(v149);
        if ( SHIDWORD(v149) > 0 )
        {
          v56 = v148;
LABEL_123:
          v57 = (const char **)v56;
          v58 = (__int64)&v56[32 * (v51 - 1) + 32];
          while ( 1 )
          {
            v59 = *v57;
            v60 = strchr(*v57, 58);
            if ( v60 )
              v59 = v60 + 1;
            if ( !strcmp("debuggable", v59) )
              break;
            v57 += 4;
            if ( (const char **)v58 == v57 )
            {
              v61 = "";
              goto LABEL_129;
            }
          }
          v61 = v57[2];
          if ( !v61 )
            continue;
LABEL_129:
          if ( !strcmp(v61, "true") )
            *(_BYTE *)(a1 + 72) = 1;
        }
      }
      else if ( !strcmp(v42, "activity") )
      {
        if ( SHIDWORD(v149) <= 0 )
          goto LABEL_153;
        v70 = (const char **)v148;
        v71 = (__int64)&v148[32 * (HIDWORD(v149) - 1) + 32];
        while ( 1 )
        {
          v72 = *v70;
          v73 = strchr(*v70, 58);
          if ( v73 )
            v72 = v73 + 1;
          if ( !strcmp("name", v72) )
            break;
          v70 += 4;
          if ( (const char **)v71 == v70 )
          {
            v74 = "";
            goto LABEL_175;
          }
        }
        v74 = v70[2];
        if ( !v74 )
          goto LABEL_153;
LABEL_175:
        v83 = strlen(v74);
        v84 = v83;
        if ( !v83 )
        {
LABEL_153:
          *(_QWORD *)&v136 = 0;
          goto LABEL_154;
        }
        v85 = dest;
        v86 = v83 + 1;
        if ( *((_QWORD *)&v136 + 1) < v83 + 1 )
        {
          dest = (void *)qvector_reserve();
          v85 = dest;
        }
LABEL_178:
        *(_QWORD *)&v136 = v86;
        memmove(v85, v74, v84);
        *((_BYTE *)dest + v84) = 0;
LABEL_154:
        v126 = 0;
        v20 = 1;
        v128 = 0;
        v125 = 0;
      }
      else
      {
        v43 = strcmp(v42, "activity-alias");
        if ( !v43 )
        {
          if ( SHIDWORD(v149) <= 0 )
            goto LABEL_153;
          v129 = v148;
          v80 = HIDWORD(v149);
          sb = v148;
          while ( 1 )
          {
            if ( v43 < v80 )
              v81 = *(const char **)sb;
            else
              v81 = nullptr;
            v82 = strchr(v81, 58);
            if ( v82 )
              v81 = v82 + 1;
            if ( !strcmp("targetActivity", v81) )
              break;
            ++v43;
            sb += 32;
            if ( v43 == v80 )
            {
              v74 = "";
              goto LABEL_190;
            }
          }
          if ( v43 >= v80 )
            goto LABEL_153;
          v74 = *(const char **)&v129[32 * v43 + 16];
          if ( !v74 )
            goto LABEL_153;
LABEL_190:
          v94 = strlen(v74);
          v84 = v94;
          if ( !v94 )
            goto LABEL_153;
          v86 = v94 + 1;
          if ( *((_QWORD *)&v136 + 1) < v94 + 1 )
            dest = (void *)qvector_reserve();
          v85 = dest;
          goto LABEL_178;
        }
        if ( v20 && !strcmp(v42, "intent-filter") )
        {
          v125 = v20;
        }
        else if ( v125 )
        {
          if ( !strcmp(v42, "action") )
          {
            if ( SHIDWORD(v149) > 0 )
            {
              v104 = (const char **)v148;
              v105 = (__int64)&v148[32 * (HIDWORD(v149) - 1) + 32];
              while ( 1 )
              {
                v106 = *v104;
                v107 = strchr(*v104, 58);
                if ( v107 )
                  v106 = v107 + 1;
                if ( !strcmp("name", v106) )
                  break;
                v104 += 4;
                if ( (const char **)v105 == v104 )
                  goto LABEL_34;
              }
              v126 |= strcmp(v104[2], "android.intent.action.MAIN") == 0;
            }
          }
          else if ( !strcmp(v42, "category") && SHIDWORD(v149) > 0 )
          {
            v66 = (const char **)v148;
            v67 = (__int64)&v148[32 * (HIDWORD(v149) - 1) + 32];
            while ( 1 )
            {
              v68 = *v66;
              v69 = strchr(*v66, 58);
              if ( v69 )
                v68 = v69 + 1;
              if ( !strcmp("name", v68) )
                break;
              v66 += 4;
              if ( (const char **)v67 == v66 )
                goto LABEL_34;
            }
            v128 |= strcmp(v66[2], "android.intent.category.LAUNCHER") == 0;
          }
        }
      }
    }
    else if ( DWORD1(v140) == 2 )
    {
      v41 = s1;
      if ( !strcmp(s1, "activity") || !strcmp(v41, "activity-alias") )
      {
        v20 = v126 & v128;
        if ( (v126 & v128) != 0 )
        {
          v44 = v136;
          if ( (_QWORD)v136 && (v45 = v136 - 1, (_QWORD)v136 != 1) )
          {
            v101 = dest;
            v102 = *(void **)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)v136 )
            {
              v111 = qvector_reserve();
              *(_QWORD *)(a1 + 24) = v111;
              v102 = (void *)v111;
            }
            *(_QWORD *)(a1 + 32) = v44;
            memmove(v102, v101, v45);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v44 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
          break;
        }
      }
      else
      {
        v125 &= strcmp(v41, "intent-filter") != 0;
      }
    }
  }
  if ( dest )
  {
    *(_QWORD *)&v136 = 0;
    qfree();
  }
  v137 = &off_7DBD8;
  if ( v138[0] )
    operator delete[](v138[0]);
  if ( (_BYTE)v150 && v148 )
  {
    v21 = (void **)&v148[32 * *((_QWORD *)v148 - 1)];
    if ( v148 == (char *)v21 )
    {
      v24 = 0;
    }
    else
    {
      do
      {
        v22 = v21;
        v23 = *(v21 - 2);
        v21 -= 4;
        if ( v23 )
          operator delete[](v23);
        if ( *v21 )
          operator delete[](*v21);
      }
      while ( v148 != (char *)v21 );
      v24 = 32LL * (_QWORD)*(v22 - 5);
    }
    operator delete[](v21 - 1, v24 + 8);
  }
  if ( (_BYTE)v147 && v145 )
  {
    v25 = v145 + 16LL * *(_QWORD *)(v145 - 8);
    if ( v145 == v25 )
    {
      v28 = 0;
    }
    else
    {
      do
      {
        v26 = v25;
        v27 = *(void **)(v25 - 16);
        v25 -= 16;
        if ( v27 )
          operator delete[](v27);
      }
      while ( v145 != v25 );
      v28 = 16LL * *(_QWORD *)(v26 - 24);
    }
    operator delete[]((void *)(v25 - 8), v28 + 8);
  }
  if ( v143 )
    operator delete[](v143);
  if ( s1 )
    operator delete[](s1);
  v29 = 1;
LABEL_68:
  if ( v133 )
  {
    *(_QWORD *)&v134 = 0;
    qfree();
  }
  return v29;
}

