_QWORD *__fastcall ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_get_xpc_services(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        char a24,
        __int64 a25,
        char a26,
        char a27,
        char a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
        int a36,
        int a37,
        __int64 a38,
        __int64 a39,
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
        char a50,
        int a51,
        int a52,
        char a53,
        int a54,
        int a55,
        char a56,
        int a57,
        int a58,
        char a59,
        char a60,
        int a61,
        char a62,
        int a63,
        int a64,
        char a65,
        int a66,
        int a67,
        char a68,
        int a69,
        int a70,
        int a71,
        int a72,
        int a73,
        int a74,
        int a75,
        int a76,
        char a77,
        int a78,
        int a79,
        int a80,
        int a81,
        int a82,
        __int64 a83)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  __int64 func; // rax
  __int64 v85; // rax
  size_t v86; // rax
  unsigned int v87; // ebp
  _QWORD *v88; // rdx
  _QWORD *v89; // rax
  _QWORD *v90; // rdx
  _QWORD *v91; // rcx
  size_t v92; // rsi
  __int64 v93; // rax
  char *v94; // r12
  _QWORD *v95; // rax
  _BYTE *v96; // r14
  __int64 *v97; // rbp
  size_t v98; // rax
  size_t v99; // rcx
  __int8 v100; // al
  __m128i v101; // xmm0
  __int64 v102; // rax
  const char *v103; // r12
  __int64 *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  void *v109; // r13
  __int64 *v110; // rbp
  size_t v111; // rax
  size_t v112; // r14
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  _QWORD *v117; // r13
  __int8 v118; // si
  __int64 v119; // rax
  __m128i *v120; // rbp
  _QWORD *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned int v124; // edi
  unsigned __int64 v125; // rdx
  char *v126; // rax
  char *v127; // rbx
  unsigned int v128; // ebp
  unsigned int v129; // ebp
  unsigned int v130; // eax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rax
  unsigned __int64 v134; // r8
  char *v135; // rcx
  char *v136; // r9
  unsigned int v137; // edx
  unsigned int v138; // ecx
  __int64 v139; // rdi
  __int64 *v140; // rbp
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rax
  __int64 *v146; // rbp
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  int v152; // [rsp+0h] [rbp-2A8h]
  int v153; // [rsp+0h] [rbp-2A8h]
  int v154; // [rsp+8h] [rbp-2A0h]
  int v155; // [rsp+8h] [rbp-2A0h]
  __int64 text; // [rsp+10h] [rbp-298h]
  __int64 v157; // [rsp+10h] [rbp-298h]
  int v158; // [rsp+18h] [rbp-290h]
  char v159; // [rsp+1Fh] [rbp-289h]
  char v160; // [rsp+1Fh] [rbp-289h]
  size_t v161; // [rsp+28h] [rbp-280h]
  _QWORD *v162; // [rsp+50h] [rbp-258h]
  int v163; // [rsp+68h] [rbp-240h]
  _QWORD *v164; // [rsp+70h] [rbp-238h]
  __m128i v165; // [rsp+A0h] [rbp-208h] BYREF
  __m128i v166; // [rsp+B0h] [rbp-1F8h] BYREF
  char *v167; // [rsp+C0h] [rbp-1E8h]
  __int128 v168; // [rsp+C8h] [rbp-1E0h]
  __int64 v169; // [rsp+E0h] [rbp-1C8h]
  __int128 v170; // [rsp+E8h] [rbp-1C0h]
  const char *v171; // [rsp+100h] [rbp-1A8h]
  __int128 v172; // [rsp+108h] [rbp-1A0h]
  void *v173; // [rsp+120h] [rbp-188h] BYREF
  size_t v174; // [rsp+128h] [rbp-180h]
  _QWORD v175[2]; // [rsp+130h] [rbp-178h] BYREF
  char v176; // [rsp+160h] [rbp-148h] BYREF
  __int128 v177; // [rsp+168h] [rbp-140h] BYREF
  char v178; // [rsp+178h] [rbp-130h]
  __int128 v179; // [rsp+180h] [rbp-128h] BYREF
  char v180; // [rsp+190h] [rbp-118h] BYREF
  __int128 v181; // [rsp+198h] [rbp-110h] BYREF
  __m128i v182; // [rsp+1A8h] [rbp-100h]
  __int64 v183; // [rsp+1B8h] [rbp-F0h]
  char v184; // [rsp+1C0h] [rbp-E8h] BYREF
  __int128 v185; // [rsp+1C8h] [rbp-E0h] BYREF
  char v186; // [rsp+1D8h] [rbp-D0h]
  __int128 v187; // [rsp+1E0h] [rbp-C8h] BYREF
  __m128i v188; // [rsp+1F0h] [rbp-B8h] BYREF
  __int64 v189; // [rsp+200h] [rbp-A8h]
  __int64 v190; // [rsp+208h] [rbp-A0h] BYREF
  __int64 v191; // [rsp+218h] [rbp-90h]
  _QWORD v192[3]; // [rsp+220h] [rbp-88h] BYREF
  char v193[8]; // [rsp+238h] [rbp-70h] BYREF
  char s[40]; // [rsp+240h] [rbp-68h] BYREF
  unsigned __int64 v195; // [rsp+268h] [rbp-40h]

  v164 = a1;
  v195 = __readfsqword(0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v159 = 0;
  v162 = nullptr;
  if ( getinf() != -1 )
  {
    while ( 1 )
    {
      text = find_text();
      if ( text == -1 )
        break;
      func = get_func();
      v167 = nullptr;
      v168 = 0;
      if ( func )
        get_func_name();
      v169 = 0;
      v171 = nullptr;
      v170 = 0;
      v172 = 0;
      generate_disasm_line();
      tag_remove();
      v176 = 0;
      *(_QWORD *)&v177 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v176 = 3;
      v85 = operator new(0x20u);
      strcpy((char *)(v85 + 16), "address");
      *(_QWORD *)v85 = v85 + 16;
      *(_QWORD *)(v85 + 8) = 7;
      v177 = (unsigned __int64)v85;
      qsnprintf();
      v173 = v175;
      v86 = strlen(s);
      v166.m128i_i64[0] = v86;
      v87 = v86;
      if ( v86 > 0xF )
      {
        v121 = (_QWORD *)std::string::_M_create();
        v173 = v121;
        v175[0] = v166.m128i_i64[0];
      }
      else
      {
        if ( v86 == 1 )
        {
          LOBYTE(v175[0]) = s[0];
LABEL_8:
          v88 = v175;
          goto LABEL_9;
        }
        if ( !v86 )
          goto LABEL_8;
        v121 = v175;
      }
      if ( v87 >= 8 )
      {
        *v121 = *(_QWORD *)s;
        *(_QWORD *)((char *)v121 + v87 - 8) = *(_QWORD *)&v193[v87];
        v125 = (unsigned __int64)(v121 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v126 = (char *)v121 - v125;
        v127 = (char *)(s - v126);
        v128 = ((_DWORD)v126 + v87) & 0xFFFFFFF8;
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
      else if ( (v87 & 4) != 0 )
      {
        *(_DWORD *)v121 = *(_DWORD *)s;
        *(_DWORD *)((char *)v121 + v87 - 4) = *(_DWORD *)&v193[v87 + 4];
      }
      else if ( v87 )
      {
        *(_BYTE *)v121 = s[0];
        if ( (v87 & 2) != 0 )
          *(_WORD *)((char *)v121 + v87 - 2) = *(_WORD *)&v193[v87 + 6];
      }
      v86 = v166.m128i_i64[0];
      v88 = v173;
LABEL_9:
      v174 = v86;
      *((_BYTE *)v88 + v86) = 0;
      v178 = 0;
      *(_QWORD *)&v179 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v178 = 3;
      v89 = (_QWORD *)operator new(0x20u);
      v90 = v173;
      v91 = v89 + 2;
      v92 = v174;
      *v89 = v89 + 2;
      if ( v90 == v175 )
      {
        v124 = v92 + 1;
        if ( (unsigned int)(v92 + 1) >= 8 )
        {
          v89[2] = v175[0];
          *(_QWORD *)((char *)v91 + v124 - 8) = *(_QWORD *)((char *)&v175[-1] + v124);
          v134 = (unsigned __int64)(v89 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v135 = (char *)v91 - v134;
          v136 = (char *)((char *)v175 - v135);
          if ( (((_DWORD)v135 + v124) & 0xFFFFFFF8) >= 8 )
          {
            v137 = ((_DWORD)v135 + v124) & 0xFFFFFFF8;
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
        else if ( (v124 & 4) != 0 )
        {
          *((_DWORD *)v89 + 4) = v175[0];
          *(_DWORD *)((char *)v91 + v124 - 4) = *(_DWORD *)((char *)&v174 + v124 + 4);
        }
        else if ( (_DWORD)v92 != -1 )
        {
          *((_BYTE *)v89 + 16) = v175[0];
          if ( (v124 & 2) != 0 )
            *(_WORD *)((char *)v91 + v124 - 2) = *(_WORD *)((char *)&v174 + v124 + 6);
        }
      }
      else
      {
        *v89 = v90;
        v89[2] = v175[0];
      }
      v89[1] = v92;
      v173 = v175;
      v174 = 0;
      LOBYTE(v175[0]) = 0;
      v179 = (unsigned __int64)v89;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v188,
        (const __m128i *)&v176);
      v189 = 0;
      v180 = 0;
      *(_QWORD *)&v181 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v180 = 3;
      v93 = operator new(0x20u);
      *(_QWORD *)v93 = v93 + 16;
      strcpy((char *)(v93 + 16), "function");
      *(_QWORD *)(v93 + 8) = 8;
      v181 = (unsigned __int64)v93;
      if ( (unsigned __int64)v168 > 1 )
      {
        v165 = 0u;
        v94 = v167;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v95 = (_QWORD *)operator new(0x20u);
        v96 = v95 + 2;
        v97 = v95;
        *v95 = v95 + 2;
        if ( !v94 )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        v98 = strlen(v94);
        v166.m128i_i64[0] = v98;
        v99 = v98;
        if ( v98 > 0xF )
        {
          v161 = v98;
          v123 = std::string::_M_create();
          *v97 = v123;
          v96 = (_BYTE *)v123;
          v99 = v161;
          v97[2] = v166.m128i_i64[0];
        }
        else
        {
          if ( v98 == 1 )
          {
            *((_BYTE *)v97 + 16) = *v94;
            goto LABEL_16;
          }
          if ( !v98 )
          {
LABEL_16:
            v97[1] = v98;
            v96[v98] = 0;
            v100 = 3;
            goto LABEL_17;
          }
        }
        memcpy(v96, v94, v99);
        v98 = v166.m128i_i64[0];
        v96 = (_BYTE *)*v97;
        goto LABEL_16;
      }
      v97 = nullptr;
      v100 = 0;
LABEL_17:
      v165.m128i_i8[0] = v100;
      v165.m128i_i64[1] = (__int64)v97;
      v101 = _mm_load_si128(&v165);
      v183 = 0;
      v182 = v101;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v190,
        (const __m128i *)&v180);
      v191 = 0;
      v184 = 0;
      *(_QWORD *)&v185 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v184 = 3;
      v102 = operator new(0x20u);
      strcpy((char *)(v102 + 16), "disassembly");
      *(_QWORD *)v102 = v102 + 16;
      *(_QWORD *)(v102 + 8) = 11;
      v185 = (unsigned __int64)v102;
      if ( (_QWORD)v172 )
        v103 = v171;
      else
        v103 = _qstring<char>::c_str(void)const::nullstr;
      v186 = 0;
      *(_QWORD *)&v187 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v186 = 3;
      v104 = (__int64 *)operator new(0x20u);
      v109 = v104 + 2;
      v110 = v104;
      *v104 = (__int64)(v104 + 2);
      if ( !v103 )
        ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_get_xpc_services(
          32,
          0,
          v105,
          v106,
          v107,
          v108,
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
          a71,
          a72,
          a73,
          a74,
          a75,
          a76,
          a77,
          a78,
          a79,
          a80,
          a81,
          a82,
          a83);
      v111 = strlen(v103);
      v166.m128i_i64[0] = v111;
      v112 = v111;
      if ( v111 > 0xF )
      {
        v122 = std::string::_M_create();
        *v110 = v122;
        v109 = (void *)v122;
        v110[2] = v166.m128i_i64[0];
      }
      else
      {
        if ( v111 == 1 )
        {
          *((_BYTE *)v110 + 16) = *v103;
          goto LABEL_23;
        }
        if ( !v111 )
          goto LABEL_23;
      }
      memcpy(v109, v103, v112);
      v111 = v166.m128i_i64[0];
      v109 = (void *)*v110;
LABEL_23:
      v110[1] = v111;
      *((_BYTE *)v109 + v111) = 0;
      v187 = (unsigned __int64)v110;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v192,
        (const __m128i *)&v184);
      v192[2] = 0;
      v166.m128i_i8[0] = 0;
      v166.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v166,
        (__int64)&v188,
        3,
        v113,
        v114,
        v115,
        (int)&v188,
        3,
        text,
        v158,
        (int)&v181,
        (int)&v185,
        (__int64)&v187,
        (int)&v177,
        (int)&v179,
        (int)&v173,
        (int)v162,
        (char)&v176,
        (__int64)&v180,
        v163,
        (__int64)v164);
      v163 = v166.m128i_i32[2];
      if ( v160 )
      {
        if ( v160 != 2 )
        {
          exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
            exception,
            308);
          std::string::_M_dispose();
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        v132 = v162[1];
        if ( v132 != v162[2] )
        {
          v133 = v132 + 16;
          v118 = 0;
          *(__m128i *)(v133 - 16) = _mm_load_si128(&v166);
          v162[1] = v133;
          v119 = 0;
          goto LABEL_26;
        }
        v117 = v162;
      }
      else
      {
        v116 = operator new(0x18u);
        *(_QWORD *)(v116 + 16) = 0;
        v117 = (_QWORD *)v116;
        *(_OWORD *)v116 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v162 = v117;
      v118 = v166.m128i_i8[0];
      v119 = v166.m128i_i64[1];
LABEL_26:
      v166.m128i_i8[0] = v118;
      v120 = (__m128i *)v193;
      v166.m128i_i64[1] = v119;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      do
      {
        v120 = (__m128i *)((char *)v120 - 24);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v120 != &v188 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v173 != v175 )
        operator delete(v173, v175[0] + 1LL);
      getinf();
      if ( next_head() == -1 )
      {
        if ( v171 )
        {
          *(_QWORD *)&v172 = 0;
          qfree();
        }
        if ( v169 )
        {
          *(_QWORD *)&v170 = 0;
          qfree();
        }
        if ( v167 )
        {
          *(_QWORD *)&v168 = 0;
          qfree();
        }
        v159 = 2;
        break;
      }
      if ( v171 )
      {
        *(_QWORD *)&v172 = 0;
        qfree();
      }
      if ( v169 )
      {
        *(_QWORD *)&v170 = 0;
        qfree();
      }
      if ( v167 )
      {
        *(_QWORD *)&v168 = 0;
        qfree();
      }
      v159 = 2;
    }
  }
  v180 = 0;
  *(_QWORD *)&v181 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v180 = 3;
  v140 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v140, "xpc_service_count", v141, v142, v143, v144, v152, v154, text);
  v181 = (unsigned __int64)v140;
  if ( v159 == 2 )
    v145 = (__int64)(v162[1] - *v162) >> 4;
  else
    v145 = v159 != 0;
  v182.m128i_i8[0] = 6;
  v182.m128i_i64[1] = v145;
  v183 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v188,
    (const __m128i *)&v180);
  v189 = 0;
  v184 = 0;
  *(_QWORD *)&v185 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v184 = 3;
  v146 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v146, "xpc_services", v147, v148, v149, v150, v153, v155, v157);
  v185 = (unsigned __int64)v146;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *((_QWORD *)&v187 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v190,
    (const __m128i *)&v184);
  v191 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v164,
    &v188);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v164;
}

