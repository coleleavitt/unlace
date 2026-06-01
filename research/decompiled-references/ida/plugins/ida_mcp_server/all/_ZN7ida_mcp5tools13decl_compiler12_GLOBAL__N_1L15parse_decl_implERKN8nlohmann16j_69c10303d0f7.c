_QWORD *__fastcall ida_mcp::tools::decl_compiler::`anonymous namespace'::parse_decl_impl(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r15
  char *v3; // rax
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r13
  void *v8; // rax
  _QWORD *v9; // r15
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  size_t v14; // rdx
  const void *v15; // rsi
  int v16; // eax
  char v17; // al
  const char *v18; // rsi
  void **v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  _QWORD *v24; // rax
  _BYTE *v25; // rdi
  __m128i v26; // xmm0
  size_t v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  const char *v30; // r14
  _QWORD *v31; // rax
  size_t v32; // rax
  void *v33; // rcx
  size_t v34; // r8
  void *v35; // rdx
  __m128i *v36; // r14
  char *v37; // r14
  __int64 *v38; // rax
  __int64 *v39; // r12
  char *v40; // rax
  __int64 v41; // rcx
  void *v42; // r8
  __int64 v43; // rax
  char v44; // si
  __int64 v45; // rdx
  __int64 tinfo_size; // r14
  __int64 v47; // rax
  char v48; // si
  __int64 v49; // rdx
  __int64 v50; // rax
  char v51; // si
  __int64 v52; // rdx
  __int64 v53; // rax
  char v54; // si
  __int64 v55; // rdx
  __int64 v56; // rax
  char v57; // si
  __int64 v58; // rdx
  __int64 v59; // rax
  char v60; // si
  __int64 v61; // rdx
  __int64 v62; // rax
  char v63; // si
  __int64 v64; // rdx
  __int64 v65; // rax
  char v66; // si
  __int64 v67; // rdx
  __int64 v68; // rax
  char v69; // si
  __int64 v70; // rdx
  __int64 v72; // r13
  _QWORD *v73; // r12
  _QWORD *v74; // r13
  _QWORD *v75; // r14
  size_t v76; // rdx
  int v77; // eax
  unsigned __int64 v78; // rbx
  void *v79; // rcx
  unsigned __int64 v80; // r14
  size_t v81; // rdx
  int v82; // eax
  _QWORD *v83; // r14
  _BYTE *v84; // r13
  size_t v85; // rdx
  int v86; // eax
  unsigned __int64 v87; // rbx
  _BYTE *v88; // rcx
  unsigned __int64 v89; // r13
  size_t v90; // rax
  int v91; // eax
  __int64 v92; // rax
  _QWORD *v93; // rdx
  __int64 *v94; // r14
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  void *dest; // [rsp+18h] [rbp-1D8h]
  void *desta; // [rsp+18h] [rbp-1D8h]
  __m128i v100; // [rsp+20h] [rbp-1D0h] BYREF
  void *src; // [rsp+30h] [rbp-1C0h]
  __m128i *v102; // [rsp+38h] [rbp-1B8h]
  __int128 *v103; // [rsp+40h] [rbp-1B0h]
  void *v104; // [rsp+48h] [rbp-1A8h]
  void **v105; // [rsp+50h] [rbp-1A0h]
  void *p_s1; // [rsp+58h] [rbp-198h]
  __int64 v107; // [rsp+60h] [rbp-190h]
  char *v108; // [rsp+68h] [rbp-188h]
  unsigned __int64 v109; // [rsp+70h] [rbp-180h]
  _BOOL8 v110; // [rsp+78h] [rbp-178h] BYREF
  char *s; // [rsp+80h] [rbp-170h]
  __int128 v112; // [rsp+88h] [rbp-168h]
  char *v113; // [rsp+A0h] [rbp-150h]
  __int128 v114; // [rsp+A8h] [rbp-148h]
  void *v115; // [rsp+C0h] [rbp-130h] BYREF
  unsigned __int64 v116; // [rsp+C8h] [rbp-128h]
  _QWORD v117[2]; // [rsp+D0h] [rbp-120h] BYREF
  char v118; // [rsp+E0h] [rbp-110h] BYREF
  __int128 v119; // [rsp+E8h] [rbp-108h] BYREF
  __int64 v120; // [rsp+F8h] [rbp-F8h]
  __int64 v121; // [rsp+100h] [rbp-F0h]
  __int64 v122; // [rsp+108h] [rbp-E8h]
  char v123; // [rsp+110h] [rbp-E0h] BYREF
  __int128 v124; // [rsp+118h] [rbp-D8h] BYREF
  char v125; // [rsp+128h] [rbp-C8h]
  __m128i v126; // [rsp+130h] [rbp-C0h] BYREF
  _BYTE *v127; // [rsp+140h] [rbp-B0h] BYREF
  _BYTE s2[20]; // [rsp+148h] [rbp-A8h] BYREF
  __int128 v129; // [rsp+160h] [rbp-90h] BYREF
  __m128i v130; // [rsp+170h] [rbp-80h] BYREF
  __int64 s1; // [rsp+180h] [rbp-70h] BYREF
  _QWORD v132[3]; // [rsp+188h] [rbp-68h] BYREF
  _QWORD v133[3]; // [rsp+1A0h] [rbp-50h] BYREF
  unsigned __int64 v134; // [rsp+1B8h] [rbp-38h] BYREF

  v134 = __readfsqword(0x28u);
  strcpy(&s2[8], "declaration");
  v127 = &s2[8];
  *(_QWORD *)s2 = 11;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x103DFA);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = a1;
  v7 = (_QWORD *)(v5 + 8);
  v8 = *(void **)(v5 + 16);
  if ( v8 )
  {
    p_s1 = v8;
    v9 = v7;
    v105 = (void **)a1;
    do
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)p_s1 + 5);
        if ( !v12 )
          break;
        v10 = 11;
        if ( v12 <= 0xB )
          v10 = *((_QWORD *)p_s1 + 5);
        v11 = memcmp(*((const void **)p_s1 + 4), &s2[8], v10);
        if ( v11 || (v11 = v12 - 11, (__int64)(v12 - 11) <= 0x7FFFFFFF) )
        {
          if ( v11 < 0 )
            break;
        }
        v9 = p_s1;
        p_s1 = *((void **)p_s1 + 2);
        if ( !p_s1 )
          goto LABEL_12;
      }
      p_s1 = *((void **)p_s1 + 3);
    }
    while ( p_s1 );
LABEL_12:
    v6 = v105;
    if ( v7 != v9 )
    {
      v13 = v9[5];
      if ( v13 )
      {
        v14 = 11;
        v15 = (const void *)v9[4];
        p_s1 = (void *)v9[5];
        if ( v13 <= 0xB )
          v14 = v13;
        v16 = memcmp(&s2[8], v15, v14);
        if ( v16 || (v16 = 11 - (_DWORD)p_s1, 11 - (__int64)p_s1 >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v16 >= 0 )
            v7 = v9;
        }
      }
      else
      {
        v7 = v9;
      }
    }
  }
  v116 = 0;
  v105 = &v115;
  v17 = *((_BYTE *)v7 + 64);
  v115 = v117;
  LOBYTE(v117[0]) = 0;
  if ( v17 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *((_BYTE *)v7 + 64) )
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
    v113 = v3;
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
  v18 = (const char *)v7[9];
  v19 = v105;
  std::string::_M_assign();
  if ( *(_BYTE *)a2 == 1 )
  {
    v72 = *(_QWORD *)(a2 + 8);
    v73 = *(_QWORD **)(v72 + 16);
    if ( v73 )
    {
      p_s1 = *(void **)(v72 + 16);
      v104 = v6;
      v74 = (_QWORD *)(v72 + 8);
      v75 = v74;
      do
      {
        while ( 1 )
        {
          v78 = *((_QWORD *)p_s1 + 5);
          if ( !v78 )
            break;
          v76 = 6;
          v19 = *((void ***)p_s1 + 4);
          v18 = "silent";
          if ( v78 <= 6 )
            v76 = *((_QWORD *)p_s1 + 5);
          v77 = memcmp(v19, "silent", v76);
          if ( v77 || (v77 = v78 - 6, (__int64)(v78 - 6) <= 0x7FFFFFFF) )
          {
            if ( v77 < 0 )
              break;
          }
          v74 = p_s1;
          p_s1 = *((void **)p_s1 + 2);
          if ( !p_s1 )
            goto LABEL_61;
        }
        p_s1 = *((void **)p_s1 + 3);
      }
      while ( p_s1 );
LABEL_61:
      v6 = v104;
      v79 = v75;
      if ( v75 != v74 )
      {
        v80 = v74[5];
        if ( !v80 )
          goto LABEL_68;
        v81 = 6;
        v19 = (void **)v74[4];
        v18 = "silent";
        p_s1 = v79;
        if ( v80 <= 6 )
          v81 = v80;
        v82 = memcmp(v19, "silent", v81);
        v79 = p_s1;
        if ( v82 || (v82 = v80 - 6, (__int64)(v80 - 6) <= 0x7FFFFFFF) )
        {
          if ( v82 <= 0 )
          {
LABEL_68:
            v83 = v79;
            v84 = v79;
            strcpy((char *)&s1, "silent");
            p_s1 = &s1;
            do
            {
              while ( 1 )
              {
                v87 = v73[5];
                if ( !v87 )
                  break;
                v85 = 6;
                v19 = (void **)v73[4];
                v18 = (const char *)p_s1;
                if ( v87 <= 6 )
                  v85 = v73[5];
                v86 = memcmp(v19, p_s1, v85);
                if ( v86 || (v86 = v87 - 6, (__int64)(v87 - 6) <= 0x7FFFFFFF) )
                {
                  if ( v86 < 0 )
                    break;
                }
                v83 = v73;
                v73 = (_QWORD *)v73[2];
                if ( !v73 )
                  goto LABEL_77;
              }
              v73 = (_QWORD *)v73[3];
            }
            while ( v73 );
LABEL_77:
            v6 = v104;
            v88 = v84;
            if ( v84 != (_BYTE *)v83 )
            {
              v89 = v83[5];
              if ( v89 )
              {
                v90 = 6;
                v18 = (const char *)v83[4];
                v19 = (void **)&s1;
                p_s1 = v88;
                if ( v89 <= 6 )
                  v90 = v89;
                v91 = memcmp(&s1, v18, v90);
                v88 = p_s1;
                if ( v91 || (v91 = 6 - v89, (__int64)(6 - v89) >= (__int64)0xFFFFFFFF80000000LL) )
                {
                  if ( v91 >= 0 )
                    v88 = v83;
                }
              }
              else
              {
                v88 = v83;
              }
            }
            if ( v88[64] != 4 )
              ida_mcp::tools::decl_compiler::`anonymous namespace'::parse_decl_impl(
                (__int64)v19,
                (__int64)v18,
                v20,
                (__int64)v88);
          }
        }
      }
    }
  }
  v107 = 0;
  s = nullptr;
  v112 = 0;
  if ( !(unsigned __int8)parse_decl() )
    JUMPOUT(0x103F92);
  v114 = 0;
  v113 = nullptr;
  print_tinfo();
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  v104 = &v119;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v21 = operator new(0x20u);
  strcpy((char *)(v21 + 16), "success");
  *(_QWORD *)v21 = v21 + 16;
  *(_QWORD *)(v21 + 8) = 7;
  v120 = 4;
  v121 = 1;
  v122 = 0;
  v119 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v130,
    (const __m128i *)&v118);
  s1 = 0;
  v123 = 0;
  *(_QWORD *)&v124 = 0;
  v103 = &v124;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v22 = operator new(0x20u);
  *(_QWORD *)v22 = v22 + 16;
  strcpy((char *)(v22 + 16), "declaration");
  *(_QWORD *)(v22 + 8) = 11;
  v125 = 0;
  v126.m128i_i64[0] = 0;
  v102 = &v126;
  v124 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v23 = v116;
  src = v115;
  v24 = (_QWORD *)operator new(0x20u);
  v25 = v24 + 2;
  p_s1 = v24;
  *v24 = v24 + 2;
  v109 = v23;
  if ( v23 <= 0xF )
  {
    v26 = (__m128i)(unsigned __int64)v24;
    v27 = v23 + 1;
    if ( v23 )
    {
LABEL_25:
      v100 = v26;
      memcpy(v25, src, v27);
      v28 = v109;
      v26 = _mm_load_si128(&v100);
      goto LABEL_26;
    }
    goto LABEL_48;
  }
  v94 = v24;
  v95 = std::string::_M_create();
  *v94 = v95;
  v25 = (_BYTE *)v95;
  v96 = v109;
  v26 = (__m128i)(unsigned __int64)v94;
  v94[2] = v109;
  v27 = v96 + 1;
  if ( !v96 )
  {
LABEL_48:
    *v25 = *(_BYTE *)src;
    v28 = v109;
    goto LABEL_26;
  }
  v28 = -1;
  if ( v27 )
    goto LABEL_25;
