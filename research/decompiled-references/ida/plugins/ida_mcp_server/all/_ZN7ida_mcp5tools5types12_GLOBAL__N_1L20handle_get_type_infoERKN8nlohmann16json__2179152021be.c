_QWORD *__fastcall ida_mcp::tools::types::`anonymous namespace'::handle_get_type_info(_QWORD *a1)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v2; // rax
  _BYTE *v3; // rbx
  char *v4; // rbx
  int *v5; // rax
  int *v6; // r14
  __int64 v7; // rax
  std::runtime_error *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  _OWORD *v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rsi
  __int64 *v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  const char *v50; // r13
  _QWORD *v51; // rax
  size_t v52; // rax
  void *v53; // rcx
  size_t v54; // r8
  __int64 v55; // rdx
  const __m128i *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned __int64 v61; // rdi
  char *v62; // rcx
  char *v63; // r8
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // ecx
  __int64 v67; // r9
  unsigned __int64 v68; // rdi
  char *v69; // rcx
  char *v70; // r8
  unsigned int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // ecx
  __int64 v74; // r9
  int v75; // [rsp+0h] [rbp-200h]
  int v76; // [rsp+0h] [rbp-200h]
  int v77; // [rsp+0h] [rbp-200h]
  int v78; // [rsp+0h] [rbp-200h]
  int v79; // [rsp+0h] [rbp-200h]
  int v80; // [rsp+0h] [rbp-200h]
  int v81; // [rsp+8h] [rbp-1F8h]
  int v82; // [rsp+8h] [rbp-1F8h]
  int v83; // [rsp+8h] [rbp-1F8h]
  int v84; // [rsp+8h] [rbp-1F8h]
  __int64 v85; // [rsp+8h] [rbp-1F8h]
  void *dest; // [rsp+10h] [rbp-1F0h]
  void *desta; // [rsp+10h] [rbp-1F0h]
  void *destc; // [rsp+10h] [rbp-1F0h]
  void *destd; // [rsp+10h] [rbp-1F0h]
  int deste; // [rsp+10h] [rbp-1F0h]
  void *destb; // [rsp+10h] [rbp-1F0h]
  void *destf; // [rsp+10h] [rbp-1F0h]
  void *destg; // [rsp+10h] [rbp-1F0h]
  __m128i v94; // [rsp+20h] [rbp-1E0h] BYREF
  __m128i v95; // [rsp+30h] [rbp-1D0h] BYREF
  _QWORD *v96; // [rsp+40h] [rbp-1C0h]
  const __m128i *v97; // [rsp+48h] [rbp-1B8h]
  __int64 v98; // [rsp+50h] [rbp-1B0h]
  size_t v99; // [rsp+58h] [rbp-1A8h]
  char *v100; // [rsp+60h] [rbp-1A0h]
  __int128 v101; // [rsp+68h] [rbp-198h]
  void *v102; // [rsp+80h] [rbp-180h] BYREF
  __int64 v103; // [rsp+88h] [rbp-178h]
  _QWORD v104[2]; // [rsp+90h] [rbp-170h] BYREF
  void *v105; // [rsp+A0h] [rbp-160h] BYREF
  __int128 v106; // [rsp+A8h] [rbp-158h] BYREF
  char v107; // [rsp+B8h] [rbp-148h]
  __int128 v108; // [rsp+C0h] [rbp-140h]
  char v109; // [rsp+D0h] [rbp-130h] BYREF
  __m128i v110; // [rsp+D8h] [rbp-128h] BYREF
  __int64 v111; // [rsp+E8h] [rbp-118h]
  __int128 v112; // [rsp+F0h] [rbp-110h]
  void *v113; // [rsp+100h] [rbp-100h] BYREF
  __m128i v114; // [rsp+108h] [rbp-F8h] BYREF
  char v115; // [rsp+118h] [rbp-E8h]
  __m128i v116; // [rsp+120h] [rbp-E0h] BYREF
  __m128i v117; // [rsp+130h] [rbp-D0h] BYREF
  __int64 v118; // [rsp+140h] [rbp-C0h]
  __int64 v119; // [rsp+148h] [rbp-B8h] BYREF
  __int64 v120; // [rsp+158h] [rbp-A8h]
  _QWORD v121[3]; // [rsp+160h] [rbp-A0h] BYREF
  char v122; // [rsp+178h] [rbp-88h] BYREF
  char v123[32]; // [rsp+180h] [rbp-80h] BYREF
  char v124[40]; // [rsp+1A0h] [rbp-60h] BYREF
  unsigned __int64 v125; // [rsp+1C8h] [rbp-38h]

  v96 = a1;
  v125 = __readfsqword(0x28u);
  v113 = &v114.m128i_u64[1];
  v3 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v114.m128i_i64[0] = 0;
  v97 = (const __m128i *)&v113;
  v114.m128i_i8[8] = 0;
  if ( *v3 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v3 )
    {
      case 0:
        v2 = "null";
        break;
      case 1:
        v2 = "object";
        break;
      case 2:
        v2 = (char *)"array";
        break;
      case 3:
        v2 = "string";
        break;
      case 4:
        v2 = "boolean";
        break;
      case 8:
        v2 = "binary";
        break;
      case 9:
        v2 = "discarded";
        break;
      default:
        v2 = "number";
        break;
    }
    v100 = v2;
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
  v4 = (char *)v113;
  if ( v114.m128i_i64[0] > 2uLL && *(_BYTE *)v113 == 48 )
  {
    v95.m128i_i8[8] = *((_BYTE *)v113 + 1);
    if ( (v95.m128i_i8[8] & 0xDF) == 0x58 )
      v4 = (char *)v113 + 2;
  }
  v5 = __errno_location();
  *v5 = 0;
  v6 = v5;
  v7 = __isoc23_strtoull();
  if ( v4 == v100 || *v100 || *v6 == 34 && v7 == -1 )
  {
    if ( v113 != &v114.m128i_u64[1] )
      operator delete(v113, v114.m128i_i64[1] + 1);
    v8 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v8, "Invalid address format");
    __cxa_throw(
      v8,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v113 != &v114.m128i_u64[1] )
    operator delete(v113, v114.m128i_i64[1] + 1);
  v98 = 0;
  if ( !(unsigned __int8)get_tinfo() )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v105) = 3;
    v9 = operator new(0x20u);
    *(_QWORD *)v9 = v9 + 16;
    strcpy((char *)(v9 + 16), "address");
    *(_QWORD *)(v9 + 8) = 7;
    v106 = (unsigned __int64)v9;
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v102,
      v123,
      v10,
      v11,
      v12,
      v13,
      v75,
      v81,
      (__int64)&v102);
    v107 = 0;
    *(_QWORD *)&v108 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v107 = 3;
    v14 = (_QWORD *)operator new(0x20u);
    v15 = v102;
    v16 = v14 + 2;
    v17 = v103;
    *v14 = v14 + 2;
    if ( v15 == v104 )
    {
      v59 = v17 + 1;
      if ( (unsigned int)(v17 + 1) >= 8 )
      {
        v14[2] = v104[0];
        *(_QWORD *)((char *)v16 + v59 - 8) = *(_QWORD *)((char *)&v104[-1] + v59);
        v68 = (unsigned __int64)(v14 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v69 = (char *)v16 - v68;
        v70 = (char *)((char *)v104 - v69);
        v71 = ((_DWORD)v69 + v59) & 0xFFFFFFF8;
        if ( v71 >= 8 )
        {
          v72 = v71 & 0xFFFFFFF8;
          v73 = 0;
          do
          {
            v74 = v73;
            v73 += 8;
            *(_QWORD *)(v68 + v74) = *(_QWORD *)&v70[v74];
          }
          while ( v73 < v72 );
        }
      }
      else if ( (v59 & 4) != 0 )
      {
        *((_DWORD *)v14 + 4) = v104[0];
        *(_DWORD *)((char *)v16 + v59 - 4) = *(_DWORD *)((char *)&v103 + v59 + 4);
      }
      else if ( (_DWORD)v17 != -1 )
      {
        *((_BYTE *)v14 + 16) = v104[0];
        if ( (v59 & 2) != 0 )
          *(_WORD *)((char *)v16 + v59 - 2) = *(_WORD *)((char *)&v103 + v59 + 6);
      }
    }
    else
    {
      *v14 = v15;
      v14[2] = v104[0];
    }
    v14[1] = v17;
    v102 = v104;
    v103 = 0;
    LOBYTE(v104[0]) = 0;
    v108 = (unsigned __int64)v14;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v117,
      (const __m128i *)&v105);
    v109 = 0;
    v94.m128i_i64[1] = (__int64)&v110;
    v118 = 0;
    v110.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v109 = 3;
    v95.m128i_i64[1] = operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v95.m128i_i64[1],
      "type_info",
      v18,
      v19,
      v20,
      v21,
      v76,
      v82,
      (__int64)desta);
    v22 = _mm_loadl_epi64((const __m128i *)&v95.m128i_u64[1]);
    v111 = 0;
    v110 = v22;
    v112 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v119,
      (const __m128i *)&v109);
    LOBYTE(v113) = 0;
    v95.m128i_i64[1] = (__int64)&v114;
    v120 = 0;
    v114.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v113) = 3;
    v95.m128i_i64[0] = operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v95.m128i_i64[0],
      "error",
      v23,
      v24,
      v25,
      v26,
      v77,
      v83,
      (__int64)destc);
    v27 = _mm_loadl_epi64(&v95);
    v115 = 0;
    v95.m128i_i64[0] = (__int64)&v116;
    v116.m128i_i64[0] = 0;
    v114 = v27;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v115 = 3;
    v94.m128i_i64[0] = operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v94.m128i_i64[0],
      "No type information available at this address",
      v28,
      v29,
      v30,
      v31,
      v78,
      v84,
      (__int64)destd);
    v116 = _mm_loadl_epi64(&v94);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v121,
      v97);
    v121[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v96,
      (__int64)&v117,
      3,
      v32,
      v33,
      v34,
      v79,
      v85,
      deste,
      (int)&v105,
      v94.m128i_i32[0],
      v94.m128i_i32[2],
      v95.m128i_i64[0],
      v95.m128i_i32[2],
      (int)v96,
      (int)v97,
      v98,
      v99,
      (__int64)v100,
      v101,
      *((__int64 *)&v101 + 1));
    v97 = (const __m128i *)&v122;
    do
    {
      v97 = (const __m128i *)((char *)v97 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v97 != &v117 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v102 != v104 )
      operator delete(v102, v104[0] + 1LL);
    goto LABEL_20;
  }
  v100 = nullptr;
  v101 = 0;
  print_tinfo();
  v110.m128i_i64[0] = 0;
  v94.m128i_i64[1] = (__int64)&v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)v36 = v36 + 16;
  strcpy((char *)(v36 + 16), "address");
  *(_QWORD *)(v36 + 8) = 7;
  v110 = (__m128i)(unsigned __int64)v36;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v105, v124, v37, v38, v39, v40, v75, v81, (__int64)dest);
  LOBYTE(v111) = 0;
  *(_QWORD *)&v112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v111) = 3;
  v41 = (_QWORD *)operator new(0x20u);
  v42 = v105;
  v43 = v41 + 2;
  v44 = v106;
  *v41 = v41 + 2;
  if ( v42 == (__int128 *)((char *)&v106 + 8) )
  {
    v60 = v44 + 1;
    if ( (unsigned int)(v44 + 1) >= 8 )
    {
      v41[2] = *((_QWORD *)&v106 + 1);
      *(_QWORD *)((char *)v43 + v60 - 8) = *(_QWORD *)((char *)&v106 + v60);
      v61 = (unsigned __int64)(v41 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v62 = (char *)v43 - v61;
      v63 = (char *)((char *)&v106 + 8 - v62);
      v64 = ((_DWORD)v62 + v60) & 0xFFFFFFF8;
      if ( v64 >= 8 )
      {
        v65 = v64 & 0xFFFFFFF8;
        v66 = 0;
        do
        {
          v67 = v66;
          v66 += 8;
          *(_QWORD *)(v61 + v67) = *(_QWORD *)&v63[v67];
        }
        while ( v66 < v65 );
      }
    }
    else if ( (v60 & 4) != 0 )
    {
      *((_DWORD *)v41 + 4) = DWORD2(v106);
      *(_DWORD *)((char *)v43 + v60 - 4) = *(_DWORD *)((char *)&v106 + v60 + 4);
    }
    else if ( (_DWORD)v44 != -1 )
    {
      *((_BYTE *)v41 + 16) = BYTE8(v106);
      if ( (v60 & 2) != 0 )
        *(_WORD *)((char *)v43 + v60 - 2) = *(_WORD *)((char *)&v106 + v60 + 6);
    }
  }
  else
  {
    *v41 = v42;
    v41[2] = *((_QWORD *)&v106 + 1);
  }
  v41[1] = v44;
  v105 = (char *)&v106 + 8;
  *(_QWORD *)&v106 = 0;
  BYTE8(v106) = 0;
  v112 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v117,
    (const __m128i *)&v109);
  LOBYTE(v113) = 0;
  v95.m128i_i64[1] = (__int64)&v114;
  v118 = 0;
  v114.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v113) = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "type_info", v46, v47, v48, v49, v80, (int)&v109, (__int64)destb);
  v114 = (__m128i)(unsigned __int64)v45;
  if ( (_QWORD)v101 )
    v50 = v100;
  else
    v50 = _qstring<char>::c_str(void)const::nullstr;
  v115 = 0;
  v95.m128i_i64[0] = (__int64)&v116;
  v116.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v51 = (_QWORD *)operator new(0x20u);
  v94.m128i_i64[0] = (__int64)v51;
  *v51 = v51 + 2;
  if ( !v50 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  destf = v51 + 2;
  v52 = strlen(v50);
  v53 = destf;
  v99 = v52;
  v54 = v52;
  if ( v52 > 0xF )
  {
    destg = (void *)v52;
    v57 = std::string::_M_create();
    v58 = v94.m128i_i64[0];
    v53 = (void *)v57;
    v54 = (size_t)destg;
    *(_QWORD *)v94.m128i_i64[0] = v57;
    *(_QWORD *)(v58 + 16) = v99;
    goto LABEL_40;
  }
  if ( v52 != 1 )
  {
    if ( !v52 )
      goto LABEL_29;
LABEL_40:
    memcpy(v53, v50, v54);
    v52 = v99;
    v53 = *(void **)v94.m128i_i64[0];
    goto LABEL_29;
  }
  *(_BYTE *)(v94.m128i_i64[0] + 16) = *v50;
LABEL_29:
  v55 = v94.m128i_i64[0];
  v56 = v97;
  *(_QWORD *)(v94.m128i_i64[0] + 8) = v52;
  *((_BYTE *)v53 + v52) = 0;
  v116 = (__m128i)(unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v119,
    v56);
  v120 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    &v117);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v105 != (char *)&v106 + 8 )
    operator delete(v105, *((_QWORD *)&v106 + 1) + 1LL);
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree();
  }
LABEL_20:
  clear_tinfo_t();
  return v96;
}

