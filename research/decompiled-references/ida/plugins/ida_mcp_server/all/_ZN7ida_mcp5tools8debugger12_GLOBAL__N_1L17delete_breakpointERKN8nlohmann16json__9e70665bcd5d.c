_QWORD *__fastcall ida_mcp::tools::debugger::`anonymous namespace'::delete_breakpoint(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r13
  size_t v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  size_t v12; // rdx
  int v13; // eax
  _BYTE *v14; // r12
  int *v15; // rax
  int *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  std::runtime_error *v21; // rax
  unsigned __int8 v22; // al
  unsigned __int8 v23; // bp
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // rax
  unsigned int v27; // ecx
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  size_t v32; // rsi
  _QWORD *v34; // rax
  unsigned __int64 v35; // rdx
  char *v36; // rax
  char *v37; // rbp
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // eax
  __int64 v41; // rsi
  unsigned int v42; // edi
  unsigned __int64 v43; // r8
  char *v44; // rcx
  char *v45; // r9
  unsigned int v46; // edx
  unsigned int v47; // ecx
  __int64 v48; // rdi
  _QWORD *v49; // [rsp+0h] [rbp-148h]
  unsigned int v50; // [rsp+18h] [rbp-130h]
  _BYTE *v51; // [rsp+28h] [rbp-120h]
  void *v52; // [rsp+30h] [rbp-118h]
  size_t v53; // [rsp+38h] [rbp-110h]
  _QWORD v54[2]; // [rsp+40h] [rbp-108h] BYREF
  char v55; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v56; // [rsp+58h] [rbp-F0h]
  char v57; // [rsp+68h] [rbp-E0h]
  __int64 v58; // [rsp+70h] [rbp-D8h]
  __int64 v59; // [rsp+78h] [rbp-D0h]
  void *v60; // [rsp+80h] [rbp-C8h] BYREF
  __int128 s2; // [rsp+88h] [rbp-C0h] BYREF
  char v62; // [rsp+98h] [rbp-B0h]
  __int128 v63; // [rsp+A0h] [rbp-A8h]
  __m128i v64; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-88h]
  __int64 v66; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-70h]
  char s[40]; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v69; // [rsp+108h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v60 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = (char *)"array";
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
    v51 = v3;
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
  v60 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v6 + 64) != 3 )
    JUMPOUT(0xCC09C);
  std::string::_M_assign();
  v14 = v60;
  v15 = __errno_location();
  *v15 = 0;
  v16 = v15;
  v18 = __isoc23_strtoull();
  if ( v14 == v51 || *v51 || *v16 == 34 && v18 == -1 )
  {
    if ( v60 != (char *)&s2 + 8 )
      operator delete(v60, *((_QWORD *)&s2 + 1) + 1LL);
    v21 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v21, "Invalid address format");
    JUMPOUT(0xCC1D6);
  }
  if ( v60 != (char *)&s2 + 8 )
    operator delete(v60, *((_QWORD *)&s2 + 1) + 1LL);
  v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          1028,
          v18,
          &callui,
          v17,
          v19,
          v20,
          a1);
  v55 = 0;
  *(_QWORD *)&v56 = 0;
  v23 = v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v55 = 3;
  v24 = operator new(0x20u);
  strcpy((char *)(v24 + 16), "success");
  *(_QWORD *)v24 = v24 + 16;
  *(_QWORD *)(v24 + 8) = 7;
  v57 = 4;
  v58 = v23;
  v59 = 0;
  v56 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v64,
    (const __m128i *)&v55);
  v65 = 0;
  LOBYTE(v60) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v60) = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "address");
  *(_QWORD *)(v25 + 8) = 7;
  s2 = (unsigned __int64)v25;
  qsnprintf();
  v52 = v54;
  v26 = strlen(s);
  v51 = (_BYTE *)v26;
  v27 = v26;
  if ( v26 > 0xF )
  {
    v50 = v26;
    v34 = (_QWORD *)std::string::_M_create();
    v27 = v50;
    v52 = v34;
    v54[0] = v51;
  }
  else
  {
    if ( v26 == 1 )
    {
      LOBYTE(v54[0]) = s[0];
      goto LABEL_33;
    }
    if ( !v26 )
    {
LABEL_33:
      v28 = v54;
      goto LABEL_34;
    }
    v34 = v54;
  }
  if ( v27 >= 8 )
  {
    *v34 = *(_QWORD *)s;
    *(_QWORD *)((char *)v34 + v27 - 8) = *(_QWORD *)&s[v27 - 8];
    v35 = (unsigned __int64)(v34 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v36 = (char *)v34 - v35;
    v37 = (char *)(s - v36);
    v38 = ((_DWORD)v36 + v27) & 0xFFFFFFF8;
    if ( v38 >= 8 )
    {
      v39 = v38 & 0xFFFFFFF8;
      v40 = 0;
      do
      {
        v41 = v40;
        v40 += 8;
        *(_QWORD *)(v35 + v41) = *(_QWORD *)&v37[v41];
      }
      while ( v40 < v39 );
    }
  }
  else if ( (v27 & 4) != 0 )
  {
    *(_DWORD *)v34 = *(_DWORD *)s;
    *(_DWORD *)((char *)v34 + v27 - 4) = *(_DWORD *)&s[v27 - 4];
  }
  else if ( v27 )
  {
    *(_BYTE *)v34 = s[0];
    if ( (v27 & 2) != 0 )
      *(_WORD *)((char *)v34 + v27 - 2) = *(_WORD *)&s[v27 - 2];
  }
  v26 = (size_t)v51;
  v28 = v52;
LABEL_34:
  v53 = v26;
  *((_BYTE *)v28 + v26) = 0;
  v62 = 0;
  *(_QWORD *)&v63 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v62 = 3;
  v29 = (_QWORD *)operator new(0x20u);
  v30 = v52;
  v31 = v29 + 2;
  v32 = v53;
  *v29 = v29 + 2;
  if ( v30 == v54 )
  {
    v42 = v32 + 1;
    if ( (unsigned int)(v32 + 1) >= 8 )
    {
      v29[2] = v54[0];
      *(_QWORD *)((char *)v31 + v42 - 8) = *(_QWORD *)((char *)&v54[-1] + v42);
      v43 = (unsigned __int64)(v29 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v44 = (char *)v31 - v43;
      v45 = (char *)((char *)v54 - v44);
      if ( (((_DWORD)v44 + v42) & 0xFFFFFFF8) >= 8 )
      {
        v46 = ((_DWORD)v44 + v42) & 0xFFFFFFF8;
        v47 = 0;
        do
        {
          v48 = v47;
          v47 += 8;
          *(_QWORD *)(v43 + v48) = *(_QWORD *)&v45[v48];
        }
        while ( v47 < v46 );
      }
    }
    else if ( (v42 & 4) != 0 )
    {
      *((_DWORD *)v29 + 4) = v54[0];
      *(_DWORD *)((char *)v31 + v42 - 4) = *(_DWORD *)((char *)&v53 + v42 + 4);
    }
    else if ( (_DWORD)v32 != -1 )
    {
      *((_BYTE *)v29 + 16) = v54[0];
      if ( (v42 & 2) != 0 )
        *(_WORD *)((char *)v31 + v42 - 2) = *(_WORD *)((char *)&v53 + v42 + 6);
    }
  }
  else
  {
    *v29 = v30;
    v29[2] = v54[0];
  }
  v29[1] = v32;
  v52 = v54;
  v53 = 0;
  LOBYTE(v54[0]) = 0;
  v63 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v66,
    (const __m128i *)&v60);
  v67 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v49,
    &v64);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v52 != v54 )
    operator delete(v52, v54[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v49;
}

