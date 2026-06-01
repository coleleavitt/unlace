__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_del_func(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        __int64 a16,
        __int64 a17,
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
        int a40,
        int a41,
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
        int a53,
        int a54,
        int a55,
        int a56,
        __int64 a57)
{
  std::runtime_error *v57; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  __int64 v59; // rsi
  __int64 v60; // rax
  int v61; // edx
  __int64 v62; // r12
  char v63; // bp
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 *v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  _QWORD *v77; // rax
  _QWORD *v78; // rdx
  _QWORD *v79; // rcx
  __int64 v80; // rsi
  __int64 *v81; // r12
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 *v86; // r12
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 *v91; // r12
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  char *v99; // rbx
  unsigned int v101; // edx
  unsigned __int64 v102; // rdi
  char *v103; // rcx
  char *v104; // r8
  unsigned int v105; // edx
  unsigned int v106; // edx
  unsigned int v107; // ecx
  __int64 v108; // r9
  int v109; // [rsp+0h] [rbp-1D8h]
  int v110; // [rsp+0h] [rbp-1D8h]
  int v111; // [rsp+0h] [rbp-1D8h]
  int v112; // [rsp+0h] [rbp-1D8h]
  _QWORD *v113; // [rsp+0h] [rbp-1D8h]
  __int64 v114; // [rsp+0h] [rbp-1D8h]
  int v115; // [rsp+8h] [rbp-1D0h]
  int v116; // [rsp+8h] [rbp-1D0h]
  int v117; // [rsp+8h] [rbp-1D0h]
  int v118; // [rsp+8h] [rbp-1D0h]
  __int64 v119; // [rsp+8h] [rbp-1D0h]
  __int64 v120; // [rsp+10h] [rbp-1C8h]
  __int64 v121; // [rsp+10h] [rbp-1C8h]
  __int64 v122; // [rsp+10h] [rbp-1C8h]
  __int64 v123; // [rsp+10h] [rbp-1C8h]
  int v124; // [rsp+10h] [rbp-1C8h]
  int v125; // [rsp+20h] [rbp-1B8h]
  unsigned __int8 v126; // [rsp+27h] [rbp-1B1h]
  int v127; // [rsp+40h] [rbp-198h]
  int v128; // [rsp+48h] [rbp-190h]
  __int64 v129; // [rsp+50h] [rbp-188h]
  int v130; // [rsp+68h] [rbp-170h]
  void *v131; // [rsp+70h] [rbp-168h] BYREF
  __int64 v132; // [rsp+78h] [rbp-160h]
  _QWORD v133[2]; // [rsp+80h] [rbp-158h] BYREF
  char v134; // [rsp+90h] [rbp-148h] BYREF
  __int128 v135; // [rsp+98h] [rbp-140h] BYREF
  char v136; // [rsp+A8h] [rbp-130h]
  __int128 v137; // [rsp+B0h] [rbp-128h] BYREF
  char v138; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v139; // [rsp+C8h] [rbp-110h] BYREF
  char v140; // [rsp+D8h] [rbp-100h]
  __int128 v141; // [rsp+E0h] [rbp-F8h]
  void *v142; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v143; // [rsp+F8h] [rbp-E0h] BYREF
  char v144; // [rsp+108h] [rbp-D0h]
  __int64 v145; // [rsp+110h] [rbp-C8h]
  __int64 v146; // [rsp+118h] [rbp-C0h]
  _QWORD v147[3]; // [rsp+120h] [rbp-B8h] BYREF
  _QWORD v148[3]; // [rsp+138h] [rbp-A0h] BYREF
  _QWORD v149[3]; // [rsp+150h] [rbp-88h] BYREF
  char v150; // [rsp+168h] [rbp-70h] BYREF
  char v151[40]; // [rsp+170h] [rbp-68h] BYREF
  unsigned __int64 v152; // [rsp+198h] [rbp-40h]

  v152 = __readfsqword(0x28u);
  v142 = (char *)&v143 + 8;
  *(_QWORD *)&v143 = 0;
  BYTE8(v143) = 0;
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
  v59 = v143;
  v60 = ida_mcp::parse_ea(v142, v143);
  v128 = v61;
  v62 = v60;
  v63 = v61;
  v127 = v60;
  if ( v142 != (char *)&v143 + 8 )
  {
    v59 = *((_QWORD *)&v143 + 1) + 1LL;
    operator delete(v142, *((_QWORD *)&v143 + 1) + 1LL);
  }
  if ( !v63 )
  {
    v57 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v57, "Invalid address");
    __cxa_throw(
      v57,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( !get_func() )
    ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_del_func(
      v62,
      v59,
      v64,
      v65,
      v66,
      v67,
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
      a57);
  get_func_name();
  v126 = del_func();
  *(_QWORD *)&v135 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "address", v69, v70, v71, v72, a1, (int)&v135, v120);
  v135 = (unsigned __int64)v68;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v131, v151, v73, v74, v75, v76, v109, v115, v121);
  v136 = 0;
  *(_QWORD *)&v137 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v136 = 3;
  v77 = (_QWORD *)operator new(0x20u);
  v78 = v131;
  v79 = v77 + 2;
  v80 = v132;
  *v77 = v77 + 2;
  if ( v78 == v133 )
  {
    v101 = v80 + 1;
    if ( (unsigned int)(v80 + 1) >= 8 )
    {
      v77[2] = v133[0];
      *(_QWORD *)((char *)v79 + v101 - 8) = *(_QWORD *)((char *)&v133[-1] + v101);
      v102 = (unsigned __int64)(v77 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v103 = (char *)v79 - v102;
      v104 = (char *)((char *)v133 - v103);
      v105 = ((_DWORD)v103 + v101) & 0xFFFFFFF8;
      if ( v105 >= 8 )
      {
        v106 = v105 & 0xFFFFFFF8;
        v107 = 0;
        do
        {
          v108 = v107;
          v107 += 8;
          *(_QWORD *)(v102 + v108) = *(_QWORD *)&v104[v108];
        }
        while ( v107 < v106 );
      }
    }
    else if ( (v101 & 4) != 0 )
    {
      *((_DWORD *)v77 + 4) = v133[0];
      *(_DWORD *)((char *)v79 + v101 - 4) = *(_DWORD *)((char *)&v132 + v101 + 4);
    }
    else if ( (_DWORD)v80 != -1 )
    {
      *((_BYTE *)v77 + 16) = v133[0];
      if ( (v101 & 2) != 0 )
        *(_WORD *)((char *)v79 + v101 - 2) = *(_WORD *)((char *)&v132 + v101 + 6);
    }
  }
  else
  {
    *v77 = v78;
    v77[2] = v133[0];
  }
  v77[1] = v80;
  v131 = v133;
  LOBYTE(v133[0]) = 0;
  v132 = 0;
  v137 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v147,
    (const __m128i *)&v134,
    2,
    1);
  v147[2] = 0;
  v138 = 0;
  *(_QWORD *)&v139 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v138 = 3;
  v81 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v81, "deleted_name", v82, v83, v84, v85, v110, v116, (__int64)&v137);
  v139 = (unsigned __int64)v81;
  v140 = 0;
  *(_QWORD *)&v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v86 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v86,
    _qstring<char>::c_str(void)const::nullstr,
    v87,
    v88,
    v89,
    v90,
    v111,
    v117,
    v122);
  v141 = (unsigned __int64)v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v148,
    (const __m128i *)&v138,
    2,
    1);
  v148[2] = 0;
  LOBYTE(v142) = 0;
  *(_QWORD *)&v143 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v142) = 3;
  v91 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v91, "success", v92, v93, v94, v95, v112, v118, v123);
  v144 = 4;
  v145 = v126;
  v146 = 0;
  v143 = (unsigned __int64)v91;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v149,
    (const __m128i *)&v142,
    2,
    1);
  v149[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v113,
    (__int64)v147,
    3,
    v96,
    v97,
    v98,
    (int)v113,
    v119,
    v124,
    (int)&v139,
    v125,
    (int)&v134,
    (__int64)&v138,
    (int)&v131,
    v127,
    v128,
    0,
    0,
    0,
    v130,
    (__int64)v131);
  v99 = &v150;
  do
  {
    v99 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v99 != (char *)v147 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v131 != v133 )
    operator delete(v131, v133[0] + 1LL);
  if ( v129 )
    qfree();
  return v114;
}

