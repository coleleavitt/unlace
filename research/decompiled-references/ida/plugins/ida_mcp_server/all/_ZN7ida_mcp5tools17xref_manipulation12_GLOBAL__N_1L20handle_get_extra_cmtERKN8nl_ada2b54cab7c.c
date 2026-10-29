__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_get_extra_cmt(
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
        int a11,
        __int64 a12,
        int a13,
        __int64 a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20,
        __int64 a21,
        char a22,
        __int64 a23,
        int a24,
        int a25,
        __int64 a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        char a34,
        int a35,
        int a36,
        char a37,
        int a38,
        int a39,
        char a40,
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
        char a52,
        int a53,
        int a54,
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
        __int64 a67)
{
  std::runtime_error *exception; // rbx
  char v68; // al
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  int v74; // edx
  char v75; // bl
  __int64 v76; // r14
  int v77; // r12d
  char *v78; // r15
  _QWORD *v79; // rax
  __int64 *v80; // rbx
  size_t v81; // rax
  void *v82; // rcx
  size_t v83; // r8
  __int64 v84; // rax
  __int8 v85; // si
  __int64 v86; // rax
  int v87; // r12d
  char *v88; // r15
  _QWORD *v89; // rax
  __int64 *v90; // rbx
  size_t v91; // rax
  void *v92; // rcx
  size_t v93; // r8
  __int64 v94; // rax
  __int64 v95; // r15
  __int8 v96; // si
  __int64 v97; // rax
  __int64 *v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  _QWORD *v107; // rax
  _QWORD *v108; // rdx
  _QWORD *v109; // rcx
  __int64 v110; // rsi
  __int64 *v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 *v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  char *v124; // rbx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  char v129; // dl
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  unsigned int v133; // edx
  unsigned __int64 v134; // rdi
  char *v135; // rcx
  char *v136; // r8
  unsigned int v137; // edx
  unsigned int v138; // edx
  unsigned int v139; // ecx
  __int64 v140; // r9
  int v141; // [rsp+0h] [rbp-228h]
  int v142; // [rsp+0h] [rbp-228h]
  int v143; // [rsp+0h] [rbp-228h]
  int v144; // [rsp+0h] [rbp-228h]
  int v145; // [rsp+0h] [rbp-228h]
  char v146; // [rsp+6h] [rbp-222h]
  char v147; // [rsp+6h] [rbp-222h]
  char v148; // [rsp+7h] [rbp-221h]
  char v149; // [rsp+7h] [rbp-221h]
  int v150; // [rsp+8h] [rbp-220h]
  int v151; // [rsp+8h] [rbp-220h]
  __int64 v152; // [rsp+8h] [rbp-220h]
  _BYTE *dest; // [rsp+10h] [rbp-218h]
  void *desta; // [rsp+10h] [rbp-218h]
  void *destb; // [rsp+10h] [rbp-218h]
  int destc; // [rsp+10h] [rbp-218h]
  __int64 v157; // [rsp+18h] [rbp-210h]
  __int64 v159; // [rsp+28h] [rbp-200h]
  int v160; // [rsp+50h] [rbp-1D8h]
  size_t v161; // [rsp+58h] [rbp-1D0h]
  __int64 v162; // [rsp+60h] [rbp-1C8h]
  int v163; // [rsp+68h] [rbp-1C0h]
  __int64 v164; // [rsp+70h] [rbp-1B8h]
  char v165; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v166; // [rsp+88h] [rbp-1A0h]
  __m128i v167; // [rsp+90h] [rbp-198h] BYREF
  char *s; // [rsp+A0h] [rbp-188h] BYREF
  __int128 v169; // [rsp+A8h] [rbp-180h]
  void *v170; // [rsp+C0h] [rbp-168h] BYREF
  __int64 v171; // [rsp+C8h] [rbp-160h]
  _QWORD v172[2]; // [rsp+D0h] [rbp-158h] BYREF
  char v173; // [rsp+E0h] [rbp-148h] BYREF
  __int128 v174; // [rsp+E8h] [rbp-140h]
  char v175; // [rsp+F8h] [rbp-130h]
  __int128 v176; // [rsp+100h] [rbp-128h] BYREF
  char v177; // [rsp+110h] [rbp-118h] BYREF
  __int128 v178; // [rsp+118h] [rbp-110h] BYREF
  __int64 v179; // [rsp+138h] [rbp-F0h]
  void *v180; // [rsp+140h] [rbp-E8h] BYREF
  __int128 v181; // [rsp+148h] [rbp-E0h] BYREF
  __int64 v182; // [rsp+168h] [rbp-C0h]
  _QWORD v183[3]; // [rsp+170h] [rbp-B8h] BYREF
  _QWORD v184[3]; // [rsp+188h] [rbp-A0h] BYREF
  _QWORD v185[3]; // [rsp+1A0h] [rbp-88h] BYREF
  char v186; // [rsp+1B8h] [rbp-70h] BYREF
  char v187[40]; // [rsp+1C0h] [rbp-68h] BYREF
  unsigned __int64 v188; // [rsp+1E8h] [rbp-40h]

  v188 = __readfsqword(0x28u);
  BYTE8(v181) = 0;
  v180 = (char *)&v181 + 8;
  v68 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v181 = 0;
  if ( v68 != 3 )
    ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_get_extra_cmt(
      a2,
      (__int64)"address",
      v69,
      v70,
      v71,
      v72,
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
      a67);
  std::string::_M_assign();
  v73 = ida_mcp::parse_ea(v180, v181);
  v163 = v74;
  v75 = v74;
  v162 = v73;
  if ( v180 != (char *)&v181 + 8 )
    operator delete(v180, *((_QWORD *)&v181 + 1) + 1LL);
  if ( !v75 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v165 = 0;
  v76 = 0;
  v148 = 0;
  v166 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v77 = 1000;
  v146 = 0;
  v157 = 0;
  while ( 1 )
  {
    s = nullptr;
    v169 = 0;
    if ( get_extra_cmt() < 0 )
      break;
    v78 = s;
    if ( !(_QWORD)v169 )
      v78 = _qstring<char>::c_str(void)const::nullstr;
    v167 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v79 = (_QWORD *)operator new(0x20u);
    v80 = v79;
    *v79 = v79 + 2;
    if ( !v78 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    dest = v79 + 2;
    v81 = strlen(v78);
    v82 = dest;
    v161 = v81;
    v83 = v81;
    if ( v81 > 0xF )
    {
      dest = (_BYTE *)v81;
      v128 = std::string::_M_create();
      *v80 = v128;
      v82 = (void *)v128;
      v83 = (size_t)dest;
      v80[2] = v161;
LABEL_47:
      memcpy(v82, v78, v83);
      v81 = v161;
      v82 = (void *)*v80;
LABEL_15:
      v80[1] = v81;
      *((_BYTE *)v82 + v81) = 0;
      if ( !v148 )
        goto LABEL_16;
      goto LABEL_44;
    }
    if ( v81 == 1 )
    {
      *((_BYTE *)v80 + 16) = *v78;
      goto LABEL_15;
    }
    if ( v81 )
      goto LABEL_47;
    v80[1] = 0;
    *dest = 0;
    if ( !v148 )
    {
LABEL_16:
      v84 = operator new(0x18u);
      *(_QWORD *)(v84 + 16) = 0;
      v76 = v84;
      *(_OWORD *)v84 = 0;
LABEL_17:
      v167.m128i_i8[0] = 3;
      v167.m128i_i64[1] = (__int64)v80;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v85 = v167.m128i_i8[0];
      v86 = v167.m128i_i64[1];
      goto LABEL_18;
    }
LABEL_44:
    v126 = *(_QWORD *)(v76 + 8);
    if ( v126 == *(_QWORD *)(v76 + 16) )
      goto LABEL_17;
    v167.m128i_i8[0] = 3;
    v127 = v126 + 16;
    v85 = 0;
    v167.m128i_i64[1] = (__int64)v80;
    *(__m128i *)(v127 - 16) = _mm_load_si128(&v167);
    *(_QWORD *)(v76 + 8) = v127;
    v86 = 0;
LABEL_18:
    v167.m128i_i8[0] = v85;
    v167.m128i_i64[1] = v86;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( s )
    {
      *(_QWORD *)&v169 = 0;
      ++v77;
      qfree();
      if ( v77 == 2000 )
        goto LABEL_20;
    }
    else if ( ++v77 == 2000 )
    {
      goto LABEL_20;
    }
    v148 = 2;
  }
  if ( s )
  {
    *(_QWORD *)&v169 = 0;
    qfree();
  }
LABEL_20:
  v87 = 2000;
  while ( 2 )
  {
    s = nullptr;
    v169 = 0;
    if ( get_extra_cmt() >= 0 )
    {
      v88 = s;
      if ( !(_QWORD)v169 )
        v88 = _qstring<char>::c_str(void)const::nullstr;
      v167 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v89 = (_QWORD *)operator new(0x20u);
      v90 = v89;
      *v89 = v89 + 2;
      if ( !v88 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      dest = v89 + 2;
      v91 = strlen(v88);
      v92 = dest;
      v161 = v91;
      v93 = v91;
      if ( v91 > 0xF )
      {
        dest = (_BYTE *)v91;
        v132 = std::string::_M_create();
        *v90 = v132;
        v92 = (void *)v132;
        v93 = (size_t)dest;
        v90[2] = v161;
LABEL_54:
        memcpy(v92, v88, v93);
        v91 = v161;
        v92 = (void *)*v90;
LABEL_30:
        v90[1] = v91;
        *((_BYTE *)v92 + v91) = 0;
        if ( v146 )
          goto LABEL_51;
      }
      else
      {
        if ( v91 != 1 )
        {
          if ( !v91 )
            goto LABEL_30;
          goto LABEL_54;
        }
        v129 = *v88;
        v90[1] = 1;
        *((_BYTE *)v90 + 16) = v129;
        dest[1] = 0;
        if ( v146 )
        {
LABEL_51:
          v130 = *(_QWORD *)(v157 + 8);
          if ( v130 != *(_QWORD *)(v157 + 16) )
          {
            v167.m128i_i8[0] = 3;
            v131 = v130 + 16;
            v96 = 0;
            v167.m128i_i64[1] = (__int64)v90;
            *(__m128i *)(v131 - 16) = _mm_load_si128(&v167);
            *(_QWORD *)(v157 + 8) = v131;
            v97 = 0;
            goto LABEL_33;
          }
          v95 = v157;
LABEL_32:
          v167.m128i_i8[0] = 3;
          v167.m128i_i64[1] = (__int64)v90;
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
          v157 = v95;
          v96 = v167.m128i_i8[0];
          v97 = v167.m128i_i64[1];
LABEL_33:
          v167.m128i_i8[0] = v96;
          v167.m128i_i64[1] = v97;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( s )
          {
            *(_QWORD *)&v169 = 0;
            ++v87;
            qfree();
            if ( v87 == 3000 )
              goto LABEL_35;
          }
          else if ( ++v87 == 3000 )
          {
            goto LABEL_35;
          }
          v146 = 2;
          continue;
        }
      }
      v94 = operator new(0x18u);
      *(_QWORD *)(v94 + 16) = 0;
      v95 = v94;
      *(_OWORD *)v94 = 0;
      goto LABEL_32;
    }
    break;
  }
  if ( s )
  {
    *(_QWORD *)&v169 = 0;
    qfree();
  }
LABEL_35:
  v173 = 0;
  *(_QWORD *)&v174 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v173 = 3;
  v98 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v98, "address", v99, v100, v101, v102, v141, (int)&s, (__int64)dest);
  v174 = (unsigned __int64)v98;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v170,
    v187,
    v103,
    v104,
    v105,
    v106,
    v142,
    v150,
    (__int64)desta);
  v175 = 0;
  *(_QWORD *)&v176 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v175 = 3;
  v107 = (_QWORD *)operator new(0x20u);
  v108 = v170;
  v109 = v107 + 2;
  v110 = v171;
  *v107 = v107 + 2;
  if ( v108 == v172 )
  {
    v133 = v110 + 1;
    if ( (unsigned int)(v110 + 1) >= 8 )
    {
      v107[2] = v172[0];
      *(_QWORD *)((char *)v109 + v133 - 8) = *(_QWORD *)((char *)&v172[-1] + v133);
      v134 = (unsigned __int64)(v107 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v135 = (char *)v109 - v134;
      v136 = (char *)((char *)v172 - v135);
      v137 = ((_DWORD)v135 + v133) & 0xFFFFFFF8;
      if ( v137 >= 8 )
      {
        v138 = v137 & 0xFFFFFFF8;
        v139 = 0;
        do
        {
          v140 = v139;
          v139 += 8;
          *(_QWORD *)(v134 + v140) = *(_QWORD *)&v136[v140];
        }
        while ( v139 < v138 );
      }
    }
    else if ( (v133 & 4) != 0 )
    {
      *((_DWORD *)v107 + 4) = v172[0];
      *(_DWORD *)((char *)v109 + v133 - 4) = *(_DWORD *)((char *)&v171 + v133 + 4);
    }
    else if ( (_DWORD)v110 != -1 )
    {
      *((_BYTE *)v107 + 16) = v172[0];
      if ( (v133 & 2) != 0 )
        *(_WORD *)((char *)v109 + v133 - 2) = *(_WORD *)((char *)&v171 + v133 + 6);
    }
  }
  else
  {
    *v107 = v108;
    v107[2] = v172[0];
  }
  v107[1] = v110;
  v170 = v172;
  LOBYTE(v172[0]) = 0;
  v171 = 0;
  v176 = (unsigned __int64)v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v183,
    (const __m128i *)&v173,
    2,
    1);
  v183[2] = 0;
  v177 = 0;
  *(_QWORD *)&v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v111 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v111,
    "anterior",
    v112,
    v113,
    v114,
    v115,
    v143,
    (int)&v176,
    (__int64)&v178);
  LOBYTE(v164) = v149;
  v178 = (unsigned __int64)v111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v179 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v184,
    (const __m128i *)&v177,
    2,
    1);
  v184[2] = 0;
  LOBYTE(v180) = 0;
  *(_QWORD *)&v181 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v180) = 3;
  v116 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v116, "posterior", v117, v118, v119, v120, v144, v151, (__int64)destb);
  v181 = (unsigned __int64)v116;
  v165 = v147;
  v166 = v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v185,
    (const __m128i *)&v180,
    2,
    1);
  v185[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v183,
    3,
    v121,
    v122,
    v123,
    v145,
    v152,
    destc,
    v157,
    (int)&v180,
    (int)a1,
    (__int64)&v177,
    (int)&v165,
    (int)&v173,
    (int)&v170,
    v160,
    v161,
    v162,
    v163,
    v164);
  v124 = &v186;
  do
  {
    v124 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v124 != (char *)v183 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v170 != v172 )
    operator delete(v170, v172[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v159;
}

