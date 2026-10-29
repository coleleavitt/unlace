__int64 __fastcall ida_mcp::tools::demangling::`anonymous namespace'::handle_demangle_name_long(_QWORD *a1, __int64 a2)
{
  void *exception; // r12
  const char *v3; // rbx
  void *v4; // r13
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r13
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  _BYTE *v17; // rbp
  unsigned __int64 v18; // r12
  _QWORD *v19; // rax
  _BYTE *v20; // rdi
  __int64 *v21; // rbx
  __m128i v22; // xmm0
  size_t v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i si128; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rbx
  __int64 v38; // rax
  _BYTE *v39; // rbp
  unsigned __int64 v40; // r12
  _QWORD *v41; // rax
  _BYTE *v42; // rdi
  __int64 *v43; // rbx
  __m128i v44; // xmm0
  size_t v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  const char *v48; // r13
  __int64 *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v65; // [rsp+B8h] [rbp-1A8h]
  _QWORD *v66; // [rsp+B8h] [rbp-1A8h]
  __int64 v67; // [rsp+C0h] [rbp-1A0h]
  int v68; // [rsp+C8h] [rbp-198h]
  __m128i v69; // [rsp+D8h] [rbp-188h] BYREF
  __int128 *v70; // [rsp+E8h] [rbp-178h]
  char *v71; // [rsp+F0h] [rbp-170h]
  __int64 v72; // [rsp+F8h] [rbp-168h]
  __int64 v73; // [rsp+100h] [rbp-160h]
  char *v74; // [rsp+108h] [rbp-158h]
  __int128 v75; // [rsp+110h] [rbp-150h]
  int v76; // [rsp+120h] [rbp-140h]
  void *src; // [rsp+128h] [rbp-138h] BYREF
  unsigned __int64 v78; // [rsp+130h] [rbp-130h]
  _QWORD v79[2]; // [rsp+138h] [rbp-128h] BYREF
  char v80; // [rsp+148h] [rbp-118h] BYREF
  __int128 v81; // [rsp+150h] [rbp-110h] BYREF
  char v82; // [rsp+160h] [rbp-100h]
  __m128i v83; // [rsp+168h] [rbp-F8h] BYREF
  char v84; // [rsp+178h] [rbp-E8h] BYREF
  __int128 v85; // [rsp+180h] [rbp-E0h]
  __int64 v86; // [rsp+190h] [rbp-D0h]
  __int128 v87; // [rsp+198h] [rbp-C8h] BYREF
  char *v88; // [rsp+1A8h] [rbp-B8h] BYREF
  __int128 s2; // [rsp+1B0h] [rbp-B0h] BYREF
  char v90[8]; // [rsp+1C0h] [rbp-A0h] BYREF
  __int128 v91; // [rsp+1C8h] [rbp-98h]
  _QWORD v92[2]; // [rsp+1D8h] [rbp-88h] BYREF
  __int64 v93; // [rsp+1E8h] [rbp-78h] BYREF
  _QWORD v94[2]; // [rsp+1F0h] [rbp-70h] BYREF
  __int64 v95; // [rsp+200h] [rbp-60h]
  _QWORD v96[2]; // [rsp+208h] [rbp-58h] BYREF
  __int64 v97; // [rsp+218h] [rbp-48h]
  _QWORD v98[8]; // [rsp+220h] [rbp-40h] BYREF

  v98[0] = __readfsqword(0x28u);
  *((_QWORD *)&s2 + 1) = 0x5F64656C676E616DLL;
  strcpy(v90, "name");
  *(_QWORD *)&s2 = 12;
  v88 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = __cxa_allocate_exception(0x20u);
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
    LOBYTE(v93) = 0;
    v92[0] = &v93;
    v92[1] = 0;
    strlen(v3);
    std::string::reserve();
    std::string::append((__int64)v92, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)v92, v3);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(v6 + 16);
  v8 = v6 + 8;
  if ( v7 )
  {
    v9 = v6 + 8;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v7 + 40);
        if ( !v12 )
          break;
        v10 = 12;
        if ( v12 <= 0xC )
          v10 = *(_QWORD *)(v7 + 40);
        v11 = memcmp(*(const void **)(v7 + 32), (char *)&s2 + 8, v10);
        if ( v11 || (v11 = v12 - 12, (__int64)(v12 - 12) <= 0x7FFFFFFF) )
        {
          if ( v11 < 0 )
            break;
        }
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_12;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v7 );
LABEL_12:
    if ( v8 != v9 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      if ( v13 )
      {
        v14 = 12;
        if ( v13 <= 0xC )
          v14 = *(_QWORD *)(v9 + 40);
        v15 = memcmp((char *)&s2 + 8, *(const void **)(v9 + 32), v14);
        if ( v15 || (v15 = 12 - v13, (__int64)(12 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v15 >= 0 )
            v8 = v9;
        }
      }
      else
      {
        v8 = v9;
      }
    }
  }
  v78 = 0;
  src = v79;
  LOBYTE(v79[0]) = 0;
  if ( *(_BYTE *)(v8 + 64) != 3 )
  {
    v4 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v8 + 64) )
    {
      case 0:
        v5 = "null";
        break;
      case 1:
        v5 = "object";
        break;
      case 2:
        v5 = (char *)"array";
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
    v74 = v5;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v4,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v75 = 0;
  v74 = nullptr;
  if ( (int)demangle_name() <= 0 || (unsigned __int64)v75 <= 1 )
  {
    v80 = 0;
    *(_QWORD *)&v81 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v80 = 3;
    v16 = operator new(0x20u);
    *(_QWORD *)v16 = v16 + 16;
    strcpy((char *)(v16 + 16), "mangled_name");
    *(_QWORD *)(v16 + 8) = 12;
    v82 = 0;
    v83.m128i_i64[0] = 0;
    v81 = (unsigned __int64)v16;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v17 = src;
    v18 = v78;
    v82 = 3;
    v19 = (_QWORD *)operator new(0x20u);
    v20 = v19 + 2;
    v73 = v78;
    v21 = v19;
    *v19 = v19 + 2;
    if ( v18 > 0xF )
    {
      v60 = std::string::_M_create();
      *v21 = v60;
      v20 = (_BYTE *)v60;
      v61 = v73;
      v22 = (__m128i)(unsigned __int64)v21;
      v21[2] = v73;
      v23 = v61 + 1;
      if ( v61 )
      {
        v24 = -1;
        if ( v23 )
          goto LABEL_25;
LABEL_26:
        v21[1] = v24;
        v69.m128i_i64[0] = (__int64)&v80;
        v83 = v22;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v92,
          (const __m128i *)&v80);
        v93 = 0;
        v84 = 0;
        *(_QWORD *)&v85 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v84 = 3;
        v25 = operator new(0x20u);
        strcpy((char *)(v25 + 16), "demangled_name");
        *(_QWORD *)v25 = v25 + 16;
        *(_QWORD *)(v25 + 8) = 14;
        v85 = (unsigned __int64)v25;
        v86 = 0;
        v87 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v94,
          (const __m128i *)&v84);
        v95 = 0;
        LOBYTE(v88) = 0;
        *(_QWORD *)&s2 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v88) = 3;
        v26 = operator new(0x20u);
        *(_DWORD *)(v26 + 16) = 1869771365;
        *(_QWORD *)v26 = v26 + 16;
        *(_BYTE *)(v26 + 20) = 114;
        *(_QWORD *)(v26 + 8) = 5;
        *(_BYTE *)(v26 + 21) = 0;
        v90[0] = 0;
        *(_QWORD *)&v91 = 0;
        s2 = (unsigned __int64)v26;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v90[0] = 3;
        v27 = (__int64 *)operator new(0x20u);
        *v27 = (__int64)(v27 + 2);
        v73 = 23;
        v28 = std::string::_M_create();
        v29 = v73;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3E21B0);
        *v27 = v28;
        v27[2] = v29;
        *(__m128i *)v28 = si128;
        *(_QWORD *)(v28 + 15) = 0x656D616E20656C67LL;
        v31 = *v27;
        v32 = v73;
        v27[1] = v73;
        *(_BYTE *)(v31 + v32) = 0;
        v91 = (unsigned __int64)v27;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v96,
          (const __m128i *)&v88);
        v97 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          a1,
          (__int64)v92,
          3,
          v33,
          v34,
          v35,
          (int)a1,
          (__int64)&v81,
          (int)&v83,
          (int)&src,
          v69.m128i_i32[0],
          v69.m128i_i32[2],
          (__int64)v70,
          (int)v71,
          v72,
          v73,
          (int)v74,
          v75,
          *((__int64 *)&v75 + 1),
          v76,
          (__int64)src);
        v36 = v98;
        do
        {
          v36 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v36 != v92 );
        goto LABEL_28;
      }
    }
    else
    {
      v22 = (__m128i)(unsigned __int64)v19;
      v23 = v18 + 1;
      if ( v18 )
      {
LABEL_25:
        v69 = v22;
        memcpy(v20, v17, v23);
        v24 = v73;
        v22 = _mm_load_si128(&v69);
        goto LABEL_26;
      }
    }
    *v20 = *v17;
    v24 = v73;
    goto LABEL_26;
  }
  v80 = 0;
  *(_QWORD *)&v81 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "mangled_name");
  *(_QWORD *)(v38 + 8) = 12;
  v82 = 0;
  v83.m128i_i64[0] = 0;
  v81 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v39 = src;
  v40 = v78;
  v82 = 3;
  v41 = (_QWORD *)operator new(0x20u);
  v42 = v41 + 2;
  v72 = v78;
  v43 = v41;
  *v41 = v41 + 2;
  if ( v40 > 0xF )
  {
    v62 = std::string::_M_create();
    *v43 = v62;
    v42 = (_BYTE *)v62;
    v63 = v72;
    v44 = (__m128i)(unsigned __int64)v43;
    v43[2] = v72;
    v45 = v63 + 1;
    if ( v63 )
    {
      v46 = -1;
      if ( !v45 )
        goto LABEL_36;
      goto LABEL_35;
    }
LABEL_46:
    *v42 = *v39;
    v46 = v72;
    goto LABEL_36;
  }
  v44 = (__m128i)(unsigned __int64)v41;
  v45 = v40 + 1;
  if ( !v40 )
    goto LABEL_46;
LABEL_35:
  v69 = v44;
  memcpy(v42, v39, v45);
  v46 = v72;
  v44 = _mm_load_si128(&v69);
LABEL_36:
  v43[1] = v46;
  v69.m128i_i64[0] = (__int64)&v80;
  v83 = v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v92,
    (const __m128i *)&v80);
  v93 = 0;
  v84 = 0;
  *(_QWORD *)&v85 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = 3;
  v47 = operator new(0x20u);
  strcpy((char *)(v47 + 16), "demangled_name");
  *(_QWORD *)v47 = v47 + 16;
  *(_QWORD *)(v47 + 8) = 14;
  v85 = (unsigned __int64)v47;
  if ( (_QWORD)v75 )
    v48 = v74;
  else
    v48 = _qstring<char>::c_str(void)const::nullstr;
  LOBYTE(v86) = 0;
  v70 = &v87;
  *(_QWORD *)&v87 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v86) = 3;
  v49 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v49, v48, v50, v51, v52, v53, (int)a1, (int)&v81, (__int64)&v83);
  v71 = &v84;
  v87 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v94,
    (const __m128i *)&v84);
  v95 = 0;
  LOBYTE(v88) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v88) = 3;
  v54 = operator new(0x20u);
  *(_QWORD *)v54 = v54 + 16;
  strcpy((char *)(v54 + 16), "form");
  *(_QWORD *)(v54 + 8) = 4;
  v90[0] = 0;
  *(_QWORD *)&v91 = 0;
  s2 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v90[0] = 3;
  v55 = operator new(0x20u);
  strcpy((char *)(v55 + 16), "long");
  *(_QWORD *)v55 = v55 + 16;
  *(_QWORD *)(v55 + 8) = 4;
  v91 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    (const __m128i *)&v88);
  v97 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v66,
    (__int64)v92,
    3,
    v56,
    v57,
    v58,
    (int)v66,
    v67,
    v68,
    (int)&src,
    v69.m128i_i32[0],
    v69.m128i_i32[2],
    (__int64)v70,
    (int)v71,
    v72,
    v73,
    (int)v74,
    v75,
    *((__int64 *)&v75 + 1),
    v76,
    (__int64)src);
  v59 = v98;
  do
  {
    v59 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v59 != v92 );
LABEL_28:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  if ( src != v79 )
    operator delete(src, v79[0] + 1LL);
  return v65;
}

