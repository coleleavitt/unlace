char *__fastcall ida_mcp::tools::types::`anonymous namespace'::handle_get_array_info(char *a1, char *a2)
{
  std::runtime_error *v2; // r14
  void *v3; // r12
  void *v4; // r12
  void *v5; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v7; // rax
  __int64 v8; // rax
  char *v9; // r12
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  _QWORD *v12; // r13
  size_t v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  size_t v17; // rdx
  int v18; // eax
  _BYTE *v19; // rbx
  __int64 idati; // rax
  __int64 tinfo_size; // r14
  __int64 v22; // r13
  __int64 *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // r15
  _QWORD *v29; // rax
  _BYTE *v30; // rdi
  __int64 *v31; // rbx
  __m128i v32; // xmm0
  size_t v33; // rdx
  __int64 v34; // rax
  __int64 *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  const char *v45; // r15
  __int64 *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int128 v66; // xmm0
  _QWORD *v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  int v74; // [rsp+0h] [rbp-2C0h]
  int v75; // [rsp+0h] [rbp-2C0h]
  int v76; // [rsp+0h] [rbp-2C0h]
  int v77; // [rsp+0h] [rbp-2C0h]
  int v78; // [rsp+0h] [rbp-2C0h]
  int v79; // [rsp+0h] [rbp-2C0h]
  int v80; // [rsp+0h] [rbp-2C0h]
  int v81; // [rsp+0h] [rbp-2C0h]
  int v82; // [rsp+8h] [rbp-2B8h]
  int v83; // [rsp+8h] [rbp-2B8h]
  int v84; // [rsp+8h] [rbp-2B8h]
  int v85; // [rsp+8h] [rbp-2B8h]
  int v86; // [rsp+8h] [rbp-2B8h]
  int v87; // [rsp+8h] [rbp-2B8h]
  __int64 v88; // [rsp+8h] [rbp-2B8h]
  __int64 v89; // [rsp+10h] [rbp-2B0h]
  __int64 v90; // [rsp+10h] [rbp-2B0h]
  __int64 v91; // [rsp+10h] [rbp-2B0h]
  __int64 v92; // [rsp+10h] [rbp-2B0h]
  __int64 v93; // [rsp+10h] [rbp-2B0h]
  __int64 v94; // [rsp+10h] [rbp-2B0h]
  int v95; // [rsp+10h] [rbp-2B0h]
  __m128i v96; // [rsp+30h] [rbp-290h] BYREF
  __int128 *v97; // [rsp+40h] [rbp-280h]
  __m128i *v98; // [rsp+48h] [rbp-278h]
  __int128 *v99; // [rsp+50h] [rbp-270h]
  char *v100; // [rsp+58h] [rbp-268h]
  __int64 *v101; // [rsp+60h] [rbp-260h]
  void *src; // [rsp+68h] [rbp-258h]
  __int64 v103; // [rsp+70h] [rbp-250h] BYREF
  unsigned __int64 v104; // [rsp+78h] [rbp-248h]
  __int64 v105; // [rsp+80h] [rbp-240h] BYREF
  __int64 v106; // [rsp+88h] [rbp-238h]
  const char *v107; // [rsp+90h] [rbp-230h]
  __int128 v108; // [rsp+98h] [rbp-228h]
  void *v109; // [rsp+B0h] [rbp-210h] BYREF
  unsigned __int64 v110; // [rsp+B8h] [rbp-208h]
  _QWORD v111[2]; // [rsp+C0h] [rbp-200h] BYREF
  char v112; // [rsp+D0h] [rbp-1F0h] BYREF
  __int128 v113; // [rsp+D8h] [rbp-1E8h] BYREF
  char v114; // [rsp+E8h] [rbp-1D8h]
  __m128i v115; // [rsp+F0h] [rbp-1D0h] BYREF
  char v116; // [rsp+100h] [rbp-1C0h] BYREF
  __int128 v117; // [rsp+108h] [rbp-1B8h] BYREF
  char v118; // [rsp+118h] [rbp-1A8h]
  __int64 v119; // [rsp+120h] [rbp-1A0h]
  __int64 v120; // [rsp+128h] [rbp-198h]
  char v121; // [rsp+130h] [rbp-190h] BYREF
  __int128 v122; // [rsp+138h] [rbp-188h] BYREF
  char v123; // [rsp+148h] [rbp-178h]
  __int128 v124; // [rsp+150h] [rbp-170h] BYREF
  char v125; // [rsp+160h] [rbp-160h] BYREF
  __int128 v126; // [rsp+168h] [rbp-158h]
  char v127; // [rsp+178h] [rbp-148h]
  __int64 v128; // [rsp+180h] [rbp-140h]
  __int64 v129; // [rsp+188h] [rbp-138h]
  char v130; // [rsp+190h] [rbp-130h] BYREF
  __int128 v131; // [rsp+198h] [rbp-128h]
  char v132; // [rsp+1A8h] [rbp-118h]
  __int64 v133; // [rsp+1B0h] [rbp-110h]
  __int64 v134; // [rsp+1B8h] [rbp-108h]
  char v135; // [rsp+1C0h] [rbp-100h] BYREF
  __int128 v136; // [rsp+1C8h] [rbp-F8h]
  char v137; // [rsp+1D8h] [rbp-E8h]
  __int64 v138; // [rsp+1E0h] [rbp-E0h]
  __int64 v139; // [rsp+1E8h] [rbp-D8h]
  _QWORD v140[3]; // [rsp+1F0h] [rbp-D0h] BYREF
  _QWORD v141[3]; // [rsp+208h] [rbp-B8h] BYREF
  _QWORD v142[3]; // [rsp+220h] [rbp-A0h] BYREF
  _QWORD v143[3]; // [rsp+238h] [rbp-88h] BYREF
  _QWORD v144[3]; // [rsp+250h] [rbp-70h] BYREF
  _QWORD v145[11]; // [rsp+268h] [rbp-58h] BYREF

  v100 = a1;
  v145[4] = __readfsqword(0x28u);
  if ( *a2 != 1 )
    goto LABEL_44;
  v8 = *((_QWORD *)a2 + 1);
  v9 = a2;
  v10 = *(_QWORD **)(v8 + 16);
  if ( !v10 )
    goto LABEL_44;
  v11 = (_QWORD *)(v8 + 8);
  v12 = (_QWORD *)(v8 + 8);
  do
  {
    while ( 1 )
    {
      v15 = v10[5];
      if ( !v15 )
        break;
      v13 = 4;
      a1 = (char *)v10[4];
      a2 = "name";
      if ( v15 <= 4 )
        v13 = v10[5];
      v14 = memcmp(a1, "name", v13);
      if ( v14 || (v14 = v15 - 4, (__int64)(v15 - 4) <= 0x7FFFFFFF) )
      {
        if ( v14 < 0 )
          break;
      }
      v12 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v10 )
        goto LABEL_12;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v10 );
LABEL_12:
  if ( v11 == v12 )
    goto LABEL_44;
  v16 = v12[5];
  if ( v16 )
  {
    v17 = 4;
    a1 = (char *)v12[4];
    a2 = "name";
    if ( v16 <= 4 )
      v17 = v12[5];
    v18 = memcmp(a1, "name", v17);
    if ( !v18 )
    {
      v18 = v16 - 4;
      if ( (__int64)(v16 - 4) > 0x7FFFFFFF )
        goto LABEL_44;
    }
    if ( v18 > 0 )
      goto LABEL_44;
  }
  a2 = "name";
  a1 = v9;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
LABEL_44:
    ida_mcp::tools::types::`anonymous namespace'::handle_get_array_info(a1, a2);
  v109 = v111;
  v19 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v110 = 0;
  LOBYTE(v111[0]) = 0;
  if ( *v19 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v19 )
    {
      case 0:
        v7 = "null";
        break;
      case 1:
        v7 = "object";
        break;
      case 2:
        v7 = (char *)"array";
        break;
      case 3:
        v7 = "string";
        break;
      case 4:
        v7 = "boolean";
        break;
      case 8:
        v7 = "binary";
        break;
      case 9:
        v7 = "discarded";
        break;
      default:
        v7 = "number";
        break;
    }
    v107 = v7;
    src = v140;
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
  idati = get_idati();
  if ( !idati )
  {
    v2 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v2, "No type library available");
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v103 = 0;
  if ( !v109
    || (v107 = (const char *)idati, WORD4(v108) = 256, *(_QWORD *)&v108 = v109, !(unsigned __int8)create_tinfo()) )
  {
    v4 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)&v135, "Type '", (__int64)v109, v110);
    std::string::append();
    src = v140;
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( (get_tinfo_property() & 0xF) != 0xB )
  {
    v5 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)&v135, "'", (__int64)v109, v110);
    std::string::append();
    src = v140;
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v105 = 0;
  v101 = &v105;
  v106 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
  {
    v3 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)&v135, "Failed to get array details for '", (__int64)v109, v110);
    std::string::append();
    src = v140;
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v107 = nullptr;
  v108 = 0;
  print_tinfo();
  tinfo_size = get_tinfo_size();
  v22 = get_tinfo_size();
  v112 = 0;
  v99 = &v113;
  *(_QWORD *)&v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v23 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v23, "name", v24, v25, v26, v27, v74, v82, v89);
  v114 = 0;
  v98 = &v115;
  v115.m128i_i64[0] = 0;
  v113 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v28 = v110;
  src = v109;
  v29 = (_QWORD *)operator new(0x20u);
  v30 = v29 + 2;
  v104 = v28;
  v31 = v29;
  *v29 = v29 + 2;
  if ( v28 <= 0xF )
  {
    v32 = (__m128i)(unsigned __int64)v29;
    v33 = v28 + 1;
    if ( v28 )
    {
LABEL_28:
      v96 = v32;
      memcpy(v30, src, v33);
      v34 = v104;
      v32 = _mm_load_si128(&v96);
      goto LABEL_29;
    }
    goto LABEL_38;
  }
  v72 = std::string::_M_create();
  *v31 = v72;
  v30 = (_BYTE *)v72;
  v73 = v104;
  v32 = (__m128i)(unsigned __int64)v31;
  v31[2] = v104;
  v33 = v73 + 1;
  if ( !v73 )
  {
LABEL_38:
    *v30 = *(_BYTE *)src;
    v34 = v104;
    goto LABEL_29;
  }
  v34 = -1;
  if ( v33 )
    goto LABEL_28;
