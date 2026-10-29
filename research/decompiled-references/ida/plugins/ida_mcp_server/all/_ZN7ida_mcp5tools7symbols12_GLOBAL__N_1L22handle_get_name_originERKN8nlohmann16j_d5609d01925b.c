__int64 __fastcall ida_mcp::tools::symbols::`anonymous namespace'::handle_get_name_origin(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  size_t v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  size_t v12; // rdx
  int v13; // eax
  _BYTE *v14; // r12
  int *v15; // rax
  int *v16; // r14
  __int64 v17; // rbx
  std::runtime_error *v18; // rbx
  __int64 v20; // rax
  size_t v21; // rax
  unsigned int v22; // ebx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  size_t *v25; // rdx
  _QWORD *v26; // rcx
  size_t v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 v31; // rax
  __m128i si128; // xmm0
  __int64 v33; // rdx
  int *v34; // rbx
  _QWORD *v35; // rax
  unsigned int v36; // edi
  unsigned __int64 v37; // rdx
  char *v38; // rax
  char *v39; // r13
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // eax
  __int64 v43; // rcx
  unsigned __int64 v44; // r8
  char *v45; // rcx
  char *v46; // r9
  unsigned int v47; // edx
  unsigned int v48; // ecx
  __int64 v49; // rdi
  size_t v51; // [rsp+98h] [rbp-360h]
  _BYTE *v52; // [rsp+A0h] [rbp-358h]
  void *v53; // [rsp+200h] [rbp-1F8h]
  size_t v54; // [rsp+208h] [rbp-1F0h]
  size_t v55; // [rsp+210h] [rbp-1E8h] BYREF
  char v56; // [rsp+230h] [rbp-1C8h] BYREF
  __int128 v57; // [rsp+238h] [rbp-1C0h]
  char v58; // [rsp+248h] [rbp-1B0h]
  __int128 v59; // [rsp+250h] [rbp-1A8h]
  char v60; // [rsp+260h] [rbp-198h] BYREF
  __int128 v61; // [rsp+268h] [rbp-190h]
  __int64 v62; // [rsp+278h] [rbp-180h]
  __int64 v63; // [rsp+280h] [rbp-178h]
  __int64 v64; // [rsp+288h] [rbp-170h]
  void *v65; // [rsp+290h] [rbp-168h] BYREF
  __int128 s2; // [rsp+298h] [rbp-160h] BYREF
  int v67; // [rsp+2A8h] [rbp-150h]
  __int128 v68; // [rsp+2B0h] [rbp-148h]
  int v69[4]; // [rsp+2F0h] [rbp-108h] BYREF
  __int64 v70; // [rsp+300h] [rbp-F8h]
  _QWORD v71[3]; // [rsp+308h] [rbp-F0h] BYREF
  _QWORD v72[3]; // [rsp+320h] [rbp-D8h] BYREF
  int v73[14]; // [rsp+338h] [rbp-C0h] BYREF
  char v74[32]; // [rsp+370h] [rbp-88h] BYREF
  unsigned __int64 v75; // [rsp+3B8h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v65 = (char *)&s2 + 8;
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
  v65 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v6 + 64) != 3 )
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
  v14 = v65;
  v15 = __errno_location();
  *v15 = 0;
  v16 = v15;
  v17 = __isoc23_strtoull();
  if ( v14 == v52 || *v52 || *v16 == 34 && v17 == -1 )
  {
    if ( v65 != (char *)&s2 + 8 )
      operator delete(v65, *((_QWORD *)&s2 + 1) + 1LL);
    v18 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v18, "Invalid address format");
    __cxa_throw(
      v18,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v65 != (char *)&s2 + 8 )
    operator delete(v65, *((_QWORD *)&s2 + 1) + 1LL);
  get_ea_name();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v56 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "address");
  *(_QWORD *)(v20 + 8) = 7;
  v57 = (unsigned __int64)v20;
  qsnprintf();
  v53 = &v55;
  v21 = strlen(v74);
  v51 = v21;
  v22 = v21;
  if ( v21 > 0xF )
  {
    v35 = (_QWORD *)std::string::_M_create();
    v53 = v35;
    v55 = v51;
  }
  else
  {
    if ( v21 == 1 )
    {
      LOBYTE(v55) = v74[0];
      goto LABEL_36;
    }
    if ( !v21 )
    {
LABEL_36:
      v23 = &v55;
      goto LABEL_37;
    }
    v35 = &v55;
  }
  if ( v22 >= 8 )
  {
    *v35 = *(_QWORD *)v74;
    *(_QWORD *)((char *)v35 + v22 - 8) = *(_QWORD *)((char *)&v73[12] + v22);
    v37 = (unsigned __int64)(v35 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v38 = (char *)v35 - v37;
    v39 = (char *)(v74 - v38);
    v40 = ((_DWORD)v38 + v22) & 0xFFFFFFF8;
    if ( v40 >= 8 )
    {
      v41 = v40 & 0xFFFFFFF8;
      v42 = 0;
      do
      {
        v43 = v42;
        v42 += 8;
        *(_QWORD *)(v37 + v43) = *(_QWORD *)&v39[v43];
      }
      while ( v42 < v41 );
    }
  }
  else if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)v35 = *(_DWORD *)v74;
    *(_DWORD *)((char *)v35 + v22 - 4) = *(int *)((char *)&v73[13] + v22);
  }
  else if ( v22 )
  {
    *(_BYTE *)v35 = v74[0];
    if ( (v22 & 2) != 0 )
      *(_WORD *)((char *)v35 + v22 - 2) = *(_WORD *)((char *)&v73[13] + v22 + 2);
  }
  v21 = v51;
  v23 = v53;
LABEL_37:
  v54 = v21;
  *((_BYTE *)v23 + v21) = 0;
  v58 = 0;
  *(_QWORD *)&v59 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = 3;
  v24 = (_QWORD *)operator new(0x20u);
  v25 = (size_t *)v53;
  v26 = v24 + 2;
  v27 = v54;
  *v24 = v24 + 2;
  if ( v25 == &v55 )
  {
    v36 = v27 + 1;
    if ( (unsigned int)(v27 + 1) >= 8 )
    {
      v24[2] = v55;
      *(_QWORD *)((char *)v26 + v36 - 8) = *(size_t *)((char *)&v54 + v36);
      v44 = (unsigned __int64)(v24 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v45 = (char *)v26 - v44;
      v46 = (char *)((char *)&v55 - v45);
      if ( (((_DWORD)v45 + v36) & 0xFFFFFFF8) >= 8 )
      {
        v47 = ((_DWORD)v45 + v36) & 0xFFFFFFF8;
        v48 = 0;
        do
        {
          v49 = v48;
          v48 += 8;
          *(_QWORD *)(v44 + v49) = *(_QWORD *)&v46[v49];
        }
        while ( v48 < v47 );
      }
    }
    else if ( (v36 & 4) != 0 )
    {
      *((_DWORD *)v24 + 4) = v55;
      *(_DWORD *)((char *)v26 + v36 - 4) = *(_DWORD *)((char *)&v54 + v36 + 4);
    }
    else if ( (_DWORD)v27 != -1 )
    {
      *((_BYTE *)v24 + 16) = v55;
      if ( (v36 & 2) != 0 )
        *(_WORD *)((char *)v26 + v36 - 2) = *(_WORD *)((char *)&v54 + v36 + 6);
    }
  }
  else
  {
    *v24 = v25;
    v24[2] = v55;
  }
  v24[1] = v27;
  v53 = &v55;
  LOBYTE(v55) = 0;
  v54 = 0;
  v59 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v69,
    (const __m128i *)&v56,
    2,
    1);
  v70 = 0;
  v60 = 0;
  *(_QWORD *)&v61 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v60 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "has_name");
  *(_QWORD *)(v28 + 8) = 8;
  v62 = 4;
  v63 = 0;
  v64 = 0;
  v61 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v71,
    (const __m128i *)&v60,
    2,
    1);
  v71[2] = 0;
  LOBYTE(v65) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v65) = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "note");
  *(_QWORD *)(v29 + 8) = 4;
  LOBYTE(v67) = 0;
  *(_QWORD *)&v68 = 0;
  s2 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v67) = 3;
  v30 = (__int64 *)operator new(0x20u);
  *v30 = (__int64)(v30 + 2);
  v31 = std::string::_M_create();
  *v30 = v31;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E23B0);
  v30[2] = 31;
  *(__m128i *)v31 = si128;
  *(__m128i *)(v31 + 15) = _mm_load_si128((const __m128i *)&xmmword_3E2240);
  v33 = *v30;
  v30[1] = 31;
  *(_BYTE *)(v33 + 31) = 0;
  v68 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v72,
    (const __m128i *)&v65,
    2,
    1);
  v72[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v34 = v73;
  do
  {
    v34 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v34 != v69 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v53 != &v55 )
    operator delete(v53, v55 + 1);
  return a1;
}

