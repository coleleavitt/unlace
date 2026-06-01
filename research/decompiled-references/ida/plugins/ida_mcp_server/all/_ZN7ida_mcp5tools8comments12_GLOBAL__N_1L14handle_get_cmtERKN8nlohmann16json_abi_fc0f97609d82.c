_QWORD *__fastcall ida_mcp::tools::comments::`anonymous namespace'::handle_get_cmt(_QWORD *a1, __int64 a2)
{
  void *exception; // r12
  const char *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // r14
  size_t v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbp
  size_t v12; // rdx
  int v13; // eax
  char v14; // r14
  void *v15; // rbp
  int *v16; // rax
  __int64 v17; // r15
  std::runtime_error *v18; // rbx
  unsigned __int8 v19; // bp
  __int64 v20; // rax
  size_t v21; // rax
  unsigned int v22; // r12d
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  size_t v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // r12
  size_t v31; // rax
  void *v32; // rcx
  size_t v33; // r8
  __m128i si128; // xmm0
  __int64 v35; // rax
  __m128i *v36; // rbp
  _QWORD *v38; // rax
  unsigned __int64 v39; // rdx
  char *v40; // rax
  char *v41; // rbx
  unsigned int v42; // r12d
  unsigned int v43; // r12d
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // edi
  unsigned __int64 v48; // r8
  char *v49; // rcx
  char *v50; // r9
  unsigned int v51; // edx
  unsigned int v52; // ecx
  __int64 v53; // rdi
  char *v55; // [rsp+18h] [rbp-1E0h]
  char *v56; // [rsp+18h] [rbp-1E0h]
  void *dest; // [rsp+38h] [rbp-1C0h]
  void *desta; // [rsp+38h] [rbp-1C0h]
  size_t v59; // [rsp+58h] [rbp-1A0h]
  char v60[16]; // [rsp+60h] [rbp-198h] BYREF
  int v61[2]; // [rsp+70h] [rbp-188h]
  __int128 v62; // [rsp+78h] [rbp-180h]
  void *v63; // [rsp+90h] [rbp-168h]
  size_t v64; // [rsp+98h] [rbp-160h]
  _QWORD v65[2]; // [rsp+A0h] [rbp-158h] BYREF
  int v66; // [rsp+B0h] [rbp-148h] BYREF
  int v67[4]; // [rsp+B8h] [rbp-140h]
  char v68; // [rsp+C8h] [rbp-130h]
  int v69[4]; // [rsp+D0h] [rbp-128h]
  char v70; // [rsp+E0h] [rbp-118h] BYREF
  __int128 v71; // [rsp+E8h] [rbp-110h]
  __m128i v72; // [rsp+F8h] [rbp-100h]
  __int64 v73; // [rsp+108h] [rbp-F0h]
  void *v74; // [rsp+110h] [rbp-E8h] BYREF
  __int128 s2; // [rsp+118h] [rbp-E0h] BYREF
  char v76; // [rsp+128h] [rbp-D0h]
  __int64 v77; // [rsp+130h] [rbp-C8h]
  __int64 v78; // [rsp+138h] [rbp-C0h]
  __m128i v79; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+150h] [rbp-A8h] BYREF
  _QWORD v81[3]; // [rsp+158h] [rbp-A0h] BYREF
  _QWORD v82[3]; // [rsp+170h] [rbp-88h] BYREF
  char v83[8]; // [rsp+188h] [rbp-70h] BYREF
  char s[40]; // [rsp+190h] [rbp-68h] BYREF
  unsigned __int64 v85; // [rsp+1B8h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v74 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x7ED68);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 16);
  v6 = v4 + 8;
  if ( v5 )
  {
    v7 = v4 + 8;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v5 + 40);
        if ( !v10 )
          break;
        v8 = 7;
        if ( v10 <= 7 )
          v8 = *(_QWORD *)(v5 + 40);
        v9 = memcmp(*(const void **)(v5 + 32), (char *)&s2 + 8, v8);
        if ( v9 || (v9 = v10 - 7, (__int64)(v10 - 7) <= 0x7FFFFFFF) )
        {
          if ( v9 < 0 )
            break;
        }
        v7 = v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v5 )
          goto LABEL_12;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v5 );
LABEL_12:
    if ( v6 != v7 )
    {
      v11 = *(_QWORD *)(v7 + 40);
      if ( v11 )
      {
        v12 = 7;
        if ( v11 <= 7 )
          v12 = *(_QWORD *)(v7 + 40);
        v13 = memcmp((char *)&s2 + 8, *(const void **)(v7 + 32), v12);
        if ( v13 || (v13 = 7 - v11, (__int64)(7 - v11) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v13 >= 0 )
            v6 = v7;
        }
      }
      else
      {
        v6 = v7;
      }
    }
  }
  BYTE8(s2) = 0;
  v14 = *(_BYTE *)(v6 + 64);
  v74 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  if ( v14 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v6 + 64) )
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
    LOBYTE(v80) = 0;
    v79.m128i_i64[0] = (__int64)&v80;
    v79.m128i_i64[1] = 0;
    strlen(v3);
    std::string::reserve();
    std::string::append();
    std::string::append();
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
  v15 = v74;
  v16 = __errno_location();
  *v16 = 0;
  v55 = (char *)v16;
  v17 = __isoc23_strtoull();
  if ( v15 == *(void **)v61 || **(_BYTE **)v61 || *(_DWORD *)v55 == 34 && v17 == -1 )
  {
    if ( v74 != (char *)&s2 + 8 )
      operator delete(v74, *((_QWORD *)&s2 + 1) + 1LL);
    v18 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v18, "Invalid address format");
    __cxa_throw(
      v18,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v74 != (char *)&s2 + 8 )
    operator delete(v74, *((_QWORD *)&s2 + 1) + 1LL);
  v62 = 0;
  *(_QWORD *)v61 = 0;
  v19 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[11],bool,0>();
  get_cmt();
  *(_QWORD *)v67 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v66) = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "address");
  *(_QWORD *)(v20 + 8) = 7;
  *(_OWORD *)v67 = (unsigned __int64)v20;
  qsnprintf();
  v63 = v65;
  v21 = strlen(s);
  *(_QWORD *)v60 = v21;
  v22 = v21;
  if ( v21 > 0xF )
  {
    v38 = (_QWORD *)std::string::_M_create();
    v63 = v38;
    v65[0] = *(_QWORD *)v60;
  }
  else
  {
    if ( v21 == 1 )
    {
      LOBYTE(v65[0]) = s[0];
      goto LABEL_33;
    }
    if ( !v21 )
    {
LABEL_33:
      v23 = v65;
      goto LABEL_34;
    }
    v38 = v65;
  }
  if ( v22 >= 8 )
  {
    *v38 = *(_QWORD *)s;
    *(_QWORD *)((char *)v38 + v22 - 8) = *(_QWORD *)&v83[v22];
    v39 = (unsigned __int64)(v38 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v40 = (char *)v38 - v39;
    v41 = (char *)(s - v40);
    v42 = ((_DWORD)v40 + v22) & 0xFFFFFFF8;
    if ( v42 >= 8 )
    {
      v43 = v42 & 0xFFFFFFF8;
      v44 = 0;
      do
      {
        v45 = v44;
        v44 += 8;
        *(_QWORD *)(v39 + v45) = *(_QWORD *)&v41[v45];
      }
      while ( v44 < v43 );
    }
  }
  else if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)v38 = *(_DWORD *)s;
    *(_DWORD *)((char *)v38 + v22 - 4) = *(_DWORD *)&v83[v22 + 4];
  }
  else if ( v22 )
  {
    *(_BYTE *)v38 = s[0];
    if ( (v22 & 2) != 0 )
      *(_WORD *)((char *)v38 + v22 - 2) = *(_WORD *)&v83[v22 + 6];
  }
  v21 = *(_QWORD *)v60;
  v23 = v63;
LABEL_34:
  v64 = v21;
  *((_BYTE *)v23 + v21) = 0;
  v68 = 0;
  *(_QWORD *)v69 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v68 = 3;
  v24 = (_QWORD *)operator new(0x20u);
  v25 = v63;
  v26 = v24 + 2;
  v27 = v64;
  *v24 = v24 + 2;
  if ( v25 == v65 )
  {
    v47 = v27 + 1;
    if ( (unsigned int)(v27 + 1) >= 8 )
    {
      v24[2] = v65[0];
      *(_QWORD *)((char *)v26 + v47 - 8) = *(_QWORD *)((char *)&v65[-1] + v47);
      v48 = (unsigned __int64)(v24 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v49 = (char *)v26 - v48;
      v50 = (char *)((char *)v65 - v49);
      if ( (((_DWORD)v49 + v47) & 0xFFFFFFF8) >= 8 )
      {
        v51 = ((_DWORD)v49 + v47) & 0xFFFFFFF8;
        v52 = 0;
        do
        {
          v53 = v52;
          v52 += 8;
          *(_QWORD *)(v48 + v53) = *(_QWORD *)&v50[v53];
        }
        while ( v52 < v51 );
      }
    }
    else if ( (v47 & 4) != 0 )
    {
      *((_DWORD *)v24 + 4) = v65[0];
      *(_DWORD *)((char *)v26 + v47 - 4) = *(_DWORD *)((char *)&v64 + v47 + 4);
    }
    else if ( (_DWORD)v27 != -1 )
    {
      *((_BYTE *)v24 + 16) = v65[0];
      if ( (v47 & 2) != 0 )
        *(_WORD *)((char *)v26 + v47 - 2) = *(_WORD *)((char *)&v64 + v47 + 6);
    }
  }
  else
  {
    *v24 = v25;
    v24[2] = v65[0];
  }
  v24[1] = v27;
  v63 = v65;
  v64 = 0;
  LOBYTE(v65[0]) = 0;
  *(_OWORD *)v69 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v79,
    (const __m128i *)&v66);
  v80 = 0;
  v70 = 0;
  *(_QWORD *)&v71 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v28 = operator new(0x20u);
  strcpy((char *)(v28 + 16), "comment");
  *(_QWORD *)v28 = v28 + 16;
  *(_QWORD *)(v28 + 8) = 7;
  v71 = (unsigned __int64)v28;
  if ( (unsigned __int64)v62 <= 1 )
  {
    v30 = nullptr;
    v14 = 0;
    goto LABEL_42;
  }
  memset(v60, 0, sizeof(v60));
  v56 = *(char **)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v29 = (__int64 *)operator new(0x20u);
  v30 = v29;
  *v29 = (__int64)(v29 + 2);
  if ( !v56 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  dest = v29 + 2;
  v31 = strlen(v56);
  v32 = dest;
  v59 = v31;
  v33 = v31;
  if ( v31 > 0xF )
  {
    desta = (void *)v31;
    v46 = std::string::_M_create();
    *v30 = v46;
    v32 = (void *)v46;
    v33 = (size_t)desta;
    v30[2] = v59;
    goto LABEL_65;
  }
  if ( v31 == 1 )
  {
    *((_BYTE *)v30 + 16) = *v56;
    goto LABEL_41;
  }
  if ( v31 )
  {
LABEL_65:
    memcpy(v32, v56, v33);
    v31 = v59;
    v32 = (void *)*v30;
  }
LABEL_41:
  v30[1] = v31;
  *((_BYTE *)v32 + v31) = 0;
LABEL_42:
  v60[0] = v14;
  *(_QWORD *)&v60[8] = v30;
  si128 = _mm_load_si128((const __m128i *)v60);
  v73 = 0;
  v72 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v81,
    (const __m128i *)&v70);
  v81[2] = 0;
  LOBYTE(v74) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v74) = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "repeatable");
  *(_QWORD *)(v35 + 8) = 10;
  v76 = 4;
  v77 = v19;
  v78 = 0;
  s2 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v82,
    (const __m128i *)&v74);
  v82[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v79,
    3);
  v36 = (__m128i *)v83;
  do
  {
    v36 = (__m128i *)((char *)v36 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v36 != &v79 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v63 != v65 )
    operator delete(v63, v65[0] + 1LL);
  if ( *(_QWORD *)v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  return a1;
}

