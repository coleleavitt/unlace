_QWORD *__fastcall ida_mcp::tools::search::search_bytes_impl(_QWORD *a1, __int64 a2)
{
  std::runtime_error *v2; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbx
  std::runtime_error *v4; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v5; // rbx
  char *v6; // rax
  char *v7; // rax
  std::runtime_error *v8; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *v10; // r13
  char *v11; // rax
  char *v12; // rax
  _BYTE *v13; // rbx
  int v14; // eax
  char *v15; // rbx
  char *v16; // rsi
  char *v17; // r14
  char v18; // bp
  void *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r14
  __int64 v23; // rbp
  int *v24; // rax
  int v25; // r12d
  int *v26; // rbx
  char v27; // r13
  char *v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  _BYTE *v31; // rdx
  size_t v32; // rbp
  __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  char *v35; // rax
  char *v36; // r12
  unsigned __int64 v37; // rbx
  _QWORD *v38; // r14
  unsigned __int64 v39; // rax
  size_t v40; // r13
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // r15
  __int64 v48; // rbx
  __int64 v49; // r12
  _QWORD *v50; // rbp
  __int64 v51; // rax
  size_t v52; // rax
  unsigned int v53; // r12d
  char *v54; // rdx
  _QWORD *v55; // rax
  _OWORD *v56; // rdx
  _QWORD *v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  __int8 v61; // si
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _BYTE *v69; // rbp
  unsigned __int64 v70; // r12
  _QWORD *v71; // rax
  _BYTE *v72; // rdi
  __int64 *v73; // rbx
  __m128i v74; // xmm0
  size_t v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 *v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned __int64 v84; // rax
  __int64 *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __m128i *v93; // rbx
  _QWORD *v95; // rax
  unsigned int v96; // edi
  unsigned __int64 v97; // rdx
  char *v98; // rax
  char *v99; // rbp
  unsigned int v100; // r12d
  unsigned int v101; // r12d
  unsigned int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int64 v106; // r8
  char *v107; // rcx
  char *v108; // r9
  unsigned int v109; // edx
  unsigned int v110; // ecx
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r12
  __int64 v114; // rbp
  __int64 v115; // r13
  __int64 v116; // r15
  size_t v117; // rdx
  int v118; // eax
  unsigned __int64 v119; // r14
  __int64 v120; // r14
  size_t v121; // rdx
  int v122; // eax
  unsigned __int64 v123; // r13
  _BYTE *v124; // rbp
  __m128i v125; // rax
  __int8 v126; // bp
  __int64 v127; // rax
  __int64 v128; // rax
  _BYTE *v129; // rbp
  __m128i v130; // rax
  __int8 v131; // bl
  __int64 v132; // rax
  __m128i v133; // [rsp+0h] [rbp-2B8h] BYREF
  __int64 v134; // [rsp+10h] [rbp-2A8h]
  char *v135; // [rsp+18h] [rbp-2A0h]
  __m128i *v136; // [rsp+20h] [rbp-298h]
  __int64 v137; // [rsp+28h] [rbp-290h]
  void *src; // [rsp+30h] [rbp-288h]
  __int64 v139; // [rsp+38h] [rbp-280h]
  __int128 *v140; // [rsp+40h] [rbp-278h]
  unsigned __int64 v141; // [rsp+48h] [rbp-270h]
  unsigned __int64 v142; // [rsp+50h] [rbp-268h]
  __int128 *v143; // [rsp+58h] [rbp-260h]
  void **v144; // [rsp+60h] [rbp-258h]
  char *v145; // [rsp+68h] [rbp-250h]
  char *v146; // [rsp+70h] [rbp-248h]
  __int64 v147; // [rsp+78h] [rbp-240h]
  __int8 v148; // [rsp+87h] [rbp-231h]
  _QWORD *v149; // [rsp+88h] [rbp-230h]
  _QWORD *v150; // [rsp+90h] [rbp-228h]
  void **v151; // [rsp+98h] [rbp-220h]
  char *v152; // [rsp+A0h] [rbp-218h]
  _QWORD *v153; // [rsp+A8h] [rbp-210h]
  char *v154; // [rsp+B8h] [rbp-200h]
  char v155; // [rsp+C0h] [rbp-1F8h] BYREF
  _QWORD *v156; // [rsp+C8h] [rbp-1F0h]
  __m128i v157; // [rsp+D0h] [rbp-1E8h] BYREF
  void *v158; // [rsp+F0h] [rbp-1C8h] BYREF
  unsigned __int64 v159; // [rsp+F8h] [rbp-1C0h]
  _QWORD v160[2]; // [rsp+100h] [rbp-1B8h] BYREF
  void *v161; // [rsp+110h] [rbp-1A8h]
  char *v162; // [rsp+118h] [rbp-1A0h]
  _QWORD v163[2]; // [rsp+120h] [rbp-198h] BYREF
  void *v164; // [rsp+130h] [rbp-188h] BYREF
  __int128 v165; // [rsp+138h] [rbp-180h] BYREF
  char v166; // [rsp+148h] [rbp-170h]
  __m128i v167; // [rsp+150h] [rbp-168h] BYREF
  char v168; // [rsp+160h] [rbp-158h] BYREF
  __int128 v169; // [rsp+168h] [rbp-150h] BYREF
  char v170; // [rsp+178h] [rbp-140h]
  __int64 v171; // [rsp+180h] [rbp-138h]
  __int64 v172; // [rsp+188h] [rbp-130h]
  char v173; // [rsp+190h] [rbp-128h] BYREF
  __int128 v174; // [rsp+198h] [rbp-120h] BYREF
  char v175; // [rsp+1A8h] [rbp-110h]
  __int128 v176; // [rsp+1B0h] [rbp-108h] BYREF
  _BYTE *v177; // [rsp+1C0h] [rbp-F8h] BYREF
  __int128 v178; // [rsp+1C8h] [rbp-F0h] BYREF
  char v179; // [rsp+1D8h] [rbp-E0h]
  size_t v180; // [rsp+1E0h] [rbp-D8h]
  __int64 v181; // [rsp+1E8h] [rbp-D0h]
  __m128i v182; // [rsp+1F0h] [rbp-C8h] BYREF
  __int64 v183; // [rsp+200h] [rbp-B8h] BYREF
  __int64 v184; // [rsp+208h] [rbp-B0h] BYREF
  __int64 v185; // [rsp+218h] [rbp-A0h]
  _QWORD v186[3]; // [rsp+220h] [rbp-98h] BYREF
  __int64 v187; // [rsp+238h] [rbp-80h] BYREF
  __int64 v188; // [rsp+248h] [rbp-70h]
  char s[40]; // [rsp+250h] [rbp-68h] BYREF
  unsigned __int64 v190; // [rsp+278h] [rbp-40h]

  v150 = a1;
  v139 = a2;
  v190 = __readfsqword(0x28u);
  LOBYTE(v160[0]) = 0;
  v159 = 0;
  v13 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v151 = &v158;
  v153 = v160;
  v158 = v160;
  if ( *v13 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v13 )
    {
      case 0:
        v12 = "null";
        break;
      case 1:
        v12 = "object";
        break;
      case 2:
        v12 = (char *)"array";
        break;
      case 3:
        v12 = "string";
        break;
      case 4:
        v12 = "boolean";
        break;
      case 8:
        v12 = "binary";
        break;
      case 9:
        v12 = "discarded";
        break;
      default:
        v12 = "number";
        break;
    }
    v157.m128i_i64[0] = (__int64)v12;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v157.m128i_i32[0] = 100;
  v133.m128i_i64[0] = (__int64)&v157;
  v14 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  v15 = (char *)v158;
  LODWORD(v140) = v14;
  v16 = nullptr;
  v149 = v163;
  v161 = v163;
  v17 = (char *)v158 + v159;
  LOBYTE(v163[0]) = 0;
  v162 = nullptr;
  if ( v158 != (char *)v158 + v159 )
  {
    do
    {
      v18 = *v15;
      if ( *v15 != 32 && v18 != 9 )
      {
        v19 = v161;
        v20 = 15;
        v21 = (unsigned __int64)(v16 + 1);
        if ( v161 != v149 )
          v20 = v163[0];
        if ( v20 < v21 )
        {
          v135 = v16;
          std::string::_M_mutate();
          v19 = v161;
        }
        v16[(_QWORD)v19] = v18;
        v162 = v16 + 1;
        *((_BYTE *)v161 + v21) = 0;
        v16 = v162;
      }
      ++v15;
    }
    while ( v17 != v15 );
    if ( ((unsigned __int8)v16 & 1) != 0 )
    {
      v8 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
      std::runtime_error::runtime_error(v8, "Hex pattern must have even number of characters");
      __cxa_throw(
        v8,
        (struct type_info *)&`typeinfo for'std::runtime_error,
        (void (*)(void *))&std::runtime_error::~runtime_error);
    }
  }
  v145 = nullptr;
  v22 = 0;
  v135 = nullptr;
  src = nullptr;
  while ( v22 < (unsigned __int64)v16 )
  {
    v29 = (unsigned __int64)&v16[-v22];
    v30 = 2;
    v182.m128i_i64[0] = (__int64)&v183;
    v31 = (char *)v161 + v22;
    if ( v29 <= 2 )
      v30 = v29;
    if ( v29 == 1 )
      LOBYTE(v183) = *v31;
    else
      LOWORD(v183) = *(_WORD *)v31;
    v182.m128i_i64[1] = v30;
    *((_BYTE *)&v183 + v30) = 0;
    v23 = v182.m128i_i64[0];
    v24 = __errno_location();
    v25 = *v24;
    *v24 = 0;
    v26 = v24;
    v27 = __isoc23_strtoul();
    if ( v23 == v157.m128i_i64[0] )
      std::__throw_invalid_argument("stoul");
    if ( *v26 == 34 )
      std::__throw_out_of_range("stoul");
    if ( !*v26 )
      *v26 = v25;
    if ( v135 == v145 )
    {
      v32 = v135 - (_BYTE *)src;
      if ( v135 - (_BYTE *)src == 0x7FFFFFFFFFFFFFFFLL )
        JUMPOUT(0x6D21D);
      v33 = 1;
      if ( v32 )
        v33 = v135 - (_BYTE *)src;
      v34 = v32 + v33;
      if ( v34 > 0x7FFFFFFFFFFFFFFFLL )
        v34 = 0x7FFFFFFFFFFFFFFFLL;
      v35 = (char *)operator new(v34);
      v35[v32] = v27;
      v36 = v35;
      if ( v32 )
        memcpy(v35, src, v32);
      v135 = &v36[v32 + 1];
      if ( src )
        operator delete(src, v145 - (_BYTE *)src);
      src = v36;
      v145 = &v36[v34];
    }
    else
    {
      v28 = v135;
      *v135 = v27;
      v135 = v28 + 1;
    }
    if ( (__int64 *)v182.m128i_i64[0] != &v183 )
      operator delete((void *)v182.m128i_i64[0], v183 + 1);
    v16 = v162;
    v22 += 2LL;
  }
  if ( v135 == src )
    JUMPOUT(0x6D145);
  v37 = getinf();
  v141 = getinf();
  if ( *(_BYTE *)v139 == 1 )
  {
    v112 = *(_QWORD *)(v139 + 8);
    v113 = *(_QWORD *)(v112 + 16);
    if ( v113 )
    {
      v114 = v112 + 8;
      v115 = *(_QWORD *)(v112 + 16);
      v116 = v112 + 8;
      do
      {
        while ( 1 )
        {
          v119 = *(_QWORD *)(v115 + 40);
          if ( !v119 )
            break;
          v117 = 13;
          if ( v119 <= 0xD )
            v117 = *(_QWORD *)(v115 + 40);
          v118 = memcmp(*(const void **)(v115 + 32), "start_address", v117);
          if ( v118 || (v118 = v119 - 13, (__int64)(v119 - 13) <= 0x7FFFFFFF) )
          {
            if ( v118 < 0 )
              break;
          }
          v116 = v115;
          v115 = *(_QWORD *)(v115 + 16);
          if ( !v115 )
            goto LABEL_126;
        }
        v115 = *(_QWORD *)(v115 + 24);
      }
      while ( v115 );
LABEL_126:
      if ( v114 != v116 && std::string::compare(*(void **)(v116 + 32), *(_QWORD *)(v116 + 40), "start_address") <= 0 )
      {
        v129 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_QWORD *)&v178 = 0;
        v177 = (char *)&v178 + 8;
        BYTE8(v178) = 0;
        if ( *v129 != 3 )
        {
          v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( *v129 )
          {
            case 0:
              v7 = "null";
              break;
            case 1:
              v7 = "object";
              break;
            case 2:
              v7 = (char *)"array";
              break;
            case 3:
              v7 = "string";
              break;
            case 4:
              v7 = "boolean";
              break;
            case 8:
              v7 = "binary";
              break;
            case 9:
              v7 = "discarded";
              break;
            default:
              v7 = "number";
              break;
          }
          v157.m128i_i64[0] = (__int64)v7;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            v3,
            302);
          std::string::_M_dispose();
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        std::string::_M_assign();
        v130.m128i_i64[0] = ida_mcp::parse_ea(v177, v178);
        v131 = v130.m128i_i8[8];
        v157 = v130;
        std::string::_M_dispose();
        if ( !v131 )
        {
          v4 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
          std::runtime_error::runtime_error(v4, "Invalid start_address format");
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::runtime_error,
            (void (*)(void *))&std::runtime_error::~runtime_error);
        }
        v37 = v157.m128i_i64[0];
        if ( *(_BYTE *)v139 != 1 )
          goto LABEL_40;
        v132 = *(_QWORD *)(v139 + 8);
        v113 = *(_QWORD *)(v132 + 16);
        if ( !v113 )
          goto LABEL_40;
        v114 = v132 + 8;
      }
      v120 = v114;
      do
      {
        while ( 1 )
        {
          v123 = *(_QWORD *)(v113 + 40);
          if ( !v123 )
            break;
          v121 = 11;
          if ( v123 <= 0xB )
            v121 = *(_QWORD *)(v113 + 40);
          v122 = memcmp(*(const void **)(v113 + 32), "end_address", v121);
          if ( v122 || (v122 = v123 - 11, (__int64)(v123 - 11) <= 0x7FFFFFFF) )
          {
            if ( v122 < 0 )
              break;
          }
          v120 = v113;
          v113 = *(_QWORD *)(v113 + 16);
          if ( !v113 )
            goto LABEL_137;
        }
        v113 = *(_QWORD *)(v113 + 24);
      }
      while ( v113 );
LABEL_137:
      if ( v114 != v120 && std::string::compare(*(void **)(v120 + 32), *(_QWORD *)(v120 + 40), "end_address") <= 0 )
      {
        v124 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_QWORD *)&v178 = 0;
        v177 = (char *)&v178 + 8;
        BYTE8(v178) = 0;
        if ( *v124 != 3 )
        {
          v5 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( *v124 )
          {
            case 0:
              v6 = "null";
              break;
            case 1:
              v6 = "object";
              break;
            case 2:
              v6 = (char *)"array";
              break;
            case 3:
              v6 = "string";
              break;
            case 4:
              v6 = "boolean";
              break;
            case 8:
              v6 = "binary";
              break;
            case 9:
              v6 = "discarded";
              break;
            default:
              v6 = "number";
              break;
          }
          v157.m128i_i64[0] = (__int64)v6;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            v5,
            302);
          std::string::_M_dispose();
          __cxa_throw(
            v5,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        std::string::_M_assign();
        v125.m128i_i64[0] = ida_mcp::parse_ea(v177, v178);
        v126 = v125.m128i_i8[8];
        v157 = v125;
        std::string::_M_dispose();
        if ( !v126 )
        {
          v2 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
          std::runtime_error::runtime_error(v2, "Invalid end_address format");
          __cxa_throw(
            v2,
            (struct type_info *)&`typeinfo for'std::runtime_error,
            (void (*)(void *))&std::runtime_error::~runtime_error);
        }
        v141 = v157.m128i_i64[0];
      }
    }
  }
