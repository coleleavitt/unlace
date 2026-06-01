__int64 __fastcall ida_mcp::tools::functions::`anonymous namespace'::get_function_signature(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // r13
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  size_t v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r12
  size_t v15; // rdx
  int v16; // eax
  char *v17; // r14
  int *v18; // rax
  void **p_src; // rsi
  int *v20; // r15
  __int64 v21; // r12
  std::runtime_error *v22; // rbx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  size_t v26; // r13
  __int64 v27; // rax
  size_t v28; // rax
  unsigned int v29; // r14d
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx
  size_t v34; // rsi
  __int64 v35; // rax
  _BYTE *v36; // rdx
  size_t v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  char *v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rcx
  char *v44; // rsi
  __int64 v45; // rax
  const __m128i *v46; // rsi
  __int64 v47; // rdx
  __m128i *v48; // r13
  __int64 v49; // rax
  void *v51; // r15
  __int64 v52; // rax
  char v53; // si
  __int64 v54; // rdx
  _QWORD *v55; // rax
  _BYTE *v56; // r14
  const char *v57; // rdi
  __int64 *v58; // r13
  size_t v59; // rax
  size_t v60; // r15
  __int64 v61; // rax
  char v62; // si
  __int64 v63; // rdx
  __int64 v64; // rax
  char *v65; // rax
  unsigned __int32 v66; // ecx
  _QWORD *v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rdx
  _QWORD *v70; // rdi
  char *v71; // rcx
  __int64 v72; // rax
  const char *v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  const __m128i *v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rax
  __m128i *v82; // rbx
  _QWORD *v83; // rax
  char *v84; // r13
  size_t v85; // r14
  void *v86; // rdi
  void *v87; // r14
  char *v88; // rdi
  __int64 v89; // r15
  unsigned int v90; // edi
  unsigned int v91; // edi
  _DWORD *v92; // r8
  __int64 v93; // rsi
  _DWORD *v94; // rcx
  __int64 v95; // rdi
  unsigned __int64 v96; // rdx
  char *v97; // rax
  char *v98; // r13
  unsigned int v99; // r14d
  void *v100; // rdi
  unsigned int v101; // r14d
  unsigned int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rax
  unsigned __int64 v105; // r8
  char *v106; // rcx
  char *v107; // r9
  void *v108; // r11
  unsigned int v109; // edx
  unsigned int v110; // ecx
  __int64 v111; // rdi
  unsigned __int64 v112; // r8
  char *v113; // rcx
  char *v114; // r9
  void *v115; // r11
  unsigned int v116; // edx
  unsigned int v117; // ecx
  __int64 v118; // rdi
  _QWORD *v119; // rax
  void *v120; // r11
  __int64 v121; // rcx
  __int64 v122; // rdi
  unsigned int v123; // r10d
  unsigned __int64 v124; // rsi
  char *v125; // rax
  char *v126; // r15
  unsigned int v127; // eax
  void *v128; // r11
  unsigned int v129; // eax
  unsigned int v130; // edx
  __int64 v131; // rcx
  unsigned __int64 v132; // r8
  char *v133; // r9
  void *v134; // r11
  unsigned int v135; // edx
  unsigned int v136; // esi
  __int64 v137; // rdi
  int v138; // [rsp+0h] [rbp-290h]
  __int64 v139; // [rsp+10h] [rbp-280h]
  __m128i v140; // [rsp+50h] [rbp-240h] BYREF
  void **v141; // [rsp+60h] [rbp-230h]
  void *s2; // [rsp+68h] [rbp-228h]
  __int64 v143; // [rsp+78h] [rbp-218h] BYREF
  char v144[8]; // [rsp+80h] [rbp-210h] BYREF
  __int64 v145; // [rsp+88h] [rbp-208h]
  char *v146; // [rsp+90h] [rbp-200h] BYREF
  __int128 v147; // [rsp+98h] [rbp-1F8h]
  void *src; // [rsp+B0h] [rbp-1E0h] BYREF
  __int128 v149; // [rsp+B8h] [rbp-1D8h]
  void *v150; // [rsp+D0h] [rbp-1C0h]
  size_t v151; // [rsp+D8h] [rbp-1B8h]
  _QWORD v152[2]; // [rsp+E0h] [rbp-1B0h] BYREF
  void *v153; // [rsp+F0h] [rbp-1A0h]
  size_t v154; // [rsp+F8h] [rbp-198h]
  _QWORD v155[2]; // [rsp+100h] [rbp-190h] BYREF
  void *v156; // [rsp+110h] [rbp-180h]
  char *v157; // [rsp+118h] [rbp-178h]
  _QWORD v158[2]; // [rsp+120h] [rbp-170h] BYREF
  char v159; // [rsp+130h] [rbp-160h] BYREF
  __int128 v160; // [rsp+138h] [rbp-158h]
  char v161; // [rsp+148h] [rbp-148h]
  __int128 v162; // [rsp+150h] [rbp-140h]
  char v163; // [rsp+160h] [rbp-130h] BYREF
  __int128 v164; // [rsp+168h] [rbp-128h]
  char v165; // [rsp+178h] [rbp-118h]
  __m128i v166; // [rsp+180h] [rbp-110h]
  void *v167; // [rsp+190h] [rbp-100h] BYREF
  __int128 v168; // [rsp+198h] [rbp-F8h] BYREF
  __int64 v169; // [rsp+1A8h] [rbp-E8h]
  __int64 v170; // [rsp+1B0h] [rbp-E0h]
  __int64 v171; // [rsp+1B8h] [rbp-D8h]
  __m128i v172; // [rsp+1C0h] [rbp-D0h] BYREF
  __int64 v173; // [rsp+1D0h] [rbp-C0h]
  int v174[4]; // [rsp+1D8h] [rbp-B8h] BYREF
  __int64 v175; // [rsp+1E8h] [rbp-A8h]
  int v176[4]; // [rsp+1F0h] [rbp-A0h] BYREF
  __int64 v177; // [rsp+200h] [rbp-90h]
  char v178[8]; // [rsp+208h] [rbp-88h] BYREF
  char v179[24]; // [rsp+210h] [rbp-80h] BYREF
  _BYTE v180[8]; // [rsp+228h] [rbp-68h]
  char s[40]; // [rsp+230h] [rbp-60h] BYREF
  unsigned __int64 v182; // [rsp+258h] [rbp-38h]

  v182 = __readfsqword(0x28u);
  HIBYTE(v168) = 0;
  DWORD2(v168) = 1919181921;
  *(_QWORD *)&v168 = 7;
  *(_DWORD *)((char *)&v168 + 11) = 1936942450;
  s2 = (char *)&v168 + 8;
  v167 = (char *)&v168 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = (char *)"array";
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
    src = v3;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v6 = *(_QWORD *)(a2 + 8);
  v7 = a1;
  v8 = *(_QWORD *)(v6 + 16);
  v9 = v6 + 8;
  if ( v8 )
  {
    v10 = v6 + 8;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v8 + 40);
        if ( !v13 )
          break;
        v11 = 7;
        if ( v13 <= 7 )
          v11 = *(_QWORD *)(v8 + 40);
        v12 = memcmp(*(const void **)(v8 + 32), s2, v11);
        if ( v12 || (v12 = v13 - 7, (__int64)(v13 - 7) <= 0x7FFFFFFF) )
        {
          if ( v12 < 0 )
            break;
        }
        v10 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v8 )
          goto LABEL_12;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v8 );
LABEL_12:
    if ( v9 != v10 )
    {
      v14 = *(_QWORD *)(v10 + 40);
      if ( v14 )
      {
        v15 = 7;
        if ( v14 <= 7 )
          v15 = *(_QWORD *)(v10 + 40);
        v16 = memcmp(s2, *(const void **)(v10 + 32), v15);
        if ( v16 || (v16 = 7 - v14, (__int64)(7 - v14) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v16 >= 0 )
            v9 = v10;
        }
      }
      else
      {
        v9 = v10;
      }
    }
  }
  BYTE8(v168) = 0;
  v141 = &v167;
  *(_QWORD *)&v168 = 0;
  v167 = s2;
  if ( *(_BYTE *)(v9 + 64) != 3 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v9 + 64) )
    {
      case 0:
        v5 = "null";
        break;
      case 1:
        v5 = "object";
        break;
      case 2:
        v5 = (char *)"array";
        break;
      case 3:
        v5 = "string";
        break;
      case 4:
        v5 = "boolean";
        break;
      case 8:
        v5 = "binary";
        break;
      case 9:
        v5 = "discarded";
        break;
      default:
        v5 = "number";
        break;
    }
    src = v5;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v4,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v17 = (char *)v167;
  if ( (unsigned __int64)v168 > 2 && *(_BYTE *)v167 == 48 && (*((_BYTE *)v167 + 1) & 0xDF) == 0x58 )
    v17 = (char *)v167 + 2;
  v18 = __errno_location();
  *v18 = 0;
  p_src = &src;
  v20 = v18;
  v21 = __isoc23_strtoull();
  if ( v17 == src || *(_BYTE *)src || *v20 == 34 && v21 == -1 )
  {
    if ( v167 != s2 )
      operator delete(v167, *((_QWORD *)&v168 + 1) + 1LL);
    v22 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v22, "Invalid address format");
    __cxa_throw(
      v22,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v167 != s2 )
  {
    p_src = (void **)(*((_QWORD *)&v168 + 1) + 1LL);
    operator delete(v167, *((_QWORD *)&v168 + 1) + 1LL);
  }
  s2 = (void *)get_func();
  if ( !s2 )
    ida_mcp::tools::functions::`anonymous namespace'::get_function_signature(v21, p_src);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v143 = 0;
  v146 = nullptr;
  v140.m128i_i64[1] = (__int64)&v143;
  v147 = 0;
  if ( (unsigned __int8)get_tinfo() && (unsigned __int8)print_tinfo() )
  {
    v159 = 0;
    *(_QWORD *)&v160 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v159 = 3;
    v64 = operator new(0x20u);
    *(_QWORD *)v64 = v64 + 16;
    strcpy((char *)(v64 + 16), "address");
    *(_QWORD *)(v64 + 8) = 7;
    v160 = (unsigned __int64)v64;
    qsnprintf();
    v156 = v158;
    v65 = (char *)strlen(v179);
    src = v65;
    v66 = (unsigned int)v65;
    if ( (unsigned __int64)v65 > 0xF )
    {
      v140.m128i_i64[0] = (__int64)v65;
      v119 = (_QWORD *)std::string::_M_create();
      v156 = v119;
      v66 = v140.m128i_i32[0];
      v158[0] = src;
    }
    else
    {
      if ( v65 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v158[0]) = v179[0];
        goto LABEL_76;
      }
      if ( !v65 )
      {
LABEL_76:
        v67 = v158;
LABEL_77:
        v157 = v65;
        v65[(_QWORD)v67] = 0;
        v161 = 0;
        *(_QWORD *)&v162 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v161 = 3;
        v68 = (_QWORD *)operator new(0x20u);
        v69 = v156;
        v70 = v68 + 2;
        v71 = v157;
        *v68 = v68 + 2;
        if ( v69 == v158 )
        {
          v123 = (_DWORD)v71 + 1;
          if ( (unsigned int)((_DWORD)v71 + 1) >= 8 )
          {
            v132 = (unsigned __int64)(v68 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v68[2] = v158[0];
            *(_QWORD *)((char *)v70 + v123 - 8) = *(_QWORD *)((char *)&v158[-1] + v123);
            v133 = (char *)((char *)v158 - ((char *)v70 - v132));
            if ( ((v123 + (_DWORD)v70 - (_DWORD)v132) & 0xFFFFFFF8) >= 8 )
            {
              v134 = s2;
              v135 = (v123 + (_DWORD)v70 - v132) & 0xFFFFFFF8;
              v136 = 0;
              do
              {
                v137 = v136;
                v136 += 8;
                *(_QWORD *)(v132 + v137) = *(_QWORD *)&v133[v137];
              }
              while ( v136 < v135 );
              s2 = v134;
            }
          }
          else if ( (v123 & 4) != 0 )
          {
            *((_DWORD *)v68 + 4) = v158[0];
            *(_DWORD *)((char *)v70 + v123 - 4) = *(_DWORD *)((char *)&v157 + v123 + 4);
          }
          else if ( (_DWORD)v71 != -1 )
          {
            *((_BYTE *)v68 + 16) = v158[0];
            if ( (v123 & 2) != 0 )
              *(_WORD *)((char *)v70 + v123 - 2) = *(_WORD *)((char *)&v157 + v123 + 6);
          }
        }
        else
        {
          *v68 = v69;
          v68[2] = v158[0];
        }
        v68[1] = v71;
        v156 = v158;
        v157 = nullptr;
        LOBYTE(v158[0]) = 0;
        v162 = (unsigned __int64)v68;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v172,
          (const __m128i *)&v159);
        v163 = 0;
        v173 = 0;
        *(_QWORD *)&v164 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v163 = 3;
        v72 = operator new(0x20u);
        *(_QWORD *)v72 = v72 + 16;
        strcpy((char *)(v72 + 16), "signature");
        *(_QWORD *)(v72 + 8) = 9;
        v164 = (unsigned __int64)v72;
        if ( (_QWORD)v147 )
          v140.m128i_i64[0] = (__int64)v146;
        else
          v140.m128i_i64[0] = (__int64)&_qstring<char>::c_str(void)const::nullstr;
        v165 = 0;
        v166.m128i_i64[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v165 = 3;
        v73 = (const char *)v140.m128i_i64[0];
        v140.m128i_i64[0] = operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          (__int64 *)v140.m128i_i64[0],
          v73,
          v74,
          v75,
          v76,
          v77,
          v138,
          (int)&v159,
          v139);
        v166 = _mm_loadl_epi64(&v140);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v174,
          (const __m128i *)&v163);
        LOBYTE(v167) = 0;
        v175 = 0;
        *(_QWORD *)&v168 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v167) = 3;
        v78 = operator new(0x20u);
        v79 = (const __m128i *)v141;
        strcpy((char *)(v78 + 16), "has_type_info");
        *(_QWORD *)v78 = v78 + 16;
        *(_QWORD *)(v78 + 8) = 13;
        v169 = 4;
        v170 = 1;
        v171 = 0;
        v168 = (unsigned __int64)v78;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v176,
          v79);
        v177 = 0;
        v144[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v144,
          &v172,
          3);
        v80 = v145;
        LOBYTE(v79) = *(_BYTE *)v7;
        *(_BYTE *)v7 = v144[0];
        v81 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)(v7 + 8) = v80;
        v145 = v81;
        v144[0] = (char)v79;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v140.m128i_i64[0] = v7;
        v82 = (__m128i *)v178;
        do
        {
          v82 = (__m128i *)((char *)v82 - 24);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v82 != &v172 );
        v7 = v140.m128i_i64[0];
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v156 != v158 )
          operator delete(v156, v158[0] + 1LL);
        goto LABEL_34;
      }
      v119 = v158;
    }
    if ( v66 >= 8 )
    {
      *v119 = *(_QWORD *)v179;
      *(_QWORD *)((char *)v119 + v66 - 8) = *(_QWORD *)&v178[v66];
      v124 = (unsigned __int64)(v119 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v125 = (char *)v119 - v124;
      v126 = (char *)(v179 - v125);
      v127 = (v66 + (_DWORD)v125) & 0xFFFFFFF8;
      if ( v127 >= 8 )
      {
        v128 = s2;
        v129 = v127 & 0xFFFFFFF8;
        v130 = 0;
        do
        {
          v131 = v130;
          v130 += 8;
          *(_QWORD *)(v124 + v131) = *(_QWORD *)&v126[v131];
        }
        while ( v130 < v129 );
        s2 = v128;
      }
    }
    else if ( (v66 & 4) != 0 )
    {
      *(_DWORD *)v119 = *(_DWORD *)v179;
      *(_DWORD *)((char *)v119 + v66 - 4) = *(_DWORD *)&v178[v66 + 4];
    }
    else if ( v66 )
    {
      *(_BYTE *)v119 = v179[0];
      if ( (v66 & 2) != 0 )
        *(_WORD *)((char *)v119 + v66 - 2) = *(_WORD *)&v178[v66 + 6];
    }
    v65 = (char *)src;
    v67 = v156;
    goto LABEL_77;
  }
