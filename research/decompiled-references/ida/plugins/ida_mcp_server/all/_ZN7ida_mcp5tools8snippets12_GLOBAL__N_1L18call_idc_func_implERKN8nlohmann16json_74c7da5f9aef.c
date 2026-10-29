_QWORD *__fastcall ida_mcp::tools::snippets::`anonymous namespace'::call_idc_func_impl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        __int64 a30,
        __int64 a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
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
        __int64 a60,
        int a61,
        int a62,
        int a63,
        int a64,
        int a65,
        int a66,
        int a67,
        int a68,
        __int64 a69)
{
  void *v69; // rbx
  void *v70; // r12
  char *v71; // rax
  void *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  char *v77; // rax
  void *exception; // r12
  const char *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // r14
  __int64 v83; // r15
  size_t v84; // rdx
  int v85; // eax
  unsigned __int64 v86; // r13
  unsigned __int64 v87; // rbx
  size_t v88; // rdx
  int v89; // eax
  int *v90; // r12
  int *v91; // rbx
  char v92; // al
  __int64 v93; // rax
  __int64 v94; // rax
  const char *v95; // r15
  __int64 *v96; // r14
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  _QWORD *v102; // rax
  unsigned __int64 v103; // rdx
  _BYTE *v104; // rdi
  __int64 *v105; // r15
  __m128i v106; // xmm0
  size_t v107; // rcx
  __int64 v108; // rax
  __m128i *v109; // r15
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // r15
  _QWORD *v113; // rax
  _BYTE *v114; // rdi
  __int64 *v115; // r14
  __m128i si128; // xmm0
  size_t v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rax
  __m128i v120; // xmm0
  __m128i *v121; // r15
  int *v122; // rbp
  __int64 v124; // r13
  int *v125; // r15
  int *v126; // r14
  int *v127; // r13
  size_t v128; // rdx
  int v129; // eax
  unsigned __int64 v130; // rbx
  unsigned __int64 v131; // r14
  size_t v132; // rdx
  int v133; // eax
  int *v134; // r13
  size_t v135; // rdx
  int v136; // eax
  unsigned __int64 v137; // rbp
  unsigned __int64 v138; // r14
  size_t v139; // rax
  int v140; // eax
  int *v141; // rsi
  int *v142; // rdi
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  unsigned __int8 v147; // al
  int *v148; // r14
  __int64 v149; // r13
  __int64 v150; // rax
  int *v151; // rbp
  char v152; // al
  int v153; // edx
  int v154; // ecx
  int v155; // r8d
  int v156; // r9d
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  unsigned __int64 v160; // rax
  __int64 v161; // rbp
  __m128i v162; // xmm0
  char *v163; // r8
  size_t v164; // rbp
  size_t v165; // rbp
  __int64 v166; // rax
  _OWORD *v167; // rcx
  unsigned __int64 v168; // [rsp+0h] [rbp-238h]
  _QWORD *v169; // [rsp+8h] [rbp-230h]
  int *v170; // [rsp+10h] [rbp-228h]
  _BYTE *v171; // [rsp+10h] [rbp-228h]
  int v172[2]; // [rsp+18h] [rbp-220h]
  __int64 v173; // [rsp+30h] [rbp-208h]
  int v174[2]; // [rsp+38h] [rbp-200h]
  int v175[4]; // [rsp+40h] [rbp-1F8h] BYREF
  __m128i v176; // [rsp+50h] [rbp-1E8h] BYREF
  _OWORD *v177; // [rsp+60h] [rbp-1D8h]
  void *src; // [rsp+68h] [rbp-1D0h]
  size_t v179; // [rsp+70h] [rbp-1C8h]
  void *v180; // [rsp+78h] [rbp-1C0h]
  unsigned __int64 v181; // [rsp+88h] [rbp-1B0h]
  __m128i v182; // [rsp+90h] [rbp-1A8h] BYREF
  int *v183; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v184; // [rsp+A8h] [rbp-190h]
  __int64 v185; // [rsp+B0h] [rbp-188h]
  void *v186; // [rsp+C0h] [rbp-178h]
  size_t n[3]; // [rsp+C8h] [rbp-170h]
  void *v188; // [rsp+E0h] [rbp-158h]
  __int64 v189; // [rsp+E8h] [rbp-150h]
  int v190[2]; // [rsp+F0h] [rbp-148h] BYREF
  char v191[8]; // [rsp+100h] [rbp-138h] BYREF
  __int128 v192; // [rsp+108h] [rbp-130h]
  __int64 v193; // [rsp+118h] [rbp-120h]
  char v194; // [rsp+120h] [rbp-118h] BYREF
  __int64 v195[2]; // [rsp+128h] [rbp-110h]
  __int64 v196; // [rsp+138h] [rbp-100h]
  __int64 v197; // [rsp+140h] [rbp-F8h]
  __int64 v198; // [rsp+148h] [rbp-F0h]
  int v199; // [rsp+150h] [rbp-E8h] BYREF
  int v200[6]; // [rsp+158h] [rbp-E0h] BYREF
  __m128i v201; // [rsp+170h] [rbp-C8h] BYREF
  char *s; // [rsp+180h] [rbp-B8h] BYREF
  _BYTE s2[40]; // [rsp+188h] [rbp-B0h] BYREF
  __m128i p_s1; // [rsp+1B0h] [rbp-88h] BYREF
  __int64 s1; // [rsp+1C0h] [rbp-78h] BYREF
  _QWORD v206[2]; // [rsp+1C8h] [rbp-70h] BYREF
  __int64 v207; // [rsp+1D8h] [rbp-60h]
  _QWORD v208[2]; // [rsp+1E0h] [rbp-58h] BYREF
  __int64 v209; // [rsp+1F0h] [rbp-48h]
  _QWORD v210[8]; // [rsp+1F8h] [rbp-40h] BYREF

  v169 = a1;
  v210[0] = __readfsqword(0x28u);
  strcpy(&s2[8], "function_name");
  s = &s2[8];
  *(_QWORD *)s2 = 13;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v79 = "null";
        break;
      case 1:
        v79 = "object";
        break;
      case 2:
        v79 = "array";
        break;
      case 3:
        v79 = "string";
        break;
      case 4:
        v79 = "boolean";
        break;
      case 8:
        v79 = "binary";
        break;
      case 9:
        v79 = "discarded";
        break;
      default:
        v79 = "number";
        break;
    }
    LOBYTE(s1) = 0;
    p_s1 = (__m128i)(unsigned __int64)&s1;
    strlen(v79);
    std::string::reserve();
    std::string::append((__int64)&p_s1, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)&p_s1, v79);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v80 = *(_QWORD *)(a2 + 8);
  v81 = *(_QWORD *)(v80 + 16);
  v82 = v80 + 8;
  if ( v81 )
  {
    v83 = v80 + 8;
    do
    {
      while ( 1 )
      {
        v86 = *(_QWORD *)(v81 + 40);
        if ( !v86 )
          break;
        v84 = 13;
        if ( v86 <= 0xD )
          v84 = *(_QWORD *)(v81 + 40);
        v85 = memcmp(*(const void **)(v81 + 32), &s2[8], v84);
        if ( v85 || (v85 = v86 - 13, (__int64)(v86 - 13) <= 0x7FFFFFFF) )
        {
          if ( v85 < 0 )
            break;
        }
        v83 = v81;
        v81 = *(_QWORD *)(v81 + 16);
        if ( !v81 )
          goto LABEL_12;
      }
      v81 = *(_QWORD *)(v81 + 24);
    }
    while ( v81 );
LABEL_12:
    if ( v82 != v83 )
    {
      v87 = *(_QWORD *)(v83 + 40);
      if ( v87 )
      {
        v88 = 13;
        if ( v87 <= 0xD )
          v88 = *(_QWORD *)(v83 + 40);
        v89 = memcmp(&s2[8], *(const void **)(v83 + 32), v88);
        if ( v89 || (v89 = 13 - v87, (__int64)(13 - v87) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v89 >= 0 )
            v82 = v83;
        }
      }
      else
      {
        v82 = v83;
      }
    }
  }
  LOBYTE(v190[0]) = 0;
  v188 = v190;
  v189 = 0;
  if ( *(_BYTE *)(v82 + 64) != 3 )
  {
    v70 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v82 + 64) )
    {
      case 0:
        v71 = "null";
        break;
      case 1:
        v71 = "object";
        break;
      case 2:
        v71 = (char *)"array";
        break;
      case 3:
        v71 = "string";
        break;
      case 4:
        v71 = "boolean";
        break;
      case 8:
        v71 = "binary";
        break;
      case 9:
        v71 = "discarded";
        break;
      default:
        v71 = "number";
        break;
    }
    v186 = v71;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v70,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v70,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_22;
  v124 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)(v124 + 16) )
    goto LABEL_22;
  v125 = (int *)(v124 + 8);
  v170 = *(int **)(v124 + 16);
  v126 = v170;
  v127 = (int *)(v124 + 8);
  do
  {
    while ( 1 )
    {
      v130 = *((_QWORD *)v126 + 5);
      if ( !v130 )
        break;
      v128 = 4;
      if ( v130 <= 4 )
        v128 = *((_QWORD *)v126 + 5);
      v129 = memcmp(*((const void **)v126 + 4), "args", v128);
      if ( v129 || (v129 = v130 - 4, (__int64)(v130 - 4) <= 0x7FFFFFFF) )
      {
        if ( v129 < 0 )
          break;
      }
      v127 = v126;
      v126 = *((int **)v126 + 2);
      if ( !v126 )
        goto LABEL_59;
    }
    v126 = *((int **)v126 + 3);
  }
  while ( v126 );
LABEL_59:
  v91 = v170;
  if ( v125 == v127 )
    goto LABEL_22;
  v131 = *((_QWORD *)v127 + 5);
  if ( v131 )
  {
    v132 = 4;
    if ( v131 <= 4 )
      v132 = *((_QWORD *)v127 + 5);
    v133 = memcmp(*((const void **)v127 + 4), "args", v132);
    if ( !v133 )
    {
      v133 = v131 - 4;
      if ( (__int64)(v131 - 4) > 0x7FFFFFFF )
        goto LABEL_22;
    }
    if ( v133 > 0 )
      goto LABEL_22;
  }
  strcpy((char *)&s1, "args");
  v134 = v125;
  v170 = (int *)a2;
  do
  {
    while ( 1 )
    {
      v137 = *((_QWORD *)v91 + 5);
      if ( !v137 )
        break;
      v135 = 4;
      if ( v137 <= 4 )
        v135 = *((_QWORD *)v91 + 5);
      v136 = memcmp(*((const void **)v91 + 4), &s1, v135);
      if ( v136 || (v136 = v137 - 4, (__int64)(v137 - 4) <= 0x7FFFFFFF) )
      {
        if ( v136 < 0 )
          break;
      }
      v134 = v91;
      v91 = *((int **)v91 + 2);
      if ( !v91 )
        goto LABEL_75;
    }
    v91 = *((int **)v91 + 3);
  }
  while ( v91 );
LABEL_75:
  if ( v125 != v134 )
  {
    v138 = *((_QWORD *)v134 + 5);
    if ( v138 )
    {
      v139 = 4;
      if ( v138 <= 4 )
        v139 = *((_QWORD *)v134 + 5);
      v140 = memcmp(&s1, *((const void **)v134 + 4), v139);
      if ( v140 || (v140 = 4 - v138, (__int64)(4 - v138) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v140 >= 0 )
          v125 = v134;
      }
    }
    else
    {
      v125 = v134;
    }
  }
  if ( *((_BYTE *)v125 + 64) != 2 )
  {
LABEL_22:
    v191[0] = 2;
    v90 = nullptr;
    v193 = 0;
    v186 = nullptr;
    *(_QWORD *)v172 = 0;
    v192 = 0;
    *(_OWORD *)n = 0;
LABEL_23:
    v91 = v90;
    goto LABEL_24;
  }
  v141 = (int *)"args";
  v142 = v170;
  v173 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v147 = *(_BYTE *)v173;
  if ( *(_BYTE *)v173 == 1 )
  {
    v148 = nullptr;
    v149 = 0;
    src = nullptr;
    *(_QWORD *)v172 = 0;
    v166 = *(_QWORD *)(v173 + 8);
    v167 = *(_OWORD **)(v166 + 24);
    v176.m128i_i64[0] = v166 + 8;
    v177 = v167;
    *(_QWORD *)v175 = 0x8000000000000000LL;
    *(_QWORD *)v174 = 0x8000000000000000LL;
    goto LABEL_113;
  }
  if ( v147 )
  {
    if ( v147 != 2 )
    {
      v176.m128i_i64[0] = 0;
      v149 = 0;
      v148 = nullptr;
      src = nullptr;
      *(_QWORD *)v172 = 0;
      v177 = nullptr;
      *(_QWORD *)v174 = 0;
      *(_QWORD *)v175 = 1;
      goto LABEL_99;
    }
    v148 = nullptr;
    v149 = 0;
    v176.m128i_i64[0] = 0;
    v177 = nullptr;
    *(_QWORD *)v172 = 0;
    v150 = *(_QWORD *)(v173 + 8);
    v151 = *(int **)v150;
    src = *(void **)(v150 + 8);
    *(_QWORD *)v175 = 0x8000000000000000LL;
    *(_QWORD *)v174 = 0x8000000000000000LL;
    while ( v151 != src )
    {
      v91 = v151;
      while ( 1 )
      {
        while ( 1 )
        {
          LOBYTE(v199) = 2;
          v170 = &v199;
          memset(v200, 0, sizeof(v200));
          v152 = *(_BYTE *)v151;
          if ( (unsigned __int8)(*(_BYTE *)v151 - 5) <= 1u )
          {
            v161 = *((_QWORD *)v151 + 1);
            free_idcv();
            LOBYTE(v199) = 2;
            *(_QWORD *)v200 = v161;
          }
          else if ( v152 == 3 )
          {
            s = &s2[8];
            *(_QWORD *)s2 = 0;
            s2[8] = 0;
            if ( *(_BYTE *)v151 != 3 )
            {
              v69 = __cxa_allocate_exception(0x20u);
              switch ( *(_BYTE *)v151 )
              {
                case 0:
                  v77 = "null";
                  break;
                case 1:
                  v77 = "object";
                  break;
                case 2:
                  v77 = (char *)"array";
                  break;
                case 3:
                  v77 = "string";
                  break;
                case 4:
                  v77 = "boolean";
                  break;
                case 8:
                  v77 = "binary";
                  break;
                case 9:
                  v77 = "discarded";
                  break;
                default:
                  v77 = "number";
                  break;
              }
              v186 = v77;
              nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
              nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
                (__int64)v69,
                302);
              std::string::_M_dispose();
              __cxa_throw(
                v69,
                (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
            }
            std::string::_M_assign();
            v163 = s;
            v186 = nullptr;
            *(_OWORD *)n = 0;
            if ( !s
              || (v180 = s,
                  v164 = strlen(s),
                  v179 = v164 + 1,
                  v186 = (void *)qvector_reserve(),
                  n[0] = v164 + 1,
                  memmove(v186, v180, v164),
                  *((_BYTE *)v186 + v164) = 0,
                  v163 = s,
                  s != &s2[8]) )
            {
              operator delete(v163, *(_QWORD *)&s2[8] + 1LL);
            }
            free_idcv();
            v165 = n[0];
            LOBYTE(v199) = 7;
            memset(v200, 0, sizeof(v200));
            if ( n[0] )
            {
              *(_QWORD *)v200 = qalloc_or_throw();
              *(_QWORD *)&v200[4] = v165;
              memcpy(*(void **)v200, v186, v165);
              *(_QWORD *)&v200[2] = v165;
            }
            if ( v186 )
            {
              n[0] = 0;
              qfree();
            }
          }
          else if ( v152 == 7 )
          {
            v186 = nullptr;
            nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,double,0>();
            ieee_realcvt();
            free_idcv();
            v162 = _mm_load_si128(&p_s1);
            LOBYTE(v199) = 3;
            *(__m128i *)v200 = v162;
          }
          else
          {
            free_idcv();
            LOBYTE(v199) = 2;
            *(_QWORD *)v200 = 0;
          }
          if ( v149 == *(_QWORD *)v172 )
          {
            v141 = &v199;
            v183 = v148;
            v184 = v149;
            v185 = v149;
            std::vector<idc_value_t>::_M_realloc_append<idc_value_t const&>(
              (int)&v183,
              (int)&v199,
              v153,
              v154,
              v155,
              v156,
              v168);
            v148 = v183;
            v149 = v184;
            *(_QWORD *)v172 = v185;
          }
          else
          {
            *(_BYTE *)v149 = 2;
            v141 = &v199;
            *(_QWORD *)(v149 + 24) = 0;
            *(_OWORD *)(v149 + 8) = 0;
            copy_idcv();
            v149 += 32;
          }
          v142 = &v199;
          free_idcv();
          v147 = *(_BYTE *)v173;
          if ( *(_BYTE *)v173 != 1 )
            break;
          v177 = (_OWORD *)std::_Rb_tree_increment();
LABEL_113:
          if ( v177 == (_OWORD *)v176.m128i_i64[0] )
            goto LABEL_132;
          v151 = (int *)(v177 + 4);
        }
        if ( v147 == 2 )
          break;
        v144 = ++*(_QWORD *)v174;
        if ( *(_QWORD *)v175 == *(_QWORD *)v174 )
          goto LABEL_132;
LABEL_99:
        if ( v147 <= 2u )
        {
          v72 = __cxa_allocate_exception(0x20u);
          std::string::basic_string<std::allocator<char>>(
            p_s1.m128i_i64,
            "cannot get value",
            v73,
            v74,
            v75,
            v76,
            v168,
            (int)v169,
            (__int64)v170);
          nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            (__int64)v72,
            214);
          std::string::_M_dispose();
          __cxa_throw(
            v72,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::invalid_iterator,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator);
        }
        if ( *(_QWORD *)v174 )
          ida_mcp::tools::snippets::`anonymous namespace'::call_idc_func_impl(
            (__int64)v142,
            (__int64)v141,
            v143,
            v144,
            v145,
            v146,
            a7,
            a8,
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
            a67,
            a68,
            a69);
        v151 = (int *)v173;
      }
      v151 = v91 + 4;
    }
