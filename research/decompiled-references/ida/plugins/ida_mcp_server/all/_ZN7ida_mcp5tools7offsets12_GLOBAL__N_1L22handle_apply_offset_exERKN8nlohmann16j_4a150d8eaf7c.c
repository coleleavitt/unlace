_QWORD *__fastcall ida_mcp::tools::offsets::`anonymous namespace'::handle_apply_offset_ex(_QWORD *a1)
{
  void *exception; // r13
  std::runtime_error *v2; // rbx
  void *v3; // rbp
  char *v4; // rax
  std::runtime_error *v5; // rbx
  void *v6; // rbp
  std::runtime_error *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  _BYTE *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r12
  _BYTE *v14; // rax
  __int64 v15; // rdx
  char v16; // al
  _BYTE *v17; // rax
  __int64 v18; // rdx
  char v19; // al
  __m128i si128; // xmm0
  unsigned __int8 v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 *v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rcx
  __int64 v49; // rsi
  __int64 *v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  _QWORD *v61; // rcx
  __int64 v62; // rsi
  __int64 *v63; // rbp
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 *v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  char *v76; // rbp
  unsigned int v78; // edx
  unsigned int v79; // edx
  unsigned int v80; // edx
  unsigned __int64 v81; // rdi
  char *v82; // rcx
  char *v83; // r8
  unsigned int v84; // edx
  unsigned int v85; // edx
  unsigned int v86; // ecx
  __int64 v87; // r9
  unsigned __int64 v88; // rdi
  char *v89; // rcx
  char *v90; // r8
  unsigned int v91; // edx
  unsigned int v92; // edx
  unsigned int v93; // ecx
  __int64 v94; // r9
  unsigned __int64 v95; // rdi
  char *v96; // rcx
  char *v97; // r8
  unsigned int v98; // edx
  unsigned int v99; // edx
  unsigned int v100; // ecx
  __int64 v101; // r9
  int v102; // [rsp+158h] [rbp-3F8h]
  int v103; // [rsp+158h] [rbp-3F8h]
  int v104; // [rsp+158h] [rbp-3F8h]
  int v105; // [rsp+158h] [rbp-3F8h]
  int v106; // [rsp+158h] [rbp-3F8h]
  int v107; // [rsp+158h] [rbp-3F8h]
  int v108; // [rsp+158h] [rbp-3F8h]
  const __m128i *v109; // [rsp+158h] [rbp-3F8h]
  _BYTE *v110; // [rsp+160h] [rbp-3F0h]
  _BYTE *v111; // [rsp+160h] [rbp-3F0h]
  char v112; // [rsp+160h] [rbp-3F0h]
  int v113; // [rsp+160h] [rbp-3F0h]
  int v114; // [rsp+160h] [rbp-3F0h]
  int v115; // [rsp+160h] [rbp-3F0h]
  int v116; // [rsp+160h] [rbp-3F0h]
  int v117; // [rsp+160h] [rbp-3F0h]
  int v118; // [rsp+160h] [rbp-3F0h]
  int v119; // [rsp+160h] [rbp-3F0h]
  __int64 v120; // [rsp+160h] [rbp-3F0h]
  __int128 *v121; // [rsp+168h] [rbp-3E8h] BYREF
  _QWORD *v122; // [rsp+170h] [rbp-3E0h]
  __m128 v123; // [rsp+178h] [rbp-3D8h] BYREF
  __int128 *v124; // [rsp+188h] [rbp-3C8h]
  __int128 *v125; // [rsp+190h] [rbp-3C0h]
  __int128 *v126; // [rsp+198h] [rbp-3B8h]
  __int128 *v127; // [rsp+1A0h] [rbp-3B0h]
  __int128 *v128; // [rsp+1A8h] [rbp-3A8h]
  __int128 *v129; // [rsp+1B0h] [rbp-3A0h]
  __int64 v130; // [rsp+1B8h] [rbp-398h]
  int v131; // [rsp+1C0h] [rbp-390h]
  unsigned __int8 v132; // [rsp+1C7h] [rbp-389h]
  char *v133; // [rsp+1C8h] [rbp-388h]
  char *v134; // [rsp+1D0h] [rbp-380h]
  char *v135; // [rsp+1D8h] [rbp-378h]
  void **v136; // [rsp+1E0h] [rbp-370h]
  void **v137; // [rsp+1E8h] [rbp-368h]
  void **v138; // [rsp+1F0h] [rbp-360h]
  __int64 v139; // [rsp+1F8h] [rbp-358h]
  __int64 v140; // [rsp+200h] [rbp-350h]
  __int64 v141; // [rsp+208h] [rbp-348h]
  __int64 v142; // [rsp+210h] [rbp-340h]
  __int64 v143; // [rsp+218h] [rbp-338h]
  __int64 v144; // [rsp+220h] [rbp-330h]
  __m128i v145; // [rsp+228h] [rbp-328h]
  __int64 v146; // [rsp+238h] [rbp-318h]
  int v147; // [rsp+240h] [rbp-310h]
  void *v148; // [rsp+248h] [rbp-308h] BYREF
  __int64 v149; // [rsp+250h] [rbp-300h]
  _QWORD v150[2]; // [rsp+258h] [rbp-2F8h] BYREF
  void *v151; // [rsp+268h] [rbp-2E8h] BYREF
  __int64 v152; // [rsp+270h] [rbp-2E0h]
  _QWORD v153[2]; // [rsp+278h] [rbp-2D8h] BYREF
  void *v154; // [rsp+288h] [rbp-2C8h] BYREF
  __int64 v155; // [rsp+290h] [rbp-2C0h]
  _QWORD v156[2]; // [rsp+298h] [rbp-2B8h] BYREF
  char v157; // [rsp+2A8h] [rbp-2A8h] BYREF
  __int128 v158; // [rsp+2B0h] [rbp-2A0h] BYREF
  char v159; // [rsp+2C0h] [rbp-290h]
  __int128 v160; // [rsp+2C8h] [rbp-288h] BYREF
  char v161; // [rsp+2D8h] [rbp-278h] BYREF
  __int128 v162; // [rsp+2E0h] [rbp-270h] BYREF
  char v163; // [rsp+2F0h] [rbp-260h]
  __int64 v164; // [rsp+2F8h] [rbp-258h]
  __int64 v165; // [rsp+300h] [rbp-250h]
  char v166; // [rsp+308h] [rbp-248h] BYREF
  __int128 v167; // [rsp+310h] [rbp-240h] BYREF
  char v168; // [rsp+320h] [rbp-230h]
  __int64 v169; // [rsp+328h] [rbp-228h]
  __int64 v170; // [rsp+330h] [rbp-220h]
  char v171; // [rsp+338h] [rbp-218h] BYREF
  __int128 v172; // [rsp+340h] [rbp-210h] BYREF
  char v173; // [rsp+350h] [rbp-200h]
  __int128 v174; // [rsp+358h] [rbp-1F8h] BYREF
  char v175; // [rsp+368h] [rbp-1E8h] BYREF
  __int128 v176; // [rsp+370h] [rbp-1E0h] BYREF
  char v177; // [rsp+380h] [rbp-1D0h]
  __int128 v178; // [rsp+388h] [rbp-1C8h] BYREF
  char v179; // [rsp+398h] [rbp-1B8h] BYREF
  __int128 v180; // [rsp+3A0h] [rbp-1B0h]
  char v181; // [rsp+3B0h] [rbp-1A0h]
  __int64 v182; // [rsp+3B8h] [rbp-198h]
  __int64 v183; // [rsp+3C0h] [rbp-190h]
  void *v184; // [rsp+3C8h] [rbp-188h] BYREF
  __int128 v185; // [rsp+3D0h] [rbp-180h] BYREF
  char v186; // [rsp+3E0h] [rbp-170h]
  __int64 v187; // [rsp+3E8h] [rbp-168h]
  __int64 v188; // [rsp+3F0h] [rbp-160h]
  _QWORD v189[3]; // [rsp+3F8h] [rbp-158h] BYREF
  _QWORD v190[3]; // [rsp+410h] [rbp-140h] BYREF
  _QWORD v191[3]; // [rsp+428h] [rbp-128h] BYREF
  _QWORD v192[3]; // [rsp+440h] [rbp-110h] BYREF
  _QWORD v193[3]; // [rsp+458h] [rbp-F8h] BYREF
  _QWORD v194[3]; // [rsp+470h] [rbp-E0h] BYREF
  _QWORD v195[3]; // [rsp+488h] [rbp-C8h] BYREF
  char v196; // [rsp+4A0h] [rbp-B0h] BYREF
  char v197[32]; // [rsp+4A8h] [rbp-A8h] BYREF
  char v198[32]; // [rsp+4C8h] [rbp-88h] BYREF
  char v199[40]; // [rsp+4E8h] [rbp-68h] BYREF
  unsigned __int64 v200; // [rsp+510h] [rbp-40h]

  v122 = a1;
  v200 = __readfsqword(0x28u);
  v184 = (char *)&v185 + 8;
  v10 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v185 = 0;
  BYTE8(v185) = 0;
  if ( *v10 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *v10 )
    {
      case 0:
        v9 = "null";
        break;
      case 1:
        v9 = "object";
        break;
      case 2:
        v9 = (char *)"array";
        break;
      case 3:
        v9 = "string";
        break;
      case 4:
        v9 = "boolean";
        break;
      case 8:
        v9 = "binary";
        break;
      case 9:
        v9 = "discarded";
        break;
      default:
        v9 = "number";
        break;
    }
    v145.m128i_i64[0] = (__int64)v9;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v11 = ida_mcp::parse_ea(v184, v185);
  v140 = v12;
  v13 = v12;
  v139 = v11;
  if ( v184 != (char *)&v185 + 8 )
    operator delete(v184, *((_QWORD *)&v185 + 1) + 1LL);
  if ( !v13 )
  {
    v7 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v7, "Invalid address format");
    __cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v145.m128i_i32[0] = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  v14 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v184 = (char *)&v185 + 8;
  *(_QWORD *)&v185 = 0;
  BYTE8(v185) = 0;
  if ( *v14 != 3 )
  {
    v111 = v14;
    v6 = __cxa_allocate_exception(0x20u);
    switch ( *v111 )
    {
      case 0:
        v8 = "null";
        break;
      case 1:
        v8 = "object";
        break;
      case 2:
        v8 = (char *)"array";
        break;
      case 3:
        v8 = "string";
        break;
      case 4:
        v8 = "boolean";
        break;
      case 8:
        v8 = "binary";
        break;
      case 9:
        v8 = "discarded";
        break;
      default:
        v8 = "number";
        break;
    }
    v145.m128i_i64[0] = (__int64)v8;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v6,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v141 = ida_mcp::parse_ea(v184, v185);
  v142 = v15;
  v16 = v15;
  if ( v184 != (char *)&v185 + 8 )
  {
    v112 = v15;
    operator delete(v184, *((_QWORD *)&v185 + 1) + 1LL);
    v16 = v112;
  }
  if ( !v16 )
  {
    v5 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v5, "Invalid target address format");
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v113 = v141;
  v17 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v184 = (char *)&v185 + 8;
  *(_QWORD *)&v185 = 0;
  BYTE8(v185) = 0;
  if ( *v17 != 3 )
  {
    v110 = v17;
    v3 = __cxa_allocate_exception(0x20u);
    switch ( *v110 )
    {
      case 0:
        v4 = "null";
        break;
      case 1:
        v4 = "object";
        break;
      case 2:
        v4 = (char *)"array";
        break;
      case 3:
        v4 = "string";
        break;
      case 4:
        v4 = "boolean";
        break;
      case 8:
        v4 = "binary";
        break;
      case 9:
        v4 = "discarded";
        break;
      default:
        v4 = "number";
        break;
    }
    v145.m128i_i64[0] = (__int64)v4;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v3,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v143 = ida_mcp::parse_ea(v184, v185);
  v144 = v18;
  v19 = v18;
  if ( v184 != (char *)&v185 + 8 )
  {
    LOBYTE(v121) = v18;
    operator delete(v184, *((_QWORD *)&v185 + 1) + 1LL);
    v19 = (char)v121;
  }
  if ( !v19 )
  {
    v2 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v2, "Invalid base address format");
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v121 = (__int128 *)v143;
  v123 = _mm_loadh_ps((const double *)&v121);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v145.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,long,0>();
  si128 = _mm_load_si128((const __m128i *)&v123);
  v147 = 0;
  v130 = v145.m128i_i64[0];
  v146 = v145.m128i_i64[0];
  v145 = si128;
  v21 = op_offset_ex();
  v157 = 0;
  v132 = v21;
  v123.m128_u64[0] = (unsigned __int64)&v158;
  *(_QWORD *)&v158 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v22 = operator new(0x20u);
  *(_QWORD *)v22 = v22 + 16;
  strcpy((char *)(v22 + 16), "address");
  *(_QWORD *)(v22 + 8) = 7;
  v158 = (unsigned __int64)v22;
  qsnprintf();
  v136 = &v148;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v148,
    v197,
    v23,
    v24,
    v25,
    v26,
    (int)&v184,
    v113,
    (__int64)v121);
  v159 = 0;
  v124 = &v160;
  *(_QWORD *)&v160 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v159 = 3;
  v27 = (_QWORD *)operator new(0x20u);
  v28 = v148;
  v29 = v27 + 2;
  v30 = v149;
  *v27 = v27 + 2;
  if ( v28 == v150 )
  {
    v78 = v30 + 1;
    if ( (unsigned int)(v30 + 1) >= 8 )
    {
      v27[2] = v150[0];
      *(_QWORD *)((char *)v29 + v78 - 8) = *(_QWORD *)((char *)&v150[-1] + v78);
      v81 = (unsigned __int64)(v27 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v82 = (char *)v29 - v81;
      v83 = (char *)((char *)v150 - v82);
      v84 = ((_DWORD)v82 + v78) & 0xFFFFFFF8;
      if ( v84 >= 8 )
      {
        v85 = v84 & 0xFFFFFFF8;
        v86 = 0;
        do
        {
          v87 = v86;
          v86 += 8;
          *(_QWORD *)(v81 + v87) = *(_QWORD *)&v83[v87];
        }
        while ( v86 < v85 );
      }
    }
    else if ( (v78 & 4) != 0 )
    {
      *((_DWORD *)v27 + 4) = v150[0];
      *(_DWORD *)((char *)v29 + v78 - 4) = *(_DWORD *)((char *)&v149 + v78 + 4);
    }
    else if ( (_DWORD)v30 != -1 )
    {
      *((_BYTE *)v27 + 16) = v150[0];
      if ( (v78 & 2) != 0 )
        *(_WORD *)((char *)v29 + v78 - 2) = *(_WORD *)((char *)&v149 + v78 + 6);
    }
  }
  else
  {
    *v27 = v28;
    v27[2] = v150[0];
  }
  v27[1] = v30;
  v148 = v150;
  v149 = 0;
  LOBYTE(v150[0]) = 0;
  v133 = &v157;
  v160 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v189,
    (const __m128i *)&v157);
  v189[2] = 0;
  v161 = 0;
  *(_QWORD *)&v162 = 0;
  v125 = &v162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v161 = 3;
  v31 = operator new(0x20u);
  strcpy((char *)(v31 + 16), "operand");
  *(_QWORD *)v31 = v31 + 16;
  *(_QWORD *)(v31 + 8) = 7;
  v163 = 5;
  v164 = 0;
  v165 = 0;
  v162 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v190,
    (const __m128i *)&v161);
  v190[2] = 0;
  v166 = 0;
  *(_QWORD *)&v167 = 0;
  v126 = &v167;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v166 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "reftype", v33, v34, v35, v36, v102, v114, (__int64)v121);
  v168 = 5;
  v169 = 0;
  v170 = 0;
  v167 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v191,
    (const __m128i *)&v166);
  v191[2] = 0;
  v171 = 0;
  *(_QWORD *)&v172 = 0;
  v127 = &v172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v171 = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v37, "target", v38, v39, v40, v41, v103, v115, (__int64)v121);
  v172 = (unsigned __int64)v37;
  qsnprintf();
  v137 = &v151;
  std::string::basic_string<std::allocator<char>>((__int64 *)&v151, v198, v42, v43, v44, v45, v104, v116, (__int64)v121);
  v173 = 0;
  v128 = &v174;
  *(_QWORD *)&v174 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v173 = 3;
  v46 = (_QWORD *)operator new(0x20u);
  v47 = v151;
  v48 = v46 + 2;
  v49 = v152;
  *v46 = v46 + 2;
  if ( v47 == v153 )
  {
    v79 = v49 + 1;
    if ( (unsigned int)(v49 + 1) >= 8 )
    {
      v46[2] = v153[0];
      *(_QWORD *)((char *)v48 + v79 - 8) = *(_QWORD *)((char *)&v153[-1] + v79);
      v88 = (unsigned __int64)(v46 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v89 = (char *)v48 - v88;
      v90 = (char *)((char *)v153 - v89);
      v91 = ((_DWORD)v89 + v79) & 0xFFFFFFF8;
      if ( v91 >= 8 )
      {
        v92 = v91 & 0xFFFFFFF8;
        v93 = 0;
        do
        {
          v94 = v93;
          v93 += 8;
          *(_QWORD *)(v88 + v94) = *(_QWORD *)&v90[v94];
        }
        while ( v93 < v92 );
      }
    }
    else if ( (v79 & 4) != 0 )
    {
      *((_DWORD *)v46 + 4) = v153[0];
      *(_DWORD *)((char *)v48 + v79 - 4) = *(_DWORD *)((char *)&v152 + v79 + 4);
    }
    else if ( (_DWORD)v49 != -1 )
    {
      *((_BYTE *)v46 + 16) = v153[0];
      if ( (v79 & 2) != 0 )
        *(_WORD *)((char *)v48 + v79 - 2) = *(_WORD *)((char *)&v152 + v79 + 6);
    }
  }
  else
  {
    *v46 = v47;
    v46[2] = v153[0];
  }
  v46[1] = v49;
  v151 = v153;
  v152 = 0;
  LOBYTE(v153[0]) = 0;
  v134 = &v171;
  v174 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v192,
    (const __m128i *)&v171);
  v192[2] = 0;
  v175 = 0;
  *(_QWORD *)&v176 = 0;
  v129 = &v176;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v175 = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "base", v51, v52, v53, v54, v105, v117, (__int64)v121);
  v176 = (unsigned __int64)v50;
  qsnprintf();
  v138 = &v154;
  std::string::basic_string<std::allocator<char>>((__int64 *)&v154, v199, v55, v56, v57, v58, v106, v118, (__int64)v121);
  v177 = 0;
  v121 = &v178;
  *(_QWORD *)&v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v59 = (_QWORD *)operator new(0x20u);
  v60 = v154;
  v61 = v59 + 2;
  v62 = v155;
  *v59 = v59 + 2;
  if ( v60 == v156 )
  {
    v80 = v62 + 1;
    if ( (unsigned int)(v62 + 1) >= 8 )
    {
      v59[2] = v156[0];
      *(_QWORD *)((char *)v61 + v80 - 8) = *(_QWORD *)((char *)&v156[-1] + v80);
      v95 = (unsigned __int64)(v59 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v96 = (char *)v61 - v95;
      v97 = (char *)((char *)v156 - v96);
      v98 = ((_DWORD)v96 + v80) & 0xFFFFFFF8;
      if ( v98 >= 8 )
      {
        v99 = v98 & 0xFFFFFFF8;
        v100 = 0;
        do
        {
          v101 = v100;
          v100 += 8;
          *(_QWORD *)(v95 + v101) = *(_QWORD *)&v97[v101];
        }
        while ( v100 < v99 );
      }
    }
    else if ( (v80 & 4) != 0 )
    {
      *((_DWORD *)v59 + 4) = v156[0];
      *(_DWORD *)((char *)v61 + v80 - 4) = *(_DWORD *)((char *)&v155 + v80 + 4);
    }
    else if ( (_DWORD)v62 != -1 )
    {
      *((_BYTE *)v59 + 16) = v156[0];
      if ( (v80 & 2) != 0 )
        *(_WORD *)((char *)v61 + v80 - 2) = *(_WORD *)((char *)&v155 + v80 + 6);
    }
  }
  else
  {
    *v59 = v60;
    v59[2] = v156[0];
  }
  v59[1] = v62;
  v154 = v156;
  v155 = 0;
  LOBYTE(v156[0]) = 0;
  v135 = &v175;
  v178 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v193,
    (const __m128i *)&v175);
  v193[2] = 0;
  v179 = 0;
  *(_QWORD *)&v180 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v63 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v63, "tdelta", v64, v65, v66, v67, v107, v119, (__int64)v121);
  v181 = 6;
  v182 = v130;
  v183 = 0;
  v180 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v194,
    (const __m128i *)&v179);
  v194[2] = 0;
  LOBYTE(v184) = 0;
  *(_QWORD *)&v185 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v184) = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "success", v69, v70, v71, v72, v108, (int)&v185, (__int64)v121);
  v186 = 4;
  v187 = v132;
  v188 = 0;
  v185 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v195,
    v109);
  v195[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v122,
    (__int64)v189,
    7,
    v73,
    v74,
    v75,
    (int)v109,
    v120,
    (int)v121,
    (int)v122,
    v123.m128_i32[0],
    v123.m128_i32[2],
    (__int64)v124,
    (int)v125,
    (int)v126,
    (int)v127,
    (int)v128,
    (char)v129,
    v130,
    v131,
    (__int64)v133);
  v76 = &v196;
  do
  {
    v76 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v76 != (char *)v189 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v154 != v156 )
    operator delete(v154, v156[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v151 != v153 )
    operator delete(v151, v153[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v148 != v150 )
    operator delete(v148, v150[0] + 1LL);
  return v122;
}

