ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *__fastcall ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::run_recovery_pipeline(
        ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *this,
        int a2,
        int a3)
{
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  __int64 v6; // r13
  _QWORD *v7; // r14
  __m128i si128; // xmm0
  char *v9; // rax
  void *v10; // rdi
  unsigned __int64 *v11; // rbp
  unsigned __int64 *v12; // r13
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  void **v15; // r14
  unsigned __int64 v16; // rsi
  void **v17; // r12
  void **v18; // rax
  void *v19; // rdx
  void *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  void **v23; // r15
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  void **v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  void **v32; // rax
  unsigned __int64 v33; // rcx
  void **v34; // rax
  __int64 first_seg; // rax
  __int64 next_seg; // r12
  const char *v37; // r13
  unsigned __int64 v38; // rax
  char v39; // al
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // r13
  __int64 qword; // rax
  _QWORD *v43; // r14
  unsigned __int64 v44; // r15
  _QWORD *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // dl
  ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *v49; // rbp
  ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  char *v53; // rax
  unsigned __int64 v54; // rsi
  char *v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rbp
  void *v59; // rdi
  char *v60; // r15
  __int128 v61; // xmm1
  void **v62; // rax
  unsigned __int64 v63; // rbp
  void **v64; // r13
  void *v65; // rdx
  void *v66; // rcx
  char *v67; // r14
  __int64 v68; // rsi
  void *v69; // rax
  __m128i v70; // xmm0
  _QWORD *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rax
  char *v74; // rbp
  void *v75; // rdi
  __int64 v76; // rsi
  _QWORD *v77; // r15
  _QWORD *v78; // rbp
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  _BYTE *v83; // r8
  __int64 v84; // rax
  __int64 v85; // r12
  unsigned __int64 v86; // r12
  unsigned __int64 v87; // r12
  __int64 v88; // rdx
  __int64 v89; // r9
  void *v90; // rax
  char *v91; // r8
  __m128i v92; // xmm0
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rax
  char *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdi
  __m128i v100; // xmm0
  __int64 v101; // rdi
  __m128i v102; // xmm0
  __int64 v103; // rdi
  __int64 v104; // rbp
  __int64 v105; // rbp
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  _QWORD *v109; // rdi
  size_t v110; // rax
  unsigned __int64 v111; // r12
  unsigned __int64 i; // rax
  size_t v113; // rax
  int v114; // r13d
  _DWORD *v115; // r8
  _DWORD *v116; // rsi
  __int64 v117; // rcx
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 v122; // r10
  unsigned __int64 v123; // rsi
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // rax
  __int64 v126; // rax
  signed __int64 v127; // rdx
  __m128i *v128; // rbp
  __int64 v129; // rsi
  __int64 v130; // rcx
  __int64 v131; // r14
  const __m128i *v132; // rsi
  _QWORD *v133; // rcx
  const __m128i *v134; // rax
  __m128i *v135; // rdx
  __m128i v136; // xmm0
  __int64 v137; // rcx
  __m128i v138; // xmm0
  __int64 v139; // rcx
  unsigned __int64 v140; // rsi
  __int64 v141; // rax
  void **v142; // [rsp+0h] [rbp-230h] BYREF
  __m128 v143; // [rsp+8h] [rbp-228h] BYREF
  __m128 v144; // [rsp+18h] [rbp-218h] BYREF
  void *v145; // [rsp+28h] [rbp-208h] BYREF
  _QWORD *v146; // [rsp+30h] [rbp-200h]
  _DWORD **v147; // [rsp+38h] [rbp-1F8h]
  char *m128i_i8; // [rsp+40h] [rbp-1F0h]
  unsigned __int64 v149; // [rsp+48h] [rbp-1E8h]
  _QWORD *v150; // [rsp+50h] [rbp-1E0h]
  __int64 v151; // [rsp+58h] [rbp-1D8h]
  unsigned __int64 v152; // [rsp+60h] [rbp-1D0h]
  const char **p_s1; // [rsp+68h] [rbp-1C8h]
  void *v154; // [rsp+70h] [rbp-1C0h]
  int v155; // [rsp+78h] [rbp-1B8h]
  int v156; // [rsp+7Ch] [rbp-1B4h]
  __int64 *v157; // [rsp+80h] [rbp-1B0h]
  char *v158; // [rsp+88h] [rbp-1A8h]
  signed __int64 v159; // [rsp+90h] [rbp-1A0h]
  unsigned __int64 v160; // [rsp+98h] [rbp-198h]
  __int64 v161; // [rsp+A0h] [rbp-190h] BYREF
  const char *s1; // [rsp+A8h] [rbp-188h] BYREF
  char *s1_8[2]; // [rsp+B0h] [rbp-180h]
  int v164; // [rsp+D0h] [rbp-160h] BYREF
  __m128i v165; // [rsp+D8h] [rbp-158h]
  void **v166; // [rsp+E8h] [rbp-148h]
  __int64 v167; // [rsp+F0h] [rbp-140h]
  int v168; // [rsp+100h] [rbp-130h] BYREF
  __m128i v169; // [rsp+108h] [rbp-128h]
  void *v170; // [rsp+118h] [rbp-118h]
  __int64 v171; // [rsp+120h] [rbp-110h]
  _DWORD *v172; // [rsp+128h] [rbp-108h] BYREF
  _BYTE v173[24]; // [rsp+130h] [rbp-100h] BYREF
  _BYTE *v174; // [rsp+148h] [rbp-E8h]
  __int64 v175; // [rsp+150h] [rbp-E0h]
  unsigned __int64 v176; // [rsp+158h] [rbp-D8h]
  unsigned __int64 v177; // [rsp+160h] [rbp-D0h]
  __int64 v178; // [rsp+168h] [rbp-C8h]
  _QWORD *v179; // [rsp+170h] [rbp-C0h] BYREF
  _QWORD *v180; // [rsp+178h] [rbp-B8h]
  _QWORD *v181; // [rsp+180h] [rbp-B0h]
  void *v182; // [rsp+188h] [rbp-A8h]
  __int64 v183; // [rsp+190h] [rbp-A0h]
  _QWORD v184[2]; // [rsp+198h] [rbp-98h] BYREF
  void *v185; // [rsp+1A8h] [rbp-88h] BYREF
  __int64 v186; // [rsp+1B0h] [rbp-80h]
  _QWORD v187[2]; // [rsp+1B8h] [rbp-78h] BYREF
  char s[40]; // [rsp+1C8h] [rbp-68h] BYREF
  unsigned __int64 v189; // [rsp+1F0h] [rbp-40h]

  v156 = a2;
  v155 = a3;
  v189 = __readfsqword(0x28u);
  *(_WORD *)this = 0;
  *((_DWORD *)this + 5) = 0;
  *(_OWORD *)((char *)this + 4) = 0;
  *(_OWORD *)((char *)this + 24) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  *(_OWORD *)((char *)this + 56) = 0;
  if ( get_name_ea() == -1 && get_name_ea() == -1 && get_name_ea() == -1 )
    return this;
  *(_WORD *)this = 257;
  p_s1 = &s1;
  ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::find_all_typeinfo_nodes((ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *)&s1);
  v4 = *((_QWORD **)this + 3);
  v5 = *((_QWORD **)this + 4);
  v145 = &v168;
  v6 = *((_QWORD *)this + 5);
  v7 = v4;
  v144 = _mm_loadh_ps((const double *)&v145);
  si128 = _mm_load_si128((const __m128i *)&s1);
  v142 = (void **)&v164;
  v9 = s1_8[1];
  v143 = _mm_loadh_ps((const double *)&v142);
  *(__m128i *)((char *)this + 24) = si128;
  *((_QWORD *)this + 5) = v9;
  if ( v4 == v5 )
  {
LABEL_9:
    if ( !v4 )
      goto LABEL_11;
    goto LABEL_10;
  }
  do
  {
    while ( 1 )
    {
      v10 = (void *)v7[8];
      if ( v10 )
        operator delete(v10, v7[10] - (_QWORD)v10);
      if ( v7[5] )
      {
        v7[6] = 0;
        qfree();
      }
      if ( !v7[2] )
        break;
      v7[3] = 0;
      v7 += 11;
      qfree();
      if ( v5 == v7 )
        goto LABEL_9;
    }
    v7 += 11;
  }
  while ( v5 != v7 );
  if ( v4 )
LABEL_10:
    operator delete(v4, v6 - (_QWORD)v4);
LABEL_11:
  v11 = *((unsigned __int64 **)this + 4);
  v12 = *((unsigned __int64 **)this + 3);
  v164 = 0;
  v13 = _mm_load_si128((const __m128i *)&v143);
  v14 = _mm_load_si128((const __m128i *)&v144);
  v167 = 0;
  v168 = 0;
  v165 = v13;
  v169 = v14;
  v171 = 0;
  *((_DWORD *)this + 1) = -1171354717 * (v11 - v12);
  v166 = v142;
  v170 = v145;
  if ( v11 != v12 )
  {
    v15 = nullptr;
LABEL_34:
    v17 = v142;
LABEL_19:
    v21 = operator new(0x30u);
    v22 = *v12;
    *(_QWORD *)(v21 + 40) = 0;
    v23 = (void **)v21;
    *(_QWORD *)(v21 + 32) = v22;
    if ( v17 == v142 )
    {
      if ( v167 && (unsigned __int64)v166[4] < v22 )
        goto LABEL_31;
      if ( v15 )
      {
        while ( 1 )
        {
          v33 = (unsigned __int64)v15[4];
          v34 = (void **)v15[3];
          if ( v22 < v33 )
            v34 = (void **)v15[2];
          if ( !v34 )
            break;
          v15 = v34;
        }
        if ( v22 >= v33 )
        {
          v17 = v15;
          if ( v33 < v22 )
            goto LABEL_31;
          goto LABEL_60;
        }
        if ( (void **)v165.m128i_i64[1] == v15 )
          goto LABEL_31;
      }
      else if ( (void **)v165.m128i_i64[1] == v142 )
      {
        goto LABEL_31;
      }
      v143.m128_u64[0] = v22;
      v17 = (void **)std::_Rb_tree_decrement();
      if ( (unsigned __int64)v17[4] < v143.m128_u64[0] )
        goto LABEL_31;
    }
    else
    {
      v24 = (unsigned __int64)v17[4];
      if ( v22 < v24 )
      {
        if ( (void **)v165.m128i_i64[1] == v17 )
          goto LABEL_31;
        v143.m128_u64[0] = v22;
        v144.m128_u64[0] = v165.m128i_u64[1];
        v25 = std::_Rb_tree_decrement();
        v26 = v143.m128_u64[0];
        if ( *(_QWORD *)(v25 + 32) < v143.m128_u64[0] )
          goto LABEL_31;
        if ( v15 )
        {
          while ( 1 )
          {
            v27 = (unsigned __int64)v15[4];
            v28 = (void **)v15[3];
            if ( v143.m128_u64[0] < v27 )
              v28 = (void **)v15[2];
            if ( !v28 )
              break;
            v15 = v28;
          }
          v17 = v15;
          if ( v143.m128_u64[0] >= v27 )
          {
LABEL_30:
            if ( v27 < v26 )
            {
LABEL_31:
              v17 = v23;
              std::_Rb_tree_insert_and_rebalance();
              ++v167;
              goto LABEL_32;
            }
            goto LABEL_60;
          }
          if ( (void **)v144.m128_u64[0] == v15 )
            goto LABEL_31;
        }
        else if ( (void **)v144.m128_u64[0] == v142 )
        {
          goto LABEL_31;
        }
        v119 = std::_Rb_tree_decrement();
        v26 = v143.m128_u64[0];
        v27 = *(_QWORD *)(v119 + 32);
        v17 = (void **)v119;
        goto LABEL_30;
      }
      if ( v24 < v22 )
      {
        if ( v166 == v17 )
          goto LABEL_31;
        v143.m128_u64[0] = v22;
        v29 = std::_Rb_tree_increment();
        v30 = v143.m128_u64[0];
        if ( v143.m128_u64[0] < *(_QWORD *)(v29 + 32) )
          goto LABEL_31;
        if ( v15 )
        {
          while ( 1 )
          {
            v31 = (unsigned __int64)v15[4];
            v32 = (void **)v15[3];
            if ( v143.m128_u64[0] < v31 )
              v32 = (void **)v15[2];
            if ( !v32 )
              break;
            v15 = v32;
          }
          v17 = v15;
          if ( v143.m128_u64[0] >= v31 )
          {
LABEL_48:
            if ( v31 < v30 )
              goto LABEL_31;
            goto LABEL_60;
          }
          if ( (void **)v165.m128i_i64[1] == v15 )
            goto LABEL_31;
        }
        else if ( (void **)v165.m128i_i64[1] == v142 )
        {
          goto LABEL_31;
        }
        v141 = std::_Rb_tree_decrement();
        v30 = v143.m128_u64[0];
        v31 = *(_QWORD *)(v141 + 32);
        v17 = (void **)v141;
        goto LABEL_48;
      }
    }
LABEL_60:
    operator delete(v23, 0x30u);
LABEL_32:
    while ( 1 )
    {
      v17[5] = v12;
      std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_insert_unique<unsigned long long const&>();
      v12 += 11;
      if ( v12 == v11 )
        break;
      v15 = (void **)v165.m128i_i64[0];
      if ( !v165.m128i_i64[0] )
        goto LABEL_34;
      v16 = *v12;
      v17 = v142;
      v18 = (void **)v165.m128i_i64[0];
      do
      {
        while ( 1 )
        {
          v19 = v18[2];
          v20 = v18[3];
          if ( (unsigned __int64)v18[4] >= v16 )
            break;
          v18 = (void **)v18[3];
          if ( !v20 )
            goto LABEL_17;
        }
        v17 = v18;
        v18 = (void **)v18[2];
      }
      while ( v19 );
LABEL_17:
      if ( v17 == v142 || v16 < (unsigned __int64)v17[4] )
        goto LABEL_19;
    }
  }
  *(_DWORD *)v173 = 0;
  v174 = v173;
  v175 = 0;
  *(__m128i *)&v173[8] = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v173);
  first_seg = get_first_seg();
  v158 = nullptr;
  next_seg = first_seg;
  m128i_i8 = nullptr;
  v154 = nullptr;
  v157 = &v161;
  while ( next_seg )
  {
    v39 = *(_BYTE *)(next_seg + 42);
    if ( (v39 & 2) == 0 && *(_BYTE *)(next_seg + 184) != 3 || (v39 & 1) != 0 )
      goto LABEL_65;
    *(_OWORD *)s1_8 = 0;
    s1 = nullptr;
    v144.m128_u64[0] = (unsigned __int64)&v172;
    get_segm_name();
    if ( !s1_8[0] )
    {
      v37 = _qstring<char>::c_str(void)const::nullstr;
LABEL_72:
      if ( strcmp(v37, ".rdata")
        && strcmp(v37, "__const")
        && strcmp(v37, "__DATA_CONST")
        && *(_BYTE *)(next_seg + 184) != 3 )
      {
LABEL_74:
        if ( s1 )
          goto LABEL_64;
        goto LABEL_65;
      }
      goto LABEL_73;
    }
    v37 = s1;
    if ( !strcmp(s1, ".data.rel.ro") || !strcmp(v37, ".data.rel.ro.local") )
    {
      v38 = *(_QWORD *)(next_seg + 8);
      if ( v38 <= 7 )
        goto LABEL_64;
      goto LABEL_76;
    }
    if ( strcmp(v37, ".rodata") )
      goto LABEL_72;
LABEL_73:
    v38 = *(_QWORD *)(next_seg + 8);
    if ( v38 <= 7 )
      goto LABEL_74;
LABEL_76:
    v40 = *(_QWORD *)next_seg;
    v149 = v38 - 8;
    if ( v40 < v38 - 8 )
    {
      v41 = v40 + 8;
      v147 = &v172;
      while ( 2 )
      {
        v144.m128_u64[0] = (unsigned __int64)v147;
        qword = get_qword();
        v43 = (_QWORD *)v169.m128i_i64[0];
        v44 = qword;
        if ( v169.m128i_i64[0] )
        {
          v45 = v145;
          do
          {
            while ( 1 )
            {
              v46 = v43[2];
              v47 = v43[3];
              if ( v43[4] >= v44 )
                break;
              v43 = (_QWORD *)v43[3];
              if ( !v47 )
                goto LABEL_83;
            }
            v45 = v43;
            v43 = (_QWORD *)v43[2];
          }
          while ( v46 );
LABEL_83:
          if ( v45 != v145 && v44 >= v45[4] )
          {
            v160 = v41 - 8;
            v144.m128_u64[0] = (unsigned __int64)v147;
            std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_insert_unique<unsigned long long const&>();
            if ( v48 == 1 && v41 - 8 > 7 )
            {
              v151 = get_qword();
              v49 = (ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *)v41;
              v146 = nullptr;
              v150 = nullptr;
              v152 = v41;
              do
              {
                v50 = v49;
                if ( !(unsigned __int8)is_loaded() )
                  break;
                v50 = v49;
                v51 = get_qword();
                v161 = v51;
                if ( !v51 )
                  break;
                v50 = (ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *)v51;
                v143.m128_u64[0] = v51;
                v52 = getseg();
                if ( !v52 || (*(_BYTE *)(v52 + 42) & 1) == 0 )
                  break;
                if ( v146 == v43 )
                {
                  v50 = (ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *)&v179;
                  v177 = v44;
                  v176 = v152;
                  v178 = v151;
                  v179 = v150;
                  v180 = v146;
                  v181 = v146;
                  std::vector<unsigned long long>::_M_realloc_append<unsigned long long const&>();
                  v44 = v177;
                  v43 = v180;
                  v152 = v176;
                  v151 = v178;
                  v150 = v179;
                  v146 = v181;
                }
                else
                {
                  *v43++ = v143.m128_u64[0];
                }
                v49 = (ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *)((char *)v49 + 8);
              }
              while ( (ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *)(v41 + 2048) != v49 );
              if ( v43 == v150 )
              {
                if ( v43 )
                  operator delete(v43, (char *)v146 - (char *)v43);
              }
              else
              {
                v53 = m128i_i8;
                if ( m128i_i8 != v158 )
                {
                  v54 = v152;
                  *((_QWORD *)m128i_i8 + 3) = v150;
                  v55 = v53 + 48;
                  v56 = v146;
                  *((_QWORD *)v55 - 5) = v44;
                  *((_QWORD *)v55 - 6) = v54;
                  v57 = v151;
                  *((_QWORD *)v55 - 2) = v43;
                  *((_QWORD *)v55 - 4) = v57;
                  *((_QWORD *)v55 - 1) = v56;
                  m128i_i8 = v55;
                  if ( v41 >= v149 )
                    break;
                  goto LABEL_99;
                }
                v123 = 0xAAAAAAAAAAAAAAABLL * ((m128i_i8 - (_BYTE *)v154) >> 4);
                if ( v123 == 0x2AAAAAAAAAAAAAALL )
                  ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::run_recovery_pipeline(v50);
                v124 = 1;
                v159 = m128i_i8 - (_BYTE *)v154;
                if ( v123 )
                  v124 = 0xAAAAAAAAAAAAAAABLL * ((m128i_i8 - (_BYTE *)v154) >> 4);
                v125 = v123 + v124;
                if ( v125 > 0x2AAAAAAAAAAAAAALL )
                  v125 = 0x2AAAAAAAAAAAAAALL;
                v143.m128_u64[0] = 48 * v125;
                v126 = operator new(48 * v125);
                v127 = v159;
                v128 = (__m128i *)v126;
                v129 = v143.m128_u64[0];
                *(_QWORD *)(v126 + v159) = v152;
                v130 = v151;
                *(_QWORD *)(v126 + v127 + 32) = v43;
                v131 = v126 + v129;
                v132 = (const __m128i *)m128i_i8;
                *(_QWORD *)(v126 + v127 + 16) = v130;
                v133 = v150;
                *(_QWORD *)(v126 + v127 + 8) = v44;
                *(_QWORD *)(v126 + v127 + 24) = v133;
                *(_QWORD *)(v126 + v127 + 40) = v146;
                v134 = (const __m128i *)v154;
                if ( v132 == v154 )
                {
                  v140 = 0;
                  m128i_i8 = v128[3].m128i_i8;
                  if ( v154 )
LABEL_209:
                    operator delete(v154, v140);
                }
                else
                {
                  v135 = v128;
                  do
                  {
                    v136 = _mm_loadu_si128(v134);
                    v137 = v134[1].m128i_i64[0];
                    v134 += 3;
                    v135 += 3;
                    v135[-3] = v136;
                    v138 = _mm_loadu_si128((const __m128i *)((char *)v134 - 24));
                    v135[-2].m128i_i64[0] = v137;
                    v139 = v134[-1].m128i_i64[1];
                    *(__m128i *)((char *)v135 - 24) = v138;
                    v135[-1].m128i_i64[1] = v139;
                  }
                  while ( v134 != v132 );
                  m128i_i8 = v128[3
                                * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)(m128i_i8 - 48 - (_BYTE *)v154) >> 4))
                                 & 0xFFFFFFFFFFFFFFFLL)
                                + 6].m128i_i8;
                  if ( v154 )
                  {
                    v140 = v158 - (_BYTE *)v154;
                    goto LABEL_209;
                  }
                }
                v154 = v128;
                v158 = (char *)v131;
              }
            }
          }
        }
        if ( v41 >= v149 )
          break;
