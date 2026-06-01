ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *__fastcall ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::find_all_typeinfo_nodes(
        ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *this)
{
  char **v1; // r15
  __int64 name_ea; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 first_seg; // rbx
  char v8; // al
  char *v9; // r12
  unsigned __int64 v10; // r13
  __int64 next_seg; // rax
  unsigned __int64 v13; // r15
  __int64 qword; // rax
  char *v15; // r14
  unsigned __int64 v16; // rcx
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // dl
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 ea_name; // rax
  char *v24; // r12
  size_t v25; // r13
  size_t v26; // rcx
  _BYTE *v27; // rax
  size_t v28; // r9
  size_t i; // rax
  char *v30; // r8
  void *v31; // rdi
  size_t v32; // r13
  __m128i v33; // xmm0
  __m128i si128; // xmm0
  int v35; // ecx
  char *v36; // rsi
  void *v37; // rdx
  size_t v38; // r13
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  char *v41; // r15
  size_t v42; // r13
  unsigned __int64 v43; // r13
  char *v44; // rax
  void *v45; // rsi
  char *v46; // r14
  __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  int v51; // ecx
  size_t v52; // rax
  size_t v53; // rdx
  size_t v54; // rax
  size_t v55; // rax
  size_t v56; // r14
  unsigned __int64 v57; // r14
  char *v58; // rax
  __m128i *v59; // rcx
  char *v60; // r13
  void *v61; // rsi
  __int64 v62; // r14
  char *v63; // r13
  __int64 v64; // rax
  unsigned __int64 v65; // rsi
  char *v66; // rdi
  const void *v67; // rsi
  signed __int64 v68; // rdx
  char *v69; // rax
  int v70; // eax
  size_t v71; // r8
  void *v72; // rax
  size_t v73; // r8
  const void *v74; // rsi
  void *v75; // rax
  size_t v76; // r8
  const void *v77; // rsi
  char *v78; // r14
  void *v79; // rdi
  __int64 v80; // rax
  void *v81; // rax
  void *v82; // rsi
  void *v83; // rax
  size_t v84; // rdx
  const void *v85; // rsi
  void *v86; // rax
  size_t v87; // r14
  void *v88; // rsi
  void *v89; // rax
  size_t v90; // r14
  size_t v91; // rdx
  const void *v92; // rsi
  __int64 v93; // r13
  const void *v94; // r8
  _QWORD *v95; // rdi
  char v96; // al
  void *v97; // r13
  size_t v98; // r13
  char *v99; // r13
  __int64 v100; // rax
  unsigned __int64 v101; // r15
  unsigned int v102; // r13d
  __int64 v103; // rax
  unsigned __int64 v104; // [rsp+0h] [rbp-298h]
  size_t n[2]; // [rsp+10h] [rbp-288h] BYREF
  void *src; // [rsp+20h] [rbp-278h]
  size_t v108; // [rsp+28h] [rbp-270h]
  size_t v109; // [rsp+30h] [rbp-268h]
  void *v110; // [rsp+38h] [rbp-260h]
  __int64 v111; // [rsp+40h] [rbp-258h]
  void *v112; // [rsp+48h] [rbp-250h]
  __int64 v113; // [rsp+50h] [rbp-248h]
  __int64 v114; // [rsp+58h] [rbp-240h]
  size_t v115; // [rsp+60h] [rbp-238h]
  char *v116; // [rsp+68h] [rbp-230h]
  size_t v117; // [rsp+70h] [rbp-228h]
  char **v118; // [rsp+78h] [rbp-220h]
  unsigned __int64 v119; // [rsp+88h] [rbp-210h]
  char *s1; // [rsp+90h] [rbp-208h]
  __int128 v121; // [rsp+98h] [rbp-200h]
  char *s; // [rsp+B0h] [rbp-1E8h]
  size_t v123[3]; // [rsp+B8h] [rbp-1E0h]
  void *v124; // [rsp+D0h] [rbp-1C8h]
  __m128i v125; // [rsp+D8h] [rbp-1C0h] BYREF
  int v126; // [rsp+F8h] [rbp-1A0h] BYREF
  __m128i v127; // [rsp+100h] [rbp-198h]
  int *v128; // [rsp+110h] [rbp-188h]
  __int64 v129; // [rsp+118h] [rbp-180h]
  int v130; // [rsp+128h] [rbp-170h] BYREF
  __m128i v131; // [rsp+130h] [rbp-168h]
  int *v132; // [rsp+140h] [rbp-158h]
  __int64 v133; // [rsp+148h] [rbp-150h]
  char *v134; // [rsp+150h] [rbp-148h]
  int v135; // [rsp+158h] [rbp-140h]
  size_t v136; // [rsp+160h] [rbp-138h]
  __m128i v137; // [rsp+168h] [rbp-130h] BYREF
  char *v138; // [rsp+178h] [rbp-120h]
  size_t v139[2]; // [rsp+180h] [rbp-118h] BYREF
  __int128 v140; // [rsp+190h] [rbp-108h]
  __int64 v141; // [rsp+1A0h] [rbp-F8h]
  char *v142; // [rsp+1B0h] [rbp-E8h] BYREF
  size_t v143[2]; // [rsp+1B8h] [rbp-E0h]
  __m128i v144; // [rsp+1C8h] [rbp-D0h]
  char *v145; // [rsp+1D8h] [rbp-C0h]
  __m128i v146; // [rsp+1E0h] [rbp-B8h]
  __int128 v147; // [rsp+1F0h] [rbp-A8h]
  __int64 v148; // [rsp+200h] [rbp-98h]
  void *v149[2]; // [rsp+210h] [rbp-88h] BYREF
  char v150[16]; // [rsp+220h] [rbp-78h] BYREF
  void *v151; // [rsp+230h] [rbp-68h] BYREF
  unsigned __int64 v152; // [rsp+238h] [rbp-60h]
  _QWORD dest[11]; // [rsp+240h] [rbp-58h] BYREF

  v1 = C_9_0;
  dest[3] = __readfsqword(0x28u);
  *(_OWORD *)this = 0;
  *((_QWORD *)this + 2) = 0;
  v126 = 0;
  v129 = 0;
  v130 = 0;
  v132 = &v130;
  v133 = 0;
  v128 = &v126;
  v131 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v130);
  v127 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v126);
  do
  {
    name_ea = get_name_ea();
    if ( name_ea == -1 )
      goto LABEL_12;
    v3 = (_QWORD *)v131.m128i_i64[0];
    v4 = name_ea + 16;
    if ( v131.m128i_i64[0] )
    {
      while ( 1 )
      {
        v5 = v3[4];
        v6 = (_QWORD *)v3[3];
        if ( v4 < v5 )
          v6 = (_QWORD *)v3[2];
        if ( !v6 )
          break;
        v3 = v6;
      }
      if ( v4 >= v5 )
        goto LABEL_10;
      if ( (_QWORD *)v131.m128i_i64[1] != v3 )
        goto LABEL_53;
    }
    else if ( (int *)v131.m128i_i64[1] != &v130 )
    {
LABEL_53:
      v5 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_10:
      if ( v5 >= v4 )
        goto LABEL_12;
    }
    *(_QWORD *)(operator new(0x28u) + 32) = v4;
    std::_Rb_tree_insert_and_rebalance();
    ++v133;
LABEL_12:
    ++v1;
  }
  while ( v1 != &off_4438F8 );
  if ( !v133 )
    goto LABEL_24;
  first_seg = get_first_seg();
  if ( !first_seg )
    goto LABEL_24;
  do
  {
    v8 = *(_BYTE *)(first_seg + 42);
    if ( (v8 & 2) == 0 && *(_BYTE *)(first_seg + 184) != 3 || (v8 & 1) != 0 )
      goto LABEL_22;
    s1 = nullptr;
    v121 = 0;
    get_segm_name();
    if ( !(_QWORD)v121 )
    {
      v9 = _qstring<char>::c_str(void)const::nullstr;
      goto LABEL_55;
    }
    v9 = s1;
    if ( strcmp(s1, ".data.rel.ro") && strcmp(v9, ".data.rel.ro.local") )
    {
      if ( !strcmp(v9, ".rodata") )
      {
LABEL_27:
        v10 = *(_QWORD *)(first_seg + 8);
        if ( v10 <= 7 )
          goto LABEL_59;
        goto LABEL_28;
      }
LABEL_55:
      if ( strcmp(v9, ".rdata")
        && strcmp(v9, "__const")
        && strcmp(v9, "__DATA_CONST")
        && *(_BYTE *)(first_seg + 184) != 3 )
      {
LABEL_59:
        if ( s1 )
        {
LABEL_21:
          *(_QWORD *)&v121 = 0;
          qfree();
        }
LABEL_22:
        next_seg = get_next_seg();
        goto LABEL_23;
      }
      goto LABEL_27;
    }
    v10 = *(_QWORD *)(first_seg + 8);
    if ( v10 <= 7 )
      goto LABEL_21;
LABEL_28:
    v13 = *(_QWORD *)first_seg;
    v104 = v10 - 8;
    v119 = v13;
    if ( v13 >= v10 - 8 )
      goto LABEL_40;
    do
    {
      qword = get_qword();
      v15 = (char *)v131.m128i_i64[0];
      v16 = qword;
      v17 = (char *)&v130;
      if ( !v131.m128i_i64[0] )
        goto LABEL_38;
      do
      {
        while ( 1 )
        {
          v18 = *((_QWORD *)v15 + 2);
          v19 = *((_QWORD *)v15 + 3);
          if ( *((_QWORD *)v15 + 4) >= v16 )
            break;
          v15 = *((char **)v15 + 3);
          if ( !v19 )
            goto LABEL_34;
        }
        v17 = v15;
        v15 = *((char **)v15 + 2);
      }
      while ( v18 );
LABEL_34:
      if ( v17 == (char *)&v130 )
        goto LABEL_38;
      if ( v16 < *((_QWORD *)v17 + 4) )
        goto LABEL_38;
      std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_insert_unique<unsigned long long const&>();
      if ( !v20 || !(unsigned __int8)is_loaded() )
        goto LABEL_38;
      v22 = get_qword();
      v21 = v13 + 8;
      if ( !(unsigned __int8)is_loaded() || v22 <= 0xF )
        goto LABEL_39;
      v142 = nullptr;
      v118 = &v142;
      *(_OWORD *)v143 = 0;
      ea_name = get_ea_name();
      v24 = v142;
      if ( ea_name <= 0 || !v143[0] )
      {
        if ( v142 )
        {
LABEL_64:
          v143[0] = 0;
          v21 = v13 + 8;
          qfree();
          goto LABEL_39;
        }
LABEL_38:
        v21 = v13 + 8;
        goto LABEL_39;
      }
      LODWORD(n[0]) = strcmp(v142, "_ZTVN10__cxxabiv117__class_type_infoE");
      if ( LODWORD(n[0]) )
      {
        if ( !strcmp(v24, "_ZTVN10__cxxabiv120__si_class_type_infoE") )
        {
          v143[0] = 0;
          qfree();
          LODWORD(n[0]) = 1;
        }
        else
        {
          if ( strcmp(v24, "_ZTVN10__cxxabiv121__vmi_class_type_infoE") )
            goto LABEL_64;
          v143[0] = 0;
          qfree();
          LODWORD(n[0]) = 2;
        }
      }
      else
      {
        v143[0] = 0;
        qfree();
      }
      v21 = v13 + 8;
      get_qword();
      if ( !(unsigned __int8)is_loaded() )
        goto LABEL_39;
      s = nullptr;
      *(_OWORD *)v123 = 0;
      get_strlit_contents();
      v25 = v123[0];
      if ( v123[0] <= 1 )
      {
        if ( s )
        {
          v123[0] = 0;
          qfree();
        }
        goto LABEL_39;
      }
      v136 = 0;
      v135 = n[0];
      n[0] = v123[0] - 1;
      src = s;
      v138 = nullptr;
      v141 = 0;
      v134 = (char *)v13;
      v137 = 0;
      *(_OWORD *)v139 = 0;
      v140 = 0;
      v138 = (char *)qvector_reserve();
      v139[0] = v25;
      memmove(v138, src, n[0]);
      v138[v25 - 1] = 0;
      v142 = nullptr;
      v108 = (size_t)v150;
      v149[0] = v150;
      strcpy(v150, "_ZTI");
      v149[1] = &byte_4;
      *(_OWORD *)v143 = 0;
      if ( v123[0] && strlen(s) > 0x7FFFFFFFFFFFFFFALL )
      {
        src = v149;
        std::__throw_length_error("basic_string::append");
      }
      src = v149;
      std::string::_M_append();
      if ( (int)demangle_name() <= 0 )
      {
        v98 = v123[0];
        v124 = nullptr;
        v125 = 0;
        if ( v123[0] )
        {
          v124 = (void *)qalloc_or_throw();
          v125.m128i_i64[1] = v98;
          memcpy(v124, s, v98);
          v125.m128i_i64[0] = v98;
        }
        goto LABEL_78;
      }
      v26 = v143[0];
      if ( v143[0] )
      {
        v94 = v142;
        n[0] = (size_t)&v151;
        v151 = dest;
        if ( !v142 )
          JUMPOUT(0x15288F);
        v124 = (void *)v143[0];
        if ( v143[0] > 0xF )
        {
          v110 = v142;
          v109 = v143[0];
          v151 = (void *)std::string::_M_create();
          v95 = v151;
          v26 = v109;
          v94 = v110;
          dest[0] = v124;
        }
        else
        {
          v95 = dest;
          if ( v143[0] == 1 )
          {
            LOBYTE(dest[0]) = *v142;
            v27 = (char *)dest + 1;
            goto LABEL_70;
          }
        }
        memcpy(v95, v94, v26);
        v26 = (size_t)v124;
        v27 = (char *)v151 + (_QWORD)v124;
      }
      else
      {
        v27 = dest;
        v151 = dest;
      }
LABEL_70:
      v152 = v26;
      *v27 = 0;
      v28 = v152;
      if ( v152 > 0xC
        && (*(_QWORD *)v151 == 0x6F666E6965707974LL && *(_QWORD *)((char *)v151 + 5) == 0x20726F66206F666ELL
         || v152 != 13
         && (*(_QWORD *)v151 == 0x666E696570797460LL && *(_QWORD *)((char *)v151 + 6) == 0x27726F66206F666ELL
          || *(_QWORD *)v151 == 0x6F666E6965707974LL && *(_QWORD *)((char *)v151 + 6) == 0x6020726F66206F66LL)) )
      {
        n[0] = (size_t)&v151;
        std::string::_M_erase();
        v28 = v152;
      }
      for ( i = (size_t)&v151; ; i = v109 )
      {
        if ( !v28 )
        {
          v31 = v151;
          v124 = nullptr;
          v125 = 0;
          if ( v151 != dest )
LABEL_77:
            operator delete(v31, dest[0] + 1LL);
          goto LABEL_78;
        }
        v30 = (char *)v151;
        if ( *(_BYTE *)v151 != 96 && *(_BYTE *)v151 != 39 )
          break;
        n[0] = i;
        v109 = i;
        std::string::_M_erase();
        v28 = v152;
      }
      n[0] = (size_t)dest;
      while ( 1 )
      {
        v96 = v30[v28 - 1];
        if ( v96 != 96 && v96 != 39 )
          break;
        std::string::_M_erase();
        v28 = v152;
        if ( !v152 )
        {
          v31 = v151;
          v124 = nullptr;
          v125 = 0;
          if ( v151 != (void *)n[0] )
            goto LABEL_77;
          goto LABEL_78;
        }
        v30 = (char *)v151;
      }
      v110 = v30;
      v109 = v28;
      v97 = (void *)n[0];
      v124 = nullptr;
      n[0] = v28 + 1;
      v125 = 0;
      v124 = (void *)qvector_reserve();
      v125.m128i_i64[0] = n[0];
      n[0] = v109;
      memmove(v124, v110, v109);
      *((_BYTE *)v124 + n[0]) = 0;
      v31 = v151;
      if ( v151 != v97 )
        goto LABEL_77;
LABEL_78:
      if ( v149[0] != (void *)v108 )
        operator delete(v149[0], *(_QWORD *)v150 + 1LL);
      if ( v142 )
      {
        v143[0] = 0;
        qfree();
      }
      v32 = (size_t)v124;
      v124 = nullptr;
      v33 = _mm_loadu_si128(&v125);
      v125 = 0;
      if ( v136 )
      {
        *(__m128i *)n = v33;
        v137.m128i_i64[0] = 0;
        qfree();
        si128 = _mm_load_si128((const __m128i *)n);
        v136 = v32;
        v137 = si128;
        if ( v124 )
        {
          v125.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        v136 = v32;
        v137 = v33;
      }
      v35 = v135;
      if ( v135 == 1 )
      {
        v142 = (char *)get_qword();
        v99 = v142;
        if ( (unsigned __int8)is_loaded() )
        {
          v100 = *((_QWORD *)&v140 + 1);
          if ( *((_QWORD *)&v140 + 1) == v141 )
          {
            std::vector<unsigned long long>::_M_realloc_append<unsigned long long const&>();
          }
          else
          {
            **((_QWORD **)&v140 + 1) = v99;
            *((_QWORD *)&v140 + 1) = v100 + 8;
          }
        }
        goto LABEL_163;
      }
      if ( v135 == 2 )
      {
        LODWORD(n[0]) = get_dword();
        v101 = v13 + 24;
        v102 = 0;
        if ( LODWORD(n[0]) )
        {
          do
          {
            v142 = (char *)get_qword();
            src = v142;
            if ( (unsigned __int8)is_loaded() )
            {
              if ( *((_QWORD *)&v140 + 1) == v141 )
              {
                std::vector<unsigned long long>::_M_realloc_append<unsigned long long const&>();
              }
              else
              {
                v103 = *((_QWORD *)&v140 + 1) + 8LL;
                **((_QWORD **)&v140 + 1) = src;
                *((_QWORD *)&v140 + 1) = v103;
              }
            }
            ++v102;
            v101 += 16LL;
          }
          while ( v102 < LODWORD(n[0]) && v102 != 64 );
        }
LABEL_163:
        v35 = v135;
      }
      v36 = v134;
      LODWORD(v143[0]) = v35;
      v37 = (void *)v137.m128i_i64[0];
      v109 = v136;
      v38 = v139[0];
      v143[1] = v136;
      v39 = _mm_loadu_si128(&v137);
      v142 = v134;
      v110 = v138;
      v145 = v138;
      v144 = v39;
      v40 = _mm_load_si128((const __m128i *)v139);
      src = (void *)v140;
      v147 = v140;
      v146 = v40;
      n[0] = *((_QWORD *)&v140 + 1);
      v113 = v141;
      v148 = v141;
      if ( s )
      {
        v112 = (void *)v137.m128i_i64[0];
        v111 = (__int64)v134;
        LODWORD(v108) = v35;
        v123[0] = 0;
        qfree();
        v35 = v108;
        v36 = (char *)v111;
        v37 = v112;
      }
      v41 = *((char **)this + 1);
      if ( v41 != *((char **)this + 2) )
      {
        *(_QWORD *)v41 = v36;
        *((_DWORD *)v41 + 2) = v35;
        *((_QWORD *)v41 + 2) = 0;
        *(_OWORD *)(v41 + 24) = 0;
        if ( v37 )
        {
          v108 = (size_t)v37;
          v83 = (void *)qalloc_or_throw();
          v84 = v108;
          v85 = (const void *)v109;
          *((_QWORD *)v41 + 2) = v83;
          *((_QWORD *)v41 + 4) = v84;
          memcpy(v83, v85, v84);
          *((_QWORD *)v41 + 3) = v108;
        }
        *((_QWORD *)v41 + 5) = 0;
        *((_OWORD *)v41 + 3) = 0;
        if ( v38 )
        {
          v81 = (void *)qalloc_or_throw();
          *((_QWORD *)v41 + 5) = v81;
          v82 = v110;
          *((_QWORD *)v41 + 7) = v38;
          memcpy(v81, v82, v38);
          *((_QWORD *)v41 + 6) = v38;
        }
        *((_QWORD *)v41 + 10) = 0;
        v42 = n[0];
        *((_OWORD *)v41 + 4) = 0;
        v43 = v42 - (_QWORD)src;
        if ( v43 )
        {
          v44 = (char *)operator new(v43);
          v15 = &v44[v43];
          *((_QWORD *)v41 + 10) = &v44[v43];
          v45 = src;
          *((__m128i *)v41 + 4) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v44, (__m128i)(unsigned __int64)v44);
          memcpy(v44, v45, v43);
        }
        else
        {
          *((_QWORD *)v41 + 8) = 0;
          *((_QWORD *)v41 + 10) = 0;
        }
        *((_QWORD *)v41 + 9) = v15;
        *((_QWORD *)this + 1) += 88LL;
        goto LABEL_97;
      }
      v46 = &v41[-*(_QWORD *)this];
      v112 = *(void **)this;
      v47 = 0x2E8BA2E8BA2E8BA3LL * ((v41 - (_BYTE *)v112) >> 3);
      if ( v47 == 0x1745D1745D1745DLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v48 = 1;
      v117 = (size_t)v37;
      if ( v47 )
        v48 = 0x2E8BA2E8BA2E8BA3LL * ((v41 - (_BYTE *)v112) >> 3);
      v116 = v36;
      LODWORD(v115) = v35;
      v49 = v47 + v48;
      if ( v49 > 0x1745D1745D1745DLL )
        v49 = 0x1745D1745D1745DLL;
      v114 = 88 * v49;
      v50 = operator new(88 * v49);
      v51 = v115;
      v111 = v50;
      v52 = (size_t)&v46[v50];
      v53 = v117;
      v108 = v52;
      *(_QWORD *)v52 = v116;
      *(_DWORD *)(v52 + 8) = v51;
      *(_QWORD *)(v52 + 16) = 0;
      *(_OWORD *)(v52 + 24) = 0;
      if ( v53 )
      {
        v115 = v53;
        v89 = (void *)qalloc_or_throw();
        v90 = v108;
        v91 = v115;
        v92 = (const void *)v109;
        *(_QWORD *)(v108 + 32) = v115;
        *(_QWORD *)(v90 + 16) = v89;
        memcpy(v89, v92, v91);
        *(_QWORD *)(v90 + 24) = v115;
      }
      v54 = v108;
      *(_QWORD *)(v108 + 40) = 0;
      *(_OWORD *)(v54 + 48) = 0;
      if ( v38 )
      {
        v86 = (void *)qalloc_or_throw();
        v87 = v108;
        v88 = v110;
        *(_QWORD *)(v108 + 40) = v86;
        *(_QWORD *)(v87 + 56) = v38;
        memcpy(v86, v88, v38);
        *(_QWORD *)(v87 + 48) = v38;
      }
      v55 = v108;
      v56 = n[0];
      *(_QWORD *)(v108 + 80) = 0;
      *(_OWORD *)(v55 + 64) = 0;
      v57 = v56 - (_QWORD)src;
      if ( v57 )
      {
        v58 = (char *)operator new(v57);
        v59 = (__m128i *)v108;
        v60 = &v58[v57];
        v61 = src;
        *(_QWORD *)(v108 + 80) = &v58[v57];
        v59[4] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v58, (__m128i)(unsigned __int64)v58);
        memcpy(v58, v61, v57);
      }
      else
      {
        *(_QWORD *)(v55 + 64) = 0;
        v60 = nullptr;
        *(_QWORD *)(v55 + 80) = 0;
      }
      v62 = v111;
      *(_QWORD *)(v108 + 72) = v60;
      v63 = (char *)v112;
      if ( v41 == v112 )
      {
        v93 = v62 + 88;
        goto LABEL_135;
      }
      while ( 1 )
      {
        *(_QWORD *)v62 = *(_QWORD *)v63;
        v70 = *((_DWORD *)v63 + 2);
        *(_OWORD *)(v62 + 24) = 0;
        v71 = *((_QWORD *)v63 + 3);
        *(_DWORD *)(v62 + 8) = v70;
        *(_QWORD *)(v62 + 16) = 0;
        if ( v71 )
        {
          n[0] = v71;
          v75 = (void *)qalloc_or_throw();
          v76 = n[0];
          *(_QWORD *)(v62 + 16) = v75;
          v77 = *((const void **)v63 + 2);
          *(_QWORD *)(v62 + 32) = v76;
          memcpy(v75, v77, v76);
          *(_QWORD *)(v62 + 24) = n[0];
        }
        *(_QWORD *)(v62 + 40) = 0;
        *(_OWORD *)(v62 + 48) = 0;
        if ( *((_QWORD *)v63 + 6) )
        {
          n[0] = *((_QWORD *)v63 + 6);
          v72 = (void *)qalloc_or_throw();
          v73 = n[0];
          *(_QWORD *)(v62 + 40) = v72;
          v74 = *((const void **)v63 + 5);
          *(_QWORD *)(v62 + 56) = v73;
          memcpy(v72, v74, v73);
          *(_QWORD *)(v62 + 48) = n[0];
        }
        v65 = *((_QWORD *)v63 + 9) - *((_QWORD *)v63 + 8);
        *(_QWORD *)(v62 + 80) = 0;
        *(_OWORD *)(v62 + 64) = 0;
        if ( v65 )
        {
          n[0] = v65;
          v64 = operator new(v65);
          v65 = n[0];
          v66 = (char *)v64;
        }
        else
        {
          v66 = nullptr;
        }
        *(_QWORD *)(v62 + 80) = &v66[v65];
        *(__m128i *)(v62 + 64) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v66, (__m128i)(unsigned __int64)v66);
        v67 = *((const void **)v63 + 8);
        v68 = *((_QWORD *)v63 + 9) - (_QWORD)v67;
        if ( v68 <= 0 )
          break;
        n[0] = *((_QWORD *)v63 + 9) - (_QWORD)v67;
        v63 += 88;
        v69 = (char *)memcpy(v66, v67, v68);
        *(_QWORD *)(v62 + 72) = &v69[n[0]];
        if ( v41 == v63 )
          goto LABEL_128;
LABEL_120:
        v62 += 88;
      }
      v63 += 88;
      *(_QWORD *)(v62 + 72) = v66;
      if ( v41 != v63 )
        goto LABEL_120;
LABEL_128:
      v93 = v62 + 176;
      v78 = (char *)v112;
      do
      {
        while ( 1 )
        {
          v79 = *((void **)v78 + 8);
          if ( v79 )
            operator delete(v79, *((_QWORD *)v78 + 10) - (_QWORD)v79);
          if ( *((_QWORD *)v78 + 5) )
          {
            *((_QWORD *)v78 + 6) = 0;
            qfree();
          }
          if ( !*((_QWORD *)v78 + 2) )
            break;
          *((_QWORD *)v78 + 3) = 0;
          v78 += 88;
          qfree();
          if ( v41 == v78 )
            goto LABEL_135;
        }
        v78 += 88;
      }
      while ( v41 != v78 );
LABEL_135:
      if ( v112 )
      {
        n[0] = *((_QWORD *)this + 2);
        operator delete(v112, n[0] - (_QWORD)v112);
      }
      v80 = v111 + v114;
      *(_QWORD *)this = v111;
      *((_QWORD *)this + 1) = v93;
      *((_QWORD *)this + 2) = v80;
LABEL_97:
      if ( src )
        operator delete(src, v113 - (_QWORD)src);
      if ( v110 )
        qfree();
      if ( v109 )
        qfree();
LABEL_39:
      v119 = v21;
      v13 = v21;
    }
    while ( v21 < v104 );
LABEL_40:
    if ( !s1 )
      goto LABEL_22;
    *(_QWORD *)&v121 = 0;
    qfree();
    next_seg = get_next_seg();
LABEL_23:
    first_seg = next_seg;
  }
  while ( next_seg );
LABEL_24:
  std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(v131.m128i_i64[0]);
  std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(v127.m128i_i64[0]);
  return this;
}

