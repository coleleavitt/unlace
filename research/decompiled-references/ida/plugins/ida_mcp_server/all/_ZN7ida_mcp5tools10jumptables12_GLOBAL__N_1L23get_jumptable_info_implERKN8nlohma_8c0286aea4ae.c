_QWORD *__fastcall ida_mcp::tools::jumptables::`anonymous namespace'::get_jumptable_info_impl(int a1)
{
  void *exception; // r12
  char *v2; // rax
  std::runtime_error *v3; // rbx
  _BYTE *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // rax
  __m128i *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rax
  _OWORD *v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rsi
  __int64 *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // r8
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r9
  unsigned __int64 v69; // rdi
  char *v70; // rcx
  char *v71; // r8
  unsigned int v72; // edx
  unsigned int v73; // edx
  unsigned int v74; // ecx
  __int64 v75; // r9
  unsigned __int64 v76; // rdi
  char *v77; // rcx
  char *v78; // r8
  unsigned int v79; // edx
  unsigned int v80; // edx
  unsigned int v81; // ecx
  __int64 v82; // r9
  int v83; // [rsp+0h] [rbp-268h]
  int v84; // [rsp+0h] [rbp-268h]
  int v85; // [rsp+0h] [rbp-268h]
  int v86; // [rsp+0h] [rbp-268h]
  int v87; // [rsp+0h] [rbp-268h]
  int v88; // [rsp+0h] [rbp-268h]
  int v89; // [rsp+0h] [rbp-268h]
  int v90; // [rsp+8h] [rbp-260h]
  int v91; // [rsp+8h] [rbp-260h]
  int v92; // [rsp+8h] [rbp-260h]
  int v93; // [rsp+8h] [rbp-260h]
  _QWORD *v94; // [rsp+8h] [rbp-260h]
  _QWORD *v95; // [rsp+8h] [rbp-260h]
  int v96; // [rsp+8h] [rbp-260h]
  __int64 v97; // [rsp+10h] [rbp-258h]
  __int64 v98; // [rsp+10h] [rbp-258h]
  __int64 v99; // [rsp+10h] [rbp-258h]
  __int64 v100; // [rsp+10h] [rbp-258h]
  int v101; // [rsp+10h] [rbp-258h]
  __m128i v102; // [rsp+20h] [rbp-248h] BYREF
  __int128 *v103; // [rsp+30h] [rbp-238h]
  __int128 *v104; // [rsp+38h] [rbp-230h]
  char *v105; // [rsp+40h] [rbp-228h]
  char *v106; // [rsp+48h] [rbp-220h]
  void **v107; // [rsp+50h] [rbp-218h]
  void **v108; // [rsp+58h] [rbp-210h]
  __int64 v109; // [rsp+60h] [rbp-208h]
  __int64 v110; // [rsp+68h] [rbp-200h]
  __m128i si128; // [rsp+70h] [rbp-1F8h]
  void *v112; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v113; // [rsp+88h] [rbp-1E0h]
  _QWORD v114[2]; // [rsp+90h] [rbp-1D8h] BYREF
  void *v115; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v116; // [rsp+A8h] [rbp-1C0h]
  _QWORD v117[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  char v118; // [rsp+C0h] [rbp-1A8h] BYREF
  __int128 v119; // [rsp+C8h] [rbp-1A0h] BYREF
  char v120; // [rsp+D8h] [rbp-190h]
  __int128 v121; // [rsp+E0h] [rbp-188h] BYREF
  void *v122; // [rsp+F0h] [rbp-178h] BYREF
  __int128 v123; // [rsp+F8h] [rbp-170h] BYREF
  __int64 v124; // [rsp+108h] [rbp-160h]
  __int64 v125; // [rsp+110h] [rbp-158h]
  __int64 v126; // [rsp+118h] [rbp-150h]
  char v127; // [rsp+120h] [rbp-148h] BYREF
  __int128 v128; // [rsp+128h] [rbp-140h] BYREF
  char v129; // [rsp+138h] [rbp-130h]
  __int128 v130; // [rsp+140h] [rbp-128h] BYREF
  void *v131; // [rsp+150h] [rbp-118h] BYREF
  __m128i v132; // [rsp+158h] [rbp-110h] BYREF
  __int64 v133; // [rsp+168h] [rbp-100h]
  __int64 v134; // [rsp+170h] [rbp-F8h]
  __int64 v135; // [rsp+178h] [rbp-F0h]
  __m128i v136; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v137; // [rsp+190h] [rbp-D8h]
  __int64 v138; // [rsp+198h] [rbp-D0h] BYREF
  __int64 v139; // [rsp+1A8h] [rbp-C0h]
  _QWORD v140[3]; // [rsp+1B0h] [rbp-B8h] BYREF
  _QWORD v141[3]; // [rsp+1C8h] [rbp-A0h] BYREF
  char v142[32]; // [rsp+1E0h] [rbp-88h] BYREF
  char v143[40]; // [rsp+200h] [rbp-68h] BYREF
  unsigned __int64 v144; // [rsp+228h] [rbp-40h]

  v144 = __readfsqword(0x28u);
  v131 = &v132.m128i_u64[1];
  v132.m128i_i64[0] = 0;
  v4 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v132.m128i_i8[8] = 0;
  if ( *v4 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *v4 )
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
    v109 = (__int64)v2;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v5 = ida_mcp::parse_ea(v131, v132.m128i_u64[0]);
  v110 = v6;
  v7 = v6;
  v109 = v5;
  if ( v131 != &v132.m128i_u64[1] )
    operator delete(v131, v132.m128i_i64[1] + 1);
  if ( !v7 )
  {
    v3 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v3, "Invalid address format");
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2390);
  if ( get_jumptable_info() < 0 )
  {
    *(_QWORD *)&v128 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v127 = 3;
    v45 = operator new(0x20u);
    *(_QWORD *)v45 = v45 + 16;
    strcpy((char *)(v45 + 16), "address");
    *(_QWORD *)(v45 + 8) = 7;
    v128 = (unsigned __int64)v45;
    qsnprintf();
    std::string::basic_string<std::allocator<char>>((__int64 *)&v122, v143, v46, v47, v48, v49, v83, a1, v97);
    v129 = 0;
    *(_QWORD *)&v130 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v129 = 3;
    v50 = (_QWORD *)operator new(0x20u);
    v51 = v122;
    v52 = v50 + 2;
    v53 = v123;
    *v50 = v50 + 2;
    if ( v51 == (__int128 *)((char *)&v123 + 8) )
    {
      v61 = v53 + 1;
      if ( (unsigned int)(v53 + 1) >= 8 )
      {
        v50[2] = *((_QWORD *)&v123 + 1);
        *(_QWORD *)((char *)v52 + v61 - 8) = *(_QWORD *)((char *)&v123 + v61);
        v76 = (unsigned __int64)(v50 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v77 = (char *)v52 - v76;
        v78 = (char *)((char *)&v123 + 8 - v77);
        v79 = ((_DWORD)v77 + v61) & 0xFFFFFFF8;
        if ( v79 >= 8 )
        {
          v80 = v79 & 0xFFFFFFF8;
          v81 = 0;
          do
          {
            v82 = v81;
            v81 += 8;
            *(_QWORD *)(v76 + v82) = *(_QWORD *)&v78[v82];
          }
          while ( v81 < v80 );
        }
      }
      else if ( (v61 & 4) != 0 )
      {
        *((_DWORD *)v50 + 4) = DWORD2(v123);
        *(_DWORD *)((char *)v52 + v61 - 4) = *(_DWORD *)((char *)&v123 + v61 + 4);
      }
      else if ( (_DWORD)v53 != -1 )
      {
        *((_BYTE *)v50 + 16) = BYTE8(v123);
        if ( (v61 & 2) != 0 )
          *(_WORD *)((char *)v52 + v61 - 2) = *(_WORD *)((char *)&v123 + v61 + 6);
      }
    }
    else
    {
      *v50 = v51;
      v50[2] = *((_QWORD *)&v123 + 1);
    }
    v50[1] = v53;
    v122 = (char *)&v123 + 8;
    *(_QWORD *)&v123 = 0;
    BYTE8(v123) = 0;
    v105 = &v127;
    v130 = (unsigned __int64)v50;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v136,
      (const __m128i *)&v127);
    v137 = 0;
    LOBYTE(v131) = 0;
    v132.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v131) = 3;
    v54 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v54, "has_info", v55, v56, v57, v58, v89, v96, (__int64)&v130);
    v133 = 4;
    v132 = (__m128i)(unsigned __int64)v54;
    v134 = 0;
    v135 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v138,
      (const __m128i *)&v131);
    v139 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v95,
      &v136);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v122 != (char *)&v123 + 8 )
      operator delete(v122, *((_QWORD *)&v123 + 1) + 1LL);
  }
  else
  {
    v102.m128i_i64[1] = (__int64)&v119;
    *(_QWORD *)&v119 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v118 = 3;
    v8 = operator new(0x20u);
    *(_QWORD *)v8 = v8 + 16;
    v9 = (__m128i *)v142;
    strcpy((char *)(v8 + 16), "address");
    *(_QWORD *)(v8 + 8) = 7;
    v119 = (unsigned __int64)v8;
    qsnprintf();
    v107 = &v112;
    std::string::basic_string<std::allocator<char>>((__int64 *)&v112, v142, v10, v11, v12, v13, v83, a1, v97);
    v120 = 0;
    v103 = &v121;
    *(_QWORD *)&v121 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v120 = 3;
    v14 = (_QWORD *)operator new(0x20u);
    v15 = v112;
    v16 = v14 + 2;
    v17 = v113;
    *v14 = v14 + 2;
    if ( v15 == v114 )
    {
      v59 = v17 + 1;
      if ( (unsigned int)(v17 + 1) >= 8 )
      {
        v14[2] = v114[0];
        *(_QWORD *)((char *)v16 + v59 - 8) = *(_QWORD *)((char *)&v114[-1] + v59);
        v62 = (unsigned __int64)(v14 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v63 = (char *)v16 - v62;
        v64 = (char *)((char *)v114 - v63);
        v65 = ((_DWORD)v63 + v59) & 0xFFFFFFF8;
        if ( v65 >= 8 )
        {
          v66 = v65 & 0xFFFFFFF8;
          v67 = 0;
          do
          {
            v68 = v67;
            v67 += 8;
            *(_QWORD *)(v62 + v68) = *(_QWORD *)&v64[v68];
          }
          while ( v67 < v66 );
        }
      }
      else if ( (v59 & 4) != 0 )
      {
        *((_DWORD *)v14 + 4) = v114[0];
        *(_DWORD *)((char *)v16 + v59 - 4) = *(_DWORD *)((char *)&v113 + v59 + 4);
      }
      else if ( (_DWORD)v17 != -1 )
      {
        *((_BYTE *)v14 + 16) = v114[0];
        if ( (v59 & 2) != 0 )
          *(_WORD *)((char *)v16 + v59 - 2) = *(_WORD *)((char *)&v113 + v59 + 6);
      }
    }
    else
    {
      *v14 = v15;
      v14[2] = v114[0];
    }
    v14[1] = v17;
    v112 = v114;
    v113 = 0;
    LOBYTE(v114[0]) = 0;
    v106 = &v118;
    v121 = (unsigned __int64)v14;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v136,
      (const __m128i *)&v118);
    v137 = 0;
    LOBYTE(v122) = 0;
    *(_QWORD *)&v123 = 0;
    v104 = &v123;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v122) = 3;
    v18 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v18, "has_info", v19, v20, v21, v22, v84, v90, v98);
    v124 = 4;
    v123 = (unsigned __int64)v18;
    v125 = 1;
    v126 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v138,
      (const __m128i *)&v122);
    v139 = 0;
    v127 = 0;
    *(_QWORD *)&v128 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v127 = 3;
    v23 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v23, "table_address", v24, v25, v26, v27, v85, v91, v99);
    v128 = (unsigned __int64)v23;
    qsnprintf();
    v108 = &v115;
    std::string::basic_string<std::allocator<char>>((__int64 *)&v115, v143, v28, v29, v30, v31, v86, v92, v100);
    v129 = 0;
    *(_QWORD *)&v130 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v129 = 3;
    v32 = (_QWORD *)operator new(0x20u);
    v33 = v115;
    v34 = v32 + 2;
    v35 = v116;
    *v32 = v32 + 2;
    if ( v33 == v117 )
    {
      v60 = v35 + 1;
      if ( (unsigned int)(v35 + 1) >= 8 )
      {
        v32[2] = v117[0];
        *(_QWORD *)((char *)v34 + v60 - 8) = *(_QWORD *)((char *)&v117[-1] + v60);
        v69 = (unsigned __int64)(v32 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v70 = (char *)v34 - v69;
        v71 = (char *)((char *)v117 - v70);
        v72 = ((_DWORD)v70 + v60) & 0xFFFFFFF8;
        if ( v72 >= 8 )
        {
          v73 = v72 & 0xFFFFFFF8;
          v74 = 0;
          do
          {
            v75 = v74;
            v74 += 8;
            *(_QWORD *)(v69 + v75) = *(_QWORD *)&v71[v75];
          }
          while ( v74 < v73 );
        }
      }
      else if ( (v60 & 4) != 0 )
      {
        *((_DWORD *)v32 + 4) = v117[0];
        *(_DWORD *)((char *)v34 + v60 - 4) = *(_DWORD *)((char *)&v116 + v60 + 4);
      }
      else if ( (_DWORD)v35 != -1 )
      {
        *((_BYTE *)v32 + 16) = v117[0];
        if ( (v60 & 2) != 0 )
          *(_WORD *)((char *)v34 + v60 - 2) = *(_WORD *)((char *)&v116 + v60 + 6);
      }
    }
    else
    {
      *v32 = v33;
      v32[2] = v117[0];
    }
    v32[1] = v35;
    v115 = v117;
    v116 = 0;
    LOBYTE(v117[0]) = 0;
    v105 = &v127;
    v130 = (unsigned __int64)v32;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v140,
      (const __m128i *)&v127);
    v140[2] = 0;
    LOBYTE(v131) = 0;
    v132.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v131) = 3;
    v102.m128i_i64[0] = operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v102.m128i_i64[0],
      "table_size",
      v36,
      v37,
      v38,
      v39,
      v87,
      v93,
      (__int64)&v130);
    v40 = _mm_loadl_epi64(&v102);
    LOBYTE(v133) = 6;
    v134 = si128.m128i_i64[1];
    v135 = 0;
    v132 = v40;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v141,
      (const __m128i *)&v131);
    v141[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v94,
      (__int64)&v136,
      4,
      v41,
      v42,
      v43,
      v88,
      (__int64)v94,
      v101,
      (int)&v128,
      v102.m128i_i32[0],
      v102.m128i_i32[2],
      (__int64)v103,
      (int)v104,
      (int)v105,
      (int)v106,
      (int)v107,
      (char)v108,
      v109,
      v110,
      si128.m128i_i64[0]);
    do
    {
      v9 = (__m128i *)((char *)v9 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v9 != &v136 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v115 != v117 )
      operator delete(v115, v117[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v112 != v114 )
      operator delete(v112, v114[0] + 1LL);
  }
  return v95;
}

