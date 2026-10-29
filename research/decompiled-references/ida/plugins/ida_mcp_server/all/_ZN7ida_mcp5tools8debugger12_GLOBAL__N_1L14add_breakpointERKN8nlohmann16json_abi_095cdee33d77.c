__int64 __fastcall ida_mcp::tools::debugger::`anonymous namespace'::add_breakpoint(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  char v5; // al
  _BYTE *v6; // rbx
  int *v7; // rax
  int *v8; // r13
  __int64 v9; // r9
  std::runtime_error *v10; // rbx
  int v11; // ebx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  size_t v17; // rax
  unsigned int v18; // r13d
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rbp
  size_t v23; // rcx
  __int64 v24; // rax
  const char *v25; // rbp
  __int64 *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v34; // rdx
  __int64 v35; // r13
  __int64 v36; // r14
  size_t v37; // rdx
  int v38; // eax
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rbx
  size_t v41; // rdx
  int v42; // eax
  _BYTE *v43; // rbx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rdx
  char *v46; // rax
  char *v47; // rbp
  unsigned int v48; // r13d
  unsigned int v49; // r13d
  unsigned int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // eax
  unsigned __int64 v53; // rsi
  char *v54; // rdx
  char *v55; // r8
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // edx
  __int64 v59; // rdi
  int v60; // [rsp+0h] [rbp-108h]
  __int64 v61; // [rsp+10h] [rbp-F8h]
  __int64 v62; // [rsp+28h] [rbp-E0h]
  size_t v63; // [rsp+38h] [rbp-D0h]
  _BYTE *v64; // [rsp+50h] [rbp-B8h]
  __int64 v65; // [rsp+58h] [rbp-B0h] BYREF
  void *v66; // [rsp+60h] [rbp-A8h]
  __int64 v67; // [rsp+68h] [rbp-A0h]
  _QWORD v68[2]; // [rsp+70h] [rbp-98h] BYREF
  void *v69; // [rsp+80h] [rbp-88h] BYREF
  size_t v70; // [rsp+88h] [rbp-80h]
  _QWORD v71[2]; // [rsp+90h] [rbp-78h] BYREF
  char s[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v73; // [rsp+C8h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  LOBYTE(v68[0]) = 0;
  v66 = v68;
  v5 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v67 = 0;
  if ( v5 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  v6 = v66;
  v7 = __errno_location();
  *v7 = 0;
  v8 = v7;
  v61 = __isoc23_strtoull();
  if ( v6 == v64 || *v64 || *v8 == 34 && v61 == -1 )
  {
    if ( v66 != v68 )
      operator delete(v66, v68[0] + 1LL);
    v10 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v10, "Invalid address format");
    __cxa_throw(
      v10,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v66 != v68 )
    operator delete(v66, v68[0] + 1LL);
  v11 = 4;
  if ( *(_BYTE *)a2 == 1 )
  {
    v34 = *(_QWORD *)(a2 + 8);
    v35 = *(_QWORD *)(v34 + 16);
    if ( v35 )
    {
      v62 = v34 + 8;
      v36 = v34 + 8;
      do
      {
        while ( 1 )
        {
          v39 = *(_QWORD *)(v35 + 40);
          if ( !v39 )
            break;
          v37 = 4;
          if ( v39 <= 4 )
            v37 = *(_QWORD *)(v35 + 40);
          v38 = memcmp(*(const void **)(v35 + 32), "type", v37);
          if ( v38 || (v38 = v39 - 4, (__int64)(v39 - 4) <= 0x7FFFFFFF) )
          {
            if ( v38 < 0 )
              break;
          }
          v36 = v35;
          v35 = *(_QWORD *)(v35 + 16);
          if ( !v35 )
            goto LABEL_37;
        }
        v35 = *(_QWORD *)(v35 + 24);
      }
      while ( v35 );
LABEL_37:
      if ( v62 != v36 )
      {
        v40 = *(_QWORD *)(v36 + 40);
        if ( !v40 )
        {
LABEL_44:
          v66 = v68;
          v67 = 0;
          v43 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          LOBYTE(v68[0]) = 0;
          if ( *v43 != 3 )
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
          v11 = 1;
          if ( !(unsigned __int8)std::operator==<char>() )
          {
            v11 = 3;
            if ( !(unsigned __int8)std::operator==<char>() )
              v11 = 4 - (unsigned __int8)std::operator==<char>();
          }
          if ( v66 != v68 )
            operator delete(v66, v68[0] + 1LL);
          goto LABEL_12;
        }
        v41 = 4;
        if ( v40 <= 4 )
          v41 = *(_QWORD *)(v36 + 40);
        v42 = memcmp(*(const void **)(v36 + 32), "type", v41);
        if ( v42 || (v42 = v40 - 4, (__int64)(v40 - 4) <= 0x7FFFFFFF) )
        {
          v11 = 4;
          if ( v42 > 0 )
            goto LABEL_12;
          goto LABEL_44;
        }
      }
      v11 = 4;
    }
  }
LABEL_12:
  v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          1026,
          v61,
          0,
          (unsigned int)v11,
          &callui,
          v9);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v13 = v12;
  v65 = v12;
  v14 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v15 = v65;
  *(_BYTE *)v14 = 4;
  v16 = *(_QWORD *)(v14 + 8);
  *(_QWORD *)(v14 + 8) = v15;
  v65 = v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  qsnprintf();
  v69 = v71;
  v17 = strlen(s);
  v63 = v17;
  v18 = v17;
  if ( v17 > 0xF )
  {
    v44 = (_QWORD *)std::string::_M_create();
    v69 = v44;
    v71[0] = v63;
  }
  else
  {
    if ( v17 == 1 )
    {
      LOBYTE(v71[0]) = s[0];
LABEL_15:
      v19 = v71;
      goto LABEL_16;
    }
    if ( !v17 )
      goto LABEL_15;
    v44 = v71;
  }
  if ( v18 >= 8 )
  {
    *v44 = *(_QWORD *)s;
    *(_QWORD *)((char *)v44 + v18 - 8) = *(_QWORD *)((char *)&v71[1] + v18);
    v45 = (unsigned __int64)(v44 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v46 = (char *)v44 - v45;
    v47 = (char *)(s - v46);
    v48 = ((_DWORD)v46 + v18) & 0xFFFFFFF8;
    if ( v48 >= 8 )
    {
      v49 = v48 & 0xFFFFFFF8;
      v50 = 0;
      do
      {
        v51 = v50;
        v50 += 8;
        *(_QWORD *)(v45 + v51) = *(_QWORD *)&v47[v51];
      }
      while ( v50 < v49 );
    }
  }
  else if ( (v18 & 4) != 0 )
  {
    *(_DWORD *)v44 = *(_DWORD *)s;
    *(_DWORD *)((char *)v44 + v18 - 4) = *(_DWORD *)((char *)&v71[1] + v18 + 4);
  }
  else if ( v18 )
  {
    *(_BYTE *)v44 = s[0];
    if ( (v18 & 2) != 0 )
      *(_WORD *)((char *)v44 + v18 - 2) = *(_WORD *)((char *)&v71[1] + v18 + 6);
  }
  v17 = v63;
  v19 = v69;
LABEL_16:
  v70 = v17;
  *((_BYTE *)v19 + v17) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v20 = (_QWORD *)operator new(0x20u);
  v21 = v20 + 2;
  v22 = v20;
  v23 = v70;
  *v20 = v20 + 2;
  if ( v69 == v71 )
  {
    v52 = v23 + 1;
    if ( (unsigned int)(v23 + 1) >= 8 )
    {
      v22[2] = v71[0];
      *(_QWORD *)((char *)v21 + v52 - 8) = *(_QWORD *)((char *)&v71[-1] + v52);
      v53 = (unsigned __int64)(v22 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v54 = (char *)v21 - v53;
      v55 = (char *)((char *)v71 - v54);
      v56 = ((_DWORD)v54 + v52) & 0xFFFFFFF8;
      if ( v56 >= 8 )
      {
        v57 = v56 & 0xFFFFFFF8;
        v58 = 0;
        do
        {
          v59 = v58;
          v58 += 8;
          *(_QWORD *)(v53 + v59) = *(_QWORD *)&v55[v59];
        }
        while ( v58 < v57 );
      }
    }
    else if ( (v52 & 4) != 0 )
    {
      *((_DWORD *)v22 + 4) = v71[0];
      *(_DWORD *)((char *)v21 + v52 - 4) = *(_DWORD *)((char *)&v70 + v52 + 4);
    }
    else if ( (_DWORD)v23 != -1 )
    {
      *((_BYTE *)v22 + 16) = v71[0];
      if ( (v52 & 2) != 0 )
        *(_WORD *)((char *)v21 + v52 - 2) = *(_WORD *)((char *)&v70 + v52 + 6);
    }
  }
  else
  {
    *v20 = v69;
    v20[2] = v71[0];
  }
  v22[1] = v23;
  v69 = v71;
  v70 = 0;
  LOBYTE(v71[0]) = 0;
  v24 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v24 = 3;
  *(_QWORD *)(v24 + 8) = v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v69 != v71 )
    operator delete(v69, v71[0] + 1LL);
  if ( v13 )
  {
    if ( v11 == 4 )
    {
      v25 = "Software";
    }
    else
    {
      v25 = "Hardware_Execute";
      if ( v11 <= 4 )
      {
        v25 = "Hardware_Write";
        if ( v11 != 1 )
          v25 = "Hardware_ReadWrite";
      }
    }
    v65 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v26 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v26, v25, v27, v28, v29, v30, v60, (int)&v65, (__int64)&v69);
    v31 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v32 = *(_QWORD *)(v31 + 8);
    *(_BYTE *)v31 = 3;
    *(_QWORD *)(v31 + 8) = v26;
    v65 = v32;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  return a1;
}