LABEL_34:
  if ( *(_BYTE *)v7 )
    goto LABEL_62;
  v149 = 0;
  src = nullptr;
  if ( get_func_name() <= 0 )
  {
    _qstring<char>::sprnt((int)&v146, (int)"sub_%llX", *(_QWORD *)s2, v23, v24, v25, v138);
  }
  else
  {
    v26 = ((_QWORD)v149 == 0) + (_QWORD)v149 - 1LL;
    if ( ((_QWORD)v149 == 0) + (_QWORD)v149 == 1 )
    {
      *(_QWORD *)&v147 = 0;
    }
    else
    {
      v87 = src;
      v88 = v146;
      v89 = ((_QWORD)v149 == 0) + (_QWORD)v149;
      if ( __PAIR128__(*((unsigned __int64 *)&v147 + 1), v149) < __PAIR128__(v149, 1) )
      {
        v146 = (char *)qvector_reserve();
        v88 = v146;
      }
      *(_QWORD *)&v147 = v89;
      memmove(v88, v87, v26);
      v146[v26] = 0;
    }
  }
  v159 = 0;
  *(_QWORD *)&v160 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v159 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "address");
  *(_QWORD *)(v27 + 8) = 7;
  v160 = (unsigned __int64)v27;
  qsnprintf();
  v150 = v152;
  v28 = strlen(s);
  *(_QWORD *)v144 = v28;
  v29 = v28;
  if ( v28 > 0xF )
  {
    v83 = (_QWORD *)std::string::_M_create();
    v150 = v83;
    v152[0] = *(_QWORD *)v144;
  }
  else
  {
    if ( v28 == 1 )
    {
      LOBYTE(v152[0]) = s[0];
      goto LABEL_41;
    }
    if ( !v28 )
    {
LABEL_41:
      v30 = v152;
      goto LABEL_42;
    }
    v83 = v152;
  }
  if ( v29 >= 8 )
  {
    *v83 = *(_QWORD *)s;
    *(_QWORD *)((char *)v83 + v29 - 8) = *(_QWORD *)&v180[v29];
    v96 = (unsigned __int64)(v83 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v97 = (char *)v83 - v96;
    v98 = (char *)(s - v97);
    v99 = ((_DWORD)v97 + v29) & 0xFFFFFFF8;
    if ( v99 >= 8 )
    {
      v100 = s2;
      v101 = v99 & 0xFFFFFFF8;
      v102 = 0;
      do
      {
        v103 = v102;
        v102 += 8;
        *(_QWORD *)(v96 + v103) = *(_QWORD *)&v98[v103];
      }
      while ( v102 < v101 );
      s2 = v100;
    }
  }
  else if ( (v29 & 4) != 0 )
  {
    *(_DWORD *)v83 = *(_DWORD *)s;
    *(_DWORD *)((char *)v83 + v29 - 4) = *(_DWORD *)&v180[v29 + 4];
  }
  else if ( v29 )
  {
    *(_BYTE *)v83 = s[0];
    if ( (v29 & 2) != 0 )
      *(_WORD *)((char *)v83 + v29 - 2) = *(_WORD *)&v180[v29 + 6];
  }
  v28 = *(_QWORD *)v144;
  v30 = v150;
LABEL_42:
  v151 = v28;
  *((_BYTE *)v30 + v28) = 0;
  v161 = 0;
  *(_QWORD *)&v162 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v161 = 3;
  v31 = (_QWORD *)operator new(0x20u);
  v32 = v150;
  v33 = v31 + 2;
  v34 = v151;
  *v31 = v31 + 2;
  if ( v32 == v152 )
  {
    v90 = v34 + 1;
    if ( (unsigned int)(v34 + 1) >= 8 )
    {
      v31[2] = v152[0];
      *(_QWORD *)((char *)v33 + v90 - 8) = *(_QWORD *)((char *)&v152[-1] + v90);
      v112 = (unsigned __int64)(v31 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v113 = (char *)v33 - v112;
      v114 = (char *)((char *)v152 - v113);
      if ( (((_DWORD)v113 + v90) & 0xFFFFFFF8) >= 8 )
      {
        v115 = s2;
        v116 = ((_DWORD)v113 + v90) & 0xFFFFFFF8;
        v117 = 0;
        do
        {
          v118 = v117;
          v117 += 8;
          *(_QWORD *)(v112 + v118) = *(_QWORD *)&v114[v118];
        }
        while ( v117 < v116 );
        s2 = v115;
      }
    }
    else if ( (v90 & 4) != 0 )
    {
      *((_DWORD *)v31 + 4) = v152[0];
      *(_DWORD *)((char *)v33 + v90 - 4) = *(_DWORD *)((char *)&v151 + v90 + 4);
    }
    else if ( (_DWORD)v34 != -1 )
    {
      *((_BYTE *)v31 + 16) = v152[0];
      if ( (v90 & 2) != 0 )
        *(_WORD *)((char *)v33 + v90 - 2) = *(_WORD *)((char *)&v151 + v90 + 6);
    }
  }
  else
  {
    *v31 = v32;
    v31[2] = v152[0];
  }
  v31[1] = v34;
  v150 = v152;
  v151 = 0;
  LOBYTE(v152[0]) = 0;
  v162 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v172,
    (const __m128i *)&v159);
  v163 = 0;
  v173 = 0;
  *(_QWORD *)&v164 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v163 = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "signature");
  *(_QWORD *)(v35 + 8) = 9;
  v164 = (unsigned __int64)v35;
  if ( (_QWORD)v147 )
  {
    v84 = v146;
    v140.m128i_i64[0] = (__int64)v155;
    v153 = v155;
    if ( !v146 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v37 = strlen(v146);
    *(_QWORD *)v144 = v37;
    v85 = v37;
    if ( v37 <= 0xF )
    {
      if ( v37 == 1 )
      {
        LOBYTE(v155[0]) = *v84;
        v36 = (_BYTE *)v140.m128i_i64[0];
        goto LABEL_47;
      }
      if ( !v37 )
        goto LABEL_46;
      v86 = (void *)v140.m128i_i64[0];
    }
    else
    {
      v153 = (void *)std::string::_M_create();
      v86 = v153;
      v155[0] = *(_QWORD *)v144;
    }
    memcpy(v86, v84, v85);
    v37 = *(_QWORD *)v144;
    v36 = v153;
    goto LABEL_47;
  }
  v140.m128i_i64[0] = (__int64)v155;
  v153 = v155;
LABEL_46:
  v36 = (_BYTE *)v140.m128i_i64[0];
  v37 = 0;
LABEL_47:
  v154 = v37;
  v36[v37] = 0;
  if ( v154 - 0x7FFFFFFFFFFFFFFALL <= 4 )
    std::__throw_length_error("basic_string::append");
  v38 = std::string::_M_append();
  v39 = v38 + 16;
  v156 = v158;
  if ( *(_QWORD *)v38 == v38 + 16 )
  {
    v92 = v158;
    v93 = *(_QWORD *)(v38 + 8) + 1LL;
    v94 = (_DWORD *)(v38 + 16);
    if ( (unsigned int)v93 >= 8 )
    {
      v120 = s2;
      LODWORD(v121) = 0;
      do
      {
        v122 = (unsigned int)v121;
        v121 = (unsigned int)(v121 + 8);
        *(_QWORD *)((char *)v158 + v122) = *(_QWORD *)(v39 + v122);
      }
      while ( (unsigned int)v121 < ((unsigned int)v93 & 0xFFFFFFF8) );
      v92 = (_DWORD *)((char *)v158 + v121);
      s2 = v120;
      v94 = (_DWORD *)(v39 + v121);
    }
    v95 = 0;
    if ( (v93 & 4) != 0 )
    {
      *v92 = *v94;
      v95 = 4;
    }
    if ( (v93 & 2) != 0 )
    {
      *(_WORD *)((char *)v92 + v95) = *(_WORD *)((char *)v94 + v95);
      v95 += 2;
    }
    if ( (v93 & 1) != 0 )
      *((_BYTE *)v92 + v95) = *((_BYTE *)v94 + v95);
  }
  else
  {
    v156 = *(void **)v38;
    v158[0] = *(_QWORD *)(v38 + 16);
  }
  v40 = *(char **)(v38 + 8);
  *(_QWORD *)v38 = v39;
  *(_QWORD *)(v38 + 8) = 0;
  v157 = v40;
  *(_BYTE *)(v38 + 16) = 0;
  v165 = 0;
  v166.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v165 = 3;
  v41 = (_QWORD *)operator new(0x20u);
  v42 = v156;
  v43 = v41 + 2;
  v44 = v157;
  *v41 = v41 + 2;
  if ( v42 == v158 )
  {
    v91 = (_DWORD)v44 + 1;
    if ( (unsigned int)((_DWORD)v44 + 1) >= 8 )
    {
      v41[2] = v158[0];
      *(_QWORD *)((char *)v43 + v91 - 8) = *(_QWORD *)((char *)&v158[-1] + v91);
      v105 = (unsigned __int64)(v41 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v106 = (char *)v43 - v105;
      v107 = (char *)((char *)v158 - v106);
      if ( (((_DWORD)v106 + v91) & 0xFFFFFFF8) >= 8 )
      {
        v108 = s2;
        v109 = ((_DWORD)v106 + v91) & 0xFFFFFFF8;
        v110 = 0;
        do
        {
          v111 = v110;
          v110 += 8;
          *(_QWORD *)(v105 + v111) = *(_QWORD *)&v107[v111];
        }
        while ( v110 < v109 );
        s2 = v108;
      }
    }
    else if ( (v91 & 4) != 0 )
    {
      *((_DWORD *)v41 + 4) = v158[0];
      *(_DWORD *)((char *)v43 + v91 - 4) = *(_DWORD *)((char *)&v157 + v91 + 4);
    }
    else if ( (_DWORD)v44 != -1 )
    {
      *((_BYTE *)v41 + 16) = v158[0];
      if ( (v91 & 2) != 0 )
        *(_WORD *)((char *)v43 + v91 - 2) = *(_WORD *)((char *)&v157 + v91 + 6);
    }
  }
  else
  {
    *v41 = v42;
    v41[2] = v158[0];
  }
  v41[1] = v44;
  v156 = v158;
  v157 = nullptr;
  LOBYTE(v158[0]) = 0;
  v166 = (__m128i)(unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v174,
    (const __m128i *)&v163);
  LOBYTE(v167) = 0;
  v175 = 0;
  *(_QWORD *)&v168 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v167) = 3;
  v45 = operator new(0x20u);
  v46 = (const __m128i *)v141;
  strcpy((char *)(v45 + 16), "has_type_info");
  *(_QWORD *)v45 = v45 + 16;
  *(_QWORD *)(v45 + 8) = 13;
  v169 = 4;
  v170 = 0;
  v171 = 0;
  v168 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v176,
    v46);
  v177 = 0;
  v144[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v144,
    &v172,
    3);
  v47 = v145;
  v48 = (__m128i *)v178;
  LOBYTE(v46) = *(_BYTE *)v7;
  *(_BYTE *)v7 = v144[0];
  v49 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)(v7 + 8) = v47;
  v145 = v49;
  v144[0] = (char)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v48 = (__m128i *)((char *)v48 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v48 != &v172 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v156 != v158 )
    operator delete(v156, v158[0] + 1LL);
  if ( v153 != (void *)v140.m128i_i64[0] )
    operator delete(v153, v155[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v150 != v152 )
    operator delete(v150, v152[0] + 1LL);
  if ( src )
  {
    *(_QWORD *)&v149 = 0;
    qfree();
  }
LABEL_62:
  if ( (unsigned __int8)ida_mcp::tools::functions::`anonymous namespace'::detect_pac_protection(
                          *(_QWORD *)s2,
                          *((_QWORD *)s2 + 1)) )
  {
    s2 = (void *)ida_mcp::tools::functions::`anonymous namespace'::get_pac_key_for_function(
                   *(_QWORD *)s2,
                   *((_QWORD *)s2 + 1));
    v51 = s2;
    *(_QWORD *)&v149 = 1;
    v52 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v53 = *(_BYTE *)v52;
    v54 = *(_QWORD *)(v52 + 8);
    *(_BYTE *)v52 = 4;
    LOBYTE(src) = v53;
    *(_QWORD *)(v52 + 8) = v149;
    *(_QWORD *)&v149 = v54;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v51 )
    {
      src = nullptr;
      *(_QWORD *)&v149 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v55 = (_QWORD *)operator new(0x20u);
      v56 = v55 + 2;
      v57 = (const char *)s2;
      v58 = v55;
      *v55 = v55 + 2;
      v59 = strlen(v57);
      *(_QWORD *)v144 = v59;
      v60 = v59;
      if ( v59 > 0xF )
      {
        v104 = std::string::_M_create();
        *v58 = v104;
        v56 = (_BYTE *)v104;
        v58[2] = *(_QWORD *)v144;
      }
      else
      {
        if ( v59 == 1 )
        {
          *((_BYTE *)v58 + 16) = *(_BYTE *)s2;
          goto LABEL_71;
        }
        if ( !v59 )
        {
LABEL_71:
          v58[1] = v59;
          v56[v59] = 0;
          v61 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v62 = *(_BYTE *)v61;
          v63 = *(_QWORD *)(v61 + 8);
          *(_BYTE *)v61 = 3;
          *(_QWORD *)(v61 + 8) = v58;
          LOBYTE(src) = v62;
          *(_QWORD *)&v149 = v63;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_63;
        }
      }
      memcpy(v56, s2, v60);
      v59 = *(_QWORD *)v144;
      v56 = (_BYTE *)*v58;
      goto LABEL_71;
    }
  }
LABEL_63:
  if ( v146 )
  {
    *(_QWORD *)&v147 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v7;
}

