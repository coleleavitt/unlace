_QWORD *__fastcall ida_mcp::mcp::McpServer::handle_prompts_get(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13,
        pthread_mutex_t *a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20,
        int a21,
        int a22,
        __int64 a23,
        int a24,
        __int64 a25,
        char a26,
        char a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        __int64 a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        __int64 a40,
        __int64 a41,
        int a42,
        int a43,
        char a44,
        int a45,
        __int64 a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        char a60,
        int a61,
        __int64 a62,
        int a63,
        int a64,
        int a65,
        int a66,
        __int64 a67)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v67; // r12
  char *v68; // rax
  std::runtime_error *exception; // rbx
  __int64 v70; // rax
  __int64 v72; // rbp
  __int64 v73; // r15
  __int64 v75; // r14
  size_t v76; // rdx
  int v77; // eax
  unsigned __int64 v78; // r12
  _BYTE *v79; // rbp
  int v80; // esi
  const void *v81; // rdi
  int v82; // eax
  size_t v83; // rdx
  int v84; // ecx
  int v85; // r8d
  int v86; // r9d
  _QWORD *v87; // rbx
  _QWORD *v88; // r13
  void *v89; // r12
  size_t v90; // r15
  size_t v91; // r14
  _QWORD *v92; // rbp
  int v93; // eax
  __int64 v94; // r14
  void (__fastcall *v95)(__m128i *, _QWORD *, __int64, double, double, double); // rax
  __m128i v96; // xmm2
  __m128i si128; // xmm1
  __m128i v98; // xmm0
  __m128 v99; // xmm4
  __m128i v100; // xmm7
  __m128i v101; // xmm2
  __m128i v102; // xmm1
  __int64 v103; // r8
  __int64 v104; // r9
  _DWORD *v105; // rbx
  __int8 v106; // r14
  const __m128i *v107; // rsi
  __int64 v108; // rax
  __int64 v109; // rax
  const char *v110; // r13
  _QWORD *v111; // rax
  _QWORD *v112; // r12
  _QWORD *v113; // r15
  size_t v114; // rax
  unsigned __int64 v115; // rcx
  char *v116; // r12
  const char *v117; // rdx
  unsigned int v118; // r12d
  unsigned int v119; // r12d
  unsigned int v120; // esi
  __int64 v121; // rdi
  __int64 *v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  char *v130; // rbp
  char *v131; // rbx
  __int64 v133; // r15
  __int64 v134; // rbp
  __int64 v135; // r15
  __int64 v136; // r14
  size_t v137; // rdx
  int v138; // eax
  unsigned __int64 v139; // r12
  unsigned __int64 v140; // rbp
  size_t v141; // rax
  int v142; // eax
  int v143; // [rsp+0h] [rbp-218h]
  int v144; // [rsp+0h] [rbp-218h]
  int v145; // [rsp+8h] [rbp-210h]
  __int64 v146; // [rsp+8h] [rbp-210h]
  __m128 v147; // [rsp+10h] [rbp-208h] BYREF
  __m128i v148; // [rsp+20h] [rbp-1F8h] BYREF
  pthread_mutex_t *mutex; // [rsp+30h] [rbp-1E8h]
  __m128i *v150; // [rsp+38h] [rbp-1E0h] BYREF
  __m128i v151; // [rsp+40h] [rbp-1D8h] BYREF
  int v152[2]; // [rsp+50h] [rbp-1C8h] BYREF
  _QWORD *v153; // [rsp+58h] [rbp-1C0h]
  __int64 p_s2; // [rsp+60h] [rbp-1B8h]
  int v155[2]; // [rsp+68h] [rbp-1B0h]
  char *v156; // [rsp+70h] [rbp-1A8h]
  void **v157; // [rsp+78h] [rbp-1A0h]
  __int64 v158; // [rsp+88h] [rbp-190h] BYREF
  int v159; // [rsp+90h] [rbp-188h] BYREF
  __m128i v160; // [rsp+A0h] [rbp-178h] BYREF
  void *v161[2]; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v162; // [rsp+C0h] [rbp-158h]
  _QWORD v163[2]; // [rsp+D0h] [rbp-148h] BYREF
  __m128i v164; // [rsp+E0h] [rbp-138h]
  __m128i v165; // [rsp+F0h] [rbp-128h]
  void *s2; // [rsp+100h] [rbp-118h] BYREF
  size_t n; // [rsp+108h] [rbp-110h]
  __int64 v168[2]; // [rsp+110h] [rbp-108h] BYREF
  char v169[16]; // [rsp+120h] [rbp-F8h] BYREF
  __int64 v170[2]; // [rsp+130h] [rbp-E8h] BYREF
  char v171; // [rsp+140h] [rbp-D8h] BYREF
  __int128 v172; // [rsp+148h] [rbp-D0h]
  char v173; // [rsp+158h] [rbp-C0h]
  __int64 v174; // [rsp+160h] [rbp-B8h]
  _DWORD *v175; // [rsp+168h] [rbp-B0h]
  __int64 v176; // [rsp+170h] [rbp-A8h] BYREF
  __int128 v177; // [rsp+178h] [rbp-A0h] BYREF
  char v178; // [rsp+188h] [rbp-90h]
  __int128 v179; // [rsp+190h] [rbp-88h]
  __m128i v180[2]; // [rsp+1A0h] [rbp-78h] BYREF
  __int64 v181; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v182; // [rsp+1D8h] [rbp-40h]

  v153 = a1;
  v182 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 1 )
    goto LABEL_95;
  v70 = *(_QWORD *)(a3 + 8);
  v72 = *(_QWORD *)(v70 + 16);
  if ( !v72 )
    goto LABEL_95;
  v73 = v70 + 8;
  v75 = v70 + 8;
  do
  {
    while ( 1 )
    {
      v78 = *(_QWORD *)(v72 + 40);
      if ( !v78 )
        break;
      v76 = 4;
      if ( v78 <= 4 )
        v76 = *(_QWORD *)(v72 + 40);
      v77 = memcmp(*(const void **)(v72 + 32), "name", v76);
      if ( v77 || (v77 = v78 - 4, (__int64)(v78 - 4) <= 0x7FFFFFFF) )
      {
        if ( v77 < 0 )
          break;
      }
      v75 = v72;
      v72 = *(_QWORD *)(v72 + 16);
      if ( !v72 )
        goto LABEL_12;
    }
    v72 = *(_QWORD *)(v72 + 24);
  }
  while ( v72 );