LABEL_40:
  v155 = 0;
  v156 = nullptr;
  v152 = &v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v38 = v156;
  LOBYTE(v139) = v155;
  if ( v155 == 1 )
  {
    v39 = v156[5];
    v142 = (int)v140;
  }
  else
  {
    if ( (_BYTE)v139 == 2 )
    {
      v142 = (int)v140;
      goto LABEL_68;
    }
    v39 = (_BYTE)v139 != 0;
    v142 = (int)v140;
  }
  if ( v39 < v142 )
  {
    do
    {
      if ( v37 >= v141 )
        break;
      memset(&v157, 0, 24);
      v40 = v135 - (_BYTE *)src;
      v157.m128i_i64[0] = qvector_reserve();
      v41 = v157.m128i_i64[1] + 1;
      v42 = 80 * v157.m128i_i64[1] + v157.m128i_i64[0];
      *(_QWORD *)v42 = 0;
      *(_QWORD *)(v42 + 24) = 0;
      *(_QWORD *)(v42 + 48) = 0;
      *(_DWORD *)(v42 + 72) = -1;
      *(_OWORD *)(v42 + 8) = 0;
      *(_OWORD *)(v42 + 32) = 0;
      *(_OWORD *)(v42 + 56) = 0;
      v157.m128i_i64[1] = v41;
      v43 = qvector_reserve();
      v44 = *(_QWORD *)(v42 + 8);
      *(_QWORD *)v42 = v43;
      memset((void *)(v43 + v44), 0, v40 - v44);
      *(_QWORD *)(v42 + 8) = v40;
      memcpy(*(void **)v42, src, v40);
      v45 = bin_search();
      v46 = v157.m128i_i64[0];
      v47 = v45;
      if ( v157.m128i_i64[0] )
      {
        v48 = v157.m128i_i64[1];
        if ( v157.m128i_i64[1] )
        {
          v49 = 0;
          do
          {
            while ( 1 )
            {
              v50 = (_QWORD *)(v46 + 80 * v49);
              if ( v50[6] )
              {
                v50[7] = 0;
                qfree();
              }
              if ( v50[3] )
              {
                v50[4] = 0;
                qfree();
              }
              if ( !*v50 )
                break;
              v50[1] = 0;
              ++v49;
              qfree();
              v46 = v157.m128i_i64[0];
              if ( v48 == v49 )
                goto LABEL_54;
            }
            ++v49;
            v46 = v157.m128i_i64[0];
          }
          while ( v48 != v49 );
        }
LABEL_54:
        v157.m128i_i64[1] = 0;
        qfree();
      }
      if ( v47 == -1 )
        break;
      v173 = 0;
      v140 = &v174;
      *(_QWORD *)&v174 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v173 = 3;
      v51 = operator new(0x20u);
      *(_QWORD *)v51 = v51 + 16;
      strcpy((char *)(v51 + 16), "address");
      *(_QWORD *)(v51 + 8) = 7;
      v174 = (unsigned __int64)v51;
      qsnprintf();
      v144 = &v164;
      v164 = (char *)&v165 + 8;
      v52 = strlen(s);
      v157.m128i_i64[0] = v52;
      v53 = v52;
      if ( v52 > 0xF )
      {
        v95 = (_QWORD *)std::string::_M_create();
        v164 = v95;
        *((_QWORD *)&v165 + 1) = v157.m128i_i64[0];
      }
      else
      {
        if ( v52 == 1 )
        {
          BYTE8(v165) = s[0];
LABEL_59:
          v54 = (char *)&v165 + 8;
          goto LABEL_60;
        }
        if ( !v52 )
          goto LABEL_59;
        v95 = (_QWORD *)&v165 + 1;
      }
      if ( v53 >= 8 )
      {
        *v95 = *(_QWORD *)s;
        *(_QWORD *)((char *)v95 + v53 - 8) = *(_QWORD *)&s[v53 - 8];
        v97 = (unsigned __int64)(v95 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v98 = (char *)v95 - v97;
        v99 = (char *)(s - v98);
        v100 = ((_DWORD)v98 + v53) & 0xFFFFFFF8;
        if ( v100 >= 8 )
        {
          v101 = v100 & 0xFFFFFFF8;
          v102 = 0;
          do
          {
            v103 = v102;
            v102 += 8;
            *(_QWORD *)(v97 + v103) = *(_QWORD *)&v99[v103];
          }
          while ( v102 < v101 );
        }
      }
      else if ( (v53 & 4) != 0 )
      {
        *(_DWORD *)v95 = *(_DWORD *)s;
        *(_DWORD *)((char *)v95 + v53 - 4) = *(_DWORD *)&s[v53 - 4];
      }
      else if ( v53 )
      {
        *(_BYTE *)v95 = s[0];
        if ( (v53 & 2) != 0 )
          *(_WORD *)((char *)v95 + v53 - 2) = *(_WORD *)&s[v53 - 2];
      }
      v52 = v157.m128i_i64[0];
      v54 = (char *)v164;
LABEL_60:
      *(_QWORD *)&v165 = v52;
      v54[v52] = 0;
      v175 = 0;
      *(_QWORD *)&v176 = 0;
      v143 = &v176;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v175 = 3;
      v55 = (_QWORD *)operator new(0x20u);
      v56 = v164;
      v57 = v55 + 2;
      v58 = v165;
      *v55 = v55 + 2;
      if ( v56 == (__int128 *)((char *)&v165 + 8) )
      {
        v96 = v58 + 1;
        if ( (unsigned int)(v58 + 1) >= 8 )
        {
          v55[2] = *((_QWORD *)&v165 + 1);
          *(_QWORD *)((char *)v57 + v96 - 8) = *(_QWORD *)((char *)&v165 + v96);
          v106 = (unsigned __int64)(v55 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v107 = (char *)v57 - v106;
          v108 = (char *)((char *)&v165 + 8 - v107);
          if ( (((_DWORD)v107 + v96) & 0xFFFFFFF8) >= 8 )
          {
            v109 = ((_DWORD)v107 + v96) & 0xFFFFFFF8;
            v110 = 0;
            do
            {
              v111 = v110;
              v110 += 8;
              *(_QWORD *)(v106 + v111) = *(_QWORD *)&v108[v111];
            }
            while ( v110 < v109 );
          }
        }
        else if ( (v96 & 4) != 0 )
        {
          *((_DWORD *)v55 + 4) = DWORD2(v165);
          *(_DWORD *)((char *)v57 + v96 - 4) = *(_DWORD *)((char *)&v165 + v96 + 4);
        }
        else if ( (_DWORD)v58 != -1 )
        {
          *((_BYTE *)v55 + 16) = BYTE8(v165);
          if ( (v96 & 2) != 0 )
            *(_WORD *)((char *)v57 + v96 - 2) = *(_WORD *)((char *)&v165 + v96 + 6);
        }
      }
      else
      {
        *v55 = v56;
        v55[2] = *((_QWORD *)&v165 + 1);
      }
      v55[1] = v58;
      v164 = (char *)&v165 + 8;
      *(_QWORD *)&v165 = 0;
      BYTE8(v165) = 0;
      v146 = &v173;
      v176 = (unsigned __int64)v55;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v182,
        (const __m128i *)&v173);
      v183 = 0;
      LOBYTE(v177) = 0;
      *(_QWORD *)&v178 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v177) = 3;
      v59 = operator new(0x20u);
      strcpy((char *)(v59 + 16), "size");
      *(_QWORD *)v59 = v59 + 16;
      *(_QWORD *)(v59 + 8) = 4;
      v180 = v40;
      v179 = 6;
      v181 = 0;
      v178 = (unsigned __int64)v59;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v184,
        (const __m128i *)&v177);
      v136 = &v182;
      v157.m128i_i8[0] = 0;
      v185 = 0;
      v137 = 2;
      v157.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v133.m128i_i64[0],
        &v182);
      v148 = v157.m128i_i8[0];
      v147 = v157.m128i_i64[1];
      if ( !(_BYTE)v139 )
      {
        v60 = operator new(0x18u);
        *(_QWORD *)(v60 + 16) = 0;
        v38 = (_QWORD *)v60;
        *(_OWORD *)v60 = 0;
LABEL_64:
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        v61 = v157.m128i_i8[0];
        v62 = v157.m128i_i64[1];
        goto LABEL_65;
      }
      if ( (_BYTE)v139 != 2 )
      {
        v10 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        switch ( (char)v139 )
        {
          case 1:
            v11 = "object";
            break;
          case 3:
            v11 = "string";
            break;
          case 4:
            v11 = "boolean";
            break;
          case 8:
            v11 = "binary";
            break;
          case 9:
            v11 = "discarded";
            break;
          default:
            v11 = "number";
            break;
        }
        v154 = v11;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
          v10,
          308);
        std::string::_M_dispose();
        __cxa_throw(
          v10,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      v104 = v38[1];
      if ( v38[2] == v104 )
        goto LABEL_64;
      v105 = v104 + 16;
      v61 = 0;
      *(__m128i *)(v105 - 16) = _mm_load_si128(&v157);
      v38[1] = v105;
      v62 = 0;
LABEL_65:
      v157.m128i_i64[1] = v62;
      v157.m128i_i8[0] = v61;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v164 != (char *)&v165 + 8 )
        operator delete(v164, *((_QWORD *)&v165 + 1) + 1LL);
      v37 = v47 + 1;
