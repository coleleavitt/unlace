__int64 __fastcall ida_mcp::tools::source_info::`anonymous namespace'::handle_get_source_line(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
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
  __int64 v16; // r12
  std::runtime_error *v17; // rax
  int source_linnum; // r13d
  __int64 v19; // rax
  size_t v20; // rax
  unsigned int v21; // r15d
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  size_t *v24; // rdx
  _QWORD *v25; // rcx
  size_t v26; // rsi
  __int64 v27; // rax
  __int128 v28; // xmm0
  char v29; // dl
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char *v35; // rbx
  _QWORD *v37; // rax
  unsigned __int64 v38; // rdx
  char *v39; // rax
  char *v40; // rbp
  unsigned int v41; // r15d
  unsigned int v42; // r15d
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // edi
  unsigned __int64 v46; // r8
  char *v47; // rcx
  char *v48; // r9
  unsigned int v49; // edx
  unsigned int v50; // ecx
  __int64 v51; // rdi
  int v52; // [rsp+0h] [rbp-1A8h]
  __int64 v54; // [rsp+8h] [rbp-1A0h]
  __int64 v55; // [rsp+30h] [rbp-178h]
  _BYTE *v56; // [rsp+38h] [rbp-170h]
  size_t v57; // [rsp+38h] [rbp-170h]
  void *v58; // [rsp+40h] [rbp-168h] BYREF
  size_t v59; // [rsp+48h] [rbp-160h]
  size_t v60; // [rsp+50h] [rbp-158h] BYREF
  char v61; // [rsp+58h] [rbp-150h]
  __int64 v62; // [rsp+60h] [rbp-148h] BYREF
  __int128 v63; // [rsp+68h] [rbp-140h] BYREF
  char v64; // [rsp+78h] [rbp-130h]
  __int128 v65; // [rsp+80h] [rbp-128h] BYREF
  char v66; // [rsp+90h] [rbp-118h] BYREF
  __int128 v67; // [rsp+98h] [rbp-110h]
  char v68; // [rsp+A8h] [rbp-100h]
  __int64 v69; // [rsp+B0h] [rbp-F8h]
  __int64 v70; // [rsp+B8h] [rbp-F0h]
  void *v71; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 s2; // [rsp+C8h] [rbp-E0h] BYREF
  char v73; // [rsp+D8h] [rbp-D0h]
  _BOOL8 v74; // [rsp+E0h] [rbp-C8h]
  __int64 v75; // [rsp+E8h] [rbp-C0h]
  _QWORD v76[3]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v77[3]; // [rsp+108h] [rbp-A0h] BYREF
  _QWORD v78[3]; // [rsp+120h] [rbp-88h] BYREF
  char v79[8]; // [rsp+138h] [rbp-70h] BYREF
  char s[40]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v81; // [rsp+168h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v71 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x13F401);
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
  v71 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v5 + 64) != 3 )
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
  v13 = v71;
  v14 = __errno_location();
  *v14 = 0;
  v15 = v14;
  v16 = __isoc23_strtoull();
  if ( v13 == v56 || *v56 || *v15 == 34 && v16 == -1 )
  {
    if ( v71 != (char *)&s2 + 8 )
      operator delete(v71, *((_QWORD *)&s2 + 1) + 1LL);
    v17 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v17, "Invalid address");
    JUMPOUT(0x13F5FE);
  }
  if ( v71 != (char *)&s2 + 8 )
    operator delete(v71, *((_QWORD *)&s2 + 1) + 1LL);
  *(_QWORD *)&v63 = 0;
  source_linnum = get_source_linnum();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v62) = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  strcpy((char *)(v19 + 16), "address");
  *(_QWORD *)(v19 + 8) = 7;
  v63 = (unsigned __int64)v19;
  qsnprintf();
  v58 = &v60;
  v20 = strlen(s);
  v57 = v20;
  v21 = v20;
  if ( v20 > 0xF )
  {
    v37 = (_QWORD *)std::string::_M_create();
    v58 = v37;
    v60 = v57;
  }
  else
  {
    if ( v20 == 1 )
    {
      LOBYTE(v60) = s[0];
      goto LABEL_33;
    }
    if ( !v20 )
    {
LABEL_33:
      v22 = &v60;
      goto LABEL_34;
    }
    v37 = &v60;
  }
  if ( v21 >= 8 )
  {
    *v37 = *(_QWORD *)s;
    *(_QWORD *)((char *)v37 + v21 - 8) = *(_QWORD *)&v79[v21];
    v38 = (unsigned __int64)(v37 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v39 = (char *)v37 - v38;
    v40 = (char *)(s - v39);
    v41 = ((_DWORD)v39 + v21) & 0xFFFFFFF8;
    if ( v41 >= 8 )
    {
      v42 = v41 & 0xFFFFFFF8;
      v43 = 0;
      do
      {
        v44 = v43;
        v43 += 8;
        *(_QWORD *)(v38 + v44) = *(_QWORD *)&v40[v44];
      }
      while ( v43 < v42 );
    }
  }
  else if ( (v21 & 4) != 0 )
  {
    *(_DWORD *)v37 = *(_DWORD *)s;
    *(_DWORD *)((char *)v37 + v21 - 4) = *(_DWORD *)&v79[v21 + 4];
  }
  else if ( v21 )
  {
    *(_BYTE *)v37 = s[0];
    if ( (v21 & 2) != 0 )
      *(_WORD *)((char *)v37 + v21 - 2) = *(_WORD *)&v79[v21 + 6];
  }
  v20 = v57;
  v22 = v58;
LABEL_34:
  v59 = v20;
  *((_BYTE *)v22 + v20) = 0;
  v64 = 0;
  *(_QWORD *)&v65 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v64 = 3;
  v23 = (_QWORD *)operator new(0x20u);
  v24 = (size_t *)v58;
  v25 = v23 + 2;
  v26 = v59;
  *v23 = v23 + 2;
  if ( v24 == &v60 )
  {
    v45 = v26 + 1;
    if ( (unsigned int)(v26 + 1) >= 8 )
    {
      v23[2] = v60;
      *(_QWORD *)((char *)v25 + v45 - 8) = *(size_t *)((char *)&v59 + v45);
      v46 = (unsigned __int64)(v23 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v47 = (char *)v25 - v46;
      v48 = (char *)((char *)&v60 - v47);
      if ( (((_DWORD)v47 + v45) & 0xFFFFFFF8) >= 8 )
      {
        v49 = ((_DWORD)v47 + v45) & 0xFFFFFFF8;
        v50 = 0;
        do
        {
          v51 = v50;
          v50 += 8;
          *(_QWORD *)(v46 + v51) = *(_QWORD *)&v48[v51];
        }
        while ( v50 < v49 );
      }
    }
    else if ( (v45 & 4) != 0 )
    {
      *((_DWORD *)v23 + 4) = v60;
      *(_DWORD *)((char *)v25 + v45 - 4) = *(_DWORD *)((char *)&v59 + v45 + 4);
    }
    else if ( (_DWORD)v26 != -1 )
    {
      *((_BYTE *)v23 + 16) = v60;
      if ( (v45 & 2) != 0 )
        *(_WORD *)((char *)v25 + v45 - 2) = *(_WORD *)((char *)&v59 + v45 + 6);
    }
  }
  else
  {
    *v23 = v24;
    v23[2] = v60;
  }
  v23[1] = v26;
  v58 = &v60;
  v59 = 0;
  LOBYTE(v60) = 0;
  v65 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v76,
    (const __m128i *)&v62);
  v76[2] = 0;
  v66 = 0;
  *(_QWORD *)&v67 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v66 = 3;
  v27 = operator new(0x20u);
  v28 = (unsigned __int64)v27;
  *(_QWORD *)(v27 + 8) = 11;
  *(_QWORD *)(v27 + 16) = 0x6D756E5F656E696CLL;
  *(_QWORD *)v27 = v27 + 16;
  v29 = 5;
  if ( source_linnum <= 0 )
    v29 = 0;
  strcpy((char *)(v27 + 23), "mber");
  v30 = source_linnum;
  if ( source_linnum <= 0 )
    v30 = 0;
  v68 = v29;
  v70 = 0;
  v69 = v30;
  v67 = v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v77,
    (const __m128i *)&v66);
  v77[2] = 0;
  LOBYTE(v71) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v71) = 3;
  v31 = operator new(0x20u);
  *(_BYTE *)(v31 + 20) = 100;
  *(_QWORD *)v31 = v31 + 16;
  *(_DWORD *)(v31 + 16) = 1853189990;
  *(_QWORD *)(v31 + 8) = 5;
  *(_BYTE *)(v31 + 21) = 0;
  v73 = 4;
  v75 = 0;
  s2 = (unsigned __int64)v31;
  v74 = source_linnum > 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v78,
    (const __m128i *)&v71);
  v78[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v76,
    3,
    v32,
    v33,
    v34,
    v52,
    (__int64)a1,
    (int)&v63,
    (int)&v65,
    (int)&v58,
    (int)&v62,
    v55,
    v57,
    (int)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    *((__int64 *)&v63 + 1));
  v35 = v79;
  do
  {
    v35 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v35 != (char *)v76 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v58 != &v60 )
    operator delete(v58, v60 + 1);
  return v54;
}

