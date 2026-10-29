_QWORD *__fastcall ida_mcp::tools::names::`anonymous namespace'::handle_get_name(
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
        __int64 a15,
        int a16,
        __int64 a17,
        int a18,
        __int64 a19,
        char a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        char a30,
        int a31,
        int a32,
        char a33,
        int a34,
        int a35,
        char *a36,
        int a37,
        int a38,
        char a39,
        char a40,
        int a41,
        char a42,
        int a43,
        int a44,
        char a45,
        char a46,
        int a47,
        char a48,
        int a49,
        int a50,
        char a51,
        char a52,
        int a53,
        char a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64,
        int a65,
        int a66,
        int a67,
        int a68,
        int a69,
        int a70,
        __int64 a71)
{
  __int64 v71; // rax
  __int64 v72; // rbp
  __int64 v73; // r13
  __int64 v74; // r14
  size_t v75; // rdx
  int v76; // eax
  unsigned __int64 v77; // r12
  unsigned __int64 v78; // rbp
  size_t v79; // rdx
  int v80; // eax
  char v81; // al
  char *v82; // rbp
  int *v83; // rax
  int *v84; // r13
  __int64 v85; // rax
  __m128i *v86; // rbx
  size_t v87; // rax
  unsigned int v88; // ebp
  _QWORD *v89; // rdx
  _QWORD *v90; // rax
  _QWORD *v91; // rdx
  _QWORD *v92; // rcx
  __int64 v93; // rsi
  __int64 v94; // rax
  char *v95; // r14
  __int64 *v96; // rax
  __int64 *v97; // r13
  size_t v98; // rax
  void *v99; // rcx
  size_t v100; // r8
  char v101; // al
  __m128i si128; // xmm0
  __int64 v103; // rax
  __int64 v104; // rax
  std::runtime_error *exception; // rax
  _QWORD *v107; // rax
  const char *nlist_demangled_name; // r13
  int v109; // esi
  int v110; // edi
  _QWORD *v111; // rbx
  size_t v112; // rax
  int v113; // edx
  int v114; // r9d
  void *v115; // rcx
  size_t v116; // r8
  char v117; // al
  _QWORD *v118; // rbp
  __int64 v119; // r13
  _QWORD *v120; // r15
  _QWORD *v121; // r14
  size_t v122; // rdx
  int v123; // eax
  unsigned __int64 v124; // rbx
  unsigned __int64 v125; // rdx
  char *v126; // rax
  char *v127; // rsi
  unsigned int v128; // ebp
  unsigned int v129; // ebp
  unsigned int v130; // eax
  __int64 v131; // rcx
  __int64 v132; // rax
  unsigned int v133; // edi
  unsigned __int64 v134; // r8
  char *v135; // rcx
  char *v136; // r9
  unsigned int v137; // edx
  unsigned int v138; // ecx
  __int64 v139; // rdi
  unsigned __int64 v140; // r13
  size_t v141; // rax
  int v142; // eax
  __int64 v143; // r13
  __int64 v144; // rax
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v146; // rdx
  char v147; // si
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  void *v151; // rdi
  unsigned __int64 v152; // r14
  size_t v153; // rax
  char *v154; // [rsp+8h] [rbp-240h]
  _QWORD *v155; // [rsp+8h] [rbp-240h]
  void *v156; // [rsp+8h] [rbp-240h]
  void *dest; // [rsp+40h] [rbp-208h]
  void *desta; // [rsp+40h] [rbp-208h]
  bool v160; // [rsp+56h] [rbp-1F2h]
  char v161[8]; // [rsp+68h] [rbp-1E0h]
  char v162[8]; // [rsp+68h] [rbp-1E0h]
  char v163[16]; // [rsp+70h] [rbp-1D8h] BYREF
  char *v164; // [rsp+80h] [rbp-1C8h]
  __int64 v165[3]; // [rsp+88h] [rbp-1C0h]
  void *v166; // [rsp+A0h] [rbp-1A8h]
  int v167[2]; // [rsp+A8h] [rbp-1A0h]
  _QWORD s1[2]; // [rsp+B0h] [rbp-198h] BYREF
  char v169[8]; // [rsp+C0h] [rbp-188h] BYREF
  __int64 v170[2]; // [rsp+C8h] [rbp-180h]
  char v171; // [rsp+D8h] [rbp-170h]
  __int64 v172[2]; // [rsp+E0h] [rbp-168h]
  char *v173; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v174[2]; // [rsp+F8h] [rbp-150h]
  char v175[16]; // [rsp+108h] [rbp-140h]
  int v176[2]; // [rsp+118h] [rbp-130h]
  char v177[8]; // [rsp+120h] [rbp-128h] BYREF
  int v178[4]; // [rsp+128h] [rbp-120h]
  char v179; // [rsp+138h] [rbp-110h]
  char v180[8]; // [rsp+140h] [rbp-108h]
  int v181[2]; // [rsp+148h] [rbp-100h]
  void *v182; // [rsp+150h] [rbp-F8h] BYREF
  __int128 s2; // [rsp+158h] [rbp-F0h] BYREF
  char v184; // [rsp+168h] [rbp-E0h]
  char v185[8]; // [rsp+170h] [rbp-D8h]
  int v186[2]; // [rsp+178h] [rbp-D0h]
  __m128i v187; // [rsp+180h] [rbp-C8h] BYREF
  int v188[2]; // [rsp+190h] [rbp-B8h]
  __int64 v189; // [rsp+198h] [rbp-B0h] BYREF
  int v190[2]; // [rsp+1A8h] [rbp-A0h]
  __int64 v191; // [rsp+1B0h] [rbp-98h] BYREF
  int v192[2]; // [rsp+1C0h] [rbp-88h]
  __int64 v193; // [rsp+1C8h] [rbp-80h] BYREF
  int v194[2]; // [rsp+1D8h] [rbp-70h]
  char s[40]; // [rsp+1E0h] [rbp-68h] BYREF
  unsigned __int64 v196; // [rsp+208h] [rbp-40h]

  v196 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v182 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x8554B);
  v71 = *(_QWORD *)(a2 + 8);
  v72 = *(_QWORD *)(v71 + 16);
  v73 = v71 + 8;
  if ( v72 )
  {
    v74 = v71 + 8;
    do
    {
      while ( 1 )
      {
        v77 = *(_QWORD *)(v72 + 40);
        if ( !v77 )
          break;
        v75 = 7;
        if ( v77 <= 7 )
          v75 = *(_QWORD *)(v72 + 40);
        v76 = memcmp(*(const void **)(v72 + 32), (char *)&s2 + 8, v75);
        if ( v76 || (v76 = v77 - 7, (__int64)(v77 - 7) <= 0x7FFFFFFF) )
        {
          if ( v76 < 0 )
            break;
        }
        v74 = v72;
        v72 = *(_QWORD *)(v72 + 16);
        if ( !v72 )
          goto LABEL_12;
      }
      v72 = *(_QWORD *)(v72 + 24);
    }
    while ( v72 );
LABEL_12:
    if ( v73 != v74 )
    {
      v78 = *(_QWORD *)(v74 + 40);
      if ( v78 )
      {
        v79 = 7;
        if ( v78 <= 7 )
          v79 = *(_QWORD *)(v74 + 40);
        v80 = memcmp((char *)&s2 + 8, *(const void **)(v74 + 32), v79);
        if ( v80 || (v80 = 7 - v78, (__int64)(7 - v78) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v80 >= 0 )
            v73 = v74;
        }
      }
      else
      {
        v73 = v74;
      }
    }
  }
  BYTE8(s2) = 0;
  v81 = *(_BYTE *)(v73 + 64);
  v182 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  if ( v81 != 3 )
    JUMPOUT(0x8557F);
  std::string::_M_assign();
  v82 = (char *)v182;
  v83 = __errno_location();
  *v83 = 0;
  v84 = v83;
  v154 = (char *)__isoc23_strtoull();
  if ( v82 == v164 || *v164 || (v160 = v154 + 1 == nullptr && *v84 == 34) )
  {
    if ( v182 != (char *)&s2 + 8 )
      operator delete(v182, *((_QWORD *)&s2 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0x8535F);
  }
  if ( v182 != (char *)&s2 + 8 )
    operator delete(v182, *((_QWORD *)&s2 + 1) + 1LL);
  *(_OWORD *)v165 = 0;
  v164 = nullptr;
  get_ea_name();
  v170[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v169[0] = 3;
  v85 = operator new(0x20u);
  strcpy((char *)(v85 + 16), "address");
  v86 = (__m128i *)s;
  *(_QWORD *)v85 = v85 + 16;
  *(_QWORD *)(v85 + 8) = 7;
  *(_OWORD *)v170 = (unsigned __int64)v85;
  qsnprintf();
  v166 = s1;
  v87 = strlen(s);
  *(_QWORD *)v163 = v87;
  v88 = v87;
  if ( v87 > 0xF )
  {
    v107 = (_QWORD *)std::string::_M_create();
    v166 = v107;
    s1[0] = *(_QWORD *)v163;
  }
  else
  {
    if ( v87 == 1 )
    {
      LOBYTE(s1[0]) = s[0];
      goto LABEL_29;
    }
    if ( !v87 )
    {
LABEL_29:
      v89 = s1;
      goto LABEL_30;
    }
    v107 = s1;
  }
  if ( v88 >= 8 )
  {
    *v107 = *(_QWORD *)s;
    *(_QWORD *)((char *)v107 + v88 - 8) = *(_QWORD *)((char *)v194 + v88);
    v125 = (unsigned __int64)(v107 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v126 = (char *)v107 - v125;
    v127 = (char *)(s - v126);
    v128 = ((_DWORD)v126 + v88) & 0xFFFFFFF8;
    if ( v128 >= 8 )
    {
      v129 = v128 & 0xFFFFFFF8;
      v130 = 0;
      do
      {
        v131 = v130;
        v130 += 8;
        *(_QWORD *)(v125 + v131) = *(_QWORD *)&v127[v131];
      }
      while ( v130 < v129 );
    }
  }
  else if ( (v88 & 4) != 0 )
  {
    *(_DWORD *)v107 = *(_DWORD *)s;
    *(_DWORD *)((char *)v107 + v88 - 4) = *(int *)((char *)&v194[1] + v88);
  }
  else if ( v88 )
  {
    *(_BYTE *)v107 = s[0];
    if ( (v88 & 2) != 0 )
      *(_WORD *)((char *)v107 + v88 - 2) = *(_WORD *)((char *)&v194[1] + v88 + 2);
  }
  v87 = *(_QWORD *)v163;
  v89 = v166;
LABEL_30:
  *(_QWORD *)v167 = v87;
  *((_BYTE *)v89 + v87) = 0;
  v171 = 0;
  v172[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v171 = 3;
  v90 = (_QWORD *)operator new(0x20u);
  v91 = v166;
  v92 = v90 + 2;
  v93 = *(_QWORD *)v167;
  *v90 = v90 + 2;
  if ( v91 == s1 )
  {
    v133 = v93 + 1;
    if ( (unsigned int)(v93 + 1) >= 8 )
    {
      v90[2] = s1[0];
      *(_QWORD *)((char *)v92 + v133 - 8) = *(_QWORD *)((char *)v167 + v133);
      v134 = (unsigned __int64)(v90 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v135 = (char *)v92 - v134;
      v136 = (char *)((char *)s1 - v135);
      if ( (((_DWORD)v135 + v133) & 0xFFFFFFF8) >= 8 )
      {
        v137 = ((_DWORD)v135 + v133) & 0xFFFFFFF8;
        v138 = 0;
        do
        {
          v139 = v138;
          v138 += 8;
          *(_QWORD *)(v134 + v139) = *(_QWORD *)&v136[v139];
        }
        while ( v138 < v137 );
      }
    }
    else if ( (v133 & 4) != 0 )
    {
      *((_DWORD *)v90 + 4) = s1[0];
      *(_DWORD *)((char *)v92 + v133 - 4) = *(int *)((char *)&v167[1] + v133);
    }
    else if ( (_DWORD)v93 != -1 )
    {
      *((_BYTE *)v90 + 16) = s1[0];
      if ( (v133 & 2) != 0 )
        *(_WORD *)((char *)v92 + v133 - 2) = *(_WORD *)((char *)&v167[1] + v133 + 2);
    }
  }
  else
  {
    *v90 = v91;
    v90[2] = s1[0];
  }
  v90[1] = v93;
  v166 = s1;
  LOBYTE(s1[0]) = 0;
  *(_QWORD *)v167 = 0;
  *(_OWORD *)v172 = (unsigned __int64)v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v187,
    (const __m128i *)v169,
    2,
    1);
  *(_QWORD *)v188 = 0;
  LOBYTE(v173) = 0;
  v174[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v173) = 3;
  v94 = operator new(0x20u);
  *(_QWORD *)v94 = v94 + 16;
  strcpy((char *)(v94 + 16), "name");
  *(_QWORD *)(v94 + 8) = 4;
  *(_OWORD *)v174 = (unsigned __int64)v94;
  if ( v165[0] <= 1uLL )
  {
    v97 = nullptr;
    v101 = 0;
    goto LABEL_38;
  }
  memset(v163, 0, sizeof(v163));
  v95 = v164;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = (__int64 *)operator new(0x20u);
  v97 = v96;
  *v96 = (__int64)(v96 + 2);
  if ( !v95 )
    JUMPOUT(0x853C2);
  dest = v96 + 2;
  v98 = strlen(v95);
  v99 = dest;
  *(_QWORD *)v161 = v98;
  v100 = v98;
  if ( v98 > 0xF )
  {
    desta = (void *)v98;
    v132 = std::string::_M_create();
    *v97 = v132;
    v99 = (void *)v132;
    v100 = (size_t)desta;
    v97[2] = *(_QWORD *)v161;
    goto LABEL_83;
  }
  if ( v98 == 1 )
  {
    *((_BYTE *)v97 + 16) = *v95;
    goto LABEL_37;
  }
  if ( v98 )
  {
LABEL_83:
    memcpy(v99, v95, v100);
    v98 = *(_QWORD *)v161;
    v99 = (void *)*v97;
  }
LABEL_37:
  v97[1] = v98;
  *((_BYTE *)v99 + v98) = 0;
  v101 = 3;
LABEL_38:
  v163[0] = v101;
  *(_QWORD *)&v163[8] = v97;
  si128 = _mm_load_si128((const __m128i *)v163);
  *(_QWORD *)v176 = 0;
  *(__m128i *)v175 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v189,
    (const __m128i *)&v173,
    2,
    1);
  *(_QWORD *)v190 = 0;
  v177[0] = 0;
  *(_QWORD *)v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177[0] = 3;
  v103 = operator new(0x20u);
  *(_QWORD *)v103 = v103 + 16;
  strcpy((char *)(v103 + 16), "is_public");
  *(_QWORD *)(v103 + 8) = 9;
  v179 = 4;
  *(_QWORD *)v180 = 0;
  *(_QWORD *)v181 = 0;
  *(_OWORD *)v178 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v191,
    (const __m128i *)v177,
    2,
    1);
  *(_QWORD *)v192 = 0;
  LOBYTE(v182) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v182) = 3;
  v104 = operator new(0x20u);
  strcpy((char *)(v104 + 16), "is_weak");
  *(_QWORD *)v104 = v104 + 16;
  *(_QWORD *)(v104 + 8) = 7;
  v184 = 4;
  *(_QWORD *)v185 = v160;
  *(_QWORD *)v186 = 0;
  s2 = (unsigned __int64)v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v193,
    (const __m128i *)&v182,
    2,
    1);
  *(_QWORD *)v194 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v187,
    4);
  do
  {
    v86 = (__m128i *)((char *)v86 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v86 != &v187 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v166 != s1 )
    operator delete(v166, s1[0] + 1LL);
  if ( (unsigned __int8)is_get_nlist_demangled_name_supported() )
  {
    if ( get_nlist_idx() != -1 )
    {
      nlist_demangled_name = (const char *)get_nlist_demangled_name();
      if ( nlist_demangled_name )
      {
        memset(v163, 0, sizeof(v163));
        v109 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v110 = (int)nlist_demangled_name;
        v111 = (_QWORD *)operator new(0x20u);
        *v111 = v111 + 2;
        v112 = strlen(nlist_demangled_name);
        v115 = v111 + 2;
        *(_QWORD *)v162 = v112;
        v116 = v112;
        if ( v112 > 0xF )
        {
          v156 = (void *)v112;
          v149 = std::string::_M_create();
          *v111 = v149;
          v115 = (void *)v149;
          v116 = (size_t)v156;
          v111[2] = *(_QWORD *)v162;
        }
        else
        {
          if ( v112 == 1 )
          {
            v113 = *(unsigned __int8 *)nlist_demangled_name;
            *((_BYTE *)v111 + 16) = v113;
            goto LABEL_64;
          }
          if ( !v112 )
            goto LABEL_64;
        }
        v110 = (int)v115;
        v109 = (int)nlist_demangled_name;
        memcpy(v115, nlist_demangled_name, v116);
        v112 = *(_QWORD *)v162;
        v115 = (void *)*v111;
LABEL_64:
        v111[1] = v112;
        *((_BYTE *)v115 + v112) = 0;
        strcpy((char *)s1, "demangled");
        v166 = s1;
        v117 = *(_BYTE *)a1;
        *(_QWORD *)v167 = 9;
        if ( v117 )
        {
          if ( v117 != 1 )
            ida_mcp::tools::names::`anonymous namespace'::handle_get_name(
              v110,
              v109,
              v113,
              (int)v115,
              v116,
              v114,
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
              a69,
              a70,
              a71);
          v118 = (_QWORD *)a1[1];
          v119 = v118[2];
          v120 = v118 + 1;
          v121 = v118 + 1;
          if ( v119 )
          {
            v155 = v111;
            do
            {
              v124 = *(_QWORD *)(v119 + 40);
              if ( !v124 )
                goto LABEL_76;
              v122 = 9;
              if ( v124 <= 9 )
                v122 = *(_QWORD *)(v119 + 40);
              if ( ((v123 = memcmp(*(const void **)(v119 + 32), s1, v122)) != 0
                 || (v123 = v124 - 9, (__int64)(v124 - 9) <= 0x7FFFFFFF))
                && v123 < 0 )
              {
LABEL_76:
                v119 = *(_QWORD *)(v119 + 24);
              }
              else
              {
                v121 = (_QWORD *)v119;
                v119 = *(_QWORD *)(v119 + 16);
              }
            }
            while ( v119 );
            v111 = v155;
            if ( v121 != v120 )
            {
              v140 = v121[5];
              if ( !v140 )
                goto LABEL_108;
              v141 = 9;
              if ( v140 <= 9 )
                v141 = v121[5];
              v142 = memcmp(s1, (const void *)v121[4], v141);
              if ( v142 || (v142 = 9 - v140, (__int64)(9 - v140) >= (__int64)0xFFFFFFFF80000000LL) )
              {
                if ( v142 >= 0 )
                  goto LABEL_108;
              }
            }
          }
        }
        else
        {
          *(_BYTE *)a1 = 1;
          v150 = operator new(0x30u);
          v121 = (_QWORD *)(v150 + 8);
          a1[1] = v150;
          v118 = (_QWORD *)v150;
          *(_DWORD *)(v150 + 8) = 0;
          v120 = (_QWORD *)(v150 + 8);
          *(_QWORD *)(v150 + 16) = 0;
          *(_QWORD *)(v150 + 24) = v150 + 8;
          *(_QWORD *)(v150 + 32) = v150 + 8;
          *(_QWORD *)(v150 + 40) = 0;
        }
        v143 = operator new(0x50u);
        *(_QWORD *)(v143 + 32) = v143 + 48;
        v144 = s1[0];
        *(_QWORD *)(v143 + 40) = 9;
        *(_QWORD *)(v143 + 48) = v144;
        LOWORD(v144) = s1[1];
        *(_QWORD *)(v143 + 64) = 0;
        *(_WORD *)(v143 + 56) = v144;
        *(_QWORD *)(v143 + 72) = 0;
        v166 = s1;
        *(_QWORD *)v167 = 0;
        LOBYTE(s1[0]) = 0;
        insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                   v118,
                                   v121,
                                   (const void *)(v143 + 48),
                                   9u);
        v121 = insert_hint_unique_pos;
        if ( v146 )
        {
          if ( v120 != (_QWORD *)v146 && !insert_hint_unique_pos )
          {
            v152 = *(_QWORD *)(v146 + 40);
            if ( v152 )
            {
              v153 = 9;
              if ( v152 <= 9 )
                v153 = *(_QWORD *)(v146 + 40);
              memcmp((const void *)(v143 + 48), *(const void **)(v146 + 32), v153);
            }
          }
          v121 = (_QWORD *)v143;
          std::_Rb_tree_insert_and_rebalance();
          ++v118[5];
        }
        else
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v151 = *(void **)(v143 + 32);
          if ( (void *)(v143 + 48) != v151 )
            operator delete(v151, *(_QWORD *)(v143 + 48) + 1LL);
          operator delete((void *)v143, 0x50u);
        }
        if ( v166 != s1 )
          operator delete(v166, s1[0] + 1LL);
LABEL_108:
        v147 = *((_BYTE *)v121 + 64);
        v148 = v121[9];
        *((_BYTE *)v121 + 64) = 3;
        v121[9] = v111;
        v163[0] = v147;
        *(_QWORD *)&v163[8] = v148;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
    }
  }
  if ( v164 )
  {
    v165[0] = 0;
    qfree();
  }
  return a1;
}