LABEL_68:
      v63 = v38[1] - *v38;
      LOBYTE(v139) = 2;
    }
    while ( v63 >> 4 < v142 );
  }
  LOBYTE(v164) = 0;
  v135 = (char *)&v165;
  *(_QWORD *)&v165 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v164) = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v64,
    "pattern",
    v65,
    v66,
    v67,
    v68,
    v133.m128i_i32[0],
    v133.m128i_i32[2],
    v134);
  v166 = 0;
  v136 = &v167;
  v167.m128i_i64[0] = 0;
  v165 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v166 = 3;
  v69 = v158;
  v70 = v159;
  v71 = (_QWORD *)operator new(0x20u);
  v72 = v71 + 2;
  v157.m128i_i64[0] = v70;
  v73 = v71;
  *v71 = v71 + 2;
  if ( v70 <= 0xF )
  {
    v74 = (__m128i)(unsigned __int64)v71;
    v75 = v70 + 1;
    if ( v70 )
    {
LABEL_71:
      v133 = v74;
      memcpy(v72, v69, v75);
      v76 = v157.m128i_i64[0];
      v74 = _mm_load_si128(&v133);
      goto LABEL_72;
    }
    goto LABEL_115;
  }
  v127 = std::string::_M_create();
  *v73 = v127;
  v72 = (_BYTE *)v127;
  v128 = v157.m128i_i64[0];
  v74 = (__m128i)(unsigned __int64)v73;
  v73[2] = v157.m128i_i64[0];
  v75 = v128 + 1;
  if ( !v128 )
  {
LABEL_115:
    *v72 = *v69;
    v76 = v157.m128i_i64[0];
    goto LABEL_72;
  }
  v76 = -1;
  if ( v75 )
    goto LABEL_71;
