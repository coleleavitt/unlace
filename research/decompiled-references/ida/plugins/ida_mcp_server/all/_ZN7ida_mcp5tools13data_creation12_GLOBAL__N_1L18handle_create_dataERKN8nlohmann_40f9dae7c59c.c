__int64 __fastcall ida_mcp::tools::data_creation::`anonymous namespace'::handle_create_data(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        char a40,
        int a41,
        int a42,
        char a43,
        int a44,
        int a45,
        char a46,
        int a47,
        int a48,
        char a49,
        int a50,
        int a51,
        char a52,
        int a53,
        int a54,
        char a55,
        char a56,
        int a57,
        char a58,
        int a59,
        int a60,
        char a61,
        char a62,
        int a63,
        char a64,
        int a65,
        int a66,
        char a67,
        char a68,
        int a69,
        int a70,
        int a71,
        int a72,
        int a73,
        int a74,
        int a75,
        int a76,
        int a77,
        int a78,
        int a79,
        int a80,
        int a81,
        int a82,
        int a83,
        int a84,
        char a85,
        int a86,
        int a87,
        int a88,
        int a89,
        int a90,
        __int64 a91)
{
  void *v91; // r12
  void *v92; // rbp
  char *v93; // rax
  void *v94; // rax
  unsigned __int64 v95; // rbx
  void *v96; // rbp
  void *exception; // r12
  char *v98; // rax
  void *v99; // rbp
  char *v100; // rax
  std::runtime_error *v101; // rbx
  char *v102; // rax
  unsigned __int64 v103; // rbx
  _BYTE *v104; // rbp
  __int64 v105; // rax
  __int64 v106; // rdx
  char v107; // bp
  __int64 v108; // r13
  __int64 v109; // r12
  __int64 v110; // r13
  __int64 v111; // r15
  unsigned __int64 v112; // rbx
  size_t v113; // rdx
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  unsigned __int64 v119; // rax
  _BYTE *v120; // rax
  _BYTE *v121; // r15
  __int64 v122; // r8
  __int64 v123; // r13
  __int64 v124; // r15
  __int64 v125; // r14
  size_t v126; // rdx
  int v127; // eax
  unsigned __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  _QWORD *v134; // rax
  _QWORD *v135; // rdx
  _QWORD *v136; // rcx
  __int64 v137; // rsi
  __int64 v138; // rax
  _BYTE *v139; // r14
  unsigned __int64 v140; // r15
  _QWORD *v141; // rax
  _BYTE *v142; // rdi
  __int64 *v143; // rbp
  __m128i v144; // xmm0
  size_t v145; // rcx
  __int64 v146; // rax
  __int64 *v147; // rbp
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 *v152; // rbp
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 *v157; // rbp
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  char *v165; // rbp
  __int64 v167; // rax
  unsigned __int64 v168; // rax
  __int64 v169; // rdi
  unsigned int v170; // edx
  unsigned __int64 v171; // rdi
  char *v172; // rcx
  char *v173; // r8
  unsigned int v174; // edx
  unsigned int v175; // edx
  unsigned int v176; // ecx
  __int64 v177; // r9
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  void **v182; // [rsp+0h] [rbp-2E8h]
  int v183; // [rsp+0h] [rbp-2E8h]
  int v184; // [rsp+0h] [rbp-2E8h]
  int v185; // [rsp+0h] [rbp-2E8h]
  const __m128i *v186; // [rsp+0h] [rbp-2E8h]
  int v187; // [rsp+8h] [rbp-2E0h]
  int v188; // [rsp+8h] [rbp-2E0h]
  int v189; // [rsp+8h] [rbp-2E0h]
  int v190; // [rsp+8h] [rbp-2E0h]
  _QWORD *v191; // [rsp+8h] [rbp-2E0h]
  __int64 v192; // [rsp+8h] [rbp-2E0h]
  __int64 v193; // [rsp+10h] [rbp-2D8h]
  __int64 v194; // [rsp+10h] [rbp-2D8h]
  __int64 v195; // [rsp+10h] [rbp-2D8h]
  __int64 v196; // [rsp+10h] [rbp-2D8h]
  __int64 v197; // [rsp+10h] [rbp-2D8h]
  int v198; // [rsp+10h] [rbp-2D8h]
  unsigned __int64 v199; // [rsp+28h] [rbp-2C0h]
  int v200; // [rsp+40h] [rbp-2A8h]
  unsigned __int8 data; // [rsp+47h] [rbp-2A1h]
  __m128i v202; // [rsp+50h] [rbp-298h] BYREF
  char *v203; // [rsp+60h] [rbp-288h]
  void **v204; // [rsp+68h] [rbp-280h]
  __int64 v205; // [rsp+70h] [rbp-278h]
  int v206; // [rsp+7Ch] [rbp-26Ch] BYREF
  __int64 v207; // [rsp+80h] [rbp-268h]
  __int64 v208; // [rsp+88h] [rbp-260h]
  unsigned __int64 v209; // [rsp+90h] [rbp-258h]
  __int64 v210; // [rsp+98h] [rbp-250h]
  __int64 v211; // [rsp+A0h] [rbp-248h]
  unsigned __int64 v212; // [rsp+A8h] [rbp-240h]
  char *v213; // [rsp+B0h] [rbp-238h]
  __int64 v214; // [rsp+B8h] [rbp-230h]
  __int64 v215; // [rsp+C0h] [rbp-228h]
  unsigned __int64 v216; // [rsp+C8h] [rbp-220h]
  void *src; // [rsp+D0h] [rbp-218h] BYREF
  unsigned __int64 v218; // [rsp+D8h] [rbp-210h]
  _QWORD v219[2]; // [rsp+E0h] [rbp-208h] BYREF
  void *v220; // [rsp+F0h] [rbp-1F8h] BYREF
  __int64 v221; // [rsp+F8h] [rbp-1F0h]
  _QWORD v222[2]; // [rsp+100h] [rbp-1E8h] BYREF
  char v223; // [rsp+110h] [rbp-1D8h] BYREF
  __int128 v224; // [rsp+118h] [rbp-1D0h] BYREF
  char v225; // [rsp+128h] [rbp-1C0h]
  __int128 v226; // [rsp+130h] [rbp-1B8h] BYREF
  char v227; // [rsp+140h] [rbp-1A8h] BYREF
  __int128 v228; // [rsp+148h] [rbp-1A0h] BYREF
  char v229; // [rsp+158h] [rbp-190h]
  __m128i v230; // [rsp+160h] [rbp-188h] BYREF
  char v231; // [rsp+170h] [rbp-178h] BYREF
  __int128 v232; // [rsp+178h] [rbp-170h]
  char v233; // [rsp+188h] [rbp-160h]
  __int64 v234; // [rsp+190h] [rbp-158h]
  __int64 v235; // [rsp+198h] [rbp-150h]
  char v236; // [rsp+1A0h] [rbp-148h] BYREF
  __int128 v237; // [rsp+1A8h] [rbp-140h]
  char v238; // [rsp+1B8h] [rbp-130h]
  __int64 v239; // [rsp+1C0h] [rbp-128h]
  __int64 v240; // [rsp+1C8h] [rbp-120h]
  void *v241; // [rsp+1D0h] [rbp-118h] BYREF
  __int128 v242; // [rsp+1D8h] [rbp-110h] BYREF
  char v243; // [rsp+1E8h] [rbp-100h]
  __int64 v244; // [rsp+1F0h] [rbp-F8h]
  __int64 v245; // [rsp+1F8h] [rbp-F0h]
  _QWORD v246[3]; // [rsp+200h] [rbp-E8h] BYREF
  _QWORD v247[3]; // [rsp+218h] [rbp-D0h] BYREF
  _QWORD v248[3]; // [rsp+230h] [rbp-B8h] BYREF
  _QWORD v249[3]; // [rsp+248h] [rbp-A0h] BYREF
  _QWORD v250[3]; // [rsp+260h] [rbp-88h] BYREF
  char v251; // [rsp+278h] [rbp-70h] BYREF
  char v252[40]; // [rsp+280h] [rbp-68h] BYREF
  unsigned __int64 v253; // [rsp+2A8h] [rbp-40h]

  v187 = a1;
  v253 = __readfsqword(0x28u);
  v103 = a2;
  v241 = (char *)&v242 + 8;
  v104 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v242 = 0;
  v182 = &v241;
  BYTE8(v242) = 0;
  if ( *v104 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *v104 )
    {
      case 0:
        v98 = "null";
        break;
      case 1:
        v98 = "object";
        break;
      case 2:
        v98 = (char *)"array";
        break;
      case 3:
        v98 = "string";
        break;
      case 4:
        v98 = "boolean";
        break;
      case 8:
        v98 = "binary";
        break;
      case 9:
        v98 = "discarded";
        break;
      default:
        v98 = "number";
        break;
    }
    v213 = v98;
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
  v105 = ida_mcp::parse_ea(v241, v242);
  v208 = v106;
  v107 = v106;
  v207 = v105;
  if ( v241 != (char *)&v242 + 8 )
    operator delete(v241, *((_QWORD *)&v242 + 1) + 1LL);
  if ( !v107 )
  {
    v101 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v101, "Invalid address");
    __cxa_throw(
      v101,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( *(_BYTE *)a2 != 1 )
  {
    v91 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v102 = "null";
        break;
      case 1:
        v102 = "object";
        break;
      case 2:
        v102 = (char *)"array";
        break;
      case 3:
        v102 = "string";
        break;
      case 4:
        v102 = "boolean";
        break;
      case 8:
        v102 = "binary";
        break;
      case 9:
        v102 = "discarded";
        break;
      default:
        v102 = "number";
        break;
    }
    v213 = v102;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v91,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v91,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v108 = *(_QWORD *)(a2 + 8);
  v209 = a2;
  v211 = 0;
  v109 = *(_QWORD *)(v108 + 16);
  v110 = v108 + 8;
  v212 = 0x8000000000000000LL;
  v111 = v110;
  if ( v109 )
  {
    v193 = a2;
    do
    {
      v112 = *(_QWORD *)(v109 + 40);
      if ( !v112 )
        goto LABEL_27;
      v113 = 4;
      if ( v112 <= 4 )
        v113 = *(_QWORD *)(v109 + 40);
      if ( ((v114 = memcmp(*(const void **)(v109 + 32), "type", v113)) != 0
         || (v114 = v112 - 4, (__int64)(v112 - 4) <= 0x7FFFFFFF))
        && v114 < 0 )
      {
LABEL_27:
        v109 = *(_QWORD *)(v109 + 24);
      }
      else
      {
        v111 = v109;
        v109 = *(_QWORD *)(v109 + 16);
      }
    }
    while ( v109 );
    v103 = a2;
    if ( v110 != v111 && std::string::compare(*(void **)(v111 + 32), *(_QWORD *)(v111 + 40), "type") > 0 )
      v111 = v110;
  }
  v210 = v111;
  v216 = 0x8000000000000000LL;
  v213 = (char *)v103;
  v215 = 0;
  v214 = v110;
  if ( (unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&src,
      "byte",
      v115,
      v116,
      v117,
      v118,
      (int)&v241,
      a1,
      v193);
    v119 = v218;
    if ( v218 == 4 )
    {
      if ( *(_DWORD *)src == 1702132066 )
      {
        v194 = 1;
        goto LABEL_33;
      }
      if ( *(_DWORD *)src == 1685221239 )
      {
        v194 = 2;
        goto LABEL_33;
      }
      goto LABEL_88;
    }
  }
  else
  {
    v120 = (_BYTE *)nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    LOBYTE(v219[0]) = 0;
    v218 = 0;
    v121 = v120;
    src = v219;
    if ( *v120 != 3 )
    {
      v92 = __cxa_allocate_exception(0x20u);
      switch ( *v121 )
      {
        case 0:
          v93 = "null";
          break;
        case 1:
          v93 = "object";
          break;
        case 2:
          v93 = (char *)"array";
          break;
        case 3:
          v93 = "string";
          break;
        case 4:
          v93 = "boolean";
          break;
        case 8:
          v93 = "binary";
          break;
        case 9:
          v93 = "discarded";
          break;
        default:
          v93 = "number";
          break;
      }
      v213 = v93;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        (__int64)v92,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        v92,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    std::string::_M_assign();
    v119 = v218;
  }
  if ( v119 != 5 )
  {
    if ( v119 == 6 && *(_DWORD *)src == 1651863396 && *((_WORD *)src + 2) == 25964 )
    {
      v194 = 8;
      goto LABEL_33;
    }
LABEL_88:
    v94 = __cxa_allocate_exception(0x10u);
    v95 = v218;
    v241 = (char *)&v242 + 8;
    v96 = v94;
    BYTE8(v242) = 0;
    *(_QWORD *)&v242 = 0;
    std::string::reserve();
    if ( (unsigned __int64)(v242 - 0x7FFFFFFFFFFFFFF1LL) > 0xD )
    {
      std::string::_M_append();
      if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v242 >= v95 )
      {
        std::string::_M_append();
        std::string::append();
        std::string::basic_string();
        std::runtime_error::runtime_error();
        std::string::_M_dispose();
        std::string::_M_dispose();
        __cxa_throw(
          v96,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))&std::runtime_error::~runtime_error);
      }
      std::__throw_length_error("basic_string::append");
    }
    std::__throw_length_error("basic_string::append");
  }
  if ( *(_DWORD *)src == 1919907684 && *((_BYTE *)src + 4) == 100 )
  {
    v194 = 4;
    goto LABEL_33;
  }
  if ( *(_DWORD *)src != 1919907697 || *((_BYTE *)src + 4) != 100 )
  {
    if ( *(_DWORD *)src == 1634692198 && *((_BYTE *)src + 4) == 116 )
    {
      v194 = 4;
      goto LABEL_33;
    }
    goto LABEL_88;
  }
  v194 = 8;
LABEL_33:
  if ( *(_BYTE *)v103 != 1 )
  {
    v99 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)v103 )
    {
      case 0:
        v100 = "null";
        break;
      case 1:
        v100 = "object";
        break;
      case 2:
        v100 = (char *)"array";
        break;
      case 3:
        v100 = "string";
        break;
      case 4:
        v100 = "boolean";
        break;
      case 8:
        v100 = "binary";
        break;
      case 9:
        v100 = "discarded";
        break;
      default:
        v100 = "number";
        break;
    }
    v213 = v100;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v99,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v99,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v122 = *(_QWORD *)(v103 + 8);
  v209 = v103;
  v211 = 0;
  v123 = *(_QWORD *)(v122 + 16);
  v124 = v122 + 8;
  v212 = 0x8000000000000000LL;
  v125 = v122 + 8;
  if ( v123 )
  {
    v199 = v103;
    do
    {
      while ( 1 )
      {
        v128 = *(_QWORD *)(v123 + 40);
        if ( !v128 )
          break;
        v126 = 5;
        if ( v128 <= 5 )
          v126 = *(_QWORD *)(v123 + 40);
        v127 = memcmp(*(const void **)(v123 + 32), "count", v126);
        if ( v127 || (v127 = v128 - 5, (__int64)(v128 - 5) <= 0x7FFFFFFF) )
        {
          if ( v127 < 0 )
            break;
        }
        v125 = v123;
        v123 = *(_QWORD *)(v123 + 16);
        if ( !v123 )
          goto LABEL_44;
      }
      v123 = *(_QWORD *)(v123 + 24);
    }
    while ( v123 );
LABEL_44:
    v103 = v199;
    if ( v124 != v125 && std::string::compare(*(void **)(v125 + 32), *(_QWORD *)(v125 + 40), "count") > 0 )
      v125 = v124;
  }
  v210 = v125;
  v213 = (char *)v103;
  v215 = 0;
  v216 = 0x8000000000000000LL;
  v214 = v124;
  if ( !(unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    v169 = nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
    ida_mcp::tools::data_creation::`anonymous namespace'::handle_create_data(
      v169,
      (__int64)&v206,
      v178,
      v179,
      v180,
      v181,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25,
      a26,
      a27,
      a28,
      a29,
      a30,
      a31,
      a32,
      a33,
      a34,
      a35,
      a36,
      a37,
      a38,
      a39,
      a40,
      a41,
      a42,
      a43,
      a44,
      a45,
      a46,
      a47,
      a48,
      a49,
      a50,
      a51,
      a52,
      a53,
      a54,
      a55,
      a56,
      a57,
      a58,
      a59,
      a60,
      a61,
      a62,
      a63,
      a64,
      a65,
      a66,
      a67,
      a68,
      a69,
      a70,
      a71,
      a72,
      a73,
      a74,
      a75,
      a76,
      a77,
      a78,
      a79,
      a80,
      a81,
      a82,
      a83,
      a84,
      a85,
      a86,
      a87,
      a88,
      a89,
      a90,
      a91);
  }
  data = create_data();
  v223 = 0;
  *(_QWORD *)&v224 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v223 = 3;
  v129 = operator new(0x20u);
  *(_QWORD *)v129 = v129 + 16;
  strcpy((char *)(v129 + 16), "address");
  *(_QWORD *)(v129 + 8) = 7;
  v224 = (unsigned __int64)v129;
  qsnprintf();
  v204 = &v220;
  std::string::basic_string<std::allocator<char>>((__int64 *)&v220, v252, v130, v131, v132, v133, (int)v182, v187, v194);
  v225 = 0;
  *(_QWORD *)&v226 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v225 = 3;
  v134 = (_QWORD *)operator new(0x20u);
  v135 = v220;
  v136 = v134 + 2;
  v137 = v221;
  *v134 = v134 + 2;
  if ( v135 == v222 )
  {
    v170 = v137 + 1;
    if ( (unsigned int)(v137 + 1) >= 8 )
    {
      v134[2] = v222[0];
      *(_QWORD *)((char *)v136 + v170 - 8) = *(_QWORD *)((char *)&v222[-1] + v170);
      v171 = (unsigned __int64)(v134 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v172 = (char *)v136 - v171;
      v173 = (char *)((char *)v222 - v172);
      v174 = ((_DWORD)v172 + v170) & 0xFFFFFFF8;
      if ( v174 >= 8 )
      {
        v175 = v174 & 0xFFFFFFF8;
        v176 = 0;
        do
        {
          v177 = v176;
          v176 += 8;
          *(_QWORD *)(v171 + v177) = *(_QWORD *)&v173[v177];
        }
        while ( v176 < v175 );
      }
    }
    else if ( (v170 & 4) != 0 )
    {
      *((_DWORD *)v134 + 4) = v222[0];
      *(_DWORD *)((char *)v136 + v170 - 4) = *(_DWORD *)((char *)&v221 + v170 + 4);
    }
    else if ( (_DWORD)v137 != -1 )
    {
      *((_BYTE *)v134 + 16) = v222[0];
      if ( (v170 & 2) != 0 )
        *(_WORD *)((char *)v136 + v170 - 2) = *(_WORD *)((char *)&v221 + v170 + 6);
    }
  }
  else
  {
    *v134 = v135;
    v134[2] = v222[0];
  }
  v134[1] = v137;
  v220 = v222;
  v221 = 0;
  LOBYTE(v222[0]) = 0;
  v203 = &v223;
  v226 = (unsigned __int64)v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v246,
    (const __m128i *)&v223);
  v246[2] = 0;
  v227 = 0;
  *(_QWORD *)&v228 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v227 = 3;
  v138 = operator new(0x20u);
  *(_QWORD *)v138 = v138 + 16;
  strcpy((char *)(v138 + 16), "type");
  *(_QWORD *)(v138 + 8) = 4;
  v229 = 0;
  v230.m128i_i64[0] = 0;
  v228 = (unsigned __int64)v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v229 = 3;
  v139 = src;
  v140 = v218;
  v141 = (_QWORD *)operator new(0x20u);
  v142 = v141 + 2;
  v209 = v140;
  v143 = v141;
  *v141 = v141 + 2;
  if ( v140 > 0xF )
  {
    v167 = std::string::_M_create();
    *v143 = v167;
    v142 = (_BYTE *)v167;
    v168 = v209;
    v144 = (__m128i)(unsigned __int64)v143;
    v143[2] = v209;
    v145 = v168 + 1;
    if ( v168 )
    {
      v146 = -1;
      if ( !v145 )
        goto LABEL_53;
      goto LABEL_52;
    }
LABEL_61:
    *v142 = *v139;
    v146 = v209;
    goto LABEL_53;
  }
  v144 = (__m128i)(unsigned __int64)v141;
  v145 = v140 + 1;
  if ( !v140 )
    goto LABEL_61;
