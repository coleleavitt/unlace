_QWORD *__fastcall ida_mcp::tools::wide_values::`anonymous namespace'::get_wide_value_impl(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v5; // r15
  __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  size_t v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbp
  size_t v15; // rdx
  int v16; // eax
  char v17; // al
  _BYTE *v18; // r13
  int *v19; // rax
  int *v20; // r14
  __int64 v21; // rbp
  std::runtime_error *v22; // rbx
  __int64 wide_value; // rax
  __int64 v24; // rax
  size_t v25; // rax
  unsigned int v26; // r13d
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  size_t v31; // rsi
  __int64 v32; // rax
  char v33; // al
  _QWORD *v34; // r15
  __int64 v35; // r14
  _QWORD *v36; // rbp
  size_t v37; // rdx
  int v38; // eax
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rcx
  size_t v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  void *v44; // r9
  __int64 v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // r8
  __int64 *v49; // rax
  _QWORD *v50; // rbp
  __int64 *v51; // r14
  size_t v52; // rax
  unsigned int v53; // r15d
  char v54; // al
  __int64 v55; // r9
  char *v56; // rbp
  char *v57; // r13
  __int64 v58; // rbp
  __int64 v59; // r15
  size_t v60; // rdx
  int v61; // eax
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // r15
  size_t v64; // rdx
  int v65; // eax
  __int64 v66; // r15
  __int64 v67; // rax
  char *insert_hint_unique_pos; // rax
  __int64 v69; // rdx
  char *v70; // r9
  _QWORD *v72; // rax
  unsigned __int64 v73; // rcx
  char *v74; // rax
  char *v75; // rsi
  unsigned int v76; // r13d
  unsigned int v77; // r13d
  unsigned int v78; // eax
  __int64 v79; // rdx
  void *v80; // rdi
  void *v81; // r8
  void *v82; // rdi
  __int64 v83; // rax
  unsigned int v84; // r8d
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // rdi
  char *v88; // rcx
  char *v89; // r9
  unsigned int v90; // edx
  unsigned int v91; // ecx
  __int64 v92; // r8
  unsigned __int64 v93; // rcx
  unsigned int v94; // r15d
  unsigned int v95; // r15d
  unsigned int v96; // edx
  __int64 v97; // rsi
  unsigned __int64 v98; // rbp
  size_t v99; // rax
  unsigned __int64 v100; // r13
  size_t v101; // rax
  __int64 v102; // [rsp+0h] [rbp-178h]
  char *s; // [rsp+8h] [rbp-170h]
  char *sa; // [rsp+8h] [rbp-170h]
  char *sb; // [rsp+8h] [rbp-170h]
  _QWORD *v106; // [rsp+18h] [rbp-160h]
  _QWORD *v107; // [rsp+18h] [rbp-160h]
  char *v108; // [rsp+18h] [rbp-160h]
  _QWORD *s1; // [rsp+20h] [rbp-158h]
  void *s1a; // [rsp+20h] [rbp-158h]
  void *s1b; // [rsp+20h] [rbp-158h]
  _QWORD *v112; // [rsp+28h] [rbp-150h]
  size_t v113; // [rsp+48h] [rbp-130h]
  _BYTE *v114; // [rsp+50h] [rbp-128h]
  size_t v115; // [rsp+50h] [rbp-128h]
  void *v116; // [rsp+60h] [rbp-118h]
  size_t v117; // [rsp+68h] [rbp-110h]
  _QWORD v118[2]; // [rsp+70h] [rbp-108h] BYREF
  char v119; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v120; // [rsp+88h] [rbp-F0h]
  char v121; // [rsp+98h] [rbp-E0h]
  __int128 v122; // [rsp+A0h] [rbp-D8h]
  void *v123; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 s2; // [rsp+B8h] [rbp-C0h] BYREF
  __int16 v125; // [rsp+C8h] [rbp-B0h]
  _BOOL8 v126; // [rsp+D0h] [rbp-A8h]
  __int64 v127; // [rsp+D8h] [rbp-A0h]
  __m128i v128; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v129; // [rsp+F0h] [rbp-88h]
  __int64 v130; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v131; // [rsp+108h] [rbp-70h]
  _QWORD v132[13]; // [rsp+110h] [rbp-68h] BYREF

  v132[5] = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v123 = (char *)&s2 + 8;
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
  v6 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = v6 + 8;
  if ( v8 )
  {
    v10 = v6 + 8;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v8 + 40);
        if ( !v13 )
          break;
        v11 = 7;
        if ( v13 <= 7 )
          v11 = *(_QWORD *)(v8 + 40);
        v12 = memcmp(*(const void **)(v8 + 32), (char *)&s2 + 8, v11);
        if ( v12 || (v12 = v13 - 7, (__int64)(v13 - 7) <= 0x7FFFFFFF) )
        {
          if ( v12 < 0 )
            break;
        }
        v10 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v8 )
          goto LABEL_12;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v8 );
LABEL_12:
    if ( v9 != v10 )
    {
      v14 = *(_QWORD *)(v10 + 40);
      if ( v14 )
      {
        v15 = 7;
        if ( v14 <= 7 )
          v15 = *(_QWORD *)(v10 + 40);
        v16 = memcmp((char *)&s2 + 8, *(const void **)(v10 + 32), v15);
        if ( v16 || (v16 = 7 - v14, (__int64)(7 - v14) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v16 >= 0 )
            v9 = v10;
        }
      }
      else
      {
        v9 = v10;
      }
    }
  }
  BYTE8(s2) = 0;
  v17 = *(_BYTE *)(v9 + 64);
  v123 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  if ( v17 != 3 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v4,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v18 = v123;
  v19 = __errno_location();
  *v19 = 0;
  v20 = v19;
  v21 = __isoc23_strtoull();
  if ( v18 == v114 || *v114 || *v20 == 34 && v21 == -1 )
  {
    if ( v123 != (char *)&s2 + 8 )
      operator delete(v123, *((_QWORD *)&s2 + 1) + 1LL);
    v22 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v22, "Invalid address format");
    __cxa_throw(
      v22,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v123 != (char *)&s2 + 8 )
    operator delete(v123, *((_QWORD *)&s2 + 1) + 1LL);
  wide_value = get_wide_value();
  v119 = 0;
  v102 = wide_value;
  *(_QWORD *)&v120 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v119 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "address");
  *(_QWORD *)(v24 + 8) = 7;
  v120 = (unsigned __int64)v24;
  qsnprintf();
  v116 = v118;
  v25 = strlen((const char *)v132);
  v115 = v25;
  v26 = v25;
  if ( v25 > 0xF )
  {
    v72 = (_QWORD *)std::string::_M_create();
    v116 = v72;
    v118[0] = v115;
  }
  else
  {
    if ( v25 == 1 )
    {
      LOBYTE(v118[0]) = v132[0];
      goto LABEL_33;
    }
    if ( !v25 )
    {
LABEL_33:
      v27 = v118;
      goto LABEL_34;
    }
    v72 = v118;
  }
  if ( v26 >= 8 )
  {
    *v72 = v132[0];
    *(_QWORD *)((char *)v72 + v26 - 8) = *(_QWORD *)((char *)&v132[-1] + v26);
    v73 = (unsigned __int64)(v72 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v74 = (char *)v72 - v73;
    v75 = (char *)((char *)v132 - v74);
    v76 = ((_DWORD)v74 + v26) & 0xFFFFFFF8;
    if ( v76 >= 8 )
    {
      v77 = v76 & 0xFFFFFFF8;
      v78 = 0;
      do
      {
        v79 = v78;
        v78 += 8;
        *(_QWORD *)(v73 + v79) = *(_QWORD *)&v75[v79];
      }
      while ( v78 < v77 );
    }
  }
  else if ( (v26 & 4) != 0 )
  {
    *(_DWORD *)v72 = v132[0];
    *(_DWORD *)((char *)v72 + v26 - 4) = *(_DWORD *)((char *)&v131 + v26 + 4);
  }
  else if ( v26 )
  {
    *(_BYTE *)v72 = v132[0];
    if ( (v26 & 2) != 0 )
      *(_WORD *)((char *)v72 + v26 - 2) = *(_WORD *)((char *)&v131 + v26 + 6);
  }
  v25 = v115;
  v27 = v116;
LABEL_34:
  v117 = v25;
  *((_BYTE *)v27 + v25) = 0;
  v121 = 0;
  *(_QWORD *)&v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = 3;
  v28 = (_QWORD *)operator new(0x20u);
  v29 = v116;
  v30 = v28 + 2;
  v31 = v117;
  *v28 = v28 + 2;
  if ( v29 == v118 )
  {
    v84 = v31 + 1;
    if ( (unsigned int)(v31 + 1) >= 8 )
    {
      v28[2] = v118[0];
      *(_QWORD *)((char *)v30 + v84 - 8) = *(_QWORD *)((char *)&v118[-1] + v84);
      v87 = (unsigned __int64)(v28 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v88 = (char *)v30 - v87;
      v89 = (char *)((char *)v118 - v88);
      if ( (((_DWORD)v88 + v84) & 0xFFFFFFF8) >= 8 )
      {
        v90 = ((_DWORD)v88 + v84) & 0xFFFFFFF8;
        v91 = 0;
        do
        {
          v92 = v91;
          v91 += 8;
          *(_QWORD *)(v87 + v92) = *(_QWORD *)&v89[v92];
        }
        while ( v91 < v90 );
      }
    }
    else if ( (v84 & 4) != 0 )
    {
      *((_DWORD *)v28 + 4) = v118[0];
      *(_DWORD *)((char *)v30 + v84 - 4) = *(_DWORD *)((char *)&v117 + v84 + 4);
    }
    else if ( (_DWORD)v31 != -1 )
    {
      *((_BYTE *)v28 + 16) = v118[0];
      if ( (v84 & 2) != 0 )
        *(_WORD *)((char *)v30 + v84 - 2) = *(_WORD *)((char *)&v117 + v84 + 6);
    }
  }
  else
  {
    *v28 = v29;
    v28[2] = v118[0];
  }
  v28[1] = v31;
  v116 = v118;
  LOBYTE(v118[0]) = 0;
  v117 = 0;
  v122 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v128,
    (const __m128i *)&v119,
    2,
    1);
  v129 = 0;
  LOBYTE(v123) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v123) = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "has_value");
  *(_QWORD *)(v32 + 8) = 9;
  LOBYTE(v125) = 4;
  v127 = 0;
  s2 = (unsigned __int64)v32;
  v126 = v102 != -1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v130,
    (const __m128i *)&v123,
    2,
    1);
  v131 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v128,
    2,
    1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v116 != v118 )
    operator delete(v116, v118[0] + 1LL);
  if ( v102 != -1 )
  {
    v33 = *(_BYTE *)a1;
    v123 = (char *)&s2 + 8;
    DWORD2(s2) = 1970037110;
    WORD6(s2) = 101;
    *(_QWORD *)&s2 = 5;
    if ( v33 )
    {
      if ( v33 != 1 )
      {
        v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
          v2,
          305);
        std::string::_M_dispose();
        __cxa_throw(
          v2,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      v34 = (_QWORD *)a1[1];
      v35 = v34[2];
      v106 = v34 + 1;
      v36 = v34 + 1;
      if ( v35 )
      {
        s1 = a1;
        do
        {
          while ( 1 )
          {
            v39 = *(_QWORD *)(v35 + 40);
            if ( !v39 )
              break;
            v37 = 5;
            if ( v39 <= 5 )
              v37 = *(_QWORD *)(v35 + 40);
            v38 = memcmp(*(const void **)(v35 + 32), (char *)&s2 + 8, v37);
            if ( v38 || (v38 = v39 - 5, (__int64)(v39 - 5) <= 0x7FFFFFFF) )
            {
              if ( v38 < 0 )
                break;
            }
            v36 = (_QWORD *)v35;
            v35 = *(_QWORD *)(v35 + 16);
            if ( !v35 )
              goto LABEL_51;
          }
          v35 = *(_QWORD *)(v35 + 24);
        }
        while ( v35 );
LABEL_51:
        a1 = s1;
        if ( v36 != v106 )
        {
          v40 = v36[5];
          if ( !v40 )
            goto LABEL_64;
          v41 = 5;
          s1a = (void *)v36[5];
          if ( v40 <= 5 )
            v41 = v36[5];
          v42 = memcmp((char *)&s2 + 8, (const void *)v36[4], v41);
          if ( v42 || (v42 = 5 - (_DWORD)s1a, 5 - (__int64)s1a >= (__int64)0xFFFFFFFF80000000LL) )
          {
            if ( v42 >= 0 )
            {
LABEL_64:
              *((_BYTE *)v36 + 64) = 5;
              v36[9] = v102;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              qsnprintf();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v49 = (__int64 *)operator new(0x20u);
              v50 = v49 + 2;
              v51 = v49;
              *v49 = (__int64)(v49 + 2);
              v52 = strlen((const char *)v132);
              v113 = v52;
              v53 = v52;
              if ( v52 > 0xF )
              {
                v83 = std::string::_M_create();
                *v51 = v83;
                v50 = (_QWORD *)v83;
                v51[2] = v113;
              }
              else
              {
                if ( v52 == 1 )
                {
                  *((_BYTE *)v51 + 16) = v132[0];
                  goto LABEL_67;
                }
                if ( !v52 )
                  goto LABEL_67;
              }
              if ( v53 >= 8 )
              {
                *v50 = v132[0];
                *(_QWORD *)((char *)v50 + v53 - 8) = *(_QWORD *)((char *)&v132[-1] + v53);
                v93 = (unsigned __int64)(v50 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                v94 = ((_DWORD)v50 - v93 + v53) & 0xFFFFFFF8;
                if ( v94 >= 8 )
                {
                  v95 = v94 & 0xFFFFFFF8;
                  v96 = 0;
                  do
                  {
                    v97 = v96;
                    v96 += 8;
                    *(_QWORD *)(v93 + v97) = *(_QWORD *)((char *)v132 - ((char *)v50 - v93) + v97);
                  }
                  while ( v96 < v95 );
                }
              }
              else if ( (v53 & 4) != 0 )
              {
                *(_DWORD *)v50 = v132[0];
                *(_DWORD *)((char *)v50 + v53 - 4) = *(_DWORD *)((char *)&v131 + v53 + 4);
              }
              else if ( v53 )
              {
                *(_BYTE *)v50 = v132[0];
                if ( (v53 & 2) != 0 )
                  *(_WORD *)((char *)v50 + v53 - 2) = *(_WORD *)((char *)&v131 + v53 + 6);
              }
              v52 = v113;
              v50 = (_QWORD *)*v51;
LABEL_67:
              v51[1] = v52;
              *((_BYTE *)v50 + v52) = 0;
              *((_QWORD *)&s2 + 1) = 0x65685F65756C6176LL;
              v54 = *(_BYTE *)a1;
              v123 = (char *)&s2 + 8;
              v125 = 120;
              *(_QWORD *)&s2 = 9;
              if ( v54 )
              {
                if ( v54 != 1 )
                {
                  v5 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
                  nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
                  nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
                    v5,
                    305);
                  std::string::_M_dispose();
                  __cxa_throw(
                    v5,
                    (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                    (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
                }
                v55 = a1[1];
                v56 = (char *)(v55 + 8);
                v57 = (char *)(v55 + 8);
                if ( *(_QWORD *)(v55 + 16) )
                {
                  s = (char *)(v55 + 8);
                  v58 = *(_QWORD *)(v55 + 16);
                  v59 = a1[1];
                  v107 = a1;
                  do
                  {
                    while ( 1 )
                    {
                      v62 = *(_QWORD *)(v58 + 40);
                      if ( !v62 )
                        break;
                      v60 = 9;
                      if ( v62 <= 9 )
                        v60 = *(_QWORD *)(v58 + 40);
                      v61 = memcmp(*(const void **)(v58 + 32), (char *)&s2 + 8, v60);
                      if ( v61 || (v61 = v62 - 9, (__int64)(v62 - 9) <= 0x7FFFFFFF) )
                      {
                        if ( v61 < 0 )
                          break;
                      }
                      v57 = (char *)v58;
                      v58 = *(_QWORD *)(v58 + 16);
                      if ( !v58 )
                        goto LABEL_79;
                    }
                    v58 = *(_QWORD *)(v58 + 24);
                  }
                  while ( v58 );
LABEL_79:
                  v56 = s;
                  a1 = v107;
                  v55 = v59;
                  if ( s != v57 )
                  {
                    v63 = *((_QWORD *)v57 + 5);
                    if ( !v63 )
                      goto LABEL_92;
                    v64 = 9;
                    sa = (char *)v55;
                    if ( v63 <= 9 )
                      v64 = *((_QWORD *)v57 + 5);
                    v65 = memcmp((char *)&s2 + 8, *((const void **)v57 + 4), v64);
                    v55 = (__int64)sa;
                    if ( v65 || (v65 = 9 - v63, (__int64)(9 - v63) >= (__int64)0xFFFFFFFF80000000LL) )
                    {
                      if ( v65 >= 0 )
                        goto LABEL_92;
                    }
                  }
                }
              }
              else
              {
                *(_BYTE *)a1 = 1;
                v85 = operator new(0x30u);
                a1[1] = v85;
                v55 = v85;
                *(_DWORD *)(v85 + 8) = 0;
                v57 = (char *)(v85 + 8);
                v56 = (char *)(v85 + 8);
                *(_QWORD *)(v85 + 16) = 0;
                *(_QWORD *)(v85 + 24) = v85 + 8;
                *(_QWORD *)(v85 + 32) = v85 + 8;
                *(_QWORD *)(v85 + 40) = 0;
              }
              v108 = (char *)v55;
              v66 = operator new(0x50u);
              *(_QWORD *)(v66 + 32) = v66 + 48;
              v67 = *((_QWORD *)&s2 + 1);
              *(_QWORD *)(v66 + 40) = 9;
              *(_QWORD *)(v66 + 48) = v67;
              LOWORD(v67) = v125;
              *(_QWORD *)(v66 + 64) = 0;
              *(_WORD *)(v66 + 56) = v67;
              *(_QWORD *)(v66 + 72) = 0;
              v123 = (char *)&s2 + 8;
              *(_QWORD *)&s2 = 0;
              BYTE8(s2) = 0;
              insert_hint_unique_pos = (char *)std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                                 v108,
                                                 v57,
                                                 (const void *)(v66 + 48),
                                                 9u);
              v57 = insert_hint_unique_pos;
              if ( v69 )
              {
                v70 = v108;
                if ( v56 != (char *)v69 && !insert_hint_unique_pos )
                {
                  v100 = *(_QWORD *)(v69 + 40);
                  if ( v100 )
                  {
                    v101 = 9;
                    if ( v100 <= 9 )
                      v101 = *(_QWORD *)(v69 + 40);
                    memcmp((const void *)(v66 + 48), *(const void **)(v69 + 32), v101);
                    v70 = v108;
                  }
                }
                sb = v70;
                std::_Rb_tree_insert_and_rebalance();
                v57 = (char *)v66;
                ++*((_QWORD *)sb + 5);
              }
              else
              {
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                v80 = *(void **)(v66 + 32);
                if ( (void *)(v66 + 48) != v80 )
                  operator delete(v80, *(_QWORD *)(v66 + 48) + 1LL);
                operator delete((void *)v66, 0x50u);
              }
              if ( v123 != (char *)&s2 + 8 )
                operator delete(v123, *((_QWORD *)&s2 + 1) + 1LL);
LABEL_92:
              v57[64] = 3;
              *((_QWORD *)v57 + 9) = v51;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              return a1;
            }
          }
        }
      }
    }
    else
    {
      *(_BYTE *)a1 = 1;
      v86 = operator new(0x30u);
      v36 = (_QWORD *)(v86 + 8);
      a1[1] = v86;
      v34 = (_QWORD *)v86;
      *(_DWORD *)(v86 + 8) = 0;
      *(_QWORD *)(v86 + 16) = 0;
      *(_QWORD *)(v86 + 24) = v86 + 8;
      *(_QWORD *)(v86 + 32) = v86 + 8;
      *(_QWORD *)(v86 + 40) = 0;
      v106 = (_QWORD *)(v86 + 8);
    }
    v43 = operator new(0x50u);
    v44 = (void *)(v43 + 48);
    v45 = v43;
    *(_QWORD *)(v43 + 32) = v43 + 48;
    LODWORD(v43) = DWORD2(s2);
    *(_QWORD *)(v45 + 40) = 5;
    *(_DWORD *)(v45 + 48) = v43;
    LOWORD(v43) = WORD6(s2);
    *(_QWORD *)(v45 + 64) = 0;
    *(_WORD *)(v45 + 52) = v43;
    *(_QWORD *)(v45 + 72) = 0;
    v112 = (_QWORD *)v45;
    v123 = (char *)&s2 + 8;
    *(_QWORD *)&s2 = 0;
    BYTE8(s2) = 0;
    s1b = v44;
    v46 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
            v34,
            v36,
            v44,
            5u);
    v48 = v112;
    v36 = v46;
    if ( v47 )
    {
      if ( v106 != (_QWORD *)v47 && !v46 )
      {
        v98 = *(_QWORD *)(v47 + 40);
        if ( v98 )
        {
          v99 = 5;
          if ( v98 <= 5 )
            v99 = *(_QWORD *)(v47 + 40);
          memcmp(s1b, *(const void **)(v47 + 32), v99);
          v48 = v112;
        }
      }
      v36 = v48;
      std::_Rb_tree_insert_and_rebalance();
      ++v34[5];
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v81 = v112;
      v82 = (void *)v112[4];
      if ( s1b != v82 )
      {
        operator delete(v82, v112[6] + 1LL);
        v81 = v112;
      }
      operator delete(v81, 0x50u);
    }
    if ( v123 != (char *)&s2 + 8 )
      operator delete(v123, *((_QWORD *)&s2 + 1) + 1LL);
    goto LABEL_64;
  }
  return a1;
}

