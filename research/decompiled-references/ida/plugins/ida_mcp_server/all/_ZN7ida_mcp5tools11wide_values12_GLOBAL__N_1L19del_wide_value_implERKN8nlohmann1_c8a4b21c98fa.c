_QWORD *__fastcall ida_mcp::tools::wide_values::`anonymous namespace'::del_wide_value_impl(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r13
  size_t v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  size_t v11; // rdx
  int v12; // eax
  _BYTE *v13; // r13
  int *v14; // rax
  int *v15; // r15
  __int64 v16; // rbp
  std::runtime_error *v17; // rbx
  __int64 v18; // rax
  size_t v19; // rax
  unsigned int v20; // r15d
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  size_t v25; // rsi
  __int64 v26; // rax
  _QWORD *v28; // rax
  unsigned __int64 v29; // rdx
  char *v30; // rax
  char *v31; // r12
  unsigned int v32; // r15d
  unsigned int v33; // r15d
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // edi
  unsigned __int64 v37; // r8
  char *v38; // rcx
  char *v39; // r9
  unsigned int v40; // edx
  unsigned int v41; // ecx
  __int64 v42; // rdi
  _BYTE *v44; // [rsp+28h] [rbp-120h]
  size_t v45; // [rsp+28h] [rbp-120h]
  void *v46; // [rsp+30h] [rbp-118h]
  size_t v47; // [rsp+38h] [rbp-110h]
  _QWORD v48[2]; // [rsp+40h] [rbp-108h] BYREF
  char v49; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v50; // [rsp+58h] [rbp-F0h]
  char v51; // [rsp+68h] [rbp-E0h]
  __int128 v52; // [rsp+70h] [rbp-D8h]
  void *v53; // [rsp+80h] [rbp-C8h] BYREF
  __int128 s2; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+98h] [rbp-B0h]
  __int64 v56; // [rsp+A0h] [rbp-A8h]
  __int64 v57; // [rsp+A8h] [rbp-A0h]
  __m128i v58; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-88h]
  __int64 v60; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-70h]
  char s[40]; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+108h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v53 = (char *)&s2 + 8;
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
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = v3 + 8;
  if ( v4 )
  {
    v6 = v3 + 8;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v4 + 40);
        if ( !v9 )
          break;
        v7 = 7;
        if ( v9 <= 7 )
          v7 = *(_QWORD *)(v4 + 40);
        v8 = memcmp(*(const void **)(v4 + 32), (char *)&s2 + 8, v7);
        if ( v8 || (v8 = v9 - 7, (__int64)(v9 - 7) <= 0x7FFFFFFF) )
        {
          if ( v8 < 0 )
            break;
        }
        v6 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v4 )
          goto LABEL_12;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v4 );
LABEL_12:
    if ( v5 != v6 )
    {
      v10 = *(_QWORD *)(v6 + 40);
      if ( v10 )
      {
        v11 = 7;
        if ( v10 <= 7 )
          v11 = *(_QWORD *)(v6 + 40);
        v12 = memcmp((char *)&s2 + 8, *(const void **)(v6 + 32), v11);
        if ( v12 || (v12 = 7 - v10, (__int64)(7 - v10) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v12 >= 0 )
            v5 = v6;
        }
      }
      else
      {
        v5 = v6;
      }
    }
  }
  v53 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v5 + 64) != 3 )
    JUMPOUT(0x10EFD8);
  std::string::_M_assign();
  v13 = v53;
  v14 = __errno_location();
  *v14 = 0;
  v15 = v14;
  v16 = __isoc23_strtoull();
  if ( v13 == v44 || *v44 || *v15 == 34 && v16 == -1 )
  {
    if ( v53 != (char *)&s2 + 8 )
      operator delete(v53, *((_QWORD *)&s2 + 1) + 1LL);
    v17 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v17, "Invalid address format");
    __cxa_throw(
      v17,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v53 != (char *)&s2 + 8 )
    operator delete(v53, *((_QWORD *)&s2 + 1) + 1LL);
  del_wide_value();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v49 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "address");
  *(_QWORD *)(v18 + 8) = 7;
  v50 = (unsigned __int64)v18;
  qsnprintf();
  v46 = v48;
  v19 = strlen(s);
  v45 = v19;
  v20 = v19;
  if ( v19 > 0xF )
  {
    v28 = (_QWORD *)std::string::_M_create();
    v46 = v28;
    v48[0] = v45;
  }
  else
  {
    if ( v19 == 1 )
    {
      LOBYTE(v48[0]) = s[0];
      goto LABEL_33;
    }
    if ( !v19 )
    {
LABEL_33:
      v21 = v48;
      goto LABEL_34;
    }
    v28 = v48;
  }
  if ( v20 >= 8 )
  {
    *v28 = *(_QWORD *)s;
    *(_QWORD *)((char *)v28 + v20 - 8) = *(_QWORD *)&s[v20 - 8];
    v29 = (unsigned __int64)(v28 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v30 = (char *)v28 - v29;
    v31 = (char *)(s - v30);
    v32 = ((_DWORD)v30 + v20) & 0xFFFFFFF8;
    if ( v32 >= 8 )
    {
      v33 = v32 & 0xFFFFFFF8;
      v34 = 0;
      do
      {
        v35 = v34;
        v34 += 8;
        *(_QWORD *)(v29 + v35) = *(_QWORD *)&v31[v35];
      }
      while ( v34 < v33 );
    }
  }
  else if ( (v20 & 4) != 0 )
  {
    *(_DWORD *)v28 = *(_DWORD *)s;
    *(_DWORD *)((char *)v28 + v20 - 4) = *(_DWORD *)&s[v20 - 4];
  }
  else if ( v20 )
  {
    *(_BYTE *)v28 = s[0];
    if ( (v20 & 2) != 0 )
      *(_WORD *)((char *)v28 + v20 - 2) = *(_WORD *)&s[v20 - 2];
  }
  v19 = v45;
  v21 = v46;
LABEL_34:
  v47 = v19;
  *((_BYTE *)v21 + v19) = 0;
  v51 = 0;
  *(_QWORD *)&v52 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v51 = 3;
  v22 = (_QWORD *)operator new(0x20u);
  v23 = v46;
  v24 = v22 + 2;
  v25 = v47;
  *v22 = v22 + 2;
  if ( v23 == v48 )
  {
    v36 = v25 + 1;
    if ( (unsigned int)(v25 + 1) >= 8 )
    {
      v22[2] = v48[0];
      *(_QWORD *)((char *)v24 + v36 - 8) = *(_QWORD *)((char *)&v48[-1] + v36);
      v37 = (unsigned __int64)(v22 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v38 = (char *)v24 - v37;
      v39 = (char *)((char *)v48 - v38);
      if ( (((_DWORD)v38 + v36) & 0xFFFFFFF8) >= 8 )
      {
        v40 = ((_DWORD)v38 + v36) & 0xFFFFFFF8;
        v41 = 0;
        do
        {
          v42 = v41;
          v41 += 8;
          *(_QWORD *)(v37 + v42) = *(_QWORD *)&v39[v42];
        }
        while ( v41 < v40 );
      }
    }
    else if ( (v36 & 4) != 0 )
    {
      *((_DWORD *)v22 + 4) = v48[0];
      *(_DWORD *)((char *)v24 + v36 - 4) = *(_DWORD *)((char *)&v47 + v36 + 4);
    }
    else if ( (_DWORD)v25 != -1 )
    {
      *((_BYTE *)v22 + 16) = v48[0];
      if ( (v36 & 2) != 0 )
        *(_WORD *)((char *)v24 + v36 - 2) = *(_WORD *)((char *)&v47 + v36 + 6);
    }
  }
  else
  {
    *v22 = v23;
    v22[2] = v48[0];
  }
  v22[1] = v25;
  v46 = v48;
  v47 = 0;
  LOBYTE(v48[0]) = 0;
  v52 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v58,
    (const __m128i *)&v49,
    2,
    1);
  v59 = 0;
  LOBYTE(v53) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v53) = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "success");
  *(_QWORD *)(v26 + 8) = 7;
  v55 = 4;
  v56 = 1;
  v57 = 0;
  s2 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v60,
    (const __m128i *)&v53,
    2,
    1);
  v61 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v58,
    2,
    1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v46 != v48 )
    operator delete(v46, v48[0] + 1LL);
  return a1;
}

