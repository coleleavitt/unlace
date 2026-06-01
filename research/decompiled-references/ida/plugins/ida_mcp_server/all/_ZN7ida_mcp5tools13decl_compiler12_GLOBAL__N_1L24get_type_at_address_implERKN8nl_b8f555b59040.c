_QWORD *__fastcall ida_mcp::tools::decl_compiler::`anonymous namespace'::get_type_at_address_impl(
        _QWORD *a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  const char *v4; // rbx
  void *v5; // rbp
  size_t v6; // rax
  unsigned int v7; // r13d
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rbp
  size_t v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  size_t v18; // rdx
  int v19; // eax
  _BYTE *v20; // r14
  int *v21; // rax
  int *v22; // r15
  __int64 v23; // r13
  std::runtime_error *v24; // rbx
  char tinfo; // bp
  __int64 v26; // rax
  size_t v27; // rax
  unsigned int v28; // r13d
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  size_t v33; // rsi
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rbx
  size_t v37; // rax
  void *v38; // rcx
  size_t v39; // r8
  __int64 tinfo_size; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v46; // r12
  __int64 v47; // r15
  __int64 v48; // r14
  __int64 v49; // r12
  size_t v50; // rdx
  int v51; // eax
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // r14
  size_t v54; // rdx
  int v55; // eax
  __int64 v56; // r12
  size_t v57; // rdx
  int v58; // eax
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // r14
  size_t v61; // rax
  int v62; // eax
  _QWORD *v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  char *v66; // rax
  char *v67; // rbx
  unsigned int v68; // r13d
  unsigned int v69; // r13d
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // edi
  unsigned __int64 v73; // r8
  char *v74; // rcx
  char *v75; // r9
  unsigned int v76; // edx
  unsigned int v77; // ecx
  __int64 v78; // rdi
  int v80[2]; // [rsp+18h] [rbp-1B0h]
  void *dest; // [rsp+38h] [rbp-190h]
  void *desta; // [rsp+38h] [rbp-190h]
  size_t v83; // [rsp+60h] [rbp-168h]
  size_t v84; // [rsp+60h] [rbp-168h]
  size_t v85; // [rsp+60h] [rbp-168h]
  _BOOL8 v86; // [rsp+68h] [rbp-160h]
  _BOOL8 v87; // [rsp+68h] [rbp-160h]
  _BOOL8 v88; // [rsp+68h] [rbp-160h]
  _BYTE *v89; // [rsp+70h] [rbp-158h]
  void *v90; // [rsp+90h] [rbp-138h]
  size_t v91; // [rsp+98h] [rbp-130h]
  _QWORD v92[2]; // [rsp+A0h] [rbp-128h] BYREF
  char v93; // [rsp+B0h] [rbp-118h] BYREF
  int v94[4]; // [rsp+B8h] [rbp-110h]
  char v95; // [rsp+C8h] [rbp-100h]
  int v96[4]; // [rsp+D0h] [rbp-F8h]
  void *v97; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 s2; // [rsp+E8h] [rbp-E0h] BYREF
  char v99; // [rsp+F8h] [rbp-D0h]
  __int64 v100[2]; // [rsp+100h] [rbp-C8h]
  __m128i v101; // [rsp+110h] [rbp-B8h] BYREF
  _QWORD s1[4]; // [rsp+120h] [rbp-A8h] BYREF
  char s[32]; // [rsp+140h] [rbp-88h] BYREF
  char v104[40]; // [rsp+160h] [rbp-68h] BYREF
  unsigned __int64 v105; // [rsp+188h] [rbp-40h]

  v9 = (char *)&s2 + 8;
  v105 = __readfsqword(0x28u);
  v97 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = v10 + 8;
  if ( v11 )
  {
    v13 = v10 + 8;
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v11 + 40);
        if ( !v16 )
          break;
        v14 = 7;
        if ( v16 <= 7 )
          v14 = *(_QWORD *)(v11 + 40);
        v15 = memcmp(*(const void **)(v11 + 32), (char *)&s2 + 8, v14);
        if ( v15 || (v15 = v16 - 7, (__int64)(v16 - 7) <= 0x7FFFFFFF) )
        {
          if ( v15 < 0 )
            break;
        }
        v13 = v11;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_12;
      }
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v11 );
LABEL_12:
    if ( v12 != v13 )
    {
      v17 = *(_QWORD *)(v13 + 40);
      if ( v17 )
      {
        v18 = 7;
        if ( v17 <= 7 )
          v18 = *(_QWORD *)(v13 + 40);
        v19 = memcmp((char *)&s2 + 8, *(const void **)(v13 + 32), v18);
        if ( v19 || (v19 = 7 - v17, (__int64)(7 - v17) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v19 >= 0 )
            v12 = v13;
        }
      }
      else
      {
        v12 = v13;
      }
    }
  }
  v97 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v12 + 64) != 3 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v2,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v20 = v97;
  v21 = __errno_location();
  *v21 = 0;
  v22 = v21;
  v23 = __isoc23_strtoull();
  if ( v20 == v89 || *v89 || *v22 == 34 && v23 == -1 )
  {
    if ( v97 != (char *)&s2 + 8 )
      operator delete(v97, *((_QWORD *)&s2 + 1) + 1LL);
    v24 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v24, "Invalid address format");
    __cxa_throw(
      v24,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v97 != (char *)&s2 + 8 )
    operator delete(v97, *((_QWORD *)&s2 + 1) + 1LL);
  if ( *(_BYTE *)a2 == 1 )
  {
    v46 = *(_QWORD *)(a2 + 8);
    v47 = *(_QWORD *)(v46 + 16);
    if ( v47 )
    {
      v48 = *(_QWORD *)(v46 + 16);
      *(_QWORD *)v80 = v46 + 8;
      v49 = v46 + 8;
      do
      {
        while ( 1 )
        {
          v52 = *(_QWORD *)(v48 + 40);
          if ( !v52 )
            break;
          v50 = 9;
          if ( v52 <= 9 )
            v50 = *(_QWORD *)(v48 + 40);
          v51 = memcmp(*(const void **)(v48 + 32), "multiline", v50);
          if ( v51 || (v51 = v52 - 9, (__int64)(v52 - 9) <= 0x7FFFFFFF) )
          {
            if ( v51 < 0 )
              break;
          }
          v49 = v48;
          v48 = *(_QWORD *)(v48 + 16);
          if ( !v48 )
            goto LABEL_60;
        }
        v48 = *(_QWORD *)(v48 + 24);
      }
      while ( v48 );
LABEL_60:
      v9 = (char *)&s2 + 8;
      if ( *(_QWORD *)v80 != v49 )
      {
        v53 = *(_QWORD *)(v49 + 40);
        if ( !v53 )
          goto LABEL_67;
        v54 = 9;
        if ( v53 <= 9 )
          v54 = *(_QWORD *)(v49 + 40);
        v55 = memcmp(*(const void **)(v49 + 32), "multiline", v54);
        if ( v55 || (v55 = v53 - 9, (__int64)(v53 - 9) <= 0x7FFFFFFF) )
        {
          if ( v55 <= 0 )
          {
LABEL_67:
            v56 = *(_QWORD *)v80;
            strcpy((char *)s1, "multiline");
            do
            {
              while ( 1 )
              {
                v59 = *(_QWORD *)(v47 + 40);
                if ( !v59 )
                  break;
                v57 = 9;
                if ( v59 <= 9 )
                  v57 = *(_QWORD *)(v47 + 40);
                v58 = memcmp(*(const void **)(v47 + 32), s1, v57);
                if ( v58 || (v58 = v59 - 9, (__int64)(v59 - 9) <= 0x7FFFFFFF) )
                {
                  if ( v58 < 0 )
                    break;
                }
                v56 = v47;
                v47 = *(_QWORD *)(v47 + 16);
                if ( !v47 )
                  goto LABEL_76;
              }
              v47 = *(_QWORD *)(v47 + 24);
            }
            while ( v47 );
LABEL_76:
            v9 = (char *)&s2 + 8;
            if ( *(_QWORD *)v80 != v56 )
            {
              v60 = *(_QWORD *)(v56 + 40);
              if ( v60 )
              {
                v61 = 9;
                if ( v60 <= 9 )
                  v61 = *(_QWORD *)(v56 + 40);
                v62 = memcmp(s1, *(const void **)(v56 + 32), v61);
                if ( v62 || (v62 = 9 - v60, (__int64)(9 - v60) >= (__int64)0xFFFFFFFF80000000LL) )
                {
                  if ( v62 < 0 )
                    v56 = *(_QWORD *)v80;
                  *(_QWORD *)v80 = v56;
                }
              }
              else
              {
                *(_QWORD *)v80 = v56;
              }
            }
            if ( *(_BYTE *)(*(_QWORD *)v80 + 64LL) != 4 )
            {
              v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
              switch ( *(_BYTE *)(*(_QWORD *)v80 + 64LL) )
              {
                case 0:
                  v4 = "null";
                  break;
                case 1:
                  v4 = "object";
                  break;
                case 2:
                  v4 = "array";
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
              LOBYTE(s1[0]) = 0;
              v101.m128i_i64[0] = (__int64)s1;
              v101.m128i_i64[1] = 0;
              strlen(v4);
              std::string::reserve();
              std::string::append((__int64)&v101, "type must be boolean, but is ");
              std::string::append((__int64)&v101, v4);
              nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
                v3,
                302);
              std::string::_M_dispose();
              __cxa_throw(
                v3,
                (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
            }
          }
        }
      }
    }
  }
  if ( !(unsigned __int8)print_type() )
  {
    v5 = __cxa_allocate_exception(0x10u);
    qsnprintf();
    v97 = (char *)&s2 + 8;
    v6 = strlen(s);
    v83 = v6;
    v7 = v6;
    if ( v6 > 0xF )
    {
      v97 = (void *)std::string::_M_create();
      v9 = (char *)v97;
      *((_QWORD *)&s2 + 1) = v83;
    }
    else
    {
      if ( v6 == 1 )
      {
        BYTE8(s2) = s[0];
LABEL_124:
        *(_QWORD *)&s2 = v83;
        *((_BYTE *)v97 + v83) = 0;
        std::string::insert();
        std::string::basic_string();
        std::runtime_error::runtime_error();
        std::string::_M_dispose();
        std::string::_M_dispose();
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))&std::runtime_error::~runtime_error);
      }
      if ( !v6 )
        goto LABEL_124;
    }
    qmemcpy(v9, s, v7);
    goto LABEL_124;
  }
  tinfo = get_tinfo();
  v93 = 0;
  *(_QWORD *)v94 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "address");
  *(_QWORD *)(v26 + 8) = 7;
  *(_OWORD *)v94 = (unsigned __int64)v26;
  qsnprintf();
  v90 = v92;
  v27 = strlen(v104);
  v84 = v27;
  v28 = v27;
  if ( v27 > 0xF )
  {
    v63 = (_QWORD *)std::string::_M_create();
    v90 = v63;
    v92[0] = v84;
  }
  else
  {
    if ( v27 == 1 )
    {
      LOBYTE(v92[0]) = v104[0];
      goto LABEL_35;
    }
    if ( !v27 )
    {
LABEL_35:
      v29 = v92;
      goto LABEL_36;
    }
    v63 = v92;
  }
  if ( v28 >= 8 )
  {
    *v63 = *(_QWORD *)v104;
    *(_QWORD *)((char *)v63 + v28 - 8) = *(_QWORD *)&s[v28 + 24];
    v65 = (unsigned __int64)(v63 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v66 = (char *)v63 - v65;
    v67 = (char *)(v104 - v66);
    v68 = ((_DWORD)v66 + v28) & 0xFFFFFFF8;
    if ( v68 >= 8 )
    {
      v69 = v68 & 0xFFFFFFF8;
      v70 = 0;
      do
      {
        v71 = v70;
        v70 += 8;
        *(_QWORD *)(v65 + v71) = *(_QWORD *)&v67[v71];
      }
      while ( v70 < v69 );
    }
  }
  else if ( (v28 & 4) != 0 )
  {
    *(_DWORD *)v63 = *(_DWORD *)v104;
    *(_DWORD *)((char *)v63 + v28 - 4) = *(_DWORD *)&s[v28 + 28];
  }
  else if ( v28 )
  {
    *(_BYTE *)v63 = v104[0];
    if ( (v28 & 2) != 0 )
      *(_WORD *)((char *)v63 + v28 - 2) = *(_WORD *)&s[v28 + 30];
  }
  v27 = v84;
  v29 = v90;
LABEL_36:
  v91 = v27;
  *((_BYTE *)v29 + v27) = 0;
  v95 = 0;
  *(_QWORD *)v96 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v95 = 3;
  v30 = (_QWORD *)operator new(0x20u);
  v31 = v90;
  v32 = v30 + 2;
  v33 = v91;
  *v30 = v30 + 2;
  if ( v31 == v92 )
  {
    v72 = v33 + 1;
    if ( (unsigned int)(v33 + 1) >= 8 )
    {
      v30[2] = v92[0];
      *(_QWORD *)((char *)v32 + v72 - 8) = *(_QWORD *)((char *)&v92[-1] + v72);
      v73 = (unsigned __int64)(v30 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v74 = (char *)v32 - v73;
      v75 = (char *)((char *)v92 - v74);
      if ( (((_DWORD)v74 + v72) & 0xFFFFFFF8) >= 8 )
      {
        v76 = ((_DWORD)v74 + v72) & 0xFFFFFFF8;
        v77 = 0;
        do
        {
          v78 = v77;
          v77 += 8;
          *(_QWORD *)(v73 + v78) = *(_QWORD *)&v75[v78];
        }
        while ( v77 < v76 );
      }
    }
    else if ( (v72 & 4) != 0 )
    {
      *((_DWORD *)v30 + 4) = v92[0];
      *(_DWORD *)((char *)v32 + v72 - 4) = *(_DWORD *)((char *)&v91 + v72 + 4);
    }
    else if ( (_DWORD)v33 != -1 )
    {
      *((_BYTE *)v30 + 16) = v92[0];
      if ( (v72 & 2) != 0 )
        *(_WORD *)((char *)v32 + v72 - 2) = *(_WORD *)((char *)&v91 + v72 + 6);
    }
  }
  else
  {
    *v30 = v31;
    v30[2] = v92[0];
  }
  v30[1] = v33;
  v90 = v92;
  v91 = 0;
  LOBYTE(v92[0]) = 0;
  *(_OWORD *)v96 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v101,
    (const __m128i *)&v93);
  s1[0] = 0;
  LOBYTE(v97) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v97) = 3;
  v34 = operator new(0x20u);
  strcpy((char *)(v34 + 16), "type_string");
  *(_QWORD *)v34 = v34 + 16;
  *(_QWORD *)(v34 + 8) = 11;
  s2 = (unsigned __int64)v34;
  v99 = 0;
  v100[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v99 = 3;
  v35 = (__int64 *)operator new(0x20u);
  v36 = v35;
  *v35 = (__int64)(v35 + 2);
  if ( !_qstring<char>::c_str(void)const::nullstr )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  dest = v35 + 2;
  v37 = strlen(_qstring<char>::c_str(void)const::nullstr);
  v38 = dest;
  v85 = v37;
  v39 = v37;
  if ( v37 > 0xF )
  {
    desta = (void *)v37;
    v64 = std::string::_M_create();
    *v36 = v64;
    v38 = (void *)v64;
    v39 = (size_t)desta;
    v36[2] = v85;
  }
  else
  {
    if ( v37 == 1 )
    {
      *((_BYTE *)v36 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
      goto LABEL_42;
    }
    if ( !v37 )
      goto LABEL_42;
  }
  memcpy(v38, _qstring<char>::c_str(void)const::nullstr, v39);
  v37 = v85;
  v38 = (void *)*v36;
LABEL_42:
  v36[1] = v37;
  *((_BYTE *)v38 + v37) = 0;
  *(_OWORD *)v100 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s1[1],
    (const __m128i *)&v97);
  s1[3] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v101);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v90 != v92 )
    operator delete(v90, v92[0] + 1LL);
  if ( tinfo )
  {
    tinfo_size = get_tinfo_size();
    v41 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v41 = 6;
    *(_QWORD *)(v41 + 8) = tinfo_size;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v86 = (get_tinfo_property() & 0xF) == 10;
    v42 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v42 = 4;
    *(_QWORD *)(v42 + 8) = v86;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v87 = (get_tinfo_property() & 0xF) == 12;
    v43 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v43 = 4;
    *(_QWORD *)(v43 + 8) = v87;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v88 = (get_tinfo_property() & 0x3F) == 13;
    v44 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v44 = 4;
    *(_QWORD *)(v44 + 8) = v88;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  clear_tinfo_t();
  return a1;
}

