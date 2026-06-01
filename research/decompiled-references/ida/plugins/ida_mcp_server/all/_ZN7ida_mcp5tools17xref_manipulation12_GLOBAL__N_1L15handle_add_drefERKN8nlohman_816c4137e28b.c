__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_dref(
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
        int a20,
        int a21,
        __int64 a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        char a32,
        int a33,
        int a34,
        char a35,
        int a36,
        int a37,
        char a38,
        int a39,
        int a40,
        char a41,
        int a42,
        int a43,
        char a44,
        int a45,
        int a46,
        char a47,
        char a48,
        int a49,
        char a50,
        int a51,
        int a52,
        char a53,
        char a54,
        int a55,
        char a56,
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
        __int64 a77)
{
  std::runtime_error *v77; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  char v84; // dl
  char v85; // r14
  _BYTE *v86; // r13
  char v87; // dl
  char v88; // r15
  __int64 v89; // r15
  __int64 *v90; // rbp
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v99; // rax
  _QWORD *v100; // rdx
  _QWORD *v101; // rcx
  __int64 v102; // rsi
  __int64 *v103; // rbp
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  _QWORD *v112; // rax
  _QWORD *v113; // rdx
  _QWORD *v114; // rcx
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 *v117; // rbp
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  char *v125; // rbp
  unsigned int v127; // edx
  unsigned int v128; // edx
  unsigned __int64 v129; // rdi
  char *v130; // rcx
  char *v131; // r8
  unsigned int v132; // edx
  unsigned int v133; // edx
  unsigned int v134; // ecx
  __int64 v135; // r9
  unsigned __int64 v136; // rdi
  char *v137; // rcx
  char *v138; // r8
  unsigned int v139; // edx
  unsigned int v140; // edx
  unsigned int v141; // ecx
  __int64 v142; // r9
  int v143; // [rsp+0h] [rbp-278h]
  int v144; // [rsp+0h] [rbp-278h]
  int v145; // [rsp+0h] [rbp-278h]
  int v146; // [rsp+0h] [rbp-278h]
  const __m128i *v147; // [rsp+0h] [rbp-278h]
  int v148; // [rsp+8h] [rbp-270h]
  int v149; // [rsp+8h] [rbp-270h]
  int v150; // [rsp+8h] [rbp-270h]
  int v151; // [rsp+8h] [rbp-270h]
  _QWORD *v152; // [rsp+8h] [rbp-270h]
  __int64 v153; // [rsp+8h] [rbp-270h]
  __int64 v154; // [rsp+10h] [rbp-268h]
  __int64 v155; // [rsp+10h] [rbp-268h]
  __int64 v156; // [rsp+10h] [rbp-268h]
  __int64 v157; // [rsp+10h] [rbp-268h]
  int v158; // [rsp+10h] [rbp-268h]
  int v159; // [rsp+38h] [rbp-240h]
  unsigned __int8 v160; // [rsp+3Fh] [rbp-239h]
  __int64 v161; // [rsp+60h] [rbp-218h]
  int v162; // [rsp+68h] [rbp-210h]
  __int64 v163; // [rsp+70h] [rbp-208h]
  void *v164; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v165; // [rsp+98h] [rbp-1E0h]
  _QWORD v166[2]; // [rsp+A0h] [rbp-1D8h] BYREF
  void *v167; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v168; // [rsp+B8h] [rbp-1C0h]
  _QWORD v169[2]; // [rsp+C0h] [rbp-1B8h] BYREF
  char v170; // [rsp+D0h] [rbp-1A8h] BYREF
  __int128 v171; // [rsp+D8h] [rbp-1A0h] BYREF
  char v172; // [rsp+E8h] [rbp-190h]
  __int128 v173; // [rsp+F0h] [rbp-188h] BYREF
  char v174; // [rsp+100h] [rbp-178h] BYREF
  __int128 v175; // [rsp+108h] [rbp-170h] BYREF
  char v176; // [rsp+118h] [rbp-160h]
  __int128 v177; // [rsp+120h] [rbp-158h] BYREF
  char v178; // [rsp+130h] [rbp-148h] BYREF
  __int128 v179; // [rsp+138h] [rbp-140h] BYREF
  char v180; // [rsp+148h] [rbp-130h]
  __int64 v181; // [rsp+150h] [rbp-128h]
  __int64 v182; // [rsp+158h] [rbp-120h]
  void *v183; // [rsp+160h] [rbp-118h] BYREF
  __int128 v184; // [rsp+168h] [rbp-110h] BYREF
  char v185; // [rsp+178h] [rbp-100h]
  __int64 v186; // [rsp+180h] [rbp-F8h]
  __int64 v187; // [rsp+188h] [rbp-F0h]
  _QWORD v188[3]; // [rsp+190h] [rbp-E8h] BYREF
  _QWORD v189[3]; // [rsp+1A8h] [rbp-D0h] BYREF
  _QWORD v190[3]; // [rsp+1C0h] [rbp-B8h] BYREF
  _QWORD v191[3]; // [rsp+1D8h] [rbp-A0h] BYREF
  char v192[32]; // [rsp+1F0h] [rbp-88h] BYREF
  char v193[40]; // [rsp+210h] [rbp-68h] BYREF
  unsigned __int64 v194; // [rsp+238h] [rbp-40h]

  v194 = __readfsqword(0x28u);
  v183 = (char *)&v184 + 8;
  *(_QWORD *)&v184 = 0;
  BYTE8(v184) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_dref(
      a2,
      (__int64)"from",
      v79,
      v80,
      v81,
      v82,
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
      a77);
  std::string::_M_assign();
  v83 = ida_mcp::parse_ea(v183, v184);
  v85 = v84;
  v163 = v83;
  if ( v183 != (char *)&v184 + 8 )
    operator delete(v183, *((_QWORD *)&v184 + 1) + 1LL);
  v183 = (char *)&v184 + 8;
  *(_QWORD *)&v184 = 0;
  v86 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  BYTE8(v184) = 0;
  if ( *v86 != 3 )
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
  ida_mcp::parse_ea(v183, v184);
  v88 = v87;
  if ( v183 != (char *)&v184 + 8 )
    operator delete(v183, *((_QWORD *)&v184 + 1) + 1LL);
  if ( !v85 || !v88 )
  {
    v77 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v77, "Invalid address");
    __cxa_throw(
      v77,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v89 = (int)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[5],int,0>();
  v160 = add_dref();
  *(_QWORD *)&v171 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v170 = 3;
  v90 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v90, "from", v91, v92, v93, v94, (int)&v183, a1, (__int64)&v171);
  v171 = (unsigned __int64)v90;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v164, v192, v95, v96, v97, v98, v143, v148, v154);
  v172 = 0;
  *(_QWORD *)&v173 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v172 = 3;
  v99 = (_QWORD *)operator new(0x20u);
  v100 = v164;
  v101 = v99 + 2;
  v102 = v165;
  *v99 = v99 + 2;
  if ( v100 == v166 )
  {
    v127 = v102 + 1;
    if ( (unsigned int)(v102 + 1) >= 8 )
    {
      v99[2] = v166[0];
      *(_QWORD *)((char *)v101 + v127 - 8) = *(_QWORD *)((char *)&v166[-1] + v127);
      v129 = (unsigned __int64)(v99 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v130 = (char *)v101 - v129;
      v131 = (char *)((char *)v166 - v130);
      v132 = ((_DWORD)v130 + v127) & 0xFFFFFFF8;
      if ( v132 >= 8 )
      {
        v133 = v132 & 0xFFFFFFF8;
        v134 = 0;
        do
        {
          v135 = v134;
          v134 += 8;
          *(_QWORD *)(v129 + v135) = *(_QWORD *)&v131[v135];
        }
        while ( v134 < v133 );
      }
    }
    else if ( (v127 & 4) != 0 )
    {
      *((_DWORD *)v99 + 4) = v166[0];
      *(_DWORD *)((char *)v101 + v127 - 4) = *(_DWORD *)((char *)&v165 + v127 + 4);
    }
    else if ( (_DWORD)v102 != -1 )
    {
      *((_BYTE *)v99 + 16) = v166[0];
      if ( (v127 & 2) != 0 )
        *(_WORD *)((char *)v101 + v127 - 2) = *(_WORD *)((char *)&v165 + v127 + 6);
    }
  }
  else
  {
    *v99 = v100;
    v99[2] = v166[0];
  }
  v99[1] = v102;
  v164 = v166;
  LOBYTE(v166[0]) = 0;
  v165 = 0;
  v173 = (unsigned __int64)v99;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v188,
    (const __m128i *)&v170,
    2,
    1);
  v188[2] = 0;
  v174 = 0;
  *(_QWORD *)&v175 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v174 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "to", v104, v105, v106, v107, v144, v149, v155);
  v175 = (unsigned __int64)v103;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v167, v193, v108, v109, v110, v111, v145, v150, v156);
  v176 = 0;
  *(_QWORD *)&v177 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v176 = 3;
  v112 = (_QWORD *)operator new(0x20u);
  v113 = v167;
  v114 = v112 + 2;
  v115 = v168;
  *v112 = v112 + 2;
  if ( v113 == v169 )
  {
    v128 = v115 + 1;
    if ( (unsigned int)(v115 + 1) >= 8 )
    {
      v112[2] = v169[0];
      *(_QWORD *)((char *)v114 + v128 - 8) = *(_QWORD *)((char *)&v169[-1] + v128);
      v136 = (unsigned __int64)(v112 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v137 = (char *)v114 - v136;
      v138 = (char *)((char *)v169 - v137);
      v139 = ((_DWORD)v137 + v128) & 0xFFFFFFF8;
      if ( v139 >= 8 )
      {
        v140 = v139 & 0xFFFFFFF8;
        v141 = 0;
        do
        {
          v142 = v141;
          v141 += 8;
          *(_QWORD *)(v136 + v142) = *(_QWORD *)&v138[v142];
        }
        while ( v141 < v140 );
      }
    }
    else if ( (v128 & 4) != 0 )
    {
      *((_DWORD *)v112 + 4) = v169[0];
      *(_DWORD *)((char *)v114 + v128 - 4) = *(_DWORD *)((char *)&v168 + v128 + 4);
    }
    else if ( (_DWORD)v115 != -1 )
    {
      *((_BYTE *)v112 + 16) = v169[0];
      if ( (v128 & 2) != 0 )
        *(_WORD *)((char *)v114 + v128 - 2) = *(_WORD *)((char *)&v168 + v128 + 6);
    }
  }
  else
  {
    *v112 = v113;
    v112[2] = v169[0];
  }
  v112[1] = v115;
  v167 = v169;
  v168 = 0;
  LOBYTE(v169[0]) = 0;
  v177 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v189,
    (const __m128i *)&v174,
    2,
    1);
  v189[2] = 0;
  v178 = 0;
  *(_QWORD *)&v179 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v178 = 3;
  v116 = operator new(0x20u);
  strcpy((char *)(v116 + 16), "type");
  *(_QWORD *)v116 = v116 + 16;
  *(_QWORD *)(v116 + 8) = 4;
  v180 = 5;
  v181 = v89;
  v182 = 0;
  v179 = (unsigned __int64)v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v190,
    (const __m128i *)&v178,
    2,
    1);
  v190[2] = 0;
  LOBYTE(v183) = 0;
  *(_QWORD *)&v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v183) = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "success", v118, v119, v120, v121, v146, v151, v157);
  v185 = 4;
  v186 = v160;
  v187 = 0;
  v184 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v191,
    v147,
    2,
    1);
  v191[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v152,
    (__int64)v188,
    4,
    v122,
    v123,
    v124,
    (int)v147,
    (__int64)v152,
    v158,
    (int)&v173,
    (int)&v175,
    (int)&v177,
    (__int64)&v179,
    v159,
    (int)&v170,
    (int)&v174,
    (int)&v164,
    (char)&v167,
    v161,
    v162,
    v163);
  v125 = v192;
  do
  {
    v125 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v125 != (char *)v188 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v167 != v169 )
    operator delete(v167, v169[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v164 != v166 )
    operator delete(v164, v166[0] + 1LL);
  return v153;
}

