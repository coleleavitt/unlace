_QWORD *__fastcall ida_mcp::tools::comments::`anonymous namespace'::get_func_cmt(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16,
        __int64 a17,
        int a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        int a26,
        int a27,
        char a28,
        int a29,
        __int64 a30,
        __int64 a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
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
        char a50,
        int a51,
        int a52,
        char a53,
        int a54,
        int a55,
        char a56,
        int a57,
        int a58,
        char a59,
        int a60,
        int a61,
        char a62,
        int a63,
        int a64,
        char a65,
        int a66,
        int a67,
        char a68,
        int a69,
        int a70,
        char a71,
        char a72,
        int a73,
        char a74,
        int a75,
        int a76,
        char a77,
        char a78,
        int a79,
        __int64 a80,
        __int64 a81,
        char a82,
        int a83,
        int a84,
        int a85,
        int a86,
        int a87,
        int a88,
        int a89,
        int a90,
        int a91,
        int a92,
        int a93,
        int a94,
        char a95,
        int a96,
        int a97,
        int a98,
        int a99,
        int a100,
        int a101,
        int a102,
        int a103,
        int a104,
        __int64 a105)
{
  void *exception; // r12
  const char *v106; // rbp
  __int64 v107; // rax
  __int64 v108; // rbx
  __int64 v109; // r13
  __int64 v110; // r15
  size_t v111; // rdx
  int v112; // eax
  unsigned __int64 v113; // r12
  unsigned __int64 v114; // rbx
  size_t v115; // rdx
  int v116; // eax
  __int8 v117; // al
  char *v118; // r13
  int *v119; // rax
  int *v120; // r15
  __int64 v121; // rbx
  std::runtime_error *v122; // rax
  __int64 v123; // rax
  size_t v124; // rax
  unsigned int v125; // ebx
  _QWORD *v126; // rdx
  _QWORD *v127; // rax
  _QWORD *v128; // rdx
  _QWORD *v129; // rcx
  size_t v130; // rsi
  __int64 v131; // rax
  _BYTE *v132; // r14
  unsigned __int64 v133; // r15
  _QWORD *v134; // rax
  _BYTE *v135; // rdi
  __int64 *v136; // rbp
  __m128i si128; // xmm0
  size_t v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rax
  size_t v141; // rax
  unsigned int v142; // r14d
  _QWORD *v143; // rdx
  _QWORD *v144; // rax
  _QWORD *v145; // rdx
  _QWORD *v146; // rcx
  size_t v147; // rsi
  __int64 v148; // rax
  char *v149; // r14
  __int64 *v150; // rax
  __int64 *v151; // rbp
  char *v152; // rax
  __int64 v153; // rcx
  void *v154; // r8
  __int64 v155; // rax
  __m128i *v156; // r14
  _QWORD *v158; // rax
  _QWORD *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  unsigned __int64 v162; // rdx
  char *v163; // rax
  char *v164; // rbp
  unsigned int v165; // r14d
  unsigned int v166; // r14d
  unsigned int v167; // eax
  __int64 v168; // rcx
  unsigned __int64 v169; // rdx
  char *v170; // rax
  char *v171; // rbp
  unsigned int v172; // ebx
  unsigned int v173; // ebx
  unsigned int v174; // eax
  __int64 v175; // rcx
  __int64 v176; // rax
  unsigned int v177; // edi
  unsigned int v178; // edi
  unsigned __int64 v179; // r8
  char *v180; // rcx
  char *v181; // r9
  unsigned int v182; // edx
  unsigned int v183; // ecx
  __int64 v184; // rdi
  unsigned __int64 v185; // r8
  char *v186; // rcx
  char *v187; // r9
  unsigned int v188; // edx
  unsigned int v189; // ecx
  __int64 v190; // rdi
  unsigned __int8 v192; // [rsp+1Eh] [rbp-33Ah]
  __int8 v193; // [rsp+1Fh] [rbp-339h]
  int v194[4]; // [rsp+40h] [rbp-318h] BYREF
  __m128i *v195; // [rsp+50h] [rbp-308h]
  __int128 *v196; // [rsp+58h] [rbp-300h]
  _QWORD *v197; // [rsp+60h] [rbp-2F8h]
  void **v198; // [rsp+68h] [rbp-2F0h]
  void **v199; // [rsp+70h] [rbp-2E8h]
  void *dest; // [rsp+78h] [rbp-2E0h]
  char *v201; // [rsp+80h] [rbp-2D8h]
  char *v202; // [rsp+88h] [rbp-2D0h]
  char *v203; // [rsp+90h] [rbp-2C8h]
  __int64 *v204; // [rsp+98h] [rbp-2C0h]
  char *v205; // [rsp+A8h] [rbp-2B0h]
  __m128i v206; // [rsp+B0h] [rbp-2A8h] BYREF
  char *s; // [rsp+C0h] [rbp-298h]
  __int128 v208; // [rsp+C8h] [rbp-290h]
  char *v209; // [rsp+E0h] [rbp-278h]
  __int128 v210; // [rsp+E8h] [rbp-270h]
  void *src; // [rsp+100h] [rbp-258h]
  __int64 v212; // [rsp+108h] [rbp-250h]
  _QWORD v213[2]; // [rsp+110h] [rbp-248h] BYREF
  void *v214; // [rsp+120h] [rbp-238h] BYREF
  size_t v215; // [rsp+128h] [rbp-230h]
  _QWORD v216[2]; // [rsp+130h] [rbp-228h] BYREF
  void *v217; // [rsp+140h] [rbp-218h] BYREF
  size_t v218; // [rsp+148h] [rbp-210h]
  _QWORD v219[2]; // [rsp+150h] [rbp-208h] BYREF
  char v220; // [rsp+160h] [rbp-1F8h] BYREF
  int v221[4]; // [rsp+168h] [rbp-1F0h]
  char v222; // [rsp+178h] [rbp-1E0h]
  __int64 v223[2]; // [rsp+180h] [rbp-1D8h]
  char v224; // [rsp+190h] [rbp-1C8h] BYREF
  int v225[4]; // [rsp+198h] [rbp-1C0h]
  char v226; // [rsp+1A8h] [rbp-1B0h]
  __m128i v227; // [rsp+1B0h] [rbp-1A8h] BYREF
  char v228; // [rsp+1C0h] [rbp-198h] BYREF
  int v229[4]; // [rsp+1C8h] [rbp-190h] BYREF
  char v230; // [rsp+1D8h] [rbp-180h]
  __int128 v231; // [rsp+1E0h] [rbp-178h] BYREF
  char v232; // [rsp+1F0h] [rbp-168h] BYREF
  __int128 v233; // [rsp+1F8h] [rbp-160h]
  __m128i v234; // [rsp+208h] [rbp-150h]
  __int64 v235; // [rsp+218h] [rbp-140h]
  void *v236; // [rsp+220h] [rbp-138h] BYREF
  __int128 s2; // [rsp+228h] [rbp-130h] BYREF
  char v238; // [rsp+238h] [rbp-120h]
  __int64 v239; // [rsp+240h] [rbp-118h]
  __int64 v240; // [rsp+248h] [rbp-110h]
  __m128i v241; // [rsp+250h] [rbp-108h] BYREF
  __int64 v242; // [rsp+260h] [rbp-F8h] BYREF
  _QWORD v243[3]; // [rsp+268h] [rbp-F0h] BYREF
  _QWORD v244[3]; // [rsp+280h] [rbp-D8h] BYREF
  _QWORD v245[3]; // [rsp+298h] [rbp-C0h] BYREF
  _QWORD v246[3]; // [rsp+2B0h] [rbp-A8h] BYREF
  char v247[8]; // [rsp+2C8h] [rbp-90h] BYREF
  char v248[24]; // [rsp+2D0h] [rbp-88h] BYREF
  _BYTE v249[8]; // [rsp+2E8h] [rbp-70h]
  char v250[40]; // [rsp+2F0h] [rbp-68h] BYREF
  unsigned __int64 v251; // [rsp+318h] [rbp-40h]

  v251 = __readfsqword(0x28u);
  v236 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    ida_mcp::tools::comments::`anonymous namespace'::get_func_cmt(
      (__int64)a1,
      a2,
      a3,
      a4,
      a5,
      a6,
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
      a105);
  v107 = *(_QWORD *)(a2 + 8);
  v108 = *(_QWORD *)(v107 + 16);
  v109 = v107 + 8;
  if ( v108 )
  {
    v110 = v107 + 8;
    do
    {
      while ( 1 )
      {
        v113 = *(_QWORD *)(v108 + 40);
        if ( !v113 )
          break;
        v111 = 7;
        if ( v113 <= 7 )
          v111 = *(_QWORD *)(v108 + 40);
        v112 = memcmp(*(const void **)(v108 + 32), (char *)&s2 + 8, v111);
        if ( v112 || (v112 = v113 - 7, (__int64)(v113 - 7) <= 0x7FFFFFFF) )
        {
          if ( v112 < 0 )
            break;
        }
        v110 = v108;
        v108 = *(_QWORD *)(v108 + 16);
        if ( !v108 )
          goto LABEL_12;
      }
      v108 = *(_QWORD *)(v108 + 24);
    }
    while ( v108 );
LABEL_12:
    if ( v109 != v110 )
    {
      v114 = *(_QWORD *)(v110 + 40);
      if ( v114 )
      {
        v115 = 7;
        if ( v114 <= 7 )
          v115 = *(_QWORD *)(v110 + 40);
        v116 = memcmp((char *)&s2 + 8, *(const void **)(v110 + 32), v115);
        if ( v116 || (v116 = 7 - v114, (__int64)(7 - v114) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v116 >= 0 )
            v109 = v110;
        }
      }
      else
      {
        v109 = v110;
      }
    }
  }
  BYTE8(s2) = 0;
  v117 = *(_BYTE *)(v109 + 64);
  v236 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  v193 = v117;
  if ( v117 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v109 + 64) )
    {
      case 0:
        v106 = "null";
        break;
      case 1:
        v106 = "object";
        break;
      case 2:
        v106 = "array";
        break;
      case 3:
        v106 = "string";
        break;
      case 4:
        v106 = "boolean";
        break;
      case 8:
        v106 = "binary";
        break;
      case 9:
        v106 = "discarded";
        break;
      default:
        v106 = "number";
        break;
    }
    LOBYTE(v242) = 0;
    v241.m128i_i64[1] = 0;
    v241.m128i_i64[0] = (__int64)&v242;
    strlen(v106);
    std::string::reserve();
    std::string::append();
    std::string::append();
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
  v118 = (char *)v236;
  v119 = __errno_location();
  *v119 = 0;
  v120 = v119;
  v121 = __isoc23_strtoull();
  if ( v118 == v209 || *v209 || *v120 == 34 && v121 == -1 )
  {
    if ( v236 != (char *)&s2 + 8 )
      operator delete(v236, *((_QWORD *)&s2 + 1) + 1LL);
    v122 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v122, "Invalid address format");
    JUMPOUT(0x800B5);
  }
  if ( v236 != (char *)&s2 + 8 )
    operator delete(v236, *((_QWORD *)&s2 + 1) + 1LL);
  LOBYTE(v209) = 0;
  v192 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[11],bool,0>();
  if ( !get_func() )
    JUMPOUT(0x80122);
  LOBYTE(v213[0]) = 0;
  v197 = v213;
  src = v213;
  s = nullptr;
  v212 = 0;
  v208 = 0;
  if ( get_func_name() <= 0 )
  {
    qsnprintf();
    strlen(v250);
    std::string::_M_replace();
  }
  else
  {
    if ( (_QWORD)v208 )
      strlen(s);
    std::string::_M_replace();
  }
  v209 = nullptr;
  v210 = 0;
  get_func_cmt();
  v220 = 0;
  *(_QWORD *)v221 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v220 = 3;
  v123 = operator new(0x20u);
  *(_QWORD *)v123 = v123 + 16;
  strcpy((char *)(v123 + 16), "query_address");
  *(_QWORD *)(v123 + 8) = 13;
  *(_OWORD *)v221 = (unsigned __int64)v123;
  qsnprintf();
  v199 = &v214;
  v214 = v216;
  v124 = strlen(v248);
  v206.m128i_i64[0] = v124;
  v125 = v124;
  if ( v124 > 0xF )
  {
    v158 = (_QWORD *)std::string::_M_create();
    v214 = v158;
    v216[0] = v206.m128i_i64[0];
  }
  else
  {
    if ( v124 == 1 )
    {
      LOBYTE(v216[0]) = v248[0];
      goto LABEL_38;
    }
    if ( !v124 )
    {
LABEL_38:
      v126 = v216;
      goto LABEL_39;
    }
    v158 = v216;
  }
  if ( v125 >= 8 )
  {
    *v158 = *(_QWORD *)v248;
    *(_QWORD *)((char *)v158 + v125 - 8) = *(_QWORD *)&v247[v125];
    v169 = (unsigned __int64)(v158 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v170 = (char *)v158 - v169;
    v171 = (char *)(v248 - v170);
    v172 = ((_DWORD)v170 + v125) & 0xFFFFFFF8;
    if ( v172 >= 8 )
    {
      v173 = v172 & 0xFFFFFFF8;
      v174 = 0;
      do
      {
        v175 = v174;
        v174 += 8;
        *(_QWORD *)(v169 + v175) = *(_QWORD *)&v171[v175];
      }
      while ( v174 < v173 );
    }
  }
  else if ( (v125 & 4) != 0 )
  {
    *(_DWORD *)v158 = *(_DWORD *)v248;
    *(_DWORD *)((char *)v158 + v125 - 4) = *(_DWORD *)&v247[v125 + 4];
  }
  else if ( v125 )
  {
    *(_BYTE *)v158 = v248[0];
    if ( (v125 & 2) != 0 )
      *(_WORD *)((char *)v158 + v125 - 2) = *(_WORD *)&v247[v125 + 6];
  }
  v124 = v206.m128i_i64[0];
  v126 = v214;
LABEL_39:
  v215 = v124;
  *((_BYTE *)v126 + v124) = 0;
  v222 = 0;
  v223[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v222 = 3;
  v127 = (_QWORD *)operator new(0x20u);
  v128 = v214;
  v129 = v127 + 2;
  v130 = v215;
  *v127 = v127 + 2;
  if ( v128 == v216 )
  {
    v178 = v130 + 1;
    if ( (unsigned int)(v130 + 1) >= 8 )
    {
      v127[2] = v216[0];
      *(_QWORD *)((char *)v129 + v178 - 8) = *(_QWORD *)((char *)&v216[-1] + v178);
      v185 = (unsigned __int64)(v127 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v186 = (char *)v129 - v185;
      v187 = (char *)((char *)v216 - v186);
      if ( (((_DWORD)v186 + v178) & 0xFFFFFFF8) >= 8 )
      {
        v188 = ((_DWORD)v186 + v178) & 0xFFFFFFF8;
        v189 = 0;
        do
        {
          v190 = v189;
          v189 += 8;
          *(_QWORD *)(v185 + v190) = *(_QWORD *)&v187[v190];
        }
        while ( v189 < v188 );
      }
    }
    else if ( (v178 & 4) != 0 )
    {
      *((_DWORD *)v127 + 4) = v216[0];
      *(_DWORD *)((char *)v129 + v178 - 4) = *(_DWORD *)((char *)&v215 + v178 + 4);
    }
    else if ( (_DWORD)v130 != -1 )
    {
      *((_BYTE *)v127 + 16) = v216[0];
      if ( (v178 & 2) != 0 )
        *(_WORD *)((char *)v129 + v178 - 2) = *(_WORD *)((char *)&v215 + v178 + 6);
    }
  }
  else
  {
    *v127 = v128;
    v127[2] = v216[0];
  }
  v127[1] = v130;
  v214 = v216;
  v215 = 0;
  LOBYTE(v216[0]) = 0;
  v201 = &v220;
  *(_OWORD *)v223 = (unsigned __int64)v127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v241,
    (const __m128i *)&v220);
  v242 = 0;
  v224 = 0;
  *(_QWORD *)v225 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v224 = 3;
  v131 = operator new(0x20u);
  strcpy((char *)(v131 + 16), "function_name");
  *(_QWORD *)v131 = v131 + 16;
  *(_QWORD *)(v131 + 8) = 13;
  v226 = 0;
  v227.m128i_i64[0] = 0;
  v195 = &v227;
  *(_OWORD *)v225 = (unsigned __int64)v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v226 = 3;
  v132 = src;
  v133 = v212;
  v134 = (_QWORD *)operator new(0x20u);
  v135 = v134 + 2;
  v206.m128i_i64[0] = v212;
  v136 = v134;
  *v134 = v134 + 2;
  if ( v133 <= 0xF )
  {
    si128 = (__m128i)(unsigned __int64)v134;
    v138 = v133 + 1;
    if ( v133 )
    {
LABEL_43:
      *(__m128i *)v194 = si128;
      memcpy(v135, v132, v138);
      v139 = v206.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)v194);
      goto LABEL_44;
    }
    goto LABEL_72;
  }
  v160 = std::string::_M_create();
  *v136 = v160;
  v135 = (_BYTE *)v160;
  v161 = v206.m128i_i64[0];
  si128 = (__m128i)(unsigned __int64)v136;
  v136[2] = v206.m128i_i64[0];
  v138 = v161 + 1;
  if ( !v161 )
  {
LABEL_72:
    *v135 = *v132;
    v139 = v206.m128i_i64[0];
    goto LABEL_44;
  }
  v139 = -1;
  if ( v138 )
    goto LABEL_43;
