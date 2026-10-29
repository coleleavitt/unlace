__int64 __fastcall ida_mcp::tools::debugger::`anonymous namespace'::get_register_value(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r13
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  std::runtime_error *exception; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r13
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbp
  size_t v14; // rdx
  int v15; // eax
  char v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r15
  _QWORD *v20; // rax
  _BYTE *v21; // rdi
  __int64 *v22; // rbp
  size_t v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 *v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  _QWORD *v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned __int64 v52; // rsi
  char *v53; // rdx
  char *v54; // rdi
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // edx
  __int64 v58; // r8
  int v59; // [rsp+0h] [rbp-128h]
  _BYTE *src; // [rsp+8h] [rbp-120h]
  __int64 v61; // [rsp+10h] [rbp-118h]
  void *v62; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-C0h]
  _QWORD v64[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int128 *p_s2; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+88h] [rbp-A0h]
  __int128 s2; // [rsp+90h] [rbp-98h] BYREF
  void *v68; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-80h]
  _QWORD v70[2]; // [rsp+B0h] [rbp-78h] BYREF
  char v71[40]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v72; // [rsp+E8h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Debugger is not active");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  p_s2 = &s2;
  strcpy((char *)&s2, "register");
  v66 = 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v2,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
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
        v10 = 8;
        if ( v12 <= 8 )
          v10 = *(_QWORD *)(v7 + 40);
        v11 = memcmp(*(const void **)(v7 + 32), &s2, v10);
        if ( v11 || (v11 = v12 - 8, (__int64)(v12 - 8) <= 0x7FFFFFFF) )
        {
          if ( v11 < 0 )
            break;
        }
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_13;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v7 );
LABEL_13:
    if ( v8 != v9 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      if ( v13 )
      {
        v14 = 8;
        if ( v13 <= 8 )
          v14 = *(_QWORD *)(v9 + 40);
        v15 = memcmp(&s2, *(const void **)(v9 + 32), v14);
        if ( v15 || (v15 = 8 - v13, (__int64)(8 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
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
  v62 = v64;
  LOBYTE(v64[0]) = 0;
  if ( v16 != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  LODWORD(p_s2) = -2;
  v66 = -1;
  s2 = 0;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, void *, __int128 **, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64, void **))callui)(
                           1092,
                           v62,
                           &p_s2,
                           &callui,
                           v17,
                           v18,
                           &v62) )
    JUMPOUT(0xC8F2F);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v19 = v63;
  src = v62;
  v20 = (_QWORD *)operator new(0x20u);
  v21 = v20 + 2;
  v22 = v20;
  *v20 = v20 + 2;
  if ( v19 > 0xF )
  {
    v50 = std::string::_M_create();
    *v22 = v50;
    v21 = (_BYTE *)v50;
    v22[2] = v19;
    v23 = v19 + 1;
    v24 = -1;
    if ( v19 != -1 )
      goto LABEL_25;
  }
  else
  {
    v23 = v19 + 1;
    if ( v19 )
    {
LABEL_25:
      memcpy(v21, src, v23);
      v24 = v19;
      goto LABEL_26;
    }
    *v21 = *src;
    v24 = v19;
  }
LABEL_26:
  v22[1] = v24;
  v25 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v25 = 3;
  *(_QWORD *)(v25 + 8) = v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v26 = (int)p_s2;
  v27 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v27 = 5;
  *(_QWORD *)(v27 + 8) = v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (_DWORD)p_s2 == -2 )
  {
    v39 = v66;
    v40 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v40 = 6;
    *(_QWORD *)(v40 + 8) = v39;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    qsnprintf();
    std::string::basic_string<std::allocator<char>>((__int64 *)&v68, v71, v41, v42, v43, v44, v59, (int)src, v61);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v45 = (_QWORD *)operator new(0x20u);
    v46 = v45 + 2;
    v47 = v45;
    v48 = v69;
    *v45 = v45 + 2;
    if ( v68 == v70 )
    {
      v51 = v48 + 1;
      if ( (unsigned int)(v48 + 1) >= 8 )
      {
        v47[2] = v70[0];
        *(_QWORD *)((char *)v46 + v51 - 8) = *(_QWORD *)((char *)&v70[-1] + v51);
        v52 = (unsigned __int64)(v47 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v53 = (char *)v46 - v52;
        v54 = (char *)((char *)v70 - v53);
        v55 = ((_DWORD)v53 + v51) & 0xFFFFFFF8;
        if ( v55 >= 8 )
        {
          v56 = v55 & 0xFFFFFFF8;
          v57 = 0;
          do
          {
            v58 = v57;
            v57 += 8;
            *(_QWORD *)(v52 + v58) = *(_QWORD *)&v54[v58];
          }
          while ( v57 < v56 );
        }
      }
      else if ( (v51 & 4) != 0 )
      {
        *((_DWORD *)v47 + 4) = v70[0];
        *(_DWORD *)((char *)v46 + v51 - 4) = *(_DWORD *)((char *)&v69 + v51 + 4);
      }
      else if ( (_DWORD)v48 != -1 )
      {
        *((_BYTE *)v47 + 16) = v70[0];
        if ( (v51 & 2) != 0 )
          *(_WORD *)((char *)v46 + v51 - 2) = *(_WORD *)((char *)&v69 + v51 + 6);
      }
    }
    else
    {
      *v45 = v68;
      v45[2] = v70[0];
    }
    v47[1] = v48;
    v68 = v70;
    v69 = 0;
    LOBYTE(v70[0]) = 0;
    v49 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v49 = 3;
    *(_QWORD *)(v49 + 8) = v47;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v68 != v70 )
      operator delete(v68, v70[0] + 1LL);
  }
  else
  {
    if ( (_DWORD)p_s2 == -1 )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v28 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(v28, "float", v35, v36, v37, v38, v59, (int)src, v61);
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v28 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(v28, "unsupported_type", v29, v30, v31, v32, v59, (int)src, v61);
    }
    v33 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v33 = 3;
    *(_QWORD *)(v33 + 8) = v28;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  if ( (int)p_s2 >= -1 && v66 )
  {
    *(_QWORD *)&s2 = 0;
    qfree();
  }
  if ( v62 != v64 )
    operator delete(v62, v64[0] + 1LL);
  return a1;
}

