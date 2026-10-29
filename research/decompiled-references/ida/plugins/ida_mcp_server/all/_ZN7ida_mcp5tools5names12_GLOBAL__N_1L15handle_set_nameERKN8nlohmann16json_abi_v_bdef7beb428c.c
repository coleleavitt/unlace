_QWORD *__fastcall ida_mcp::tools::names::`anonymous namespace'::handle_set_name(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17,
        int a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        char a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        char a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        char a46,
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
        int a60,
        __int64 a61)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v61; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v63; // rax
  char *v64; // rax
  __int64 v66; // rax
  __int64 v67; // rbp
  __int64 v68; // r14
  __int64 v69; // r15
  size_t v70; // rdx
  int v71; // eax
  unsigned __int64 v72; // r13
  unsigned __int64 v73; // rbp
  size_t v74; // rdx
  int v75; // eax
  void *v76; // r13
  int *v77; // rax
  char *v78; // rsi
  int *v79; // r15
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbp
  __int64 v83; // r8
  __int64 v84; // r9
  std::runtime_error *v85; // rbx
  void *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // r12
  __int64 v89; // r15
  __int64 v90; // r13
  size_t v91; // rdx
  int v92; // eax
  unsigned __int64 v93; // rbp
  unsigned __int64 v94; // r12
  size_t v95; // rdx
  int v96; // eax
  __int64 v97; // rax
  size_t v98; // rax
  unsigned int v99; // ebp
  _QWORD *v100; // rdx
  _QWORD *v101; // rax
  _QWORD *v102; // rdx
  _QWORD *v103; // rcx
  size_t v104; // rsi
  __int64 v105; // rax
  _QWORD *v106; // rax
  unsigned __int64 v107; // rdx
  _BYTE *v108; // rdi
  __int64 *v109; // rbp
  __m128i si128; // xmm0
  size_t v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  __m128i *v114; // r14
  __int64 v116; // rax
  size_t v117; // rax
  _QWORD *v118; // rax
  unsigned __int64 v119; // rdx
  char *v120; // rax
  char *v121; // rbx
  unsigned int v122; // ebp
  unsigned int v123; // ebp
  unsigned int v124; // eax
  __int64 v125; // rcx
  unsigned int v126; // edi
  unsigned __int64 v127; // r8
  char *v128; // rcx
  char *v129; // r9
  unsigned int v130; // edx
  unsigned int v131; // ecx
  __int64 v132; // rdi
  char v134[16]; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned __int8 v135; // [rsp+47h] [rbp-1B1h]
  void *src; // [rsp+48h] [rbp-1B0h]
  int v137[2]; // [rsp+50h] [rbp-1A8h]
  int v138[2]; // [rsp+58h] [rbp-1A0h]
  char v139[8]; // [rsp+68h] [rbp-190h] BYREF
  void *v140; // [rsp+70h] [rbp-188h]
  __int64 v141; // [rsp+78h] [rbp-180h]
  _QWORD v142[2]; // [rsp+80h] [rbp-178h] BYREF
  void *v143; // [rsp+90h] [rbp-168h] BYREF
  size_t v144; // [rsp+98h] [rbp-160h]
  _QWORD v145[2]; // [rsp+A0h] [rbp-158h] BYREF
  int v146; // [rsp+B0h] [rbp-148h] BYREF
  __int128 v147; // [rsp+B8h] [rbp-140h]
  char v148; // [rsp+C8h] [rbp-130h]
  int v149[4]; // [rsp+D0h] [rbp-128h]
  char v150; // [rsp+E0h] [rbp-118h] BYREF
  int v151[4]; // [rsp+E8h] [rbp-110h]
  char v152; // [rsp+F8h] [rbp-100h]
  int v153[4]; // [rsp+100h] [rbp-F8h]
  void *v154; // [rsp+110h] [rbp-E8h] BYREF
  __int128 s2; // [rsp+118h] [rbp-E0h] BYREF
  char v156; // [rsp+128h] [rbp-D0h]
  __int64 v157; // [rsp+130h] [rbp-C8h]
  __int64 v158; // [rsp+138h] [rbp-C0h]
  __m128i v159; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v160; // [rsp+150h] [rbp-A8h]
  _QWORD v161[3]; // [rsp+158h] [rbp-A0h] BYREF
  _QWORD v162[3]; // [rsp+170h] [rbp-88h] BYREF
  char v163[8]; // [rsp+188h] [rbp-70h] BYREF
  char s[40]; // [rsp+190h] [rbp-68h] BYREF
  unsigned __int64 v165; // [rsp+1B8h] [rbp-40h]

  v165 = __readfsqword(0x28u);
  v154 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x8592A);
  v66 = *(_QWORD *)(a2 + 8);
  v67 = *(_QWORD *)(v66 + 16);
  v68 = v66 + 8;
  if ( v67 )
  {
    v69 = v66 + 8;
    do
    {
      while ( 1 )
      {
        v72 = *(_QWORD *)(v67 + 40);
        if ( !v72 )
          break;
        v70 = 7;
        if ( v72 <= 7 )
          v70 = *(_QWORD *)(v67 + 40);
        v71 = memcmp(*(const void **)(v67 + 32), (char *)&s2 + 8, v70);
        if ( v71 || (v71 = v72 - 7, (__int64)(v72 - 7) <= 0x7FFFFFFF) )
        {
          if ( v71 < 0 )
            break;
        }
        v69 = v67;
        v67 = *(_QWORD *)(v67 + 16);
        if ( !v67 )
          goto LABEL_12;
      }
      v67 = *(_QWORD *)(v67 + 24);
    }
    while ( v67 );
LABEL_12:
    if ( v68 != v69 )
    {
      v73 = *(_QWORD *)(v69 + 40);
      if ( v73 )
      {
        v74 = 7;
        if ( v73 <= 7 )
          v74 = *(_QWORD *)(v69 + 40);
        v75 = memcmp((char *)&s2 + 8, *(const void **)(v69 + 32), v74);
        if ( v75 || (v75 = 7 - v73, (__int64)(7 - v73) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v75 >= 0 )
            v68 = v69;
        }
      }
      else
      {
        v68 = v69;
      }
    }
  }
  v154 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v68 + 64) != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v68 + 64) )
    {
      case 0:
        v63 = "null";
        break;
      case 1:
        v63 = "object";
        break;
      case 2:
        v63 = (char *)"array";
        break;
      case 3:
        v63 = "string";
        break;
      case 4:
        v63 = "boolean";
        break;
      case 8:
        v63 = "binary";
        break;
      case 9:
        v63 = "discarded";
        break;
      default:
        v63 = "number";
        break;
    }
    *(_QWORD *)v139 = v63;
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
  v76 = v154;
  v77 = __errno_location();
  *v77 = 0;
  v78 = v139;
  v79 = v77;
  v82 = __isoc23_strtoull();
  if ( v76 == *(void **)v139 || **(_BYTE **)v139 || *v79 == 34 && v82 == -1 )
  {
    if ( v154 != (char *)&s2 + 8 )
      operator delete(v154, *((_QWORD *)&s2 + 1) + 1LL);
    v85 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v85, "Invalid address format");
    __cxa_throw(
      v85,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v86 = v154;
  if ( v154 != (char *)&s2 + 8 )
  {
    v78 = (char *)(*((_QWORD *)&s2 + 1) + 1LL);
    operator delete(v154, *((_QWORD *)&s2 + 1) + 1LL);
  }
  v154 = (char *)&s2 + 8;
  DWORD2(s2) = 1701667182;
  *(_QWORD *)&s2 = 4;
  BYTE12(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    ida_mcp::tools::names::`anonymous namespace'::handle_set_name(
      (__int64)v86,
      (__int64)v78,
      v80,
      v81,
      v83,
      v84,
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
      a61);
  v87 = *(_QWORD *)(a2 + 8);
  v88 = *(_QWORD *)(v87 + 16);
  v89 = v87 + 8;
  if ( v88 )
  {
    v90 = v87 + 8;
    do
    {
      while ( 1 )
      {
        v93 = *(_QWORD *)(v88 + 40);
        if ( !v93 )
          break;
        v91 = 4;
        if ( v93 <= 4 )
          v91 = *(_QWORD *)(v88 + 40);
        v92 = memcmp(*(const void **)(v88 + 32), (char *)&s2 + 8, v91);
        if ( v92 || (v92 = v93 - 4, (__int64)(v93 - 4) <= 0x7FFFFFFF) )
        {
          if ( v92 < 0 )
            break;
        }
        v90 = v88;
        v88 = *(_QWORD *)(v88 + 16);
        if ( !v88 )
          goto LABEL_41;
      }
      v88 = *(_QWORD *)(v88 + 24);
    }
    while ( v88 );
LABEL_41:
    if ( v89 != v90 )
    {
      v94 = *(_QWORD *)(v90 + 40);
      if ( v94 )
      {
        v95 = 4;
        if ( v94 <= 4 )
          v95 = *(_QWORD *)(v90 + 40);
        v96 = memcmp((char *)&s2 + 8, *(const void **)(v90 + 32), v95);
        if ( v96 || (v96 = 4 - v94, (__int64)(4 - v94) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v96 >= 0 )
            v89 = v90;
        }
      }
      else
      {
        v89 = v90;
      }
    }
  }
  v141 = 0;
  v140 = v142;
  LOBYTE(v142[0]) = 0;
  if ( *(_BYTE *)(v89 + 64) != 3 )
  {
    v61 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v89 + 64) )
    {
      case 0:
        v64 = "null";
        break;
      case 1:
        v64 = "object";
        break;
      case 2:
        v64 = (char *)"array";
        break;
      case 3:
        v64 = "string";
        break;
      case 4:
        v64 = "boolean";
        break;
      case 8:
        v64 = "binary";
        break;
      case 9:
        v64 = "discarded";
        break;
      default:
        v64 = "number";
        break;
    }
    *(_QWORD *)v139 = v64;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v61,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v61,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v135 = set_name();
  LOBYTE(v146) = 0;
  *(_QWORD *)&v147 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v146) = 3;
  v97 = operator new(0x20u);
  *(_QWORD *)v97 = v97 + 16;
  strcpy((char *)(v97 + 16), "address");
  *(_QWORD *)(v97 + 8) = 7;
  v147 = (unsigned __int64)v97;
  qsnprintf();
  *(_QWORD *)v137 = &v143;
  v143 = v145;
  v98 = strlen(s);
  *(_QWORD *)v139 = v98;
  v99 = v98;
  if ( v98 > 0xF )
  {
    v118 = (_QWORD *)std::string::_M_create();
    v143 = v118;
    v145[0] = *(_QWORD *)v139;
  }
  else
  {
    if ( v98 == 1 )
    {
      LOBYTE(v145[0]) = s[0];
      goto LABEL_53;
    }
    if ( !v98 )
    {
LABEL_53:
      v100 = v145;
      goto LABEL_54;
    }
    v118 = v145;
  }
  if ( v99 >= 8 )
  {
    *v118 = *(_QWORD *)s;
    *(_QWORD *)((char *)v118 + v99 - 8) = *(_QWORD *)&v163[v99];
    v119 = (unsigned __int64)(v118 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v120 = (char *)v118 - v119;
    v121 = (char *)(s - v120);
    v122 = ((_DWORD)v120 + v99) & 0xFFFFFFF8;
    if ( v122 >= 8 )
    {
      v123 = v122 & 0xFFFFFFF8;
      v124 = 0;
      do
      {
        v125 = v124;
        v124 += 8;
        *(_QWORD *)(v119 + v125) = *(_QWORD *)&v121[v125];
      }
      while ( v124 < v123 );
    }
  }
  else if ( (v99 & 4) != 0 )
  {
    *(_DWORD *)v118 = *(_DWORD *)s;
    *(_DWORD *)((char *)v118 + v99 - 4) = *(_DWORD *)&v163[v99 + 4];
  }
  else if ( v99 )
  {
    *(_BYTE *)v118 = s[0];
    if ( (v99 & 2) != 0 )
      *(_WORD *)((char *)v118 + v99 - 2) = *(_WORD *)&v163[v99 + 6];
  }
  v98 = *(_QWORD *)v139;
  v100 = v143;
LABEL_54:
  v144 = v98;
  *((_BYTE *)v100 + v98) = 0;
  v148 = 0;
  *(_QWORD *)v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v101 = (_QWORD *)operator new(0x20u);
  v102 = v143;
  v103 = v101 + 2;
  v104 = v144;
  *v101 = v101 + 2;
  if ( v102 == v145 )
  {
    v126 = v104 + 1;
    if ( (unsigned int)(v104 + 1) >= 8 )
    {
      v101[2] = v145[0];
      *(_QWORD *)((char *)v103 + v126 - 8) = *(_QWORD *)((char *)&v145[-1] + v126);
      v127 = (unsigned __int64)(v101 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v128 = (char *)v103 - v127;
      v129 = (char *)((char *)v145 - v128);
      if ( (((_DWORD)v128 + v126) & 0xFFFFFFF8) >= 8 )
      {
        v130 = ((_DWORD)v128 + v126) & 0xFFFFFFF8;
        v131 = 0;
        do
        {
          v132 = v131;
          v131 += 8;
          *(_QWORD *)(v127 + v132) = *(_QWORD *)&v129[v132];
        }
        while ( v131 < v130 );
      }
    }
    else if ( (v126 & 4) != 0 )
    {
      *((_DWORD *)v101 + 4) = v145[0];
      *(_DWORD *)((char *)v103 + v126 - 4) = *(_DWORD *)((char *)&v144 + v126 + 4);
    }
    else if ( (_DWORD)v104 != -1 )
    {
      *((_BYTE *)v101 + 16) = v145[0];
      if ( (v126 & 2) != 0 )
        *(_WORD *)((char *)v103 + v126 - 2) = *(_WORD *)((char *)&v144 + v126 + 6);
    }
  }
  else
  {
    *v101 = v102;
    v101[2] = v145[0];
  }
  v101[1] = v104;
  v143 = v145;
  LOBYTE(v145[0]) = 0;
  v144 = 0;
  *(_QWORD *)v138 = &v146;
  *(_OWORD *)v149 = (unsigned __int64)v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v159,
    (const __m128i *)&v146,
    2,
    1);
  v160 = 0;
  v150 = 0;
  *(_QWORD *)v151 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v150 = 3;
  v105 = operator new(0x20u);
  *(_QWORD *)v105 = v105 + 16;
  strcpy((char *)(v105 + 16), "name");
  *(_QWORD *)(v105 + 8) = 4;
  v152 = 0;
  *(_QWORD *)v153 = 0;
  *(_OWORD *)v151 = (unsigned __int64)v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v152 = 3;
  src = v140;
  *(_QWORD *)v134 = v141;
  v106 = (_QWORD *)operator new(0x20u);
  v107 = *(_QWORD *)v134;
  v108 = v106 + 2;
  v109 = v106;
  *v106 = v106 + 2;
  *(_QWORD *)v139 = v107;
  if ( v107 > 0xF )
  {
    v116 = std::string::_M_create();
    *v109 = v116;
    v108 = (_BYTE *)v116;
    v117 = *(_QWORD *)v139;
    si128 = (__m128i)(unsigned __int64)v109;
    v109[2] = *(_QWORD *)v139;
    v111 = v117 + 1;
    if ( v117 )
    {
      v112 = -1;
      if ( !v111 )
        goto LABEL_59;
      goto LABEL_58;
    }
LABEL_68:
    *v108 = *(_BYTE *)src;
    v112 = *(_QWORD *)v139;
    goto LABEL_59;
  }
  si128 = (__m128i)(unsigned __int64)v106;
  v111 = v107 + 1;
  if ( !v107 )
    goto LABEL_68;
LABEL_58:
  *(__m128i *)v134 = si128;
  memcpy(v108, src, v111);
  v112 = *(_QWORD *)v139;
  si128 = _mm_load_si128((const __m128i *)v134);
LABEL_59:
  v109[1] = v112;
  *(__m128i *)v153 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v161,
    (const __m128i *)&v150,
    2,
    1);
  v161[2] = 0;
  LOBYTE(v154) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v154) = 3;
  v113 = operator new(0x20u);
  strcpy((char *)(v113 + 16), "success");
  *(_QWORD *)v113 = v113 + 16;
  *(_QWORD *)(v113 + 8) = 7;
  v156 = 4;
  v157 = v135;
  v158 = 0;
  s2 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v162,
    (const __m128i *)&v154,
    2,
    1);
  v162[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v159,
    3);
  v114 = (__m128i *)v163;
  do
  {
    v114 = (__m128i *)((char *)v114 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v114 != &v159 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v143 != v145 )
    operator delete(v143, v145[0] + 1LL);
  if ( v140 != v142 )
    operator delete(v140, v142[0] + 1LL);
  return a1;
}

