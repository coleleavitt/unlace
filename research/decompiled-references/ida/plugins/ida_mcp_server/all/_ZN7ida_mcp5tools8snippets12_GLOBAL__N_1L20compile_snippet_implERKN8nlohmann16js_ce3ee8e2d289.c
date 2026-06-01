_QWORD *__fastcall ida_mcp::tools::snippets::`anonymous namespace'::compile_snippet_impl(_QWORD *a1, __int64 a2)
{
  void *v2; // r12
  const char *v3; // rbp
  size_t v4; // r13
  void *v5; // r13
  void *exception; // r12
  void *v7; // r12
  char *v8; // rax
  const char *v9; // rbp
  char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r15
  size_t v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12
  size_t v19; // rdx
  int v20; // eax
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rax
  const char *v24; // r12
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _BYTE *v31; // r15
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdx
  _BYTE *v34; // rdi
  __int64 *v35; // r12
  __m128i si128; // xmm0
  size_t v37; // rcx
  __int64 v38; // rax
  __m128i *v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE *v42; // r12
  unsigned __int64 v43; // r14
  _QWORD *v44; // rax
  _BYTE *v45; // rdi
  __int64 *v46; // rbp
  __m128i v47; // xmm0
  size_t v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  _BYTE *v51; // r15
  _QWORD *v52; // rax
  unsigned __int64 v53; // rdx
  _BYTE *v54; // rdi
  __int64 *v55; // r12
  __m128i v56; // xmm0
  size_t v57; // rcx
  __int64 v58; // rax
  __m128i *v59; // r12
  __int64 v61; // r12
  __int64 v62; // r15
  __int64 v63; // r12
  __int64 v64; // rbx
  __int64 v65; // r14
  size_t v66; // rdx
  int v67; // eax
  unsigned __int64 v68; // rbp
  __int64 v69; // rsi
  unsigned __int64 v70; // r14
  size_t v71; // rdx
  int v72; // eax
  __int64 v73; // rbp
  __int64 v74; // rbx
  size_t v75; // rdx
  int v76; // eax
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // rbx
  size_t v79; // rdx
  int v80; // eax
  __int64 v81; // r14
  __int64 v82; // rbx
  size_t v83; // rdx
  int v84; // eax
  unsigned __int64 v85; // r12
  __int64 v86; // r9
  __int64 v87; // rbp
  unsigned __int64 v88; // r14
  size_t v89; // rax
  int v90; // eax
  __int64 v91; // r9
  _BYTE *v92; // rax
  _BYTE *v93; // r14
  _BYTE *v94; // rax
  _BYTE *v95; // rsi
  unsigned __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // r12
  __int64 v99; // r14
  size_t v100; // rdx
  int v101; // eax
  unsigned __int64 v102; // rbp
  unsigned __int64 v103; // rbx
  size_t v104; // rax
  int v105; // eax
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx
  char *v113; // rdi
  unsigned int v114; // eax
  unsigned int v115; // edx
  __int64 v116; // rsi
  _QWORD *v117; // [rsp+0h] [rbp-1E8h]
  int v118[2]; // [rsp+10h] [rbp-1D8h]
  int v119[2]; // [rsp+10h] [rbp-1D8h]
  int v120[2]; // [rsp+18h] [rbp-1D0h]
  int v122[2]; // [rsp+20h] [rbp-1C8h]
  __int64 v123[2]; // [rsp+30h] [rbp-1B8h] BYREF
  int v124[4]; // [rsp+40h] [rbp-1A8h] BYREF
  unsigned __int64 v125; // [rsp+58h] [rbp-190h]
  unsigned __int64 v126; // [rsp+60h] [rbp-188h]
  unsigned __int64 v127; // [rsp+68h] [rbp-180h]
  char *v128; // [rsp+70h] [rbp-178h]
  __int128 v129; // [rsp+78h] [rbp-170h]
  void *src; // [rsp+90h] [rbp-158h] BYREF
  __int64 v131; // [rsp+98h] [rbp-150h]
  int v132[2]; // [rsp+A0h] [rbp-148h] BYREF
  void *v133; // [rsp+B0h] [rbp-138h]
  __m128 v134; // [rsp+B8h] [rbp-130h] BYREF
  char v135; // [rsp+D0h] [rbp-118h] BYREF
  int v136[4]; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v137; // [rsp+E8h] [rbp-100h]
  __int64 v138; // [rsp+F0h] [rbp-F8h]
  __int64 v139; // [rsp+F8h] [rbp-F0h]
  __int64 v140; // [rsp+100h] [rbp-E8h] BYREF
  int v141[4]; // [rsp+108h] [rbp-E0h]
  char v142; // [rsp+118h] [rbp-D0h]
  int v143[4]; // [rsp+120h] [rbp-C8h]
  void *v144; // [rsp+130h] [rbp-B8h] BYREF
  __int128 s2; // [rsp+138h] [rbp-B0h] BYREF
  char v146; // [rsp+148h] [rbp-A0h]
  __m128i v147; // [rsp+150h] [rbp-98h]
  __m128i v148; // [rsp+160h] [rbp-88h] BYREF
  _QWORD s1[3]; // [rsp+170h] [rbp-78h] BYREF
  __int64 v150; // [rsp+188h] [rbp-60h]
  _QWORD v151[2]; // [rsp+190h] [rbp-58h] BYREF
  __int64 v152; // [rsp+1A0h] [rbp-48h]
  _QWORD v153[8]; // [rsp+1A8h] [rbp-40h] BYREF

  v117 = a1;
  v153[0] = __readfsqword(0x28u);
  v144 = (char *)&s2 + 8;
  DWORD2(s2) = 1701080931;
  *(_QWORD *)&s2 = 4;
  BYTE12(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v9 = "null";
        break;
      case 1:
        v9 = "object";
        break;
      case 2:
        v9 = "array";
        break;
      case 3:
        v9 = "string";
        break;
      case 4:
        v9 = "boolean";
        break;
      case 8:
        v9 = "binary";
        break;
      case 9:
        v9 = "discarded";
        break;
      default:
        v9 = "number";
        break;
    }
    LOBYTE(s1[0]) = 0;
    v148.m128i_i64[0] = (__int64)s1;
    v148.m128i_i64[1] = 0;
    strlen(v9);
    std::string::reserve();
    std::string::append((__int64)&v148, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)&v148, v9);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(v11 + 16);
  v13 = v11 + 8;
  if ( v12 )
  {
    v14 = v11 + 8;
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v12 + 40);
        if ( !v17 )
          break;
        v15 = 4;
        if ( v17 <= 4 )
          v15 = *(_QWORD *)(v12 + 40);
        v16 = memcmp(*(const void **)(v12 + 32), (char *)&s2 + 8, v15);
        if ( v16 || (v16 = v17 - 4, (__int64)(v17 - 4) <= 0x7FFFFFFF) )
        {
          if ( v16 < 0 )
            break;
        }
        v14 = v12;
        v12 = *(_QWORD *)(v12 + 16);
        if ( !v12 )
          goto LABEL_12;
      }
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v12 );
LABEL_12:
    if ( v13 != v14 )
    {
      v18 = *(_QWORD *)(v14 + 40);
      if ( v18 )
      {
        v19 = 4;
        if ( v18 <= 4 )
          v19 = *(_QWORD *)(v14 + 40);
        v20 = memcmp((char *)&s2 + 8, *(const void **)(v14 + 32), v19);
        if ( v20 || (v20 = 4 - v18, (__int64)(4 - v18) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v20 >= 0 )
            v13 = v14;
        }
      }
      else
      {
        v13 = v14;
      }
    }
  }
  LOBYTE(v132[0]) = 0;
  src = v132;
  v131 = 0;
  if ( *(_BYTE *)(v13 + 64) != 3 )
  {
    v7 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v13 + 64) )
    {
      case 0:
        v8 = "null";
        break;
      case 1:
        v8 = "object";
        break;
      case 2:
        v8 = (char *)"array";
        break;
      case 3:
        v8 = "string";
        break;
      case 4:
        v8 = "boolean";
        break;
      case 8:
        v8 = "binary";
        break;
      case 9:
        v8 = "discarded";
        break;
      default:
        v8 = "number";
        break;
    }
    v128 = v8;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v7,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v134.m128_u64[0] = 13;
  strcpy(&v134.m128_i8[8], "__mcp_snippet");
  v133 = &v134.m128_u16[4];
  if ( *(_BYTE *)a2 == 1 )
  {
    v61 = *(_QWORD *)(a2 + 8);
    v62 = *(_QWORD *)(v61 + 16);
    if ( v62 )
    {
      v63 = v61 + 8;
      v64 = v62;
      *(_QWORD *)v118 = v63;
      v65 = v63;
      do
      {
        while ( 1 )
        {
          v68 = *(_QWORD *)(v64 + 40);
          if ( !v68 )
            break;
          v66 = 13;
          if ( v68 <= 0xD )
            v66 = *(_QWORD *)(v64 + 40);
          v67 = memcmp(*(const void **)(v64 + 32), "function_name", v66);
          if ( v67 || (v67 = v68 - 13, (__int64)(v68 - 13) <= 0x7FFFFFFF) )
          {
            if ( v67 < 0 )
              break;
          }
          v65 = v64;
          v64 = *(_QWORD *)(v64 + 16);
          if ( !v64 )
            goto LABEL_59;
        }
        v64 = *(_QWORD *)(v64 + 24);
      }
      while ( v64 );
LABEL_59:
      v69 = v65;
      if ( v63 == v65 )
        goto LABEL_66;
      v70 = *(_QWORD *)(v65 + 40);
      if ( v70 )
      {
        v71 = 13;
        if ( v70 <= 0xD )
          v71 = v70;
        v72 = memcmp(*(const void **)(v69 + 32), "function_name", v71);
        if ( !v72 )
        {
          v72 = v70 - 13;
          if ( (__int64)(v70 - 13) > 0x7FFFFFFF )
            goto LABEL_66;
        }
        if ( v72 > 0 )
          goto LABEL_66;
      }
      v81 = v63;
      v82 = v62;
      strcpy((char *)s1, "function_name");
      v123[0] = a2;
      *(_QWORD *)v122 = v63;
      do
      {
        while ( 1 )
        {
          v85 = *(_QWORD *)(v82 + 40);
          if ( !v85 )
            break;
          v83 = 13;
          if ( v85 <= 0xD )
            v83 = *(_QWORD *)(v82 + 40);
          v84 = memcmp(*(const void **)(v82 + 32), s1, v83);
          if ( v84 || (v84 = v85 - 13, (__int64)(v85 - 13) <= 0x7FFFFFFF) )
          {
            if ( v84 < 0 )
              break;
          }
          v81 = v82;
          v82 = *(_QWORD *)(v82 + 16);
          if ( !v82 )
            goto LABEL_92;
        }
        v82 = *(_QWORD *)(v82 + 24);
      }
      while ( v82 );
LABEL_92:
      v63 = *(_QWORD *)v122;
      v86 = v81;
      v87 = v123[0];
      if ( *(_QWORD *)v122 != v81 )
      {
        v88 = *(_QWORD *)(v81 + 40);
        if ( v88 )
        {
          v89 = 13;
          *(_QWORD *)v120 = v86;
          if ( v88 <= 0xD )
            v89 = v88;
          v90 = memcmp(s1, *(const void **)(v86 + 32), v89);
          v91 = *(_QWORD *)v120;
          if ( v90 || (v90 = 13 - v88, (__int64)(13 - v88) >= (__int64)0xFFFFFFFF80000000LL) )
          {
            if ( v90 < 0 )
              v91 = *(_QWORD *)v122;
            *(_QWORD *)v118 = v91;
          }
        }
        else
        {
          *(_QWORD *)v118 = v86;
        }
      }
      if ( !*(_BYTE *)(*(_QWORD *)v118 + 64LL) )
      {
LABEL_66:
        *(_QWORD *)v119 = v63;
        v73 = v63;
        v74 = v62;
        do
        {
          while ( 1 )
          {
            v77 = *(_QWORD *)(v74 + 40);
            if ( !v77 )
              break;
            v75 = 9;
            if ( v77 <= 9 )
              v75 = *(_QWORD *)(v74 + 40);
            v76 = memcmp(*(const void **)(v74 + 32), "safe_only", v75);
            if ( v76 || (v76 = v77 - 9, (__int64)(v77 - 9) <= 0x7FFFFFFF) )
            {
              if ( v76 < 0 )
                break;
            }
            v73 = v74;
            v74 = *(_QWORD *)(v74 + 16);
            if ( !v74 )
              goto LABEL_75;
          }
          v74 = *(_QWORD *)(v74 + 24);
        }
        while ( v74 );
LABEL_75:
        if ( v63 != v73 )
        {
          v78 = *(_QWORD *)(v73 + 40);
          if ( !v78 )
            goto LABEL_112;
          v79 = 9;
          if ( v78 <= 9 )
            v79 = *(_QWORD *)(v73 + 40);
          v80 = memcmp(*(const void **)(v73 + 32), "safe_only", v79);
          if ( v80 || (v80 = v78 - 9, (__int64)(v78 - 9) <= 0x7FFFFFFF) )
          {
            if ( v80 <= 0 )
            {
LABEL_112:
              v99 = v63;
              strcpy((char *)s1, "safe_only");
              do
              {
                while ( 1 )
                {
                  v102 = *(_QWORD *)(v62 + 40);
                  if ( !v102 )
                    break;
                  v100 = 9;
                  if ( v102 <= 9 )
                    v100 = *(_QWORD *)(v62 + 40);
                  v101 = memcmp(*(const void **)(v62 + 32), s1, v100);
                  if ( v101 || (v101 = v102 - 9, (__int64)(v102 - 9) <= 0x7FFFFFFF) )
                  {
                    if ( v101 < 0 )
                      break;
                  }
                  v99 = v62;
                  v62 = *(_QWORD *)(v62 + 16);
                  if ( !v62 )
                    goto LABEL_121;
                }
                v62 = *(_QWORD *)(v62 + 24);
              }
              while ( v62 );
LABEL_121:
              if ( v63 != v99 )
              {
                v103 = *(_QWORD *)(v99 + 40);
                if ( v103 )
                {
                  v104 = 9;
                  if ( v103 <= 9 )
                    v104 = *(_QWORD *)(v99 + 40);
                  v105 = memcmp(s1, *(const void **)(v99 + 32), v104);
                  if ( v105 || (v105 = 9 - v103, (__int64)(9 - v103) >= (__int64)0xFFFFFFFF80000000LL) )
                  {
                    if ( v105 < 0 )
                      v99 = v63;
                    *(_QWORD *)v119 = v99;
                  }
                }
                else
                {
                  *(_QWORD *)v119 = v99;
                }
              }
              if ( *(_BYTE *)(*(_QWORD *)v119 + 64LL) != 4 )
              {
                v2 = __cxa_allocate_exception(0x20u);
                switch ( *(_BYTE *)(*(_QWORD *)v119 + 64LL) )
                {
                  case 0:
                    v3 = "null";
                    break;
                  case 1:
                    v3 = "object";
                    break;
                  case 2:
                    v3 = "array";
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
                LOBYTE(s1[0]) = 0;
                v148.m128i_i64[0] = (__int64)s1;
                v148.m128i_i64[1] = 0;
                v4 = strlen(v3);
                std::string::reserve();
                if ( (unsigned __int64)(v148.m128i_i64[1] - 0x7FFFFFFFFFFFFFE2LL) > 0x1C )
                {
                  std::string::_M_append();
                  if ( 0x7FFFFFFFFFFFFFFELL - v148.m128i_i64[1] >= v4 )
                  {
                    std::string::_M_append();
                    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
                      (__int64)v2,
                      302);
                    std::string::_M_dispose();
                    __cxa_throw(
                      v2,
                      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
                  }
                  std::__throw_length_error("basic_string::append");
                }
                std::__throw_length_error("basic_string::append");
              }
            }
          }
        }
        goto LABEL_22;
      }
      v92 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v144 = (char *)&s2 + 8;
      v93 = v92;
      *(_QWORD *)&s2 = 0;
      BYTE8(s2) = 0;
      if ( *v92 != 3 )
      {
        v5 = __cxa_allocate_exception(0x20u);
        switch ( *v93 )
        {
          case 0:
            v10 = "null";
            break;
          case 1:
            v10 = "object";
            break;
          case 2:
            v10 = (char *)"array";
            break;
          case 3:
            v10 = "string";
            break;
          case 4:
            v10 = "boolean";
            break;
          case 8:
            v10 = "binary";
            break;
          case 9:
            v10 = "discarded";
            break;
          default:
            v10 = "number";
            break;
        }
        v128 = v10;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
          (__int64)v5,
          302);
        std::string::_M_dispose();
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      std::string::_M_assign();
      v94 = v133;
      v95 = v133;
      if ( v133 == &v134.m128_u16[4] )
      {
        v96 = s2;
        if ( v144 != (char *)&s2 + 8 )
        {
          v133 = v144;
          v134 = _mm_loadh_ps((const double *)&s2 + 1);
LABEL_148:
          v144 = (char *)&s2 + 8;
          v94 = (char *)&s2 + 8;
          goto LABEL_107;
        }
      }
      else
      {
        v96 = s2;
        if ( v144 != (char *)&s2 + 8 )
        {
          v97 = v134.m128_i64[1];
          v133 = v144;
          v134 = _mm_loadh_ps((const double *)&s2 + 1);
          if ( v94 )
          {
            v144 = v94;
            *((_QWORD *)&s2 + 1) = v97;
            goto LABEL_107;
          }
          goto LABEL_148;
        }
      }
      if ( v96 )
      {
        if ( v96 == 1 )
        {
          *(_BYTE *)v133 = BYTE8(s2);
          v95 = v133;
          v96 = s2;
          goto LABEL_156;
        }
        if ( (unsigned int)v96 >= 8 )
        {
          *(_QWORD *)v133 = *((_QWORD *)&s2 + 1);
          *(_QWORD *)&v95[(unsigned int)v96 - 8] = *(_QWORD *)((char *)&s2 + (unsigned int)v96);
          v112 = (unsigned __int64)(v95 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v113 = (char *)((char *)&s2 + 8 - &v95[-v112]);
          if ( (((_DWORD)v96 + (_DWORD)v95 - (_DWORD)v112) & 0xFFFFFFF8) >= 8 )
          {
            v114 = (v96 + (_DWORD)v95 - v112) & 0xFFFFFFF8;
            v115 = 0;
            do
            {
              v116 = v115;
              v115 += 8;
              *(_QWORD *)(v112 + v116) = *(_QWORD *)&v113[v116];
            }
            while ( v115 < v114 );
          }
LABEL_155:
          v95 = v133;
          v96 = s2;
          goto LABEL_156;
        }
        if ( (v96 & 4) != 0 )
        {
          *(_DWORD *)v133 = DWORD2(s2);
          *(_DWORD *)&v95[(unsigned int)v96 - 4] = *(_DWORD *)((char *)&s2 + (unsigned int)v96 + 4);
          v95 = v133;
          v96 = s2;
          goto LABEL_156;
        }
        if ( (_DWORD)v96 )
        {
          *(_BYTE *)v133 = BYTE8(s2);
          if ( (v96 & 2) != 0 )
          {
            *(_WORD *)&v95[(unsigned int)v96 - 2] = *(_WORD *)((char *)&s2 + (unsigned int)v96 + 6);
            v95 = v133;
            v96 = s2;
            goto LABEL_156;
          }
          goto LABEL_155;
        }
      }
LABEL_156:
      v134.m128_u64[0] = v96;
      v95[v96] = 0;
      v94 = v144;
LABEL_107:
      *v94 = 0;
      if ( v144 != (char *)&s2 + 8 )
        operator delete(v144, *((_QWORD *)&s2 + 1) + 1LL);
      if ( *(_BYTE *)v87 != 1 )
        goto LABEL_22;
      v98 = *(_QWORD *)(v87 + 8);
      v62 = *(_QWORD *)(v98 + 16);
      v63 = v98 + 8;
      if ( !v62 )
        goto LABEL_22;
      goto LABEL_66;
    }
  }
LABEL_22:
  v128 = nullptr;
  v129 = 0;
  v21 = compile_idc_snippet();
  v135 = 0;
  *(_QWORD *)v136 = 0;
  if ( !v21 )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v135 = 3;
    v22 = operator new(0x20u);
    strcpy((char *)(v22 + 16), "success");
    *(_QWORD *)v22 = v22 + 16;
    *(_QWORD *)(v22 + 8) = 7;
    v137 = 4;
    v138 = 0;
    v139 = 0;
    *(_OWORD *)v136 = (unsigned __int64)v22;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v148,
      (const __m128i *)&v135);
    s1[0] = 0;
    LOBYTE(v140) = 0;
    *(_QWORD *)v141 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v140) = 3;
    v23 = operator new(0x20u);
    *(_BYTE *)(v23 + 20) = 114;
    *(_QWORD *)v23 = v23 + 16;
    *(_DWORD *)(v23 + 16) = 1869771365;
    *(_QWORD *)(v23 + 8) = 5;
    *(_BYTE *)(v23 + 21) = 0;
    *(_OWORD *)v141 = (unsigned __int64)v23;
    if ( (_QWORD)v129 )
      v24 = v128;
    else
      v24 = _qstring<char>::c_str(void)const::nullstr;
    v142 = 0;
    *(_QWORD *)v143 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v142 = 3;
    v25 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v25, v24, v26, v27, v28, v29, (int)v117, (int)&src, (__int64)v136);
    v123[0] = (__int64)&v140;
    *(_OWORD *)v143 = (unsigned __int64)v25;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &s1[1],
      (const __m128i *)&v140);
    v150 = 0;
    LOBYTE(v144) = 0;
    *(_QWORD *)&s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v144) = 3;
    v30 = operator new(0x20u);
    *(_QWORD *)v30 = v30 + 16;
    strcpy((char *)(v30 + 16), "code");
    *(_QWORD *)(v30 + 8) = 4;
    v146 = 0;
    v147.m128i_i64[0] = 0;
    s2 = (unsigned __int64)v30;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v146 = 3;
    v31 = src;
    *(_QWORD *)v124 = v131;
    v32 = (_QWORD *)operator new(0x20u);
    v33 = *(_QWORD *)v124;
    v34 = v32 + 2;
    v35 = v32;
    *v32 = v32 + 2;
    v125 = v33;
    if ( v33 > 0xF )
    {
      v108 = std::string::_M_create();
      *v35 = v108;
      v34 = (_BYTE *)v108;
      v109 = v125;
      si128 = (__m128i)(unsigned __int64)v35;
      v35[2] = v125;
      v37 = v109 + 1;
      if ( v109 )
      {
        v38 = -1;
        if ( v37 )
          goto LABEL_27;
LABEL_28:
        v35[1] = v38;
        v147 = si128;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v151,
          (const __m128i *)&v144);
        v152 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v117,
          &v148,
          3);
        v39 = (__m128i *)v153;
        do
        {
          v39 = (__m128i *)((char *)v39 - 24);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v39 != &v148 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_40;
      }
    }
    else
    {
      si128 = (__m128i)(unsigned __int64)v32;
      v37 = v33 + 1;
      if ( v33 )
      {
LABEL_27:
        *(__m128i *)v124 = si128;
        memcpy(v34, v31, v37);
        v38 = v125;
        si128 = _mm_load_si128((const __m128i *)v124);
        goto LABEL_28;
      }
    }
    *v34 = *v31;
    v38 = v125;
    goto LABEL_28;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v135 = 3;
  v40 = operator new(0x20u);
  strcpy((char *)(v40 + 16), "success");
  *(_QWORD *)v40 = v40 + 16;
  *(_QWORD *)(v40 + 8) = 7;
  v137 = 4;
  v138 = 1;
  v139 = 0;
  *(_OWORD *)v136 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v148,
    (const __m128i *)&v135);
  s1[0] = 0;
  LOBYTE(v140) = 0;
  *(_QWORD *)v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v140) = 3;
  v41 = operator new(0x20u);
  strcpy((char *)(v41 + 16), "function_name");
  *(_QWORD *)v41 = v41 + 16;
  *(_QWORD *)(v41 + 8) = 13;
  v142 = 0;
  *(_QWORD *)v143 = 0;
  *(_OWORD *)v141 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v42 = v133;
  v43 = v134.m128_u64[0];
  v44 = (_QWORD *)operator new(0x20u);
  v45 = v44 + 2;
  v126 = v43;
  v46 = v44;
  *v44 = v44 + 2;
  if ( v43 <= 0xF )
  {
    v47 = (__m128i)(unsigned __int64)v44;
    v48 = v43 + 1;
    if ( v43 )
    {
LABEL_33:
      *(__m128i *)v123 = v47;
      memcpy(v45, v42, v48);
      v49 = v126;
      v47 = _mm_load_si128((const __m128i *)v123);
      goto LABEL_34;
    }
    goto LABEL_135;
  }
  v106 = std::string::_M_create();
  *v46 = v106;
  v45 = (_BYTE *)v106;
  v107 = v126;
  v47 = (__m128i)(unsigned __int64)v46;
  v46[2] = v126;
  v48 = v107 + 1;
  if ( !v107 )
  {
LABEL_135:
    *v45 = *v42;
    v49 = v126;
    goto LABEL_34;
  }
  v49 = -1;
  if ( v48 )
    goto LABEL_33;
LABEL_34:
  v46[1] = v49;
  v123[0] = (__int64)&v140;
  *(__m128i *)v143 = v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s1[1],
    (const __m128i *)&v140);
  v150 = 0;
  LOBYTE(v144) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v144) = 3;
  v50 = operator new(0x20u);
  *(_QWORD *)v50 = v50 + 16;
  strcpy((char *)(v50 + 16), "code");
  *(_QWORD *)(v50 + 8) = 4;
  v146 = 0;
  v147.m128i_i64[0] = 0;
  s2 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v146 = 3;
  v51 = src;
  *(_QWORD *)v124 = v131;
  v52 = (_QWORD *)operator new(0x20u);
  v53 = *(_QWORD *)v124;
  v54 = v52 + 2;
  v55 = v52;
  *v52 = v52 + 2;
  v127 = v53;
  if ( v53 <= 0xF )
  {
    v56 = (__m128i)(unsigned __int64)v52;
    v57 = v53 + 1;
    if ( v53 )
    {
LABEL_36:
      *(__m128i *)v124 = v56;
      memcpy(v54, v51, v57);
      v58 = v127;
      v56 = _mm_load_si128((const __m128i *)v124);
      goto LABEL_37;
    }
    goto LABEL_136;
  }
  v110 = std::string::_M_create();
  *v55 = v110;
  v54 = (_BYTE *)v110;
  v111 = v127;
  v56 = (__m128i)(unsigned __int64)v55;
  v55[2] = v127;
  v57 = v111 + 1;
  if ( !v111 )
  {
LABEL_136:
    *v54 = *v51;
    v58 = v127;
    goto LABEL_37;
  }
  v58 = -1;
  if ( v57 )
    goto LABEL_36;
LABEL_37:
  v55[1] = v58;
  v147 = v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v151,
    (const __m128i *)&v144);
  v152 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v117,
    &v148,
    3);
  v59 = (__m128i *)v153;
  do
  {
    v59 = (__m128i *)((char *)v59 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v59 != &v148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_40:
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree();
  }
  if ( v133 != &v134.m128_u16[4] )
    operator delete(v133, v134.m128_u64[1] + 1);
  if ( src != v132 )
    operator delete(src, *(_QWORD *)v132 + 1LL);
  return v117;
}

