__int64 __fastcall ida_mcp::tools::decl_compiler::`anonymous namespace'::apply_type_at_address_impl(
        __int64 a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r14
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r15
  char *v5; // rax
  __int64 v6; // rax
  _BYTE *v7; // r13
  _BYTE *v8; // rax
  _BYTE *v9; // r15
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r12
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r15
  size_t v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r15
  size_t v25; // rdx
  int v26; // eax
  char *v27; // r13
  int *v28; // rax
  int *v29; // r14
  __int64 v30; // rcx
  std::runtime_error *v31; // r14
  __int64 v32; // rax
  __m128i *v33; // rbx
  size_t v34; // rax
  unsigned int v35; // r14d
  _QWORD *v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx
  size_t v40; // rsi
  __int64 v41; // rax
  _BYTE *v42; // r14
  unsigned __int64 v43; // r15
  _QWORD *v44; // rax
  _BYTE *v45; // rdi
  __m128i v46; // xmm0
  size_t v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  const char *v50; // r14
  _QWORD *v51; // rax
  size_t v52; // rax
  void *v53; // rcx
  size_t v54; // r8
  _BYTE *v55; // rsi
  __int64 v56; // rax
  const __m128i *v57; // rsi
  __int64 *v59; // r15
  __int64 v60; // rax
  size_t v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  _BYTE *v64; // rsi
  unsigned __int64 v65; // rdx
  char *v66; // rax
  char *v67; // rsi
  unsigned int v68; // ecx
  unsigned int v69; // eax
  unsigned int v70; // r11d
  __int64 v71; // rcx
  unsigned int v72; // edi
  unsigned __int64 v73; // r8
  char *v74; // rcx
  char *v75; // r9
  unsigned int v76; // edx
  unsigned int v77; // ecx
  __int64 v78; // rdi
  void *dest; // [rsp+20h] [rbp-280h]
  void *desta; // [rsp+20h] [rbp-280h]
  unsigned __int8 v81; // [rsp+2Fh] [rbp-271h]
  __m128i v82; // [rsp+30h] [rbp-270h] BYREF
  _QWORD *v83; // [rsp+40h] [rbp-260h]
  __m128i *v84; // [rsp+48h] [rbp-258h]
  __int128 *v85; // [rsp+50h] [rbp-250h]
  __int128 *v86; // [rsp+58h] [rbp-248h]
  __int128 *v87; // [rsp+60h] [rbp-240h]
  void **p_src; // [rsp+68h] [rbp-238h]
  char v89[8]; // [rsp+70h] [rbp-230h]
  __int64 *v90; // [rsp+78h] [rbp-228h]
  void **v91; // [rsp+80h] [rbp-220h]
  _BYTE *v92; // [rsp+88h] [rbp-218h]
  __int64 v93; // [rsp+90h] [rbp-210h] BYREF
  size_t v94; // [rsp+98h] [rbp-208h]
  __int64 v95; // [rsp+A0h] [rbp-200h]
  __int128 v96; // [rsp+A8h] [rbp-1F8h]
  char *v97; // [rsp+C0h] [rbp-1E0h]
  __int128 v98; // [rsp+C8h] [rbp-1D8h]
  void *src; // [rsp+E0h] [rbp-1C0h] BYREF
  unsigned __int64 v100; // [rsp+E8h] [rbp-1B8h]
  _QWORD v101[2]; // [rsp+F0h] [rbp-1B0h] BYREF
  void *v102; // [rsp+100h] [rbp-1A0h]
  size_t v103; // [rsp+108h] [rbp-198h]
  _QWORD v104[2]; // [rsp+110h] [rbp-190h] BYREF
  char v105; // [rsp+120h] [rbp-180h] BYREF
  __int128 v106; // [rsp+128h] [rbp-178h] BYREF
  char v107; // [rsp+138h] [rbp-168h]
  __int128 v108; // [rsp+140h] [rbp-160h] BYREF
  char v109; // [rsp+150h] [rbp-150h] BYREF
  __int128 v110; // [rsp+158h] [rbp-148h] BYREF
  char v111; // [rsp+168h] [rbp-138h]
  __m128i v112; // [rsp+170h] [rbp-130h] BYREF
  char v113; // [rsp+180h] [rbp-120h] BYREF
  __int128 v114; // [rsp+188h] [rbp-118h] BYREF
  char v115; // [rsp+198h] [rbp-108h]
  __int128 v116; // [rsp+1A0h] [rbp-100h]
  void *v117; // [rsp+1B0h] [rbp-F0h] BYREF
  _BYTE s2[20]; // [rsp+1B8h] [rbp-E8h] BYREF
  __int64 v119; // [rsp+1D0h] [rbp-D0h]
  __int64 v120; // [rsp+1D8h] [rbp-C8h]
  __m128i v121; // [rsp+1E0h] [rbp-C0h] BYREF
  __int64 v122; // [rsp+1F0h] [rbp-B0h]
  _QWORD v123[3]; // [rsp+1F8h] [rbp-A8h] BYREF
  _QWORD v124[3]; // [rsp+210h] [rbp-90h] BYREF
  __int64 v125; // [rsp+228h] [rbp-78h] BYREF
  __int64 v126; // [rsp+238h] [rbp-68h]
  char s[40]; // [rsp+240h] [rbp-60h] BYREF
  unsigned __int64 v128; // [rsp+268h] [rbp-38h]

  *(_QWORD *)v89 = a1;
  v128 = __readfsqword(0x28u);
  strcpy(&s2[8], "declaration");
  v117 = &s2[8];
  *(_QWORD *)s2 = 11;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x104B77);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_BYTE *)(v6 + 8);
  v8 = *(_BYTE **)(v6 + 16);
  if ( v8 )
  {
    v92 = v8;
    v9 = v7;
    do
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)v92 + 5);
        if ( !v12 )
          break;
        v10 = 11;
        if ( v12 <= 0xB )
          v10 = *((_QWORD *)v92 + 5);
        v11 = memcmp(*((const void **)v92 + 4), &s2[8], v10);
        if ( v11 || (v11 = v12 - 11, (__int64)(v12 - 11) <= 0x7FFFFFFF) )
        {
          if ( v11 < 0 )
            break;
        }
        v9 = v92;
        v92 = *((_BYTE **)v92 + 2);
        if ( !v92 )
          goto LABEL_12;
      }
      v92 = *((_BYTE **)v92 + 3);
    }
    while ( v92 );
LABEL_12:
    if ( v7 != v9 )
    {
      v13 = *((_QWORD *)v9 + 5);
      if ( v13 )
      {
        v14 = 11;
        if ( v13 <= 0xB )
          v14 = *((_QWORD *)v9 + 5);
        v15 = memcmp(&s2[8], *((const void **)v9 + 4), v14);
        if ( v15 || (v15 = 11 - v13, (__int64)(11 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v15 >= 0 )
            v7 = v9;
        }
      }
      else
      {
        v7 = v9;
      }
    }
  }
  LOBYTE(v101[0]) = 0;
  p_src = &src;
  v83 = v101;
  src = v101;
  v100 = 0;
  if ( v7[64] != 3 )
    JUMPOUT(0x104E54);
  std::string::_M_assign();
  strcpy(&s2[8], "address");
  v117 = &s2[8];
  *(_QWORD *)s2 = 7;
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
    v97 = v5;
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
  v16 = *(_QWORD *)(a2 + 8);
  v17 = v16 + 8;
  v18 = *(_QWORD *)(v16 + 16);
  if ( v18 )
  {
    v19 = v17;
    v20 = v18;
    do
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(v20 + 40);
        if ( !v23 )
          break;
        v21 = 7;
        if ( v23 <= 7 )
          v21 = *(_QWORD *)(v20 + 40);
        v22 = memcmp(*(const void **)(v20 + 32), &s2[8], v21);
        if ( v22 || (v22 = v23 - 7, (__int64)(v23 - 7) <= 0x7FFFFFFF) )
        {
          if ( v22 < 0 )
            break;
        }
        v19 = v20;
        v20 = *(_QWORD *)(v20 + 16);
        if ( !v20 )
          goto LABEL_32;
      }
      v20 = *(_QWORD *)(v20 + 24);
    }
    while ( v20 );
LABEL_32:
    if ( v17 != v19 )
    {
      v24 = *(_QWORD *)(v19 + 40);
      if ( v24 )
      {
        v25 = 7;
        if ( v24 <= 7 )
          v25 = *(_QWORD *)(v19 + 40);
        v26 = memcmp(&s2[8], *(const void **)(v19 + 32), v25);
        if ( v26 || (v26 = 7 - v24, (__int64)(7 - v24) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v26 >= 0 )
            v17 = v19;
        }
      }
      else
      {
        v17 = v19;
      }
    }
  }
  v117 = &s2[8];
  v91 = &v117;
  *(_QWORD *)s2 = 0;
  s2[8] = 0;
  if ( *(_BYTE *)(v17 + 64) != 3 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v17 + 64) )
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
    v97 = v3;
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
  v27 = (char *)v117;
  if ( *(_QWORD *)s2 > 2u && *(_BYTE *)v117 == 48 && (*((_BYTE *)v117 + 1) & 0xDF) == 0x58 )
    v27 = (char *)v117 + 2;
  v28 = __errno_location();
  *v28 = 0;
  v29 = v28;
  v30 = __isoc23_strtoull();
  if ( v27 == v97 || *v97 || *v29 == 34 && v30 == -1 )
  {
    if ( v117 != &s2[8] )
      operator delete(v117, *(_QWORD *)&s2[8] + 1LL);
    v31 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v31, "Invalid address format");
    __cxa_throw(
      v31,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v117 != &s2[8] )
    operator delete(v117, *(_QWORD *)&s2[8] + 1LL);
  v93 = 0;
  v95 = 0;
  v90 = &v93;
  v96 = 0;
  if ( !(unsigned __int8)parse_decl() )
    JUMPOUT(0x104BAD);
  v81 = apply_tinfo();
  v98 = 0;
  v97 = nullptr;
  print_tinfo();
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  v87 = &v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v32 = operator new(0x20u);
  v33 = (__m128i *)s;
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "address");
  *(_QWORD *)(v32 + 8) = 7;
  v106 = (unsigned __int64)v32;
  qsnprintf();
  v102 = v104;
  v34 = strlen(s);
  v94 = v34;
  v35 = v34;
  if ( v34 > 0xF )
  {
    v62 = (_QWORD *)std::string::_M_create();
    v102 = v62;
    v104[0] = v94;
  }
  else
  {
    if ( v34 == 1 )
    {
      LOBYTE(v104[0]) = s[0];
      goto LABEL_56;
    }
    if ( !v34 )
    {
LABEL_56:
      v36 = v104;
      goto LABEL_57;
    }
    v62 = v104;
  }
  if ( v35 >= 8 )
  {
    *v62 = *(_QWORD *)s;
    *(_QWORD *)((char *)v62 + v35 - 8) = *(_QWORD *)&s[v35 - 8];
    v65 = (unsigned __int64)(v62 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v66 = (char *)v62 - v65;
    v67 = (char *)(s - v66);
    v68 = (v35 + (_DWORD)v66) & 0xFFFFFFF8;
    if ( v68 >= 8 )
    {
      v69 = 0;
      v70 = v68 & 0xFFFFFFF8;
      do
      {
        v71 = v69;
        v69 += 8;
        *(_QWORD *)(v65 + v71) = *(_QWORD *)&v67[v71];
      }
      while ( v69 < v70 );
    }
  }
  else if ( (v35 & 4) != 0 )
  {
    *(_DWORD *)v62 = *(_DWORD *)s;
    *(_DWORD *)((char *)v62 + v35 - 4) = *(_DWORD *)&s[v35 - 4];
  }
  else if ( v35 )
  {
    *(_BYTE *)v62 = s[0];
    if ( (v35 & 2) != 0 )
      *(_WORD *)((char *)v62 + v35 - 2) = *(_WORD *)&s[v35 - 2];
  }
  v34 = v94;
  v36 = v102;
LABEL_57:
  v103 = v34;
  *((_BYTE *)v36 + v34) = 0;
  v107 = 0;
  *(_QWORD *)&v108 = 0;
  v86 = &v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v37 = (_QWORD *)operator new(0x20u);
  v38 = v102;
  v39 = v37 + 2;
  v40 = v103;
  *v37 = v37 + 2;
  if ( v38 == v104 )
  {
    v72 = v40 + 1;
    if ( (unsigned int)(v40 + 1) >= 8 )
    {
      v37[2] = v104[0];
      *(_QWORD *)((char *)v39 + v72 - 8) = *(_QWORD *)((char *)&v104[-1] + v72);
      v73 = (unsigned __int64)(v37 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v74 = (char *)v39 - v73;
      v75 = (char *)((char *)v104 - v74);
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
      *((_DWORD *)v37 + 4) = v104[0];
      *(_DWORD *)((char *)v39 + v72 - 4) = *(_DWORD *)((char *)&v103 + v72 + 4);
    }
    else if ( (_DWORD)v40 != -1 )
    {
      *((_BYTE *)v37 + 16) = v104[0];
      if ( (v72 & 2) != 0 )
        *(_WORD *)((char *)v39 + v72 - 2) = *(_WORD *)((char *)&v103 + v72 + 6);
    }
  }
  else
  {
    *v37 = v38;
    v37[2] = v104[0];
  }
  v37[1] = v40;
  v102 = v104;
  v103 = 0;
  LOBYTE(v104[0]) = 0;
  v108 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v121,
    (const __m128i *)&v105);
  v109 = 0;
  v85 = &v110;
  v122 = 0;
  *(_QWORD *)&v110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v41 = operator new(0x20u);
  v111 = 0;
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "declaration");
  *(_QWORD *)(v41 + 8) = 11;
  v84 = &v112;
  v112.m128i_i64[0] = 0;
  v110 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v111 = 3;
  v42 = src;
  v43 = v100;
  v44 = (_QWORD *)operator new(0x20u);
  v45 = v44 + 2;
  v92 = v44;
  *v44 = v44 + 2;
  v94 = v43;
  if ( v43 <= 0xF )
  {
    v46 = (__m128i)(unsigned __int64)v44;
    v47 = v43 + 1;
    if ( v43 )
    {
LABEL_61:
      v82 = v46;
      memcpy(v45, v42, v47);
      v48 = v94;
      v46 = _mm_load_si128(&v82);
      goto LABEL_62;
    }
    goto LABEL_83;
  }
  v59 = v44;
  v60 = std::string::_M_create();
  *v59 = v60;
  v45 = (_BYTE *)v60;
  v61 = v94;
  v46 = (__m128i)(unsigned __int64)v59;
  v59[2] = v94;
  v47 = v61 + 1;
  if ( !v61 )
  {
LABEL_83:
    *v45 = *v42;
    v48 = v94;
    goto LABEL_62;
  }
  v48 = -1;
  if ( v47 )
    goto LABEL_61;
LABEL_62:
  v112 = v46;
  *((_QWORD *)v92 + 1) = v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v123,
    (const __m128i *)&v109);
  v113 = 0;
  v82.m128i_i64[0] = (__int64)&v114;
  v123[2] = 0;
  *(_QWORD *)&v114 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v49 = operator new(0x20u);
  strcpy((char *)(v49 + 16), "parsed_type");
  *(_QWORD *)v49 = v49 + 16;
  *(_QWORD *)(v49 + 8) = 11;
  v114 = (unsigned __int64)v49;
  if ( (_QWORD)v98 )
    v50 = v97;
  else
    v50 = _qstring<char>::c_str(void)const::nullstr;
  v115 = 0;
  *(_QWORD *)&v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v51 = (_QWORD *)operator new(0x20u);
  v92 = v51;
  *v51 = v51 + 2;
  if ( !v50 )
    JUMPOUT(0x104AF6);
  dest = v51 + 2;
  v52 = strlen(v50);
  v53 = dest;
  v94 = v52;
  v54 = v52;
  if ( v52 > 0xF )
  {
    desta = (void *)v52;
    v63 = std::string::_M_create();
    v64 = v92;
    v53 = (void *)v63;
    v54 = (size_t)desta;
    *(_QWORD *)v92 = v63;
    *((_QWORD *)v64 + 2) = v94;
    goto LABEL_96;
  }
  if ( v52 == 1 )
  {
    v92[16] = *v50;
    goto LABEL_68;
  }
  if ( v52 )
  {
LABEL_96:
    memcpy(v53, v50, v54);
    v52 = v94;
    v53 = *(void **)v92;
  }
LABEL_68:
  v55 = v92;
  *((_QWORD *)v92 + 1) = v52;
  *((_BYTE *)v53 + v52) = 0;
  v116 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v124,
    (const __m128i *)&v113);
  v124[2] = 0;
  LOBYTE(v117) = 0;
  *(_QWORD *)s2 = 0;
  v92 = s2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v117) = 3;
  v56 = operator new(0x20u);
  strcpy((char *)(v56 + 16), "applied");
  v57 = (const __m128i *)v91;
  *(_QWORD *)v56 = v56 + 16;
  *(_QWORD *)(v56 + 8) = 7;
  s2[16] = 4;
  v119 = v81;
  v120 = 0;
  *(_OWORD *)s2 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v125,
    v57);
  v126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v89,
    &v121,
    4);
  do
  {
    v33 = (__m128i *)((char *)v33 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v33 != &v121 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v102 != v104 )
    operator delete(v102, v104[0] + 1LL);
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree();
  }
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( src != v83 )
    operator delete(src, v101[0] + 1LL);
  return *(_QWORD *)v89;
}