LABEL_12:
  if ( v73 == v75
    || std::string::compare(*(void **)(v75 + 32), *(_QWORD *)(v75 + 40), "name") > 0
    || *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
  {
LABEL_95:
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Missing or invalid 'name' parameter");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  LOBYTE(v168[0]) = 0;
  n = 0;
  v79 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  p_s2 = (__int64)&s2;
  *(_QWORD *)v155 = v168;
  s2 = v168;
  if ( *v79 != 3 )
  {
    v67 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v79 )
    {
      case 0:
        v68 = "null";
        break;
      case 1:
        v68 = "object";
        break;
      case 2:
        v68 = (char *)"array";
        break;
      case 3:
        v68 = "string";
        break;
      case 4:
        v68 = "boolean";
        break;
      case 8:
        v68 = "binary";
        break;
      case 9:
        v68 = "discarded";
        break;
      default:
        v68 = "number";
        break;
    }
    v163[0] = v68;
    v148.m128i_i64[0] = (__int64)v180;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v67,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v67,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  if ( *(_BYTE *)a3 != 1 )
    goto LABEL_17;
  v133 = *(_QWORD *)(a3 + 8);
  v134 = *(_QWORD *)(v133 + 16);
  if ( !v134 )
    goto LABEL_17;
  v135 = v133 + 8;
  v136 = v135;
  do
  {
    while ( 1 )
    {
      v139 = *(_QWORD *)(v134 + 40);
      if ( !v139 )
        break;
      v137 = 9;
      if ( v139 <= 9 )
        v137 = *(_QWORD *)(v134 + 40);
      v138 = memcmp(*(const void **)(v134 + 32), "arguments", v137);
      if ( v138 || (v138 = v139 - 9, (__int64)(v139 - 9) <= 0x7FFFFFFF) )
      {
        if ( v138 < 0 )
          break;
      }
      v136 = v134;
      v134 = *(_QWORD *)(v134 + 16);
      if ( !v134 )
        goto LABEL_74;
    }
    v134 = *(_QWORD *)(v134 + 24);
  }
  while ( v134 );
LABEL_74:
  if ( v135 == v136 )
    goto LABEL_17;
  v140 = *(_QWORD *)(v136 + 40);
  if ( !v140 )
    goto LABEL_81;
  v141 = 9;
  if ( v140 <= 9 )
    v141 = *(_QWORD *)(v136 + 40);
  if ( ((v142 = memcmp(*(const void **)(v136 + 32), "arguments", v141)) != 0
     || (v142 = v140 - 9, (__int64)(v140 - 9) <= 0x7FFFFFFF))
    && v142 <= 0 )
  {
LABEL_81:
    v80 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_QWORD *)v152 = &v159;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  }
  else
  {
LABEL_17:
    v80 = 0;
    *(_QWORD *)v152 = &v159;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  }
  v170[0] = 0;
  LODWORD(v81) = a2 + 224;
  mutex = (pthread_mutex_t *)(a2 + 224);
  v170[1] = 0;
  *(_OWORD *)v169 = 0;
  v82 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 224));
  if ( v82 )
    std::__throw_system_error(v82);
  v87 = *(_QWORD **)(a2 + 136);
  if ( !v87 )
