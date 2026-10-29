__int64 __fastcall ida_mcp::tools::switches::`anonymous namespace'::handle_find_switches_in_function(
        __int64 a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  size_t v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbp
  size_t v12; // rdx
  int v13; // eax
  char v14; // al
  char *v15; // r12
  int *v16; // rax
  int *v17; // r13
  __int64 v18; // rbp
  std::runtime_error *exception; // rax
  unsigned __int64 *func; // r14
  _QWORD *v21; // rdx
  size_t v22; // rax
  _QWORD *v23; // r15
  unsigned __int64 head; // rbx
  size_t v25; // rax
  unsigned int v26; // r13d
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // r12
  size_t v31; // rcx
  __int64 v32; // rax
  char v33; // si
  __int64 v34; // rdx
  size_t v35; // rax
  unsigned int v36; // ecx
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // r12
  size_t v41; // rcx
  __int64 v42; // rax
  char v43; // si
  __int64 v44; // rdx
  __int64 v45; // rbp
  __int64 v46; // rax
  char v47; // si
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 *v50; // rbx
  _OWORD *v51; // rax
  char *v52; // rdx
  __m128i v53; // xmm0
  char *v54; // rax
  __int64 v55; // rdx
  char *v56; // rax
  unsigned int v57; // r12d
  _QWORD *v58; // rdx
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  _QWORD *v61; // rcx
  char *v62; // rsi
  __int64 v63; // rax
  _BYTE *v64; // r12
  char *v65; // r13
  _QWORD *v66; // rax
  _BYTE *v67; // rdi
  __int64 *v68; // rbx
  __m128i v69; // xmm0
  size_t v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r15
  char *v76; // r13
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned __int64 v82; // rdx
  char *v83; // rax
  char *v84; // r12
  unsigned int v85; // ecx
  unsigned int v86; // ecx
  unsigned int v87; // eax
  __int64 v88; // rsi
  unsigned __int64 v89; // rdx
  char *v90; // rax
  char *v91; // r12
  unsigned int v92; // r13d
  unsigned int v93; // r13d
  unsigned int v94; // eax
  __int64 v95; // rcx
  unsigned __int64 v96; // rsi
  char *v97; // rdx
  char *v98; // r8
  unsigned int v99; // eax
  unsigned int v100; // eax
  unsigned int v101; // edx
  __int64 v102; // rdi
  unsigned __int64 v103; // rsi
  char *v104; // rdx
  char *v105; // r8
  unsigned int v106; // eax
  unsigned int v107; // eax
  unsigned int v108; // edx
  __int64 v109; // rdi
  char *v110; // r12
  size_t v111; // rbp
  _QWORD *v112; // rdi
  _QWORD *v113; // rdx
  __int64 v114; // rax
  char *v115; // rax
  unsigned int v116; // r12d
  unsigned __int64 v117; // rcx
  char *v118; // rdx
  char *v119; // rbx
  unsigned int v120; // eax
  unsigned int v121; // edx
  __int64 v122; // rsi
  _QWORD *v123; // rax
  unsigned int v124; // edi
  unsigned __int64 v125; // r8
  char *v126; // rcx
  char *v127; // r9
  unsigned int v128; // edx
  unsigned int v129; // ecx
  __int64 v130; // rdi
  unsigned __int64 v131; // rsi
  char *v132; // rax
  char *v133; // rbx
  unsigned int v134; // eax
  unsigned int v135; // eax
  unsigned int v136; // edx
  __int64 v137; // rcx
  char v138; // [rsp+1Fh] [rbp-309h]
  int v139[4]; // [rsp+20h] [rbp-308h] BYREF
  __int64 v140; // [rsp+30h] [rbp-2F8h]
  int v141[2]; // [rsp+38h] [rbp-2F0h]
  int v142[2]; // [rsp+40h] [rbp-2E8h]
  char v143[8]; // [rsp+48h] [rbp-2E0h]
  int v144[2]; // [rsp+50h] [rbp-2D8h]
  char v145[8]; // [rsp+58h] [rbp-2D0h]
  void **v146; // [rsp+60h] [rbp-2C8h]
  char *v147; // [rsp+68h] [rbp-2C0h]
  char v148; // [rsp+70h] [rbp-2B8h] BYREF
  _QWORD *v149; // [rsp+78h] [rbp-2B0h]
  char v150; // [rsp+80h] [rbp-2A8h]
  __int64 v151; // [rsp+88h] [rbp-2A0h]
  size_t v152; // [rsp+90h] [rbp-298h]
  __int64 v153; // [rsp+98h] [rbp-290h]
  char *v154; // [rsp+A0h] [rbp-288h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-280h]
  __int128 v156; // [rsp+B8h] [rbp-270h]
  __int64 v157; // [rsp+C8h] [rbp-260h]
  __int64 v158; // [rsp+D0h] [rbp-258h]
  __int64 v159; // [rsp+D8h] [rbp-250h]
  __int64 v160; // [rsp+E0h] [rbp-248h]
  __int64 v161; // [rsp+E8h] [rbp-240h]
  __int64 v162; // [rsp+F0h] [rbp-238h]
  __int64 v163; // [rsp+F8h] [rbp-230h]
  __int64 v164; // [rsp+100h] [rbp-228h]
  __int128 v165; // [rsp+108h] [rbp-220h]
  void *src; // [rsp+120h] [rbp-208h]
  char *v167; // [rsp+128h] [rbp-200h]
  int v168[2]; // [rsp+130h] [rbp-1F8h] BYREF
  void *v169; // [rsp+140h] [rbp-1E8h] BYREF
  char *v170; // [rsp+148h] [rbp-1E0h]
  _QWORD v171[2]; // [rsp+150h] [rbp-1D8h] BYREF
  char v172; // [rsp+160h] [rbp-1C8h] BYREF
  int v173[4]; // [rsp+168h] [rbp-1C0h]
  char v174; // [rsp+178h] [rbp-1B0h]
  int v175[4]; // [rsp+180h] [rbp-1A8h]
  char v176; // [rsp+190h] [rbp-198h] BYREF
  int v177[4]; // [rsp+198h] [rbp-190h] BYREF
  char v178; // [rsp+1A8h] [rbp-180h]
  __m128i v179; // [rsp+1B0h] [rbp-178h]
  char v180; // [rsp+1C0h] [rbp-168h] BYREF
  __int128 v181; // [rsp+1C8h] [rbp-160h]
  char v182; // [rsp+1D8h] [rbp-150h]
  __int64 v183; // [rsp+1E0h] [rbp-148h]
  __int64 v184; // [rsp+1E8h] [rbp-140h]
  void *v185; // [rsp+1F0h] [rbp-138h] BYREF
  __int128 s2; // [rsp+1F8h] [rbp-130h] BYREF
  __int64 v187; // [rsp+218h] [rbp-110h]
  void *v188; // [rsp+220h] [rbp-108h] BYREF
  size_t v189; // [rsp+228h] [rbp-100h]
  size_t v190; // [rsp+230h] [rbp-F8h] BYREF
  _QWORD v191[3]; // [rsp+238h] [rbp-F0h] BYREF
  _QWORD v192[3]; // [rsp+250h] [rbp-D8h] BYREF
  __int64 v193; // [rsp+268h] [rbp-C0h] BYREF
  __int64 v194; // [rsp+278h] [rbp-B0h]
  char s[24]; // [rsp+280h] [rbp-A8h] BYREF
  _BYTE v196[8]; // [rsp+298h] [rbp-90h]
  char v197[24]; // [rsp+2A0h] [rbp-88h] BYREF
  _BYTE v198[8]; // [rsp+2B8h] [rbp-70h]
  char v199[40]; // [rsp+2C0h] [rbp-68h] BYREF
  unsigned __int64 v200; // [rsp+2E8h] [rbp-40h]

  *(_QWORD *)v143 = a1;
  v200 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v185 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0xC2DBE);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 16);
  v6 = v4 + 8;
  if ( v5 )
  {
    v7 = v4 + 8;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v5 + 40);
        if ( !v10 )
          break;
        v8 = 7;
        if ( v10 <= 7 )
          v8 = *(_QWORD *)(v5 + 40);
        v9 = memcmp(*(const void **)(v5 + 32), (char *)&s2 + 8, v8);
        if ( v9 || (v9 = v10 - 7, (__int64)(v10 - 7) <= 0x7FFFFFFF) )
        {
          if ( v9 < 0 )
            break;
        }
        v7 = v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v5 )
          goto LABEL_12;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v5 );
LABEL_12:
    if ( v6 != v7 )
    {
      v11 = *(_QWORD *)(v7 + 40);
      if ( v11 )
      {
        v12 = 7;
        if ( v11 <= 7 )
          v12 = *(_QWORD *)(v7 + 40);
        v13 = memcmp((char *)&s2 + 8, *(const void **)(v7 + 32), v12);
        if ( v13 || (v13 = 7 - v11, (__int64)(7 - v11) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v13 >= 0 )
            v6 = v7;
        }
      }
      else
      {
        v6 = v7;
      }
    }
  }
  BYTE8(s2) = 0;
  *(_QWORD *)v142 = &v185;
  v14 = *(_BYTE *)(v6 + 64);
  v185 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  LOBYTE(v146) = v14;
  if ( v14 != 3 )
    JUMPOUT(0xC2F42);
  std::string::_M_assign();
  v15 = (char *)v185;
  if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v185 == 48 && (*((_BYTE *)v185 + 1) & 0xDF) == 0x58 )
    v15 = (char *)v185 + 2;
  v16 = __errno_location();
  *v16 = 0;
  v17 = v16;
  *(_QWORD *)v139 = &v154;
  v18 = __isoc23_strtoull();
  if ( v15 == v154 || *v154 || *v17 == 34 && v18 == -1 )
  {
    if ( v185 != (char *)&s2 + 8 )
      operator delete(v185, *((_QWORD *)&s2 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0xC31B0);
  }
  if ( v185 != (char *)&s2 + 8 )
    operator delete(v185, *((_QWORD *)&s2 + 1) + 1LL);
  func = (unsigned __int64 *)get_func();
  if ( !func )
    JUMPOUT(0xC2EB5);
  v154 = nullptr;
  si128 = 0;
  if ( get_func_name() <= 0 )
  {
    qsnprintf();
    *(_QWORD *)v144 = v168;
    src = v168;
    v22 = strlen(v199);
    v152 = v22;
    v116 = v22;
    if ( v22 > 0xF )
    {
      v123 = (_QWORD *)std::string::_M_create();
      src = v123;
      *(_QWORD *)v168 = v152;
    }
    else
    {
      if ( v22 == 1 )
      {
        LOBYTE(v168[0]) = v199[0];
        goto LABEL_153;
      }
      if ( !v22 )
      {
LABEL_153:
        v21 = *(_QWORD **)v144;
        goto LABEL_37;
      }
      v123 = *(_QWORD **)v144;
    }
    if ( v116 >= 8 )
    {
      v131 = (unsigned __int64)(v123 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v123 = *(_QWORD *)v199;
      *(_QWORD *)((char *)v123 + v116 - 8) = *(_QWORD *)&v198[v116];
      v132 = (char *)v123 - v131;
      v133 = (char *)(v199 - v132);
      v134 = (v116 + (_DWORD)v132) & 0xFFFFFFF8;
      if ( v134 >= 8 )
      {
        v135 = v134 & 0xFFFFFFF8;
        v136 = 0;
        do
        {
          v137 = v136;
          v136 += 8;
          *(_QWORD *)(v131 + v137) = *(_QWORD *)&v133[v137];
        }
        while ( v136 < v135 );
      }
    }
    else if ( (v116 & 4) != 0 )
    {
      *(_DWORD *)v123 = *(_DWORD *)v199;
      *(_DWORD *)((char *)v123 + v116 - 4) = *(_DWORD *)&v198[v116 + 4];
    }
    else if ( v116 )
    {
      *(_BYTE *)v123 = v199[0];
      if ( (v116 & 2) != 0 )
        *(_WORD *)((char *)v123 + v116 - 2) = *(_WORD *)&v198[v116 + 6];
    }
    v22 = v152;
    v21 = src;
    goto LABEL_37;
  }
  if ( si128.m128i_i64[0] )
  {
    v110 = v154;
    *(_QWORD *)v144 = v168;
    src = v168;
    if ( !v154 )
      JUMPOUT(0xC320C);
    v22 = strlen(v154);
    v152 = v22;
    v111 = v22;
    if ( v22 <= 0xF )
    {
      if ( v22 == 1 )
      {
        LOBYTE(v168[0]) = *v110;
        v21 = *(_QWORD **)v144;
        goto LABEL_37;
      }
      v112 = *(_QWORD **)v144;
      if ( !v22 )
        goto LABEL_36;
    }
    else
    {
      src = (void *)std::string::_M_create();
      v112 = src;
      *(_QWORD *)v168 = v152;
    }
    memcpy(v112, v110, v111);
    v22 = v152;
    v21 = src;
    goto LABEL_37;
  }
  *(_QWORD *)v144 = v168;
  src = v168;
LABEL_36:
  v21 = *(_QWORD **)v144;
  v22 = 0;
LABEL_37:
  v167 = (char *)v22;
  *((_BYTE *)v21 + v22) = 0;
  if ( v154 )
  {
    si128.m128i_i64[0] = 0;
    qfree();
  }
  v148 = 0;
  v149 = nullptr;
  *(_QWORD *)v145 = &v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v23 = v149;
  head = *func;
  v138 = v148;
  while ( head < func[1] )
  {
    v156 = -1;
    v154 = (char *)0x800000;
    v157 = 0;
    v158 = 0;
    v159 = 0;
    v160 = 0xFFFFFFFFLL;
    v161 = 0;
    v162 = 2;
    v163 = -1;
    v164 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3E2390);
    v165 = 0;
    if ( get_switch_info() <= 0 )
      goto LABEL_62;
    v151 = 0;
    qsnprintf();
    v140 = (__int64)&v188;
    v188 = &v190;
    v25 = strlen(s);
    v152 = v25;
    v26 = v25;
    if ( v25 > 0xF )
    {
      v78 = (_QWORD *)std::string::_M_create();
      v188 = v78;
      v190 = v152;
    }
    else
    {
      if ( v25 == 1 )
      {
        LOBYTE(v190) = s[0];
LABEL_45:
        v27 = &v190;
        goto LABEL_46;
      }
      if ( !v25 )
        goto LABEL_45;
      v78 = &v190;
    }
    if ( v26 >= 8 )
    {
      *v78 = *(_QWORD *)s;
      *(_QWORD *)((char *)v78 + v26 - 8) = *(_QWORD *)&s[v26 - 8];
      v89 = (unsigned __int64)(v78 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v90 = (char *)v78 - v89;
      v91 = (char *)(s - v90);
      v92 = ((_DWORD)v90 + v26) & 0xFFFFFFF8;
      if ( v92 >= 8 )
      {
        v93 = v92 & 0xFFFFFFF8;
        v94 = 0;
        do
        {
          v95 = v94;
          v94 += 8;
          *(_QWORD *)(v89 + v95) = *(_QWORD *)&v91[v95];
        }
        while ( v94 < v93 );
      }
    }
    else if ( (v26 & 4) != 0 )
    {
      *(_DWORD *)v78 = *(_DWORD *)s;
      *(_DWORD *)((char *)v78 + v26 - 4) = *(_DWORD *)&s[v26 - 4];
    }
    else if ( v26 )
    {
      *(_BYTE *)v78 = s[0];
      if ( (v26 & 2) != 0 )
        *(_WORD *)((char *)v78 + v26 - 2) = *(_WORD *)&s[v26 - 2];
    }
    v25 = v152;
    v27 = v188;
LABEL_46:
    v189 = v25;
    *((_BYTE *)v27 + v25) = 0;
    v152 = 0;
    v153 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v28 = (_QWORD *)operator new(0x20u);
    v29 = v28 + 2;
    v30 = v28;
    v31 = v189;
    *v28 = v28 + 2;
    if ( v188 == &v190 )
    {
      v80 = v31 + 1;
      if ( (unsigned int)(v31 + 1) >= 8 )
      {
        v30[2] = v190;
        *(_QWORD *)((char *)v29 + v80 - 8) = *(size_t *)((char *)&v189 + v80);
        v103 = (unsigned __int64)(v30 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v104 = (char *)v29 - v103;
        v105 = (char *)((char *)&v190 - v104);
        v106 = ((_DWORD)v104 + v80) & 0xFFFFFFF8;
        if ( v106 >= 8 )
        {
          v107 = v106 & 0xFFFFFFF8;
          v108 = 0;
          do
          {
            v109 = v108;
            v108 += 8;
            *(_QWORD *)(v103 + v109) = *(_QWORD *)&v105[v109];
          }
          while ( v108 < v107 );
        }
      }
      else if ( (v80 & 4) != 0 )
      {
        *((_DWORD *)v30 + 4) = v190;
        *(_DWORD *)((char *)v29 + v80 - 4) = *(_DWORD *)((char *)&v189 + v80 + 4);
      }
      else if ( (_DWORD)v31 != -1 )
      {
        *((_BYTE *)v30 + 16) = v190;
        if ( (v80 & 2) != 0 )
          *(_WORD *)((char *)v29 + v80 - 2) = *(_WORD *)((char *)&v189 + v80 + 6);
      }
    }
    else
    {
      *v28 = v188;
      v28[2] = v190;
    }
    v30[1] = v31;
    v188 = &v190;
    v189 = 0;
    LOBYTE(v190) = 0;
    v150 = 0;
    v32 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v33 = *(_BYTE *)v32;
    v34 = *(_QWORD *)(v32 + 8);
    *(_BYTE *)v32 = 3;
    *(_QWORD *)(v32 + 8) = v30;
    LOBYTE(v152) = v33;
    v153 = v34;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v188 != &v190 )
      operator delete(v188, v190 + 1);
    qsnprintf();
    v188 = &v190;
    v35 = strlen(v197);
    v152 = v35;
    v36 = v35;
    if ( v35 > 0xF )
    {
      *(_QWORD *)v141 = v35;
      v79 = (_QWORD *)std::string::_M_create();
      v188 = v79;
      v36 = v141[0];
      v190 = v152;
    }
    else
    {
      if ( v35 == 1 )
      {
        LOBYTE(v190) = v197[0];
LABEL_53:
        v37 = &v190;
        goto LABEL_54;
      }
      if ( !v35 )
        goto LABEL_53;
      v79 = &v190;
    }
    if ( v36 >= 8 )
    {
      *v79 = *(_QWORD *)v197;
      *(_QWORD *)((char *)v79 + v36 - 8) = *(_QWORD *)&v196[v36];
      v82 = (unsigned __int64)(v79 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v83 = (char *)v79 - v82;
      v84 = (char *)(v197 - v83);
      v85 = ((_DWORD)v83 + v36) & 0xFFFFFFF8;
      if ( v85 >= 8 )
      {
        v86 = v85 & 0xFFFFFFF8;
        v87 = 0;
        do
        {
          v88 = v87;
          v87 += 8;
          *(_QWORD *)(v82 + v88) = *(_QWORD *)&v84[v88];
        }
        while ( v87 < v86 );
      }
    }
    else if ( (v36 & 4) != 0 )
    {
      *(_DWORD *)v79 = *(_DWORD *)v197;
      *(_DWORD *)((char *)v79 + v36 - 4) = *(_DWORD *)&v196[v36 + 4];
    }
    else if ( v36 )
    {
      *(_BYTE *)v79 = v197[0];
      if ( (v36 & 2) != 0 )
        *(_WORD *)((char *)v79 + v36 - 2) = *(_WORD *)&v196[v36 + 6];
    }
    v35 = v152;
    v37 = v188;
LABEL_54:
    v189 = v35;
    *((_BYTE *)v37 + v35) = 0;
    v152 = 0;
    v153 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v38 = (_QWORD *)operator new(0x20u);
    v39 = v38 + 2;
    v40 = v38;
    v41 = v189;
    *v38 = v38 + 2;
    if ( v188 == &v190 )
    {
      v81 = v41 + 1;
      if ( (unsigned int)(v41 + 1) >= 8 )
      {
        v40[2] = v190;
        *(_QWORD *)((char *)v39 + v81 - 8) = *(size_t *)((char *)&v189 + v81);
        v96 = (unsigned __int64)(v40 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v97 = (char *)v39 - v96;
        v98 = (char *)((char *)&v190 - v97);
        v99 = ((_DWORD)v97 + v81) & 0xFFFFFFF8;
        if ( v99 >= 8 )
        {
          v100 = v99 & 0xFFFFFFF8;
          v101 = 0;
          do
          {
            v102 = v101;
            v101 += 8;
            *(_QWORD *)(v96 + v102) = *(_QWORD *)&v98[v102];
          }
          while ( v101 < v100 );
        }
      }
      else if ( (v81 & 4) != 0 )
      {
        *((_DWORD *)v40 + 4) = v190;
        *(_DWORD *)((char *)v39 + v81 - 4) = *(_DWORD *)((char *)&v189 + v81 + 4);
      }
      else if ( (_DWORD)v41 != -1 )
      {
        *((_BYTE *)v40 + 16) = v190;
        if ( (v81 & 2) != 0 )
          *(_WORD *)((char *)v39 + v81 - 2) = *(_WORD *)((char *)&v189 + v81 + 6);
      }
    }
    else
    {
      *v38 = v188;
      v38[2] = v190;
    }
    v40[1] = v41;
    v188 = &v190;
    v189 = 0;
    LOBYTE(v190) = 0;
    v42 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v43 = *(_BYTE *)v42;
    v44 = *(_QWORD *)(v42 + 8);
    *(_BYTE *)v42 = 3;
    *(_QWORD *)(v42 + 8) = v40;
    LOBYTE(v152) = v43;
    v153 = v44;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v188 != &v190 )
      operator delete(v188, v190 + 1);
    v45 = WORD2(v154);
    v46 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v47 = *(_BYTE *)v46;
    v48 = *(_QWORD *)(v46 + 8);
    *(_BYTE *)v46 = 6;
    LOBYTE(v152) = v47;
    *(_QWORD *)(v46 + 8) = v45;
    v153 = v48;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v138 )
    {
      if ( v138 != 2 )
      {
        v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        switch ( v138 )
        {
          case 1:
            v3 = "object";
            break;
          case 3:
            v3 = "string";
            break;
          case 4:
            v3 = "boolean";
            break;
          case 8:
            v3 = "binary";
            break;
          case 9:
            v3 = "discarded";
            break;
          default:
            v3 = "number";
            break;
        }
        v152 = (size_t)v3;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
          v2,
          308);
        std::string::_M_dispose();
        __cxa_throw(
          v2,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      if ( v23[2] != v23[1] )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v23[1] += 16LL;
        goto LABEL_61;
      }
    }
    else
    {
      v49 = operator new(0x18u);
      *(_QWORD *)(v49 + 16) = 0;
      v23 = (_QWORD *)v49;
      *(_OWORD *)v49 = 0;
    }
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_61:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v138 = 2;
LABEL_62:
    head = next_head();
    if ( head == -1 )
    {
      if ( v164 )
      {
        *(_QWORD *)&v165 = 0;
        qfree();
      }
      break;
    }
    if ( !v164 )
      continue;
    *(_QWORD *)&v165 = 0;
    qfree();
  }
  v172 = 0;
  *(_QWORD *)v173 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v172 = 3;
  v50 = (__int64 *)operator new(0x20u);
  *v50 = (__int64)(v50 + 2);
  v154 = (char *)&word_10;
  v51 = (_OWORD *)std::string::_M_create();
  v52 = v154;
  v53 = _mm_load_si128((const __m128i *)&xmmword_3E20D0);
  *v50 = (__int64)v51;
  v50[2] = (__int64)v52;
  *v51 = v53;
  v54 = v154;
  v55 = *v50;
  v50[1] = (__int64)v154;
  v54[v55] = 0;
  *(_OWORD *)v173 = (unsigned __int64)v50;
  qsnprintf();
  v146 = &v169;
  v169 = v171;
  v56 = (char *)strlen(v199);
  v154 = v56;
  v57 = (unsigned int)v56;
  if ( (unsigned __int64)v56 > 0xF )
  {
    v169 = (void *)std::string::_M_create();
    v113 = v169;
    v171[0] = v154;
  }
  else
  {
    if ( v56 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v171[0]) = v199[0];
      goto LABEL_68;
    }
    if ( !v56 )
    {
LABEL_68:
      v58 = v171;
      goto LABEL_69;
    }
    v113 = v171;
  }
  if ( v57 >= 8 )
  {
    *v113 = *(_QWORD *)v199;
    *(_QWORD *)((char *)v113 + v57 - 8) = *(_QWORD *)&v198[v57];
    v117 = (unsigned __int64)(v113 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v118 = (char *)v113 - v117;
    v119 = (char *)(v199 - v118);
    if ( ((v57 + (_DWORD)v118) & 0xFFFFFFF8) >= 8 )
    {
      v120 = (v57 + (_DWORD)v118) & 0xFFFFFFF8;
      v121 = 0;
      do
      {
        v122 = v121;
        v121 += 8;
        *(_QWORD *)(v117 + v122) = *(_QWORD *)&v119[v122];
      }
      while ( v121 < v120 );
    }
  }
  else if ( (v57 & 4) != 0 )
  {
    *(_DWORD *)v113 = *(_DWORD *)v199;
    *(_DWORD *)((char *)v113 + v57 - 4) = *(_DWORD *)&v198[v57 + 4];
  }
  else if ( v57 )
  {
    *(_BYTE *)v113 = v199[0];
    if ( (v57 & 2) != 0 )
      *(_WORD *)((char *)v113 + v57 - 2) = *(_WORD *)&v198[v57 + 6];
  }
  v56 = v154;
  v58 = v169;
LABEL_69:
  v170 = v56;
  v56[(_QWORD)v58] = 0;
  v174 = 0;
  *(_QWORD *)v175 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v174 = 3;
  v59 = (_QWORD *)operator new(0x20u);
  v60 = v169;
  v61 = v59 + 2;
  v62 = v170;
  *v59 = v59 + 2;
  if ( v60 == v171 )
  {
    v124 = (_DWORD)v62 + 1;
    if ( (unsigned int)((_DWORD)v62 + 1) >= 8 )
    {
      v59[2] = v171[0];
      *(_QWORD *)((char *)v61 + v124 - 8) = *(_QWORD *)((char *)&v171[-1] + v124);
      v125 = (unsigned __int64)(v59 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v126 = (char *)v61 - v125;
      v127 = (char *)((char *)v171 - v126);
      if ( (((_DWORD)v126 + v124) & 0xFFFFFFF8) >= 8 )
      {
        v128 = ((_DWORD)v126 + v124) & 0xFFFFFFF8;
        v129 = 0;
        do
        {
          v130 = v129;
          v129 += 8;
          *(_QWORD *)(v125 + v130) = *(_QWORD *)&v127[v130];
        }
        while ( v129 < v128 );
      }
    }
    else if ( (v124 & 4) != 0 )
    {
      *((_DWORD *)v59 + 4) = v171[0];
      *(_DWORD *)((char *)v61 + v124 - 4) = *(_DWORD *)((char *)&v170 + v124 + 4);
    }
    else if ( (_DWORD)v62 != -1 )
    {
      *((_BYTE *)v59 + 16) = v171[0];
      if ( (v124 & 2) != 0 )
        *(_WORD *)((char *)v61 + v124 - 2) = *(_WORD *)((char *)&v170 + v124 + 6);
    }
  }
  else
  {
    *v59 = v60;
    v59[2] = v171[0];
  }
  v59[1] = v62;
  v147 = &v172;
  v169 = v171;
  v170 = nullptr;
  LOBYTE(v171[0]) = 0;
  v140 = (__int64)&v188;
  *(_OWORD *)v175 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v188,
    (const __m128i *)&v172);
  v190 = 0;
  v176 = 0;
  *(_QWORD *)v177 = 0;
  *(_QWORD *)v141 = v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v176 = 3;
  v63 = operator new(0x20u);
  strcpy((char *)(v63 + 16), "function_name");
  *(_QWORD *)v63 = v63 + 16;
  *(_QWORD *)(v63 + 8) = 13;
  v178 = 0;
  v179.m128i_i64[0] = 0;
  *(_OWORD *)v177 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v178 = 3;
  v64 = src;
  v65 = v167;
  v66 = (_QWORD *)operator new(0x20u);
  v67 = v66 + 2;
  v154 = v65;
  v68 = v66;
  *v66 = v66 + 2;
  if ( (unsigned __int64)v65 <= 0xF )
  {
    v69 = (__m128i)(unsigned __int64)v66;
    v70 = (size_t)(v65 + 1);
    if ( v65 )
    {
LABEL_73:
      *(__m128i *)v139 = v69;
      memcpy(v67, v64, v70);
      v71 = (__int64)v154;
      v69 = _mm_load_si128((const __m128i *)v139);
      goto LABEL_74;
    }
    goto LABEL_138;
  }
  v114 = std::string::_M_create();
  *v68 = v114;
  v67 = (_BYTE *)v114;
  v115 = v154;
  v69 = (__m128i)(unsigned __int64)v68;
  v68[2] = (__int64)v154;
  v70 = (size_t)(v115 + 1);
  if ( !v115 )
  {
LABEL_138:
    *v67 = *v64;
    v71 = (__int64)v154;
    goto LABEL_74;
  }
  v71 = -1;
  if ( v70 )
    goto LABEL_73;
LABEL_74:
  v68[1] = v71;
  v179 = v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v191,
    (const __m128i *)&v176);
  v191[2] = 0;
  v180 = 0;
  *(_QWORD *)&v181 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v180 = 3;
  v72 = operator new(0x20u);
  *(_QWORD *)v72 = v72 + 16;
  strcpy((char *)(v72 + 16), "switch_count");
  *(_QWORD *)(v72 + 8) = 12;
  v181 = (unsigned __int64)v72;
  if ( v138 == 1 )
  {
    v73 = v23[5];
  }
  else if ( v138 == 2 )
  {
    v73 = (__int64)(v23[1] - *v23) >> 4;
  }
  else
  {
    v73 = v138 != 0;
  }
  v182 = 6;
  v183 = v73;
  v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v192,
    (const __m128i *)&v180);
  v192[2] = 0;
  LOBYTE(v185) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v185) = 3;
  v74 = operator new(0x20u);
  *(_QWORD *)v74 = v74 + 16;
  strcpy((char *)(v74 + 16), "switches");
  *(_QWORD *)(v74 + 8) = 8;
  v149 = v23;
  v148 = v138;
  s2 = (unsigned __int64)v74;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v187 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v193,
    *(const __m128i **)v142);
  v194 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v143,
    (const __m128i *)v140,
    4);
  v75 = v140;
  v76 = s;
  do
  {
    v76 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v76 != (char *)v75 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v169 != v171 )
    operator delete(v169, v171[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( src != *(void **)v144 )
    operator delete(src, *(_QWORD *)v168 + 1LL);
  return *(_QWORD *)v143;
}

