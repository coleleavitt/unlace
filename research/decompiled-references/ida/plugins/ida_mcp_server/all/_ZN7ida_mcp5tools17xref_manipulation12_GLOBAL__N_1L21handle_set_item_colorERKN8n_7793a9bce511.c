_QWORD *__fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_set_item_color(int a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  char *v3; // rax
  std::runtime_error *v4; // rbx
  _BYTE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // r14
  __int64 *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 *v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // r13
  size_t v36; // rdx
  int v37; // eax
  unsigned __int64 v38; // r14
  _QWORD *v39; // rax
  __int64 *v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rsi
  __int64 *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128i *v61; // r12
  unsigned int v62; // edx
  unsigned __int64 v63; // rdi
  char *v64; // rcx
  char *v65; // r8
  unsigned int v66; // edx
  unsigned int v67; // edx
  unsigned int v68; // ecx
  __int64 v69; // r9
  unsigned int v70; // edx
  unsigned __int64 v71; // rdi
  char *v72; // rcx
  char *v73; // r8
  unsigned int v74; // edx
  unsigned int v75; // edx
  unsigned int v76; // ecx
  __int64 v77; // r9
  int v78; // [rsp+0h] [rbp-1B8h]
  int v79; // [rsp+0h] [rbp-1B8h]
  int v80; // [rsp+0h] [rbp-1B8h]
  int v81; // [rsp+0h] [rbp-1B8h]
  int v82; // [rsp+0h] [rbp-1B8h]
  int v83; // [rsp+0h] [rbp-1B8h]
  int v84; // [rsp+0h] [rbp-1B8h]
  int v86; // [rsp+8h] [rbp-1B0h]
  int v87; // [rsp+8h] [rbp-1B0h]
  int v88; // [rsp+8h] [rbp-1B0h]
  _QWORD *v89; // [rsp+8h] [rbp-1B0h]
  int v90; // [rsp+8h] [rbp-1B0h]
  int v91; // [rsp+8h] [rbp-1B0h]
  _QWORD *v92; // [rsp+8h] [rbp-1B0h]
  __m128i v93; // [rsp+10h] [rbp-1A8h] BYREF
  const __m128i *v94; // [rsp+20h] [rbp-198h]
  void **v95; // [rsp+28h] [rbp-190h]
  __int64 v96; // [rsp+30h] [rbp-188h]
  int v97; // [rsp+38h] [rbp-180h]
  int v98; // [rsp+3Ch] [rbp-17Ch]
  __int64 v99; // [rsp+40h] [rbp-178h]
  __int64 v100; // [rsp+48h] [rbp-170h]
  void *v101; // [rsp+50h] [rbp-168h] BYREF
  __int64 v102; // [rsp+58h] [rbp-160h]
  __int64 v103; // [rsp+60h] [rbp-158h] BYREF
  int v104; // [rsp+68h] [rbp-150h]
  void *v105; // [rsp+70h] [rbp-148h] BYREF
  __int64 v106; // [rsp+78h] [rbp-140h]
  __int64 v107; // [rsp+80h] [rbp-138h] BYREF
  char v108; // [rsp+88h] [rbp-130h]
  __int128 v109; // [rsp+90h] [rbp-128h] BYREF
  char v110; // [rsp+A0h] [rbp-118h] BYREF
  __int128 v111; // [rsp+A8h] [rbp-110h]
  char v112; // [rsp+B8h] [rbp-100h]
  __int128 v113; // [rsp+C0h] [rbp-F8h] BYREF
  void *v114; // [rsp+D0h] [rbp-E8h] BYREF
  __int128 v115; // [rsp+D8h] [rbp-E0h] BYREF
  char v116; // [rsp+E8h] [rbp-D0h]
  __m128i v117; // [rsp+F0h] [rbp-C8h]
  __m128i v118; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v119; // [rsp+110h] [rbp-A8h]
  __int64 v120; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v121; // [rsp+128h] [rbp-90h]
  _QWORD v122[3]; // [rsp+130h] [rbp-88h] BYREF
  char v123; // [rsp+148h] [rbp-70h] BYREF
  char v124[40]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v125; // [rsp+178h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  v114 = (char *)&v115 + 8;
  *(_QWORD *)&v115 = 0;
  v5 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  BYTE8(v115) = 0;
  if ( *v5 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v5 )
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
    v99 = (__int64)v3;
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
  v6 = ida_mcp::parse_ea(v114, v115);
  v100 = v7;
  v8 = v7;
  v99 = v6;
  if ( v114 != (char *)&v115 + 8 )
    operator delete(v114, *((_QWORD *)&v115 + 1) + 1LL);
  if ( !v8 )
  {
    v4 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v4, "Invalid address");
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_6;
  v33 = *(_QWORD *)(a2 + 8);
  v34 = *(_QWORD *)(v33 + 16);
  if ( !v34 )
    goto LABEL_6;
  v93.m128i_i64[0] = v33 + 8;
  v35 = v33 + 8;
  do
  {
    while ( 1 )
    {
      v38 = *(_QWORD *)(v34 + 40);
      if ( !v38 )
        break;
      v36 = 5;
      if ( v38 <= 5 )
        v36 = *(_QWORD *)(v34 + 40);
      v37 = memcmp(*(const void **)(v34 + 32), "color", v36);
      if ( v37 || (v37 = v38 - 5, (__int64)(v38 - 5) <= 0x7FFFFFFF) )
      {
        if ( v37 < 0 )
          break;
      }
      v35 = v34;
      v34 = *(_QWORD *)(v34 + 16);
      if ( !v34 )
        goto LABEL_21;
    }
    v34 = *(_QWORD *)(v34 + 24);
  }
  while ( v34 );
LABEL_21:
  if ( v93.m128i_i64[0] != v35 && std::string::compare(*(void **)(v35 + 32), *(_QWORD *)(v35 + 40), "color") <= 0 )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v98 = 0;
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned int,0>();
    set_item_color();
    v94 = (const __m128i *)&v105;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v105);
    v107 = 0;
    v95 = &v101;
    ida_mcp::format_ea[abi:cxx11]();
    v108 = 0;
    v93.m128i_i64[1] = (__int64)&v109;
    *(_QWORD *)&v109 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v108 = 3;
    v39 = (_QWORD *)operator new(0x20u);
    v40 = (__int64 *)v101;
    v41 = v39 + 2;
    v42 = v102;
    *v39 = v39 + 2;
    if ( v40 == &v103 )
    {
      v70 = v42 + 1;
      if ( (unsigned int)(v42 + 1) >= 8 )
      {
        v39[2] = v103;
        *(_QWORD *)((char *)v41 + v70 - 8) = *(__int64 *)((char *)&v102 + v70);
        v71 = (unsigned __int64)(v39 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v72 = (char *)v41 - v71;
        v73 = (char *)((char *)&v103 - v72);
        v74 = ((_DWORD)v72 + v70) & 0xFFFFFFF8;
        if ( v74 >= 8 )
        {
          v75 = v74 & 0xFFFFFFF8;
          v76 = 0;
          do
          {
            v77 = v76;
            v76 += 8;
            *(_QWORD *)(v71 + v77) = *(_QWORD *)&v73[v77];
          }
          while ( v76 < v75 );
        }
      }
      else if ( (v70 & 4) != 0 )
      {
        *((_DWORD *)v39 + 4) = v103;
        *(_DWORD *)((char *)v41 + v70 - 4) = *(_DWORD *)((char *)&v102 + v70 + 4);
      }
      else if ( (_DWORD)v42 != -1 )
      {
        *((_BYTE *)v39 + 16) = v103;
        if ( (v70 & 2) != 0 )
          *(_WORD *)((char *)v41 + v70 - 2) = *(_WORD *)((char *)&v102 + v70 + 6);
      }
    }
    else
    {
      *v39 = v40;
      v39[2] = v103;
    }
    v39[1] = v42;
    v101 = &v103;
    v102 = 0;
    LOBYTE(v103) = 0;
    v109 = (unsigned __int64)v39;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v118,
      v94,
      2,
      1);
    v119 = 0;
    v110 = 0;
    *(_QWORD *)&v111 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v110 = 3;
    v43 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v43, "color", v44, v45, v46, v47, v78, a1, v93.m128i_i64[0]);
    v112 = 6;
    v113 = 0u;
    v111 = (unsigned __int64)v43;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v120,
      (const __m128i *)&v110,
      2,
      1);
    v121 = 0;
    LOBYTE(v114) = 0;
    *(_QWORD *)&v115 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v114) = 3;
    v48 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v48, "action", v49, v50, v51, v52, v82, v90, v93.m128i_i64[0]);
    v116 = 0;
    v115 = (unsigned __int64)v48;
    v117.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v116 = 3;
    v53 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v53, "set", v54, v55, v56, v57, v83, v91, (__int64)v53);
    v117 = _mm_loadl_epi64(&v93);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v122,
      (const __m128i *)&v114,
      2,
      1);
    v122[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v92,
      (__int64)&v118,
      3,
      v58,
      v59,
      v60,
      v84,
      (__int64)v92,
      v93.m128i_i32[0],
      v93.m128i_i32[2],
      (int)v94,
      (int)v95,
      v96,
      v97,
      v99,
      v100,
      (int)v101,
      v102,
      v103,
      v104,
      (__int64)v105);
    v61 = (__m128i *)&v123;
    do
    {
      v61 = (__m128i *)((char *)v61 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v61 != &v118 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v101 != &v103 )
      operator delete(v101, v103 + 1);
  }
  else
  {
LABEL_6:
    del_item_color();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v110 = 3;
    v9 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v9, "address", v10, v11, v12, v13, v78, a1, v93.m128i_i64[0]);
    v111 = (unsigned __int64)v9;
    qsnprintf();
    v94 = (const __m128i *)&v105;
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v105,
      v124,
      v14,
      v15,
      v16,
      v17,
      v79,
      v86,
      v93.m128i_i64[0]);
    v112 = 0;
    v93.m128i_i64[1] = (__int64)&v113;
    *(_QWORD *)&v113 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v112 = 3;
    v18 = (_QWORD *)operator new(0x20u);
    v19 = (__int64 *)v105;
    v20 = v18 + 2;
    v21 = v106;
    *v18 = v18 + 2;
    if ( v19 == &v107 )
    {
      v62 = v21 + 1;
      if ( (unsigned int)(v21 + 1) >= 8 )
      {
        v18[2] = v107;
        *(_QWORD *)((char *)v20 + v62 - 8) = *(__int64 *)((char *)&v106 + v62);
        v63 = (unsigned __int64)(v18 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v64 = (char *)v20 - v63;
        v65 = (char *)((char *)&v107 - v64);
        v66 = ((_DWORD)v64 + v62) & 0xFFFFFFF8;
        if ( v66 >= 8 )
        {
          v67 = v66 & 0xFFFFFFF8;
          v68 = 0;
          do
          {
            v69 = v68;
            v68 += 8;
            *(_QWORD *)(v63 + v69) = *(_QWORD *)&v65[v69];
          }
          while ( v68 < v67 );
        }
      }
      else if ( (v62 & 4) != 0 )
      {
        *((_DWORD *)v18 + 4) = v107;
        *(_DWORD *)((char *)v20 + v62 - 4) = *(_DWORD *)((char *)&v106 + v62 + 4);
      }
      else if ( (_DWORD)v21 != -1 )
      {
        *((_BYTE *)v18 + 16) = v107;
        if ( (v62 & 2) != 0 )
          *(_WORD *)((char *)v20 + v62 - 2) = *(_WORD *)((char *)&v106 + v62 + 6);
      }
    }
    else
    {
      *v18 = v19;
      v18[2] = v107;
    }
    v18[1] = v21;
    v105 = &v107;
    LOBYTE(v107) = 0;
    v106 = 0;
    v95 = (void **)&v110;
    v113 = (unsigned __int64)v18;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v118,
      (const __m128i *)&v110,
      2,
      1);
    v119 = 0;
    LOBYTE(v114) = 0;
    *(_QWORD *)&v115 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v114) = 3;
    v22 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v22, "action", v23, v24, v25, v26, v80, v87, v93.m128i_i64[0]);
    v116 = 0;
    v115 = (unsigned __int64)v22;
    v117.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v116 = 3;
    v27 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v27, "cleared", v28, v29, v30, v31, v81, v88, (__int64)v27);
    v117 = _mm_loadl_epi64(&v93);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v120,
      (const __m128i *)&v114,
      2,
      1);
    v121 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v89,
      &v118,
      2,
      1);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v105 != &v107 )
      operator delete(v105, v107 + 1);
  }
  return v89;
}

