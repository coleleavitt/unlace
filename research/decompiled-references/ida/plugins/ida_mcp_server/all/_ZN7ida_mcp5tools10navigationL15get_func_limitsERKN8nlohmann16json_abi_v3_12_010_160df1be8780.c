__int64 __fastcall ida_mcp::tools::navigation::get_func_limits(
        int a1,
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
        __int64 a17,
        __int64 a18,
        __int64 a19,
        int a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        int a28,
        int a29,
        int a30,
        int a31,
        __int64 a32,
        __int64 a33,
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
        char a52,
        int a53,
        int a54,
        char a55,
        int a56,
        int a57,
        char a58,
        int a59,
        int a60,
        char a61,
        int a62,
        int a63,
        char a64,
        int a65,
        int a66,
        char a67,
        int a68,
        int a69,
        char a70,
        int a71,
        int a72,
        char a73,
        int a74,
        int a75,
        char a76,
        int a77,
        int a78,
        char a79,
        char a80,
        int a81,
        __int64 a82,
        __int64 a83,
        char a84,
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
        char a97,
        int a98,
        int a99,
        int a100,
        int a101,
        int a102,
        __int64 a103)
{
  _BYTE *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  __int64 v109; // rdx
  char v110; // bl
  _QWORD *func; // rbp
  __int64 *v112; // r12
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  _QWORD *v117; // rax
  _QWORD *v118; // rdx
  _QWORD *v119; // rcx
  __int64 v120; // rsi
  __int64 *v121; // r12
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  _BYTE *v126; // r13
  unsigned __int64 v127; // r14
  _QWORD *v128; // rax
  _BYTE *v129; // rdi
  __int64 *v130; // r12
  __m128i v131; // xmm0
  size_t v132; // rdx
  __int64 v133; // rax
  __int64 *v134; // r12
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  _QWORD *v139; // rax
  _QWORD *v140; // rdx
  _QWORD *v141; // rcx
  __int64 v142; // rsi
  __int64 *v143; // r12
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
  char *v160; // rbp
  __int64 v162; // rax
  __int64 v163; // rax
  unsigned int v164; // edx
  unsigned int v165; // edx
  unsigned int v166; // edx
  unsigned __int64 v167; // rdi
  char *v168; // rcx
  char *v169; // r8
  unsigned int v170; // edx
  unsigned int v171; // edx
  unsigned int v172; // ecx
  __int64 v173; // r9
  unsigned __int64 v174; // rdi
  char *v175; // rcx
  char *v176; // r8
  unsigned int v177; // edx
  unsigned int v178; // edx
  unsigned int v179; // ecx
  __int64 v180; // r9
  unsigned __int64 v181; // rdi
  char *v182; // rcx
  char *v183; // r8
  unsigned int v184; // edx
  unsigned int v185; // edx
  unsigned int v186; // ecx
  __int64 v187; // r9
  int v188; // [rsp+0h] [rbp-348h]
  int v189; // [rsp+0h] [rbp-348h]
  int v190; // [rsp+0h] [rbp-348h]
  int v191; // [rsp+0h] [rbp-348h]
  int v192; // [rsp+0h] [rbp-348h]
  int v193; // [rsp+0h] [rbp-348h]
  int v194; // [rsp+0h] [rbp-348h]
  int v195; // [rsp+8h] [rbp-340h]
  int v196; // [rsp+8h] [rbp-340h]
  int v197; // [rsp+8h] [rbp-340h]
  int v198; // [rsp+8h] [rbp-340h]
  int v199; // [rsp+8h] [rbp-340h]
  const __m128i *v200; // [rsp+8h] [rbp-340h]
  __int64 v201; // [rsp+10h] [rbp-338h]
  __int64 v202; // [rsp+10h] [rbp-338h]
  __int64 v203; // [rsp+10h] [rbp-338h]
  __int64 v204; // [rsp+10h] [rbp-338h]
  __int64 v205; // [rsp+10h] [rbp-338h]
  _QWORD *v206; // [rsp+10h] [rbp-338h]
  __int64 v207; // [rsp+10h] [rbp-338h]
  __int64 v208; // [rsp+18h] [rbp-330h]
  __m128i v209; // [rsp+20h] [rbp-328h] BYREF
  __int128 *v210; // [rsp+30h] [rbp-318h]
  __int128 *v211; // [rsp+38h] [rbp-310h]
  __int128 *v212; // [rsp+40h] [rbp-308h]
  __int128 *v213; // [rsp+48h] [rbp-300h]
  __int128 *v214; // [rsp+50h] [rbp-2F8h]
  __m128i *v215; // [rsp+58h] [rbp-2F0h]
  __int128 *v216; // [rsp+60h] [rbp-2E8h]
  __int128 *v217; // [rsp+68h] [rbp-2E0h]
  _QWORD *v218; // [rsp+70h] [rbp-2D8h]
  char *v219; // [rsp+78h] [rbp-2D0h]
  char *v220; // [rsp+80h] [rbp-2C8h]
  char *v221; // [rsp+88h] [rbp-2C0h]
  char *v222; // [rsp+90h] [rbp-2B8h]
  void **v223; // [rsp+98h] [rbp-2B0h]
  void **v224; // [rsp+A0h] [rbp-2A8h]
  void **v225; // [rsp+A8h] [rbp-2A0h]
  __int64 v226; // [rsp+B8h] [rbp-290h]
  __int64 v227; // [rsp+C0h] [rbp-288h]
  __int64 v228; // [rsp+C8h] [rbp-280h]
  char *s; // [rsp+D0h] [rbp-278h]
  __int128 v230; // [rsp+D8h] [rbp-270h]
  void *src; // [rsp+F0h] [rbp-258h] BYREF
  unsigned __int64 v232; // [rsp+F8h] [rbp-250h]
  _QWORD v233[2]; // [rsp+100h] [rbp-248h] BYREF
  void *v234; // [rsp+110h] [rbp-238h] BYREF
  __int64 v235; // [rsp+118h] [rbp-230h]
  _QWORD v236[2]; // [rsp+120h] [rbp-228h] BYREF
  void *v237; // [rsp+130h] [rbp-218h] BYREF
  __int64 v238; // [rsp+138h] [rbp-210h]
  _QWORD v239[2]; // [rsp+140h] [rbp-208h] BYREF
  void *v240; // [rsp+150h] [rbp-1F8h] BYREF
  __int64 v241; // [rsp+158h] [rbp-1F0h]
  _QWORD v242[2]; // [rsp+160h] [rbp-1E8h] BYREF
  char v243; // [rsp+170h] [rbp-1D8h] BYREF
  __int128 v244; // [rsp+178h] [rbp-1D0h] BYREF
  char v245; // [rsp+188h] [rbp-1C0h]
  __int128 v246; // [rsp+190h] [rbp-1B8h] BYREF
  char v247; // [rsp+1A0h] [rbp-1A8h] BYREF
  __int128 v248; // [rsp+1A8h] [rbp-1A0h] BYREF
  char v249; // [rsp+1B8h] [rbp-190h]
  __m128i v250; // [rsp+1C0h] [rbp-188h] BYREF
  char v251; // [rsp+1D0h] [rbp-178h] BYREF
  __int128 v252; // [rsp+1D8h] [rbp-170h] BYREF
  char v253; // [rsp+1E8h] [rbp-160h]
  __int128 v254; // [rsp+1F0h] [rbp-158h] BYREF
  char v255; // [rsp+200h] [rbp-148h] BYREF
  __int128 v256; // [rsp+208h] [rbp-140h] BYREF
  char v257; // [rsp+218h] [rbp-130h]
  __int128 v258; // [rsp+220h] [rbp-128h] BYREF
  void *v259; // [rsp+230h] [rbp-118h] BYREF
  __int128 v260; // [rsp+238h] [rbp-110h] BYREF
  char v261; // [rsp+248h] [rbp-100h]
  __int64 v262; // [rsp+250h] [rbp-F8h]
  __int64 v263; // [rsp+258h] [rbp-F0h]
  _QWORD v264[3]; // [rsp+260h] [rbp-E8h] BYREF
  _QWORD v265[3]; // [rsp+278h] [rbp-D0h] BYREF
  _QWORD v266[3]; // [rsp+290h] [rbp-B8h] BYREF
  _QWORD v267[3]; // [rsp+2A8h] [rbp-A0h] BYREF
  _QWORD v268[3]; // [rsp+2C0h] [rbp-88h] BYREF
  char v269; // [rsp+2D8h] [rbp-70h] BYREF
  char v270[40]; // [rsp+2E0h] [rbp-68h] BYREF
  unsigned __int64 v271; // [rsp+308h] [rbp-40h]

  v271 = __readfsqword(0x28u);
  v103 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                    a2,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    v188,
                    v195,
                    a1,
                    v208,
                    v209.m128i_i64[0],
                    v209.m128i_i8[8],
                    (int)v210,
                    (int)v211,
                    (__int64)v212);
  v259 = (char *)&v260 + 8;
  *(_QWORD *)&v260 = 0;
  BYTE8(v260) = 0;
  if ( *v103 != 3 )
    ida_mcp::tools::navigation::get_func_limits(
      a2,
      a2,
      v104,
      v105,
      v106,
      v107,
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
      a103);
  std::string::_M_assign();
  v108 = ida_mcp::parse_ea(v259, v260);
  v228 = v109;
  v110 = v109;
  v227 = v108;
  if ( v259 != (char *)&v260 + 8 )
    operator delete(v259, *((_QWORD *)&v260 + 1) + 1LL);
  if ( !v110 )
    JUMPOUT(0x772EB);
  func = (_QWORD *)get_func();
  if ( !func )
    JUMPOUT(0x7722A);
  LOBYTE(v233[0]) = 0;
  v218 = v233;
  src = v233;
  s = nullptr;
  v232 = 0;
  v230 = 0;
  if ( get_func_name() <= 0 )
  {
    qsnprintf();
    strlen(v270);
    std::string::_M_replace();
  }
  else
  {
    if ( (_QWORD)v230 )
      strlen(s);
    std::string::_M_replace();
  }
  v243 = 0;
  v212 = &v244;
  *(_QWORD *)&v244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v243 = 3;
  v112 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v112, "query_address", v113, v114, v115, v116, v189, (int)&v259, v201);
  v223 = &v234;
  v244 = (unsigned __int64)v112;
  ida_mcp::format_ea[abi:cxx11]();
  v245 = 0;
  v213 = &v246;
  *(_QWORD *)&v246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v245 = 3;
  v117 = (_QWORD *)operator new(0x20u);
  v118 = v234;
  v119 = v117 + 2;
  v120 = v235;
  *v117 = v117 + 2;
  if ( v118 == v236 )
  {
    v164 = v120 + 1;
    if ( (unsigned int)(v120 + 1) >= 8 )
    {
      v117[2] = v236[0];
      *(_QWORD *)((char *)v119 + v164 - 8) = *(_QWORD *)((char *)&v236[-1] + v164);
      v167 = (unsigned __int64)(v117 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v168 = (char *)v119 - v167;
      v169 = (char *)((char *)v236 - v168);
      v170 = ((_DWORD)v168 + v164) & 0xFFFFFFF8;
      if ( v170 >= 8 )
      {
        v171 = v170 & 0xFFFFFFF8;
        v172 = 0;
        do
        {
          v173 = v172;
          v172 += 8;
          *(_QWORD *)(v167 + v173) = *(_QWORD *)&v169[v173];
        }
        while ( v172 < v171 );
      }
    }
    else if ( (v164 & 4) != 0 )
    {
      *((_DWORD *)v117 + 4) = v236[0];
      *(_DWORD *)((char *)v119 + v164 - 4) = *(_DWORD *)((char *)&v235 + v164 + 4);
    }
    else if ( (_DWORD)v120 != -1 )
    {
      *((_BYTE *)v117 + 16) = v236[0];
      if ( (v164 & 2) != 0 )
        *(_WORD *)((char *)v119 + v164 - 2) = *(_WORD *)((char *)&v235 + v164 + 6);
    }
  }
  else
  {
    *v117 = v118;
    v117[2] = v236[0];
  }
  v117[1] = v120;
  v234 = v236;
  v235 = 0;
  LOBYTE(v236[0]) = 0;
  v220 = &v243;
  v246 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v264,
    (const __m128i *)&v243);
  v264[2] = 0;
  v247 = 0;
  *(_QWORD *)&v248 = 0;
  v214 = &v248;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v247 = 3;
  v121 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v121, "function_name", v122, v123, v124, v125, v190, v196, v202);
  v249 = 0;
  v215 = &v250;
  v250.m128i_i64[0] = 0;
  v248 = (unsigned __int64)v121;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v249 = 3;
  v126 = src;
  v127 = v232;
  v128 = (_QWORD *)operator new(0x20u);
  v129 = v128 + 2;
  v226 = v232;
  v130 = v128;
  *v128 = v128 + 2;
  if ( v127 <= 0xF )
  {
    v131 = (__m128i)(unsigned __int64)v128;
    v132 = v127 + 1;
    if ( v127 )
    {
LABEL_14:
      v209 = v131;
      memcpy(v129, v126, v132);
      v133 = v226;
      v131 = _mm_load_si128(&v209);
      goto LABEL_15;
    }
    goto LABEL_33;
  }
  v162 = std::string::_M_create();
  *v130 = v162;
  v129 = (_BYTE *)v162;
  v163 = v226;
  v131 = (__m128i)(unsigned __int64)v130;
  v130[2] = v226;
  v132 = v163 + 1;
  if ( !v163 )
  {
LABEL_33:
    *v129 = *v126;
    v133 = v226;
    goto LABEL_15;
  }
  v133 = -1;
  if ( v132 )
    goto LABEL_14;
