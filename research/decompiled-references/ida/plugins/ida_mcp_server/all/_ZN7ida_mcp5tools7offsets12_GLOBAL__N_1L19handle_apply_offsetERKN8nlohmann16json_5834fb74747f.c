__int64 __fastcall ida_mcp::tools::offsets::`anonymous namespace'::handle_apply_offset(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18,
        int a19,
        __int64 a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        char a30,
        int a31,
        int a32,
        char a33,
        int a34,
        int a35,
        char a36,
        int a37,
        int a38,
        char a39,
        char a40,
        int a41,
        char a42,
        int a43,
        int a44,
        char a45,
        int a46,
        int a47,
        char a48,
        int a49,
        int a50,
        char a51,
        char a52,
        int a53,
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
        __int64 a75)
{
  std::runtime_error *v75; // rbx
  std::runtime_error *exception; // rbx
  void *v77; // rbp
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  int v83; // edx
  char v84; // bl
  _BYTE *v85; // r14
  __int64 v86; // rax
  char v87; // dl
  char v88; // r12
  __int64 *v89; // rbp
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // rax
  _QWORD *v99; // rdx
  _QWORD *v100; // rcx
  __int64 v101; // rsi
  __int64 *v102; // rbp
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 *v107; // rbp
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  _QWORD *v116; // rax
  _QWORD *v117; // rdx
  _QWORD *v118; // rcx
  __int64 v119; // rsi
  __int64 *v120; // rbp
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  _QWORD *v128; // rbp
  unsigned int v130; // edx
  unsigned int v131; // edx
  unsigned __int64 v132; // rdi
  char *v133; // rcx
  char *v134; // r8
  unsigned int v135; // edx
  unsigned int v136; // edx
  unsigned int v137; // ecx
  __int64 v138; // r9
  unsigned __int64 v139; // rdi
  char *v140; // rcx
  char *v141; // r8
  unsigned int v142; // edx
  unsigned int v143; // edx
  unsigned int v144; // ecx
  __int64 v145; // r9
  int v146; // [rsp+268h] [rbp-268h]
  int v147; // [rsp+268h] [rbp-268h]
  int v148; // [rsp+268h] [rbp-268h]
  int v149; // [rsp+268h] [rbp-268h]
  int v150; // [rsp+268h] [rbp-268h]
  int v151; // [rsp+268h] [rbp-268h]
  _QWORD *v152; // [rsp+268h] [rbp-268h]
  int v153; // [rsp+270h] [rbp-260h]
  int v154; // [rsp+270h] [rbp-260h]
  int v155; // [rsp+270h] [rbp-260h]
  int v156; // [rsp+270h] [rbp-260h]
  int v157; // [rsp+270h] [rbp-260h]
  _QWORD *v158; // [rsp+270h] [rbp-260h]
  __int64 v159; // [rsp+270h] [rbp-260h]
  __int64 v160; // [rsp+278h] [rbp-258h]
  __int64 v161; // [rsp+278h] [rbp-258h]
  __int64 v162; // [rsp+278h] [rbp-258h]
  __int64 v163; // [rsp+278h] [rbp-258h]
  __int64 v164; // [rsp+278h] [rbp-258h]
  int v165; // [rsp+278h] [rbp-258h]
  int v166; // [rsp+2A0h] [rbp-230h]
  unsigned __int8 v167; // [rsp+2A7h] [rbp-229h]
  __int64 v168; // [rsp+2C8h] [rbp-208h]
  int v169; // [rsp+2D0h] [rbp-200h]
  __int64 v170; // [rsp+2D8h] [rbp-1F8h]
  void *v171; // [rsp+2E8h] [rbp-1E8h] BYREF
  __int64 v172; // [rsp+2F0h] [rbp-1E0h]
  _QWORD v173[2]; // [rsp+2F8h] [rbp-1D8h] BYREF
  void *v174; // [rsp+308h] [rbp-1C8h] BYREF
  __int64 v175; // [rsp+310h] [rbp-1C0h]
  _QWORD v176[2]; // [rsp+318h] [rbp-1B8h] BYREF
  char v177; // [rsp+328h] [rbp-1A8h] BYREF
  __int128 v178; // [rsp+330h] [rbp-1A0h] BYREF
  char v179; // [rsp+340h] [rbp-190h]
  __int128 v180; // [rsp+348h] [rbp-188h] BYREF
  char v181; // [rsp+358h] [rbp-178h] BYREF
  __int128 v182; // [rsp+360h] [rbp-170h] BYREF
  char v183; // [rsp+370h] [rbp-160h]
  __int64 v184; // [rsp+378h] [rbp-158h]
  __int64 v185; // [rsp+380h] [rbp-150h]
  char v186; // [rsp+388h] [rbp-148h] BYREF
  __int128 v187; // [rsp+390h] [rbp-140h] BYREF
  char v188; // [rsp+3A0h] [rbp-130h]
  __int128 v189; // [rsp+3A8h] [rbp-128h] BYREF
  void *v190; // [rsp+3B8h] [rbp-118h] BYREF
  __int128 v191; // [rsp+3C0h] [rbp-110h] BYREF
  char v192; // [rsp+3D0h] [rbp-100h]
  __int64 v193; // [rsp+3D8h] [rbp-F8h]
  __int64 v194; // [rsp+3E0h] [rbp-F0h]
  _QWORD v195[3]; // [rsp+3E8h] [rbp-E8h] BYREF
  _QWORD v196[3]; // [rsp+400h] [rbp-D0h] BYREF
  _QWORD v197[3]; // [rsp+418h] [rbp-B8h] BYREF
  _QWORD v198[3]; // [rsp+430h] [rbp-A0h] BYREF
  char v199[32]; // [rsp+448h] [rbp-88h] BYREF
  char v200[40]; // [rsp+468h] [rbp-68h] BYREF
  unsigned __int64 v201; // [rsp+490h] [rbp-40h]

  v201 = __readfsqword(0x28u);
  v190 = (char *)&v191 + 8;
  *(_QWORD *)&v191 = 0;
  BYTE8(v191) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    ida_mcp::tools::offsets::`anonymous namespace'::handle_apply_offset(
      a2,
      (__int64)"address",
      v78,
      v79,
      v80,
      v81,
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
      a75);
  std::string::_M_assign();
  v82 = ida_mcp::parse_ea(v190, v191);
  v169 = v83;
  v84 = v83;
  v168 = v82;
  if ( v190 != (char *)&v191 + 8 )
    operator delete(v190, *((_QWORD *)&v191 + 1) + 1LL);
  if ( !v84 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  v190 = (char *)&v191 + 8;
  *(_QWORD *)&v191 = 0;
  v85 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  BYTE8(v191) = 0;
  if ( *v85 != 3 )
  {
    v77 = __cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v77,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v77,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v86 = ida_mcp::parse_ea(v190, v191);
  v88 = v87;
  v170 = v86;
  if ( v190 != (char *)&v191 + 8 )
    operator delete(v190, *((_QWORD *)&v191 + 1) + 1LL);
  if ( !v88 )
  {
    v75 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v75, "Invalid target address format");
    __cxa_throw(
      v75,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  get_default_reftype();
  v167 = op_offset();
  *(_QWORD *)&v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v89 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v89, "address", v90, v91, v92, v93, v146, a1, (__int64)&v178);
  v178 = (unsigned __int64)v89;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v171, v199, v94, v95, v96, v97, (int)v199, v153, v160);
  v179 = 0;
  *(_QWORD *)&v180 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v98 = (_QWORD *)operator new(0x20u);
  v99 = v171;
  v100 = v98 + 2;
  v101 = v172;
  *v98 = v98 + 2;
  if ( v99 == v173 )
  {
    v130 = v101 + 1;
    if ( (unsigned int)(v101 + 1) >= 8 )
    {
      v98[2] = v173[0];
      *(_QWORD *)((char *)v100 + v130 - 8) = *(_QWORD *)((char *)&v173[-1] + v130);
      v132 = (unsigned __int64)(v98 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v133 = (char *)v100 - v132;
      v134 = (char *)((char *)v173 - v133);
      v135 = ((_DWORD)v133 + v130) & 0xFFFFFFF8;
      if ( v135 >= 8 )
      {
        v136 = v135 & 0xFFFFFFF8;
        v137 = 0;
        do
        {
          v138 = v137;
          v137 += 8;
          *(_QWORD *)(v132 + v138) = *(_QWORD *)&v134[v138];
        }
        while ( v137 < v136 );
      }
    }
    else if ( (v130 & 4) != 0 )
    {
      *((_DWORD *)v98 + 4) = v173[0];
      *(_DWORD *)((char *)v100 + v130 - 4) = *(_DWORD *)((char *)&v172 + v130 + 4);
    }
    else if ( (_DWORD)v101 != -1 )
    {
      *((_BYTE *)v98 + 16) = v173[0];
      if ( (v130 & 2) != 0 )
        *(_WORD *)((char *)v100 + v130 - 2) = *(_WORD *)((char *)&v172 + v130 + 6);
    }
  }
  else
  {
    *v98 = v99;
    v98[2] = v173[0];
  }
  v98[1] = v101;
  v171 = v173;
  v172 = 0;
  LOBYTE(v173[0]) = 0;
  v180 = (unsigned __int64)v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v195,
    (const __m128i *)&v177);
  v195[2] = 0;
  v181 = 0;
  *(_QWORD *)&v182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v181 = 3;
  v102 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v102, "operand", v103, v104, v105, v106, v147, v154, v161);
  v183 = 5;
  v184 = 0;
  v185 = 0;
  v182 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v196,
    (const __m128i *)&v181);
  v196[2] = 0;
  v186 = 0;
  *(_QWORD *)&v187 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v186 = 3;
  v107 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v107, "target", v108, v109, v110, v111, v148, v155, v162);
  v187 = (unsigned __int64)v107;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v174, v200, v112, v113, v114, v115, v149, v156, v163);
  v188 = 0;
  *(_QWORD *)&v189 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v188 = 3;
  v116 = (_QWORD *)operator new(0x20u);
  v117 = v174;
  v118 = v116 + 2;
  v119 = v175;
  *v116 = v116 + 2;
  if ( v117 == v176 )
  {
    v131 = v119 + 1;
    if ( (unsigned int)(v119 + 1) >= 8 )
    {
      v116[2] = v176[0];
      *(_QWORD *)((char *)v118 + v131 - 8) = *(_QWORD *)((char *)&v176[-1] + v131);
      v139 = (unsigned __int64)(v116 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v140 = (char *)v118 - v139;
      v141 = (char *)((char *)v176 - v140);
      v142 = ((_DWORD)v140 + v131) & 0xFFFFFFF8;
      if ( v142 >= 8 )
      {
        v143 = v142 & 0xFFFFFFF8;
        v144 = 0;
        do
        {
          v145 = v144;
          v144 += 8;
          *(_QWORD *)(v139 + v145) = *(_QWORD *)&v141[v145];
        }
        while ( v144 < v143 );
      }
    }
    else if ( (v131 & 4) != 0 )
    {
      *((_DWORD *)v116 + 4) = v176[0];
      *(_DWORD *)((char *)v118 + v131 - 4) = *(_DWORD *)((char *)&v175 + v131 + 4);
    }
    else if ( (_DWORD)v119 != -1 )
    {
      *((_BYTE *)v116 + 16) = v176[0];
      if ( (v131 & 2) != 0 )
        *(_WORD *)((char *)v118 + v131 - 2) = *(_WORD *)((char *)&v175 + v131 + 6);
    }
  }
  else
  {
    *v116 = v117;
    v116[2] = v176[0];
  }
  v116[1] = v119;
  v174 = v176;
  v175 = 0;
  LOBYTE(v176[0]) = 0;
  v189 = (unsigned __int64)v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v197,
    (const __m128i *)&v186);
  v197[2] = 0;
  LOBYTE(v190) = 0;
  *(_QWORD *)&v191 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v190) = 3;
  v120 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v120, "success", v121, v122, v123, v124, v150, v157, v164);
  v192 = 4;
  v193 = v167;
  v194 = 0;
  v191 = (unsigned __int64)v120;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v198,
    (const __m128i *)&v190);
  v198[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v158,
    (__int64)v195,
    4,
    v125,
    v126,
    v127,
    v151,
    (__int64)v158,
    v165,
    (int)&v180,
    (int)&v182,
    (int)&v187,
    (__int64)&v189,
    v166,
    (int)&v177,
    (int)&v186,
    (int)&v171,
    (char)&v174,
    v168,
    v169,
    v170);
  v128 = v152;
  do
  {
    v128 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v128 != v195 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v174 != v176 )
    operator delete(v174, v176[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v171 != v173 )
    operator delete(v171, v173[0] + 1LL);
  return v159;
}