LABEL_26:
  v126 = v26;
  *((_QWORD *)p_s1 + 1) = v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v132,
    (const __m128i *)&v123);
  v132[2] = 0;
  LOBYTE(v127) = 0;
  *(_QWORD *)s2 = 0;
  src = s2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v127) = 3;
  v29 = operator new(0x20u);
  strcpy((char *)(v29 + 16), "parsed_type");
  *(_QWORD *)v29 = v29 + 16;
  *(_QWORD *)(v29 + 8) = 11;
  *(_OWORD *)s2 = (unsigned __int64)v29;
  if ( (_QWORD)v114 )
    v30 = v113;
  else
    v30 = _qstring<char>::c_str(void)const::nullstr;
  s2[16] = 0;
  v100.m128i_i64[0] = (__int64)&v129;
  *(_QWORD *)&v129 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  s2[16] = 3;
  v31 = (_QWORD *)operator new(0x20u);
  p_s1 = v31;
  *v31 = v31 + 2;
  if ( !v30 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  dest = v31 + 2;
  v32 = strlen(v30);
  v33 = dest;
  v109 = v32;
  v34 = v32;
  if ( v32 > 0xF )
  {
    desta = (void *)v32;
    v92 = std::string::_M_create();
    v93 = p_s1;
    v33 = (void *)v92;
    v34 = (size_t)desta;
    *(_QWORD *)p_s1 = v92;
    v93[2] = v109;
    goto LABEL_88;
  }
  if ( v32 == 1 )
  {
    *((_BYTE *)p_s1 + 16) = *v30;
    goto LABEL_32;
  }
  if ( v32 )
  {
LABEL_88:
    memcpy(v33, v30, v34);
    v32 = v109;
    v33 = *(void **)p_s1;
  }
LABEL_32:
  v35 = p_s1;
  *((_QWORD *)p_s1 + 1) = v32;
  *((_BYTE *)v33 + v32) = 0;
  p_s1 = &v127;
  v129 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v133,
    (const __m128i *)&v127);
  v133[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v6,
    &v130,
    3);
  v36 = (__m128i *)&v134;
  do
  {
    v36 = (__m128i *)((char *)v36 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v36 != &v130 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (unsigned __int64)v112 > 1 )
  {
    v109 = 0;
    v37 = s;
    p_s1 = &v110;
    v110 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v38 = (__int64 *)operator new(0x20u);
    v39 = v38;
    *v38 = (__int64)(v38 + 2);
    if ( !v37 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v104 = v38 + 2;
    v40 = (char *)strlen(v37);
    v41 = (__int64)v104;
    v108 = v40;
    v42 = v40;
    if ( (unsigned __int64)v40 > 0xF )
    {
      v104 = v40;
      v97 = std::string::_M_create();
      *v39 = v97;
      v41 = v97;
      v42 = v104;
      v39[2] = (__int64)v108;
    }
    else
    {
      if ( v40 == (_BYTE *)&dword_0 + 1 )
      {
        *((_BYTE *)v39 + 16) = *v37;
        goto LABEL_39;
      }
      if ( !v40 )
      {
LABEL_39:
        v39[1] = (__int64)v40;
        v40[v41] = 0;
        v43 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v44 = *(_BYTE *)v43;
        v45 = *(_QWORD *)(v43 + 8);
        *(_BYTE *)v43 = 3;
        *(_QWORD *)(v43 + 8) = v39;
        LOBYTE(v109) = v44;
        v110 = v45;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_40;
      }
    }
    memcpy((void *)v41, v37, (size_t)v42);
    v40 = v108;
    v41 = *v39;
    goto LABEL_39;
  }
LABEL_40:
  tinfo_size = get_tinfo_size();
  v47 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v48 = *(_BYTE *)v47;
  v49 = *(_QWORD *)(v47 + 8);
  *(_BYTE *)v47 = 6;
  LOBYTE(v109) = v48;
  *(_QWORD *)(v47 + 8) = tinfo_size;
  v110 = v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = (get_tinfo_property() & 0xF) == 10;
  v50 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v51 = *(_BYTE *)v50;
  v52 = *(_QWORD *)(v50 + 8);
  *(_BYTE *)v50 = 4;
  LOBYTE(v109) = v51;
  *(_QWORD *)(v50 + 8) = v110;
  v110 = v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = (get_tinfo_property() & 0xF) == 12;
  v53 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v54 = *(_BYTE *)v53;
  v55 = *(_QWORD *)(v53 + 8);
  *(_BYTE *)v53 = 4;
  LOBYTE(v109) = v54;
  *(_QWORD *)(v53 + 8) = v110;
  v110 = v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = (get_tinfo_property() & 0x3F) == 13;
  v56 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v57 = *(_BYTE *)v56;
  v58 = *(_QWORD *)(v56 + 8);
  *(_BYTE *)v56 = 4;
  LOBYTE(v109) = v57;
  *(_QWORD *)(v56 + 8) = v110;
  v110 = v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = (get_tinfo_property() & 0x3F) == 29;
  v59 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v60 = *(_BYTE *)v59;
  v61 = *(_QWORD *)(v59 + 8);
  *(_BYTE *)v59 = 4;
  LOBYTE(v109) = v60;
  *(_QWORD *)(v59 + 8) = v110;
  v110 = v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = (get_tinfo_property() & 0x3F) == 45;
  v62 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v63 = *(_BYTE *)v62;
  v64 = *(_QWORD *)(v62 + 8);
  *(_BYTE *)v62 = 4;
  LOBYTE(v109) = v63;
  *(_QWORD *)(v62 + 8) = v110;
  v110 = v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = (get_tinfo_property() & 0xF) == 11;
  v65 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v66 = *(_BYTE *)v65;
  v67 = *(_QWORD *)(v65 + 8);
  *(_BYTE *)v65 = 4;
  LOBYTE(v109) = v66;
  *(_QWORD *)(v65 + 8) = v110;
  v110 = v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = (get_tinfo_property() & 0xF) == 9;
  v68 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v69 = *(_BYTE *)v68;
  v70 = *(_QWORD *)(v68 + 8);
  *(_BYTE *)v68 = 4;
  LOBYTE(v109) = v69;
  *(_QWORD *)(v68 + 8) = v110;
  v110 = v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree();
  }
  if ( s )
  {
    *(_QWORD *)&v112 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v115 != v117 )
    operator delete(v115, v117[0] + 1LL);
  return v6;
}

