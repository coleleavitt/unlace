_QWORD *__fastcall ida_mcp::tools::types::`anonymous namespace'::handle_get_enum_members(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        int a24,
        int a25,
        char a26,
        __int64 a27,
        char a28,
        char a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        int a34,
        __int64 a35,
        __int64 a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        char a44,
        int a45,
        int a46,
        char a47,
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
        int a85,
        char a86,
        int a87,
        int a88,
        int a89,
        int a90,
        int a91,
        int a92,
        int a93,
        int a94,
        int a95,
        int a96,
        int a97,
        int a98,
        int a99,
        int a100,
        int a101,
        int a102,
        int a103,
        int a104,
        int a105,
        int a106,
        __int64 a107)
{
  void *v107; // r12
  std::runtime_error *exception; // rbp
  void *v109; // r12
  void *v110; // r12
  __int64 v111; // rax
  __int64 v112; // rbx
  __int64 v113; // r14
  __int64 v114; // r13
  size_t v115; // rdx
  int v116; // eax
  unsigned __int64 v117; // r12
  unsigned __int64 v118; // rbx
  size_t v119; // rdx
  const void *v120; // rdi
  int v121; // eax
  __int64 idati; // rax
  unsigned __int64 v123; // r14
  const char *v124; // r15
  __int64 *v125; // rax
  __int64 *v126; // rbp
  char *v127; // rax
  __int64 v128; // rcx
  void *v129; // r8
  __int64 v130; // rax
  char v131; // si
  __int64 v132; // rdx
  __int64 v133; // rbp
  unsigned __int8 *v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rdx
  char v137; // r12
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  const char *v142; // rbp
  __int64 *v143; // rax
  __int64 v144; // r15
  __int64 *v145; // rbx
  char *v146; // rax
  void *v147; // rcx
  unsigned __int8 *v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rax
  unsigned __int64 v151; // rbx
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 *v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  _BYTE *v159; // rbp
  unsigned __int64 v160; // r12
  _QWORD *v161; // rax
  _BYTE *v162; // rdi
  __int64 *v163; // rbx
  __m128i v164; // xmm0
  size_t v165; // rdx
  __int64 v166; // rax
  __int64 *v167; // rbp
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 tinfo_property; // rax
  __int64 *v173; // rbp
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  int v178; // eax
  __int64 *v179; // rbp
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 *v184; // rbp
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  int v189; // eax
  __int64 *v190; // rbp
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rax
  __int64 *v196; // rbp
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  unsigned __int64 *v204; // rbp
  __int64 v205; // rdi
  __int64 v206; // rbp
  __int64 v207; // r13
  __int64 v208; // r12
  _QWORD *v209; // rbx
  __int64 v211; // rax
  unsigned __int64 v212; // rax
  int v213; // [rsp+0h] [rbp-368h]
  int v214; // [rsp+0h] [rbp-368h]
  int v215; // [rsp+0h] [rbp-368h]
  int v216; // [rsp+0h] [rbp-368h]
  int v217; // [rsp+0h] [rbp-368h]
  int v218; // [rsp+0h] [rbp-368h]
  int v219; // [rsp+0h] [rbp-368h]
  int v220; // [rsp+0h] [rbp-368h]
  int v221; // [rsp+8h] [rbp-360h]
  int v222; // [rsp+8h] [rbp-360h]
  int v223; // [rsp+8h] [rbp-360h]
  int v224; // [rsp+8h] [rbp-360h]
  int v225; // [rsp+8h] [rbp-360h]
  int v226; // [rsp+8h] [rbp-360h]
  __int64 v227; // [rsp+8h] [rbp-360h]
  __int64 v228; // [rsp+10h] [rbp-358h]
  __int64 v229; // [rsp+10h] [rbp-358h]
  __int64 v230; // [rsp+10h] [rbp-358h]
  __int64 v231; // [rsp+10h] [rbp-358h]
  __int64 v232; // [rsp+10h] [rbp-358h]
  __int64 v233; // [rsp+10h] [rbp-358h]
  __int64 v234; // [rsp+10h] [rbp-358h]
  int v235; // [rsp+10h] [rbp-358h]
  char v236; // [rsp+17h] [rbp-351h]
  _QWORD *v237; // [rsp+18h] [rbp-350h]
  __m128i v238; // [rsp+20h] [rbp-348h] BYREF
  void *dest; // [rsp+30h] [rbp-338h]
  void **v240; // [rsp+38h] [rbp-330h]
  _QWORD *v241; // [rsp+40h] [rbp-328h]
  void **p_src; // [rsp+48h] [rbp-320h]
  __int64 *v243; // [rsp+50h] [rbp-318h]
  _QWORD *v244; // [rsp+58h] [rbp-310h]
  __int64 *v245; // [rsp+60h] [rbp-308h]
  char *v246; // [rsp+68h] [rbp-300h]
  char *v247; // [rsp+70h] [rbp-2F8h]
  char *v248; // [rsp+78h] [rbp-2F0h]
  char *v249; // [rsp+80h] [rbp-2E8h]
  char *v250; // [rsp+88h] [rbp-2E0h]
  __int64 v251; // [rsp+90h] [rbp-2D8h] BYREF
  char *v252; // [rsp+98h] [rbp-2D0h] BYREF
  __int64 v253; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD *v254; // [rsp+A8h] [rbp-2C0h]
  __int64 v255; // [rsp+B0h] [rbp-2B8h] BYREF
  unsigned __int64 v256; // [rsp+C0h] [rbp-2A8h]
  __int64 v257; // [rsp+C8h] [rbp-2A0h] BYREF
  __int64 v258; // [rsp+D0h] [rbp-298h]
  __int128 v259; // [rsp+D8h] [rbp-290h]
  __int64 v260; // [rsp+E8h] [rbp-280h]
  __int128 v261; // [rsp+F0h] [rbp-278h]
  int v262; // [rsp+100h] [rbp-268h]
  char v263; // [rsp+104h] [rbp-264h]
  void *src; // [rsp+110h] [rbp-258h] BYREF
  unsigned __int64 v265; // [rsp+118h] [rbp-250h]
  _QWORD v266[2]; // [rsp+120h] [rbp-248h] BYREF
  char v267; // [rsp+130h] [rbp-238h] BYREF
  __int128 v268; // [rsp+138h] [rbp-230h] BYREF
  char v269; // [rsp+148h] [rbp-220h]
  __m128i v270; // [rsp+150h] [rbp-218h] BYREF
  char v271; // [rsp+160h] [rbp-208h] BYREF
  __int128 v272; // [rsp+168h] [rbp-200h] BYREF
  char v273; // [rsp+178h] [rbp-1F0h]
  _BOOL8 v274; // [rsp+180h] [rbp-1E8h]
  __int64 v275; // [rsp+188h] [rbp-1E0h]
  char v276; // [rsp+190h] [rbp-1D8h] BYREF
  __int128 v277; // [rsp+198h] [rbp-1D0h] BYREF
  char v278; // [rsp+1A8h] [rbp-1C0h]
  __int64 v279; // [rsp+1B0h] [rbp-1B8h]
  __int64 v280; // [rsp+1B8h] [rbp-1B0h]
  char v281; // [rsp+1C0h] [rbp-1A8h] BYREF
  __int128 v282; // [rsp+1C8h] [rbp-1A0h]
  char v283; // [rsp+1D8h] [rbp-190h]
  __int64 tinfo_size; // [rsp+1E0h] [rbp-188h]
  __int64 v285; // [rsp+1E8h] [rbp-180h]
  char v286; // [rsp+1F0h] [rbp-178h] BYREF
  __int128 v287; // [rsp+1F8h] [rbp-170h]
  char v288; // [rsp+208h] [rbp-160h]
  __int64 v289; // [rsp+210h] [rbp-158h]
  __int64 v290; // [rsp+218h] [rbp-150h]
  char v291; // [rsp+220h] [rbp-148h] BYREF
  __int128 v292; // [rsp+228h] [rbp-140h]
  char v293; // [rsp+238h] [rbp-130h]
  __int64 v294; // [rsp+240h] [rbp-128h]
  __int64 v295; // [rsp+248h] [rbp-120h]
  char v296; // [rsp+250h] [rbp-118h] BYREF
  __int128 v297; // [rsp+258h] [rbp-110h]
  __int64 v298; // [rsp+278h] [rbp-F0h]
  _QWORD v299[3]; // [rsp+280h] [rbp-E8h] BYREF
  _QWORD v300[3]; // [rsp+298h] [rbp-D0h] BYREF
  _QWORD v301[3]; // [rsp+2B0h] [rbp-B8h] BYREF
  _QWORD v302[3]; // [rsp+2C8h] [rbp-A0h] BYREF
  _QWORD v303[3]; // [rsp+2E0h] [rbp-88h] BYREF
  _QWORD v304[3]; // [rsp+2F8h] [rbp-70h] BYREF
  _QWORD v305[3]; // [rsp+310h] [rbp-58h] BYREF
  unsigned __int64 v306; // [rsp+328h] [rbp-40h] BYREF

  v241 = a1;
  v306 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_99;
  v111 = *(_QWORD *)(a2 + 8);
  v112 = *(_QWORD *)(v111 + 16);
  if ( !v112 )
    goto LABEL_99;
  v113 = v111 + 8;
  v114 = v111 + 8;
  do
  {
    while ( 1 )
    {
      v117 = *(_QWORD *)(v112 + 40);
      if ( !v117 )
        break;
      v115 = 4;
      if ( v117 <= 4 )
        v115 = *(_QWORD *)(v112 + 40);
      v116 = memcmp(*(const void **)(v112 + 32), "name", v115);
      if ( v116 || (v116 = v117 - 4, (__int64)(v117 - 4) <= 0x7FFFFFFF) )
      {
        if ( v116 < 0 )
          break;
      }
      v114 = v112;
      v112 = *(_QWORD *)(v112 + 16);
      if ( !v112 )
        goto LABEL_12;
    }
    v112 = *(_QWORD *)(v112 + 24);
  }
  while ( v112 );
LABEL_12:
  if ( v113 == v114 )
    goto LABEL_99;
  v118 = *(_QWORD *)(v114 + 40);
  if ( !v118 )
  {
    v238.m128i_i64[0] = (__int64)"name";
    goto LABEL_21;
  }
  v119 = 4;
  v120 = *(const void **)(v114 + 32);
  v238.m128i_i64[0] = (__int64)"name";
  if ( v118 <= 4 )
    v119 = v118;
  if ( (v121 = memcmp(v120, "name", v119)) == 0 && (v121 = v118 - 4, (__int64)(v118 - 4) > 0x7FFFFFFF) || v121 > 0 )
LABEL_99:
    JUMPOUT(0x9220D);
LABEL_21:
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    goto LABEL_99;
  LOBYTE(v266[0]) = 0;
  v265 = 0;
  p_src = &src;
  v244 = v266;
  src = v266;
  LOBYTE(v246) = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  if ( (_BYTE)v246 != 3 )
    JUMPOUT(0x921E3);
  std::string::_M_assign();
  idati = get_idati();
  if ( !idati )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "No type library available");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v251 = 0;
  if ( !src || (*(_QWORD *)&v259 = src, WORD4(v259) = 256, v258 = idati, v245 = &v251, !(unsigned __int8)create_tinfo()) )
  {
    v107 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)&v296, "Enum '", (__int64)src, v265);
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    v245 = &v251;
    __cxa_throw(
      v107,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( (get_tinfo_property() & 0x3F) != 0x2D )
  {
    v110 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)&v296, "'", (__int64)src, v265);
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v110,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v258 = 0;
  v260 = 0;
  v262 = 0;
  v263 = 0x80;
  v259 = 0;
  v261 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
  {
    v109 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)&v296, "Failed to get enum details for '", (__int64)src, v265);
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v109,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  LOBYTE(v253) = 0;
  v254 = nullptr;
  v243 = &v253;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v253,
    nullptr,
    0,
    2);
  HIBYTE(v228) = v253;
  v237 = v254;
  if ( (_QWORD)v259 )
  {
    v123 = 0;
    v240 = (void **)&v252;
    do
    {
      LOBYTE(v255) = 0;
      v151 = v258 + 56 * v123;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v255,
        nullptr,
        0,
        1);
      if ( *(_QWORD *)(v151 + 8) )
        v124 = *(const char **)v151;
      else
        v124 = _qstring<char>::c_str(void)const::nullstr;
      v256 = 0;
      v257 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v125 = (__int64 *)operator new(0x20u);
      v126 = v125;
      *v125 = (__int64)(v125 + 2);
      if ( !v124 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      dest = v125 + 2;
      v127 = (char *)strlen(v124);
      v128 = (__int64)dest;
      v252 = v127;
      v129 = v127;
      if ( (unsigned __int64)v127 > 0xF )
      {
        dest = v127;
        v152 = std::string::_M_create();
        *v126 = v152;
        v128 = v152;
        v129 = dest;
        v126[2] = (__int64)v252;
      }
      else
      {
        if ( v127 == (_BYTE *)&dword_0 + 1 )
        {
          *((_BYTE *)v126 + 16) = *v124;
          goto LABEL_35;
        }
        if ( !v127 )
          goto LABEL_35;
      }
      memcpy((void *)v128, v124, (size_t)v129);
      v127 = v252;
      v128 = *v126;
LABEL_35:
      v126[1] = (__int64)v127;
      v127[v128] = 0;
      v130 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v131 = *(_BYTE *)v130;
      v132 = *(_QWORD *)(v130 + 8);
      *(_BYTE *)v130 = 3;
      *(_QWORD *)(v130 + 8) = v126;
      LOBYTE(v256) = v131;
      v257 = v132;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v133 = *(_QWORD *)(v151 + 48);
      v134 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v135 = *v134;
      v136 = *((_QWORD *)v134 + 1);
      *v134 = 6;
      v137 = v255;
      LOBYTE(v256) = v135;
      *((_QWORD *)v134 + 1) = v133;
      v257 = v136;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( *(_QWORD *)(v151 + 32) <= 1u )
        goto LABEL_41;
      v142 = *(const char **)(v151 + 24);
      v256 = 0;
      v257 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v143 = (__int64 *)operator new(0x20u);
      v144 = (__int64)(v143 + 2);
      v145 = v143;
      *v143 = (__int64)(v143 + 2);
      if ( !v142 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v146 = (char *)strlen(v142);
      v252 = v146;
      v147 = v146;
      if ( (unsigned __int64)v146 > 0xF )
      {
        dest = v146;
        v153 = std::string::_M_create();
        *v145 = v153;
        v144 = v153;
        v147 = dest;
        v145[2] = (__int64)v252;
LABEL_52:
        memcpy((void *)v144, v142, (size_t)v147);
        v146 = v252;
        v144 = *v145;
        goto LABEL_40;
      }
      if ( v146 == (_BYTE *)&dword_0 + 1 )
      {
        *((_BYTE *)v145 + 16) = *v142;
      }
      else if ( v146 )
      {
        goto LABEL_52;
      }
LABEL_40:
      v145[1] = (__int64)v146;
      v146[v144] = 0;
      v148 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v135 = *v148;
      v149 = *((_QWORD *)v148 + 1);
      *v148 = 3;
      v137 = v255;
      *((_QWORD *)v148 + 1) = v145;
      LOBYTE(v256) = v135;
      v257 = v149;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_41:
      if ( HIBYTE(v228) )
      {
        if ( HIBYTE(v228) != 2 )
          ida_mcp::tools::types::`anonymous namespace'::handle_get_enum_members(
            (__int64)&v257,
            v135,
            v138,
            v139,
            v140,
            v141,
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
            a91,
            a92,
            a93,
            a94,
            a95,
            a96,
            a97,
            a98,
            a99,
            a100,
            a101,
            a102,
            a103,
            a104,
            a105,
            a106,
            a107);
        if ( v237[2] != v237[1] )
        {
          LOBYTE(v255) = v137;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v237[1] += 16LL;
          goto LABEL_44;
        }
      }
      else
      {
        v150 = operator new(0x18u);
        *(_QWORD *)(v150 + 16) = 0;
        v237 = (_QWORD *)v150;
        *(_OWORD *)v150 = 0;
      }
      LOBYTE(v255) = v137;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_44:
      LOBYTE(v255) = v137;
      ++v123;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      HIBYTE(v228) = 2;
    }
    while ( v123 < (unsigned __int64)v259 );
  }
  v267 = 0;
  *(_QWORD *)&v268 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v267 = 3;
  v154 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v154,
    (const char *)v238.m128i_i64[0],
    v155,
    v156,
    v157,
    v158,
    v213,
    (int)&v268,
    v228);
  v269 = 0;
  dest = &v270;
  v270.m128i_i64[0] = 0;
  v268 = (unsigned __int64)v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v269 = 3;
  v159 = src;
  v160 = v265;
  v161 = (_QWORD *)operator new(0x20u);
  v162 = v161 + 2;
  v256 = v160;
  v163 = v161;
  *v161 = v161 + 2;
  if ( v160 <= 0xF )
  {
    v164 = (__m128i)(unsigned __int64)v161;
    v165 = v160 + 1;
    if ( v160 )
    {
LABEL_55:
      v238 = v164;
      memcpy(v162, v159, v165);
      v166 = v256;
      v164 = _mm_load_si128(&v238);
      goto LABEL_56;
    }
    goto LABEL_79;
  }
  v211 = std::string::_M_create();
  *v163 = v211;
  v162 = (_BYTE *)v211;
  v212 = v256;
  v164 = (__m128i)(unsigned __int64)v163;
  v163[2] = v256;
  v165 = v212 + 1;
  if ( !v212 )
  {
LABEL_79:
    *v162 = *v159;
    v166 = v256;
    goto LABEL_56;
  }
  v166 = -1;
  if ( v165 )
    goto LABEL_55;
