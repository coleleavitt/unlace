_QWORD *__fastcall ida_mcp::tools::types::`anonymous namespace'::handle_guess_function_type(_QWORD *a1)
{
  void *v1; // r15
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v3; // rax
  _BYTE *v4; // rbx
  char *v5; // rbx
  int *v6; // rax
  int *v7; // r14
  __int64 v8; // rax
  std::runtime_error *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rax
  _OWORD *v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rsi
  __int64 *v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  const char *v59; // r13
  _QWORD *v60; // rax
  size_t v61; // rax
  void *v62; // rcx
  size_t v63; // r8
  __int64 v64; // rdx
  const __m128i *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned __int64 v70; // rdi
  char *v71; // rcx
  char *v72; // r8
  unsigned int v73; // edx
  unsigned int v74; // edx
  unsigned int v75; // ecx
  __int64 v76; // r9
  unsigned __int64 v77; // rdi
  char *v78; // rcx
  char *v79; // r8
  unsigned int v80; // edx
  unsigned int v81; // edx
  unsigned int v82; // ecx
  __int64 v83; // r9
  int v84; // [rsp+0h] [rbp-200h]
  int v85; // [rsp+0h] [rbp-200h]
  int v86; // [rsp+0h] [rbp-200h]
  int v87; // [rsp+0h] [rbp-200h]
  int v88; // [rsp+0h] [rbp-200h]
  int v89; // [rsp+0h] [rbp-200h]
  int v90; // [rsp+0h] [rbp-200h]
  int v91; // [rsp+0h] [rbp-200h]
  int v92; // [rsp+8h] [rbp-1F8h]
  int v93; // [rsp+8h] [rbp-1F8h]
  int v94; // [rsp+8h] [rbp-1F8h]
  int v95; // [rsp+8h] [rbp-1F8h]
  int v96; // [rsp+8h] [rbp-1F8h]
  __int64 v97; // [rsp+8h] [rbp-1F8h]
  int v98; // [rsp+8h] [rbp-1F8h]
  void *dest; // [rsp+10h] [rbp-1F0h]
  void *desta; // [rsp+10h] [rbp-1F0h]
  void *destc; // [rsp+10h] [rbp-1F0h]
  void *destd; // [rsp+10h] [rbp-1F0h]
  int deste; // [rsp+10h] [rbp-1F0h]
  void *destf; // [rsp+10h] [rbp-1F0h]
  void *destb; // [rsp+10h] [rbp-1F0h]
  void *destg; // [rsp+10h] [rbp-1F0h]
  void *desth; // [rsp+10h] [rbp-1F0h]
  __m128i v108; // [rsp+20h] [rbp-1E0h] BYREF
  __m128i v109; // [rsp+30h] [rbp-1D0h] BYREF
  _QWORD *v110; // [rsp+40h] [rbp-1C0h]
  const __m128i *v111; // [rsp+48h] [rbp-1B8h]
  __int64 v112; // [rsp+50h] [rbp-1B0h]
  size_t v113; // [rsp+58h] [rbp-1A8h]
  char *v114; // [rsp+60h] [rbp-1A0h]
  __int128 v115; // [rsp+68h] [rbp-198h]
  void *v116; // [rsp+80h] [rbp-180h] BYREF
  __int64 v117; // [rsp+88h] [rbp-178h]
  _QWORD v118[2]; // [rsp+90h] [rbp-170h] BYREF
  void *v119; // [rsp+A0h] [rbp-160h] BYREF
  __int128 v120; // [rsp+A8h] [rbp-158h] BYREF
  char v121; // [rsp+B8h] [rbp-148h]
  __int128 v122; // [rsp+C0h] [rbp-140h]
  char v123; // [rsp+D0h] [rbp-130h] BYREF
  __m128i v124; // [rsp+D8h] [rbp-128h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-118h]
  __int128 v126; // [rsp+F0h] [rbp-110h]
  void *v127; // [rsp+100h] [rbp-100h] BYREF
  __m128i v128; // [rsp+108h] [rbp-F8h] BYREF
  char v129; // [rsp+118h] [rbp-E8h]
  __m128i v130; // [rsp+120h] [rbp-E0h] BYREF
  __m128i v131; // [rsp+130h] [rbp-D0h] BYREF
  __int64 v132; // [rsp+140h] [rbp-C0h]
  __int64 v133; // [rsp+148h] [rbp-B8h] BYREF
  __int64 v134; // [rsp+158h] [rbp-A8h]
  _QWORD v135[3]; // [rsp+160h] [rbp-A0h] BYREF
  char v136; // [rsp+178h] [rbp-88h] BYREF
  char v137[32]; // [rsp+180h] [rbp-80h] BYREF
  char v138[40]; // [rsp+1A0h] [rbp-60h] BYREF
  unsigned __int64 v139; // [rsp+1C8h] [rbp-38h]

  v110 = a1;
  v139 = __readfsqword(0x28u);
  v127 = &v128.m128i_u64[1];
  v4 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v128.m128i_i64[0] = 0;
  v111 = (const __m128i *)&v127;
  v128.m128i_i8[8] = 0;
  if ( *v4 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v4 )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = (char *)"array";
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
    v114 = v3;
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
  v5 = (char *)v127;
  if ( v128.m128i_i64[0] > 2uLL && *(_BYTE *)v127 == 48 )
  {
    v109.m128i_i8[8] = *((_BYTE *)v127 + 1);
    if ( (v109.m128i_i8[8] & 0xDF) == 0x58 )
      v5 = (char *)v127 + 2;
  }
  v6 = __errno_location();
  *v6 = 0;
  v7 = v6;
  v8 = __isoc23_strtoull();
  if ( v5 == v114 || *v114 || *v7 == 34 && v8 == -1 )
  {
    if ( v127 != &v128.m128i_u64[1] )
      operator delete(v127, v128.m128i_i64[1] + 1);
    v9 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v9, "Invalid address format");
    __cxa_throw(
      v9,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v127 != &v128.m128i_u64[1] )
    operator delete(v127, v128.m128i_i64[1] + 1);
  if ( !get_func() )
  {
    v1 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v1,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v112 = 0;
  if ( (unsigned int)guess_tinfo() - 1 > 1 )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v119) = 3;
    v10 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v10,
      "function_address",
      v11,
      v12,
      v13,
      v14,
      v84,
      v92,
      (__int64)dest);
    v120 = (unsigned __int64)v10;
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v116,
      v137,
      v15,
      v16,
      v17,
      v18,
      v85,
      v93,
      (__int64)&v116);
    v121 = 0;
    *(_QWORD *)&v122 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v121 = 3;
    v19 = (_QWORD *)operator new(0x20u);
    v20 = v116;
    v21 = v19 + 2;
    v22 = v117;
    *v19 = v19 + 2;
    if ( v20 == v118 )
    {
      v68 = v22 + 1;
      if ( (unsigned int)(v22 + 1) >= 8 )
      {
        v19[2] = v118[0];
        *(_QWORD *)((char *)v21 + v68 - 8) = *(_QWORD *)((char *)&v118[-1] + v68);
        v70 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v71 = (char *)v21 - v70;
        v72 = (char *)((char *)v118 - v71);
        v73 = ((_DWORD)v71 + v68) & 0xFFFFFFF8;
        if ( v73 >= 8 )
        {
          v74 = v73 & 0xFFFFFFF8;
          v75 = 0;
          do
          {
            v76 = v75;
            v75 += 8;
            *(_QWORD *)(v70 + v76) = *(_QWORD *)&v72[v76];
          }
          while ( v75 < v74 );
        }
      }
      else if ( (v68 & 4) != 0 )
      {
        *((_DWORD *)v19 + 4) = v118[0];
        *(_DWORD *)((char *)v21 + v68 - 4) = *(_DWORD *)((char *)&v117 + v68 + 4);
      }
      else if ( (_DWORD)v22 != -1 )
      {
        *((_BYTE *)v19 + 16) = v118[0];
        if ( (v68 & 2) != 0 )
          *(_WORD *)((char *)v21 + v68 - 2) = *(_WORD *)((char *)&v117 + v68 + 6);
      }
    }
    else
    {
      *v19 = v20;
      v19[2] = v118[0];
    }
    v19[1] = v22;
    v116 = v118;
    v117 = 0;
    LOBYTE(v118[0]) = 0;
    v122 = (unsigned __int64)v19;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v131,
      (const __m128i *)&v119);
    v123 = 0;
    v109.m128i_i64[1] = (__int64)&v124;
    v132 = 0;
    v124.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v123 = 3;
    v109.m128i_i64[0] = operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v109.m128i_i64[0],
      "guessed_signature",
      v23,
      v24,
      v25,
      v26,
      v86,
      v94,
      (__int64)desta);
    v27 = _mm_loadl_epi64(&v109);
    v125 = 0;
    v124 = v27;
    v126 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v133,
      (const __m128i *)&v123);
    LOBYTE(v127) = 0;
    v109.m128i_i64[0] = (__int64)&v128;
    v134 = 0;
    v128.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v127) = 3;
    v108.m128i_i64[1] = operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v108.m128i_i64[1],
      "error",
      v28,
      v29,
      v30,
      v31,
      v87,
      v95,
      (__int64)destc);
    v32 = _mm_loadl_epi64((const __m128i *)&v108.m128i_u64[1]);
    v129 = 0;
    v108.m128i_i64[1] = (__int64)&v130;
    v130.m128i_i64[0] = 0;
    v128 = v32;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v129 = 3;
    v108.m128i_i64[0] = operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v108.m128i_i64[0],
      "Failed to guess function type",
      v33,
      v34,
      v35,
      v36,
      v88,
      v96,
      (__int64)destd);
    v130 = _mm_loadl_epi64(&v108);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v135,
      v111);
    v135[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v110,
      (__int64)&v131,
      3,
      v37,
      v38,
      v39,
      v89,
      v97,
      deste,
      (int)&v119,
      v108.m128i_i32[0],
      v108.m128i_i32[2],
      v109.m128i_i64[0],
      v109.m128i_i32[2],
      (int)v110,
      (int)v111,
      v112,
      v113,
      (__int64)v114,
      v115,
      *((__int64 *)&v115 + 1));
    v111 = (const __m128i *)&v136;
    do
    {
      v111 = (const __m128i *)((char *)v111 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v111 != &v131 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v116 != v118 )
      operator delete(v116, v118[0] + 1LL);
    goto LABEL_21;
  }
  v114 = nullptr;
  v115 = 0;
  print_tinfo();
  v124.m128i_i64[0] = 0;
  v109.m128i_i64[1] = (__int64)&v124;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v41 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v41, "function_address", v42, v43, v44, v45, v84, v92, (__int64)dest);
  v124 = (__m128i)(unsigned __int64)v41;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v119, v138, v46, v47, v48, v49, v90, v98, (__int64)destf);
  LOBYTE(v125) = 0;
  *(_QWORD *)&v126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v125) = 3;
  v50 = (_QWORD *)operator new(0x20u);
  v51 = v119;
  v52 = v50 + 2;
  v53 = v120;
  *v50 = v50 + 2;
  if ( v51 == (__int128 *)((char *)&v120 + 8) )
  {
    v69 = v53 + 1;
    if ( (unsigned int)(v53 + 1) >= 8 )
    {
      v50[2] = *((_QWORD *)&v120 + 1);
      *(_QWORD *)((char *)v52 + v69 - 8) = *(_QWORD *)((char *)&v120 + v69);
      v77 = (unsigned __int64)(v50 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v78 = (char *)v52 - v77;
      v79 = (char *)((char *)&v120 + 8 - v78);
      v80 = ((_DWORD)v78 + v69) & 0xFFFFFFF8;
      if ( v80 >= 8 )
      {
        v81 = v80 & 0xFFFFFFF8;
        v82 = 0;
        do
        {
          v83 = v82;
          v82 += 8;
          *(_QWORD *)(v77 + v83) = *(_QWORD *)&v79[v83];
        }
        while ( v82 < v81 );
      }
    }
    else if ( (v69 & 4) != 0 )
    {
      *((_DWORD *)v50 + 4) = DWORD2(v120);
      *(_DWORD *)((char *)v52 + v69 - 4) = *(_DWORD *)((char *)&v120 + v69 + 4);
    }
    else if ( (_DWORD)v53 != -1 )
    {
      *((_BYTE *)v50 + 16) = BYTE8(v120);
      if ( (v69 & 2) != 0 )
        *(_WORD *)((char *)v52 + v69 - 2) = *(_WORD *)((char *)&v120 + v69 + 6);
    }
  }
  else
  {
    *v50 = v51;
    v50[2] = *((_QWORD *)&v120 + 1);
  }
  v50[1] = v53;
  v119 = (char *)&v120 + 8;
  *(_QWORD *)&v120 = 0;
  BYTE8(v120) = 0;
  v126 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v131,
    (const __m128i *)&v123);
  LOBYTE(v127) = 0;
  v109.m128i_i64[0] = (__int64)&v128;
  v132 = 0;
  v128.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v127) = 3;
  v54 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v54,
    "guessed_signature",
    v55,
    v56,
    v57,
    v58,
    v91,
    (int)&v123,
    (__int64)destb);
  v128 = (__m128i)(unsigned __int64)v54;
  if ( (_QWORD)v115 )
    v59 = v114;
  else
    v59 = _qstring<char>::c_str(void)const::nullstr;
  v129 = 0;
  v108.m128i_i64[1] = (__int64)&v130;
  v130.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v60 = (_QWORD *)operator new(0x20u);
  v108.m128i_i64[0] = (__int64)v60;
  *v60 = v60 + 2;
  if ( !v59 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  destg = v60 + 2;
  v61 = strlen(v59);
  v62 = destg;
  v113 = v61;
  v63 = v61;
  if ( v61 > 0xF )
  {
    desth = (void *)v61;
    v66 = std::string::_M_create();
    v67 = v108.m128i_i64[0];
    v62 = (void *)v66;
    v63 = (size_t)desth;
    *(_QWORD *)v108.m128i_i64[0] = v66;
    *(_QWORD *)(v67 + 16) = v113;
    goto LABEL_41;
  }
  if ( v61 != 1 )
  {
    if ( !v61 )
      goto LABEL_30;
LABEL_41:
    memcpy(v62, v59, v63);
    v61 = v113;
    v62 = *(void **)v108.m128i_i64[0];
    goto LABEL_30;
  }
  *(_BYTE *)(v108.m128i_i64[0] + 16) = *v59;
LABEL_30:
  v64 = v108.m128i_i64[0];
  v65 = v111;
  *(_QWORD *)(v108.m128i_i64[0] + 8) = v61;
  *((_BYTE *)v62 + v61) = 0;
  v130 = (__m128i)(unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v133,
    v65);
  v134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v110,
    &v131);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v119 != (char *)&v120 + 8 )
    operator delete(v119, *((_QWORD *)&v120 + 1) + 1LL);
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree();
  }
LABEL_21:
  clear_tinfo_t();
  return v110;
}

