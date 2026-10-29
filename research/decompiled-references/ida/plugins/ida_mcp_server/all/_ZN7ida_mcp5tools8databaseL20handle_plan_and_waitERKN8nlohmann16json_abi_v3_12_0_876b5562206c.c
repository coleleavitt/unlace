__int64 __fastcall ida_mcp::tools::database::handle_plan_and_wait(
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
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        char a28,
        int a29,
        int a30,
        char a31,
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
        char a73,
        int a74,
        int a75,
        int a76,
        int a77,
        int a78,
        int a79,
        int a80,
        int a81,
        int a82,
        __int64 a83)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  _BYTE *v84; // r13
  int *v85; // rax
  int *v86; // r15
  std::runtime_error *v87; // rbx
  _BYTE *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  _BYTE *v93; // r12
  __int64 v94; // r13
  unsigned __int8 v95; // r14
  __int64 v96; // r15
  __int64 *v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  _QWORD *v106; // rax
  _QWORD *v107; // rdx
  _QWORD *v108; // rcx
  __int64 v109; // rsi
  __int64 *v110; // rbp
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  _QWORD *v119; // rax
  _QWORD *v120; // rdx
  _QWORD *v121; // rcx
  __int64 v122; // rsi
  __int64 *v123; // rbp
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  __int64 *v129; // rbp
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  char *v137; // rbp
  std::runtime_error *v139; // rbx
  __int64 v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // r12
  __int64 v143; // r15
  size_t v144; // rdx
  int v145; // eax
  unsigned __int64 v146; // rbp
  unsigned int v147; // edx
  unsigned int v148; // edx
  unsigned __int64 v149; // rdi
  char *v150; // rcx
  char *v151; // r8
  unsigned int v152; // edx
  unsigned int v153; // edx
  unsigned int v154; // ecx
  __int64 v155; // r9
  unsigned __int64 v156; // rdi
  char *v157; // rcx
  char *v158; // r8
  unsigned int v159; // edx
  unsigned int v160; // edx
  unsigned int v161; // ecx
  __int64 v162; // r9
  int v163; // [rsp+0h] [rbp-2A8h]
  int v164; // [rsp+0h] [rbp-2A8h]
  int v165; // [rsp+0h] [rbp-2A8h]
  int v166; // [rsp+0h] [rbp-2A8h]
  int v167; // [rsp+0h] [rbp-2A8h]
  int v168; // [rsp+0h] [rbp-2A8h]
  int v169; // [rsp+0h] [rbp-2A8h]
  int v170; // [rsp+8h] [rbp-2A0h]
  int v171; // [rsp+8h] [rbp-2A0h]
  int v172; // [rsp+8h] [rbp-2A0h]
  int v173; // [rsp+8h] [rbp-2A0h]
  int v174; // [rsp+8h] [rbp-2A0h]
  const __m128i *v175; // [rsp+8h] [rbp-2A0h]
  __int64 v176; // [rsp+10h] [rbp-298h]
  __int64 v177; // [rsp+10h] [rbp-298h]
  __int64 v178; // [rsp+10h] [rbp-298h]
  __int64 v179; // [rsp+10h] [rbp-298h]
  __int64 v180; // [rsp+10h] [rbp-298h]
  _QWORD *v181; // [rsp+10h] [rbp-298h]
  __int64 v182; // [rsp+10h] [rbp-298h]
  __int64 v183; // [rsp+18h] [rbp-290h]
  __int64 v184; // [rsp+60h] [rbp-248h]
  _BYTE *v185; // [rsp+68h] [rbp-240h]
  void *v186; // [rsp+70h] [rbp-238h] BYREF
  __int64 v187; // [rsp+78h] [rbp-230h]
  _QWORD v188[2]; // [rsp+80h] [rbp-228h] BYREF
  void *v189; // [rsp+90h] [rbp-218h] BYREF
  __int64 v190; // [rsp+98h] [rbp-210h]
  _QWORD v191[2]; // [rsp+A0h] [rbp-208h] BYREF
  char v192; // [rsp+B0h] [rbp-1F8h] BYREF
  __int128 v193; // [rsp+B8h] [rbp-1F0h] BYREF
  char v194; // [rsp+C8h] [rbp-1E0h]
  __int128 v195; // [rsp+D0h] [rbp-1D8h] BYREF
  char v196; // [rsp+E0h] [rbp-1C8h] BYREF
  __int128 v197; // [rsp+E8h] [rbp-1C0h] BYREF
  char v198; // [rsp+F8h] [rbp-1B0h]
  __int128 v199; // [rsp+100h] [rbp-1A8h] BYREF
  char v200; // [rsp+110h] [rbp-198h] BYREF
  __int128 v201; // [rsp+118h] [rbp-190h] BYREF
  char v202; // [rsp+128h] [rbp-180h]
  __int64 v203; // [rsp+130h] [rbp-178h]
  __int64 v204; // [rsp+138h] [rbp-170h]
  char v205; // [rsp+140h] [rbp-168h] BYREF
  __int128 v206; // [rsp+148h] [rbp-160h]
  char v207; // [rsp+158h] [rbp-150h]
  __int64 v208; // [rsp+160h] [rbp-148h]
  __int64 v209; // [rsp+168h] [rbp-140h]
  void *v210; // [rsp+170h] [rbp-138h] BYREF
  __int128 v211; // [rsp+178h] [rbp-130h] BYREF
  __int64 v212; // [rsp+188h] [rbp-120h]
  __int64 v213; // [rsp+190h] [rbp-118h]
  __int64 v214; // [rsp+198h] [rbp-110h]
  _QWORD v215[3]; // [rsp+1A0h] [rbp-108h] BYREF
  _QWORD v216[3]; // [rsp+1B8h] [rbp-F0h] BYREF
  _QWORD v217[3]; // [rsp+1D0h] [rbp-D8h] BYREF
  _QWORD v218[3]; // [rsp+1E8h] [rbp-C0h] BYREF
  _QWORD v219[3]; // [rsp+200h] [rbp-A8h] BYREF
  char v220; // [rsp+218h] [rbp-90h] BYREF
  char v221[32]; // [rsp+220h] [rbp-88h] BYREF
  char v222[40]; // [rsp+240h] [rbp-68h] BYREF
  unsigned __int64 v223; // [rsp+268h] [rbp-40h]

  v223 = __readfsqword(0x28u);
  v210 = (char *)&v211 + 8;
  *(_QWORD *)&v211 = 0;
  BYTE8(v211) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
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
  v84 = v210;
  v85 = __errno_location();
  *v85 = 0;
  v86 = v85;
  v183 = __isoc23_strtoull();
  if ( v84 == v185 || *v185 || *v86 == 34 && v183 == -1 )
  {
    if ( v210 != (char *)&v211 + 8 )
      operator delete(v210, *((_QWORD *)&v211 + 1) + 1LL);
    v87 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v87, "Invalid start_address format");
    __cxa_throw(
      v87,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v210 != (char *)&v211 + 8 )
    operator delete(v210, *((_QWORD *)&v211 + 1) + 1LL);
  v88 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v210 = (char *)&v211 + 8;
  *(_QWORD *)&v211 = 0;
  BYTE8(v211) = 0;
  if ( *v88 != 3 )
    ida_mcp::tools::database::handle_plan_and_wait(
      a2,
      (__int64)"end_address",
      v89,
      v90,
      v91,
      v92,
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
      a83);
  std::string::_M_assign();
  v93 = v210;
  *v86 = 0;
  v94 = __isoc23_strtoull();
  if ( v93 == v185 || *v185 || *v86 == 34 && v94 == -1 )
  {
    if ( v210 != (char *)&v211 + 8 )
      operator delete(v210, *((_QWORD *)&v211 + 1) + 1LL);
    v139 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v139, "Invalid end_address format");
    __cxa_throw(
      v139,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v210 != (char *)&v211 + 8 )
    operator delete(v210, *((_QWORD *)&v211 + 1) + 1LL);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_19;
  v140 = *(_QWORD *)(a2 + 8);
  v141 = *(_QWORD *)(v140 + 16);
  if ( !v141 )
    goto LABEL_19;
  v142 = v140 + 8;
  v143 = v140 + 8;
  do
  {
    while ( 1 )
    {
      v146 = *(_QWORD *)(v141 + 40);
      if ( !v146 )
        break;
      v144 = 10;
      if ( v146 <= 0xA )
        v144 = *(_QWORD *)(v141 + 40);
      v145 = memcmp(*(const void **)(v141 + 32), "final_pass", v144);
      if ( v145 || (v145 = v146 - 10, (__int64)(v146 - 10) <= 0x7FFFFFFF) )
      {
        if ( v145 < 0 )
          break;
      }
      v142 = v141;
      v141 = *(_QWORD *)(v141 + 16);
      if ( !v141 )
        goto LABEL_44;
    }
    v141 = *(_QWORD *)(v141 + 24);
  }
  while ( v141 );
