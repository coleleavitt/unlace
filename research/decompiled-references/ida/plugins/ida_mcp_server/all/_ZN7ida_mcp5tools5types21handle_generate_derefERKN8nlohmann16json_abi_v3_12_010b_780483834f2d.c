__int64 __fastcall ida_mcp::tools::types::handle_generate_deref(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // r12
  const char *v5; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v6; // r13
  char *v7; // rax
  __int8 *v8; // rbx
  __int8 v9; // r13
  char *v10; // rbx
  int *v11; // rax
  int *v12; // r14
  std::runtime_error *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rbp
  size_t v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  size_t v22; // rdx
  int v23; // ecx
  __int64 v24; // rbx
  __int64 *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rsi
  __int64 *v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char *v43; // r14
  __int64 *v44; // rax
  __int64 *v45; // rbp
  size_t v46; // rax
  void *v47; // rcx
  size_t v48; // r8
  __m128i v49; // xmm0
  __int64 *v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  char *v63; // rbp
  __int64 v65; // rax
  unsigned int v66; // edx
  unsigned __int64 v67; // rdi
  char *v68; // rcx
  char *v69; // r8
  unsigned int v70; // edx
  unsigned int v71; // edx
  unsigned int v72; // ecx
  __int64 v73; // r9
  int v74; // [rsp+C0h] [rbp-238h]
  int v75; // [rsp+C0h] [rbp-238h]
  int v76; // [rsp+C0h] [rbp-238h]
  int v77; // [rsp+C0h] [rbp-238h]
  const __m128i *v78; // [rsp+C0h] [rbp-238h]
  __int64 v79; // [rsp+C8h] [rbp-230h]
  int v80; // [rsp+C8h] [rbp-230h]
  int v81; // [rsp+C8h] [rbp-230h]
  int v82; // [rsp+C8h] [rbp-230h]
  __int64 v83; // [rsp+C8h] [rbp-230h]
  __int64 v84; // [rsp+D0h] [rbp-228h]
  __int64 v85; // [rsp+D0h] [rbp-228h]
  __int64 v86; // [rsp+D0h] [rbp-228h]
  __int64 v87; // [rsp+D0h] [rbp-228h]
  _QWORD *v88; // [rsp+D0h] [rbp-228h]
  __int64 v89; // [rsp+D0h] [rbp-228h]
  int v90; // [rsp+E8h] [rbp-210h]
  int deref_color; // [rsp+ECh] [rbp-20Ch]
  void *dest; // [rsp+F0h] [rbp-208h]
  void *desta; // [rsp+F0h] [rbp-208h]
  __int64 *v94; // [rsp+108h] [rbp-1F0h]
  int v95; // [rsp+110h] [rbp-1E8h]
  size_t v96; // [rsp+118h] [rbp-1E0h]
  __m128i v97; // [rsp+120h] [rbp-1D8h] BYREF
  char *s; // [rsp+130h] [rbp-1C8h]
  __int128 v99; // [rsp+138h] [rbp-1C0h]
  void *v100; // [rsp+150h] [rbp-1A8h] BYREF
  __int64 v101; // [rsp+158h] [rbp-1A0h]
  _QWORD v102[2]; // [rsp+160h] [rbp-198h] BYREF
  char v103; // [rsp+170h] [rbp-188h] BYREF
  __int128 v104; // [rsp+178h] [rbp-180h] BYREF
  char v105; // [rsp+188h] [rbp-170h]
  __int128 v106; // [rsp+190h] [rbp-168h] BYREF
  char v107; // [rsp+1A0h] [rbp-158h] BYREF
  _OWORD v108[2]; // [rsp+1A8h] [rbp-150h] BYREF
  __int64 v109; // [rsp+1C8h] [rbp-130h]
  char v110; // [rsp+1D0h] [rbp-128h] BYREF
  __int128 v111; // [rsp+1D8h] [rbp-120h]
  char v112; // [rsp+1E8h] [rbp-110h]
  __int64 v113; // [rsp+1F0h] [rbp-108h]
  __int64 v114; // [rsp+1F8h] [rbp-100h]
  void *v115; // [rsp+200h] [rbp-F8h] BYREF
  __int128 v116; // [rsp+208h] [rbp-F0h] BYREF
  char v117; // [rsp+218h] [rbp-E0h]
  _BOOL8 v118; // [rsp+220h] [rbp-D8h]
  __int64 v119; // [rsp+228h] [rbp-D0h]
  _QWORD v120[2]; // [rsp+230h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+240h] [rbp-B8h] BYREF
  _QWORD v122[3]; // [rsp+248h] [rbp-B0h] BYREF
  _QWORD v123[3]; // [rsp+260h] [rbp-98h] BYREF
  _QWORD v124[3]; // [rsp+278h] [rbp-80h] BYREF
  char v125[40]; // [rsp+290h] [rbp-68h] BYREF
  unsigned __int64 v126; // [rsp+2B8h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  BYTE8(v116) = 0;
  v8 = (__int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v115 = (char *)&v116 + 8;
  v9 = *v8;
  *(_QWORD *)&v116 = 0;
  if ( v9 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v8 )
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
    s = v3;
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
  v10 = (char *)v115;
  v11 = __errno_location();
  *v11 = 0;
  v12 = v11;
  v79 = __isoc23_strtoull();
  if ( v10 == s || *s || *v12 == 34 && v79 == -1 )
  {
    if ( v115 != (char *)&v116 + 8 )
      operator delete(v115, *((_QWORD *)&v116 + 1) + 1LL);
    v13 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v13, "Invalid address");
    __cxa_throw(
      v13,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v115 != (char *)&v116 + 8 )
    operator delete(v115, *((_QWORD *)&v116 + 1) + 1LL);
  if ( *(_BYTE *)a2 != 1 )
  {
    v6 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
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
    s = v7;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v6,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(v14 + 16);
  if ( v15 )
  {
    v16 = v14 + 8;
    v17 = v14 + 8;
    do
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v15 + 40);
        if ( !v20 )
          break;
        v18 = 8;
        if ( v20 <= 8 )
          v18 = *(_QWORD *)(v15 + 40);
        v19 = memcmp(*(const void **)(v15 + 32), "detailed", v18);
        if ( v19 || (v19 = v20 - 8, (__int64)(v20 - 8) <= 0x7FFFFFFF) )
        {
          if ( v19 < 0 )
            break;
        }
        v16 = v15;
        v15 = *(_QWORD *)(v15 + 16);
        if ( !v15 )
          goto LABEL_22;
      }
      v15 = *(_QWORD *)(v15 + 24);
    }
    while ( v15 );
LABEL_22:
    if ( v17 != v16 )
    {
      v21 = *(_QWORD *)(v16 + 40);
      if ( !v21 )
        goto LABEL_48;
      v22 = 8;
      if ( v21 <= 8 )
        v22 = *(_QWORD *)(v16 + 40);
      v23 = memcmp(*(const void **)(v16 + 32), "detailed", v22);
      if ( !v23 )
      {
        v24 = v21 - 8;
        if ( v24 > 0x7FFFFFFF )
          goto LABEL_30;
        v23 = v24;
      }
      if ( v23 <= 0 )
      {
LABEL_48:
        if ( *(_BYTE *)(v16 + 64) != 4 )
        {
          v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( *(_BYTE *)(v16 + 64) )
          {
            case 0:
              v5 = "null";
              break;
            case 1:
              v5 = "object";
              break;
            case 2:
              v5 = "array";
              break;
            case 3:
              v5 = "string";
              break;
            case 4:
              v5 = "boolean";
              break;
            case 8:
              v5 = "binary";
              break;
            case 9:
              v5 = "discarded";
              break;
            default:
              v5 = "number";
              break;
          }
          LOBYTE(v121) = 0;
          v120[0] = &v121;
          v120[1] = 0;
          strlen(v5);
          std::string::reserve();
          std::string::append();
          std::string::append();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            v4,
            302);
          std::string::_M_dispose();
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
      }
    }
  }
