char *__fastcall ida_mcp::tools::offsets::`anonymous namespace'::handle_calc_reference_target(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        __int64 a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        char a22,
        int a23,
        int a24,
        int a25,
        char a26,
        int a27,
        int a28,
        char a29,
        int a30,
        int a31,
        char a32,
        int a33,
        int a34,
        char a35,
        char a36,
        int a37,
        __int64 a38,
        int a39,
        int a40,
        char a41,
        char a42,
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
        char a53,
        char a54,
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
        int a86,
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
        int a107,
        int a108,
        __int64 a109)
{
  void *v109; // r12
  size_t v110; // rax
  unsigned int v111; // r14d
  char *v112; // rax
  std::runtime_error *exception; // rbx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int8 v118; // r14
  int v119; // eax
  int v120; // edx
  char v121; // r12
  __int64 *v122; // r13
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  _QWORD *v131; // rax
  __int64 *v132; // rdx
  _QWORD *v133; // rcx
  __int64 v134; // rsi
  __int64 *v135; // r13
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 *v140; // rbp
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  _QWORD *v149; // rax
  _QWORD *v150; // rdx
  _QWORD *v151; // rcx
  __int64 v152; // rdi
  __m128i v153; // xmm0
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  void **v157; // rbp
  unsigned int v159; // edx
  unsigned int v160; // edx
  unsigned __int64 v161; // rdi
  char *v162; // rcx
  char *v163; // r8
  unsigned int v164; // edx
  unsigned int v165; // edx
  unsigned int v166; // ecx
  __int64 v167; // r9
  unsigned __int64 v168; // r8
  char *v169; // rcx
  char *v170; // r9
  unsigned int v171; // edx
  unsigned int v172; // edx
  unsigned int v173; // ecx
  __int64 v174; // r10
  int v175; // [rsp+0h] [rbp-378h]
  int v176; // [rsp+0h] [rbp-378h]
  int v177; // [rsp+0h] [rbp-378h]
  int v178; // [rsp+0h] [rbp-378h]
  int v179; // [rsp+0h] [rbp-378h]
  int sc; // [rsp+8h] [rbp-370h]
  int s; // [rsp+8h] [rbp-370h]
  int sd; // [rsp+8h] [rbp-370h]
  char *sa; // [rsp+8h] [rbp-370h]
  char *sb; // [rsp+8h] [rbp-370h]
  __int64 v185; // [rsp+10h] [rbp-368h]
  __int64 v186; // [rsp+10h] [rbp-368h]
  __int64 v187; // [rsp+10h] [rbp-368h]
  __int64 v188; // [rsp+10h] [rbp-368h]
  __int64 v189; // [rsp+10h] [rbp-368h]
  int v190; // [rsp+40h] [rbp-338h]
  int v191; // [rsp+48h] [rbp-330h]
  __m128i v192; // [rsp+50h] [rbp-328h] BYREF
  void *v193; // [rsp+60h] [rbp-318h] BYREF
  __int64 v194; // [rsp+68h] [rbp-310h]
  __int64 v195[2]; // [rsp+70h] [rbp-308h] BYREF
  void *v196; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v197; // [rsp+88h] [rbp-2F0h]
  _QWORD v198[2]; // [rsp+90h] [rbp-2E8h] BYREF
  char v199; // [rsp+A0h] [rbp-2D8h] BYREF
  __int128 v200; // [rsp+A8h] [rbp-2D0h] BYREF
  char v201; // [rsp+B8h] [rbp-2C0h]
  __int128 v202; // [rsp+C0h] [rbp-2B8h] BYREF
  char v203; // [rsp+D0h] [rbp-2A8h] BYREF
  __int128 v204; // [rsp+D8h] [rbp-2A0h] BYREF
  char v205; // [rsp+E8h] [rbp-290h]
  __int64 v206; // [rsp+F0h] [rbp-288h]
  __int64 v207; // [rsp+F8h] [rbp-280h]
  char *v208; // [rsp+100h] [rbp-278h] BYREF
  _OWORD v209[2]; // [rsp+108h] [rbp-270h] BYREF
  __int64 v210; // [rsp+128h] [rbp-250h]
  void *v211; // [rsp+130h] [rbp-248h] BYREF
  unsigned __int64 v212; // [rsp+138h] [rbp-240h]
  __int64 v213; // [rsp+140h] [rbp-238h] BYREF
  _QWORD v214[3]; // [rsp+148h] [rbp-230h] BYREF
  _QWORD v215[3]; // [rsp+160h] [rbp-218h] BYREF
  char v216; // [rsp+178h] [rbp-200h] BYREF
  __int128 v217; // [rsp+180h] [rbp-1F8h]
  __int64 v218; // [rsp+190h] [rbp-1E8h]
  __int64 v219; // [rsp+198h] [rbp-1E0h]
  __int64 v220; // [rsp+1A0h] [rbp-1D8h]
  __int64 v221; // [rsp+1A8h] [rbp-1D0h]
  __int128 v222; // [rsp+1B0h] [rbp-1C8h]
  __int64 v223; // [rsp+1C0h] [rbp-1B8h]
  __int64 v224; // [rsp+1C8h] [rbp-1B0h]
  __int64 v225; // [rsp+1D0h] [rbp-1A8h]
  __int128 v226; // [rsp+1D8h] [rbp-1A0h]
  __int64 v227; // [rsp+1E8h] [rbp-190h]
  __int64 v228; // [rsp+1F0h] [rbp-188h]
  __int64 v229; // [rsp+1F8h] [rbp-180h]
  __int128 v230; // [rsp+200h] [rbp-178h]
  __int64 v231; // [rsp+210h] [rbp-168h]
  __int64 v232; // [rsp+218h] [rbp-160h]
  __int64 v233; // [rsp+220h] [rbp-158h]
  __int128 v234; // [rsp+228h] [rbp-150h]
  __int64 v235; // [rsp+238h] [rbp-140h]
  __int64 v236; // [rsp+240h] [rbp-138h]
  __int64 v237; // [rsp+248h] [rbp-130h]
  __int128 v238; // [rsp+250h] [rbp-128h]
  __int64 v239; // [rsp+260h] [rbp-118h]
  __int64 v240; // [rsp+268h] [rbp-110h]
  __int64 v241; // [rsp+270h] [rbp-108h]
  __int128 v242; // [rsp+278h] [rbp-100h]
  __int64 v243; // [rsp+288h] [rbp-F0h]
  __int64 v244; // [rsp+290h] [rbp-E8h]
  __int64 v245; // [rsp+298h] [rbp-E0h]
  __int128 v246; // [rsp+2A0h] [rbp-D8h]
  __int64 v247; // [rsp+2B0h] [rbp-C8h]
  __int64 v248; // [rsp+2B8h] [rbp-C0h]
  __int64 v249; // [rsp+2C0h] [rbp-B8h]
  __int128 v250; // [rsp+2C8h] [rbp-B0h]
  __int64 v251; // [rsp+2D8h] [rbp-A0h]
  int v252; // [rsp+2E0h] [rbp-98h]
  char v253[32]; // [rsp+2F0h] [rbp-88h] BYREF
  char v254[40]; // [rsp+310h] [rbp-68h] BYREF
  unsigned __int64 v255; // [rsp+338h] [rbp-40h]

  v255 = __readfsqword(0x28u);
  LOBYTE(v213) = 0;
  v118 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v211 = &v213;
  v212 = 0;
  if ( v118 != 3 )
    ida_mcp::tools::offsets::`anonymous namespace'::handle_calc_reference_target(
      a2,
      (__int64)"address",
      v114,
      v115,
      v116,
      v117,
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
      a107,
      a108,
      a109);
  std::string::_M_assign();
  v119 = ida_mcp::parse_ea(v211, v212);
  v191 = v120;
  v121 = v120;
  v190 = v119;
  if ( v211 != &v213 )
    operator delete(v211, v213 + 1);
  if ( !v121 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v192.m128i_i32[0] = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  v217 = -1;
  v218 = -1;
  v219 = 0;
  v220 = 0;
  v221 = 0;
  v223 = 0;
  v224 = 0;
  v225 = 0;
  v227 = 0;
  v228 = 0;
  v229 = 0;
  v231 = 0;
  v232 = 0;
  v233 = 0;
  v235 = 0;
  v236 = 0;
  v237 = 0;
  v239 = 0;
  v240 = 0;
  v241 = 0;
  v243 = 0;
  v244 = 0;
  v245 = 0;
  v247 = 0;
  v222 = 0;
  v226 = 0;
  v230 = 0;
  v234 = 0;
  v238 = 0;
  v242 = 0;
  v246 = 0;
  v248 = 0;
  v249 = 0;
  v251 = 0;
  v252 = 0;
  v250 = 0;
  if ( (int)decode_insn() <= 0 )
  {
    v109 = __cxa_allocate_exception(0x10u);
    qsnprintf();
    v208 = (char *)v209 + 8;
    v110 = strlen(v254);
    v192.m128i_i64[0] = v110;
    v111 = v110;
    if ( v110 > 0xF )
    {
      v112 = (char *)std::string::_M_create();
      v208 = v112;
      *((_QWORD *)&v209[0] + 1) = v192.m128i_i64[0];
    }
    else
    {
      if ( v110 == 1 )
      {
        BYTE8(v209[0]) = v254[0];
LABEL_48:
        *(_QWORD *)&v209[0] = v192.m128i_i64[0];
        v208[v192.m128i_i64[0]] = 0;
        std::string::insert();
        std::string::basic_string();
        std::runtime_error::runtime_error();
        std::string::_M_dispose();
        std::string::_M_dispose();
        __cxa_throw(
          v109,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))&std::runtime_error::~runtime_error);
      }
      if ( !v110 )
        goto LABEL_48;
      v112 = (char *)v209 + 8;
    }
    qmemcpy(v112, v254, v111);
    goto LABEL_48;
  }
  v185 = -1;
  if ( (unsigned __int8)(BYTE1(v221) - 6) <= 1u || BYTE1(v221) == 2 )
    v185 = *((_QWORD *)&v222 + 1);
  *(_QWORD *)&v200 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v199 = 3;
  v122 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v122, "address", v123, v124, v125, v126, v175, a1, v185);
  v200 = (unsigned __int64)v122;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v193, v253, v127, v128, v129, v130, v176, sc, v186);
  v201 = 0;
  *(_QWORD *)&v202 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v201 = 3;
  v131 = (_QWORD *)operator new(0x20u);
  v132 = (__int64 *)v193;
  v133 = v131 + 2;
  v134 = v194;
  *v131 = v131 + 2;
  if ( v132 == v195 )
  {
    v159 = v134 + 1;
    if ( (unsigned int)(v134 + 1) >= 8 )
    {
      v131[2] = v195[0];
      *(_QWORD *)((char *)v133 + v159 - 8) = *(__int64 *)((char *)&v195[-1] + v159);
      v161 = (unsigned __int64)(v131 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v162 = (char *)v133 - v161;
      v163 = (char *)((char *)v195 - v162);
      v164 = ((_DWORD)v162 + v159) & 0xFFFFFFF8;
      if ( v164 >= 8 )
      {
        v165 = v164 & 0xFFFFFFF8;
        v166 = 0;
        do
        {
          v167 = v166;
          v166 += 8;
          *(_QWORD *)(v161 + v167) = *(_QWORD *)&v163[v167];
        }
        while ( v166 < v165 );
      }
    }
    else if ( (v159 & 4) != 0 )
    {
      *((_DWORD *)v131 + 4) = v195[0];
      *(_DWORD *)((char *)v133 + v159 - 4) = *(_DWORD *)((char *)&v194 + v159 + 4);
    }
    else if ( (_DWORD)v134 != -1 )
    {
      *((_BYTE *)v131 + 16) = v195[0];
      if ( (v159 & 2) != 0 )
        *(_WORD *)((char *)v133 + v159 - 2) = *(_WORD *)((char *)&v194 + v159 + 6);
    }
  }
  else
  {
    *v131 = v132;
    v131[2] = v195[0];
  }
  v131[1] = v134;
  v193 = v195;
  v194 = 0;
  LOBYTE(v195[0]) = 0;
  v202 = (unsigned __int64)v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v211,
    (const __m128i *)&v199);
  v213 = 0;
  v203 = 0;
  *(_QWORD *)&v204 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v203 = 3;
  v135 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v135, "operand", v136, v137, v138, v139, v177, s, v187);
  v205 = 5;
  v206 = 0;
  v207 = 0;
  v204 = (unsigned __int64)v135;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v214,
    (const __m128i *)&v203);
  v214[2] = 0;
  LOBYTE(v208) = 0;
  *(_QWORD *)&v209[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v208) = 3;
  v140 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v140, "target", v141, v142, v143, v144, v178, sd, v188);
  v209[0] = (unsigned __int64)v140;
  if ( v189 == -1 )
  {
    v149 = nullptr;
    v118 = 0;
    v121 = 0;
  }
  else
  {
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v196,
      v254,
      v145,
      v146,
      v147,
      v148,
      v179,
      (int)sa,
      (__int64)&v196);
    v192 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v149 = (_QWORD *)operator new(0x20u);
    v150 = v196;
    v151 = v149 + 2;
    v152 = v197;
    *v149 = v149 + 2;
    if ( v150 == v198 )
    {
      v160 = v152 + 1;
      if ( (unsigned int)(v152 + 1) >= 8 )
      {
        *v151 = v198[0];
        *(_QWORD *)((char *)v151 + v160 - 8) = *(_QWORD *)((char *)&v198[-1] + v160);
        v168 = (unsigned __int64)(v149 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v169 = (char *)v151 - v168;
        v170 = (char *)((char *)v198 - v169);
        v171 = ((_DWORD)v169 + v160) & 0xFFFFFFF8;
        if ( v171 >= 8 )
        {
          v172 = v171 & 0xFFFFFFF8;
          v173 = 0;
          do
          {
            v174 = v173;
            v173 += 8;
            *(_QWORD *)(v168 + v174) = *(_QWORD *)&v170[v174];
          }
          while ( v173 < v172 );
        }
      }
      else if ( (v160 & 4) != 0 )
      {
        *(_DWORD *)v151 = v198[0];
        *(_DWORD *)((char *)v151 + v160 - 4) = *(_DWORD *)((char *)&v197 + v160 + 4);
      }
      else if ( (_DWORD)v152 != -1 )
      {
        *(_BYTE *)v151 = v198[0];
        if ( (v160 & 2) != 0 )
          *(_WORD *)((char *)v151 + v160 - 2) = *(_WORD *)((char *)&v197 + v160 + 6);
      }
    }
    else
    {
      *v149 = v150;
      v149[2] = v198[0];
    }
    v149[1] = v152;
    v196 = v198;
    v197 = 0;
    LOBYTE(v198[0]) = 0;
  }
  v192.m128i_i8[0] = v118;
  v192.m128i_i64[1] = (__int64)v149;
  v153 = _mm_load_si128(&v192);
  v210 = 0;
  v209[1] = v153;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v215,
    (const __m128i *)&v208);
  v215[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    sa,
    (__int64)&v211,
    3,
    v154,
    v155,
    v156,
    v179,
    (__int64)sa,
    v189,
    (int)&v200,
    (int)&v202,
    (int)&v204,
    (__int64)&v199,
    (int)&v193,
    v190,
    v191,
    v192.m128i_i32[0],
    v192.m128i_i8[8],
    (__int64)v193,
    v194,
    v195[0]);
  v157 = (void **)&v216;
  do
  {
    v157 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v157 != &v211 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v121 && v196 != v198 )
    operator delete(v196, v198[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v193 != v195 )
    operator delete(v193, v195[0] + 1);
  return sb;
}