LABEL_72:
  v73[1] = v76;
  v144 = &v164;
  v167 = v74;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v182,
    (const __m128i *)&v164);
  v183 = 0;
  v168 = 0;
  *(_QWORD *)&v169 = 0;
  v133.m128i_i64[0] = (__int64)&v169;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v168 = 3;
  v77 = operator new(0x20u);
  strcpy((char *)(v77 + 16), "match_count");
  *(_QWORD *)v77 = v77 + 16;
  *(_QWORD *)(v77 + 8) = 11;
  v169 = (unsigned __int64)v77;
  if ( (_BYTE)v139 == 1 )
  {
    v78 = v38[5];
  }
  else if ( (_BYTE)v139 == 2 )
  {
    v78 = (__int64)(v38[1] - *v38) >> 4;
  }
  else
  {
    v78 = (_BYTE)v139 != 0;
  }
  v170 = 6;
  v171 = v78;
  v172 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v184,
    (const __m128i *)&v168);
  v185 = 0;
  v173 = 0;
  *(_QWORD *)&v174 = 0;
  v140 = &v174;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v173 = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v79,
    "truncated",
    v80,
    v81,
    v82,
    v83,
    v133.m128i_i32[0],
    v133.m128i_i32[2],
    v134);
  v174 = (unsigned __int64)v79;
  if ( (_BYTE)v139 == 1 )
  {
    v84 = v38[5];
  }
  else if ( (_BYTE)v139 == 2 )
  {
    v84 = (__int64)(v38[1] - *v38) >> 4;
  }
  else
  {
    v84 = (_BYTE)v139 != 0;
  }
  v175 = 4;
  v176 = v84 >= v142;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v186,
    (const __m128i *)&v173);
  v186[2] = 0;
  LOBYTE(v177) = 0;
  *(_QWORD *)&v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v177) = 3;
  v85 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v85,
    "results",
    v86,
    v87,
    v88,
    v89,
    v133.m128i_i32[0],
    v133.m128i_i32[2],
    v134);
  v156 = v38;
  v155 = v139;
  v178 = (unsigned __int64)v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v181 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v187,
    (const __m128i *)&v177);
  v188 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v150,
    (__int64)&v182,
    4,
    v90,
    v91,
    v92,
    v133.m128i_i32[0],
    v133.m128i_i64[1],
    v134,
    (int)v135,
    (int)v136,
    v137,
    (__int64)src,
    v139,
    (int)v140,
    v141,
    v142,
    (char)v143,
    (__int64)v144,
    (int)v145,
    (__int64)v146);
  v93 = (__m128i *)s;
  do
  {
    v93 = (__m128i *)((char *)v93 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v93 != &v182 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( src )
    operator delete(src, v145 - (_BYTE *)src);
  if ( v161 != v149 )
    operator delete(v161, v163[0] + 1LL);
  if ( v158 != v153 )
    operator delete(v158, v160[0] + 1LL);
  return v150;
}