LABEL_56:
  v163[1] = v166;
  v246 = &v267;
  v270 = v164;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v299,
    (const __m128i *)&v267);
  v299[2] = 0;
  v271 = 0;
  *(_QWORD *)&v272 = 0;
  v238.m128i_i64[0] = (__int64)&v272;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v271 = 3;
  v167 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v167, "is_bitmask", v168, v169, v170, v171, v214, v221, v229);
  v272 = (unsigned __int64)v167;
  tinfo_property = get_tinfo_property();
  v273 = 4;
  v275 = 0;
  v247 = &v271;
  v274 = tinfo_property != 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v300,
    (const __m128i *)&v271);
  v300[2] = 0;
  v276 = 0;
  *(_QWORD *)&v277 = 0;
  v240 = (void **)&v277;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v276 = 3;
  v173 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v173, "width", v174, v175, v176, v177, v215, v222, v230);
  v277 = (unsigned __int64)v173;
  v178 = get_tinfo_property();
  v278 = 5;
  v279 = v178;
  v248 = &v276;
  v280 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v301,
    (const __m128i *)&v276);
  v301[2] = 0;
  v281 = 0;
  *(_QWORD *)&v282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v281 = 3;
  v179 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v179, "size", v180, v181, v182, v183, v216, v223, v231);
  v282 = (unsigned __int64)v179;
  tinfo_size = get_tinfo_size();
  v283 = 6;
  v285 = 0;
  v249 = &v281;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v302,
    (const __m128i *)&v281);
  v302[2] = 0;
  v286 = 0;
  *(_QWORD *)&v287 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v286 = 3;
  v184 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v184, "radix", v185, v186, v187, v188, v217, v224, v232);
  v287 = (unsigned __int64)v184;
  v189 = get_tinfo_property();
  v288 = 5;
  v289 = v189;
  v250 = &v286;
  v290 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v303,
    (const __m128i *)&v286);
  v303[2] = 0;
  v291 = 0;
  *(_QWORD *)&v292 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v291 = 3;
  v190 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v190, "member_count", v191, v192, v193, v194, v218, v225, v233);
  v292 = (unsigned __int64)v190;
  if ( HIBYTE(v234) == 1 )
  {
    v195 = v237[5];
  }
  else if ( HIBYTE(v234) == 2 )
  {
    v195 = (__int64)(v237[1] - *v237) >> 4;
  }
  else
  {
    v195 = HIBYTE(v234) != 0;
  }
  v293 = 6;
  v294 = v195;
  v295 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v304,
    (const __m128i *)&v291);
  v304[2] = 0;
  v296 = 0;
  *(_QWORD *)&v297 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v296 = 3;
  v196 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v196, "members", v197, v198, v199, v200, v219, v226, v234);
  v297 = (unsigned __int64)v196;
  LOBYTE(v253) = v236;
  v254 = v237;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v305,
    (const __m128i *)&v296);
  v305[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v241,
    (__int64)v299,
    7,
    v201,
    v202,
    v203,
    v220,
    v227,
    v235,
    (int)v237,
    v238.m128i_i32[0],
    v238.m128i_i32[2],
    (__int64)dest,
    (int)v240,
    (int)v241,
    (int)p_src,
    (int)v243,
    (char)v244,
    (__int64)v245,
    (int)v246,
    (__int64)v247);
  v204 = &v306;
  do
  {
    v204 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v204 != v299 );
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
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v260 )
  {
    *(_QWORD *)&v261 = 0;
    qfree();
  }
  v205 = v258;
  if ( v258 )
  {
    v206 = v259;
    if ( (_QWORD)v259 )
    {
      v207 = 0;
      v208 = 0;
      while ( 1 )
      {
        v209 = (_QWORD *)(v205 + v207);
        if ( *(_QWORD *)(v205 + v207 + 24) )
        {
          v209[4] = 0;
          qfree();
        }
        if ( *v209 )
        {
          v209[1] = 0;
          ++v208;
          qfree();
          v205 = v258;
          if ( v206 == v208 )
            break;
        }
        else
        {
          ++v208;
          v205 = v258;
          if ( v206 == v208 )
            break;
        }
        v207 += 56;
      }
    }
    *(_QWORD *)&v259 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( src != v244 )
    operator delete(src, v266[0] + 1LL);
  return v241;
}

