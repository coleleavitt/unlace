__int64 __fastcall ida_mcp::mcp::McpServer::handle_tools_call(__int64 a1, __int64 a2, __int64 a3)
{
  std::runtime_error *exception; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // r12
  char *v5; // rax
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  size_t v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r13
  _BYTE *v14; // rbx
  const __m128i *v15; // r13
  const void *v16; // rdi
  size_t v17; // r12
  const __m128i *v18; // r14
  size_t v19; // rbp
  void *v20; // rbx
  const __m128i *i; // r15
  size_t v22; // rdx
  int v23; // eax
  __int64 v24; // r12
  size_t v25; // r15
  __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  void (__fastcall *v30)(__m128i *, const __m128i *, __int64, __int64, __int64, __int64, double, double, __int64, pthread_mutex_t *, __int64); // rax
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm0
  __m128 v34; // xmm4
  __m128i v35; // xmm0
  __int64 v36; // r8
  __int64 v37; // r9
  __m128i v38; // xmm7
  __m128i v39; // xmm1
  __int64 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __m128 *v60; // rbx
  struct lconv *v61; // rax
  char v62; // dl
  char *thousands_sep; // rcx
  char *decimal_point; // rdx
  char v65; // al
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  _QWORD *v68; // rcx
  __int64 v69; // rsi
  __m128i si128; // xmm0
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // r15
  __int64 v78; // r14
  size_t v79; // rdx
  int v80; // eax
  unsigned __int64 v81; // r13
  unsigned __int64 v82; // rbx
  size_t v83; // rdx
  int v84; // eax
  __int64 v85; // rbp
  __int64 v86; // rbx
  __int64 v87; // r13
  __int64 v88; // r15
  size_t v89; // rdx
  int v90; // eax
  unsigned __int64 v91; // r14
  __int64 v92; // r14
  size_t v93; // rdx
  int v94; // eax
  unsigned __int64 v95; // r13
  __int8 v96; // bl
  __int64 v97; // rax
  __int8 v98; // si
  __int64 v99; // rdx
  unsigned int v100; // edx
  unsigned __int64 v101; // rdi
  char *v102; // rcx
  char *v103; // r8
  unsigned int v104; // edx
  unsigned int v105; // edx
  unsigned int v106; // ecx
  __int64 v107; // r9
  __int8 v108; // bl
  __int64 v109; // rax
  __int8 v110; // si
  __int64 v111; // rdx
  __int64 v112; // [rsp+0h] [rbp-4E8h]
  int v113; // [rsp+0h] [rbp-4E8h]
  int v114; // [rsp+0h] [rbp-4E8h]
  int v115; // [rsp+0h] [rbp-4E8h]
  int v116; // [rsp+0h] [rbp-4E8h]
  _QWORD *v117; // [rsp+0h] [rbp-4E8h]
  __int64 v118; // [rsp+0h] [rbp-4E8h]
  pthread_mutex_t *mutex; // [rsp+8h] [rbp-4E0h] BYREF
  __m128i v120; // [rsp+10h] [rbp-4D8h] BYREF
  __m128i v121; // [rsp+20h] [rbp-4C8h] BYREF
  __int128 v122; // [rsp+30h] [rbp-4B8h]
  void **p_s2; // [rsp+40h] [rbp-4A8h]
  __int128 *v124; // [rsp+48h] [rbp-4A0h]
  _OWORD *v125; // [rsp+50h] [rbp-498h]
  pthread_mutex_t *v126; // [rsp+58h] [rbp-490h]
  __m128i *v127; // [rsp+60h] [rbp-488h]
  char *v128; // [rsp+68h] [rbp-480h]
  __int64 v129; // [rsp+70h] [rbp-478h]
  __int64 v130; // [rsp+78h] [rbp-470h] BYREF
  char v131; // [rsp+80h] [rbp-468h] BYREF
  char v132; // [rsp+90h] [rbp-458h] BYREF
  __int64 v133; // [rsp+98h] [rbp-450h]
  __m128i v134; // [rsp+A0h] [rbp-448h] BYREF
  __m128i v135[2]; // [rsp+B0h] [rbp-438h] BYREF
  __int128 v136; // [rsp+D0h] [rbp-418h]
  void *v137[4]; // [rsp+E0h] [rbp-408h] BYREF
  void *s2; // [rsp+100h] [rbp-3E8h] BYREF
  size_t n; // [rsp+108h] [rbp-3E0h]
  char v140; // [rsp+110h] [rbp-3D8h] BYREF
  __m128i v141; // [rsp+120h] [rbp-3C8h] BYREF
  __m128i v142; // [rsp+130h] [rbp-3B8h] BYREF
  _QWORD *v143; // [rsp+140h] [rbp-3A8h] BYREF
  __int64 v144; // [rsp+148h] [rbp-3A0h]
  _QWORD v145[2]; // [rsp+150h] [rbp-398h] BYREF
  char v146; // [rsp+160h] [rbp-388h] BYREF
  __int128 v147; // [rsp+168h] [rbp-380h] BYREF
  char v148; // [rsp+178h] [rbp-370h]
  __int128 v149; // [rsp+180h] [rbp-368h] BYREF
  char v150; // [rsp+190h] [rbp-358h] BYREF
  __int128 v151; // [rsp+198h] [rbp-350h] BYREF
  char v152; // [rsp+1A8h] [rbp-340h]
  __int128 v153; // [rsp+1B0h] [rbp-338h]
  __m128i v154; // [rsp+1C0h] [rbp-328h] BYREF
  __int64 v155; // [rsp+1D0h] [rbp-318h]
  _QWORD v156[3]; // [rsp+1D8h] [rbp-310h] BYREF
  char v157; // [rsp+1F0h] [rbp-2F8h] BYREF
  _OWORD v158[2]; // [rsp+1F8h] [rbp-2F0h] BYREF
  __int64 v159; // [rsp+218h] [rbp-2D0h]
  __m128i v160; // [rsp+220h] [rbp-2C8h] BYREF
  __m128i v161; // [rsp+230h] [rbp-2B8h]
  __int128 v162; // [rsp+240h] [rbp-2A8h]
  __int128 v163; // [rsp+250h] [rbp-298h]
  __int128 v164; // [rsp+260h] [rbp-288h]
  struct lconv *v165; // [rsp+270h] [rbp-278h]
  char v166; // [rsp+278h] [rbp-270h]
  char v167; // [rsp+279h] [rbp-26Fh]
  _BYTE v168[510]; // [rsp+27Ah] [rbp-26Eh] BYREF
  __int16 v169; // [rsp+478h] [rbp-70h]
  char v170; // [rsp+47Ah] [rbp-6Eh]
  char *v171; // [rsp+480h] [rbp-68h]
  char v172; // [rsp+490h] [rbp-58h] BYREF
  int v173; // [rsp+4A0h] [rbp-48h]
  unsigned __int64 v174; // [rsp+4A8h] [rbp-40h]

  v112 = a1;
  v174 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 1 )
    goto LABEL_115;
  v6 = *(_QWORD *)(a3 + 8);
  v8 = *(_QWORD *)(v6 + 16);
  if ( !v8 )
    goto LABEL_115;
  v9 = v6 + 8;
  v10 = v6 + 8;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v8 + 40);
      if ( !v13 )
        break;
      v11 = 4;
      if ( v13 <= 4 )
        v11 = *(_QWORD *)(v8 + 40);
      v12 = memcmp(*(const void **)(v8 + 32), "name", v11);
      if ( v12 || (v12 = v13 - 4, (__int64)(v13 - 4) <= 0x7FFFFFFF) )
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
  if ( v9 == v10
    || std::string::compare(*(void **)(v10 + 32), *(_QWORD *)(v10 + 40), "name") > 0
    || *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
  {
LABEL_115:
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Missing or invalid 'name' parameter");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v140 = 0;
  n = 0;
  v14 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  p_s2 = &s2;
  s2 = &v140;
  if ( *v14 != 3 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v14 )
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
    v135[0].m128i_i64[0] = (__int64)v5;
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
  if ( *(_BYTE *)a3 != 1 )
    goto LABEL_17;
  v75 = *(_QWORD *)(a3 + 8);
  v76 = *(_QWORD *)(v75 + 16);
  if ( !v76 )
    goto LABEL_17;
  v77 = v75 + 8;
  v78 = v75 + 8;
  do
  {
    while ( 1 )
    {
      v81 = *(_QWORD *)(v76 + 40);
      if ( !v81 )
        break;
      v79 = 9;
      if ( v81 <= 9 )
        v79 = *(_QWORD *)(v76 + 40);
      v80 = memcmp(*(const void **)(v76 + 32), "arguments", v79);
      if ( v80 || (v80 = v81 - 9, (__int64)(v81 - 9) <= 0x7FFFFFFF) )
      {
        if ( v80 < 0 )
          break;
      }
      v78 = v76;
      v76 = *(_QWORD *)(v76 + 16);
      if ( !v76 )
        goto LABEL_65;
    }
    v76 = *(_QWORD *)(v76 + 24);
  }
  while ( v76 );
LABEL_65:
  if ( v77 == v78 )
    goto LABEL_17;
  v82 = *(_QWORD *)(v78 + 40);
  if ( !v82 )
    goto LABEL_72;
  v83 = 9;
  if ( v82 <= 9 )
    v83 = *(_QWORD *)(v78 + 40);
  if ( ((v84 = memcmp(*(const void **)(v78 + 32), "arguments", v83)) != 0
     || (v84 = v82 - 9, (__int64)(v82 - 9) <= 0x7FFFFFFF))
    && v84 <= 0 )
  {
LABEL_72:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v120.m128i_i64[0] = (__int64)&v131;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  }
  else
  {
LABEL_17:
    v120.m128i_i64[0] = (__int64)&v131;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  }
  v142 = 0u;
  mutex = (pthread_mutex_t *)(a2 + 224);
  v141 = 0;
  if ( pthread_mutex_lock((pthread_mutex_t *)(a2 + 224)) )
    JUMPOUT(0x529EF);
  v15 = *(const __m128i **)(a2 + 16);
  if ( !v15 )
LABEL_132:
    JUMPOUT(0x52661);
  v121.m128i_i64[0] = a2;
  v16 = (const void *)v15[2].m128i_i64[0];
  v17 = v15[2].m128i_u64[1];
  v18 = (const __m128i *)(a2 + 8);
  v19 = n;
  v20 = s2;
  for ( i = v15; ; v17 = i[2].m128i_u64[1] )
  {
    v22 = v17;
    if ( v19 <= v17 )
      v22 = v19;
    if ( !v22 || (v23 = memcmp(v16, v20, v22)) == 0 )
    {
      v24 = v17 - v19;
      if ( v24 > 0x7FFFFFFF )
        goto LABEL_21;
      if ( v24 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v23 = v24;
    }
    if ( v23 < 0 )
      break;
LABEL_21:
    v18 = i;
    i = (const __m128i *)i[1].m128i_i64[0];
    if ( !i )
      goto LABEL_32;
LABEL_22:
    v16 = (const void *)i[2].m128i_i64[0];
  }
  i = (const __m128i *)i[1].m128i_i64[1];
  if ( i )
    goto LABEL_22;
LABEL_32:
  v25 = v19;
  v26 = v121.m128i_i64[0];
  if ( (const __m128i *)(a2 + 8) == v18
    || std::string::compare(v20, v25, (const void *)v18[2].m128i_i64[0], v18[2].m128i_u64[1]) < 0 )
  {
    goto LABEL_132;
  }
  v30 = (void (__fastcall *)(__m128i *, const __m128i *, __int64, __int64, __int64, __int64, double, double, __int64, pthread_mutex_t *, __int64))v18[15].m128i_i64[0];
  v161 = 0u;
  v31 = 0;
  v160 = 0;
  if ( v30 )
  {
    v30(&v160, v18 + 14, 2, v27, v28, v29, 0.0, 0.0, v112, mutex, v120.m128i_i64[0]);
    v31 = _mm_loadu_si128(v18 + 15);
  }
  v32 = _mm_load_si128(&v141);
  v33 = _mm_load_si128(&v160);
  v122 = (unsigned __int64)&v132;
  v141 = v33;
  v34 = _mm_loadh_ps((const double *)v120.m128i_i64);
  v35 = _mm_load_si128(&v142);
  v127 = &v141;
  v121 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v134);
  v120 = (__m128i)v34;
  v160 = v32;
  v161 = v35;
  v142 = v31;
  if ( v35.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v35.m128i_i64[0])(&v160, &v160, 3);
  pthread_mutex_unlock(mutex);
  v126 = (pthread_mutex_t *)(v26 + 264);
  if ( pthread_mutex_trylock((pthread_mutex_t *)(v26 + 264)) )
    JUMPOUT(0x52618);
  v38 = _mm_load_si128(&v120);
  v39 = _mm_load_si128(&v121);
  v135[0].m128i_i64[0] = (__int64)off_4432D8;
  v132 = 0;
  v133 = 0;
  v135[0].m128i_i64[1] = 0;
  v134 = v38;
  v135[1] = v39;
  v136 = (unsigned __int64)&v132;
  callui(86, v135, 2, &callui, v36, v37, v112, mutex, v135, v120.m128i_i64[1]);
  if ( *((_QWORD *)&v136 + 1) )
  {
    v130 = *((_QWORD *)&v136 + 1);
    std::__exception_ptr::exception_ptr::_M_addref((std::__exception_ptr::exception_ptr *)&v130);
    std::rethrow_exception();
  }
  v135[0].m128i_i64[0] = (__int64)&off_4451B0;
  qsem_free();
  v157 = 0;
  v125 = v158;
  *(_QWORD *)&v158[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v40,
    "content",
    v41,
    v42,
    v43,
    v44,
    v113,
    (int)mutex,
    v120.m128i_i64[0]);
  v146 = 0;
  v121.m128i_i64[0] = (__int64)&v147;
  *(_QWORD *)&v147 = 0;
  v158[0] = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v146 = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "type", v46, v47, v48, v49, v114, (int)mutex, v120.m128i_i64[0]);
  v148 = 0;
  *(_QWORD *)&v122 = &v149;
  *(_QWORD *)&v149 = 0;
  v147 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "text", v51, v52, v53, v54, v115, (int)mutex, v120.m128i_i64[0]);
  v128 = &v146;
  v149 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v154,
    (const __m128i *)&v146);
  v155 = 0;
  v150 = 0;
  *(_QWORD *)&v151 = 0;
  v124 = &v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v150 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v55, "text", v56, v57, v58, v59, v116, (int)mutex, v120.m128i_i64[0]);
  v144 = 0;
  v143 = v145;
  LOBYTE(v145[0]) = 0;
  v151 = (unsigned __int64)v55;
  v60 = (__m128 *)operator new(0x20u);
  mutex = (pthread_mutex_t *)&v143;
  v60->m128_u64[1] = 0x100000001LL;
  v60[1] = _mm_loadh_ps((const double *)&mutex);
  v60->m128_u64[0] = (unsigned __int64)off_444E78;
  if ( _libc_single_threaded )
    v60->m128_i32[2] = 2;
  else
    _InterlockedAdd(&v60->m128_i32[2], 1u);
  v160.m128i_i64[0] = (__int64)&v60[1];
  v160.m128i_i64[1] = (__int64)v60;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 0;
  v61 = localeconv();
  v62 = 0;
  thousands_sep = v61->thousands_sep;
  v165 = v61;
  if ( thousands_sep )
    v62 = *thousands_sep;
  v166 = v62;
  decimal_point = v61->decimal_point;
  v65 = 0;
  if ( decimal_point )
    v65 = *decimal_point;
  v167 = v65;
  memset(v168, 0, sizeof(v168));
  v169 = 0;
  v170 = 32;
  v171 = &v172;
  std::string::_M_construct();
  v173 = 0;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
  nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
  std::string::_M_dispose();
  if ( v160.m128i_i64[1] )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
  v152 = 0;
  *(_QWORD *)&v153 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v152 = 3;
  v66 = (_QWORD *)operator new(0x20u);
  v67 = v143;
  v68 = v66 + 2;
  v69 = v144;
  *v66 = v66 + 2;
  if ( v67 == v145 )
  {
    v100 = v69 + 1;
    if ( (unsigned int)(v69 + 1) >= 8 )
    {
      v66[2] = v145[0];
      *(_QWORD *)((char *)v68 + v100 - 8) = *(_QWORD *)((char *)&v145[-1] + v100);
      v101 = (unsigned __int64)(v66 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v102 = (char *)v68 - v101;
      v103 = (char *)((char *)v145 - v102);
      v104 = ((_DWORD)v102 + v100) & 0xFFFFFFF8;
      if ( v104 >= 8 )
      {
        v105 = v104 & 0xFFFFFFF8;
        v106 = 0;
        do
        {
          v107 = v106;
          v106 += 8;
          *(_QWORD *)(v101 + v107) = *(_QWORD *)&v103[v107];
        }
        while ( v106 < v105 );
      }
    }
    else if ( (v100 & 4) != 0 )
    {
      *((_DWORD *)v66 + 4) = v145[0];
      *(_DWORD *)((char *)v68 + v100 - 4) = *(_DWORD *)((char *)&v144 + v100 + 4);
    }
    else if ( (_DWORD)v69 != -1 )
    {
      *((_BYTE *)v66 + 16) = v145[0];
      if ( (v100 & 2) != 0 )
        *(_WORD *)((char *)v68 + v100 - 2) = *(_WORD *)((char *)&v144 + v100 + 6);
    }
  }
  else
  {
    *v66 = v67;
    v66[2] = v145[0];
  }
  v66[1] = v69;
  v143 = v145;
  v144 = 0;
  LOBYTE(v145[0]) = 0;
  v153 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v156,
    (const __m128i *)&v150);
  v156[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v137,
    &v154);
  v137[2] = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  si128 = _mm_load_si128(v135);
  v159 = 0;
  v158[1] = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v160,
    (const __m128i *)&v157);
  v161.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v117,
    (__int64)&v160,
    1,
    v71,
    v72,
    v73,
    (int)v117,
    (__int64)mutex,
    v120.m128i_i32[0],
    v120.m128i_i32[2],
    v121.m128i_i32[0],
    v121.m128i_i32[2],
    v122,
    SDWORD2(v122),
    (int)p_s2,
    (int)v124,
    (int)v125,
    (char)v126,
    (__int64)v127,
    (int)v128,
    v129);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v132 != 1 )
    goto LABEL_51;
  v85 = *(_QWORD *)(v133 + 16);
  if ( !v85 )
    goto LABEL_51;
  v86 = v133 + 8;
  v87 = *(_QWORD *)(v133 + 16);
  v88 = v133 + 8;
  do
  {
    while ( 1 )
    {
      v91 = *(_QWORD *)(v87 + 40);
      if ( !v91 )
        break;
      v89 = 7;
      if ( v91 <= 7 )
        v89 = *(_QWORD *)(v87 + 40);
      v90 = memcmp(*(const void **)(v87 + 32), "isError", v89);
      if ( v90 || (v90 = v91 - 7, (__int64)(v91 - 7) <= 0x7FFFFFFF) )
      {
        if ( v90 < 0 )
          break;
      }
      v88 = v87;
      v87 = *(_QWORD *)(v87 + 16);
      if ( !v87 )
        goto LABEL_83;
    }
    v87 = *(_QWORD *)(v87 + 24);
  }
  while ( v87 );