LABEL_96:
    ida_mcp::mcp::McpServer::handle_prompts_get(
      (int)v81,
      v80,
      v83,
      v84,
      v85,
      v86,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25,
      a26,
      a27,
      a28,
      a29,
      a30,
      a31,
      a32,
      a33,
      a34,
      a35,
      a36,
      a37,
      a38,
      a39,
      a40,
      a41,
      a42,
      a43,
      a44,
      a45,
      a46,
      a47,
      a48,
      a49,
      a50,
      a51,
      a52,
      a53,
      a54,
      a55,
      a56,
      a57,
      a58,
      a59,
      a60,
      a61,
      a62,
      a63,
      a64,
      a65,
      a66,
      a67);
  v88 = (_QWORD *)(a2 + 128);
  v89 = s2;
  v90 = n;
  v81 = (const void *)v87[4];
  v91 = v87[5];
  v92 = v88;
  while ( 1 )
  {
    v83 = v91;
    if ( v90 <= v91 )
      v83 = v90;
    if ( !v83 || (v80 = (int)v89, (v93 = memcmp(v81, v89, v83)) == 0) )
    {
      v94 = v91 - v90;
      if ( v94 > 0x7FFFFFFF )
        goto LABEL_21;
      if ( v94 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v93 = v94;
    }
    if ( v93 < 0 )
      break;
LABEL_21:
    v92 = v87;
    v87 = (_QWORD *)v87[2];
    if ( !v87 )
      goto LABEL_32;
LABEL_22:
    v81 = (const void *)v87[4];
    v91 = v87[5];
  }
  v87 = (_QWORD *)v87[3];
  if ( v87 )
    goto LABEL_22;
LABEL_32:
  if ( v88 == v92 )
    goto LABEL_96;
  v80 = v90;
  LODWORD(v81) = (_DWORD)v89;
  if ( std::string::compare(v89, v90, (const void *)v92[4], v92[5]) < 0 )
    goto LABEL_96;
  v95 = (void (__fastcall *)(__m128i *, _QWORD *, __int64, double, double, double))v92[23];
  v96 = 0;
  memset(v180, 0, sizeof(v180));
  if ( v95 )
  {
    v148.m128i_i64[0] = (__int64)v180;
    v95(v180, v92 + 21, 2, 0.0, a5, 0.0);
    v96 = _mm_loadu_si128((const __m128i *)(v92 + 23));
  }
  si128 = _mm_load_si128((const __m128i *)v169);
  v150 = &v160;
  v147 = _mm_loadh_ps((const double *)&v150);
  *(__m128i *)v169 = _mm_load_si128(v180);
  v98 = _mm_load_si128((const __m128i *)v170);
  v157 = v161;
  v156 = v169;
  v99 = _mm_loadh_ps((const double *)v152);
  v151 = (__m128i)(unsigned __int64)v161;
  v148 = (__m128i)v99;
  v180[0] = si128;
  v180[1] = v98;
  *(__m128i *)v170 = v96;
  if ( v98.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v98.m128i_i64[0])(v180, v180, 3);
  pthread_mutex_unlock(mutex);
  v100 = _mm_load_si128(&v148);
  v101 = _mm_load_si128((const __m128i *)&v147);
  v102 = _mm_load_si128(&v151);
  v163[0] = off_443328;
  mutex = (pthread_mutex_t *)v163;
  v160 = v100;
  v162 = 0;
  v163[1] = 0;
  *(_OWORD *)v161 = 0;
  v164 = v101;
  v165 = v102;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(86, v163, 2, &callui, v103, v104);
  if ( v165.m128i_i64[1] )
  {
    v158 = v165.m128i_i64[1];
    std::__exception_ptr::exception_ptr::_M_addref((std::__exception_ptr::exception_ptr *)&v158);
    std::rethrow_exception();
  }
  v163[0] = &off_4451B0;
  qsem_free();
  v160.m128i_i8[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v105 = v161[0];
  v106 = v160.m128i_i8[0];
  v151.m128i_i64[0] = (__int64)v161[1];
  v148.m128i_i64[0] = (__int64)v180;
  if ( v161[1] != v161[0] )
  {
    v147.m128_u64[0] = (unsigned __int64)&v177;
    *(_QWORD *)v152 = &v176;
    do
    {
      LOBYTE(v176) = 0;
      *(_QWORD *)&v177 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v176) = 3;
      v109 = operator new(0x20u);
      v110 = "assistant";
      *(_QWORD *)v109 = v109 + 16;
      strcpy((char *)(v109 + 16), "role");
      *(_QWORD *)(v109 + 8) = 4;
      v177 = (unsigned __int64)v109;
      LODWORD(v109) = *v105;
      v178 = 0;
      *(_QWORD *)&v179 = 0;
      if ( !(_DWORD)v109 )
        v110 = "user";
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v178 = 3;
      v111 = (_QWORD *)operator new(0x20u);
      v112 = v111 + 2;
      v113 = v111;
      *v111 = v111 + 2;
      v114 = strlen(v110);
      if ( (unsigned int)v114 < 8 )
      {
        if ( (v114 & 4) != 0 )
        {
          *((_DWORD *)v113 + 4) = *(_DWORD *)v110;
          *(_DWORD *)((char *)v112 + (unsigned int)v114 - 4) = *(_DWORD *)&v110[(unsigned int)v114 - 4];
        }
        else if ( (_DWORD)v114 )
        {
          *((_BYTE *)v113 + 16) = *v110;
          if ( (v114 & 2) != 0 )
            *(_WORD *)((char *)v112 + (unsigned int)v114 - 2) = *(_WORD *)&v110[(unsigned int)v114 - 2];
        }
      }
      else
      {
        v113[2] = *(_QWORD *)v110;
        *(_QWORD *)((char *)v112 + (unsigned int)v114 - 8) = *(_QWORD *)&v110[(unsigned int)v114 - 8];
        v115 = (unsigned __int64)(v113 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v116 = (char *)v112 - v115;
        v117 = (const char *)(v110 - v116);
        v118 = (v114 + (_DWORD)v116) & 0xFFFFFFF8;
        if ( v118 >= 8 )
        {
          v119 = v118 & 0xFFFFFFF8;
          v120 = 0;
          do
          {
            v121 = v120;
            v120 += 8;
            *(_QWORD *)(v115 + v121) = *(_QWORD *)&v117[v121];
          }
          while ( v120 < v119 );
        }
      }
      v113[1] = v114;
      v107 = *(const __m128i **)v152;
      *((_BYTE *)v113 + v114 + 16) = 0;
      v179 = (unsigned __int64)v113;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v148.m128i_i64[0],
        v107);
      v180[1].m128i_i64[0] = 0;
      v171 = 0;
      *(_QWORD *)&v172 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v171 = 3;
      v108 = operator new(0x20u);
      strcpy((char *)(v108 + 16), "content");
      *(_QWORD *)v108 = v108 + 16;
      *(_QWORD *)(v108 + 8) = 7;
      v173 = 0;
      v174 = 0;
      v175 = v105 + 2;
      v172 = (unsigned __int64)v108;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v180[1].m128i_i64[1],
        (const __m128i *)&v171);
      v181 = 0;
      v145 = 2;
      v143 = v148.m128i_i32[0];
      LOBYTE(v163[0]) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        mutex,
        (const __m128i *)v148.m128i_i64[0]);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v160.m128i_i8[0] = v106;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
      v105 += 6;
      v106 = v160.m128i_i8[0];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( (_DWORD *)v151.m128i_i64[0] != v105 );
  }
  v180[0].m128i_i8[0] = 0;
  v180[0].m128i_i64[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v180[0].m128i_i8[0] = 3;
  v122 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v122,
    "messages",
    v123,
    v124,
    v125,
    v126,
    v143,
    v145,
    v147.m128_i64[0]);
  v160.m128i_i8[0] = v106;
  *(__m128i *)((char *)v180 + 8) = (__m128i)(unsigned __int64)v122;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v181 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v176,
    (const __m128i *)v148.m128i_i64[0]);
  *((_QWORD *)&v177 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v153,
    (__int64)&v176,
    1,
    v127,
    v128,
    v129,
    v144,
    v146,
    v147.m128_i32[0],
    v147.m128_i32[2],
    v148.m128i_i32[0],
    v148.m128i_i32[2],
    (__int64)mutex,
    (int)v150,
    v151.m128i_i32[0],
    v151.m128i_i32[2],
    v152[0],
    (char)v153,
    p_s2,
    v155[0],
    (__int64)v156);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = (char *)v161[1];
  v131 = (char *)v161[0];
  if ( v161[1] != v161[0] )
  {
    do
    {
      v131 += 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v130 != v131 );
    v131 = (char *)v161[0];
  }
  if ( v131 )
    operator delete(v131, v162 - (_QWORD)v131);
  if ( v170[0] )
    ((void (__fastcall *)(char *, char *, __int64))v170[0])(v156, v156, 3);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( s2 != *(void **)v155 )
    operator delete(s2, v168[0] + 1);
  return v153;
}

