__int64 __fastcall ida_mcp::tools::demangling::`anonymous namespace'::handle_can_demangle(_QWORD *a1, __int64 a2)
{
  void *exception; // r12
  const char *v3; // rbx
  void *v4; // r12
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r12
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  size_t v14; // rdx
  int v15; // eax
  __int8 v16; // r12
  bool v17; // r15
  __int64 v18; // rax
  _BYTE *v19; // rbp
  unsigned __int64 v20; // r13
  _QWORD *v21; // rax
  _BYTE *v22; // rdi
  __int64 *v23; // rbx
  __m128i v24; // xmm0
  size_t v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i si128; // xmm0
  __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // r15
  __int64 *v35; // rax
  __int64 *v36; // rbx
  char *v37; // rax
  __int64 v38; // rcx
  void *v39; // r8
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 *v44; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // [rsp+0h] [rbp-1C8h]
  __int64 v51; // [rsp+8h] [rbp-1C0h]
  __m128i v52; // [rsp+20h] [rbp-1A8h] BYREF
  __m128i *v53; // [rsp+30h] [rbp-198h]
  void *dest; // [rsp+38h] [rbp-190h]
  char *v55; // [rsp+40h] [rbp-188h]
  __int64 *v56; // [rsp+48h] [rbp-180h]
  int v57; // [rsp+50h] [rbp-178h]
  char *v58; // [rsp+58h] [rbp-170h]
  __m128i v59; // [rsp+60h] [rbp-168h] BYREF
  char *s; // [rsp+70h] [rbp-158h]
  __int128 v61; // [rsp+78h] [rbp-150h]
  void *src; // [rsp+90h] [rbp-138h] BYREF
  __int64 v63; // [rsp+98h] [rbp-130h]
  _QWORD v64[2]; // [rsp+A0h] [rbp-128h] BYREF
  char v65; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-110h] BYREF
  char v67; // [rsp+C8h] [rbp-100h]
  __m128i v68; // [rsp+D0h] [rbp-F8h] BYREF
  char v69; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v70; // [rsp+E8h] [rbp-E0h] BYREF
  char v71; // [rsp+F8h] [rbp-D0h]
  _BOOL8 v72; // [rsp+100h] [rbp-C8h]
  __int64 v73; // [rsp+108h] [rbp-C0h]
  char *v74; // [rsp+110h] [rbp-B8h] BYREF
  _OWORD s2[2]; // [rsp+118h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+138h] [rbp-90h]
  _QWORD v77[2]; // [rsp+140h] [rbp-88h] BYREF
  __int64 v78; // [rsp+150h] [rbp-78h] BYREF
  _QWORD v79[3]; // [rsp+158h] [rbp-70h] BYREF
  _QWORD v80[3]; // [rsp+170h] [rbp-58h] BYREF
  unsigned __int64 v81; // [rsp+188h] [rbp-40h] BYREF

  v81 = __readfsqword(0x28u);
  BYTE12(s2[0]) = 0;
  DWORD2(s2[0]) = 1701667182;
  *(_QWORD *)&s2[0] = 4;
  v74 = (char *)s2 + 8;
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
    LOBYTE(v78) = 0;
    v77[0] = &v78;
    v77[1] = 0;
    strlen(v3);
    std::string::reserve();
    std::string::append((__int64)v77, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)v77, v3);
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
        v10 = 4;
        if ( v12 <= 4 )
          v10 = *(_QWORD *)(v7 + 40);
        v11 = memcmp(*(const void **)(v7 + 32), (char *)s2 + 8, v10);
        if ( v11 || (v11 = v12 - 4, (__int64)(v12 - 4) <= 0x7FFFFFFF) )
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
        v14 = 4;
        if ( v13 <= 4 )
          v14 = *(_QWORD *)(v9 + 40);
        v15 = memcmp((char *)s2 + 8, *(const void **)(v9 + 32), v14);
        if ( v15 || (v15 = 4 - v13, (__int64)(4 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
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
  v16 = *(_BYTE *)(v8 + 64);
  v63 = 0;
  src = v64;
  LOBYTE(v64[0]) = 0;
  if ( v16 != 3 )
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
    s = v5;
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
  v61 = 0;
  s = nullptr;
  v17 = 0;
  if ( (int)demangle_name() > 0 )
    v17 = (unsigned __int64)v61 > 1;
  v65 = 0;
  *(_QWORD *)&v66 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "name");
  *(_QWORD *)(v18 + 8) = 4;
  v67 = 0;
  v68.m128i_i64[0] = 0;
  v53 = &v68;
  v66 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v67 = 3;
  v19 = src;
  v20 = v63;
  v21 = (_QWORD *)operator new(0x20u);
  v22 = v21 + 2;
  v59.m128i_i64[0] = v63;
  v23 = v21;
  *v21 = v21 + 2;
  if ( v20 <= 0xF )
  {
    v24 = (__m128i)(unsigned __int64)v21;
    v25 = v20 + 1;
    if ( v20 )
    {
LABEL_25:
      v52 = v24;
      memcpy(v22, v19, v25);
      v26 = v59.m128i_i64[0];
      v24 = _mm_load_si128(&v52);
      goto LABEL_26;
    }
    goto LABEL_42;
  }
  v46 = std::string::_M_create();
  *v23 = v46;
  v22 = (_BYTE *)v46;
  v47 = v59.m128i_i64[0];
  v24 = (__m128i)(unsigned __int64)v23;
  v23[2] = v59.m128i_i64[0];
  v25 = v47 + 1;
  if ( !v47 )
  {
LABEL_42:
    *v22 = *v19;
    v26 = v59.m128i_i64[0];
    goto LABEL_26;
  }
  v26 = -1;
  if ( v25 )
    goto LABEL_25;
LABEL_26:
  v23[1] = v26;
  v55 = &v65;
  v68 = v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v77,
    (const __m128i *)&v65);
  v78 = 0;
  v69 = 0;
  *(_QWORD *)&v70 = 0;
  v52.m128i_i64[0] = (__int64)&v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "can_demangle");
  *(_QWORD *)(v27 + 8) = 12;
  v71 = 4;
  v72 = v17;
  v73 = 0;
  v70 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v79,
    (const __m128i *)&v69);
  v79[2] = 0;
  LOBYTE(v74) = 0;
  *(_QWORD *)&s2[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v74) = 3;
  v28 = (__int64 *)operator new(0x20u);
  *v28 = (__int64)(v28 + 2);
  v59.m128i_i64[0] = 17;
  v29 = std::string::_M_create();
  v30 = v59.m128i_i64[0];
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2210);
  *v28 = v29;
  v28[2] = v30;
  *(__m128i *)v29 = si128;
  *(_BYTE *)(v29 + 16) = 119;
  v32 = v59.m128i_i64[0];
  v33 = *v28;
  v28[1] = v59.m128i_i64[0];
  *(_BYTE *)(v33 + v32) = 0;
  s2[0] = (unsigned __int64)v28;
  if ( !v17 )
  {
    v36 = nullptr;
    v16 = 0;
    goto LABEL_34;
  }
  v34 = s;
  if ( !(_QWORD)v61 )
    v34 = _qstring<char>::c_str(void)const::nullstr;
  v59 = 0u;
  v56 = &v59.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v35 = (__int64 *)operator new(0x20u);
  v36 = v35;
  *v35 = (__int64)(v35 + 2);
  if ( !v34 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  dest = v35 + 2;
  v37 = (char *)strlen(v34);
  v38 = (__int64)dest;
  v58 = v37;
  v39 = v37;
  if ( (unsigned __int64)v37 > 0xF )
  {
    dest = v37;
    v48 = std::string::_M_create();
    *v36 = v48;
    v38 = v48;
    v39 = dest;
    v36[2] = (__int64)v58;
    goto LABEL_49;
  }
  if ( v37 == (_BYTE *)&dword_0 + 1 )
  {
    *((_BYTE *)v36 + 16) = *v34;
    goto LABEL_33;
  }
  if ( v37 )
  {
LABEL_49:
    memcpy((void *)v38, v34, (size_t)v39);
    v37 = v58;
    v38 = *v36;
  }
LABEL_33:
  v36[1] = (__int64)v37;
  v37[v38] = 0;
LABEL_34:
  v59.m128i_i64[1] = (__int64)v36;
  v59.m128i_i8[0] = v16;
  v40 = _mm_load_si128(&v59);
  v76 = 0;
  s2[1] = v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v80,
    (const __m128i *)&v74);
  v80[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v77,
    3,
    v41,
    v42,
    v43,
    v49,
    (__int64)a1,
    (int)&src,
    (int)&v66,
    v52.m128i_i32[0],
    v52.m128i_i32[2],
    (__int64)v53,
    (int)dest,
    (int)v55,
    (int)v56,
    v57,
    (char)v58,
    v59.m128i_i64[0],
    v59.m128i_i32[2],
    (__int64)s);
  v44 = &v81;
  do
  {
    v44 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v44 != v77 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( s )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  if ( src != v64 )
    operator delete(src, v64[0] + 1LL);
  return v51;
}