LABEL_132:
    v91 = (int *)v149;
  }
  else
  {
    *(_QWORD *)v172 = 0;
    v148 = nullptr;
  }
  v191[0] = 2;
  v90 = v148;
  v192 = 0;
  v193 = 0;
  v186 = nullptr;
  *(_OWORD *)n = 0;
  if ( v148 == v91 )
    goto LABEL_23;
LABEL_24:
  v92 = call_idc_func();
  v194 = 0;
  v195[0] = 0;
  if ( !v92 )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v194 = 3;
    v93 = operator new(0x20u);
    strcpy((char *)(v93 + 16), "success");
    *(_QWORD *)v93 = v93 + 16;
    *(_QWORD *)(v93 + 8) = 7;
    v196 = 4;
    v197 = 0;
    v198 = 0;
    *(_OWORD *)v195 = (unsigned __int64)v93;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &p_s1,
      (const __m128i *)&v194);
    s1 = 0;
    LOBYTE(v199) = 0;
    *(_QWORD *)v200 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v199) = 3;
    v94 = operator new(0x20u);
    *(_BYTE *)(v94 + 20) = 114;
    *(_QWORD *)v94 = v94 + 16;
    *(_DWORD *)(v94 + 16) = 1869771365;
    *(_QWORD *)(v94 + 8) = 5;
    *(_BYTE *)(v94 + 21) = 0;
    *(_OWORD *)v200 = (unsigned __int64)v94;
    if ( n[0] )
      v95 = (const char *)v186;
    else
      v95 = _qstring<char>::c_str(void)const::nullstr;
    LOBYTE(v200[4]) = 0;
    v177 = &v201;
    v201.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v200[4]) = 3;
    v96 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v96, v95, v97, v98, v99, v100, v168, (int)v169, (__int64)v170);
    v201 = (__m128i)(unsigned __int64)v96;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v206,
      (const __m128i *)&v199);
    v207 = 0;
    LOBYTE(s) = 0;
    *(_QWORD *)s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(s) = 3;
    v101 = operator new(0x20u);
    strcpy((char *)(v101 + 16), "function_name");
    *(_QWORD *)v101 = v101 + 16;
    *(_QWORD *)(v101 + 8) = 13;
    s2[16] = 0;
    *(_QWORD *)&s2[24] = 0;
    *(_QWORD *)v175 = &s2[24];
    *(_OWORD *)s2 = (unsigned __int64)v101;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    s2[16] = 3;
    src = v188;
    v176.m128i_i64[0] = v189;
    v102 = (_QWORD *)operator new(0x20u);
    v103 = v176.m128i_i64[0];
    v104 = v102 + 2;
    v105 = v102;
    *v102 = v102 + 2;
    v181 = v103;
    if ( v103 > 0xF )
    {
      v159 = std::string::_M_create();
      *v105 = v159;
      v104 = (_BYTE *)v159;
      v160 = v181;
      v106 = (__m128i)(unsigned __int64)v105;
      v105[2] = v181;
      v107 = v160 + 1;
      if ( v160 )
      {
        v108 = -1;
        if ( v107 )
          goto LABEL_29;
LABEL_30:
        v105[1] = v108;
        *(__m128i *)&s2[24] = v106;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v208,
          (const __m128i *)&s);
        v209 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v169,
          &p_s1,
          3);
        v109 = (__m128i *)v210;
        do
        {
          v109 = (__m128i *)((char *)v109 - 24);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v109 != &p_s1 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_39;
      }
    }
    else
    {
      v106 = (__m128i)(unsigned __int64)v102;
      v107 = v103 + 1;
      if ( v103 )
      {
LABEL_29:
        v176 = v106;
        memcpy(v104, src, v107);
        v108 = v181;
        v106 = _mm_load_si128(&v176);
        goto LABEL_30;
      }
    }
    *v104 = *(_BYTE *)src;
    v108 = v181;
    goto LABEL_30;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v194 = 3;
  v110 = operator new(0x20u);
  strcpy((char *)(v110 + 16), "success");
  *(_QWORD *)v110 = v110 + 16;
  *(_QWORD *)(v110 + 8) = 7;
  v196 = 4;
  v197 = 1;
  v198 = 0;
  *(_OWORD *)v195 = (unsigned __int64)v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &p_s1,
    (const __m128i *)&v194);
  s1 = 0;
  LOBYTE(v199) = 0;
  *(_QWORD *)v200 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v199) = 3;
  v111 = operator new(0x20u);
  strcpy((char *)(v111 + 16), "function_name");
  *(_QWORD *)v111 = v111 + 16;
  *(_QWORD *)(v111 + 8) = 13;
  LOBYTE(v200[4]) = 0;
  v201.m128i_i64[0] = 0;
  v177 = &v201;
  *(_OWORD *)v200 = (unsigned __int64)v111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v200[4]) = 3;
  v112 = v189;
  v171 = v188;
  v113 = (_QWORD *)operator new(0x20u);
  v114 = v113 + 2;
  v182.m128i_i64[0] = v112;
  v115 = v113;
  *v113 = v113 + 2;
  if ( v112 <= 0xF )
  {
    si128 = (__m128i)(unsigned __int64)v113;
    v117 = v112 + 1;
    if ( v112 )
    {
LABEL_35:
      *(__m128i *)v175 = si128;
      memcpy(v114, v171, v117);
      v118 = v182.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)v175);
      goto LABEL_36;
    }
    goto LABEL_104;
  }
  v157 = std::string::_M_create();
  *v115 = v157;
  v114 = (_BYTE *)v157;
  v158 = v182.m128i_i64[0];
  si128 = (__m128i)(unsigned __int64)v115;
  v115[2] = v182.m128i_i64[0];
  v117 = v158 + 1;
  if ( !v158 )
  {
LABEL_104:
    *v114 = *v171;
    v118 = v182.m128i_i64[0];
    goto LABEL_36;
  }
  v118 = -1;
  if ( v117 )
    goto LABEL_35;
