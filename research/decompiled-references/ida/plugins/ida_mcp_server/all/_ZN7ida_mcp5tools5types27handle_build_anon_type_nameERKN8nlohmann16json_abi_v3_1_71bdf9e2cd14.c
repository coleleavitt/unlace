__int64 __fastcall ida_mcp::tools::types::handle_build_anon_type_name(_QWORD *a1)
{
  void *v1; // r14
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v3; // rax
  __int8 *v4; // rbx
  __int8 v5; // r13
  char *v6; // r12
  int *v7; // rax
  int *v8; // r15
  __int64 v9; // rbx
  std::runtime_error *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  char *v30; // r14
  const char *v31; // rsi
  __int64 *v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i v41; // xmm0
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  char *v46; // r14
  _QWORD *v47; // rax
  size_t v48; // rax
  void *v49; // rcx
  size_t v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // edx
  unsigned __int64 v54; // rdi
  char *v55; // rcx
  char *v56; // r8
  unsigned int v57; // edx
  unsigned int v58; // edx
  unsigned int v59; // ecx
  __int64 v60; // r9
  int v61; // [rsp+0h] [rbp-270h]
  int v62; // [rsp+0h] [rbp-270h]
  int v63; // [rsp+0h] [rbp-270h]
  int v64; // [rsp+0h] [rbp-270h]
  int v65; // [rsp+0h] [rbp-270h]
  int v66; // [rsp+0h] [rbp-270h]
  int v67; // [rsp+8h] [rbp-268h]
  int v68; // [rsp+8h] [rbp-268h]
  int v69; // [rsp+8h] [rbp-268h]
  int v70; // [rsp+8h] [rbp-268h]
  __int64 v71; // [rsp+8h] [rbp-268h]
  __int64 v72; // [rsp+10h] [rbp-260h]
  __int64 v73; // [rsp+10h] [rbp-260h]
  __int64 v74; // [rsp+10h] [rbp-260h]
  __int64 v75; // [rsp+10h] [rbp-260h]
  int v76; // [rsp+10h] [rbp-260h]
  size_t n; // [rsp+28h] [rbp-248h]
  size_t na; // [rsp+28h] [rbp-248h]
  __int64 v80; // [rsp+48h] [rbp-228h]
  int v81; // [rsp+50h] [rbp-220h]
  unsigned __int8 v82; // [rsp+57h] [rbp-219h]
  __m128i v83; // [rsp+58h] [rbp-218h] BYREF
  const __m128i *v84; // [rsp+68h] [rbp-208h]
  __int64 v85; // [rsp+70h] [rbp-200h]
  size_t v86; // [rsp+78h] [rbp-1F8h]
  __m128i v87; // [rsp+80h] [rbp-1F0h] BYREF
  char *s; // [rsp+90h] [rbp-1E0h]
  __int128 v89; // [rsp+98h] [rbp-1D8h]
  char *v90; // [rsp+B0h] [rbp-1C0h] BYREF
  __int128 v91; // [rsp+B8h] [rbp-1B8h]
  void *v92; // [rsp+D0h] [rbp-1A0h] BYREF
  __int64 v93; // [rsp+D8h] [rbp-198h]
  _QWORD v94[2]; // [rsp+E0h] [rbp-190h] BYREF
  char v95; // [rsp+F0h] [rbp-180h] BYREF
  __int128 v96; // [rsp+F8h] [rbp-178h] BYREF
  char v97; // [rsp+108h] [rbp-168h]
  __int128 v98; // [rsp+110h] [rbp-160h] BYREF
  char v99; // [rsp+120h] [rbp-150h] BYREF
  _OWORD v100[2]; // [rsp+128h] [rbp-148h] BYREF
  __int64 v101; // [rsp+148h] [rbp-128h]
  char v102; // [rsp+150h] [rbp-120h] BYREF
  __int128 v103; // [rsp+158h] [rbp-118h] BYREF
  char v104; // [rsp+168h] [rbp-108h]
  __int128 v105; // [rsp+170h] [rbp-100h]
  void *v106; // [rsp+180h] [rbp-F0h] BYREF
  __m128i v107; // [rsp+188h] [rbp-E8h] BYREF
  char v108; // [rsp+198h] [rbp-D8h]
  __int64 v109; // [rsp+1A0h] [rbp-D0h]
  __int64 v110; // [rsp+1A8h] [rbp-C8h]
  _QWORD v111[3]; // [rsp+1B0h] [rbp-C0h] BYREF
  _QWORD v112[3]; // [rsp+1C8h] [rbp-A8h] BYREF
  _QWORD v113[3]; // [rsp+1E0h] [rbp-90h] BYREF
  _QWORD v114[3]; // [rsp+1F8h] [rbp-78h] BYREF
  char v115[40]; // [rsp+210h] [rbp-60h] BYREF
  unsigned __int64 v116; // [rsp+238h] [rbp-38h]

  v116 = __readfsqword(0x28u);
  v107.m128i_i8[8] = 0;
  v4 = (__int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v106 = &v107.m128i_u64[1];
  v5 = *v4;
  v84 = (const __m128i *)&v106;
  v107.m128i_i64[0] = 0;
  if ( v5 != 3 )
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
    v90 = v3;
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
  v6 = (char *)v106;
  if ( v107.m128i_i64[0] > 2uLL && *(_BYTE *)v106 == 48 && (*((_BYTE *)v106 + 1) & 0xDF) == 0x58 )
    v6 = (char *)v106 + 2;
  v7 = __errno_location();
  *v7 = 0;
  v8 = v7;
  v83.m128i_i64[1] = (__int64)&v90;
  v9 = __isoc23_strtoull();
  if ( v6 == v90 || *v90 || *v8 == 34 && v9 == -1 )
  {
    if ( v106 != &v107.m128i_u64[1] )
      operator delete(v106, v107.m128i_i64[1] + 1);
    v10 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v10, "Invalid address");
    __cxa_throw(
      v10,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v106 != &v107.m128i_u64[1] )
    operator delete(v106, v107.m128i_i64[1] + 1);
  v85 = 0;
  if ( !(unsigned __int8)get_tinfo() )
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
  s = nullptr;
  v89 = 0;
  v82 = tinfo_t__build_anon_type_name();
  v91 = 0;
  v90 = nullptr;
  print_tinfo();
  v95 = 0;
  *(_QWORD *)&v96 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v95 = 3;
  v11 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v11, "address", v12, v13, v14, v15, v61, v67, v72);
  v83.m128i_i64[1] = (__int64)v115;
  v96 = (unsigned __int64)v11;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v92, v115, v16, v17, v18, v19, v62, (int)&v92, v73);
  v97 = 0;
  *(_QWORD *)&v98 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v97 = 3;
  v20 = (_QWORD *)operator new(0x20u);
  v21 = v92;
  v22 = v20 + 2;
  v23 = v93;
  *v20 = v20 + 2;
  if ( v21 == v94 )
  {
    v53 = v23 + 1;
    if ( (unsigned int)(v23 + 1) >= 8 )
    {
      v20[2] = v94[0];
      *(_QWORD *)((char *)v22 + v53 - 8) = *(_QWORD *)((char *)&v94[-1] + v53);
      v54 = (unsigned __int64)(v20 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v55 = (char *)v22 - v54;
      v56 = (char *)((char *)v94 - v55);
      v57 = ((_DWORD)v55 + v53) & 0xFFFFFFF8;
      if ( v57 >= 8 )
      {
        v58 = v57 & 0xFFFFFFF8;
        v59 = 0;
        do
        {
          v60 = v59;
          v59 += 8;
          *(_QWORD *)(v54 + v60) = *(_QWORD *)&v56[v60];
        }
        while ( v59 < v58 );
      }
    }
    else if ( (v53 & 4) != 0 )
    {
      *((_DWORD *)v20 + 4) = v94[0];
      *(_DWORD *)((char *)v22 + v53 - 4) = *(_DWORD *)((char *)&v93 + v53 + 4);
    }
    else if ( (_DWORD)v23 != -1 )
    {
      *((_BYTE *)v20 + 16) = v94[0];
      if ( (v53 & 2) != 0 )
        *(_WORD *)((char *)v22 + v53 - 2) = *(_WORD *)((char *)&v93 + v53 + 6);
    }
  }
  else
  {
    *v20 = v21;
    v20[2] = v94[0];
  }
  v20[1] = v23;
  v92 = v94;
  v93 = 0;
  LOBYTE(v94[0]) = 0;
  v98 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v111,
    (const __m128i *)&v95);
  v99 = 0;
  v111[2] = 0;
  *(_QWORD *)&v100[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v99 = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v24, "anon_name", v25, v26, v27, v28, v63, v68, v74);
  v100[0] = (unsigned __int64)v24;
  if ( !v82 || (unsigned __int64)v89 <= 1 )
  {
    v83.m128i_i64[0] = 0;
    v5 = 0;
    goto LABEL_19;
  }
  v87 = 0u;
  v46 = s;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v47 = (_QWORD *)operator new(0x20u);
  v83.m128i_i64[0] = (__int64)v47;
  *v47 = v47 + 2;
  if ( !v46 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  n = (size_t)(v47 + 2);
  v48 = strlen(v46);
  v49 = (void *)n;
  v86 = v48;
  v50 = v48;
  if ( v48 > 0xF )
  {
    na = v48;
    v51 = std::string::_M_create();
    v52 = v83.m128i_i64[0];
    v49 = (void *)v51;
    v50 = na;
    *(_QWORD *)v83.m128i_i64[0] = v51;
    *(_QWORD *)(v52 + 16) = v86;
LABEL_40:
    memcpy(v49, v46, v50);
    v48 = v86;
    v49 = *(void **)v83.m128i_i64[0];
    goto LABEL_35;
  }
  if ( v48 != 1 )
  {
    if ( !v48 )
      goto LABEL_35;
    goto LABEL_40;
  }
  *(_BYTE *)(v83.m128i_i64[0] + 16) = *v46;
LABEL_35:
  *(_QWORD *)(v83.m128i_i64[0] + 8) = v48;
  *((_BYTE *)v49 + v48) = 0;
LABEL_19:
  v87.m128i_i8[0] = v5;
  v101 = 0;
  v87.m128i_i64[1] = v83.m128i_i64[0];
  v100[1] = _mm_load_si128(&v87);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v112,
    (const __m128i *)&v99);
  v102 = 0;
  v112[2] = 0;
  *(_QWORD *)&v103 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v102 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "type");
  *(_QWORD *)(v29 + 8) = 4;
  v103 = (unsigned __int64)v29;
  if ( (_QWORD)v91 )
    v30 = v90;
  else
    v30 = _qstring<char>::c_str(void)const::nullstr;
  v104 = 0;
  *(_QWORD *)&v105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v31 = v30;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, v31, v33, v34, v35, v36, v64, v69, v75);
  v105 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v113,
    (const __m128i *)&v102);
  v113[2] = 0;
  LOBYTE(v106) = 0;
  v107.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v106) = 3;
  v83.m128i_i64[0] = operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v83.m128i_i64[0],
    "success",
    v37,
    v38,
    v39,
    v40,
    v65,
    v70,
    (__int64)&v102);
  v41 = _mm_loadl_epi64(&v83);
  v108 = 4;
  v109 = v82;
  v110 = 0;
  v107 = v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v114,
    v84);
  v114[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v111,
    4,
    v42,
    v43,
    v44,
    v66,
    v71,
    v76,
    (int)&v99,
    (int)&v95,
    (int)&v103,
    (__int64)v100,
    (int)&v98,
    (int)&v96,
    (int)a1,
    v81,
    v83.m128i_i8[0],
    v83.m128i_i64[1],
    (int)v84,
    v85);
  v84 = (const __m128i *)v83.m128i_i64[1];
  do
  {
    v84 = (const __m128i *)((char *)v84 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v84 != (const __m128i *)v111 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v92 != v94 )
    operator delete(v92, v94[0] + 1LL);
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    qfree();
  }
  if ( s )
  {
    *(_QWORD *)&v89 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v80;
}

