_QWORD *__fastcall ida_mcp::tools::names::`anonymous namespace'::handle_get_true_name(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  size_t v14; // rdx
  int v15; // eax
  char *v16; // rbx
  int *v17; // rax
  int *v18; // r13
  __int64 v19; // rbp
  std::runtime_error *v20; // rax
  __int64 func; // r14
  __int64 v22; // rax
  __m128i *v23; // rbx
  char *v24; // rax
  unsigned int v25; // ebp
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  char *v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  _QWORD *v33; // rax
  _BYTE *v34; // rdi
  __int64 *v35; // rbp
  __m128i v36; // xmm0
  size_t v37; // rcx
  bool v38; // r14
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rbp
  __int64 v42; // rax
  __m128i si128; // xmm0
  char *v44; // rax
  __int64 v45; // rdx
  __int64 v47; // rax
  char *v48; // rax
  _QWORD *v49; // rax
  unsigned __int64 v50; // rdx
  char *v51; // rax
  char *v52; // rsi
  unsigned int v53; // ebp
  unsigned int v54; // ebp
  unsigned int v55; // eax
  __int64 v56; // rcx
  unsigned int v57; // edi
  unsigned __int64 v58; // r8
  char *v59; // rcx
  char *v60; // r9
  unsigned int v61; // edx
  unsigned int v62; // ecx
  __int64 v63; // rdi
  _BYTE *src; // [rsp+50h] [rbp-218h]
  bool v66; // [rsp+5Fh] [rbp-209h]
  __m128i v67; // [rsp+70h] [rbp-1F8h] BYREF
  char *s; // [rsp+80h] [rbp-1E8h]
  __int128 v69; // [rsp+88h] [rbp-1E0h]
  void *v70; // [rsp+A0h] [rbp-1C8h]
  char *v71; // [rsp+A8h] [rbp-1C0h]
  int v72[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *v73; // [rsp+C0h] [rbp-1A8h]
  char *v74; // [rsp+C8h] [rbp-1A0h]
  _QWORD v75[2]; // [rsp+D0h] [rbp-198h] BYREF
  char v76; // [rsp+E0h] [rbp-188h] BYREF
  int v77[4]; // [rsp+E8h] [rbp-180h]
  char v78; // [rsp+F8h] [rbp-170h]
  int v79[4]; // [rsp+100h] [rbp-168h]
  int v80; // [rsp+110h] [rbp-158h] BYREF
  int v81[4]; // [rsp+118h] [rbp-150h]
  char v82; // [rsp+128h] [rbp-140h]
  int v83[4]; // [rsp+130h] [rbp-138h]
  char v84; // [rsp+140h] [rbp-128h] BYREF
  __int128 v85; // [rsp+148h] [rbp-120h]
  char v86; // [rsp+158h] [rbp-110h]
  _BOOL8 v87; // [rsp+160h] [rbp-108h]
  __int64 v88; // [rsp+168h] [rbp-100h]
  void *v89; // [rsp+170h] [rbp-F8h] BYREF
  __int128 s2; // [rsp+178h] [rbp-F0h] BYREF
  char v91; // [rsp+188h] [rbp-E0h]
  _BOOL8 v92; // [rsp+190h] [rbp-D8h]
  __int64 v93; // [rsp+198h] [rbp-D0h]
  __m128i v94; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 v95; // [rsp+1B0h] [rbp-B8h]
  _QWORD v96[3]; // [rsp+1B8h] [rbp-B0h] BYREF
  _QWORD v97[3]; // [rsp+1D0h] [rbp-98h] BYREF
  __int64 v98; // [rsp+1E8h] [rbp-80h] BYREF
  __int64 v99; // [rsp+1F8h] [rbp-70h]
  char v100[40]; // [rsp+200h] [rbp-68h] BYREF
  unsigned __int64 v101; // [rsp+228h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v89 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
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
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
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
        v10 = 7;
        if ( v12 <= 7 )
          v10 = *(_QWORD *)(v7 + 40);
        v11 = memcmp(*(const void **)(v7 + 32), (char *)&s2 + 8, v10);
        if ( v11 || (v11 = v12 - 7, (__int64)(v12 - 7) <= 0x7FFFFFFF) )
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
        v14 = 7;
        if ( v13 <= 7 )
          v14 = *(_QWORD *)(v9 + 40);
        v15 = memcmp((char *)&s2 + 8, *(const void **)(v9 + 32), v14);
        if ( v15 || (v15 = 7 - v13, (__int64)(7 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
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
  v89 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v8 + 64) != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v8 + 64) )
    {
      case 0:
        v4 = "null";
        break;
      case 1:
        v4 = "object";
        break;
      case 2:
        v4 = (char *)"array";
        break;
      case 3:
        v4 = "string";
        break;
      case 4:
        v4 = "boolean";
        break;
      case 8:
        v4 = "binary";
        break;
      case 9:
        v4 = "discarded";
        break;
      default:
        v4 = "number";
        break;
    }
    s = v4;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v3,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v16 = (char *)v89;
  v17 = __errno_location();
  *v17 = 0;
  v18 = v17;
  v19 = __isoc23_strtoull();
  if ( v16 == s || *s || *v18 == 34 && v19 == -1 )
  {
    if ( v89 != (char *)&s2 + 8 )
      operator delete(v89, *((_QWORD *)&s2 + 1) + 1LL);
    v20 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v20, "Invalid address format");
    JUMPOUT(0x86113);
  }
  if ( v89 != (char *)&s2 + 8 )
    operator delete(v89, *((_QWORD *)&s2 + 1) + 1LL);
  v71 = nullptr;
  func = get_func();
  LOBYTE(v72[0]) = 0;
  v70 = v72;
  s = nullptr;
  v69 = 0;
  if ( !func )
  {
    get_ea_name();
    if ( (unsigned __int64)v69 > 1 )
    {
      strlen(s);
      std::string::_M_replace();
      goto LABEL_35;
    }
LABEL_73:
    qsnprintf();
    strlen(v100);
    std::string::_M_replace();
LABEL_36:
    v66 = 1;
    goto LABEL_37;
  }
  if ( get_func_name() <= 0 )
    goto LABEL_73;
  if ( (_QWORD)v69 )
    strlen(s);
  std::string::_M_replace();
LABEL_35:
  if ( !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind()
    || !std::string::rfind() )
  {
    goto LABEL_36;
  }
  v66 = std::string::rfind() == 0;
LABEL_37:
  v76 = 0;
  *(_QWORD *)v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v76 = 3;
  v22 = operator new(0x20u);
  *(_QWORD *)v22 = v22 + 16;
  v23 = (__m128i *)v100;
  strcpy((char *)(v22 + 16), "address");
  *(_QWORD *)(v22 + 8) = 7;
  *(_OWORD *)v77 = (unsigned __int64)v22;
  qsnprintf();
  v73 = v75;
  v24 = (char *)strlen(v100);
  s = v24;
  v25 = (unsigned int)v24;
  if ( (unsigned __int64)v24 > 0xF )
  {
    v49 = (_QWORD *)std::string::_M_create();
    v73 = v49;
    v75[0] = s;
  }
  else
  {
    if ( v24 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v75[0]) = v100[0];
      goto LABEL_40;
    }
    if ( !v24 )
    {
LABEL_40:
      v26 = v75;
      goto LABEL_41;
    }
    v49 = v75;
  }
  if ( v25 >= 8 )
  {
    *v49 = *(_QWORD *)v100;
    *(_QWORD *)((char *)v49 + v25 - 8) = *(_QWORD *)&v100[v25 - 8];
    v50 = (unsigned __int64)(v49 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v51 = (char *)v49 - v50;
    v52 = (char *)(v100 - v51);
    v53 = ((_DWORD)v51 + v25) & 0xFFFFFFF8;
    if ( v53 >= 8 )
    {
      v54 = v53 & 0xFFFFFFF8;
      v55 = 0;
      do
      {
        v56 = v55;
        v55 += 8;
        *(_QWORD *)(v50 + v56) = *(_QWORD *)&v52[v56];
      }
      while ( v55 < v54 );
    }
  }
  else if ( (v25 & 4) != 0 )
  {
    *(_DWORD *)v49 = *(_DWORD *)v100;
    *(_DWORD *)((char *)v49 + v25 - 4) = *(_DWORD *)&v100[v25 - 4];
  }
  else if ( v25 )
  {
    *(_BYTE *)v49 = v100[0];
    if ( (v25 & 2) != 0 )
      *(_WORD *)((char *)v49 + v25 - 2) = *(_WORD *)&v100[v25 - 2];
  }
  v24 = s;
  v26 = v73;
LABEL_41:
  v74 = v24;
  v24[(_QWORD)v26] = 0;
  v78 = 0;
  *(_QWORD *)v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v27 = (_QWORD *)operator new(0x20u);
  v28 = v73;
  v29 = v27 + 2;
  v30 = v74;
  *v27 = v27 + 2;
  if ( v28 == v75 )
  {
    v57 = (_DWORD)v30 + 1;
    if ( (unsigned int)((_DWORD)v30 + 1) >= 8 )
    {
      v27[2] = v75[0];
      *(_QWORD *)((char *)v29 + v57 - 8) = *(_QWORD *)((char *)&v75[-1] + v57);
      v58 = (unsigned __int64)(v27 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v59 = (char *)v29 - v58;
      v60 = (char *)((char *)v75 - v59);
      if ( (((_DWORD)v59 + v57) & 0xFFFFFFF8) >= 8 )
      {
        v61 = ((_DWORD)v59 + v57) & 0xFFFFFFF8;
        v62 = 0;
        do
        {
          v63 = v62;
          v62 += 8;
          *(_QWORD *)(v58 + v63) = *(_QWORD *)&v60[v63];
        }
        while ( v62 < v61 );
      }
    }
    else if ( (v57 & 4) != 0 )
    {
      *((_DWORD *)v27 + 4) = v75[0];
      *(_DWORD *)((char *)v29 + v57 - 4) = *(_DWORD *)((char *)&v74 + v57 + 4);
    }
    else if ( (_DWORD)v30 != -1 )
    {
      *((_BYTE *)v27 + 16) = v75[0];
      if ( (v57 & 2) != 0 )
        *(_WORD *)((char *)v29 + v57 - 2) = *(_WORD *)((char *)&v74 + v57 + 6);
    }
  }
  else
  {
    *v27 = v28;
    v27[2] = v75[0];
  }
  v27[1] = v30;
  v73 = v75;
  LOBYTE(v75[0]) = 0;
  v74 = nullptr;
  *(_OWORD *)v79 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v94,
    (const __m128i *)&v76,
    2,
    1);
  v95 = 0;
  LOBYTE(v80) = 0;
  *(_QWORD *)v81 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v80) = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "name");
  *(_QWORD *)(v31 + 8) = 4;
  v82 = 0;
  *(_QWORD *)v83 = 0;
  *(_OWORD *)v81 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v32 = (unsigned __int64)v71;
  src = v70;
  v33 = (_QWORD *)operator new(0x20u);
  v34 = v33 + 2;
  s = v71;
  v35 = v33;
  *v33 = v33 + 2;
  if ( v32 > 0xF )
  {
    v47 = std::string::_M_create();
    *v35 = v47;
    v34 = (_BYTE *)v47;
    v36 = (__m128i)(unsigned __int64)v35;
    v48 = s;
    v38 = func != 0;
    v35[2] = (__int64)s;
    v37 = (size_t)(v48 + 1);
    if ( v48 )
    {
      v39 = -1;
      if ( !v37 )
        goto LABEL_46;
      goto LABEL_45;
    }
LABEL_54:
    *v34 = *src;
    v39 = (__int64)s;
    goto LABEL_46;
  }
  v36 = (__m128i)(unsigned __int64)v33;
  v37 = v32 + 1;
  v38 = func != 0;
  if ( !v32 )
    goto LABEL_54;
LABEL_45:
  v67 = v36;
  memcpy(v34, src, v37);
  v39 = (__int64)s;
  v36 = _mm_load_si128(&v67);
LABEL_46:
  v35[1] = v39;
  *(__m128i *)v83 = v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    (const __m128i *)&v80,
    2,
    1);
  v96[2] = 0;
  v84 = 0;
  *(_QWORD *)&v85 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = 3;
  v40 = operator new(0x20u);
  strcpy((char *)(v40 + 16), "is_function");
  *(_QWORD *)v40 = v40 + 16;
  *(_QWORD *)(v40 + 8) = 11;
  v86 = 4;
  v87 = v38;
  v88 = 0;
  v85 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v97,
    (const __m128i *)&v84,
    2,
    1);
  v97[2] = 0;
  LOBYTE(v89) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v89) = 3;
  v41 = (__int64 *)operator new(0x20u);
  *v41 = (__int64)(v41 + 2);
  s = (_BYTE *)(&word_10 + 1);
  v42 = std::string::_M_create();
  *v41 = v42;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E20C0);
  v41[2] = (__int64)s;
  *(__m128i *)v42 = si128;
  *(_BYTE *)(v42 + 16) = 100;
  v44 = s;
  v45 = *v41;
  v41[1] = (__int64)s;
  v44[v45] = 0;
  v91 = 4;
  v92 = v66;
  v93 = 0;
  s2 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v98,
    (const __m128i *)&v89,
    2,
    1);
  v99 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v94,
    4);
  do
  {
    v23 = (__m128i *)((char *)v23 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v23 != &v94 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v73 != v75 )
    operator delete(v73, v75[0] + 1LL);
  if ( v70 != v72 )
    operator delete(v70, *(_QWORD *)v72 + 1LL);
  return a1;
}