LABEL_52:
  v202 = v144;
  memcpy(v142, v139, v145);
  v146 = v209;
  v144 = _mm_load_si128(&v202);
LABEL_53:
  v143[1] = v146;
  v202.m128i_i64[0] = (__int64)&v227;
  v230 = v144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v247,
    (const __m128i *)&v227);
  v247[2] = 0;
  v231 = 0;
  *(_QWORD *)&v232 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v231 = 3;
  v147 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v147, "size", v148, v149, v150, v151, v183, v188, v195);
  v233 = 6;
  v234 = v196;
  v235 = 0;
  v232 = (unsigned __int64)v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v248,
    (const __m128i *)&v231);
  v248[2] = 0;
  v236 = 0;
  *(_QWORD *)&v237 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v236 = 3;
  v152 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v152, "count", v153, v154, v155, v156, v184, v189, v196);
  v238 = 5;
  v239 = 1;
  v240 = 0;
  v237 = (unsigned __int64)v152;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v249,
    (const __m128i *)&v236);
  v249[2] = 0;
  LOBYTE(v241) = 0;
  *(_QWORD *)&v242 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v241) = 3;
  v157 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v157, "success", v158, v159, v160, v161, v185, v190, v197);
  v243 = 4;
  v244 = data;
  v245 = 0;
  v242 = (unsigned __int64)v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v250,
    v186);
  v250[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v191,
    (__int64)v246,
    5,
    v162,
    v163,
    v164,
    (int)v186,
    (__int64)v191,
    v198,
    1,
    (int)&v224,
    (int)&v226,
    (__int64)&v228,
    (int)&v230,
    v200,
    (int)&src,
    v202.m128i_i32[0],
    v202.m128i_i8[8],
    (__int64)v203,
    (int)v204,
    v205);
  v165 = &v251;
  do
  {
    v165 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v165 != (char *)v246 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v220 != v222 )
    operator delete(v220, v222[0] + 1LL);
  if ( src != v219 )
    operator delete(src, v219[0] + 1LL);
  return v192;
}