LABEL_15:
  v130[1] = v133;
  v222 = &v247;
  v250 = v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v265,
    (const __m128i *)&v247);
  v265[2] = 0;
  v251 = 0;
  *(_QWORD *)&v252 = 0;
  v216 = &v252;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v251 = 3;
  v134 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v134, "start_address", v135, v136, v137, v138, v191, v197, v203);
  v252 = (unsigned __int64)v134;
  v224 = &v237;
  ida_mcp::format_ea[abi:cxx11]();
  v253 = 0;
  v217 = &v254;
  *(_QWORD *)&v254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v253 = 3;
  v139 = (_QWORD *)operator new(0x20u);
  v140 = v237;
  v141 = v139 + 2;
  v142 = v238;
  *v139 = v139 + 2;
  if ( v140 == v239 )
  {
    v166 = v142 + 1;
    if ( (unsigned int)(v142 + 1) >= 8 )
    {
      v139[2] = v239[0];
      *(_QWORD *)((char *)v141 + v166 - 8) = *(_QWORD *)((char *)&v239[-1] + v166);
      v181 = (unsigned __int64)(v139 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v182 = (char *)v141 - v181;
      v183 = (char *)((char *)v239 - v182);
      v184 = ((_DWORD)v182 + v166) & 0xFFFFFFF8;
      if ( v184 >= 8 )
      {
        v185 = v184 & 0xFFFFFFF8;
        v186 = 0;
        do
        {
          v187 = v186;
          v186 += 8;
          *(_QWORD *)(v181 + v187) = *(_QWORD *)&v183[v187];
        }
        while ( v186 < v185 );
      }
    }
    else if ( (v166 & 4) != 0 )
    {
      *((_DWORD *)v139 + 4) = v239[0];
      *(_DWORD *)((char *)v141 + v166 - 4) = *(_DWORD *)((char *)&v238 + v166 + 4);
    }
    else if ( (_DWORD)v142 != -1 )
    {
      *((_BYTE *)v139 + 16) = v239[0];
      if ( (v166 & 2) != 0 )
        *(_WORD *)((char *)v141 + v166 - 2) = *(_WORD *)((char *)&v238 + v166 + 6);
    }
  }
  else
  {
    *v139 = v140;
    v139[2] = v239[0];
  }
  v139[1] = v142;
  v237 = v239;
  v238 = 0;
  LOBYTE(v239[0]) = 0;
  v221 = &v251;
  v254 = (unsigned __int64)v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v266,
    (const __m128i *)&v251);
  v266[2] = 0;
  v255 = 0;
  *(_QWORD *)&v256 = 0;
  v209.m128i_i64[0] = (__int64)&v256;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v255 = 3;
  v143 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v143, "end_address", v144, v145, v146, v147, v192, v198, v204);
  v256 = (unsigned __int64)v143;
  v225 = &v240;
  ida_mcp::format_ea[abi:cxx11]();
  v257 = 0;
  v210 = &v258;
  *(_QWORD *)&v258 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v257 = 3;
  v148 = (_QWORD *)operator new(0x20u);
  v149 = v240;
  v150 = v148 + 2;
  v151 = v241;
  *v148 = v148 + 2;
  if ( v149 == v242 )
  {
    v165 = v151 + 1;
    if ( (unsigned int)(v151 + 1) >= 8 )
    {
      v148[2] = v242[0];
      *(_QWORD *)((char *)v150 + v165 - 8) = *(_QWORD *)((char *)&v242[-1] + v165);
      v174 = (unsigned __int64)(v148 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v175 = (char *)v150 - v174;
      v176 = (char *)((char *)v242 - v175);
      v177 = ((_DWORD)v175 + v165) & 0xFFFFFFF8;
      if ( v177 >= 8 )
      {
        v178 = v177 & 0xFFFFFFF8;
        v179 = 0;
        do
        {
          v180 = v179;
          v179 += 8;
          *(_QWORD *)(v174 + v180) = *(_QWORD *)&v176[v180];
        }
        while ( v179 < v178 );
      }
    }
    else if ( (v165 & 4) != 0 )
    {
      *((_DWORD *)v148 + 4) = v242[0];
      *(_DWORD *)((char *)v150 + v165 - 4) = *(_DWORD *)((char *)&v241 + v165 + 4);
    }
    else if ( (_DWORD)v151 != -1 )
    {
      *((_BYTE *)v148 + 16) = v242[0];
      if ( (v165 & 2) != 0 )
        *(_WORD *)((char *)v150 + v165 - 2) = *(_WORD *)((char *)&v241 + v165 + 6);
    }
  }
  else
  {
    *v148 = v149;
    v148[2] = v242[0];
  }
  v148[1] = v151;
  v240 = v242;
  v241 = 0;
  LOBYTE(v242[0]) = 0;
  v219 = &v255;
  v258 = (unsigned __int64)v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v267,
    (const __m128i *)&v255);
  v267[2] = 0;
  LOBYTE(v259) = 0;
  *(_QWORD *)&v260 = 0;
  v211 = &v260;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v259) = 3;
  v152 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v152, "size", v153, v154, v155, v156, v193, v199, v205);
  v260 = (unsigned __int64)v152;
  v262 = func[1] - *func;
  v261 = 6;
  v263 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v268,
    v200);
  v268[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v206,
    (__int64)v264,
    5,
    v157,
    v158,
    v159,
    v194,
    (__int64)v200,
    (int)v206,
    (int)&src,
    v209.m128i_i32[0],
    v209.m128i_i32[2],
    (__int64)v210,
    (int)v211,
    (int)v212,
    (int)v213,
    (int)v214,
    (char)v215,
    (__int64)v216,
    (int)v217,
    (__int64)v218);
  v160 = &v269;
  do
  {
    v160 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v160 != (char *)v264 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v240 != v242 )
    operator delete(v240, v242[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v237 != v239 )
    operator delete(v237, v239[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v234 != v236 )
    operator delete(v234, v236[0] + 1LL);
  if ( src != v218 )
    operator delete(src, v233[0] + 1LL);
  if ( s )
  {
    *(_QWORD *)&v230 = 0;
    qfree();
  }
  return v207;
}

