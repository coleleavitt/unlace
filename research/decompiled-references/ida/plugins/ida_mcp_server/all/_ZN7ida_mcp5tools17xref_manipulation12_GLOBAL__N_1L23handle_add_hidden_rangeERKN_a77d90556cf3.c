__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_hidden_range(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        __int64 a28,
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
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64,
        int a65,
        int a66,
        int a67,
        int a68,
        int a69,
        char a70,
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
        int a85,
        int a86,
        int a87,
        int a88,
        __int64 a89)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v89; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v90; // r13
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  nlohmann::json_abi_v3_12_0::detail::type_error *v92; // rbx
  _BYTE *v94; // r12
  __int64 v95; // rax
  char v96; // dl
  char v97; // r15
  _BYTE *v98; // r12
  __int64 v99; // rsi
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  char v105; // r12
  __int64 v106; // r15
  __int64 v107; // r13
  __int64 v108; // r15
  __int64 v109; // r12
  unsigned __int64 v110; // rbx
  size_t v111; // rdx
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r8
  __int64 v118; // r12
  __int64 v119; // r8
  __int64 v120; // r13
  __int64 v121; // rbx
  __int64 v122; // r12
  size_t v123; // rdx
  int v124; // eax
  unsigned __int64 v125; // rbp
  __int64 *v126; // rbp
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  _QWORD *v135; // rax
  _QWORD *v136; // rdx
  _QWORD *v137; // rcx
  __int64 v138; // rsi
  __int64 *v139; // r13
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  _QWORD *v148; // rax
  _QWORD *v149; // rdx
  _QWORD *v150; // rcx
  __int64 v151; // rsi
  __int64 *v152; // r12
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  char *v160; // rbx
  unsigned __int8 v162; // al
  unsigned int v163; // edx
  unsigned int v164; // edx
  unsigned __int64 v165; // rdi
  char *v166; // rcx
  char *v167; // r8
  unsigned int v168; // edx
  unsigned int v169; // edx
  unsigned int v170; // ecx
  __int64 v171; // r9
  unsigned __int64 v172; // rdi
  char *v173; // rcx
  char *v174; // r8
  unsigned int v175; // edx
  unsigned int v176; // edx
  unsigned int v177; // ecx
  __int64 v178; // r9
  int v179; // [rsp+0h] [rbp-2D8h]
  int v180; // [rsp+0h] [rbp-2D8h]
  int v181; // [rsp+0h] [rbp-2D8h]
  int v182; // [rsp+0h] [rbp-2D8h]
  int v183; // [rsp+0h] [rbp-2D8h]
  int v184; // [rsp+0h] [rbp-2D8h]
  int v185; // [rsp+8h] [rbp-2D0h]
  int v186; // [rsp+8h] [rbp-2D0h]
  int v187; // [rsp+8h] [rbp-2D0h]
  int v188; // [rsp+8h] [rbp-2D0h]
  __int64 v189; // [rsp+8h] [rbp-2D0h]
  __int64 v190; // [rsp+10h] [rbp-2C8h]
  __int64 v191; // [rsp+10h] [rbp-2C8h]
  __int64 v192; // [rsp+10h] [rbp-2C8h]
  __int64 v193; // [rsp+10h] [rbp-2C8h]
  __int64 v194; // [rsp+10h] [rbp-2C8h]
  _QWORD *v195; // [rsp+10h] [rbp-2C8h]
  __int64 v196; // [rsp+10h] [rbp-2C8h]
  __int64 v197; // [rsp+30h] [rbp-2A8h]
  __int64 v198; // [rsp+70h] [rbp-268h]
  void *v199[2]; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v200; // [rsp+E0h] [rbp-1F8h] BYREF
  void *v201; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v202; // [rsp+100h] [rbp-1D8h] BYREF
  void *v203; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v204; // [rsp+120h] [rbp-1B8h] BYREF
  void *v205; // [rsp+130h] [rbp-1A8h] BYREF
  __int64 v206; // [rsp+138h] [rbp-1A0h]
  _QWORD v207[2]; // [rsp+140h] [rbp-198h] BYREF
  void *v208; // [rsp+150h] [rbp-188h] BYREF
  __int64 v209; // [rsp+158h] [rbp-180h]
  _QWORD v210[2]; // [rsp+160h] [rbp-178h] BYREF
  char v211; // [rsp+170h] [rbp-168h] BYREF
  __int128 v212; // [rsp+178h] [rbp-160h]
  char v213; // [rsp+188h] [rbp-150h]
  __int128 v214; // [rsp+190h] [rbp-148h] BYREF
  char v215; // [rsp+1A0h] [rbp-138h] BYREF
  __int128 v216; // [rsp+1A8h] [rbp-130h] BYREF
  char v217; // [rsp+1B8h] [rbp-120h]
  __int128 v218; // [rsp+1C0h] [rbp-118h] BYREF
  void *v219; // [rsp+1D0h] [rbp-108h] BYREF
  __int128 v220; // [rsp+1D8h] [rbp-100h] BYREF
  char v221; // [rsp+1E8h] [rbp-F0h]
  __int64 v222; // [rsp+1F0h] [rbp-E8h]
  __int64 v223; // [rsp+1F8h] [rbp-E0h]
  _QWORD v224[3]; // [rsp+200h] [rbp-D8h] BYREF
  _QWORD v225[3]; // [rsp+218h] [rbp-C0h] BYREF
  _QWORD v226[3]; // [rsp+230h] [rbp-A8h] BYREF
  char v227; // [rsp+248h] [rbp-90h] BYREF
  char v228[32]; // [rsp+250h] [rbp-88h] BYREF
  char v229[40]; // [rsp+270h] [rbp-68h] BYREF
  unsigned __int64 v230; // [rsp+298h] [rbp-40h]

  v190 = a1;
  v230 = __readfsqword(0x28u);
  v219 = (char *)&v220 + 8;
  *(_QWORD *)&v220 = 0;
  v94 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  BYTE8(v220) = 0;
  if ( *v94 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  v95 = ida_mcp::parse_ea(v219, v220);
  v97 = v96;
  v198 = v95;
  if ( v219 != (char *)&v220 + 8 )
    operator delete(v219, *((_QWORD *)&v220 + 1) + 1LL);
  v219 = (char *)&v220 + 8;
  *(_QWORD *)&v220 = 0;
  v98 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  BYTE8(v220) = 0;
  if ( *v98 != 3 )
  {
    v90 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v90,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v90,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v99 = v220;
  v100 = ida_mcp::parse_ea(v219, v220);
  v105 = v101;
  v185 = v100;
  if ( v219 != (char *)&v220 + 8 )
  {
    v99 = *((_QWORD *)&v220 + 1) + 1LL;
    operator delete(v219, *((_QWORD *)&v220 + 1) + 1LL);
  }
  if ( !v97 || !v105 )
    ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_hidden_range(
      (__int64)v219,
      v99,
      v101,
      v102,
      v103,
      v104,
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
      a89);
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x12DB9F);
  v106 = *(_QWORD *)(a2 + 8);
  v107 = *(_QWORD *)(v106 + 16);
  v108 = v106 + 8;
  v109 = v108;
  if ( v107 )
  {
    do
    {
      v110 = *(_QWORD *)(v107 + 40);
      if ( !v110 )
        goto LABEL_54;
      v111 = 11;
      if ( v110 <= 0xB )
        v111 = *(_QWORD *)(v107 + 40);
      if ( ((v112 = memcmp(*(const void **)(v107 + 32), "description", v111)) != 0
         || (v112 = v110 - 11, (__int64)(v110 - 11) <= 0x7FFFFFFF))
        && v112 < 0 )
      {
LABEL_54:
        v107 = *(_QWORD *)(v107 + 24);
      }
      else
      {
        v109 = v107;
        v107 = *(_QWORD *)(v107 + 16);
      }
    }
    while ( v107 );
    if ( v108 != v109 )
      std::string::compare(*(void **)(v109 + 32), *(_QWORD *)(v109 + 40), "description");
  }
  if ( (unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    std::string::basic_string<std::allocator<char>>((__int64 *)v199, "", v113, v114, v115, v116, v179, v185, a1);
  }
  else
  {
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<char const(&)[1],char const(&)[7],std::string,0>();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<char const(&)[1],char const(&)[7],std::string,0>();
  if ( *(_BYTE *)a2 != 1 )
  {
    v89 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v89,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v89,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v117 = *(_QWORD *)(a2 + 8);
  v118 = *(_QWORD *)(v117 + 16);
  v119 = v117 + 8;
  v120 = v119;
  if ( v118 )
  {
    v121 = v118;
    v122 = v119;
    do
    {
      while ( 1 )
      {
        v125 = *(_QWORD *)(v121 + 40);
        if ( !v125 )
          break;
        v123 = 5;
        if ( v125 <= 5 )
          v123 = *(_QWORD *)(v121 + 40);
        v124 = memcmp(*(const void **)(v121 + 32), "color", v123);
        if ( v124 || (v124 = v125 - 5, (__int64)(v125 - 5) <= 0x7FFFFFFF) )
        {
          if ( v124 < 0 )
            break;
        }
        v120 = v121;
        v121 = *(_QWORD *)(v121 + 16);
        if ( !v121 )
          goto LABEL_34;
      }
      v121 = *(_QWORD *)(v121 + 24);
    }
    while ( v121 );
LABEL_34:
    if ( v122 != v120 )
      std::string::compare(*(void **)(v120 + 32), *(_QWORD *)(v120 + 40), "color");
  }
  if ( !(unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    v162 = *(_BYTE *)nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    if ( v162 != 6 )
    {
      if ( v162 > 6u )
      {
        if ( v162 == 7 )
          goto LABEL_37;
      }
      else if ( v162 == 4 || v162 == 5 )
      {
        goto LABEL_37;
      }
      v92 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        v92,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        v92,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
  }
LABEL_37:
  HIBYTE(v197) = add_hidden_range();
  v211 = 0;
  *(_QWORD *)&v212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v211 = 3;
  v126 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v126, "start", v127, v128, v129, v130, v179, v185, v190);
  v212 = (unsigned __int64)v126;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v205, v228, v131, v132, v133, v134, v180, v186, v191);
  v213 = 0;
  *(_QWORD *)&v214 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v213 = 3;
  v135 = (_QWORD *)operator new(0x20u);
  v136 = v205;
  v137 = v135 + 2;
  v138 = v206;
  *v135 = v135 + 2;
  if ( v136 == v207 )
  {
    v164 = v138 + 1;
    if ( (unsigned int)(v138 + 1) >= 8 )
    {
      v135[2] = v207[0];
      *(_QWORD *)((char *)v137 + v164 - 8) = *(_QWORD *)((char *)&v207[-1] + v164);
      v172 = (unsigned __int64)(v135 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v173 = (char *)v137 - v172;
      v174 = (char *)((char *)v207 - v173);
      v175 = ((_DWORD)v173 + v164) & 0xFFFFFFF8;
      if ( v175 >= 8 )
      {
        v176 = v175 & 0xFFFFFFF8;
        v177 = 0;
        do
        {
          v178 = v177;
          v177 += 8;
          *(_QWORD *)(v172 + v178) = *(_QWORD *)&v174[v178];
        }
        while ( v177 < v176 );
      }
    }
    else if ( (v164 & 4) != 0 )
    {
      *((_DWORD *)v135 + 4) = v207[0];
      *(_DWORD *)((char *)v137 + v164 - 4) = *(_DWORD *)((char *)&v206 + v164 + 4);
    }
    else if ( (_DWORD)v138 != -1 )
    {
      *((_BYTE *)v135 + 16) = v207[0];
      if ( (v164 & 2) != 0 )
        *(_WORD *)((char *)v137 + v164 - 2) = *(_WORD *)((char *)&v206 + v164 + 6);
    }
  }
  else
  {
    *v135 = v136;
    v135[2] = v207[0];
  }
  v135[1] = v138;
  v205 = v207;
  LOBYTE(v207[0]) = 0;
  v206 = 0;
  v214 = (unsigned __int64)v135;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v224,
    (const __m128i *)&v211,
    2,
    1);
  v224[2] = 0;
  v215 = 0;
  *(_QWORD *)&v216 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v215 = 3;
  v139 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v139, "end", v140, v141, v142, v143, v181, v187, v192);
  v216 = (unsigned __int64)v139;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v208, v229, v144, v145, v146, v147, v182, v188, v193);
  v217 = 0;
  *(_QWORD *)&v218 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v217 = 3;
  v148 = (_QWORD *)operator new(0x20u);
  v149 = v208;
  v150 = v148 + 2;
  v151 = v209;
  *v148 = v148 + 2;
  if ( v149 == v210 )
  {
    v163 = v151 + 1;
    if ( (unsigned int)(v151 + 1) >= 8 )
    {
      v148[2] = v210[0];
      *(_QWORD *)((char *)v150 + v163 - 8) = *(_QWORD *)((char *)&v210[-1] + v163);
      v165 = (unsigned __int64)(v148 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v166 = (char *)v150 - v165;
      v167 = (char *)((char *)v210 - v166);
      v168 = ((_DWORD)v166 + v163) & 0xFFFFFFF8;
      if ( v168 >= 8 )
      {
        v169 = v168 & 0xFFFFFFF8;
        v170 = 0;
        do
        {
          v171 = v170;
          v170 += 8;
          *(_QWORD *)(v165 + v171) = *(_QWORD *)&v167[v171];
        }
        while ( v170 < v169 );
      }
    }
    else if ( (v163 & 4) != 0 )
    {
      *((_DWORD *)v148 + 4) = v210[0];
      *(_DWORD *)((char *)v150 + v163 - 4) = *(_DWORD *)((char *)&v209 + v163 + 4);
    }
    else if ( (_DWORD)v151 != -1 )
    {
      *((_BYTE *)v148 + 16) = v210[0];
      if ( (v163 & 2) != 0 )
        *(_WORD *)((char *)v150 + v163 - 2) = *(_WORD *)((char *)&v209 + v163 + 6);
    }
  }
  else
  {
    *v148 = v149;
    v148[2] = v210[0];
  }
  v148[1] = v151;
  v208 = v210;
  v209 = 0;
  LOBYTE(v210[0]) = 0;
  v218 = (unsigned __int64)v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v225,
    (const __m128i *)&v215,
    2,
    1);
  v225[2] = 0;
  LOBYTE(v219) = 0;
  *(_QWORD *)&v220 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v219) = 3;
  v152 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v152, "success", v153, v154, v155, v156, v183, (int)&v218, v194);
  v221 = 4;
  v222 = HIBYTE(v197);
  v223 = 0;
  v220 = (unsigned __int64)v152;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v226,
    (const __m128i *)&v219,
    2,
    1);
  v226[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v195,
    (__int64)v224,
    3,
    v157,
    v158,
    v159,
    v184,
    v189,
    (int)v195,
    (int)&v214,
    (int)&v216,
    (int)&v220,
    v197,
    (int)&v201,
    (int)&v203,
    (int)v199,
    (int)&v211,
    (char)&v215,
    (__int64)&v205,
    (int)&v208,
    v198);
  v160 = &v227;
  do
  {
    v160 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v160 != (char *)v224 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v208 != v210 )
    operator delete(v208, v210[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v205 != v207 )
    operator delete(v205, v207[0] + 1LL);
  if ( v203 != &v204 )
    operator delete(v203, v204 + 1);
  if ( v201 != &v202 )
    operator delete(v201, v202 + 1);
  if ( v199[0] != &v200 )
    operator delete(v199[0], v200 + 1);
  return v196;
}