LABEL_36:
  v115[1] = v118;
  v201 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v206,
    (const __m128i *)&v199);
  v207 = 0;
  LOBYTE(s) = 0;
  *(_QWORD *)s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s) = 3;
  v119 = operator new(0x20u);
  strcpy((char *)(v119 + 16), "result");
  *(_QWORD *)v119 = v119 + 16;
  *(_QWORD *)(v119 + 8) = 6;
  *(_OWORD *)s2 = (unsigned __int64)v119;
  ida_mcp::tools::snippets::`anonymous namespace'::idc_value_to_json(&v182, (__int64)v191);
  v120 = _mm_load_si128(&v182);
  *(_QWORD *)&s2[32] = 0;
  *(__m128i *)&s2[16] = v120;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v208,
    (const __m128i *)&s);
  v209 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v169,
    &p_s1,
    3);
  v121 = (__m128i *)v210;
  do
  {
    v121 = (__m128i *)((char *)v121 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v121 != &p_s1 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_39:
  if ( v186 )
  {
    n[0] = 0;
    qfree();
  }
  v122 = v90;
  free_idcv();
  if ( v91 != v90 )
  {
    do
    {
      v122 += 8;
      free_idcv();
    }
    while ( v91 != v122 );
  }
  if ( v90 )
    operator delete(v90, *(_QWORD *)v172 - (_QWORD)v90);
  if ( v188 != v190 )
    operator delete(v188, *(_QWORD *)v190 + 1LL);
  return v169;
}

