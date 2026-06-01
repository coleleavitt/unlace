__int64 __fastcall ida_mcp::tools::fixups::`anonymous namespace'::handle_get_fixups_in_range(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r15
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r12
  size_t v14; // rdx
  int v15; // eax
  char v16; // al
  _BYTE *v17; // r12
  int *v18; // rax
  int *v19; // r13
  unsigned __int64 v20; // r14
  std::runtime_error *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r15
  __int64 v25; // r13
  size_t v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rbp
  size_t v30; // rdx
  unsigned __int64 i; // rax
  __int64 v32; // rax
  size_t v33; // rax
  unsigned int v34; // r12d
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rcx
  size_t v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char *v46; // rbx
  _QWORD *v48; // rax
  unsigned __int64 v49; // rdx
  char *v50; // rax
  char *v51; // rbp
  unsigned int v52; // r12d
  unsigned int v53; // r12d
  unsigned int v54; // eax
  __int64 v55; // rcx
  unsigned int v56; // edi
  unsigned __int64 v57; // r8
  char *v58; // rcx
  char *v59; // r9
  unsigned int v60; // edx
  unsigned int v61; // ecx
  __int64 v62; // rdi
  char *v63; // [rsp+20h] [rbp-2B8h]
  void *dest; // [rsp+30h] [rbp-2A8h]
  __int64 v66; // [rsp+40h] [rbp-298h]
  char v67; // [rsp+58h] [rbp-280h]
  __int64 v68; // [rsp+60h] [rbp-278h]
  int v69; // [rsp+68h] [rbp-270h]
  __int64 v70; // [rsp+70h] [rbp-268h] BYREF
  __int64 v71; // [rsp+78h] [rbp-260h]
  _BYTE *v72; // [rsp+C0h] [rbp-218h] BYREF
  void *v73; // [rsp+F0h] [rbp-1E8h] BYREF
  size_t v74; // [rsp+F8h] [rbp-1E0h]
  _QWORD v75[2]; // [rsp+100h] [rbp-1D8h] BYREF
  char v76; // [rsp+110h] [rbp-1C8h] BYREF
  __int128 v77; // [rsp+118h] [rbp-1C0h] BYREF
  char v78; // [rsp+128h] [rbp-1B0h]
  __int128 v79; // [rsp+130h] [rbp-1A8h]
  char v80; // [rsp+140h] [rbp-198h] BYREF
  __int128 v81; // [rsp+148h] [rbp-190h]
  char v82; // [rsp+158h] [rbp-180h]
  __int64 v83; // [rsp+160h] [rbp-178h]
  __int64 v84; // [rsp+168h] [rbp-170h]
  char v85; // [rsp+170h] [rbp-168h] BYREF
  __int128 v86; // [rsp+178h] [rbp-160h]
  char v87; // [rsp+188h] [rbp-150h]
  __int64 v88; // [rsp+190h] [rbp-148h]
  __int64 v89; // [rsp+198h] [rbp-140h]
  void *v90; // [rsp+1A0h] [rbp-138h] BYREF
  _BYTE s2[22]; // [rsp+1A8h] [rbp-130h] BYREF
  __int64 v92; // [rsp+1C8h] [rbp-110h]
  void *v93[3]; // [rsp+1D0h] [rbp-108h] BYREF
  _QWORD v94[3]; // [rsp+1E8h] [rbp-F0h] BYREF
  _QWORD v95[3]; // [rsp+200h] [rbp-D8h] BYREF
  _QWORD v96[3]; // [rsp+218h] [rbp-C0h] BYREF
  char s[8]; // [rsp+230h] [rbp-A8h] BYREF
  _BYTE v98[8]; // [rsp+268h] [rbp-70h]
  char v99[40]; // [rsp+270h] [rbp-68h] BYREF
  unsigned __int64 v100; // [rsp+298h] [rbp-40h]

  v100 = __readfsqword(0x28u);
  strcpy(&s2[8], "start_address");
  v90 = &s2[8];
  *(_QWORD *)s2 = 13;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
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
    v72 = v4;
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
        v10 = 13;
        if ( v12 <= 0xD )
          v10 = *(_QWORD *)(v7 + 40);
        v11 = memcmp(*(const void **)(v7 + 32), &s2[8], v10);
        if ( v11 || (v11 = v12 - 13, (__int64)(v12 - 13) <= 0x7FFFFFFF) )
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
        v14 = 13;
        if ( v13 <= 0xD )
          v14 = *(_QWORD *)(v9 + 40);
        v15 = memcmp(&s2[8], *(const void **)(v9 + 32), v14);
        if ( v15 || (v15 = 13 - v13, (__int64)(13 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
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
  s2[8] = 0;
  v16 = *(_BYTE *)(v8 + 64);
  v90 = &s2[8];
  *(_QWORD *)s2 = 0;
  if ( v16 != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v8 + 64) )
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
    v72 = v5;
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
  v17 = v90;
  v18 = __errno_location();
  *v18 = 0;
  v19 = v18;
  v20 = __isoc23_strtoull();
  if ( v17 == v72 || *v72 || *v19 == 34 && v20 == -1 )
  {
    if ( v90 != &s2[8] )
      operator delete(v90, *(_QWORD *)&s2[8] + 1LL);
    v21 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v21, "Invalid start_address format");
    __cxa_throw(
      v21,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v90 != &s2[8] )
    operator delete(v90, *(_QWORD *)&s2[8] + 1LL);
  v90 = &s2[8];
  strcpy(&s2[8], "size");
  *(_QWORD *)s2 = 4;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0xA546B);
  v22 = *(_QWORD *)(a2 + 8);
  v23 = *(_QWORD *)(v22 + 16);
  v24 = v22 + 8;
  if ( v23 )
  {
    v25 = v22 + 8;
    do
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)(v23 + 40);
        if ( !v28 )
          break;
        v26 = 4;
        if ( v28 <= 4 )
          v26 = *(_QWORD *)(v23 + 40);
        v27 = memcmp(*(const void **)(v23 + 32), &s2[8], v26);
        if ( v27 || (v27 = v28 - 4, (__int64)(v28 - 4) <= 0x7FFFFFFF) )
        {
          if ( v27 < 0 )
            break;
        }
        v25 = v23;
        v23 = *(_QWORD *)(v23 + 16);
        if ( !v23 )
          goto LABEL_41;
      }
      v23 = *(_QWORD *)(v23 + 24);
    }
    while ( v23 );
LABEL_41:
    if ( v24 != v25 )
    {
      v29 = *(_QWORD *)(v25 + 40);
      if ( v29 )
      {
        v30 = 4;
        if ( v29 <= 4 )
          v30 = *(_QWORD *)(v25 + 40);
        memcmp(&s2[8], *(const void **)(v25 + 32), v30);
      }
    }
  }
  nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned long,0>();
  LOBYTE(v70) = 0;
  v71 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  for ( i = get_first_fixup_ea(); i != -1 && i < v20; i = get_next_fixup_ea() )
    ;
  v76 = 0;
  *(_QWORD *)&v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v76 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "start_address");
  *(_QWORD *)(v32 + 8) = 13;
  v77 = (unsigned __int64)v32;
  qsnprintf();
  v73 = v75;
  v33 = strlen(v99);
  v72 = (_BYTE *)v33;
  v34 = v33;
  if ( v33 > 0xF )
  {
    v48 = (_QWORD *)std::string::_M_create();
    v73 = v48;
    v75[0] = v72;
  }
  else
  {
    if ( v33 == 1 )
    {
      LOBYTE(v75[0]) = v99[0];
      goto LABEL_55;
    }
    if ( !v33 )
    {
LABEL_55:
      v35 = v75;
      goto LABEL_56;
    }
    v48 = v75;
  }
  if ( v34 >= 8 )
  {
    *v48 = *(_QWORD *)v99;
    *(_QWORD *)((char *)v48 + v34 - 8) = *(_QWORD *)&v98[v34];
    v49 = (unsigned __int64)(v48 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v50 = (char *)v48 - v49;
    v51 = (char *)(v99 - v50);
    v52 = ((_DWORD)v50 + v34) & 0xFFFFFFF8;
    if ( v52 >= 8 )
    {
      v53 = v52 & 0xFFFFFFF8;
      v54 = 0;
      do
      {
        v55 = v54;
        v54 += 8;
        *(_QWORD *)(v49 + v55) = *(_QWORD *)&v51[v55];
      }
      while ( v54 < v53 );
    }
  }
  else if ( (v34 & 4) != 0 )
  {
    *(_DWORD *)v48 = *(_DWORD *)v99;
    *(_DWORD *)((char *)v48 + v34 - 4) = *(_DWORD *)&v98[v34 + 4];
  }
  else if ( v34 )
  {
    *(_BYTE *)v48 = v99[0];
    if ( (v34 & 2) != 0 )
      *(_WORD *)((char *)v48 + v34 - 2) = *(_WORD *)&v98[v34 + 6];
  }
  v33 = (size_t)v72;
  v35 = v73;
LABEL_56:
  v74 = v33;
  *((_BYTE *)v35 + v33) = 0;
  v78 = 0;
  *(_QWORD *)&v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v36 = (_QWORD *)operator new(0x20u);
  v37 = v73;
  v38 = v36 + 2;
  v39 = v74;
  *v36 = v36 + 2;
  if ( v37 == v75 )
  {
    v56 = v39 + 1;
    if ( (unsigned int)(v39 + 1) >= 8 )
    {
      v36[2] = v75[0];
      *(_QWORD *)((char *)v38 + v56 - 8) = *(_QWORD *)((char *)&v75[-1] + v56);
      v57 = (unsigned __int64)(v36 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v58 = (char *)v38 - v57;
      v59 = (char *)((char *)v75 - v58);
      if ( (((_DWORD)v58 + v56) & 0xFFFFFFF8) >= 8 )
      {
        v60 = ((_DWORD)v58 + v56) & 0xFFFFFFF8;
        v61 = 0;
        do
        {
          v62 = v61;
          v61 += 8;
          *(_QWORD *)(v57 + v62) = *(_QWORD *)&v59[v62];
        }
        while ( v61 < v60 );
      }
    }
    else if ( (v56 & 4) != 0 )
    {
      *((_DWORD *)v36 + 4) = v75[0];
      *(_DWORD *)((char *)v38 + v56 - 4) = *(_DWORD *)((char *)&v74 + v56 + 4);
    }
    else if ( (_DWORD)v39 != -1 )
    {
      *((_BYTE *)v36 + 16) = v75[0];
      if ( (v56 & 2) != 0 )
        *(_WORD *)((char *)v38 + v56 - 2) = *(_WORD *)((char *)&v74 + v56 + 6);
    }
  }
  else
  {
    *v36 = v37;
    v36[2] = v75[0];
  }
  v36[1] = v39;
  v73 = v75;
  v74 = 0;
  LOBYTE(v75[0]) = 0;
  v79 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v93,
    (const __m128i *)&v76);
  v93[2] = nullptr;
  v80 = 0;
  *(_QWORD *)&v81 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v40 = operator new(0x20u);
  strcpy((char *)(v40 + 16), "size");
  *(_QWORD *)v40 = v40 + 16;
  *(_QWORD *)(v40 + 8) = 4;
  v82 = 6;
  v83 = 0;
  v84 = 0;
  v81 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v94,
    (const __m128i *)&v80);
  v94[2] = 0;
  v85 = 0;
  *(_QWORD *)&v86 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v85 = 3;
  v41 = operator new(0x20u);
  strcpy((char *)(v41 + 16), "fixup_count");
  *(_QWORD *)v41 = v41 + 16;
  *(_QWORD *)(v41 + 8) = 11;
  v86 = (unsigned __int64)v41;
  v87 = 6;
  v88 = 0;
  v89 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v95,
    (const __m128i *)&v85);
  v95[2] = 0;
  LOBYTE(v90) = 0;
  *(_QWORD *)s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v90) = 3;
  v42 = operator new(0x20u);
  strcpy((char *)(v42 + 16), "fixups");
  *(_QWORD *)v42 = v42 + 16;
  *(_QWORD *)(v42 + 8) = 6;
  *(_OWORD *)s2 = (unsigned __int64)v42;
  LOBYTE(v70) = 0;
  v71 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    (const __m128i *)&v90);
  v96[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v93,
    4,
    v43,
    v44,
    v45,
    (int)&v72,
    (__int64)&v77,
    (int)&v73,
    v20,
    (int)v93,
    0,
    (__int64)dest,
    (int)&v90,
    (int)a1,
    0,
    (int)&v70,
    v67,
    v68,
    v69,
    v70);
  v46 = s;
  do
  {
    v46 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v46 != v63 );
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
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v66;
}