LABEL_44:
  if ( v143 != v142
    && std::string::compare(*(void **)(v142 + 32), *(_QWORD *)(v142 + 40), "final_pass") <= 0
    && *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    LOBYTE(v185) = 0;
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v95 = 0;
  }
  else
  {
LABEL_19:
    v95 = 1;
  }
  *(_QWORD *)&v193 = 0;
  v96 = (int)plan_and_wait();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v192 = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v97, "start_address", v98, v99, v100, v101, v163, (int)&v210, a1);
  v193 = (unsigned __int64)v97;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v186, v221, v102, v103, v104, v105, v164, v170, v176);
  v194 = 0;
  *(_QWORD *)&v195 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v194 = 3;
  v106 = (_QWORD *)operator new(0x20u);
  v107 = v186;
  v108 = v106 + 2;
  v109 = v187;
  *v106 = v106 + 2;
  if ( v107 == v188 )
  {
    v147 = v109 + 1;
    if ( (unsigned int)(v109 + 1) >= 8 )
    {
      v106[2] = v188[0];
      *(_QWORD *)((char *)v108 + v147 - 8) = *(_QWORD *)((char *)&v188[-1] + v147);
      v149 = (unsigned __int64)(v106 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v150 = (char *)v108 - v149;
      v151 = (char *)((char *)v188 - v150);
      v152 = ((_DWORD)v150 + v147) & 0xFFFFFFF8;
      if ( v152 >= 8 )
      {
        v153 = v152 & 0xFFFFFFF8;
        v154 = 0;
        do
        {
          v155 = v154;
          v154 += 8;
          *(_QWORD *)(v149 + v155) = *(_QWORD *)&v151[v155];
        }
        while ( v154 < v153 );
      }
    }
    else if ( (v147 & 4) != 0 )
    {
      *((_DWORD *)v106 + 4) = v188[0];
      *(_DWORD *)((char *)v108 + v147 - 4) = *(_DWORD *)((char *)&v187 + v147 + 4);
    }
    else if ( (_DWORD)v109 != -1 )
    {
      *((_BYTE *)v106 + 16) = v188[0];
      if ( (v147 & 2) != 0 )
        *(_WORD *)((char *)v108 + v147 - 2) = *(_WORD *)((char *)&v187 + v147 + 6);
    }
  }
  else
  {
    *v106 = v107;
    v106[2] = v188[0];
  }
  v106[1] = v109;
  v186 = v188;
  v187 = 0;
  LOBYTE(v188[0]) = 0;
  v195 = (unsigned __int64)v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v215,
    (const __m128i *)&v192);
  v215[2] = 0;
  v196 = 0;
  *(_QWORD *)&v197 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v196 = 3;
  v110 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v110, "end_address", v111, v112, v113, v114, v165, v171, v177);
  v197 = (unsigned __int64)v110;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v189, v222, v115, v116, v117, v118, v166, v172, v178);
  v198 = 0;
  *(_QWORD *)&v199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v198 = 3;
  v119 = (_QWORD *)operator new(0x20u);
  v120 = v189;
  v121 = v119 + 2;
  v122 = v190;
  *v119 = v119 + 2;
  if ( v120 == v191 )
  {
    v148 = v122 + 1;
    if ( (unsigned int)(v122 + 1) >= 8 )
    {
      v119[2] = v191[0];
      *(_QWORD *)((char *)v121 + v148 - 8) = *(_QWORD *)((char *)&v191[-1] + v148);
      v156 = (unsigned __int64)(v119 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v157 = (char *)v121 - v156;
      v158 = (char *)((char *)v191 - v157);
      v159 = ((_DWORD)v157 + v148) & 0xFFFFFFF8;
      if ( v159 >= 8 )
      {
        v160 = v159 & 0xFFFFFFF8;
        v161 = 0;
        do
        {
          v162 = v161;
          v161 += 8;
          *(_QWORD *)(v156 + v162) = *(_QWORD *)&v158[v162];
        }
        while ( v161 < v160 );
      }
    }
    else if ( (v148 & 4) != 0 )
    {
      *((_DWORD *)v119 + 4) = v191[0];
      *(_DWORD *)((char *)v121 + v148 - 4) = *(_DWORD *)((char *)&v190 + v148 + 4);
    }
    else if ( (_DWORD)v122 != -1 )
    {
      *((_BYTE *)v119 + 16) = v191[0];
      if ( (v148 & 2) != 0 )
        *(_WORD *)((char *)v121 + v148 - 2) = *(_WORD *)((char *)&v190 + v148 + 6);
    }
  }
  else
  {
    *v119 = v120;
    v119[2] = v191[0];
  }
  v119[1] = v122;
  v189 = v191;
  v190 = 0;
  LOBYTE(v191[0]) = 0;
  v199 = (unsigned __int64)v119;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v216,
    (const __m128i *)&v196);
  v216[2] = 0;
  v200 = 0;
  *(_QWORD *)&v201 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v200 = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v123, "final_pass", v124, v125, v126, v127, v167, v173, v179);
  v202 = 4;
  v203 = v95;
  v204 = 0;
  v201 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v217,
    (const __m128i *)&v200);
  v217[2] = 0;
  v205 = 0;
  *(_QWORD *)&v206 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v205 = 3;
  v128 = operator new(0x20u);
  strcpy((char *)(v128 + 16), "result");
  *(_QWORD *)v128 = v128 + 16;
  *(_QWORD *)(v128 + 8) = 6;
  v207 = 5;
  v208 = v96;
  v209 = 0;
  v206 = (unsigned __int64)v128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v218,
    (const __m128i *)&v205);
  v218[2] = 0;
  LOBYTE(v210) = 0;
  *(_QWORD *)&v211 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v210) = 3;
  v129 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v129, "completed", v130, v131, v132, v133, v168, v174, v180);
  v212 = 4;
  v213 = 1;
  v214 = 0;
  v211 = (unsigned __int64)v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v219,
    v175);
  v219[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v181,
    (__int64)v215,
    5,
    v134,
    v135,
    v136,
    v169,
    (__int64)v175,
    (int)v181,
    (int)&v193,
    (int)&v195,
    (int)&v197,
    (__int64)&v199,
    (int)&v201,
    (int)&v192,
    (int)&v196,
    (int)&v186,
    (char)&v189,
    v184,
    (int)v185,
    (__int64)v186);
  v137 = &v220;
  do
  {
    v137 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v137 != (char *)v215 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v189 != v191 )
    operator delete(v189, v191[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v186 != v188 )
    operator delete(v186, v188[0] + 1LL);
  return v182;
}

