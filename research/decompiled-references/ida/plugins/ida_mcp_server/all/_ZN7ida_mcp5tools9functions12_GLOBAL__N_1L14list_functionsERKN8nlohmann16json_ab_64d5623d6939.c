__int64 __fastcall ida_mcp::tools::functions::`anonymous namespace'::list_functions(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // r13
  char *v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 func_qty; // rax
  __int64 v8; // rax
  __m128i si128; // xmm0
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i *v12; // rbp
  unsigned __int64 v14; // rbx
  __int64 *v15; // r13
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  _BYTE *v20; // rbp
  unsigned __int64 v21; // r12
  _QWORD *v22; // rax
  _BYTE *v23; // rdi
  __int64 *v24; // rbx
  __m128i v25; // xmm0
  size_t v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // rax
  unsigned int v30; // r15d
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  size_t v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r13
  __int8 v38; // si
  __int64 v39; // rax
  __m128i *v40; // r13
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i *v45; // r13
  unsigned __int64 v46; // rsi
  unsigned int v47; // r15d
  __int64 v48; // r12
  unsigned __int64 v49; // rcx
  char *v50; // rdi
  unsigned int v51; // r15d
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r8
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  char v56; // al
  _QWORD *v57; // rax
  _QWORD *v58; // rdx
  _QWORD *v59; // r12
  __int64 v60; // rcx
  __int64 v61; // rax
  __int8 v62; // si
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // edi
  unsigned __int64 v69; // rdx
  char *v70; // rax
  char *v71; // r12
  unsigned int v72; // r15d
  unsigned int v73; // r15d
  unsigned int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // r13
  __int64 v78; // rbx
  __int64 v79; // rbp
  __int64 v80; // r14
  size_t v81; // rdx
  int v82; // eax
  unsigned __int64 v83; // r12
  unsigned __int64 v84; // rbp
  size_t v85; // rax
  int v86; // eax
  __int64 v87; // r14
  __int64 v88; // rbp
  size_t v89; // rdx
  int v90; // eax
  unsigned __int64 v91; // r15
  unsigned __int64 v92; // rbp
  size_t v93; // rax
  int v94; // eax
  __int64 v95; // r14
  size_t v96; // rdx
  int v97; // eax
  unsigned __int64 v98; // r12
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // r8
  char *v103; // rcx
  char *v104; // r9
  unsigned int v105; // edx
  unsigned int v106; // ecx
  __int64 v107; // rdi
  unsigned __int64 v108; // rbp
  size_t v109; // rax
  int v110; // eax
  int *v111; // rax
  void *v112; // r12
  int v113; // r15d
  int *v114; // rbx
  unsigned int v115; // eax
  unsigned __int64 v116; // rdi
  char *v117; // rdx
  char *v118; // rsi
  unsigned int v119; // eax
  unsigned int v120; // eax
  unsigned int v121; // edx
  __int64 v122; // r8
  __m128i *v123; // [rsp+218h] [rbp-358h]
  char v124; // [rsp+228h] [rbp-348h]
  int v125[4]; // [rsp+238h] [rbp-338h] BYREF
  int v126[2]; // [rsp+248h] [rbp-328h]
  int v127[2]; // [rsp+250h] [rbp-320h]
  int v128[2]; // [rsp+258h] [rbp-318h]
  int v129[2]; // [rsp+260h] [rbp-310h]
  int v130[2]; // [rsp+268h] [rbp-308h]
  char v131[8]; // [rsp+270h] [rbp-300h]
  int v132[2]; // [rsp+278h] [rbp-2F8h]
  char v133[8]; // [rsp+280h] [rbp-2F0h]
  unsigned __int64 v134; // [rsp+288h] [rbp-2E8h]
  char *v135; // [rsp+290h] [rbp-2E0h]
  __int8 v136; // [rsp+29Fh] [rbp-2D1h]
  __int64 v137; // [rsp+2A0h] [rbp-2D0h]
  unsigned __int64 v138; // [rsp+2A8h] [rbp-2C8h]
  char *v139; // [rsp+2B0h] [rbp-2C0h]
  __int64 v140; // [rsp+2C0h] [rbp-2B0h]
  char v141; // [rsp+2C8h] [rbp-2A8h] BYREF
  int v142[2]; // [rsp+2D0h] [rbp-2A0h]
  __m128i s[2]; // [rsp+2D8h] [rbp-298h] BYREF
  __m128i v144[2]; // [rsp+2F8h] [rbp-278h] BYREF
  void *src; // [rsp+318h] [rbp-258h] BYREF
  unsigned __int64 v146; // [rsp+320h] [rbp-250h]
  int v147[2]; // [rsp+328h] [rbp-248h] BYREF
  void *v148; // [rsp+338h] [rbp-238h] BYREF
  size_t v149; // [rsp+340h] [rbp-230h]
  _QWORD v150[2]; // [rsp+348h] [rbp-228h] BYREF
  int v151; // [rsp+378h] [rbp-1F8h] BYREF
  int v152[4]; // [rsp+380h] [rbp-1F0h]
  _BYTE v153[24]; // [rsp+390h] [rbp-1E0h] BYREF
  char v154; // [rsp+3A8h] [rbp-1C8h] BYREF
  int v155[4]; // [rsp+3B0h] [rbp-1C0h] BYREF
  char v156; // [rsp+3C0h] [rbp-1B0h]
  __int128 v157; // [rsp+3C8h] [rbp-1A8h]
  void *v158; // [rsp+3D8h] [rbp-198h] BYREF
  __int128 v159; // [rsp+3E0h] [rbp-190h] BYREF
  __int64 v160; // [rsp+3F0h] [rbp-180h]
  __int128 v161; // [rsp+3F8h] [rbp-178h]
  __m128i v162; // [rsp+408h] [rbp-168h] BYREF
  __int64 s2; // [rsp+418h] [rbp-158h] BYREF
  int v164[4]; // [rsp+420h] [rbp-150h] BYREF
  __int64 v165; // [rsp+430h] [rbp-140h]
  int v166[4]; // [rsp+438h] [rbp-138h] BYREF
  __int64 v167; // [rsp+448h] [rbp-128h]
  char v168[8]; // [rsp+450h] [rbp-120h] BYREF
  char v169[16]; // [rsp+458h] [rbp-118h] BYREF
  __m128i v170; // [rsp+468h] [rbp-108h]
  __m128i v171; // [rsp+478h] [rbp-F8h]
  __m128i v172; // [rsp+488h] [rbp-E8h]
  __m128i v173; // [rsp+498h] [rbp-D8h]
  __m128i v174; // [rsp+4A8h] [rbp-C8h]
  __m128i v175; // [rsp+4B8h] [rbp-B8h]
  __m128i v176; // [rsp+4C8h] [rbp-A8h]
  __m128i v177; // [rsp+4D8h] [rbp-98h]
  __m128i v178; // [rsp+4E8h] [rbp-88h]
  __m128i v179; // [rsp+4F8h] [rbp-78h]
  __m128i v180[2]; // [rsp+508h] [rbp-68h]
  unsigned __int64 v181; // [rsp+530h] [rbp-40h]

  *(_QWORD *)v133 = a1;
  v181 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_2;
  v76 = *(_QWORD *)(a2 + 8);
  v77 = *(_QWORD *)(v76 + 16);
  if ( !v77 )
    goto LABEL_2;
  v78 = v76 + 8;
  v79 = v77;
  v80 = v78;
  do
  {
    while ( 1 )
    {
      v83 = *(_QWORD *)(v79 + 40);
      if ( !v83 )
        break;
      v81 = 6;
      if ( v83 <= 6 )
        v81 = *(_QWORD *)(v79 + 40);
      v82 = memcmp(*(const void **)(v79 + 32), "cursor", v81);
      if ( v82 || (v82 = v83 - 6, (__int64)(v83 - 6) <= 0x7FFFFFFF) )
      {
        if ( v82 < 0 )
          break;
      }
      v80 = v79;
      v79 = *(_QWORD *)(v79 + 16);
      if ( !v79 )
        goto LABEL_101;
    }
    v79 = *(_QWORD *)(v79 + 24);
  }
  while ( v79 );
LABEL_101:
  if ( v78 == v80 )
    goto LABEL_2;
  v84 = *(_QWORD *)(v80 + 40);
  if ( v84 )
  {
    v85 = 6;
    if ( v84 <= 6 )
      v85 = *(_QWORD *)(v80 + 40);
    v86 = memcmp(*(const void **)(v80 + 32), "cursor", v85);
    if ( !v86 )
    {
      v86 = v84 - 6;
      if ( (__int64)(v84 - 6) > 0x7FFFFFFF )
        goto LABEL_2;
    }
    if ( v86 > 0 )
      goto LABEL_2;
  }
  v87 = v78;
  v88 = v77;
  strcpy((char *)&s2, "cursor");
  do
  {
    while ( 1 )
    {
      v91 = *(_QWORD *)(v88 + 40);
      if ( !v91 )
        break;
      v89 = 6;
      if ( v91 <= 6 )
        v89 = *(_QWORD *)(v88 + 40);
      v90 = memcmp(*(const void **)(v88 + 32), &s2, v89);
      if ( v90 || (v90 = v91 - 6, (__int64)(v91 - 6) <= 0x7FFFFFFF) )
      {
        if ( v90 < 0 )
          break;
      }
      v87 = v88;
      v88 = *(_QWORD *)(v88 + 16);
      if ( !v88 )
        goto LABEL_117;
    }
    v88 = *(_QWORD *)(v88 + 24);
  }
  while ( v88 );
LABEL_117:
  if ( v78 != v87 )
  {
    v92 = *(_QWORD *)(v87 + 40);
    if ( v92 )
    {
      v93 = 6;
      if ( v92 <= 6 )
        v93 = *(_QWORD *)(v87 + 40);
      v94 = memcmp(&s2, *(const void **)(v87 + 32), v93);
      if ( v94 || (v94 = 6 - v92, (__int64)(6 - v92) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v94 < 0 )
          v87 = v78;
      }
      else
      {
        v87 = v78;
      }
    }
  }
  if ( *(_BYTE *)(v87 + 64) )
  {
    v95 = v78;
    strcpy((char *)&s2, "cursor");
    do
    {
      v98 = *(_QWORD *)(v77 + 40);
      if ( !v98 )
        goto LABEL_135;
      v96 = 6;
      if ( v98 <= 6 )
        v96 = *(_QWORD *)(v77 + 40);
      if ( ((v97 = memcmp(*(const void **)(v77 + 32), &s2, v96)) != 0
         || (v97 = v98 - 6, (__int64)(v98 - 6) <= 0x7FFFFFFF))
        && v97 < 0 )
      {
LABEL_135:
        v77 = *(_QWORD *)(v77 + 24);
      }
      else
      {
        v95 = v77;
        v77 = *(_QWORD *)(v77 + 16);
      }
    }
    while ( v77 );
    if ( v95 != v78 )
    {
      v108 = *(_QWORD *)(v95 + 40);
      if ( v108 )
      {
        v109 = 6;
        if ( v108 <= 6 )
          v109 = *(_QWORD *)(v95 + 40);
        v110 = memcmp(&s2, *(const void **)(v95 + 32), v109);
        if ( v110 || (v110 = 6 - v108, (__int64)(6 - v108) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v110 >= 0 )
            v78 = v95;
        }
      }
      else
      {
        v78 = v95;
      }
    }
    BYTE8(v159) = 0;
    v158 = (char *)&v159 + 8;
    *(_QWORD *)&v159 = 0;
    if ( *(_BYTE *)(v78 + 64) != 3 )
    {
      exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *(_BYTE *)(v78 + 64) )
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
      v144[0].m128i_i64[0] = (__int64)v3;
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
    v111 = __errno_location();
    v112 = v158;
    v113 = *v111;
    *v111 = 0;
    v114 = v111;
    v6 = __isoc23_strtoull();
    if ( v112 == (void *)v144[0].m128i_i64[0] )
      std::__throw_invalid_argument("stoull");
    if ( *v114 == 34 )
      std::__throw_out_of_range("stoull");
    if ( !*v114 )
      *v114 = v113;
    if ( v158 != (char *)&v159 + 8 )
      operator delete(v158, *((_QWORD *)&v159 + 1) + 1LL);
  }
  else
  {
LABEL_2:
    v6 = 0;
  }
  func_qty = get_func_qty();
  v134 = func_qty;
  if ( v6 >= func_qty )
  {
    *(_QWORD *)v152 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v151) = 3;
    v8 = operator new(0x20u);
    *(_QWORD *)v8 = v8 + 16;
    strcpy((char *)(v8 + 16), "functions");
    *(_QWORD *)(v8 + 8) = 9;
    *(_OWORD *)v152 = (unsigned __int64)v8;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    si128 = _mm_load_si128(v144);
    *(_QWORD *)v130 = &v151;
    *(_QWORD *)&v153[16] = 0;
    *(__m128i *)v153 = si128;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v162,
      (const __m128i *)&v151);
    s2 = 0;
    v154 = 0;
    *(_QWORD *)v155 = 0;
    *(_QWORD *)v125 = v155;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v154 = 3;
    v10 = operator new(0x20u);
    *(_DWORD *)(v10 + 16) = 1635020660;
    *(_QWORD *)v10 = v10 + 16;
    *(_BYTE *)(v10 + 20) = 108;
    *(_QWORD *)(v10 + 8) = 5;
    *(_BYTE *)(v10 + 21) = 0;
    v156 = 6;
    v157 = v134;
    *(_OWORD *)v155 = (unsigned __int64)v10;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v164,
      (const __m128i *)&v154);
    v165 = 0;
    LOBYTE(v158) = 0;
    *(_QWORD *)&v159 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v158) = 3;
    v11 = operator new(0x20u);
    *(_QWORD *)v11 = v11 + 16;
    strcpy((char *)(v11 + 16), "returned");
    *(_QWORD *)(v11 + 8) = 8;
    v159 = (unsigned __int64)v11;
    v160 = 5;
    v161 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v166,
      (const __m128i *)&v158);
    v167 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      *(_QWORD **)v133,
      &v162,
      3);
    v12 = (__m128i *)v168;
    do
    {
      v12 = (__m128i *)((char *)v12 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v12 != &v162 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    return *(_QWORD *)v133;
  }
  v14 = func_qty;
  v141 = 0;
  v138 = v6 + 100;
  *(_QWORD *)v142 = 0;
  if ( v6 + 100 <= func_qty )
    v14 = v6 + 100;
  v139 = &v141;
  *(_QWORD *)v129 = v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v124 = v141;
  *(_QWORD *)v132 = *(_QWORD *)v142;
  if ( v6 < v14 )
  {
    *(_QWORD *)v127 = v147;
    while ( 1 )
    {
      v15 = (__int64 *)getn_func();
      if ( v15 )
        break;
LABEL_38:
      if ( ++v6 == *(_QWORD *)v129 )
        goto LABEL_39;
    }
    LOBYTE(v147[0]) = 0;
    src = *(void **)v127;
    memset(s, 0, 24);
    v146 = 0;
    *(_QWORD *)v126 = &src;
    if ( get_func_name() <= 0 )
    {
      v67 = *v15;
      *(_QWORD *)v126 = &src;
      memset(v144, 0, 24);
      _qstring<char>::sprnt((int)v144, (int)"sub_%llX", v67, v16, v17, v18, (char)v123);
      if ( v144[0].m128i_i64[1] )
        strlen((const char *)v144[0].m128i_i64[0]);
      *(_QWORD *)v126 = &src;
      std::string::_M_replace();
      if ( v144[0].m128i_i64[0] )
      {
        v144[0].m128i_i64[1] = 0;
        qfree();
      }
    }
    else
    {
      if ( s[0].m128i_i64[1] )
        strlen((const char *)s[0].m128i_i64[0]);
      *(_QWORD *)v126 = &src;
      std::string::_M_replace();
    }
    LOBYTE(v151) = 0;
    *(_QWORD *)v152 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v151) = 3;
    v19 = operator new(0x20u);
    *(_QWORD *)v19 = v19 + 16;
    strcpy((char *)(v19 + 16), "name");
    *(_QWORD *)(v19 + 8) = 4;
    v153[0] = 0;
    *(_QWORD *)&v153[8] = 0;
    *(_QWORD *)v128 = &v153[8];
    *(_OWORD *)v152 = (unsigned __int64)v19;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v153[0] = 3;
    v20 = src;
    v21 = v146;
    v22 = (_QWORD *)operator new(0x20u);
    v23 = v22 + 2;
    v140 = v21;
    v24 = v22;
    *v22 = v22 + 2;
    if ( v21 > 0xF )
    {
      v64 = std::string::_M_create();
      *v24 = v64;
      v23 = (_BYTE *)v64;
      v65 = v140;
      v25 = (__m128i)(unsigned __int64)v24;
      v24[2] = v140;
      v26 = v65 + 1;
      if ( v65 )
      {
        v27 = -1;
        if ( v26 )
          goto LABEL_19;
LABEL_20:
        v24[1] = v27;
        *(_QWORD *)v130 = &v151;
        *(__m128i *)&v153[8] = v25;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v162,
          (const __m128i *)&v151);
        s2 = 0;
        v154 = 0;
        *(_QWORD *)v155 = 0;
        *(_QWORD *)v125 = v155;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v154 = 3;
        v28 = operator new(0x20u);
        strcpy((char *)(v28 + 16), "address");
        *(_QWORD *)v28 = v28 + 16;
        *(_QWORD *)(v28 + 8) = 7;
        *(_OWORD *)v155 = (unsigned __int64)v28;
        qsnprintf();
        *(_QWORD *)v131 = &v148;
        v148 = v150;
        v29 = strlen(v169);
        v144[0].m128i_i64[0] = v29;
        v30 = v29;
        if ( v29 > 0xF )
        {
          v66 = (_QWORD *)std::string::_M_create();
          v148 = v66;
          v150[0] = v144[0].m128i_i64[0];
        }
        else
        {
          if ( v29 == 1 )
          {
            LOBYTE(v150[0]) = v169[0];
            goto LABEL_23;
          }
          if ( !v29 )
          {
LABEL_23:
            v31 = v150;
            goto LABEL_24;
          }
          v66 = v150;
        }
        if ( v30 >= 8 )
        {
          *v66 = *(_QWORD *)v169;
          *(_QWORD *)((char *)v66 + v30 - 8) = *(_QWORD *)&v168[v30];
          v69 = (unsigned __int64)(v66 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v70 = (char *)v66 - v69;
          v71 = (char *)(v169 - v70);
          v72 = ((_DWORD)v70 + v30) & 0xFFFFFFF8;
          if ( v72 >= 8 )
          {
            v73 = v72 & 0xFFFFFFF8;
            v74 = 0;
            do
            {
              v75 = v74;
              v74 += 8;
              *(_QWORD *)(v69 + v75) = *(_QWORD *)&v71[v75];
            }
            while ( v74 < v73 );
          }
        }
        else if ( (v30 & 4) != 0 )
        {
          *(_DWORD *)v66 = *(_DWORD *)v169;
          *(_DWORD *)((char *)v66 + v30 - 4) = *(_DWORD *)&v168[v30 + 4];
        }
        else if ( v30 )
        {
          *(_BYTE *)v66 = v169[0];
          if ( (v30 & 2) != 0 )
            *(_WORD *)((char *)v66 + v30 - 2) = *(_WORD *)&v168[v30 + 6];
        }
        v29 = v144[0].m128i_i64[0];
        v31 = v148;
LABEL_24:
        v149 = v29;
        *((_BYTE *)v31 + v29) = 0;
        v156 = 0;
        *(_QWORD *)&v157 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v156 = 3;
        v32 = (_QWORD *)operator new(0x20u);
        v33 = v148;
        v34 = v32 + 2;
        v35 = v149;
        *v32 = v32 + 2;
        if ( v33 == v150 )
        {
          v68 = v35 + 1;
          if ( (unsigned int)(v35 + 1) >= 8 )
          {
            v32[2] = v150[0];
            *(_QWORD *)((char *)v34 + v68 - 8) = *(_QWORD *)((char *)&v150[-1] + v68);
            v102 = (unsigned __int64)(v32 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v103 = (char *)v34 - v102;
            v104 = (char *)((char *)v150 - v103);
            if ( (((_DWORD)v103 + v68) & 0xFFFFFFF8) >= 8 )
            {
              v105 = ((_DWORD)v103 + v68) & 0xFFFFFFF8;
              v106 = 0;
              do
              {
                v107 = v106;
                v106 += 8;
                *(_QWORD *)(v102 + v107) = *(_QWORD *)&v104[v107];
              }
              while ( v106 < v105 );
            }
          }
          else if ( (v68 & 4) != 0 )
          {
            *((_DWORD *)v32 + 4) = v150[0];
            *(_DWORD *)((char *)v34 + v68 - 4) = *(_DWORD *)((char *)&v149 + v68 + 4);
          }
          else if ( (_DWORD)v35 != -1 )
          {
            *((_BYTE *)v32 + 16) = v150[0];
            if ( (v68 & 2) != 0 )
              *(_WORD *)((char *)v34 + v68 - 2) = *(_WORD *)((char *)&v149 + v68 + 6);
          }
        }
        else
        {
          *v32 = v33;
          v32[2] = v150[0];
        }
        v32[1] = v35;
        v148 = v150;
        v149 = 0;
        LOBYTE(v150[0]) = 0;
        v135 = &v154;
        v157 = (unsigned __int64)v32;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v164,
          (const __m128i *)&v154);
        v165 = 0;
        LOBYTE(v158) = 0;
        *(_QWORD *)&v159 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v158) = 3;
        v36 = operator new(0x20u);
        strcpy((char *)(v36 + 16), "size");
        *(_QWORD *)v36 = v36 + 16;
        *(_QWORD *)(v36 + 8) = 4;
        v159 = (unsigned __int64)v36;
        v161 = (unsigned __int64)(v15[1] - *v15);
        LOBYTE(v160) = 6;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v166,
          (const __m128i *)&v158);
        v123 = &v162;
        v167 = 0;
        v144[0].m128i_i8[0] = 0;
        v144[0].m128i_i64[1] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v144,
          &v162,
          3);
        v136 = v144[0].m128i_i8[0];
        v137 = v144[0].m128i_i64[1];
        if ( v124 )
        {
          if ( v124 != 2 )
          {
            v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
            switch ( v124 )
            {
              case 1:
                v5 = "object";
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
            v140 = (__int64)v5;
            nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
            nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
              v4,
              308);
            std::string::_M_dispose();
            __cxa_throw(
              v4,
              (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
              (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
          }
          v99 = *(_QWORD *)v132;
          v100 = *(_QWORD *)(*(_QWORD *)v132 + 8LL);
          if ( v100 != *(_QWORD *)(*(_QWORD *)v132 + 16LL) )
          {
            v101 = v100 + 16;
            v38 = 0;
            *(__m128i *)(v101 - 16) = _mm_load_si128(v144);
            *(_QWORD *)(v99 + 8) = v101;
            v39 = 0;
LABEL_29:
            v144[0].m128i_i8[0] = v38;
            v40 = (__m128i *)v168;
            v144[0].m128i_i64[1] = v39;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            do
            {
              v40 = (__m128i *)((char *)v40 - 24);
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v40 != &v162 );
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( v148 != v150 )
              operator delete(v148, v150[0] + 1LL);
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( src != *(void **)v127 )
              operator delete(src, *(_QWORD *)v147 + 1LL);
            if ( s[0].m128i_i64[0] )
            {
              s[0].m128i_i64[1] = 0;
              qfree();
            }
            v124 = 2;
            goto LABEL_38;
          }
          v37 = *(_QWORD *)v132;
        }
        else
        {
          v37 = operator new(0x18u);
          *(_QWORD *)(v37 + 16) = 0;
          *(_OWORD *)v37 = 0;
        }
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        *(_QWORD *)v132 = v37;
        v38 = v144[0].m128i_i8[0];
        v39 = v144[0].m128i_i64[1];
        goto LABEL_29;
      }
    }
    else
    {
      v25 = (__m128i)(unsigned __int64)v22;
      v26 = v21 + 1;
      if ( v21 )
      {
LABEL_19:
        *(__m128i *)v125 = v25;
        memcpy(v23, v20, v26);
        v27 = v140;
        v25 = _mm_load_si128((const __m128i *)v125);
        goto LABEL_20;
      }
    }
    *v23 = *v20;
    v27 = v140;
    goto LABEL_20;
  }
LABEL_39:
  LOBYTE(v151) = 0;
  *(_QWORD *)v152 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v151) = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "functions");
  *(_QWORD *)(v41 + 8) = 9;
  *(_OWORD *)v152 = (unsigned __int64)v41;
  v141 = v124;
  *(_QWORD *)v142 = *(_QWORD *)v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *(_QWORD *)&v153[16] = 0;
  *(_QWORD *)v130 = &v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v162,
    (const __m128i *)&v151);
  s2 = 0;
  v154 = 0;
  *(_QWORD *)v155 = 0;
  *(_QWORD *)v125 = v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v154 = 3;
  v42 = operator new(0x20u);
  *(_DWORD *)(v42 + 16) = 1635020660;
  *(_QWORD *)v42 = v42 + 16;
  *(_BYTE *)(v42 + 20) = 108;
  *(_QWORD *)(v42 + 8) = 5;
  *(_BYTE *)(v42 + 21) = 0;
  v156 = 6;
  v157 = v134;
  *(_OWORD *)v155 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v164,
    (const __m128i *)&v154);
  v165 = 0;
  LOBYTE(v158) = 0;
  *(_QWORD *)&v159 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v158) = 3;
  v43 = operator new(0x20u);
  *(_QWORD *)v43 = v43 + 16;
  strcpy((char *)(v43 + 16), "returned");
  *(_QWORD *)(v43 + 8) = 8;
  v159 = (unsigned __int64)v43;
  if ( v124 == 1 )
  {
    v44 = *(_QWORD *)(*(_QWORD *)v132 + 40LL);
  }
  else if ( v124 == 2 )
  {
    v44 = (__int64)(*(_QWORD *)(*(_QWORD *)v132 + 8LL) - **(_QWORD **)v132) >> 4;
  }
  else
  {
    v44 = v124 != 0;
  }
  LOBYTE(v160) = 6;
  v161 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v166,
    (const __m128i *)&v158);
  v167 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    s,
    &v162,
    3);
  v45 = (__m128i *)v168;
  do
  {
    v45 = (__m128i *)((char *)v45 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v45 != &v162 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v138 < v134 )
  {
    v46 = *(_QWORD *)v129;
    if ( *(_QWORD *)v129 <= 9u )
    {
      v48 = 1;
      v47 = 1;
    }
    else
    {
      v47 = 1;
      while ( 1 )
      {
        if ( v46 <= 0x63 )
        {
          v48 = ++v47;
          goto LABEL_53;
        }
        if ( v46 <= 0x3E7 )
        {
          v48 = v47 + 2;
          v47 += 2;
          goto LABEL_53;
        }
        if ( v46 <= 0x270F )
        {
          v48 = v47 + 3;
          v47 += 3;
          goto LABEL_53;
        }
        v47 += 4;
        if ( v46 <= 0x1869F )
          break;
        v46 /= 0x2710u;
      }
      v48 = v47;
    }
LABEL_53:
    v162.m128i_i64[1] = 0;
    v162.m128i_i64[0] = (__int64)&s2;
    LOBYTE(s2) = 0;
    std::string::reserve();
    v49 = *(_QWORD *)v129;
    v50 = (char *)v162.m128i_i64[0];
    *(__m128i *)v169 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
    v170 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
    v171 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
    v172 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
    v173 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
    v174 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
    v175 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
    v176 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
    v177 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
    v178 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
    v179 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
    v180[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
    *(__m128i *)((char *)v180 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
    if ( *(_QWORD *)v129 > 0x63u )
    {
      v51 = v47 - 1;
      do
      {
        v52 = v49 % 0x64;
        v53 = v49;
        v49 /= 0x64u;
        v50[v51] = v169[2 * v52 + 1];
        v54 = v51 - 1;
        v51 -= 2;
        v50[v54] = v169[2 * v52];
      }
      while ( v53 > 0x270F );
      *(_QWORD *)v129 = v49;
    }
    v55 = *(_QWORD *)v129;
    v56 = LOBYTE(v129[0]) + 48;
    if ( *(_QWORD *)v129 > 9u )
    {
      v50[1] = v169[2 * *(_QWORD *)v129 + 1];
      v56 = v169[2 * v55];
    }
    *v50 = v56;
    v162.m128i_i64[1] = v48;
    *(_BYTE *)(v162.m128i_i64[0] + v48) = 0;
    v144[0] = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v57 = (_QWORD *)operator new(0x20u);
    v58 = v57 + 2;
    v59 = v57;
    v60 = v162.m128i_i64[1];
    *v57 = v57 + 2;
    if ( (__int64 *)v162.m128i_i64[0] == &s2 )
    {
      v115 = v60 + 1;
      if ( (unsigned int)(v60 + 1) >= 8 )
      {
        v59[2] = s2;
        *(_QWORD *)((char *)v58 + v115 - 8) = *(__int64 *)((char *)&v162.m128i_i64[1] + v115);
        v116 = (unsigned __int64)(v59 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v117 = (char *)v58 - v116;
        v118 = (char *)((char *)&s2 - v117);
        v119 = ((_DWORD)v117 + v115) & 0xFFFFFFF8;
        if ( v119 >= 8 )
        {
          v120 = v119 & 0xFFFFFFF8;
          v121 = 0;
          do
          {
            v122 = v121;
            v121 += 8;
            *(_QWORD *)(v116 + v122) = *(_QWORD *)&v118[v122];
          }
          while ( v121 < v120 );
        }
      }
      else if ( (v115 & 4) != 0 )
      {
        *((_DWORD *)v59 + 4) = s2;
        *(_DWORD *)((char *)v58 + v115 - 4) = *(__int32 *)((char *)&v162.m128i_i32[3] + v115);
      }
      else if ( (_DWORD)v60 != -1 )
      {
        *((_BYTE *)v59 + 16) = s2;
        if ( (v115 & 2) != 0 )
          *(_WORD *)((char *)v58 + v115 - 2) = *(__int16 *)((char *)&v162.m128i_i16[7] + v115);
      }
    }
    else
    {
      *v57 = v162.m128i_i64[0];
      v57[2] = s2;
    }
    v59[1] = v60;
    v162.m128i_i64[0] = (__int64)&s2;
    v162.m128i_i64[1] = 0;
    LOBYTE(s2) = 0;
    v61 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v62 = *(_BYTE *)v61;
    v63 = *(_QWORD *)(v61 + 8);
    *(_BYTE *)v61 = 3;
    *(_QWORD *)(v61 + 8) = v59;
    v144[0].m128i_i8[0] = v62;
    v144[0].m128i_i64[1] = v63;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (__int64 *)v162.m128i_i64[0] != &s2 )
      operator delete((void *)v162.m128i_i64[0], s2 + 1);
  }
  **(__m128i **)v133 = _mm_load_si128(s);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return *(_QWORD *)v133;
}