LABEL_83:
  if ( v86 == v88 || std::string::compare(*(void **)(v88 + 32), *(_QWORD *)(v88 + 40), "isError") > 0 )
  {
LABEL_85:
    v92 = v86;
    do
    {
      while ( 1 )
      {
        v95 = *(_QWORD *)(v85 + 40);
        if ( !v95 )
          break;
        v93 = 17;
        if ( v95 <= 0x11 )
          v93 = *(_QWORD *)(v85 + 40);
        v94 = memcmp(*(const void **)(v85 + 32), "structuredContent", v93);
        if ( v94 || (v94 = v95 - 17, (__int64)(v95 - 17) <= 0x7FFFFFFF) )
        {
          if ( v94 < 0 )
            break;
        }
        v92 = v85;
        v85 = *(_QWORD *)(v85 + 16);
        if ( !v85 )
          goto LABEL_94;
      }
      v85 = *(_QWORD *)(v85 + 24);
    }
    while ( v85 );
LABEL_94:
    if ( v86 == v92 || std::string::compare(*(void **)(v92 + 32), *(_QWORD *)(v92 + 40), "structuredContent") > 0 )
      goto LABEL_51;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v135[0].m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v96 = v135[0].m128i_i8[0];
    v97 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v98 = *(_BYTE *)v97;
    v99 = *(_QWORD *)(v97 + 8);
    *(_BYTE *)v97 = v96;
    *(_QWORD *)(v97 + 8) = v135[0].m128i_i64[1];
    v135[0].m128i_i8[0] = v98;
    v135[0].m128i_i64[1] = v99;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  else
  {
    if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() == 4 )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v135[0].m128i_i8[0] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v108 = v135[0].m128i_i8[0];
      v109 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v110 = *(_BYTE *)v109;
      v111 = *(_QWORD *)(v109 + 8);
      *(_BYTE *)v109 = v108;
      *(_QWORD *)(v109 + 8) = v135[0].m128i_i64[1];
      v135[0].m128i_i64[1] = v111;
      v135[0].m128i_i8[0] = v110;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( v132 == 1 )
    {
      v85 = *(_QWORD *)(v133 + 16);
      if ( v85 )
      {
        v86 = v133 + 8;
        goto LABEL_85;
      }
    }
LABEL_51:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  pthread_mutex_unlock(v126);
  if ( v142.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v142.m128i_i64[0])(v127, v127, 3);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  return v118;
}

