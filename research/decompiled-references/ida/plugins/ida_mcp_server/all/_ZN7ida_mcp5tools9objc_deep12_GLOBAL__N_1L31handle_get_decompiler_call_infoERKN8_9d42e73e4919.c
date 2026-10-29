// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_decompiler_call_info(
        __int64 a1,
        __int64 a2)
{
  void *v2; // r14
  size_t v3; // rax
  unsigned int v4; // r15d
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  nlohmann::json_abi_v3_12_0::detail::type_error *v6; // r15
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  size_t v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  size_t v17; // rdx
  int v18; // eax
  int *v19; // rax
  int *v20; // r14
  __int64 v21; // r15
  std::runtime_error *v22; // rbx
  size_t v23; // rax
  unsigned int v24; // r13d
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // r12
  size_t v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rax
  void *v32; // r13
  __int64 *v33; // rbx
  size_t v34; // rax
  size_t v35; // r14
  __int64 v36; // rax
  __int64 *v37; // rax
  void *v38; // r13
  __int64 *v39; // rbx
  size_t v40; // rax
  size_t v41; // r14
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v54; // rax
  __int64 *v55; // rax
  void *v56; // r14
  __int64 *v57; // rbx
  size_t v58; // rax
  size_t v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  char *v64; // rax
  char *v65; // r12
  unsigned int v66; // r13d
  unsigned int v67; // r13d
  unsigned int v68; // eax
  __int64 v69; // rcx
  unsigned int v70; // esi
  __int64 v71; // rax
  unsigned __int64 v72; // rdi
  char *v73; // r8
  unsigned int v74; // eax
  unsigned int v75; // edx
  __int64 v76; // rsi
  _QWORD *func; // [rsp+20h] [rbp-1E0h]
  void *dest; // [rsp+48h] [rbp-1B8h]
  size_t v80; // [rsp+80h] [rbp-180h]
  char *v81; // [rsp+E0h] [rbp-120h]
  char *v82; // [rsp+E0h] [rbp-120h]
  char *v83; // [rsp+E0h] [rbp-120h]
  __int64 v84; // [rsp+E8h] [rbp-118h]
  __int64 v85; // [rsp+E8h] [rbp-118h]
  size_t v86; // [rsp+100h] [rbp-100h]
  char *v87; // [rsp+100h] [rbp-100h]
  __int64 v88; // [rsp+108h] [rbp-F8h]
  __int64 v89; // [rsp+108h] [rbp-F8h]
  char *v90; // [rsp+160h] [rbp-A0h]
  char s2[16]; // [rsp+170h] [rbp-90h] BYREF
  void *v92; // [rsp+180h] [rbp-80h]
  size_t v93; // [rsp+188h] [rbp-78h]
  _QWORD v94[2]; // [rsp+190h] [rbp-70h] BYREF
  char s[40]; // [rsp+1A0h] [rbp-60h] BYREF
  unsigned __int64 v96; // [rsp+1C8h] [rbp-38h]

  v96 = __readfsqword(0x28u);
  v7 = s2;
  strcpy(s2, "address");
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
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v8 + 8;
  v10 = *(_QWORD *)(v8 + 16);
  if ( v10 )
  {
    v11 = v9;
    v12 = v10;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v12 + 40);
        if ( !v15 )
          break;
        v13 = 7;
        if ( v15 <= 7 )
          v13 = *(_QWORD *)(v12 + 40);
        v14 = memcmp(*(const void **)(v12 + 32), s2, v13);
        if ( v14 || (v14 = v15 - 7, (__int64)(v15 - 7) <= 0x7FFFFFFF) )
        {
          if ( v14 < 0 )
            break;
        }
        v11 = v12;
        v12 = *(_QWORD *)(v12 + 16);
        if ( !v12 )
          goto LABEL_12;
      }
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v12 );
LABEL_12:
    if ( v9 != v11 )
    {
      v16 = *(_QWORD *)(v11 + 40);
      if ( v16 )
      {
        v17 = 7;
        if ( v16 <= 7 )
          v17 = *(_QWORD *)(v11 + 40);
        v18 = memcmp(s2, *(const void **)(v11 + 32), v17);
        if ( v18 || (v18 = 7 - v16, (__int64)(7 - v16) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v18 >= 0 )
            v9 = v11;
        }
      }
      else
      {
        v9 = v11;
      }
    }
  }
  s2[0] = 0;
  if ( *(_BYTE *)(v9 + 64) != 3 )
  {
    v6 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v6,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v19 = __errno_location();
  *v19 = 0;
  v20 = v19;
  v21 = __isoc23_strtoull();
  if ( s2 == v87 || *v87 || *v20 == 34 && v21 == -1 )
  {
    v22 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v22, "Invalid address");
    __cxa_throw(
      v22,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  func = (_QWORD *)get_func();
  if ( !func )
  {
    v2 = __cxa_allocate_exception(0x10u);
    qsnprintf();
    v90 = s2;
    v3 = strlen(s);
    v86 = v3;
    v4 = v3;
    if ( v3 > 0xF )
    {
      v90 = (char *)std::string::_M_create();
      v7 = v90;
      *(_QWORD *)s2 = v86;
    }
    else
    {
      if ( v3 == 1 )
      {
        s2[0] = s[0];
LABEL_93:
        v90[v86] = 0;
        std::string::insert();
        std::string::basic_string();
        std::runtime_error::runtime_error();
        std::string::_M_dispose();
        std::string::_M_dispose();
        __cxa_throw(
          v2,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))&std::runtime_error::~runtime_error);
      }
      if ( !v3 )
        goto LABEL_93;
    }
    qmemcpy(v7, s, v4);
    goto LABEL_93;
  }
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsnprintf();
  v92 = v94;
  v23 = strlen(s);
  v81 = (char *)v23;
  v24 = v23;
  if ( v23 > 0xF )
  {
    v61 = (_QWORD *)std::string::_M_create();
    v92 = v61;
    v94[0] = v81;
  }
  else
  {
    if ( v23 == 1 )
    {
      LOBYTE(v94[0]) = s[0];
      goto LABEL_30;
    }
    if ( !v23 )
    {
LABEL_30:
      v25 = v94;
      goto LABEL_31;
    }
    v61 = v94;
  }
  if ( v24 >= 8 )
  {
    *v61 = *(_QWORD *)s;
    *(_QWORD *)((char *)v61 + v24 - 8) = *(_QWORD *)((char *)&v94[1] + v24);
    v63 = (unsigned __int64)(v61 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v64 = (char *)v61 - v63;
    v65 = (char *)(s - v64);
    v66 = ((_DWORD)v64 + v24) & 0xFFFFFFF8;
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
  else if ( (v24 & 4) != 0 )
  {
    *(_DWORD *)v61 = *(_DWORD *)s;
    *(_DWORD *)((char *)v61 + v24 - 4) = *(_DWORD *)((char *)&v94[1] + v24 + 4);
  }
  else if ( v24 )
  {
    *(_BYTE *)v61 = s[0];
    if ( (v24 & 2) != 0 )
      *(_WORD *)((char *)v61 + v24 - 2) = *(_WORD *)((char *)&v94[1] + v24 + 6);
  }
  v23 = (size_t)v81;
  v25 = v92;
LABEL_31:
  v93 = v23;
  *((_BYTE *)v25 + v23) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v26 = (_QWORD *)operator new(0x20u);
  v27 = v26 + 2;
  v28 = v26;
  v29 = v93;
  *v26 = v26 + 2;
  if ( v92 == v94 )
  {
    v70 = v29 + 1;
    if ( (unsigned int)(v29 + 1) >= 8 )
    {
      v26[2] = v94[0];
      *(_QWORD *)((char *)v27 + v70 - 8) = *(_QWORD *)((char *)&v94[-1] + v70);
      v72 = (unsigned __int64)(v26 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v73 = (char *)((char *)v94 - ((char *)v27 - v72));
      if ( ((v70 + (_DWORD)v27 - (_DWORD)v72) & 0xFFFFFFF8) >= 8 )
      {
        v74 = (v70 + (_DWORD)v27 - v72) & 0xFFFFFFF8;
        v75 = 0;
        do
        {
          v76 = v75;
          v75 += 8;
          *(_QWORD *)(v72 + v76) = *(_QWORD *)&v73[v76];
        }
        while ( v75 < v74 );
      }
    }
    else if ( (v70 & 4) != 0 )
    {
      *((_DWORD *)v26 + 4) = v94[0];
      *(_DWORD *)((char *)v27 + v70 - 4) = *(_DWORD *)((char *)&v93 + v70 + 4);
    }
    else if ( (_DWORD)v29 != -1 )
    {
      *((_BYTE *)v26 + 16) = v94[0];
      if ( (v70 & 2) != 0 )
        *(_WORD *)((char *)v27 + v70 - 2) = *(_WORD *)((char *)&v93 + v70 + 6);
    }
  }
  else
  {
    *v26 = v92;
    v26[2] = v94[0];
  }
  v28[1] = v29;
  v92 = v94;
  v93 = 0;
  LOBYTE(v94[0]) = 0;
  v30 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v30 = 3;
  *(_QWORD *)(v30 + 8) = v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v92 != v94 )
    operator delete(v92, v94[0] + 1LL);
  get_func_name();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v31 = (__int64 *)operator new(0x20u);
  v32 = v31 + 2;
  v33 = v31;
  *v31 = (__int64)(v31 + 2);
  if ( !_qstring<char>::c_str(void)const::nullstr )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v34 = strlen(_qstring<char>::c_str(void)const::nullstr);
  v82 = (char *)v34;
  v35 = v34;
  if ( v34 > 0xF )
  {
    v60 = std::string::_M_create();
    *v33 = v60;
    v32 = (void *)v60;
    v33[2] = (__int64)v82;
    goto LABEL_60;
  }
  if ( v34 == 1 )
  {
    *((_BYTE *)v33 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
    goto LABEL_39;
  }
  if ( v34 )
  {
LABEL_60:
    memcpy(v32, _qstring<char>::c_str(void)const::nullstr, v35);
    v34 = (size_t)v82;
    v32 = (void *)*v33;
  }
LABEL_39:
  v33[1] = v34;
  *((_BYTE *)v32 + v34) = 0;
  v36 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v36 = 3;
  *(_QWORD *)(v36 + 8) = v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (unsigned __int8)get_tinfo() || (unsigned int)guess_tinfo() )
  {
    print_tinfo();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v37 = (__int64 *)operator new(0x20u);
    v38 = v37 + 2;
    v39 = v37;
    *v37 = (__int64)(v37 + 2);
    if ( !_qstring<char>::c_str(void)const::nullstr )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v40 = strlen(_qstring<char>::c_str(void)const::nullstr);
    v83 = (char *)v40;
    v41 = v40;
    if ( v40 > 0xF )
    {
      v62 = std::string::_M_create();
      *v39 = v62;
      v38 = (void *)v62;
      v39[2] = (__int64)v83;
    }
    else
    {
      if ( v40 == 1 )
      {
        *((_BYTE *)v39 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
        goto LABEL_45;
      }
      if ( !v40 )
        goto LABEL_45;
    }
    memcpy(v38, _qstring<char>::c_str(void)const::nullstr, v41);
    v40 = (size_t)v83;
    v38 = (void *)*v39;
LABEL_45:
    v39[1] = v40;
    *((_BYTE *)v38 + v40) = 0;
    v42 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v42 = 3;
    *(_QWORD *)(v42 + 8) = v39;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !(unsigned __int8)get_tinfo_details() )
      goto LABEL_50;
    v43 = getinf() & 0xF0;
    v44 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v44 = 6;
    *(_QWORD *)(v44 + 8) = v43;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v45 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v45 = 6;
    *(_QWORD *)(v45 + 8) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v84 = func[2] & 1LL;
    v46 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v46 = 4;
    v47 = *(_QWORD *)(v46 + 8);
    *(_QWORD *)(v46 + 8) = v84;
    v85 = v47;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v54 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v54 = 0;
    *(_QWORD *)(v54 + 8) = v85;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    print_tinfo();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v55 = (__int64 *)operator new(0x20u);
    v56 = v55 + 2;
    v57 = v55;
    *v55 = (__int64)(v55 + 2);
    if ( !_qstring<char>::c_str(void)const::nullstr )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v58 = strlen(_qstring<char>::c_str(void)const::nullstr);
    v80 = v58;
    v59 = v58;
    if ( v58 <= 0xF )
    {
      if ( v58 == 1 )
      {
        *((_BYTE *)v57 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
      }
      else if ( v58 )
      {
LABEL_56:
        memcpy(v56, _qstring<char>::c_str(void)const::nullstr, v59);
        v58 = v80;
        v56 = (void *)*v57;
      }
      v57[1] = v58;
      *((_BYTE *)v56 + v58) = 0;
      v48 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v48 = 3;
      *(_QWORD *)(v48 + 8) = v57;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_50:
      cleanup_argloc();
      clear_tinfo_t();
      goto LABEL_51;
    }
    dest = (void *)v58;
    v71 = std::string::_M_create();
    *v57 = v71;
    v56 = (void *)v71;
    v59 = (size_t)dest;
    v57[2] = v80;
    goto LABEL_56;
  }
LABEL_51:
  v88 = *((_BYTE *)func + 16) >> 7;
  v49 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v49 = 4;
  *(_QWORD *)(v49 + 8) = v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = func[2] & 1LL;
  v50 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v50 = 4;
  *(_QWORD *)(v50 + 8) = v89;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v51 = func[1] - *func;
  v52 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v52 = 6;
  *(_QWORD *)(v52 + 8) = v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  clear_tinfo_t();
  return a1;
}