LABEL_30:
  s = nullptr;
  v99 = 0;
  generate_deref_chain();
  deref_color = get_deref_color();
  *(_QWORD *)&v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "address", v26, v27, v28, v29, (int)&v115, v79, a1);
  v104 = (unsigned __int64)v25;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v100, v125, v30, v31, v32, v33, v74, v80, v84);
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v34 = (_QWORD *)operator new(0x20u);
  v35 = v100;
  v36 = v34 + 2;
  v37 = v101;
  *v34 = v34 + 2;
  if ( v35 == v102 )
  {
    v66 = v37 + 1;
    if ( (unsigned int)(v37 + 1) >= 8 )
    {
      v34[2] = v102[0];
      *(_QWORD *)((char *)v36 + v66 - 8) = *(_QWORD *)((char *)&v102[-1] + v66);
      v67 = (unsigned __int64)(v34 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v68 = (char *)v36 - v67;
      v69 = (char *)((char *)v102 - v68);
      v70 = ((_DWORD)v68 + v66) & 0xFFFFFFF8;
      if ( v70 >= 8 )
      {
        v71 = v70 & 0xFFFFFFF8;
        v72 = 0;
        do
        {
          v73 = v72;
          v72 += 8;
          *(_QWORD *)(v67 + v73) = *(_QWORD *)&v69[v73];
        }
        while ( v72 < v71 );
      }
    }
    else if ( (v66 & 4) != 0 )
    {
      *((_DWORD *)v34 + 4) = v102[0];
      *(_DWORD *)((char *)v36 + v66 - 4) = *(_DWORD *)((char *)&v101 + v66 + 4);
    }
    else if ( (_DWORD)v37 != -1 )
    {
      *((_BYTE *)v34 + 16) = v102[0];
      if ( (v66 & 2) != 0 )
        *(_WORD *)((char *)v36 + v66 - 2) = *(_WORD *)((char *)&v101 + v66 + 6);
    }
  }
  else
  {
    *v34 = v35;
    v34[2] = v102[0];
  }
  v34[1] = v37;
  v100 = v102;
  v101 = 0;
  LOBYTE(v102[0]) = 0;
  v106 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v120,
    (const __m128i *)&v103);
  v121 = 0;
  v107 = 0;
  *(_QWORD *)&v108[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v38 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v38, "deref_chain", v39, v40, v41, v42, v75, (int)&v106, v85);
  v108[0] = (unsigned __int64)v38;
  if ( (unsigned __int64)v99 <= 1 )
  {
    v45 = nullptr;
    v9 = 0;
    goto LABEL_39;
  }
  v43 = s;
  v97 = 0u;
  v94 = &v97.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v44 = (__int64 *)operator new(0x20u);
  v45 = v44;
  *v44 = (__int64)(v44 + 2);
  if ( !v43 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  dest = v44 + 2;
  v46 = strlen(v43);
  v47 = dest;
  v96 = v46;
  v48 = v46;
  if ( v46 > 0xF )
  {
    desta = (void *)v46;
    v65 = std::string::_M_create();
    *v45 = v65;
    v47 = (void *)v65;
    v48 = (size_t)desta;
    v45[2] = v96;
    goto LABEL_51;
  }
  if ( v46 != 1 )
  {
    if ( !v46 )
      goto LABEL_37;
LABEL_51:
    memcpy(v47, v43, v48);
    v46 = v96;
    v47 = (void *)*v45;
    goto LABEL_37;
  }
  *((_BYTE *)v45 + 16) = *v43;
LABEL_37:
  v45[1] = v46;
  *((_BYTE *)v47 + v46) = 0;
LABEL_39:
  v97.m128i_i8[0] = v9;
  v97.m128i_i64[1] = (__int64)v45;
  v49 = _mm_load_si128(&v97);
  v109 = 0;
  v108[1] = v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v122,
    (const __m128i *)&v107);
  v122[2] = 0;
  v110 = 0;
  *(_QWORD *)&v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "color_index", v51, v52, v53, v54, v76, v81, v86);
  v112 = 5;
  v113 = deref_color;
  v114 = 0;
  v111 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v123,
    (const __m128i *)&v110);
  v123[2] = 0;
  LOBYTE(v115) = 0;
  *(_QWORD *)&v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v115) = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v55, "has_chain", v56, v57, v58, v59, v77, v82, v87);
  v117 = 4;
  v119 = 0;
  v116 = (unsigned __int64)v55;
  v118 = (unsigned __int64)v99 > 1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v124,
    v78);
  v124[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v88,
    (__int64)v120,
    4,
    v60,
    v61,
    v62,
    (int)v78,
    v83,
    (int)v88,
    (int)&v104,
    (int)v108,
    v90,
    (__int64)&v107,
    (int)&v103,
    (int)&v100,
    (int)v94,
    v95,
    v96,
    v97.m128i_i64[0],
    v97.m128i_i32[2],
    (__int64)s);
  v63 = v125;
  do
  {
    v63 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v63 != (char *)v120 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v100 != v102 )
    operator delete(v100, v102[0] + 1LL);
  if ( s )
  {
    *(_QWORD *)&v99 = 0;
    qfree();
  }
  return v89;
}