LABEL_44:
  v136[1] = v139;
  v203 = &v224;
  v227 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v243,
    (const __m128i *)&v224);
  v243[2] = 0;
  v228 = 0;
  *(_QWORD *)v229 = 0;
  *(_QWORD *)v194 = v229;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v228 = 3;
  v140 = operator new(0x20u);
  *(_QWORD *)v140 = v140 + 16;
  strcpy((char *)(v140 + 16), "function_start");
  *(_QWORD *)(v140 + 8) = 14;
  *(_OWORD *)v229 = (unsigned __int64)v140;
  qsnprintf();
  v198 = &v217;
  v217 = v219;
  v141 = strlen(v250);
  v206.m128i_i64[0] = v141;
  v142 = v141;
  if ( v141 > 0xF )
  {
    v159 = (_QWORD *)std::string::_M_create();
    v217 = v159;
    v219[0] = v206.m128i_i64[0];
  }
  else
  {
    if ( v141 == 1 )
    {
      LOBYTE(v219[0]) = v250[0];
      goto LABEL_47;
    }
    if ( !v141 )
    {
LABEL_47:
      v143 = v219;
      goto LABEL_48;
    }
    v159 = v219;
  }
  if ( v142 >= 8 )
  {
    *v159 = *(_QWORD *)v250;
    *(_QWORD *)((char *)v159 + v142 - 8) = *(_QWORD *)&v249[v142];
    v162 = (unsigned __int64)(v159 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v163 = (char *)v159 - v162;
    v164 = (char *)(v250 - v163);
    v165 = ((_DWORD)v163 + v142) & 0xFFFFFFF8;
    if ( v165 >= 8 )
    {
      v166 = v165 & 0xFFFFFFF8;
      v167 = 0;
      do
      {
        v168 = v167;
        v167 += 8;
        *(_QWORD *)(v162 + v168) = *(_QWORD *)&v164[v168];
      }
      while ( v167 < v166 );
    }
  }
  else if ( (v142 & 4) != 0 )
  {
    *(_DWORD *)v159 = *(_DWORD *)v250;
    *(_DWORD *)((char *)v159 + v142 - 4) = *(_DWORD *)&v249[v142 + 4];
  }
  else if ( v142 )
  {
    *(_BYTE *)v159 = v250[0];
    if ( (v142 & 2) != 0 )
      *(_WORD *)((char *)v159 + v142 - 2) = *(_WORD *)&v249[v142 + 6];
  }
  v141 = v206.m128i_i64[0];
  v143 = v217;
LABEL_48:
  v218 = v141;
  *((_BYTE *)v143 + v141) = 0;
  v230 = 0;
  *(_QWORD *)&v231 = 0;
  v196 = &v231;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v230 = 3;
  v144 = (_QWORD *)operator new(0x20u);
  v145 = v217;
  v146 = v144 + 2;
  v147 = v218;
  *v144 = v144 + 2;
  if ( v145 == v219 )
  {
    v177 = v147 + 1;
    if ( (unsigned int)(v147 + 1) >= 8 )
    {
      v144[2] = v219[0];
      *(_QWORD *)((char *)v146 + v177 - 8) = *(_QWORD *)((char *)&v219[-1] + v177);
      v179 = (unsigned __int64)(v144 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v180 = (char *)v146 - v179;
      v181 = (char *)((char *)v219 - v180);
      if ( (((_DWORD)v180 + v177) & 0xFFFFFFF8) >= 8 )
      {
        v182 = ((_DWORD)v180 + v177) & 0xFFFFFFF8;
        v183 = 0;
        do
        {
          v184 = v183;
          v183 += 8;
          *(_QWORD *)(v179 + v184) = *(_QWORD *)&v181[v184];
        }
        while ( v183 < v182 );
      }
    }
    else if ( (v177 & 4) != 0 )
    {
      *((_DWORD *)v144 + 4) = v219[0];
      *(_DWORD *)((char *)v146 + v177 - 4) = *(_DWORD *)((char *)&v218 + v177 + 4);
    }
    else if ( (_DWORD)v147 != -1 )
    {
      *((_BYTE *)v144 + 16) = v219[0];
      if ( (v177 & 2) != 0 )
        *(_WORD *)((char *)v146 + v177 - 2) = *(_WORD *)((char *)&v218 + v177 + 6);
    }
  }
  else
  {
    *v144 = v145;
    v144[2] = v219[0];
  }
  v144[1] = v147;
  v217 = v219;
  v218 = 0;
  LOBYTE(v219[0]) = 0;
  v202 = &v228;
  v231 = (unsigned __int64)v144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v244,
    (const __m128i *)&v228);
  v244[2] = 0;
  v232 = 0;
  *(_QWORD *)&v233 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v232 = 3;
  v148 = operator new(0x20u);
  strcpy((char *)(v148 + 16), "comment");
  *(_QWORD *)v148 = v148 + 16;
  *(_QWORD *)(v148 + 8) = 7;
  v233 = (unsigned __int64)v148;
  if ( (unsigned __int64)v210 <= 1 )
  {
    v193 = 0;
    v151 = nullptr;
    goto LABEL_56;
  }
  v206 = 0u;
  v149 = v209;
  v204 = &v206.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v150 = (__int64 *)operator new(0x20u);
  v151 = v150;
  *v150 = (__int64)(v150 + 2);
  if ( !v149 )
    JUMPOUT(0x7FFC4);
  dest = v150 + 2;
  v152 = (char *)strlen(v149);
  v153 = (__int64)dest;
  v205 = v152;
  v154 = v152;
  if ( (unsigned __int64)v152 > 0xF )
  {
    dest = v152;
    v176 = std::string::_M_create();
    *v151 = v176;
    v153 = v176;
    v154 = dest;
    v151[2] = (__int64)v205;
    goto LABEL_103;
  }
  if ( v152 == (_BYTE *)&dword_0 + 1 )
  {
    *((_BYTE *)v151 + 16) = *v149;
    goto LABEL_55;
  }
  if ( v152 )
  {
LABEL_103:
    memcpy((void *)v153, v149, (size_t)v154);
    v152 = v205;
    v153 = *v151;
  }
LABEL_55:
  v151[1] = (__int64)v152;
  v152[v153] = 0;
LABEL_56:
  v206.m128i_i64[1] = (__int64)v151;
  v235 = 0;
  v206.m128i_i8[0] = v193;
  v234 = _mm_load_si128(&v206);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v245,
    (const __m128i *)&v232);
  v245[2] = 0;
  LOBYTE(v236) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v236) = 3;
  v155 = operator new(0x20u);
  *(_QWORD *)v155 = v155 + 16;
  strcpy((char *)(v155 + 16), "repeatable");
  *(_QWORD *)(v155 + 8) = 10;
  v238 = 4;
  v239 = v192;
  v240 = 0;
  s2 = (unsigned __int64)v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v246,
    (const __m128i *)&v236);
  v246[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v241,
    5);
  v156 = (__m128i *)v247;
  do
  {
    v156 = (__m128i *)((char *)v156 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v156 != &v241 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v217 != v219 )
    operator delete(v217, v219[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v214 != v216 )
    operator delete(v214, v216[0] + 1LL);
  if ( v209 )
  {
    *(_QWORD *)&v210 = 0;
    qfree();
  }
  if ( src != v197 )
    operator delete(src, v213[0] + 1LL);
  if ( s )
  {
    *(_QWORD *)&v208 = 0;
    qfree();
  }
  return a1;
}

