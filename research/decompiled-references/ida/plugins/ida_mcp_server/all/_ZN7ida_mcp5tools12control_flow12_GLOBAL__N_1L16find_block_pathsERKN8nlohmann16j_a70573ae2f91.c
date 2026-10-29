__int64 __fastcall ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(int a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  const char *v3; // rbx
  size_t v4; // r12
  _BYTE *v5; // rax
  void *v6; // r13
  int *v7; // rax
  int *v8; // r15
  std::runtime_error *exception; // rbx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  size_t v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r12
  size_t v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 *func; // rax
  __int64 *v21; // r12
  __int64 v22; // xmm0_8
  __int64 v23; // r14
  _BYTE *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  void **v57; // rbp
  __int64 v58; // rdi
  __int64 v59; // r12
  __int64 v60; // rbp
  _QWORD *v61; // rbx
  unsigned __int64 v63; // r14
  char *v64; // rdi
  char *v65; // rax
  __int64 v66; // r12
  int v67; // edx
  int v68; // [rsp+0h] [rbp-288h]
  int v69; // [rsp+0h] [rbp-288h]
  int v70; // [rsp+0h] [rbp-288h]
  int v71; // [rsp+0h] [rbp-288h]
  int v72; // [rsp+0h] [rbp-288h]
  int v73; // [rsp+0h] [rbp-288h]
  int v74; // [rsp+0h] [rbp-288h]
  int v75; // [rsp+8h] [rbp-280h]
  int v76; // [rsp+8h] [rbp-280h]
  int v77; // [rsp+8h] [rbp-280h]
  int v78; // [rsp+8h] [rbp-280h]
  int v79; // [rsp+8h] [rbp-280h]
  _QWORD *v80; // [rsp+8h] [rbp-280h]
  __int64 v81; // [rsp+8h] [rbp-280h]
  __m128i v82; // [rsp+10h] [rbp-278h] BYREF
  __m128i v83; // [rsp+20h] [rbp-268h] BYREF
  __int64 v84; // [rsp+30h] [rbp-258h] BYREF
  __int64 v85; // [rsp+38h] [rbp-250h] BYREF
  __int64 v86; // [rsp+40h] [rbp-248h] BYREF
  _QWORD *v87; // [rsp+48h] [rbp-240h]
  void *v88[2]; // [rsp+50h] [rbp-238h] BYREF
  __int64 v89; // [rsp+60h] [rbp-228h]
  int v90; // [rsp+68h] [rbp-220h]
  void *v91; // [rsp+70h] [rbp-218h] BYREF
  __int64 v92; // [rsp+78h] [rbp-210h]
  char *v93; // [rsp+80h] [rbp-208h]
  __int64 v94; // [rsp+88h] [rbp-200h]
  char *v95; // [rsp+90h] [rbp-1F8h]
  int v96; // [rsp+98h] [rbp-1F0h]
  __int128 v97; // [rsp+A0h] [rbp-1E8h] BYREF
  __m128i v98; // [rsp+B0h] [rbp-1D8h]
  int v99; // [rsp+C0h] [rbp-1C8h] BYREF
  __int128 v100; // [rsp+C8h] [rbp-1C0h] BYREF
  int v101; // [rsp+D8h] [rbp-1B0h]
  __int64 v102; // [rsp+E0h] [rbp-1A8h]
  __int64 v103; // [rsp+E8h] [rbp-1A0h]
  char v104; // [rsp+F0h] [rbp-198h] BYREF
  __int128 v105; // [rsp+F8h] [rbp-190h]
  char v106; // [rsp+108h] [rbp-180h]
  __int64 v107; // [rsp+110h] [rbp-178h]
  __int64 v108; // [rsp+118h] [rbp-170h]
  char v109; // [rsp+120h] [rbp-168h] BYREF
  __int128 v110; // [rsp+128h] [rbp-160h]
  char v111; // [rsp+138h] [rbp-150h]
  __int64 v112; // [rsp+140h] [rbp-148h]
  __int64 v113; // [rsp+148h] [rbp-140h]
  char v114; // [rsp+150h] [rbp-138h] BYREF
  __m128i v115; // [rsp+158h] [rbp-130h]
  __int64 v116; // [rsp+178h] [rbp-110h]
  void *v117[2]; // [rsp+180h] [rbp-108h] BYREF
  __int64 v118; // [rsp+190h] [rbp-F8h] BYREF
  _QWORD v119[3]; // [rsp+198h] [rbp-F0h] BYREF
  _QWORD v120[3]; // [rsp+1B0h] [rbp-D8h] BYREF
  _QWORD v121[3]; // [rsp+1C8h] [rbp-C0h] BYREF
  void (__fastcall **v122)(qflow_chart_t *__hidden); // [rsp+1E0h] [rbp-A8h] BYREF
  __int64 v123; // [rsp+1E8h] [rbp-A0h]
  _BYTE *v124; // [rsp+1F0h] [rbp-98h] BYREF
  __int128 v125; // [rsp+1F8h] [rbp-90h]
  __m128i v126; // [rsp+208h] [rbp-80h]
  __int64 *v127; // [rsp+218h] [rbp-70h]
  int v128; // [rsp+220h] [rbp-68h]
  __int64 v129; // [rsp+228h] [rbp-60h]
  __int128 v130; // [rsp+230h] [rbp-58h]
  int v131; // [rsp+240h] [rbp-48h]
  unsigned __int64 v132; // [rsp+248h] [rbp-40h]

  v132 = __readfsqword(0x28u);
  v5 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v117[0] = &v118;
  v117[1] = nullptr;
  LOBYTE(v118) = 0;
  if ( *v5 != 3 )
    JUMPOUT(0xE5F24);
  std::string::_M_assign();
  v6 = v117[0];
  v7 = __errno_location();
  *v7 = 0;
  v8 = v7;
  v82.m128i_i64[0] = __isoc23_strtoull();
  if ( v6 == v91 || *(_BYTE *)v91 || *v8 == 34 && v82.m128i_i64[0] == -1 )
  {
    if ( v117[0] != &v118 )
      operator delete(v117[0], v118 + 1);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v117[0] != &v118 )
    operator delete(v117[0], v118 + 1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  LODWORD(v91) = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  HIDWORD(v84) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = "array";
        break;
      case 3:
        v3 = "string";
        break;
      case 4:
        v3 = "boolean";
        break;
      case 8:
        v3 = "binary";
        break;
      case 9:
        v3 = "discarded";
        break;
      default:
        v3 = "number";
        break;
    }
    v82.m128i_i64[0] = (__int64)&v122;
    v122 = (void (__fastcall **)(qflow_chart_t *__hidden))&v124;
    v123 = 0;
    LOBYTE(v124) = 0;
    v4 = strlen(v3);
    std::string::reserve();
    if ( (unsigned __int64)(v123 - 0x7FFFFFFFFFFFFFE7LL) > 0x17 )
    {
      std::string::_M_append();
      if ( 0x7FFFFFFFFFFFFFFELL - v123 >= v4 )
      {
        std::string::_M_append();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
          v2,
          306);
        std::string::_M_dispose();
        __cxa_throw(
          v2,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      std::__throw_length_error("basic_string::append");
    }
    std::__throw_length_error("basic_string::append");
  }
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(_QWORD *)(v10 + 16);
  if ( !v11 )
    goto LABEL_65;
  v82.m128i_i64[1] = v10 + 8;
  v12 = v10 + 8;
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v11 + 40);
      if ( !v15 )
        break;
      v13 = 9;
      if ( v15 <= 9 )
        v13 = *(_QWORD *)(v11 + 40);
      v14 = memcmp(*(const void **)(v11 + 32), "max_paths", v13);
      if ( v14 || (v14 = v15 - 9, (__int64)(v15 - 9) <= 0x7FFFFFFF) )
      {
        if ( v14 < 0 )
          break;
      }
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_22;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v11 );
LABEL_22:
  if ( v82.m128i_i64[1] == v12 )
  {
LABEL_65:
    v19 = 100;
  }
  else
  {
    v16 = *(_QWORD *)(v12 + 40);
    if ( !v16 )
      goto LABEL_58;
    v17 = 9;
    if ( v16 <= 9 )
      v17 = *(_QWORD *)(v12 + 40);
    v18 = memcmp(*(const void **)(v12 + 32), "max_paths", v17);
    if ( v18 || (v18 = v16 - 9, v19 = 100, (__int64)(v16 - 9) <= 0x7FFFFFFF) )
    {
      v19 = 100;
      if ( v18 <= 0 )
      {
LABEL_58:
        LODWORD(v91) = 0;
        nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
        v19 = 0;
      }
    }
  }
  v85 = v19;
  func = (__int64 *)get_func();
  v21 = func;
  if ( !func )
    JUMPOUT(0xE5E70);
  v22 = *func;
  v23 = func[1];
  LOBYTE(v123) = 0;
  v82.m128i_i64[0] = v22;
  v122 = off_445398;
  v124 = nullptr;
  v125 = 0;
  v24 = (_BYTE *)qvector_reserve();
  v25 = _mm_loadl_epi64(&v82);
  v124 = v24;
  *(_QWORD *)&v125 = 1;
  *v24 = 0;
  v126 = _mm_unpacklo_epi64(v25, (__m128i)(unsigned __int64)v23);
  v127 = v21;
  v128 = 0;
  v129 = 0;
  v131 = 0;
  v82.m128i_i64[0] = (__int64)&v122;
  v130 = 0;
  create_qflow_chart();
  if ( (int)v130 <= 0 || SHIDWORD(v84) >= (int)v130 || v84 < 0 )
    JUMPOUT(0xE5F5C);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v86,
    0,
    0,
    v26,
    v27,
    v28,
    v68,
    a1,
    v82.m128i_i32[0],
    v82.m128i_i32[2],
    (int)&v86,
    v83.m128i_i32[2],
    v84);
  v29 = (int)v130;
  v89 = 0;
  v91 = nullptr;
  v92 = 0;
  v93 = nullptr;
  v94 = 0;
  v95 = nullptr;
  *(_OWORD *)v88 = 0;
  if ( (_DWORD)v130 )
  {
    v63 = (unsigned __int64)((int)v130 + 63LL) >> 6;
    v64 = (char *)operator new(8 * v63);
    v95 = &v64[8 * v63];
    v91 = v64;
    LODWORD(v92) = 0;
    v65 = &v64[8 * (v29 / 64)];
    v66 = v29 % 64;
    v67 = v66 + 64;
    if ( v66 >= 0 )
      v67 = v66;
    else
      v65 -= 8;
    v93 = v65;
    LODWORD(v94) = v67;
    memset(v64, 0, 8 * v63);
  }
  v98 = 0u;
  v97 = 0;
  v30 = operator new(0x38u);
  v31 = _mm_loadl_epi64(&v83);
  *(_QWORD *)(v30 + 48) = &v97;
  *(_QWORD *)&v97 = v30;
  *(__m128i *)v30 = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)&v85);
  *(__m128i *)(v30 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v88, (__m128i)(unsigned __int64)&v91);
  *(__m128 *)(v30 + 32) = _mm_loadh_ps((const double *)v82.m128i_i64);
  v98 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)&off_443488),
          (__m128i)(unsigned __int64)std::_Function_handler<void ()(int),ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(int)#1}>::_M_invoke);
  ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(int)#1}::operator()(
    (char **)v30,
    0,
    (__int64)std::_Function_handler<void ()(int),ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(int)#1}>::_M_invoke,
    (__int64)&v84 + 4,
    v32,
    v33,
    v69,
    v75,
    v82.m128i_i32[0],
    v82.m128i_i32[2],
    v83.m128i_i32[0],
    v83.m128i_i32[2],
    v84,
    v85,
    v86,
    (int)v87,
    (int)v88[0],
    (int)v88[1],
    v89,
    v90,
    (int)v91,
    v92,
    (int)v93,
    v94,
    (int)v95,
    v96,
    v97,
    SDWORD2(v97),
    v98.m128i_i32[0],
    v98.m128i_i32[2],
    v99,
    v100,
    SDWORD2(v100),
    v101,
    v102);
  LOBYTE(v99) = 0;
  v83.m128i_i64[1] = (__int64)&v100;
  *(_QWORD *)&v100 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v99) = 3;
  v34 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v34, "from_block", v35, v36, v37, v38, v70, v76, v82.m128i_i64[0]);
  LOBYTE(v101) = 5;
  v102 = 0;
  v103 = 0;
  v100 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v117,
    (const __m128i *)&v99);
  v118 = 0;
  v104 = 0;
  *(_QWORD *)&v105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "to_block", v40, v41, v42, v43, v71, v77, v82.m128i_i64[0]);
  v106 = 5;
  v107 = SHIDWORD(v84);
  v108 = 0;
  v105 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v119,
    (const __m128i *)&v104);
  v119[2] = 0;
  v109 = 0;
  *(_QWORD *)&v110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v44 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v44, "path_count", v45, v46, v47, v48, v72, v78, v82.m128i_i64[0]);
  v110 = (unsigned __int64)v44;
  if ( (_BYTE)v86 == 1 )
  {
    v49 = v87[5];
  }
  else if ( (_BYTE)v86 == 2 )
  {
    v49 = (__int64)(v87[1] - *v87) >> 4;
  }
  else
  {
    v49 = (_BYTE)v86 != 0;
  }
  v111 = 6;
  v112 = v49;
  v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v120,
    (const __m128i *)&v109);
  v120[2] = 0;
  v114 = 0;
  v115.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v82.m128i_i64[1] = operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v82.m128i_i64[1],
    "paths",
    v50,
    v51,
    v52,
    v53,
    v73,
    v79,
    v82.m128i_i64[0]);
  v115 = _mm_loadl_epi64((const __m128i *)&v82.m128i_u64[1]);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v116 = 0;
  v82.m128i_i64[1] = (__int64)&v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v121,
    (const __m128i *)&v114);
  v121[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v80,
    (__int64)v117,
    4,
    v54,
    v55,
    v56,
    v74,
    (__int64)v80,
    v82.m128i_i32[0],
    v82.m128i_i32[2],
    v83.m128i_i32[0],
    v83.m128i_i32[2],
    v84,
    v85,
    v86,
    (int)v87,
    (int)v88[0],
    (char)v88[1],
    v89,
    v90,
    (__int64)v91);
  v57 = (void **)v82.m128i_i64[0];
  do
  {
    v57 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v57 != v117 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v98.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v98.m128i_i64[0])(&v97, &v97, 3);
  if ( v91 )
    operator delete(v91, v95 - (_BYTE *)v91);
  if ( v88[0] )
    operator delete(v88[0], v89 - (unsigned __int64)v88[0]);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = v129;
  v122 = off_445398;
  if ( v129 )
  {
    v59 = v130;
    if ( (_QWORD)v130 )
    {
      v60 = 0;
      do
      {
        while ( 1 )
        {
          v61 = (_QWORD *)(v58 + (v60 << 6));
          if ( v61[5] )
          {
            v61[6] = 0;
            qfree();
          }
          if ( !v61[2] )
            break;
          v61[3] = 0;
          ++v60;
          qfree();
          v58 = v129;
          if ( v59 == v60 )
            goto LABEL_52;
        }
        ++v60;
        v58 = v129;
      }
      while ( v59 != v60 );
    }
LABEL_52:
    *(_QWORD *)&v130 = 0;
    qfree();
  }
  if ( v124 )
  {
    *(_QWORD *)&v125 = 0;
    qfree();
  }
  return v81;
}