LABEL_99:
        v41 += 8LL;
        continue;
      }
    }
    if ( s1 )
    {
LABEL_64:
      s1_8[0] = nullptr;
      qfree();
    }
LABEL_65:
    next_seg = get_next_seg();
  }
  v58 = *(_QWORD *)&v173[8];
  while ( v58 )
  {
    std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(*(_QWORD **)(v58 + 24));
    v59 = (void *)v58;
    v58 = *(_QWORD *)(v58 + 16);
    operator delete(v59, 0x28u);
  }
  v60 = (char *)v154;
  if ( m128i_i8 == v154 )
  {
LABEL_122:
    if ( !v154 )
      goto LABEL_124;
    goto LABEL_123;
  }
  v61 = 0;
  do
  {
    v62 = (void **)v165.m128i_i64[0];
    if ( !v165.m128i_i64[0] )
      break;
    v63 = *((_QWORD *)v60 + 1);
    v64 = v142;
    do
    {
      while ( 1 )
      {
        v65 = v62[2];
        v66 = v62[3];
        if ( (unsigned __int64)v62[4] >= v63 )
          break;
        v62 = (void **)v62[3];
        if ( !v66 )
          goto LABEL_114;
      }
      v64 = v62;
      v62 = (void **)v62[2];
    }
    while ( v65 );
LABEL_114:
    if ( v64 != v142 && v63 >= (unsigned __int64)v64[4] )
    {
      v67 = *((char **)this + 7);
      v68 = *((_QWORD *)this + 8);
      if ( v67 == (char *)v68 )
      {
        v83 = *((_BYTE **)this + 6);
        v84 = 0x6DB6DB6DB6DB6DB7LL * ((v67 - v83) >> 3);
        if ( v84 == 0x249249249249249LL )
          std::__throw_length_error("vector::_M_realloc_append");
        v85 = 1;
        v144.m128_u64[0] = v67 - v83;
        if ( v84 )
          v85 = 0x6DB6DB6DB6DB6DB7LL * ((v67 - v83) >> 3);
        v145 = v83;
        v143.m128_u64[0] = v68;
        v86 = v84 + v85;
        if ( v86 > 0x249249249249249LL )
          v86 = 0x249249249249249LL;
        v87 = 56 * v86;
        v88 = operator new(v87);
        v89 = v144.m128_u64[0];
        v90 = v64[5];
        v61 = 0;
        v91 = (char *)v145;
        v92 = _mm_loadu_si128((const __m128i *)(v60 + 24));
        *(_OWORD *)(v60 + 24) = 0;
        *(_QWORD *)(v88 + v89) = v90;
        v93 = *(_QWORD *)v60;
        *(_QWORD *)(v88 + v89 + 16) = v63;
        v94 = v143.m128_u64[0];
        *(_QWORD *)(v88 + v89 + 8) = v93;
        v95 = *((_QWORD *)v60 + 2);
        *(__m128i *)(v88 + v89 + 32) = v92;
        *(_QWORD *)(v88 + v89 + 24) = v95;
        v96 = *((_QWORD *)v60 + 5);
        *((_QWORD *)v60 + 5) = 0;
        *(_QWORD *)(v88 + v89 + 48) = v96;
        if ( v67 == v91 )
        {
          v104 = v88;
        }
        else
        {
          v97 = v91;
          v98 = v88;
          do
          {
            v99 = *(_QWORD *)v97;
            v100 = _mm_loadu_si128((const __m128i *)(v97 + 8));
            v97 += 56;
            v98 += 56;
            *(_QWORD *)(v98 - 56) = v99;
            v101 = *((_QWORD *)v97 - 4);
            *(__m128i *)(v98 - 48) = v100;
            v102 = _mm_loadu_si128((const __m128i *)(v97 - 24));
            *(_QWORD *)(v98 - 32) = v101;
            v103 = *((_QWORD *)v97 - 1);
            *(__m128i *)(v98 - 24) = v102;
            *(_QWORD *)(v98 - 8) = v103;
          }
          while ( v67 != v97 );
          v104 = v88
               + 56 * (((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v67 - 56 - v91) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
        }
        v105 = v104 + 56;
        if ( v91 )
        {
          v143.m128_u64[0] = v88;
          operator delete(v91, v94 - (_QWORD)v91);
          v88 = v143.m128_u64[0];
          v61 = 0;
        }
        *((_QWORD *)this + 6) = v88;
        *((_QWORD *)this + 7) = v105;
        *((_QWORD *)this + 8) = v87 + v88;
      }
      else
      {
        v69 = v64[5];
        v70 = _mm_loadu_si128((const __m128i *)(v60 + 24));
        *((_QWORD *)v67 + 2) = v63;
        v71 = v67 + 56;
        *(_OWORD *)(v60 + 24) = v61;
        *(v71 - 7) = v69;
        v72 = *(_QWORD *)v60;
        *(__m128i *)(v71 - 3) = v70;
        *(v71 - 6) = v72;
        *(v71 - 4) = *((_QWORD *)v60 + 2);
        v73 = *((_QWORD *)v60 + 5);
        *((_QWORD *)v60 + 5) = 0;
        *(v71 - 1) = v73;
        *((_QWORD *)this + 7) = v71;
      }
    }
    v60 += 48;
  }
  while ( v60 != m128i_i8 );
  v74 = (char *)v154;
  do
  {
    while ( 1 )
    {
      v75 = *((void **)v74 + 3);
      if ( !v75 )
        break;
      v76 = *((_QWORD *)v74 + 5);
      v74 += 48;
      operator delete(v75, v76 - (_QWORD)v75);
      if ( v74 == m128i_i8 )
        goto LABEL_122;
    }
    v74 += 48;
  }
  while ( m128i_i8 != v74 );
  if ( v154 )
LABEL_123:
    operator delete(v154, v158 - (_BYTE *)v154);
LABEL_124:
  v77 = *((_QWORD **)this + 7);
  v78 = *((_QWORD **)this + 6);
  v79 = 0x6DB6DB6DB6DB6DB7LL * (v77 - v78);
  *((_DWORD *)this + 2) = v79;
  if ( !(_BYTE)v156 )
  {
    LODWORD(m128i_i8) = 0;
    LODWORD(v146) = 0;
    LODWORD(v147) = 0;
    if ( v77 == v78 )
    {
LABEL_192:
      *((_DWORD *)this + 3) = (_DWORD)v146;
      *((_DWORD *)this + 4) = (_DWORD)v147;
      *((_DWORD *)this + 5) = (_DWORD)m128i_i8;
      goto LABEL_127;
    }
    v142 = &v185;
    while ( 1 )
    {
      ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::sanitize_ident(v142, (unsigned __int8 **)(*v78 + 16LL));
      if ( (unsigned __int64)(v186 - 0x7FFFFFFFFFFFFFF8LL) <= 6 )
        std::__throw_length_error("basic_string::append");
      v106 = std::string::_M_append();
      v107 = v106 + 16;
      v143.m128_u64[0] = (unsigned __int64)v184;
      v182 = v184;
      if ( *(_QWORD *)v106 == v106 + 16 )
      {
        v115 = (_DWORD *)v143.m128_u64[0];
        v116 = (_DWORD *)(v106 + 16);
        v117 = *(_QWORD *)(v106 + 8) + 1LL;
        if ( (unsigned int)v117 >= 8 )
        {
          LODWORD(v120) = 0;
          do
          {
            v121 = (unsigned int)v120;
            v122 = v143.m128_u64[0];
            v120 = (unsigned int)(v120 + 8);
            *(_QWORD *)(v143.m128_u64[0] + v121) = *(_QWORD *)(v107 + v121);
          }
          while ( (unsigned int)v120 < ((unsigned int)v117 & 0xFFFFFFF8) );
          v115 = (_DWORD *)(v122 + v120);
          v116 = (_DWORD *)(v107 + v120);
        }
        v118 = 0;
        if ( (v117 & 4) != 0 )
        {
          *v115 = *v116;
          v118 = 4;
        }
        if ( (v117 & 2) != 0 )
        {
          *(_WORD *)((char *)v115 + v118) = *(_WORD *)((char *)v116 + v118);
          v118 += 2;
        }
        if ( (v117 & 1) != 0 )
          *((_BYTE *)v115 + v118) = *((_BYTE *)v116 + v118);
      }
      else
      {
        v182 = *(void **)v106;
        v184[0] = *(_QWORD *)(v106 + 16);
      }
      v108 = *(_QWORD *)(v106 + 8);
      *(_QWORD *)v106 = v107;
      *(_BYTE *)(v106 + 16) = 0;
      v109 = v185;
      *(_QWORD *)(v106 + 8) = 0;
      v183 = v108;
      v144.m128_u64[0] = (unsigned __int64)v187;
      if ( v109 != v187 )
        operator delete(v109, v187[0] + 1LL);
      if ( v78[3] )
      {
        qsnprintf();
        v110 = strlen(s);
        if ( 0x7FFFFFFFFFFFFFFELL - v183 < v110 )
          std::__throw_length_error("basic_string::append");
        std::string::_M_append();
      }
      LOBYTE(v145) = set_name();
      if ( (_BYTE)v155 )
        break;
LABEL_158:
      if ( v182 != (void *)v143.m128_u64[0] )
        operator delete(v182, v184[0] + 1LL);
      v78 += 7;
      LODWORD(v146) = (_DWORD)v146 + 1;
      LODWORD(v147) = (unsigned __int8)v145 + (_DWORD)v147;
      if ( v77 == v78 )
        goto LABEL_192;
    }
    v111 = 0;
    for ( i = (__int64)(v78[5] - v78[4]) >> 3; ; i = (__int64)(v78[5] - v78[4]) >> 3 )
    {
      if ( v111 >= i )
        goto LABEL_158;
      if ( get_func() )
      {
        v172 = nullptr;
        *(_OWORD *)v173 = 0;
        get_func_name();
        if ( *(_QWORD *)v173 <= 4u )
        {
          if ( v172 )
            goto LABEL_176;
        }
        else
        {
          if ( *v172 != 1600288115 )
            goto LABEL_176;
          qsnprintf();
          ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::sanitize_ident(
            v142,
            (unsigned __int8 **)(*v78 + 16LL));
          if ( (unsigned __int64)(v186 - 0x7FFFFFFFFFFFFFF7LL) <= 7 )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append();
          v113 = strlen(s);
          if ( 0x7FFFFFFFFFFFFFFELL - v186 < v113 )
            JUMPOUT(0x152AB3);
          std::string::_M_append();
          v114 = (unsigned __int8)set_name();
          if ( v185 != (void *)v144.m128_u64[0] )
            operator delete(v185, v187[0] + 1LL);
          LODWORD(m128i_i8) = v114 + (_DWORD)m128i_i8;
          if ( v172 )
          {
LABEL_176:
            *(_QWORD *)v173 = 0;
            qfree();
          }
        }
      }
      ++v111;
    }
  }
  v80 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
  *((_DWORD *)this + 4) = v79;
  for ( *((_DWORD *)this + 3) = -1171354717 * (v80 >> 3); v78 != v77; *((_DWORD *)this + 5) += (v81 - *(v78 - 3)) >> 3 )
  {
    v81 = v78[5];
    v78 += 7;
  }
LABEL_127:
  std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(v169.m128i_i64[0]);
  std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::TypeInfoNode const*>,std::_Select1st<std::pair<unsigned long long const,ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::TypeInfoNode const*>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::TypeInfoNode const*>>>::_M_erase(v165.m128i_i64[0]);
  return this;
}