LABEL_29:
  v31[1] = v34;
  src = v140;
  v115 = v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v140,
    (const __m128i *)&v112);
  v116 = 0;
  v96.m128i_i64[0] = (__int64)&v117;
  v140[2] = 0;
  *(_QWORD *)&v117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v116 = 3;
  v35 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v35, "element_count", v36, v37, v38, v39, v75, v83, (__int64)&v112);
  v118 = 6;
  v119 = HIDWORD(v106);
  v120 = 0;
  v117 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v141,
    (const __m128i *)&v116);
  v121 = 0;
  v97 = &v122;
  v141[2] = 0;
  *(_QWORD *)&v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v40, "element_type", v41, v42, v43, v44, v76, v84, v90);
  v122 = (unsigned __int64)v40;
  if ( (_QWORD)v108 )
    v45 = v107;
  else
    v45 = _qstring<char>::c_str(void)const::nullstr;
  v123 = 0;
  *(_QWORD *)&v124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v46 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v46, v45, v47, v48, v49, v50, v77, v85, v91);
  v124 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v142,
    (const __m128i *)&v121);
  v125 = 0;
  v142[2] = 0;
  *(_QWORD *)&v126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v51 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v51, "element_size", v52, v53, v54, v55, v78, (int)&v121, v92);
  v127 = 6;
  v128 = tinfo_size;
  v129 = 0;
  v126 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v143,
    (const __m128i *)&v125);
  v143[2] = 0;
  v130 = 0;
  *(_QWORD *)&v131 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = 3;
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v56, "total_size", v57, v58, v59, v60, v79, v86, v93);
  v132 = 6;
  v133 = v22;
  v134 = 0;
  v131 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v144,
    (const __m128i *)&v130);
  v144[2] = 0;
  v135 = 0;
  *(_QWORD *)&v136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v135 = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, "base", v62, v63, v64, v65, v80, v87, v94);
  v66 = (unsigned __int64)v61;
  v67 = v145;
  v137 = 6;
  v138 = (unsigned int)v106;
  v139 = 0;
  v136 = v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v145,
    (const __m128i *)&v135);
  v145[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v100,
    (__int64)src,
    6,
    v68,
    v69,
    v70,
    v81,
    v88,
    v95,
    (int)&v103,
    (int)&v109,
    (int)&v124,
    v96.m128i_i64[0],
    v96.m128i_i32[2],
    (int)v97,
    (int)v98,
    (int)v99,
    (char)v100,
    (__int64)v101,
    (int)src,
    v103);
  src = (char *)src - 24;
  do
  {
    v67 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v67 != src );
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
  if ( v107 )
  {
    *(_QWORD *)&v108 = 0;
    qfree();
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v109 != v111 )
    operator delete(v109, v111[0] + 1LL);
  return v100;
}

