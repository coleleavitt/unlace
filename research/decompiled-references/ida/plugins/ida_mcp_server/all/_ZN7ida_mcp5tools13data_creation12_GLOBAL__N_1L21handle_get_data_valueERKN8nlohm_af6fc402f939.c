__int64 __fastcall ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_data_value(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        char a22,
        __int64 a23,
        __int64 a24,
        char a25,
        int a26,
        int a27,
        int a28,
        int a29,
        char a30,
        int a31,
        int a32,
        int a33,
        char a34,
        int a35,
        int a36,
        char a37,
        int a38,
        int a39,
        char a40,
        int a41,
        int a42,
        char a43,
        char a44,
        int a45,
        char a46,
        int a47,
        int a48,
        char a49,
        char a50,
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
        char a70,
        int a71,
        int a72,
        char a73,
        char a74,
        int a75,
        __int64 a76,
        __int64 a77,
        char a78,
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
        char a97,
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
  __int64 v107; // rax
  __int64 v108; // rbx
  __int64 v109; // r13
  __int64 v110; // r14
  size_t v111; // rdx
  int v112; // eax
  unsigned __int64 v113; // rbp
  unsigned __int64 v114; // rbx
  size_t v115; // rdx
  int v116; // eax
  __int8 v117; // bp
  __int64 v118; // rax
  char v119; // dl
  char v120; // bl
  __int16 flags; // r14
  __int64 data_elsize; // r15
  __int64 *v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  _QWORD *v132; // rax
  _QWORD *v133; // rdx
  _QWORD *v134; // rcx
  __int64 v135; // rsi
  __int64 *v136; // r13
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int8 v141; // dl
  __m128i v142; // xmm0
  __int64 *v143; // r13
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  _QWORD *v152; // rax
  _QWORD *v153; // rdx
  _QWORD *v154; // rcx
  __int64 v155; // rdi
  __m128i v156; // xmm0
  __int64 *v157; // rbp
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 *v162; // rbp
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int128 v167; // xmm0
  __int64 v168; // rbp
  __int64 *v169; // r15
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 *v174; // rbp
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  char *v182; // rbp
  unsigned int v184; // edx
  unsigned int v185; // edx
  unsigned __int64 v186; // rdi
  char *v187; // rcx
  char *v188; // r8
  unsigned int v189; // edx
  unsigned int v190; // edx
  unsigned int v191; // ecx
  __int64 v192; // r9
  unsigned __int64 v193; // r8
  char *v194; // rcx
  char *v195; // r9
  unsigned int v196; // edx
  unsigned int v197; // edx
  unsigned int v198; // ecx
  __int64 v199; // r10
  int v200; // [rsp+0h] [rbp-368h]
  int v201; // [rsp+0h] [rbp-368h]
  int v202; // [rsp+0h] [rbp-368h]
  int v203; // [rsp+0h] [rbp-368h]
  int v204; // [rsp+0h] [rbp-368h]
  int v205; // [rsp+0h] [rbp-368h]
  int v206; // [rsp+0h] [rbp-368h]
  int v207; // [rsp+0h] [rbp-368h]
  int v208; // [rsp+0h] [rbp-368h]
  int v209; // [rsp+8h] [rbp-360h]
  int v210; // [rsp+8h] [rbp-360h]
  int v211; // [rsp+8h] [rbp-360h]
  int v212; // [rsp+8h] [rbp-360h]
  int v213; // [rsp+8h] [rbp-360h]
  int v214; // [rsp+8h] [rbp-360h]
  int v215; // [rsp+8h] [rbp-360h]
  const __m128i *v216; // [rsp+8h] [rbp-360h]
  __int64 v217; // [rsp+10h] [rbp-358h]
  __int64 v218; // [rsp+10h] [rbp-358h]
  __int64 v219; // [rsp+10h] [rbp-358h]
  __int64 v220; // [rsp+10h] [rbp-358h]
  __int64 v221; // [rsp+10h] [rbp-358h]
  __int64 v222; // [rsp+10h] [rbp-358h]
  __int64 v223; // [rsp+10h] [rbp-358h]
  _QWORD *v224; // [rsp+10h] [rbp-358h]
  __int64 v225; // [rsp+10h] [rbp-358h]
  int v226; // [rsp+40h] [rbp-328h]
  char v227; // [rsp+47h] [rbp-321h]
  __int64 v228; // [rsp+60h] [rbp-308h]
  __int64 v229; // [rsp+70h] [rbp-2F8h]
  __m128i v230; // [rsp+80h] [rbp-2E8h] BYREF
  __m128i v231; // [rsp+90h] [rbp-2D8h] BYREF
  void *v232; // [rsp+A0h] [rbp-2C8h] BYREF
  __int64 v233; // [rsp+A8h] [rbp-2C0h]
  _QWORD v234[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  void *v235; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v236; // [rsp+C8h] [rbp-2A0h]
  _QWORD v237[2]; // [rsp+D0h] [rbp-298h] BYREF
  char v238; // [rsp+E0h] [rbp-288h] BYREF
  __int128 v239; // [rsp+E8h] [rbp-280h] BYREF
  char v240; // [rsp+F8h] [rbp-270h]
  __int128 v241; // [rsp+100h] [rbp-268h] BYREF
  char v242; // [rsp+110h] [rbp-258h] BYREF
  _OWORD v243[2]; // [rsp+118h] [rbp-250h] BYREF
  __int64 v244; // [rsp+138h] [rbp-230h]
  char v245; // [rsp+140h] [rbp-228h] BYREF
  _OWORD v246[2]; // [rsp+148h] [rbp-220h] BYREF
  __int64 v247; // [rsp+168h] [rbp-200h]
  char v248; // [rsp+170h] [rbp-1F8h] BYREF
  __int128 v249; // [rsp+178h] [rbp-1F0h] BYREF
  char v250; // [rsp+188h] [rbp-1E0h]
  __int64 v251; // [rsp+190h] [rbp-1D8h]
  __int64 v252; // [rsp+198h] [rbp-1D0h]
  char v253; // [rsp+1A0h] [rbp-1C8h] BYREF
  __int128 v254; // [rsp+1A8h] [rbp-1C0h]
  char v255; // [rsp+1B8h] [rbp-1B0h]
  _BOOL8 v256; // [rsp+1C0h] [rbp-1A8h]
  __int64 v257; // [rsp+1C8h] [rbp-1A0h]
  char v258; // [rsp+1D0h] [rbp-198h] BYREF
  __int128 v259; // [rsp+1D8h] [rbp-190h]
  char v260; // [rsp+1E8h] [rbp-180h]
  _BOOL8 v261; // [rsp+1F0h] [rbp-178h]
  __int64 v262; // [rsp+1F8h] [rbp-170h]
  void *v263; // [rsp+200h] [rbp-168h] BYREF
  __int128 s2; // [rsp+208h] [rbp-160h] BYREF
  char v265; // [rsp+218h] [rbp-150h]
  __int64 v266; // [rsp+220h] [rbp-148h]
  __int64 v267; // [rsp+228h] [rbp-140h]
  _QWORD v268[3]; // [rsp+230h] [rbp-138h] BYREF
  _QWORD v269[3]; // [rsp+248h] [rbp-120h] BYREF
  _QWORD v270[3]; // [rsp+260h] [rbp-108h] BYREF
  _QWORD v271[3]; // [rsp+278h] [rbp-F0h] BYREF
  _QWORD v272[3]; // [rsp+290h] [rbp-D8h] BYREF
  _QWORD v273[3]; // [rsp+2A8h] [rbp-C0h] BYREF
  _QWORD v274[3]; // [rsp+2C0h] [rbp-A8h] BYREF
  char v275; // [rsp+2D8h] [rbp-90h] BYREF
  char v276[32]; // [rsp+2E0h] [rbp-88h] BYREF
  char v277[40]; // [rsp+300h] [rbp-68h] BYREF
  unsigned __int64 v278; // [rsp+328h] [rbp-40h]

  v278 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v263 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_data_value(
      a1,
      (_BYTE *)a2,
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
      a105,
      a106,
      a107);
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
  v263 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  if ( v117 != 3 )
    JUMPOUT(0x125555);
  std::string::_M_assign();
  v118 = ida_mcp::parse_ea(v263, s2);
  v120 = v119;
  v229 = v118;
  if ( v263 != (char *)&s2 + 8 )
    operator delete(v263, *((_QWORD *)&s2 + 1) + 1LL);
  if ( !v120 )
    JUMPOUT(0x12544A);
  flags = get_flags_ex();
  data_elsize = get_data_elsize();
  LOBYTE(v200) = get_data_value();
  *(_QWORD *)&v239 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v238 = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v123, "address", v124, v125, v126, v127, v200, (int)&v263, a1);
  v239 = (unsigned __int64)v123;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v232, v276, v128, v129, v130, v131, v201, v209, v217);
  v240 = 0;
  *(_QWORD *)&v241 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v240 = 3;
  v132 = (_QWORD *)operator new(0x20u);
  v133 = v232;
  v134 = v132 + 2;
  v135 = v233;
  *v132 = v132 + 2;
  if ( v133 == v234 )
  {
    v185 = v135 + 1;
    if ( (unsigned int)(v135 + 1) >= 8 )
    {
      v132[2] = v234[0];
      *(_QWORD *)((char *)v134 + v185 - 8) = *(_QWORD *)((char *)&v234[-1] + v185);
      v186 = (unsigned __int64)(v132 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v187 = (char *)v134 - v186;
      v188 = (char *)((char *)v234 - v187);
      v189 = ((_DWORD)v187 + v185) & 0xFFFFFFF8;
      if ( v189 >= 8 )
      {
        v190 = v189 & 0xFFFFFFF8;
        v191 = 0;
        do
        {
          v192 = v191;
          v191 += 8;
          *(_QWORD *)(v186 + v192) = *(_QWORD *)&v188[v192];
        }
        while ( v191 < v190 );
      }
    }
    else if ( (v185 & 4) != 0 )
    {
      *((_DWORD *)v132 + 4) = v234[0];
      *(_DWORD *)((char *)v134 + v185 - 4) = *(_DWORD *)((char *)&v233 + v185 + 4);
    }
    else if ( (_DWORD)v135 != -1 )
    {
      *((_BYTE *)v132 + 16) = v234[0];
      if ( (v185 & 2) != 0 )
        *(_WORD *)((char *)v134 + v185 - 2) = *(_WORD *)((char *)&v233 + v185 + 6);
    }
  }
  else
  {
    *v132 = v133;
    v132[2] = v234[0];
  }
  v132[1] = v135;
  v232 = v234;
  v233 = 0;
  LOBYTE(v234[0]) = 0;
  v241 = (unsigned __int64)v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v268,
    (const __m128i *)&v238);
  v268[2] = 0;
  v242 = 0;
  *(_QWORD *)&v243[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v242 = 3;
  v136 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v136, "value", v137, v138, v139, v140, v202, v210, v218);
  v243[0] = (unsigned __int64)v136;
  if ( (_BYTE)v203 )
    v141 = 6;
  else
    v141 = 0;
  v230.m128i_i8[0] = v141;
  v230.m128i_i64[1] = 0;
  v142 = _mm_load_si128(&v230);
  v244 = 0;
  v243[1] = v142;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v269,
    (const __m128i *)&v242);
  v269[2] = 0;
  v245 = 0;
  *(_QWORD *)&v246[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v245 = 3;
  v143 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v143, "value_hex", v144, v145, v146, v147, v203, v211, v219);
  v246[0] = (unsigned __int64)v143;
  if ( (_BYTE)v204 )
  {
    qsnprintf();
    std::string::basic_string<std::allocator<char>>((__int64 *)&v235, v277, v148, v149, v150, v151, v204, v212, v220);
    v231 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v152 = (_QWORD *)operator new(0x20u);
    v153 = v235;
    v154 = v152 + 2;
    v155 = v236;
    *v152 = v152 + 2;
    if ( v153 == v237 )
    {
      v184 = v155 + 1;
      if ( (unsigned int)(v155 + 1) >= 8 )
      {
        *v154 = v237[0];
        *(_QWORD *)((char *)v154 + v184 - 8) = *(_QWORD *)((char *)&v237[-1] + v184);
        v193 = (unsigned __int64)(v152 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v194 = (char *)v154 - v193;
        v195 = (char *)((char *)v237 - v194);
        v196 = ((_DWORD)v194 + v184) & 0xFFFFFFF8;
        if ( v196 >= 8 )
        {
          v197 = v196 & 0xFFFFFFF8;
          v198 = 0;
          do
          {
            v199 = v198;
            v198 += 8;
            *(_QWORD *)(v193 + v199) = *(_QWORD *)&v195[v199];
          }
          while ( v198 < v197 );
        }
      }
      else if ( (v184 & 4) != 0 )
      {
        *(_DWORD *)v154 = v237[0];
        *(_DWORD *)((char *)v154 + v184 - 4) = *(_DWORD *)((char *)&v236 + v184 + 4);
      }
      else if ( (_DWORD)v155 != -1 )
      {
        *(_BYTE *)v154 = v237[0];
        if ( (v184 & 2) != 0 )
          *(_WORD *)((char *)v154 + v184 - 2) = *(_WORD *)((char *)&v236 + v184 + 6);
      }
    }
    else
    {
      *v152 = v153;
      v152[2] = v237[0];
    }
    v152[1] = v155;
    v235 = v237;
    v236 = 0;
    LOBYTE(v237[0]) = 0;
  }
  else
  {
    v152 = nullptr;
    v117 = 0;
  }
  v231.m128i_i64[1] = (__int64)v152;
  v231.m128i_i8[0] = v117;
  v156 = _mm_load_si128(&v231);
  v247 = 0;
  v246[1] = v156;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v270,
    (const __m128i *)&v245);
  v270[2] = 0;
  v248 = 0;
  *(_QWORD *)&v249 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v248 = 3;
  v157 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v157, "element_size", v158, v159, v160, v161, v204, v212, v220);
  v250 = 6;
  v251 = data_elsize;
  v252 = 0;
  v249 = (unsigned __int64)v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v271,
    (const __m128i *)&v248);
  v271[2] = 0;
  v253 = 0;
  *(_QWORD *)&v254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v253 = 3;
  v162 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v162, "is_code", v163, v164, v165, v166, v205, v213, v221);
  v167 = (unsigned __int64)v162;
  v168 = flags & 0x600;
  v255 = 4;
  v257 = 0;
  v254 = v167;
  v256 = v168 == 1536;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v272,
    (const __m128i *)&v253);
  v272[2] = 0;
  v258 = 0;
  *(_QWORD *)&v259 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v258 = 3;
  v169 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v169, "is_data", v170, v171, v172, v173, v206, v214, v222);
  v260 = 4;
  v262 = 0;
  v259 = (unsigned __int64)v169;
  v261 = v168 == 1024;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v273,
    (const __m128i *)&v258);
  v273[2] = 0;
  LOBYTE(v263) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v263) = 3;
  v174 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v174, "success", v175, v176, v177, v178, v207, v215, v223);
  v265 = 4;
  v266 = (unsigned __int8)v208;
  v267 = 0;
  s2 = (unsigned __int64)v174;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v274,
    v216);
  v274[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v224,
    (__int64)v268,
    7,
    v179,
    v180,
    v181,
    v208,
    (__int64)v216,
    (int)v224,
    (int)&v239,
    (int)&v241,
    (int)v243,
    (__int64)v246,
    (int)&v249,
    v226,
    (int)&v238,
    (int)&v245,
    (char)&v232,
    v228,
    0,
    v229);
  v182 = &v275;
  do
  {
    v182 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v182 != (char *)v268 );
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
  if ( v227 && v235 != v237 )
    operator delete(v235, v237[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v232 != v234 )
    operator delete(v232, v234[0] + 1LL);
  return v225;
}

