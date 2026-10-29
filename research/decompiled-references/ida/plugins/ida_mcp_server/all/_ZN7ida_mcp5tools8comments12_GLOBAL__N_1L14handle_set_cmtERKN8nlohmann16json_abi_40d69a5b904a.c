_QWORD *__fastcall ida_mcp::tools::comments::`anonymous namespace'::handle_set_cmt(_QWORD *a1, __int64 a2)
{
  void *v2; // r12
  const char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r15
  size_t v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbp
  size_t v12; // rdx
  int v13; // eax
  _BYTE *v14; // r13
  int *v15; // rax
  int *v16; // r15
  std::runtime_error *exception; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rbp
  size_t v22; // rdx
  int v23; // eax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r13
  size_t v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __m128i *v29; // rbx
  size_t v30; // rax
  unsigned int v31; // ebp
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rcx
  size_t v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // r15
  _QWORD *v39; // rax
  _BYTE *v40; // rdi
  __int64 *v41; // r12
  __m128i v42; // xmm0
  size_t v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v48; // rax
  _BYTE *v49; // rax
  _QWORD *v50; // rax
  unsigned __int64 v51; // rdx
  char *v52; // rax
  char *v53; // rsi
  unsigned int v54; // ebp
  unsigned int v55; // ebp
  unsigned int v56; // eax
  __int64 v57; // rcx
  unsigned int v58; // edi
  unsigned __int64 v59; // r8
  char *v60; // rcx
  char *v61; // r9
  unsigned int v62; // edx
  unsigned int v63; // ecx
  __int64 v64; // rdi
  __int64 v66; // [rsp+18h] [rbp-230h]
  unsigned __int8 v67; // [rsp+46h] [rbp-202h]
  unsigned __int8 v68; // [rsp+47h] [rbp-201h]
  _BYTE *src; // [rsp+48h] [rbp-200h]
  __m128i v70; // [rsp+60h] [rbp-1E8h] BYREF
  _BYTE *v71; // [rsp+78h] [rbp-1D0h]
  void *v72; // [rsp+80h] [rbp-1C8h]
  _BYTE *v73; // [rsp+88h] [rbp-1C0h]
  int v74[2]; // [rsp+90h] [rbp-1B8h] BYREF
  void *v75; // [rsp+A0h] [rbp-1A8h]
  size_t v76; // [rsp+A8h] [rbp-1A0h]
  _QWORD v77[2]; // [rsp+B0h] [rbp-198h] BYREF
  char v78; // [rsp+C0h] [rbp-188h] BYREF
  int v79[4]; // [rsp+C8h] [rbp-180h]
  char v80; // [rsp+D8h] [rbp-170h]
  int v81[4]; // [rsp+E0h] [rbp-168h]
  char v82; // [rsp+F0h] [rbp-158h] BYREF
  int v83[4]; // [rsp+F8h] [rbp-150h]
  char v84; // [rsp+108h] [rbp-140h]
  __int64 v85[2]; // [rsp+110h] [rbp-138h]
  char v86; // [rsp+120h] [rbp-128h] BYREF
  __int128 v87; // [rsp+128h] [rbp-120h]
  char v88; // [rsp+138h] [rbp-110h]
  __int64 v89; // [rsp+140h] [rbp-108h]
  __int64 v90; // [rsp+148h] [rbp-100h]
  void *v91; // [rsp+150h] [rbp-F8h] BYREF
  __int128 s2; // [rsp+158h] [rbp-F0h] BYREF
  char v93; // [rsp+168h] [rbp-E0h]
  __int64 v94; // [rsp+170h] [rbp-D8h]
  __int64 v95; // [rsp+178h] [rbp-D0h]
  __m128i v96; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v97; // [rsp+190h] [rbp-B8h] BYREF
  _QWORD v98[3]; // [rsp+198h] [rbp-B0h] BYREF
  _QWORD v99[3]; // [rsp+1B0h] [rbp-98h] BYREF
  __int64 v100; // [rsp+1C8h] [rbp-80h] BYREF
  __int64 v101; // [rsp+1D8h] [rbp-70h]
  char s[40]; // [rsp+1E0h] [rbp-68h] BYREF
  unsigned __int64 v103; // [rsp+208h] [rbp-40h]

  v103 = __readfsqword(0x28u);
  v91 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x7F6E5);
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
  v91 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v6 + 64) != 3 )
    JUMPOUT(0x7F46C);
  std::string::_M_assign();
  v14 = v91;
  v15 = __errno_location();
  *v15 = 0;
  v16 = v15;
  v66 = __isoc23_strtoull();
  if ( v14 == v71 || *v71 || *v16 == 34 && v66 == -1 )
  {
    if ( v91 != (char *)&s2 + 8 )
      operator delete(v91, *((_QWORD *)&s2 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0x7F410);
  }
  if ( v91 != (char *)&s2 + 8 )
    operator delete(v91, *((_QWORD *)&s2 + 1) + 1LL);
  DWORD2(s2) = 1835888483;
  v91 = (char *)&s2 + 8;
  *(_DWORD *)((char *)&s2 + 11) = 1953391981;
  *(_QWORD *)&s2 = 7;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x7F5FB);
  v18 = *(_QWORD *)(a2 + 8);
  v19 = *(_QWORD *)(v18 + 16);
  v20 = v18 + 8;
  if ( v19 )
  {
    v21 = v18 + 8;
    do
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v19 + 40);
        if ( !v24 )
          break;
        v22 = 7;
        if ( v24 <= 7 )
          v22 = *(_QWORD *)(v19 + 40);
        v23 = memcmp(*(const void **)(v19 + 32), (char *)&s2 + 8, v22);
        if ( v23 || (v23 = v24 - 7, (__int64)(v24 - 7) <= 0x7FFFFFFF) )
        {
          if ( v23 < 0 )
            break;
        }
        v21 = v19;
        v19 = *(_QWORD *)(v19 + 16);
        if ( !v19 )
          goto LABEL_41;
      }
      v19 = *(_QWORD *)(v19 + 24);
    }
    while ( v19 );
LABEL_41:
    if ( v20 != v21 )
    {
      v25 = *(_QWORD *)(v21 + 40);
      if ( v25 )
      {
        v26 = 7;
        if ( v25 <= 7 )
          v26 = *(_QWORD *)(v21 + 40);
        v27 = memcmp((char *)&s2 + 8, *(const void **)(v21 + 32), v26);
        if ( v27 || (v27 = 7 - v25, (__int64)(7 - v25) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v27 >= 0 )
            v20 = v21;
        }
      }
      else
      {
        v20 = v21;
      }
    }
  }
  LOBYTE(v74[0]) = 0;
  v72 = v74;
  v73 = nullptr;
  if ( *(_BYTE *)(v20 + 64) != 3 )
  {
    v2 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v20 + 64) )
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
    LOBYTE(v97) = 0;
    v96.m128i_i64[0] = (__int64)&v97;
    v96.m128i_i64[1] = 0;
    strlen(v3);
    std::string::reserve();
    std::string::append();
    std::string::append();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v2,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v67 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[11],bool,0>();
  v68 = set_cmt();
  v78 = 0;
  *(_QWORD *)v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  v29 = (__m128i *)s;
  strcpy((char *)(v28 + 16), "address");
  *(_QWORD *)(v28 + 8) = 7;
  *(_OWORD *)v79 = (unsigned __int64)v28;
  qsnprintf();
  v75 = v77;
  v30 = strlen(s);
  v71 = (_BYTE *)v30;
  v31 = v30;
  if ( v30 > 0xF )
  {
    v50 = (_QWORD *)std::string::_M_create();
    v75 = v50;
    v77[0] = v71;
  }
  else
  {
    if ( v30 == 1 )
    {
      LOBYTE(v77[0]) = s[0];
      goto LABEL_53;
    }
    if ( !v30 )
    {
LABEL_53:
      v32 = v77;
      goto LABEL_54;
    }
    v50 = v77;
  }
  if ( v31 >= 8 )
  {
    *v50 = *(_QWORD *)s;
    *(_QWORD *)((char *)v50 + v31 - 8) = *(_QWORD *)&s[v31 - 8];
    v51 = (unsigned __int64)(v50 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v52 = (char *)v50 - v51;
    v53 = (char *)(s - v52);
    v54 = ((_DWORD)v52 + v31) & 0xFFFFFFF8;
    if ( v54 >= 8 )
    {
      v55 = v54 & 0xFFFFFFF8;
      v56 = 0;
      do
      {
        v57 = v56;
        v56 += 8;
        *(_QWORD *)(v51 + v57) = *(_QWORD *)&v53[v57];
      }
      while ( v56 < v55 );
    }
  }
  else if ( (v31 & 4) != 0 )
  {
    *(_DWORD *)v50 = *(_DWORD *)s;
    *(_DWORD *)((char *)v50 + v31 - 4) = *(_DWORD *)&s[v31 - 4];
  }
  else if ( v31 )
  {
    *(_BYTE *)v50 = s[0];
    if ( (v31 & 2) != 0 )
      *(_WORD *)((char *)v50 + v31 - 2) = *(_WORD *)&s[v31 - 2];
  }
  v30 = (size_t)v71;
  v32 = v75;
LABEL_54:
  v76 = v30;
  *((_BYTE *)v32 + v30) = 0;
  v80 = 0;
  *(_QWORD *)v81 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v33 = (_QWORD *)operator new(0x20u);
  v34 = v75;
  v35 = v33 + 2;
  v36 = v76;
  *v33 = v33 + 2;
  if ( v34 == v77 )
  {
    v58 = v36 + 1;
    if ( (unsigned int)(v36 + 1) >= 8 )
    {
      v33[2] = v77[0];
      *(_QWORD *)((char *)v35 + v58 - 8) = *(_QWORD *)((char *)&v77[-1] + v58);
      v59 = (unsigned __int64)(v33 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v60 = (char *)v35 - v59;
      v61 = (char *)((char *)v77 - v60);
      if ( (((_DWORD)v60 + v58) & 0xFFFFFFF8) >= 8 )
      {
        v62 = ((_DWORD)v60 + v58) & 0xFFFFFFF8;
        v63 = 0;
        do
        {
          v64 = v63;
          v63 += 8;
          *(_QWORD *)(v59 + v64) = *(_QWORD *)&v61[v64];
        }
        while ( v63 < v62 );
      }
    }
    else if ( (v58 & 4) != 0 )
    {
      *((_DWORD *)v33 + 4) = v77[0];
      *(_DWORD *)((char *)v35 + v58 - 4) = *(_DWORD *)((char *)&v76 + v58 + 4);
    }
    else if ( (_DWORD)v36 != -1 )
    {
      *((_BYTE *)v33 + 16) = v77[0];
      if ( (v58 & 2) != 0 )
        *(_WORD *)((char *)v35 + v58 - 2) = *(_WORD *)((char *)&v76 + v58 + 6);
    }
  }
  else
  {
    *v33 = v34;
    v33[2] = v77[0];
  }
  v33[1] = v36;
  v75 = v77;
  v76 = 0;
  LOBYTE(v77[0]) = 0;
  *(_OWORD *)v81 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v96,
    (const __m128i *)&v78);
  v97 = 0;
  v82 = 0;
  *(_QWORD *)v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v37 = operator new(0x20u);
  strcpy((char *)(v37 + 16), "comment");
  *(_QWORD *)v37 = v37 + 16;
  *(_QWORD *)(v37 + 8) = 7;
  v84 = 0;
  v85[0] = 0;
  *(_OWORD *)v83 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = 3;
  v38 = (unsigned __int64)v73;
  src = v72;
  v39 = (_QWORD *)operator new(0x20u);
  v40 = v39 + 2;
  v71 = v73;
  v41 = v39;
  *v39 = v39 + 2;
  if ( v38 > 0xF )
  {
    v48 = std::string::_M_create();
    *v41 = v48;
    v40 = (_BYTE *)v48;
    v49 = v71;
    v42 = (__m128i)(unsigned __int64)v41;
    v41[2] = (__int64)v71;
    v43 = (size_t)(v49 + 1);
    if ( v49 )
    {
      v44 = -1;
      if ( !v43 )
        goto LABEL_59;
      goto LABEL_58;
    }
LABEL_67:
    *v40 = *src;
    v44 = (__int64)v71;
    goto LABEL_59;
  }
  v42 = (__m128i)(unsigned __int64)v39;
  v43 = v38 + 1;
  if ( !v38 )
    goto LABEL_67;
LABEL_58:
  v70 = v42;
  memcpy(v40, src, v43);
  v44 = (__int64)v71;
  v42 = _mm_load_si128(&v70);
LABEL_59:
  v41[1] = v44;
  *(__m128i *)v85 = v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v98,
    (const __m128i *)&v82);
  v98[2] = 0;
  v86 = 0;
  *(_QWORD *)&v87 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v45 = operator new(0x20u);
  *(_QWORD *)v45 = v45 + 16;
  strcpy((char *)(v45 + 16), "repeatable");
  *(_QWORD *)(v45 + 8) = 10;
  v88 = 4;
  v89 = v67;
  v90 = 0;
  v87 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v99,
    (const __m128i *)&v86);
  v99[2] = 0;
  LOBYTE(v91) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v91) = 3;
  v46 = operator new(0x20u);
  strcpy((char *)(v46 + 16), "success");
  *(_QWORD *)v46 = v46 + 16;
  *(_QWORD *)(v46 + 8) = 7;
  v93 = 4;
  v94 = v68;
  v95 = 0;
  s2 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v100,
    (const __m128i *)&v91);
  v101 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v96,
    4);
  do
  {
    v29 = (__m128i *)((char *)v29 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v29 != &v96 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v75 != v77 )
    operator delete(v75, v77[0] + 1LL);
  if ( v72 != v74 )
    operator delete(v72, *(_QWORD *)v74 + 1LL);
  return a1;
}

